
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

	#include "sym_tab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define YYSTYPE char*
	int type=-1;	//initial declaration of type for symbol table
	char* vval="~";	//initial declaration of value for symbol table
	int vtype=-1;	//initial declaration for type checking for symbol table
	extern int scope=0;	//initial declaration for scope
	int err=0;	//Initial declaration for error
	void yyerror(char* s); // error handling function
	int yylex(); // declare the function performing lexical analysis
	int arraysize=1; //initial size of array
	extern int yylineno; // track the line number
	extern char* yytext; // track the token 



/* Line 189 of yacc.c  */
#line 93 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_INT = 258,
     T_CHAR = 259,
     T_DOUBLE = 260,
     T_WHILE = 261,
     T_INC = 262,
     T_DEC = 263,
     T_OROR = 264,
     T_ANDAND = 265,
     T_EQCOMP = 266,
     T_NE = 267,
     T_GE = 268,
     T_LE = 269,
     T_STRING = 270,
     T_FLOAT = 271,
     T_BOOLEAN = 272,
     T_IF = 273,
     T_ELSE = 274,
     T_STRLITERAL = 275,
     T_DO = 276,
     T_INCLUDE = 277,
     T_HEADER = 278,
     T_MAIN = 279,
     T_ID = 280,
     T_NUM = 281,
     T_FOR = 282,
     T_OR = 283,
     T_AND = 284,
     T_INCR = 285,
     T_DECR = 286,
     T_IFX = 287
   };
