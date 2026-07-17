/***
 * Bitwuzla: Satisfiability Modulo Theories (SMT) solver.
 *
 * Copyright (C) 2023 by the authors listed in the AUTHORS file at
 * https://github.com/bitwuzla/bitwuzla/blob/main/AUTHORS
 *
 * This file is part of Bitwuzla under the MIT license. See COPYING for more
 * information at https://github.com/bitwuzla/bitwuzla/blob/main/COPYING
 */

#ifndef BZLA_CONFIG_H_INCLUDED
#define BZLA_CONFIG_H_INCLUDED

namespace bzla::config {

static constexpr bool is_debug_build = false;
static constexpr const char* git_id  = "HEAD@06bca956";
static constexpr const char* version =
    true && true ? "0.7.0-dev-HEAD@06bca956" : "0.7.0-dev";
static constexpr const char* license = "Bitwuzla is a Satisfiability Modulo Theories (SMT) Solver for bit-vectors,\nfloating-points, arrays and uninterpreted functions.\n\nCopyright (C) 2018-2023 by its authors and contributors and their institutional\naffiliations as listed in file AUTHORS.\n\nMIT License\n\nPermission is hereby granted, free of charge, to any person obtaining a\ncopy of this software and associated documentation files (the \"Software\"),\nto deal in the Software without restriction, including without limitation\nthe rights to use, copy, modify, merge, publish, distribute, sublicense,\nand/or sell copies of the Software, and to permit persons to whom the\nSoftware is furnished to do so, subject to the following conditions:\n\nThe above copyright notice and this permission notice shall be included\nin all copies or substantial portions of the Software.\n\nTHE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\nIMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\nFITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL\nTHE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR\nOTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,\nARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR\nOTHER DEALINGS IN THE SOFTWARE.\n\n\nThis version of Bitwuzla is linked against the following\nthird party libraries. For copyright information of each\nlibrary see the corresponding url.\n\n  CaDiCaL\n  https://github.com/arminbiere/cadical\n\n  GMP - GNU Multiple Precision Arithmetic Library\n  https://gmplib.org\n\n  SymFPU\n  https://github.com/martin-cs/symfpu";
static constexpr const char* os      = "linux";
static constexpr const char* cc      = "gcc 14.3.0";
static constexpr const char* cxx     = "gcc 14.3.0";

}  // namespace bzla::config

#endif
