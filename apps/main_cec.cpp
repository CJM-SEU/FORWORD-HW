#include "sweeper/sweeper_engine.hpp"

#include "sweeper/config.hpp"

#include "smt-switch/bitwuzla_factory.h"
#include "frontend/btor2_encoder.h"
#include "framework/ts.h"

#include <set>
#include <iostream>

using namespace sweeper;
using namespace wasim;

int main(int argc, char* argv[])
{
    silence_cout();
    Config config;
    if (!parse_arguments(argc, argv, config)) return EXIT_FAILURE;

    if (config.debug) {
        std::cout << "==== DEBUG ====\n"
                  << "BTOR2 File           : " << config.btor2_file << "\n"
                  << "Simulation Iterations: " << config.simulation_iterations << "\n"
                  << "Solver Timeout (ms)  : " << config.solver_timeout_ms << "\n"
                  << "Property Timeout (ms): " << config.property_check_timeout_ms << "\n"
                  << "Dump SMT Enabled     : " << (config.dump_smt ? "Yes" : "No") << "\n"
                  << "Debug Enabled        : " << (config.debug ? "Yes" : "No") << "\n";
    }

    auto program_start_time = std::chrono::high_resolution_clock::now();
    sweeper::last_time_point = program_start_time;
//创建solver
    smt::SmtSolver solver = smt::BitwuzlaSolverFactory::create(false);
    solver->set_logic("QF_UFBV");
    solver->set_opt("incremental", "true");
    solver->set_opt("produce-models", "true");
    solver->set_opt("produce-unsat-assumptions", "true");

// 解析 BTOR2
    TransitionSystem sts(solver);
    BTOR2Encoder btor_parser(config.btor2_file, sts, "a::");

    restore_cout();
//获得propvec
    const auto & propvec = sts.prop();
    if (propvec.empty()) {
        std::cerr << "[ERROR] No property found.\n";
        return EXIT_FAILURE;
    }

//获得constraints
    smt::TermVec constraints;
    for (const auto & constraint_pair : sts.constraints()) {
        constraints.push_back(constraint_pair.first);
    }

    solver->assert_formula(sts.init());
    for (const auto & c : constraints) {
        solver->assert_formula(c);
    }
//运行sweeper
    sweeper::SweeperOptions sweeper_opts;
    sweeper_opts.find_unsat = config.find_unsat;
    sweeper_opts.find_sat = config.find_sat;
    sweeper_opts.systems = { &sts };

    int idx = 0;
    //对每一个root进行操作
    for (auto root : propvec) {
        auto pre_start = std::chrono::high_resolution_clock::now();
        int total_nodes = 0;
        count_total_nodes(root, total_nodes);
        std::cout << "[Property " << idx << "] total nodes: " << total_nodes << "\n";

        auto sweeper_stats = sweeper::sweeper(root, solver, config, sweeper_opts, constraints);
        std::cout << "[Ordering Time] " << sweeper_stats.ordering_time.count()/1000.0 << " s\n";

        solver->push();
        solver->assert_formula(solver->make_term(smt::Not, root));
        auto solving_start = std::chrono::high_resolution_clock::now();
        auto res = solver->check_sat();
        auto solving_end  = std::chrono::high_resolution_clock::now();
        solver->pop();

        auto pre_time_ms = std::chrono::duration_cast<std::chrono::milliseconds>(solving_start - pre_start).count();
        auto solve_time_ms = std::chrono::duration_cast<std::chrono::milliseconds>(solving_end - solving_start).count();

        std::cout << "[Pre-processing] " << pre_time_ms/1000.0 << " s\n";
        std::cout << "[Solving] " << solve_time_ms/1000.0 << " s\n";

        if (res.is_unsat())      std::cout << "[RESULT] UNSAT\n";
        else if (res.is_sat())   std::cout << "[RESULT] SAT\n";
        else                     std::cout << "UNKNOWN - likely timed out\n";

        std::cout << "Sweeping: " << sweeper_stats.solver_queries
                  << ", [UNSAT] " << sweeper_stats.unsat_count << " ("
                  << sweeper_stats.total_unsat_time.count()/1000.0 << " s), "
                  << "[SAT] " << sweeper_stats.sat_count << " ("
                  << sweeper_stats.total_sat_time.count()/1000.0 << " s)\n";

        ++idx;
    }

    std::cout << "All property done\n";
    return EXIT_SUCCESS;
}