#endif
/* Tokens.  */
#define T_INT 258
#define T_CHAR 259
#define T_DOUBLE 260
#define T_WHILE 261
#define T_INC 262
#define T_DEC 263
#define T_OROR 264
#define T_ANDAND 265
#define T_EQCOMP 266
#define T_NE 267
#define T_GE 268
#define T_LE 269
#define T_STRING 270
#define T_FLOAT 271
#define T_BOOLEAN 272
#define T_IF 273
#define T_ELSE 274
#define T_STRLITERAL 275
#define T_DO 276
#define T_INCLUDE 277
#define T_HEADER 278
#define T_MAIN 279
#define T_ID 280
#define T_NUM 281
#define T_FOR 282
#define T_OR 283
#define T_AND 284
#define T_INCR 285
#define T_DECR 286
#define T_IFX 287




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 199 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   401

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  170

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,     2,     2,     2,     2,     2,
      35,    36,    45,    43,    41,    44,     2,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
      32,    42,    33,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    11,    14,    18,    22,    26,    29,
      32,    36,    37,    38,    53,    54,    58,    61,    64,    67,
      70,    73,    78,    79,    83,    85,    89,    91,    93,    95,
      97,    99,   100,   105,   107,   111,   113,   117,   120,   123,
     126,   128,   129,   133,   137,   139,   143,   147,   149,   153,
     155,   157,   159,   161,   163,   165,   167,   169,   171,   173,
     175,   177,   179,   181,   183,   185,   187,   189,   191,   192,
     202,   204,   205,   208,   211,   214,   216,   219,   222,   223,
     226,   229,   230,   237,   238,   239,   249,   251,   255,   256,
     261,   263,   265,   271,   273,   275,   276,   281
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    -1,    22,    32,    23,    33,    51,
      -1,    73,    51,    -1,    56,    34,    51,    -1,    63,    34,
      51,    -1,    54,    34,    51,    -1,    52,    51,    -1,    81,
      51,    -1,    65,    34,    51,    -1,    -1,    -1,    27,    35,
      54,    34,    25,    69,    65,    34,    57,    36,    37,    53,
      76,    38,    -1,    -1,    55,    62,    60,    -1,    62,    60,
      -1,    62,    58,    -1,    25,    71,    -1,    71,    25,    -1,
      25,    59,    -1,    39,    26,    40,    59,    -1,    -1,    60,
      41,    61,    -1,    61,    -1,    25,    42,    65,    -1,    25,
      -1,     3,    -1,    16,    -1,     5,    -1,     4,    -1,    -1,
      25,    64,    42,    65,    -1,    65,    -1,    65,    69,    66,
      -1,    66,    -1,    65,    70,    66,    -1,    65,    71,    -1,
      72,    65,    -1,    71,    65,    -1,    66,    -1,    -1,    66,
      43,    67,    -1,    66,    44,    67,    -1,    67,    -1,    67,
      45,    68,    -1,    67,    46,    68,    -1,    68,    -1,    35,
      65,    36,    -1,    25,    -1,    26,    -1,    20,    -1,    14,
      -1,    13,    -1,    32,    -1,    33,    -1,    11,    -1,    12,
      -1,    29,    -1,    28,    -1,    47,    -1,    30,    -1,    31,
      -1,    30,    -1,    31,    -1,    44,    -1,    43,    -1,    47,
      -1,    -1,    62,    24,    35,    75,    36,    37,    74,    76,
      38,    -1,    60,    -1,    -1,    77,    76,    -1,    82,    76,
      -1,    52,    51,    -1,    81,    -1,    65,    34,    -1,    54,
      34,    -1,    -1,    56,    34,    -1,    63,    34,    -1,    -1,
      18,    84,    37,    78,    76,    38,    -1,    -1,    -1,    18,
      84,    37,    79,    76,    38,    80,    19,    76,    -1,    85,
      -1,    21,    82,    85,    -1,    -1,    37,    83,    76,    38,
      -1,    65,    -1,    63,    -1,     6,    35,    84,    36,    86,
      -1,    65,    -1,    63,    -1,    -1,    37,    87,    76,    38,
      -1,    34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    32,    33,    34,    35,    36,    37,    38,
      39,    41,    44,    44,    45,    45,    47,    48,    51,    52,
      54,    68,    69,    71,    72,    75,    89,   101,   102,   103,
     104,   108,   108,   118,   121,   122,   123,   124,   125,   126,
     127,   128,   132,   144,   156,   160,   172,   184,   187,   188,
     214,   223,   234,   235,   236,   237,   238,   239,   242,   243,
     244,   247,   248,   251,   252,   253,   254,   255,   258,   258,
     262,   263,   269,   270,   271,   272,   273,   274,   275,   281,
     282,   283,   283,   284,   284,   284,   285,   288,   290,   290,
     294,   295,   299,   303,   304,   308,   308,   309
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INT", "T_CHAR", "T_DOUBLE", "T_WHILE",
  "T_INC", "T_DEC", "T_OROR", "T_ANDAND", "T_EQCOMP", "T_NE", "T_GE",
  "T_LE", "T_STRING", "T_FLOAT", "T_BOOLEAN", "T_IF", "T_ELSE",
  "T_STRLITERAL", "T_DO", "T_INCLUDE", "T_HEADER", "T_MAIN", "T_ID",
  "T_NUM", "T_FOR", "T_OR", "T_AND", "T_INCR", "T_DECR", "'<'", "'>'",
  "';'", "'('", "')'", "'{'", "'}'", "'['", "']'", "','", "'='", "'+'",
  "'-'", "'*'", "'/'", "'!'", "T_IFX", "$accept", "START", "PROG", "FOR",
  "$@1", "DEC_ASGN", "$@2", "DECLR", "FOR_inc", "ARRAY", "BRACKET",
  "LISTVAR", "VAR", "TYPE", "ASSGN", "$@3", "EXPR", "E", "T", "F",
  "REL_OP", "LOGICAL_OP", "UNARY_OP", "UN_OP", "MAIN", "$@4",
  "EMPTY_LISTVAR", "STMT", "STMT_NO_BLOCK", "$@5", "$@6", "$@7", "DO",
  "BLOCK", "$@8", "COND", "WHILE", "WHILE_2", "$@9", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    60,    62,    59,    40,    41,   123,   125,    91,
      93,    44,    61,    43,    45,    42,    47,    33,   287
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    53,    52,    55,    54,    56,    56,    57,    57,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    62,
      62,    64,    63,    63,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    66,    67,    67,    67,    68,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    70,    70,
      70,    71,    71,    72,    72,    72,    72,    72,    74,    73,
      75,    75,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    78,    77,    79,    80,    77,    77,    81,    83,    82,
      84,    84,    85,    84,    84,    87,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     5,     2,     3,     3,     3,     2,     2,
       3,     0,     0,    14,     0,     3,     2,     2,     2,     2,
       2,     4,     0,     3,     1,     3,     1,     1,     1,     1,
       1,     0,     4,     1,     3,     1,     3,     2,     2,     2,
       1,     0,     3,     3,     1,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     9,
       1,     0,     2,     2,     2,     1,     2,     2,     0,     2,
       2,     0,     6,     0,     0,     9,     1,     3,     0,     4,
       1,     1,     5,     1,     1,     0,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      41,    27,    30,    29,    28,    51,     0,     0,    49,    50,
       0,    61,    62,    41,    66,    65,    67,     0,     2,    11,
       0,     0,     0,     0,     0,     0,    35,    44,    47,    41,
      41,    11,    11,    88,     0,     0,     0,    14,    49,     0,
       1,     8,    11,     0,    11,     0,    22,    17,    16,    24,
      11,    56,    57,    53,    52,    59,    58,    61,    62,    54,
      55,    11,    60,     0,     0,    37,     0,     0,     0,     0,
      39,    38,     4,     9,    41,     0,    87,     0,    41,     0,
      48,     7,    26,    15,     5,    71,     0,    41,    20,     0,
       6,    10,    34,    36,    42,    43,    45,    46,    41,    11,
       0,     0,     0,     0,     0,     0,    41,    75,    41,    86,
      41,    11,    32,     0,    70,     0,     0,    25,    23,    91,
      33,     0,    74,    77,    79,    80,    76,    89,    72,    73,
       0,     3,     0,     0,    22,    81,     0,    41,    68,    21,
      41,    41,    97,    95,    92,     0,    41,     0,     0,    41,
       0,     0,    82,    84,     0,     0,     0,     0,    69,     0,
      96,    18,     0,    19,    41,    12,    85,    41,     0,    13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    18,    19,   167,    20,    21,    22,   156,    47,
      88,    48,    49,    23,    24,    36,    25,    26,    27,    28,
      63,    64,    29,    30,    31,   146,   115,   105,   106,   140,
     141,   159,    32,   108,    74,   121,   109,   144,   149
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -51
static const yytype_int16 yypact[] =
{
     211,   -51,   -51,   -51,   -51,   -51,   -32,   -19,   -16,   -51,
      -3,   -51,   -51,   174,   -51,   -51,   -51,    34,   -51,   273,
     -12,    15,    13,    14,    21,   298,     7,    18,   -51,   174,
     174,   273,   273,   -51,    51,    36,    20,   -51,   -51,   310,
     -51,   -51,   273,    47,   273,    43,     1,   -51,    38,   -51,
     273,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   273,   -51,   -14,   -14,   -51,   -14,   -14,   -14,   -14,
     354,   354,   -51,   -51,   244,    45,   -51,    48,   174,    49,
     -51,   -51,    42,    38,   -51,    47,    63,   174,   -51,    47,
     -51,   -51,     7,     7,    18,    18,   -51,   -51,   209,   273,
      53,    58,    75,    67,   322,    65,   244,   -51,   244,   -51,
     209,   273,   354,    79,    38,    70,    69,   354,   -51,   -51,
     354,    74,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
      76,   -51,    -4,    82,    83,   -51,    12,   174,   -51,   -51,
     244,   244,   -51,   -51,   -51,   347,   244,   100,   102,   244,
       5,   103,   -51,   -51,   104,    22,   109,   121,   -51,   130,
     -51,   -51,   113,   -51,   244,   -51,   -51,   244,   114,   -51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -51,   -51,   -17,    24,   -51,   -33,   -51,    31,   -51,   -51,
      25,   -40,    66,   -20,   -50,   -51,   -13,     3,     4,     8,
      28,   -51,    -2,   -51,   -51,   -51,   -51,    17,   -51,   -51,
     -51,   -51,    61,   150,   -51,    52,   127,   -51,   -51
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -79
static const yytype_int16 yytable[] =
{
      39,    43,    41,    83,    79,    33,     5,    51,    52,    53,
      54,    38,     9,    35,    72,    73,    70,    71,     1,     2,
       3,    13,    42,    65,   103,    81,   -31,    84,    59,    60,
     155,     4,    37,    90,    40,    57,    58,    65,    45,    46,
      86,   100,   -26,    87,    91,   114,   142,    44,   119,   143,
      66,    67,    57,    58,   102,    50,   103,    75,   103,    77,
     119,   104,    78,    68,    69,   112,    92,    93,    65,    65,
      94,    95,    82,   100,   117,   100,    96,    97,    85,    89,
     110,   111,   122,   113,    87,   120,   102,   123,   102,   116,
     103,   103,   124,   104,   131,   104,   103,   120,    99,   103,
      46,   125,    65,   127,   132,   101,   133,   100,   100,   134,
      65,   135,   136,   100,   103,    65,   100,   103,    65,   138,
     102,   102,    86,   128,   145,   129,   102,   104,   104,   102,
      99,   100,    99,   104,   100,   107,   104,   101,   152,   101,
     153,   158,   160,    65,   102,   162,   163,   102,   157,   164,
     165,   104,   169,   161,   104,   118,    34,   147,   148,   139,
     137,    76,   130,   151,    99,    99,   154,   107,     0,   107,
      99,   101,   101,    99,     0,     0,     0,   101,     0,     0,
     101,   166,     0,     0,   168,     0,     0,     0,    99,     0,
       0,    99,     0,     0,     5,   101,     0,     0,   101,    38,
       9,   107,   107,     0,    11,    12,     0,   107,     0,    13,
     107,   -11,     0,     0,     1,     2,     3,    14,    15,     0,
       0,    16,     0,     0,     0,   107,     0,     4,   107,     5,
       0,     5,     6,     7,     8,     9,     8,     9,    10,    11,
      12,    11,    12,     0,    13,     0,    13,     1,     2,     3,
      75,     0,    14,    15,    14,    15,    16,     0,    16,     0,
       4,     0,    98,     0,     5,     6,     0,     0,     0,     8,
       9,    10,     0,     0,    11,    12,     1,     2,     3,    13,
       0,    33,   -78,     0,     0,     0,     0,    14,    15,     4,
       0,    16,     0,     5,     6,     7,     0,     0,     8,     9,
      10,     0,     0,    11,    12,     0,     0,     0,    13,    51,
      52,    53,    54,     0,     0,     0,    14,    15,     0,     0,
      16,    51,    52,    53,    54,     0,    55,    56,    57,    58,
      59,    60,    61,    51,    52,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,    62,    80,     0,     0,     0,
      55,    56,    57,    58,    59,    60,   126,    62,    51,    52,
      53,    54,     0,     0,     0,    51,    52,    53,    54,    62,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,   150,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,    62,     0,     0,     0,     0,     0,
       0,    62
};

static const yytype_int16 yycheck[] =
{
      13,    21,    19,    43,    37,    37,    20,    11,    12,    13,
      14,    25,    26,    32,    31,    32,    29,    30,     3,     4,
       5,    35,    34,    25,    74,    42,    42,    44,    32,    33,
      25,    16,    35,    50,     0,    30,    31,    39,    24,    25,
      39,    74,    41,    42,    61,    85,    34,    34,    98,    37,
      43,    44,    30,    31,    74,    34,   106,     6,   108,    23,
     110,    74,    42,    45,    46,    78,    63,    64,    70,    71,
      66,    67,    25,   106,    87,   108,    68,    69,    35,    41,
      35,    33,    99,    34,    42,    98,   106,    34,   108,    26,
     140,   141,    34,   106,   111,   108,   146,   110,    74,   149,
      25,    34,   104,    38,    25,    74,    36,   140,   141,    40,
     112,    37,    36,   146,   164,   117,   149,   167,   120,    37,
     140,   141,    39,   106,   137,   108,   146,   140,   141,   149,
     106,   164,   108,   146,   167,    74,   149,   106,    38,   108,
      38,    38,    38,   145,   164,    36,    25,   167,   150,    19,
      37,   164,    38,   155,   167,    89,     6,   140,   141,   134,
     132,    34,   110,   146,   140,   141,   149,   106,    -1,   108,
     146,   140,   141,   149,    -1,    -1,    -1,   146,    -1,    -1,
     149,   164,    -1,    -1,   167,    -1,    -1,    -1,   164,    -1,
      -1,   167,    -1,    -1,    20,   164,    -1,    -1,   167,    25,
      26,   140,   141,    -1,    30,    31,    -1,   146,    -1,    35,
     149,     0,    -1,    -1,     3,     4,     5,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,   164,    -1,    16,   167,    20,
      -1,    20,    21,    22,    25,    26,    25,    26,    27,    30,
      31,    30,    31,    -1,    35,    -1,    35,     3,     4,     5,
       6,    -1,    43,    44,    43,    44,    47,    -1,    47,    -1,
      16,    -1,    18,    -1,    20,    21,    -1,    -1,    -1,    25,
      26,    27,    -1,    -1,    30,    31,     3,     4,     5,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    43,    44,    16,
      -1,    47,    -1,    20,    21,    22,    -1,    -1,    25,    26,
      27,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,    11,
      12,    13,    14,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    11,    12,    13,    14,    -1,    28,    29,    30,    31,
      32,    33,    34,    11,    12,    13,    14,    -1,    28,    29,
      30,    31,    32,    33,    -1,    47,    36,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    47,    11,    12,
      13,    14,    -1,    -1,    -1,    11,    12,    13,    14,    47,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    28,    29,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    16,    20,    21,    22,    25,    26,
      27,    30,    31,    35,    43,    44,    47,    50,    51,    52,
      54,    55,    56,    62,    63,    65,    66,    67,    68,    71,
      72,    73,    81,    37,    82,    32,    64,    35,    25,    65,
       0,    51,    34,    62,    34,    24,    25,    58,    60,    61,
      34,    11,    12,    13,    14,    28,    29,    30,    31,    32,
      33,    34,    47,    69,    70,    71,    43,    44,    45,    46,
      65,    65,    51,    51,    83,     6,    85,    23,    42,    54,
      36,    51,    25,    60,    51,    35,    39,    42,    59,    41,
      51,    51,    66,    66,    67,    67,    68,    68,    18,    52,
      54,    56,    62,    63,    65,    76,    77,    81,    82,    85,
      35,    33,    65,    34,    60,    75,    26,    65,    61,    63,
      65,    84,    51,    34,    34,    34,    34,    38,    76,    76,
      84,    51,    25,    36,    40,    37,    36,    69,    37,    59,
      78,    79,    34,    37,    86,    65,    74,    76,    76,    87,
      34,    76,    38,    38,    76,    25,    57,    71,    38,    80,
      38,    71,    36,    25,    19,    37,    76,    53,    76,    38
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 27 "parser.y"
    { if(err==0) printf("Valid syntax\n");
	 YYACCEPT; }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 44 "parser.y"
    {scope++;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 44 "parser.y"
    {scope--;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 45 "parser.y"
    {printf(" ");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 54 "parser.y"
    {
		if(check_sym_tab((yyvsp[(1) - (2)])))	
				{
					printf("Variable %s already declared\n",(yyvsp[(1) - (2)]));
					yyerror((yyvsp[(1) - (2)]));
				}
				else
				{
				insert_symbol((yyvsp[(1) - (2)]),size(type)*arraysize,type,yylineno,scope);
				arraysize=1;	
				// type=-1;
				}
		}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 68 "parser.y"
    { arraysize*=atoi((yyvsp[(2) - (4)]));}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {
				if(check_sym_tab((yyvsp[(1) - (3)])))	
				{
					printf("Variable %s already declared\n",(yyvsp[(1) - (3)]));
					yyerror((yyvsp[(1) - (3)]));
				}
				else
				{
				insert_symbol((yyvsp[(1) - (3)]),size(type),type,yylineno,scope);
				insert_val((yyvsp[(1) - (3)]),vval,yylineno);
				vval="~";	
				// type=-1;
				}
			}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {
				if(check_sym_tab((yyvsp[(1) - (1)])))	
				{
					printf("Variable %s already declared\n",(yyvsp[(1) - (1)]));
					yyerror((yyvsp[(1) - (1)]));
				}
				else{
				insert_symbol((yyvsp[(1) - (1)]),size(type),type,yylineno,scope);
				// type=-1;	
				}
			}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {type = INT;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    {type = FLOAT;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {type = DOUBLE;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    {type = CHAR;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    {type=retrieve_type((yyvsp[(1) - (1)]));}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    {
				if(!check_sym_tab((yyvsp[(1) - (4)])))	
				{
					printf("Variable %s not declared\n",(yyvsp[(1) - (4)]));
					yyerror((yyvsp[(1) - (4)]));
				}
				insert_val((yyvsp[(1) - (4)]),vval,yylineno);
				vval="~";		
				// type=-1;		
			}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {vval=(yyvsp[(1) - (1)]);}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    { 
			if(vtype==2)				//integer
				sprintf((yyval),"%d",(atoi((yyvsp[(1) - (3)]))+atoi((yyvsp[(3) - (3)]))));
			else if(vtype==3)			//float or double
				sprintf((yyval),"%lf",(atof((yyvsp[(1) - (3)]))+atof((yyvsp[(3) - (3)]))));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror((yyval));
				(yyval)="~";
			}
		}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    { 
			if(vtype==2)				//integer
				sprintf((yyval),"%d",(atoi((yyvsp[(1) - (3)]))-atoi((yyvsp[(3) - (3)]))));
			else if(vtype==3)			//float or double
				sprintf((yyval),"%lf",(atof((yyvsp[(1) - (3)]))-atof((yyvsp[(3) - (3)]))));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror((yyval));
				(yyval)="~";
			}
		}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    { 
			if(vtype==2)				//integer
				sprintf((yyval),"%d",(atoi((yyvsp[(1) - (3)]))*atoi((yyvsp[(3) - (3)]))));
			else if(vtype==3)			//float or double
				sprintf((yyval),"%lf",(atof((yyvsp[(1) - (3)]))*atof((yyvsp[(3) - (3)]))));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror((yyval));
				(yyval)="~";
			}
		}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    { 
			if(vtype==2)				//integer
				sprintf((yyval),"%d",(atoi((yyvsp[(1) - (3)]))/atoi((yyvsp[(3) - (3)]))));
			else if(vtype==3)			//float or double
				sprintf((yyval),"%lf",(atof((yyvsp[(1) - (3)]))/atof((yyvsp[(3) - (3)]))));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror((yyval));
				(yyval)="~";
			}
		}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {
			if(check_sym_tab((yyvsp[(1) - (1)])))		
			{
				char* check=retrieve_val((yyvsp[(1) - (1)]));
				if(check=="~")		//if variable has no value then can't be used for assignment
				{
					printf("Variable %s not initialised",(yyvsp[(1) - (1)]));
					yyerror((yyvsp[(1) - (1)]));
				}
				else
				{	
					(yyval)=strdup(check);
					vtype=type_check(check);	
					if(vtype!=type && type!=-1)	
					{
						printf("Mismatch type\n");
						yyerror((yyvsp[(1) - (1)]));
					}	
				}
			}
			else
			{
					printf("Variable %s not declared\n",(yyvsp[(1) - (1)]));
					yyerror((yyvsp[(1) - (1)]));
			}
		}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {
    			(yyval)=strdup((yyvsp[(1) - (1)])); 
    			vtype=type_check((yyvsp[(1) - (1)]));
    			if(vtype!=type && type!=-1)	
			{
				printf("Mismatch type\n");
				yyerror((yyvsp[(1) - (1)]));
			}
		}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    {
    			(yyval)=strdup((yyvsp[(1) - (1)])); 
    			vtype=1;
			if(vtype!=type)		
			{
				printf("Mismatch type\n");	
				yyerror((yyvsp[(1) - (1)]));
			}
		}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    {scope++;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    {scope--;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    {scope++;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    {scope--;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    {scope++;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    {scope--;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 290 "parser.y"
    {scope++;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 290 "parser.y"
    {scope--;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    {scope++;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    {scope--;}
    break;



/* Line 1455 of yacc.c  */
#line 1959 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 312 "parser.y"



/* error handling function */
void yyerror(char* s)
{
	err+=1;
	printf("Error :syntax error,line number:%d,token:%s \n",yylineno,yytext);
}
int yywrap()
{
    return(1);
}

/* main function - calls the yyparse() function which will in turn drive yylex() as well */
int main(int argc, char* argv[])
{
	t=init_table();
	//printf("here \n");
	yyparse();
	display_sym_tab();
	return 0;
}
