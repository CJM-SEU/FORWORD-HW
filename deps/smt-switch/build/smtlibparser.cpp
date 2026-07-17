// A Bison parser, made by GNU Bison 3.7.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.


// Take the name prefix into account.
#define yylex   smtliblex

// First part of user prologue.
#line 1 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"

/*********************                                                        */
/*! \file smtlibparser.[yy/cpp]
** \verbatim
** Top contributors (to current version):
**   Makai Mann
** This file is part of the smt-switch project.
** Copyright (c) 2020 by the authors listed in the file AUTHORS
** in the top-level source directory) and their institutional affiliations.
** All rights reserved.  See the file LICENSE in the top-level source
** directory for licensing information.\endverbatim
**
** \brief Bison file and auto-generated parser.
**
**
**/

#include <cstdio>
#include <iostream>
using namespace std;

#line 65 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"


#include "smtlibparser.h"


// Unqualified %code blocks.
#line 61 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"

#include "smtlib_reader.h"

#line 76 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if SMTLIBDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !SMTLIBDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !SMTLIBDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace smtlib {
#line 168 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"

  /// Build a parser object.
  parser::parser (smt::SmtLibReader & drv_yyarg)
#if SMTLIBDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      drv (drv_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | symbol kinds.  |
  `---------------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_indexed_op: // indexed_op
        value.YY_MOVE_OR_COPY< smt::Op > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_sort: // sort
        value.YY_MOVE_OR_COPY< smt::Sort > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_sort_list: // sort_list
        value.YY_MOVE_OR_COPY< smt::SortVec > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_term_s_expr: // term_s_expr
      case symbol_kind::S_atom: // atom
      case symbol_kind::S_bvconst: // bvconst
        value.YY_MOVE_OR_COPY< smt::Term > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_term_s_expr_list: // term_s_expr_list
      case symbol_kind::S_sorted_arg_list: // sorted_arg_list
      case symbol_kind::S_sorted_param_list: // sorted_param_list
        value.YY_MOVE_OR_COPY< smt::TermVec * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_attribute: // attribute
        value.YY_MOVE_OR_COPY< std::pair<std::string, std::string> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_SYMBOL: // SYMBOL
      case symbol_kind::S_NAT: // NAT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_BITSTR: // BITSTR
      case symbol_kind::S_HEXSTR: // HEXSTR
      case symbol_kind::S_BVDEC: // BVDEC
      case symbol_kind::S_QUOTESTRING: // QUOTESTRING
      case symbol_kind::S_KEYWORD: // KEYWORD
      case symbol_kind::S_QUANTIFIER: // QUANTIFIER
      case symbol_kind::S_stringlit: // stringlit
      case symbol_kind::S_number: // number
      case symbol_kind::S_number_or_string: // number_or_string
      case symbol_kind::S_spec_constant: // spec_constant
      case symbol_kind::S_s_expr: // s_expr
      case symbol_kind::S_s_expr_list: // s_expr_list
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_attributes: // attributes
        value.YY_MOVE_OR_COPY< std::vector<std::pair<std::string, std::string>> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_indexed_op: // indexed_op
        value.move< smt::Op > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_sort: // sort
        value.move< smt::Sort > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_sort_list: // sort_list
        value.move< smt::SortVec > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_term_s_expr: // term_s_expr
      case symbol_kind::S_atom: // atom
      case symbol_kind::S_bvconst: // bvconst
        value.move< smt::Term > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_term_s_expr_list: // term_s_expr_list
      case symbol_kind::S_sorted_arg_list: // sorted_arg_list
      case symbol_kind::S_sorted_param_list: // sorted_param_list
        value.move< smt::TermVec * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_attribute: // attribute
        value.move< std::pair<std::string, std::string> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_SYMBOL: // SYMBOL
      case symbol_kind::S_NAT: // NAT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_BITSTR: // BITSTR
      case symbol_kind::S_HEXSTR: // HEXSTR
      case symbol_kind::S_BVDEC: // BVDEC
      case symbol_kind::S_QUOTESTRING: // QUOTESTRING
      case symbol_kind::S_KEYWORD: // KEYWORD
      case symbol_kind::S_QUANTIFIER: // QUANTIFIER
      case symbol_kind::S_stringlit: // stringlit
      case symbol_kind::S_number: // number
      case symbol_kind::S_number_or_string: // number_or_string
      case symbol_kind::S_spec_constant: // spec_constant
      case symbol_kind::S_s_expr: // s_expr
      case symbol_kind::S_s_expr_list: // s_expr_list
        value.move< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_attributes: // attributes
        value.move< std::vector<std::pair<std::string, std::string>> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_indexed_op: // indexed_op
        value.copy< smt::Op > (that.value);
        break;

      case symbol_kind::S_sort: // sort
        value.copy< smt::Sort > (that.value);
        break;

      case symbol_kind::S_sort_list: // sort_list
        value.copy< smt::SortVec > (that.value);
        break;

      case symbol_kind::S_term_s_expr: // term_s_expr
      case symbol_kind::S_atom: // atom
      case symbol_kind::S_bvconst: // bvconst
        value.copy< smt::Term > (that.value);
        break;

      case symbol_kind::S_term_s_expr_list: // term_s_expr_list
      case symbol_kind::S_sorted_arg_list: // sorted_arg_list
      case symbol_kind::S_sorted_param_list: // sorted_param_list
        value.copy< smt::TermVec * > (that.value);
        break;

      case symbol_kind::S_attribute: // attribute
        value.copy< std::pair<std::string, std::string> > (that.value);
        break;

      case symbol_kind::S_SYMBOL: // SYMBOL
      case symbol_kind::S_NAT: // NAT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_BITSTR: // BITSTR
      case symbol_kind::S_HEXSTR: // HEXSTR
      case symbol_kind::S_BVDEC: // BVDEC
      case symbol_kind::S_QUOTESTRING: // QUOTESTRING
      case symbol_kind::S_KEYWORD: // KEYWORD
      case symbol_kind::S_QUANTIFIER: // QUANTIFIER
      case symbol_kind::S_stringlit: // stringlit
      case symbol_kind::S_number: // number
      case symbol_kind::S_number_or_string: // number_or_string
      case symbol_kind::S_spec_constant: // spec_constant
      case symbol_kind::S_s_expr: // s_expr
      case symbol_kind::S_s_expr_list: // s_expr_list
        value.copy< std::string > (that.value);
        break;

      case symbol_kind::S_attributes: // attributes
        value.copy< std::vector<std::pair<std::string, std::string>> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_indexed_op: // indexed_op
        value.move< smt::Op > (that.value);
        break;

      case symbol_kind::S_sort: // sort
        value.move< smt::Sort > (that.value);
        break;

      case symbol_kind::S_sort_list: // sort_list
        value.move< smt::SortVec > (that.value);
        break;

      case symbol_kind::S_term_s_expr: // term_s_expr
      case symbol_kind::S_atom: // atom
      case symbol_kind::S_bvconst: // bvconst
        value.move< smt::Term > (that.value);
        break;

      case symbol_kind::S_term_s_expr_list: // term_s_expr_list
      case symbol_kind::S_sorted_arg_list: // sorted_arg_list
      case symbol_kind::S_sorted_param_list: // sorted_param_list
        value.move< smt::TermVec * > (that.value);
        break;

      case symbol_kind::S_attribute: // attribute
        value.move< std::pair<std::string, std::string> > (that.value);
        break;

      case symbol_kind::S_SYMBOL: // SYMBOL
      case symbol_kind::S_NAT: // NAT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_BITSTR: // BITSTR
      case symbol_kind::S_HEXSTR: // HEXSTR
      case symbol_kind::S_BVDEC: // BVDEC
      case symbol_kind::S_QUOTESTRING: // QUOTESTRING
      case symbol_kind::S_KEYWORD: // KEYWORD
      case symbol_kind::S_QUANTIFIER: // QUANTIFIER
      case symbol_kind::S_stringlit: // stringlit
      case symbol_kind::S_number: // number
      case symbol_kind::S_number_or_string: // number_or_string
      case symbol_kind::S_spec_constant: // spec_constant
      case symbol_kind::S_s_expr: // s_expr
      case symbol_kind::S_s_expr_list: // s_expr_list
        value.move< std::string > (that.value);
        break;

      case symbol_kind::S_attributes: // attributes
        value.move< std::vector<std::pair<std::string, std::string>> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if SMTLIBDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YYUSE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if SMTLIBDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // SMTLIBDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (drv));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_indexed_op: // indexed_op
        yylhs.value.emplace< smt::Op > ();
        break;

      case symbol_kind::S_sort: // sort
        yylhs.value.emplace< smt::Sort > ();
        break;

      case symbol_kind::S_sort_list: // sort_list
        yylhs.value.emplace< smt::SortVec > ();
        break;

      case symbol_kind::S_term_s_expr: // term_s_expr
      case symbol_kind::S_atom: // atom
      case symbol_kind::S_bvconst: // bvconst
        yylhs.value.emplace< smt::Term > ();
        break;

      case symbol_kind::S_term_s_expr_list: // term_s_expr_list
      case symbol_kind::S_sorted_arg_list: // sorted_arg_list
      case symbol_kind::S_sorted_param_list: // sorted_param_list
        yylhs.value.emplace< smt::TermVec * > ();
        break;

      case symbol_kind::S_attribute: // attribute
        yylhs.value.emplace< std::pair<std::string, std::string> > ();
        break;

      case symbol_kind::S_SYMBOL: // SYMBOL
      case symbol_kind::S_NAT: // NAT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_BITSTR: // BITSTR
      case symbol_kind::S_HEXSTR: // HEXSTR
      case symbol_kind::S_BVDEC: // BVDEC
      case symbol_kind::S_QUOTESTRING: // QUOTESTRING
      case symbol_kind::S_KEYWORD: // KEYWORD
      case symbol_kind::S_QUANTIFIER: // QUANTIFIER
      case symbol_kind::S_stringlit: // stringlit
      case symbol_kind::S_number: // number
      case symbol_kind::S_number_or_string: // number_or_string
      case symbol_kind::S_spec_constant: // spec_constant
      case symbol_kind::S_s_expr: // s_expr
      case symbol_kind::S_s_expr_list: // s_expr_list
        yylhs.value.emplace< std::string > ();
        break;

      case symbol_kind::S_attributes: // attributes
        yylhs.value.emplace< std::vector<std::pair<std::string, std::string>> > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // smt2: commands
#line 114 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {}
#line 812 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 3: // commands: %empty
#line 119 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {}
#line 818 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 4: // commands: commands command
#line 120 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
                     {}
#line 824 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 5: // command: "(" SETLOGIC SYMBOL ")"
#line 125 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    drv.set_logic(yystack_[1].value.as < std::string > ());
  }
#line 832 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 6: // command: "(" SETOPT attribute ")"
#line 129 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    auto attr = yystack_[1].value.as < std::pair<std::string, std::string> > ();
    drv.set_opt(attr.first, attr.second);
  }
#line 841 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 7: // command: "(" SETINFO attribute ")"
#line 134 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    auto attr = yystack_[1].value.as < std::pair<std::string, std::string> > ();
    drv.set_info(attr.first, attr.second);
  }
#line 850 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 8: // command: "(" DECLARECONST SYMBOL sort ")"
#line 139 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    drv.new_symbol(yystack_[2].value.as < std::string > (), yystack_[1].value.as < smt::Sort > ());
  }
#line 858 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 9: // command: "(" DECLAREFUN SYMBOL "(" sort_list ")" sort ")"
#line 143 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    smt::Sort symsort;
    if (yystack_[3].value.as < smt::SortVec > ().size())
    {
      smt::SortVec & vec = yystack_[3].value.as < smt::SortVec > ();
      vec.push_back(yystack_[1].value.as < smt::Sort > ());
      symsort = drv.solver()->make_sort(smt::FUNCTION, vec);
    }
    else
    {
      symsort = yystack_[1].value.as < smt::Sort > ();
    }
    assert(symsort);
    drv.new_symbol(yystack_[5].value.as < std::string > (), symsort);
  }
#line 878 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 10: // command: "(" DECLARESORT SYMBOL NAT ")"
#line 159 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    drv.define_sort(yystack_[2].value.as < std::string > (), drv.solver()->make_sort(yystack_[2].value.as < std::string > (), std::stoi(yystack_[1].value.as < std::string > ())));
  }
#line 886 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 11: // $@1: %empty
#line 163 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
     {
       // new scope for arguments
       drv.push_scope();
     }
#line 895 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 12: // command: "(" DEFINEFUN $@1 SYMBOL "(" sorted_arg_list ")" sort term_s_expr ")"
#line 168 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    drv.define_fun(yystack_[6].value.as < std::string > (), yystack_[1].value.as < smt::Term > (), *yystack_[4].value.as < smt::TermVec * > ());

    drv.pop_scope();
    assert(!drv.current_scope());
    delete yystack_[4].value.as < smt::TermVec * > ();
  }
#line 907 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 13: // command: "(" DEFINESORT SYMBOL "(" ")" sort ")"
#line 176 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    // only supports 0-arity define-sorts
    drv.define_sort(yystack_[4].value.as < std::string > (), yystack_[1].value.as < smt::Sort > ());
  }
#line 916 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 14: // command: "(" ASSERT term_s_expr ")"
#line 181 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    drv.assert_formula(yystack_[1].value.as < smt::Term > ());
  }
#line 924 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 15: // command: "(" CHECKSAT ")"
#line 185 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    drv.check_sat();
  }
#line 932 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 16: // command: "(" CHECKSATASSUMING "(" term_s_expr_list ")" ")"
#line 189 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    drv.check_sat_assuming(*yystack_[2].value.as < smt::TermVec * > ());
    delete yystack_[2].value.as < smt::TermVec * > ();
  }
#line 941 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 17: // command: "(" PUSH ")"
#line 194 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    drv.push();
  }
#line 949 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 18: // command: "(" PUSH NAT ")"
#line 198 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    drv.push(std::stoi(yystack_[1].value.as < std::string > ()));
  }
#line 957 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 19: // command: "(" POP ")"
#line 202 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    drv.pop();
  }
#line 965 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 20: // command: "(" POP NAT ")"
#line 206 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    drv.pop(std::stoi(yystack_[1].value.as < std::string > ()));
  }
#line 973 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 21: // command: "(" EXIT ")"
#line 210 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    YYACCEPT;
  }
#line 981 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 22: // command: "(" GETVALUE "(" term_s_expr_list ")" ")"
#line 214 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    cout << "(";
    for (const auto & t : *yystack_[2].value.as < smt::TermVec * > ())
    {
      cout << "(" << t << " " << drv.solver()->get_value(t) << ") " << endl;
    }
    cout << ")" << endl;
    delete yystack_[2].value.as < smt::TermVec * > ();
  }
#line 995 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 23: // command: "(" GETUNSATASSUMP ")"
#line 224 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    smt::UnorderedTermSet core;
    drv.solver()->get_unsat_assumptions(core);
    cout << "(";
    for (const auto & c : core)
    {
      cout << c << endl;
    }
    cout << ")" << endl;
  }
#line 1010 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 24: // command: "(" ECHO stringlit ")"
#line 235 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    cout << yystack_[1].value.as < std::string > () << endl;
  }
#line 1018 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 25: // term_s_expr: atom
#line 242 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    yylhs.value.as < smt::Term > () = yystack_[0].value.as < smt::Term > ();
  }
#line 1026 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 26: // term_s_expr: "(" indexed_op term_s_expr_list ")"
#line 246 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    yylhs.value.as < smt::Term > () = drv.solver()->make_term(yystack_[2].value.as < smt::Op > (), *yystack_[1].value.as < smt::TermVec * > ());
    delete yystack_[1].value.as < smt::TermVec * > ();
  }
#line 1035 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 27: // term_s_expr: "(" SYMBOL term_s_expr_list ")"
#line 251 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    smt::PrimOp po;
    smt::Term uf;

    // check if it's a known operator in the given logic
    if ((po = drv.lookup_primop(yystack_[2].value.as < std::string > ())) != smt::NUM_OPS_AND_NULL)
    {
       // this is an operator
       // special-case for MINUS
       // needs to be negate if only one argument
       // TODO: might be a more elegant way to handle this
       if (po == smt::Minus && yystack_[1].value.as < smt::TermVec * > ()->size() == 1)
       {
         yylhs.value.as < smt::Term > () = drv.solver()->make_term(smt::Negate, yystack_[1].value.as < smt::TermVec * > ()->at(0));
       }
       else
       {
         yylhs.value.as < smt::Term > () = drv.solver()->make_term(po, *yystack_[1].value.as < smt::TermVec * > ());
       }
    }
    else if ((uf = drv.lookup_symbol(yystack_[2].value.as < std::string > ())))
    {
      smt::TermVec vec({uf});
      vec.insert(vec.end(), yystack_[1].value.as < smt::TermVec * > ()->begin(), yystack_[1].value.as < smt::TermVec * > ()->end());
      yylhs.value.as < smt::Term > () = drv.solver()->make_term(smt::Apply, vec);
    }
    else
    {
      // assuming this is a defined fun
      // will throw exception if not a defined function symbol
      yylhs.value.as < smt::Term > () = drv.apply_define_fun(yystack_[2].value.as < std::string > (), *yystack_[1].value.as < smt::TermVec * > ());
    }
    delete yystack_[1].value.as < smt::TermVec * > ();
  }
#line 1074 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 28: // term_s_expr: "(" "(" ASCONST sort ")" atom ")"
#line 286 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    yylhs.value.as < smt::Term > () = drv.solver()->make_term(yystack_[1].value.as < smt::Term > (), yystack_[3].value.as < smt::Sort > ());
  }
#line 1082 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 29: // $@2: %empty
#line 290 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
    {
      // mid-rule for incrementing scope
      drv.push_scope();
    }
#line 1091 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 30: // term_s_expr: "(" QUANTIFIER "(" $@2 sorted_param_list ")" term_s_expr ")"
#line 295 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    smt::SmtSolver & solver = drv.solver();
    smt::PrimOp po = drv.lookup_primop(yystack_[6].value.as < std::string > ());
    // smt-switch takes all the parameters followed by the body
    yystack_[3].value.as < smt::TermVec * > ()->push_back(yystack_[1].value.as < smt::Term > ());
    yylhs.value.as < smt::Term > () = drv.solver()->make_term(po, *yystack_[3].value.as < smt::TermVec * > ());

    // this scope is done
    drv.pop_scope();
    delete yystack_[3].value.as < smt::TermVec * > ();
  }
#line 1107 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 31: // $@3: %empty
#line 307 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
    {
      // mid-rule for incrementing scope
      drv.push_scope();
    }
#line 1116 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 32: // term_s_expr: "(" LET $@3 "(" let_term_bindings ")" term_s_expr ")"
#line 312 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    drv.pop_scope();
    yylhs.value.as < smt::Term > () = yystack_[1].value.as < smt::Term > ();
  }
#line 1125 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 33: // term_s_expr: "(" "!" term_s_expr attributes ")"
#line 317 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
  {
    // the default implementation does nothing
    // but print a warning to standard error.
    // it is possible to implement the function in derived class
    // to use the attribute
    for (const auto attr : yystack_[1].value.as < std::vector<std::pair<std::string, std::string>> > ()) {
      drv.term_attribute(yystack_[2].value.as < smt::Term > (), attr.first, attr.second);
    }
    yylhs.value.as < smt::Term > () = yystack_[2].value.as < smt::Term > ();
  }
#line 1140 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 34: // term_s_expr_list: %empty
#line 331 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < smt::TermVec * > () = new smt::TermVec();
   }
#line 1148 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 35: // term_s_expr_list: term_s_expr_list term_s_expr
#line 335 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yystack_[1].value.as < smt::TermVec * > ()->push_back(yystack_[0].value.as < smt::Term > ());
     yylhs.value.as < smt::TermVec * > () = yystack_[1].value.as < smt::TermVec * > ();
   }
#line 1157 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 36: // atom: SYMBOL
#line 343 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
      smt::Term sym = drv.lookup_symbol(yystack_[0].value.as < std::string > ());
      if (!sym)
      {
        // Note: using @1 will force locations to be enabled
        smtlib::parser::error(yystack_[0].location, std::string("Unrecognized symbol: ") + yystack_[0].value.as < std::string > ());
        YYERROR;
      }
      yylhs.value.as < smt::Term > () = sym;
   }
#line 1172 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 37: // atom: FLOAT
#line 354 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < smt::Term > () = drv.solver()->make_term(yystack_[0].value.as < std::string > (), drv.solver()->make_sort(smt::REAL));
   }
#line 1180 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 38: // atom: NAT
#line 358 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < smt::Term > () = drv.solver()->make_term(yystack_[0].value.as < std::string > (), drv.solver()->make_sort(smt::INT));
   }
#line 1188 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 39: // atom: bvconst
#line 362 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < smt::Term > () = yystack_[0].value.as < smt::Term > ();
   }
#line 1196 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 40: // atom: QUOTESTRING
#line 366 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < smt::Term > () = drv.solver()->make_term(yystack_[0].value.as < std::string > (), false, drv.solver()->make_sort(smt::STRING));
   }
#line 1204 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 41: // bvconst: BITSTR
#line 373 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     smt::Sort bvsort = drv.solver()->make_sort(smt::BV, yystack_[0].value.as < std::string > ().length());
     yylhs.value.as < smt::Term > () = drv.solver()->make_term(yystack_[0].value.as < std::string > (), bvsort, 2);
   }
#line 1213 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 42: // bvconst: HEXSTR
#line 378 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     smt::Sort bvsort = drv.solver()->make_sort(smt::BV, 4*(yystack_[0].value.as < std::string > ().length()));
     yylhs.value.as < smt::Term > () = drv.solver()->make_term(yystack_[0].value.as < std::string > (), bvsort, 16);
   }
#line 1222 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 43: // bvconst: indprefix BVDEC NAT ")"
#line 383 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     smt::Sort bvsort = drv.solver()->make_sort(smt::BV, std::stoi(yystack_[1].value.as < std::string > ()));
     yylhs.value.as < smt::Term > () = drv.solver()->make_term(yystack_[2].value.as < std::string > (), bvsort, 10);
   }
#line 1231 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 44: // sort: SYMBOL
#line 391 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     smt::Sort res;
     // check built-in sort kinds first
     smt::SortKind sk = drv.lookup_sortkind(yystack_[0].value.as < std::string > ());
     if (sk == smt::NUM_SORT_KINDS)
     {
       // got the dedicated null enum
       // check defined sorts
       res = drv.lookup_sort(yystack_[0].value.as < std::string > ());
     }
     else if (sk == smt::UNINTERPRETED)
     {
       // uninterpreted sorts also stored with defined sorts
       res = drv.lookup_sort(yystack_[0].value.as < std::string > ());
     }
     else
     {
       res = drv.solver()->make_sort(sk);
     }
     yylhs.value.as < smt::Sort > () = res;
   }
#line 1257 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 45: // sort: indprefix SYMBOL NAT ")"
#line 413 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     // this one is intended for bit-vectors
     smt::SortKind sk = drv.lookup_sortkind(yystack_[2].value.as < std::string > ());
     if (sk == smt::NUM_SORT_KINDS)
     {
       // got dedicated null enum
       smtlib::parser::error(yystack_[2].location, std::string("Unrecognized sort: ") + yystack_[2].value.as < std::string > ());
       YYERROR;
     }
     yylhs.value.as < smt::Sort > () = drv.solver()->make_sort(sk, std::stoi(yystack_[1].value.as < std::string > ()));
   }
#line 1273 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 46: // sort: "(" SYMBOL sort_list ")"
#line 425 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     smt::SortKind sk = drv.lookup_sortkind(yystack_[2].value.as < std::string > ());
     if (sk == smt::ARRAY)
     {
     // this one is intended for arrays
       yylhs.value.as < smt::Sort > () = drv.solver()->make_sort(sk, yystack_[1].value.as < smt::SortVec > ()[0], yystack_[1].value.as < smt::SortVec > ()[1]);
     }
     else
     {
       // defined or declared sort
       smt::Sort sort_con = drv.lookup_sort(yystack_[2].value.as < std::string > ());
       yylhs.value.as < smt::Sort > () = drv.solver()->make_sort(sort_con, yystack_[1].value.as < smt::SortVec > ());
     }
   }
#line 1292 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 47: // sort_list: %empty
#line 443 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     smt::SortVec vec;
     yylhs.value.as < smt::SortVec > () = vec;
   }
#line 1301 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 48: // sort_list: sort_list sort
#line 448 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     smt::SortVec & vec = yystack_[1].value.as < smt::SortVec > ();
     vec.push_back(yystack_[0].value.as < smt::Sort > ());
     yylhs.value.as < smt::SortVec > () = vec;
   }
#line 1311 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 49: // sorted_arg_list: %empty
#line 457 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < smt::TermVec * > () = new smt::TermVec();
   }
#line 1319 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 50: // sorted_arg_list: sorted_arg_list "(" SYMBOL sort ")"
#line 461 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     assert(drv.current_scope());
     smt::Term arg = drv.register_arg(yystack_[2].value.as < std::string > (), yystack_[1].value.as < smt::Sort > ());
     yystack_[4].value.as < smt::TermVec * > ()->push_back(arg);
     yylhs.value.as < smt::TermVec * > () = yystack_[4].value.as < smt::TermVec * > ();
   }
#line 1330 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 51: // sorted_param_list: %empty
#line 471 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < smt::TermVec * > () = new smt::TermVec();
   }
#line 1338 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 52: // sorted_param_list: sorted_param_list "(" SYMBOL sort ")"
#line 475 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     assert(drv.current_scope());
     smt::Term param = drv.create_param(yystack_[2].value.as < std::string > (), yystack_[1].value.as < smt::Sort > ());
     yystack_[4].value.as < smt::TermVec * > ()->push_back(param);
     yylhs.value.as < smt::TermVec * > () = yystack_[4].value.as < smt::TermVec * > ();
   }
#line 1349 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 53: // let_term_bindings: %empty
#line 485 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {}
#line 1355 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 54: // let_term_bindings: let_term_bindings "(" SYMBOL term_s_expr ")"
#line 487 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     drv.let_binding(yystack_[2].value.as < std::string > (), yystack_[1].value.as < smt::Term > ());
   }
#line 1363 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 55: // indexed_op: indprefix SYMBOL NAT ")"
#line 494 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     smt::PrimOp po = drv.lookup_primop(yystack_[2].value.as < std::string > ());
     if (po == smt::NUM_OPS_AND_NULL)
     {
       smtlib::parser::error(yystack_[2].location, "Unexpected symbol in indexed operator: " + yystack_[2].value.as < std::string > ());
     }
     yylhs.value.as < smt::Op > () = smt::Op(po, std::stoi(yystack_[1].value.as < std::string > ()));
   }
#line 1376 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 56: // indexed_op: indprefix SYMBOL NAT NAT ")"
#line 503 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     smt::PrimOp po = drv.lookup_primop(yystack_[3].value.as < std::string > ());
     if (po == smt::NUM_OPS_AND_NULL)
     {
       smtlib::parser::error(yystack_[3].location, "Unexpected symbol in indexed operator: " + yystack_[3].value.as < std::string > ());
     }
     yylhs.value.as < smt::Op > () = smt::Op(po, std::stoi(yystack_[2].value.as < std::string > ()), std::stoi(yystack_[1].value.as < std::string > ()));
   }
#line 1389 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 57: // stringlit: QUOTESTRING
#line 515 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();
   }
#line 1397 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 58: // stringlit: SYMBOL
#line 519 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();
   }
#line 1405 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 59: // number: NAT
#line 526 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();
   }
#line 1413 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 60: // number: FLOAT
#line 530 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();
   }
#line 1421 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 61: // number_or_string: number
#line 537 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();
   }
#line 1429 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 62: // number_or_string: stringlit
#line 541 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();
   }
#line 1437 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 63: // indprefix: "(" "_"
#line 548 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {}
#line 1443 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 64: // spec_constant: number_or_string
#line 553 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();
   }
#line 1451 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 65: // spec_constant: BITSTR
#line 557 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();
   }
#line 1459 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 66: // spec_constant: HEXSTR
#line 561 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();
   }
#line 1467 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 67: // s_expr: spec_constant
#line 568 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > ();
   }
#line 1475 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 68: // s_expr: "(" s_expr_list ")"
#line 572 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::string > () = "(" + yystack_[1].value.as < std::string > () + ")";
   }
#line 1483 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 69: // s_expr_list: %empty
#line 579 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::string > () = "";
   }
#line 1491 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 70: // s_expr_list: s_expr_list s_expr
#line 583 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yystack_[1].value.as < std::string > () += yystack_[0].value.as < std::string > ();
     yylhs.value.as < std::string > () = yystack_[1].value.as < std::string > ();
   }
#line 1500 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 71: // attribute: KEYWORD
#line 591 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::pair<std::string, std::string> > () = {yystack_[0].value.as < std::string > (), ""};
   }
#line 1508 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 72: // attribute: KEYWORD s_expr
#line 595 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::pair<std::string, std::string> > () = {yystack_[1].value.as < std::string > (), yystack_[0].value.as < std::string > ()};
   }
#line 1516 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 73: // attributes: %empty
#line 602 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yylhs.value.as < std::vector<std::pair<std::string, std::string>> > () = {};
   }
#line 1524 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;

  case 74: // attributes: attributes attribute
#line 606 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"
   {
     yystack_[1].value.as < std::vector<std::pair<std::string, std::string>> > ().push_back(yystack_[0].value.as < std::pair<std::string, std::string> > ());
     yylhs.value.as < std::vector<std::pair<std::string, std::string>> > () = yystack_[1].value.as < std::vector<std::pair<std::string, std::string>> > ();
   }
#line 1533 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"
    break;


#line 1537 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        std::string msg = YY_("syntax error");
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

#if SMTLIBDEBUG || 0
  const char *
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytname_[yysymbol];
  }
#endif // #if SMTLIBDEBUG || 0





  const signed char parser::yypact_ninf_ = -48;

  const signed char parser::yytable_ninf_ = -1;

  const short
  parser::yypact_[] =
  {
     -48,   -26,     9,   141,   -48,   -48,    23,   -17,   -17,    25,
      27,    56,   -48,    58,    59,    13,    40,    28,    37,    44,
      47,    65,    48,    72,    96,    74,    80,    41,    82,   112,
     115,   107,   -48,   -48,   -48,   -48,   -48,   -48,     3,   110,
     -48,   -48,   135,   -48,   -48,   113,   -48,   114,   -48,   -48,
     -48,   -48,   -48,   -48,   116,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     5,
     117,   144,   -48,   136,   138,   139,   -48,   -48,   142,    81,
     -48,    59,   -48,   167,   -48,   140,    11,   -48,   -48,    18,
     -48,    49,   -48,   -48,   168,     8,   -48,   -48,    41,    79,
     143,   -48,    41,   -48,    89,   171,   145,   146,   -48,   147,
     -48,   -48,    16,   148,    41,   -48,   103,   149,   -48,   -48,
     -48,   150,   -22,   -48,    42,   -48,   -48,   -48,   -48,   -48,
     151,   173,    41,   -48,   105,   109,   119,   -48,   -48,   152,
     -48,   -48,    41,    59,   182,    59,   183,    59,   154,   156,
     -48,   157,   158,    59,   159,    41,   160,   -48,   -48,   -48,
     161,   -48,   162,   -48,   -48,   -48
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     2,     0,     0,     4,     1,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       0,     0,    36,    38,    37,    41,    42,    40,     0,     0,
      25,    39,     0,    15,    34,     0,    17,     0,    19,    21,
      34,    23,    58,    57,     0,     5,    59,    60,    65,    66,
      69,    62,    61,    64,    67,    72,     6,     7,    44,     0,
       0,     0,    47,     0,     0,     0,    34,    31,     0,     0,
      63,     0,    34,     0,    14,     0,     0,    18,    20,     0,
      24,     0,    47,     8,     0,     0,    10,    49,     0,     0,
       0,    29,     0,    73,     0,     0,     0,     0,    35,     0,
      68,    70,     0,     0,     0,    48,     0,     0,    27,    53,
      51,     0,     0,    26,     0,    43,    16,    22,    46,    45,
       0,     0,     0,    13,     0,     0,     0,    33,    74,     0,
      55,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,    28,    50,    12,
       0,    32,     0,    30,    54,    52
  };

  const short
  parser::yypgoto_[] =
  {
     -48,   -48,   -48,   -48,   -14,   -47,    60,   -48,   -23,   106,
     -48,   -48,   -48,   -48,   175,   -48,   -48,   -25,   -48,   104,
     -48,    -7,   -48,   -48,   -48,   -48
  };

  const short
  parser::yydefgoto_[] =
  {
      -1,     1,     4,     2,   108,    86,    40,    41,   115,    95,
     116,   135,   134,    82,    61,    62,    63,    42,    64,    65,
      91,    25,   122,    30,   120,   100
  };

  const unsigned char
  parser::yytable_[] =
  {
      39,    26,    71,    89,    70,     3,    76,    24,    92,     5,
     137,    68,    24,    83,    32,    33,    34,    35,    36,    68,
      37,    32,    33,    34,    35,    36,    23,    37,    27,    99,
      28,    77,    45,    78,    79,   104,    80,    81,    80,    69,
     114,    47,    38,   107,    68,    43,   139,    69,   128,    38,
     109,    52,    52,    56,    57,    58,    59,    53,    53,    29,
      46,    31,    32,    33,    34,    35,    36,   103,    37,    48,
      71,    44,    69,    71,   140,   117,    49,    71,    50,   121,
      60,   110,    32,    33,    34,    35,    36,    71,    37,    71,
      38,   130,    32,    33,    34,    35,    36,    51,    37,    52,
      56,    57,    58,    59,    55,    53,    66,    71,   102,   143,
      38,   118,    67,    72,    80,   138,    73,    71,    74,   151,
      38,   123,    32,    33,    34,    35,    36,    60,    37,   152,
      71,   154,   162,   156,   131,   132,   144,   145,    75,   160,
     146,   147,    84,    85,   106,    87,    88,    94,    90,    93,
     148,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    96,    97,
     105,    98,   113,   101,   119,   124,   142,   125,   126,   127,
     129,   133,   136,   141,   150,   153,   155,    80,   157,   158,
     159,   161,   163,   164,   165,   111,   149,    54,   112
  };

  const unsigned char
  parser::yycheck_[] =
  {
      14,     8,    27,    50,    27,    31,     3,    29,     3,     0,
      32,     3,    29,    38,     3,     4,     5,     6,     7,     3,
       9,     3,     4,     5,     6,     7,     3,     9,     3,    76,
       3,    28,     4,    30,    31,    82,    33,    34,    33,    31,
      32,     4,    31,    32,     3,    32,     4,    31,    32,    31,
      32,     3,     3,     4,     5,     6,     7,     9,     9,     3,
      32,     3,     3,     4,     5,     6,     7,    81,     9,    32,
      95,    31,    31,    98,    32,    98,    32,   102,    31,   102,
      31,    32,     3,     4,     5,     6,     7,   112,     9,   114,
      31,   114,     3,     4,     5,     6,     7,    32,     9,     3,
       4,     5,     6,     7,    32,     9,    32,   132,    27,   132,
      31,    32,    32,    31,    33,   122,     4,   142,     3,   142,
      31,    32,     3,     4,     5,     6,     7,    31,     9,   143,
     155,   145,   155,   147,    31,    32,    31,    32,    31,   153,
      31,    32,    32,     8,     4,    32,    32,     3,    32,    32,
      31,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    32,    31,
       3,    32,     4,    31,    31,     4,     3,    32,    32,    32,
      32,    32,    32,    32,    32,     3,     3,    33,    32,    32,
      32,    32,    32,    32,    32,    91,   136,    22,    92
  };

  const signed char
  parser::yystos_[] =
  {
       0,    36,    38,    31,    37,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     3,    29,    56,    56,     3,     3,     3,
      58,     3,     3,     4,     5,     6,     7,     9,    31,    39,
      41,    42,    52,    32,    31,     4,    32,     4,    32,    32,
      31,    32,     3,     9,    49,    32,     4,     5,     6,     7,
      31,    49,    50,    51,    53,    54,    32,    32,     3,    31,
      43,    52,    31,     4,     3,    31,     3,    28,    30,    31,
      33,    34,    48,    52,    32,     8,    40,    32,    32,    40,
      32,    55,     3,    32,     3,    44,    32,    31,    32,    40,
      60,    31,    27,    39,    40,     3,     4,    32,    39,    32,
      32,    54,    44,     4,    32,    43,    45,    43,    32,    31,
      59,    43,    57,    32,     4,    32,    32,    32,    32,    32,
      43,    31,    32,    32,    47,    46,    32,    32,    56,     4,
      32,    32,     3,    43,    31,    32,    31,    32,    31,    41,
      32,    43,    39,     3,    39,     3,    39,    32,    32,    32,
      39,    32,    43,    32,    32,    32
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    35,    38,    36,    36,    37,    37,    37,    37,    37,
      37,    58,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    39,    39,    39,    39,    59,
      39,    60,    39,    39,    40,    40,    41,    41,    41,    41,
      41,    42,    42,    42,    43,    43,    43,    44,    44,    45,
      45,    46,    46,    47,    47,    48,    48,    49,    49,    50,
      50,    51,    51,    52,    53,    53,    53,    54,    54,    55,
      55,    56,    56,    57,    57
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     0,     2,     4,     4,     4,     5,     8,
       5,     0,    10,     7,     4,     3,     6,     3,     4,     3,
       4,     3,     6,     3,     4,     1,     4,     4,     7,     0,
       8,     0,     8,     5,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     4,     4,     0,     2,     0,
       5,     0,     5,     0,     5,     4,     5,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     3,     0,
       2,     1,     2,     0,     2
  };


#if SMTLIBDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "SYMBOL", "NAT",
  "FLOAT", "BITSTR", "HEXSTR", "BVDEC", "QUOTESTRING", "SETLOGIC",
  "SETOPT", "SETINFO", "DECLARECONST", "DECLAREFUN", "DECLARESORT",
  "DEFINEFUN", "DEFINESORT", "ASSERT", "CHECKSAT", "CHECKSATASSUMING",
  "PUSH", "POP", "EXIT", "GETVALUE", "GETUNSATASSUMP", "ECHO", "ASCONST",
  "LET", "KEYWORD", "QUANTIFIER", "\"(\"", "\")\"", "\"_\"", "\"!\"",
  "$accept", "commands", "command", "smt2", "term_s_expr",
  "term_s_expr_list", "atom", "bvconst", "sort", "sort_list",
  "sorted_arg_list", "sorted_param_list", "let_term_bindings",
  "indexed_op", "stringlit", "number", "number_or_string", "indprefix",
  "spec_constant", "s_expr", "s_expr_list", "attribute", "attributes",
  "$@1", "$@2", "$@3", YY_NULLPTR
  };
#endif


#if SMTLIBDEBUG
  const short
  parser::yyrline_[] =
  {
       0,   113,   113,   118,   120,   124,   128,   133,   138,   142,
     158,   163,   162,   175,   180,   184,   188,   193,   197,   201,
     205,   209,   213,   223,   234,   241,   245,   250,   285,   290,
     289,   307,   306,   316,   330,   334,   342,   353,   357,   361,
     365,   372,   377,   382,   390,   412,   424,   442,   447,   456,
     460,   470,   474,   484,   486,   493,   502,   514,   518,   525,
     529,   536,   540,   547,   552,   556,   560,   567,   571,   578,
     582,   590,   594,   601,   605
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // SMTLIBDEBUG


} // smtlib
#line 1954 "/home/jiongming/FORWORD_build/deps/smt-switch/build/smtlibparser.cpp"

#line 612 "/home/jiongming/FORWORD_build/deps/smt-switch/src/smtlibparser.yy"


void smtlib::parser::error (const location_type& l, const std::string& m)
{
  cerr << l << ": " << m << endl;
}
