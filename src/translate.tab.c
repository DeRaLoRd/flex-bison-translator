
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
#line 1 "translate.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE* yyin;
extern FILE* yyout;

int yylex();
void yyerror(char* s);
void printTabs(int);

// 0 - disable, 1 - enable
int yydebug = 1;

// string with right amount of tabs
char* tabs = NULL;
int tabs_amount = 0;

int iterator_amount = 0;


/* Line 189 of yacc.c  */
#line 96 "translate.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     PROGRAM_START = 258,
     USES_KW = 259,
     VAR_KW = 260,
     CONST_KW = 261,
     BEGIN_KW = 262,
     END_KW = 263,
     COMMENT = 264,
     WRITE_F = 265,
     WRITELN_F = 266,
     READ_F = 267,
     READLN_F = 268,
     USHORT_T = 269,
     SHORT_T = 270,
     UINT_T = 271,
     INT_T = 272,
     ULONG_T = 273,
     LONG_T = 274,
     LONG_LONG_T = 275,
     FLOAT_T = 276,
     DOUBLE_T = 277,
     UCHAR_T = 278,
     CHAR_T = 279,
     WCHAR_T = 280,
     STRING_T = 281,
     OPEN_BR = 282,
     CLOSE_BR = 283,
     OPEN_SQUARE = 284,
     CLOSE_SQUARE = 285,
     OPEN_CURLY = 286,
     CLOSE_CURLY = 287,
     QUOTE = 288,
     ASTERISK = 289,
     PLUS = 290,
     MINUS = 291,
     DIV_F = 292,
     DIV_KW = 293,
     MOD_KW = 294,
     ASSIGN = 295,
     EQUALS = 296,
     NOT_EQUAL = 297,
     LESS_THAN = 298,
     GREATER_THAN = 299,
     LESS_OR_EQUALS = 300,
     GREATER_OR_EQUALS = 301,
     AND_KW = 302,
     OR_KW = 303,
     NOT_KW = 304,
     XOR_KW = 305,
     IF_KW = 306,
     THEN_KW = 307,
     ELSE_KW = 308,
     LOOP_KW = 309,
     WHILE_KW = 310,
     DO_KW = 311,
     FOR_KW = 312,
     TO_KW = 313,
     DOWNTO_KW = 314,
     REPEAT_KW = 315,
     UNTIL_KW = 316,
     BREAK_KW = 317,
     CONTINUE_KW = 318,
     PROCEDURE_KW = 319,
     FUNCTION_KW = 320,
     SEMICOLON = 321,
     COLON = 322,
     DOT = 323,
     RANGE = 324,
     COMMA = 325,
     NUMBER = 326,
     NUMBERF = 327,
     ID = 328,
     WORD = 329
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 23 "translate.y"

    char* cval;



/* Line 214 of yacc.c  */
#line 212 "translate.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 224 "translate.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   389

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  211

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    13,    14,    17,    18,    21,    23,
      24,    27,    30,    35,    42,    49,    51,    52,    55,    62,
      64,    66,    68,    70,    72,    74,    76,    78,    80,    82,
      84,    86,    88,    90,    92,    94,    96,    98,   100,   102,
     104,   106,   108,   110,   111,   114,   116,   121,   125,   126,
     127,   132,   134,   135,   140,   143,   147,   149,   150,   153,
     156,   158,   160,   162,   164,   166,   168,   171,   174,   176,
     178,   181,   185,   188,   190,   193,   197,   200,   204,   207,
     216,   225,   229,   231,   235,   241,   247,   253,   257,   259,
     262,   266,   268,   270,   272,   276,   280,   284,   288,   292,
     296,   300,   304,   308,   312,   316,   320,   324,   328,   332,
     336,   339
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      76,     0,    -1,    77,    79,    78,    90,    99,    -1,     3,
      73,    66,    -1,    -1,    80,    81,    -1,    -1,    84,    85,
      -1,     5,    -1,    -1,    81,    82,    -1,    81,    83,    -1,
      73,    67,    87,    66,    -1,    73,    67,    88,    41,    71,
      66,    -1,    73,    67,    89,    41,    72,    66,    -1,     6,
      -1,    -1,    85,    86,    -1,    73,    67,    88,    41,    71,
      66,    -1,    24,    -1,    23,    -1,    25,    -1,    15,    -1,
      14,    -1,    17,    -1,    16,    -1,    19,    -1,    18,    -1,
      20,    -1,    21,    -1,    22,    -1,    26,    -1,    24,    -1,
      23,    -1,    15,    -1,    14,    -1,    17,    -1,    16,    -1,
      19,    -1,    18,    -1,    20,    -1,    21,    -1,    22,    -1,
      -1,    90,    91,    -1,    92,    -1,    93,    94,    98,   118,
      -1,    64,    73,    27,    -1,    -1,    -1,    94,    66,    95,
      96,    -1,    96,    -1,    -1,    73,    97,    67,    87,    -1,
      28,    66,    -1,   100,   101,   123,    -1,     7,    -1,    -1,
     101,   102,    -1,   121,    66,    -1,   103,    -1,   105,    -1,
     107,    -1,   109,    -1,   111,    -1,   113,    -1,    62,    66,
      -1,    63,    66,    -1,   116,    -1,   117,    -1,   104,   118,
      -1,    51,   122,    52,    -1,   106,   118,    -1,    53,    -1,
     108,   118,    -1,    55,   122,    56,    -1,   110,   118,    -1,
      54,   122,    56,    -1,   112,   118,    -1,    57,     5,    73,
      40,   122,    58,   122,    56,    -1,    57,     5,    73,    40,
     122,    59,   122,    56,    -1,   114,   118,   115,    -1,    60,
      -1,    61,   122,    66,    -1,    10,    27,   122,    28,    66,
      -1,    11,    27,   122,    28,    66,    -1,    12,    27,    73,
      28,    66,    -1,   119,   101,   120,    -1,     7,    -1,     8,
      66,    -1,    73,    40,   122,    -1,    71,    -1,    72,    -1,
      73,    -1,    27,   122,    28,    -1,   122,    35,   122,    -1,
     122,    36,   122,    -1,   122,    34,   122,    -1,   122,    37,
     122,    -1,   122,    38,   122,    -1,   122,    39,   122,    -1,
     122,    44,   122,    -1,   122,    46,   122,    -1,   122,    43,
     122,    -1,   122,    45,   122,    -1,   122,    41,   122,    -1,
     122,    42,   122,    -1,   122,    47,   122,    -1,   122,    48,
     122,    -1,   122,    50,   122,    -1,    49,   122,    -1,     8,
      68,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    76,    91,    93,    96,    98,   102,   105,
     107,   108,   112,   116,   117,   121,   124,   126,   130,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   166,   167,   170,   172,   176,   181,   185,   188,   190,
     190,   191,   195,   195,   199,   208,   212,   215,   217,   221,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     238,   242,   249,   253,   259,   263,   270,   274,   283,   287,
     291,   298,   302,   309,   316,   320,   327,   334,   338,   346,
     354,   358,   359,   360,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   382
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM_START", "USES_KW", "VAR_KW",
  "CONST_KW", "BEGIN_KW", "END_KW", "COMMENT", "WRITE_F", "WRITELN_F",
  "READ_F", "READLN_F", "USHORT_T", "SHORT_T", "UINT_T", "INT_T",
  "ULONG_T", "LONG_T", "LONG_LONG_T", "FLOAT_T", "DOUBLE_T", "UCHAR_T",
  "CHAR_T", "WCHAR_T", "STRING_T", "OPEN_BR", "CLOSE_BR", "OPEN_SQUARE",
  "CLOSE_SQUARE", "OPEN_CURLY", "CLOSE_CURLY", "QUOTE", "ASTERISK", "PLUS",
  "MINUS", "DIV_F", "DIV_KW", "MOD_KW", "ASSIGN", "EQUALS", "NOT_EQUAL",
  "LESS_THAN", "GREATER_THAN", "LESS_OR_EQUALS", "GREATER_OR_EQUALS",
  "AND_KW", "OR_KW", "NOT_KW", "XOR_KW", "IF_KW", "THEN_KW", "ELSE_KW",
  "LOOP_KW", "WHILE_KW", "DO_KW", "FOR_KW", "TO_KW", "DOWNTO_KW",
  "REPEAT_KW", "UNTIL_KW", "BREAK_KW", "CONTINUE_KW", "PROCEDURE_KW",
  "FUNCTION_KW", "SEMICOLON", "COLON", "DOT", "RANGE", "COMMA", "NUMBER",
  "NUMBERF", "ID", "WORD", "$accept", "program", "start_block",
  "var_block", "const_block", "var_block_begin", "var_decls", "var_decl",
  "var_decl_init", "const_block_begin", "const_decls", "const_decl",
  "gen_var_type", "int_var_type", "float_var_type", "funcs_procs_block",
  "func_proc", "procedure", "procedure_begin", "params", "$@1", "param",
  "$@2", "procedure_end", "prog_block", "prog_block_begin", "commands",
  "command", "if_stmt", "if_stmt_begin", "else_stmt", "else_stmt_begin",
  "while_stmt", "while_stmt_begin", "loop_stmt", "loop_stmt_begin",
  "for_stmt", "for_stmt_begin", "repeat_stmt", "repeat_stmt_begin",
  "repeat_stmt_end", "print_command", "read_command", "commands_block",
  "commands_block_begin", "commands_block_end", "num_assignment", "expr",
  "prog_block_end", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    78,    78,    79,    79,    80,    81,
      81,    81,    82,    83,    83,    84,    85,    85,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    89,    89,    90,    90,    91,    92,    93,    94,    95,
      94,    94,    97,    96,    98,    99,   100,   101,   101,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     112,   113,   114,   115,   116,   116,   117,   118,   119,   120,
     121,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   123
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     3,     0,     2,     0,     2,     1,     0,
       2,     2,     4,     6,     6,     1,     0,     2,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     4,     3,     0,     0,
       4,     1,     0,     4,     2,     3,     1,     0,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     3,     2,     1,     2,     3,     2,     3,     2,     8,
       8,     3,     1,     3,     5,     5,     5,     3,     1,     2,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     6,     0,     1,    15,     4,    16,     3,
       8,    43,     9,     7,     0,     5,     0,    17,    56,     0,
      44,    45,    48,     2,    57,     0,    10,    11,     0,     0,
      52,     0,    51,     0,     0,    35,    34,    37,    36,    39,
      38,    40,    33,    32,     0,    47,     0,     0,    49,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,    82,
       0,     0,     0,    58,    60,     0,    61,     0,    62,     0,
      63,     0,    64,     0,    65,     0,    68,    69,     0,    55,
      23,    22,    25,    24,    27,    26,    28,    29,    30,    20,
      19,    21,    31,     0,     0,     0,     0,     0,    54,     0,
      88,    46,    57,   111,     0,     0,     0,     0,     0,    91,
      92,    93,     0,     0,     0,     0,    66,    67,     0,    70,
      72,    74,    76,    78,     0,    59,    12,     0,     0,     0,
      23,    22,    25,    24,    27,    26,    28,    29,    30,    20,
      19,    53,    50,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    77,    75,     0,    90,     0,
      81,     0,     0,    18,     0,    87,     0,     0,     0,    94,
      97,    95,    96,    98,    99,   100,   105,   106,   103,   101,
     104,   102,   107,   108,   109,     0,     0,    13,    14,    89,
      84,    85,    86,     0,    83,     0,     0,     0,     0,    79,
      80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    11,     7,    12,    15,    26,    27,     8,
      13,    17,    93,    44,    95,    14,    20,    21,    22,    31,
      99,    32,    46,    49,    23,    24,    33,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     170,    76,    77,   101,   102,   175,    78,   112,    79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -68
static const yytype_int16 yypact[] =
{
       4,   -67,     8,     6,   -57,   -68,   -68,     5,   -68,   -68,
     -68,   -68,   -68,   -54,    -5,   -52,   -50,   -68,   -68,   -43,
     -68,   -68,   -40,   -68,   -68,   -44,   -68,   -68,   118,     7,
     -68,   -25,   -68,     3,   350,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,    -6,   -68,   -31,   -24,   -68,    36,
     -23,    19,    20,    23,    12,   -68,    12,    12,    39,   -68,
     -13,   -11,    24,   -68,   -68,    36,   -68,    36,   -68,    36,
     -68,    36,   -68,    36,   -68,    36,   -68,   -68,     1,   -68,
      28,    32,    34,    37,    40,    41,    45,    46,    47,    48,
      50,   -68,   -68,    26,    67,    68,    49,   363,   -68,   -40,
     -68,   -68,   -68,   -68,    12,    12,    38,    12,    12,   -68,
     -68,   -68,   294,   143,   166,    56,   -68,   -68,    12,   -68,
     -68,   -68,   -68,   -68,    51,   -68,   -68,    60,    71,    44,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,    17,   189,   210,   112,   231,   -37,    12,
      12,    12,    12,    12,    12,    12,    12,    12,    12,    12,
      12,    12,    12,    12,   -68,   -68,   -68,   104,   313,    12,
     -68,    79,    81,   -68,    82,   -68,    91,   100,   102,   -68,
     -10,   -10,   -10,   -10,   -10,   -10,   -37,   -37,   -10,   -10,
     -10,   -10,   -37,   -37,   -37,    12,    80,   -68,   -68,   -68,
     -68,   -68,   -68,   117,   -68,    12,    12,   248,   271,   -68,
     -68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,    72,   136,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,    73,   -68,   -68,   -68,   -68,    69,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -49,   -68,   -68,   -68,   -56,   -68
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -43
static const yytype_int16 yytable[] =
{
     113,   114,    18,    47,   155,   156,     4,     1,     5,     9,
      10,    50,     6,    51,    52,    53,   119,    28,   120,    16,
     121,    25,   122,    34,   123,   174,   124,    51,    52,    53,
      29,   155,   156,    30,    45,    96,    97,   161,   162,   107,
     163,    48,    98,   100,   115,   103,   104,   105,   144,   145,
     106,   147,   148,   116,    54,   117,    55,    56,    57,    19,
      58,   108,   168,    59,   118,    60,    61,   125,    54,   -35,
      55,    56,    57,   -34,    58,   -37,    62,    59,   -36,    60,
      61,   -39,   -38,   109,   110,   111,   -40,   -41,   -42,   -33,
      62,   -32,   126,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   127,   128,
     173,   146,   169,   196,   149,   150,   151,   152,   153,   154,
     129,   155,   156,   157,   158,   159,   160,   161,   162,   167,
     163,   171,    35,    36,    37,    38,    39,    40,    41,   203,
     178,    42,    43,   172,   195,   197,   204,   198,   199,   207,
     208,   149,   150,   151,   152,   153,   154,   200,   155,   156,
     157,   158,   159,   160,   161,   162,   201,   163,   202,   141,
      94,   143,   142,     0,     0,   205,   206,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,   158,   159,   160,
     161,   162,     0,   163,     0,     0,     0,     0,     0,   165,
     149,   150,   151,   152,   153,   154,     0,   155,   156,   157,
     158,   159,   160,   161,   162,     0,   163,   176,     0,     0,
       0,     0,   166,   149,   150,   151,   152,   153,   154,     0,
     155,   156,   157,   158,   159,   160,   161,   162,   177,   163,
       0,     0,     0,     0,   149,   150,   151,   152,   153,   154,
       0,   155,   156,   157,   158,   159,   160,   161,   162,   179,
     163,     0,     0,     0,     0,   149,   150,   151,   152,   153,
     154,     0,   155,   156,   157,   158,   159,   160,   161,   162,
       0,   163,   149,   150,   151,   152,   153,   154,     0,   155,
     156,   157,   158,   159,   160,   161,   162,     0,   163,     0,
       0,     0,     0,     0,   209,   149,   150,   151,   152,   153,
     154,     0,   155,   156,   157,   158,   159,   160,   161,   162,
       0,   163,     0,     0,     0,     0,     0,   210,   149,   150,
     151,   152,   153,   154,     0,   155,   156,   157,   158,   159,
     160,   161,   162,     0,   163,     0,   164,   149,   150,   151,
     152,   153,   154,     0,   155,   156,   157,   158,   159,   160,
     161,   162,     0,   163,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,    91,    92
};

static const yytype_int16 yycheck[] =
{
      56,    57,     7,    28,    41,    42,    73,     3,     0,    66,
       5,     8,     6,    10,    11,    12,    65,    67,    67,    73,
      69,    73,    71,    67,    73,     8,    75,    10,    11,    12,
      73,    41,    42,    73,    27,    41,    67,    47,    48,    27,
      50,    66,    66,     7,     5,    68,    27,    27,   104,   105,
      27,   107,   108,    66,    51,    66,    53,    54,    55,    64,
      57,    49,   118,    60,    40,    62,    63,    66,    51,    41,
      53,    54,    55,    41,    57,    41,    73,    60,    41,    62,
      63,    41,    41,    71,    72,    73,    41,    41,    41,    41,
      73,    41,    66,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    41,    41,
      66,    73,    61,   169,    34,    35,    36,    37,    38,    39,
      71,    41,    42,    43,    44,    45,    46,    47,    48,    73,
      50,    71,    14,    15,    16,    17,    18,    19,    20,   195,
      28,    23,    24,    72,    40,    66,    66,    66,    66,   205,
     206,    34,    35,    36,    37,    38,    39,    66,    41,    42,
      43,    44,    45,    46,    47,    48,    66,    50,    66,    97,
      34,   102,    99,    -1,    -1,    58,    59,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    28,    -1,    -1,
      -1,    -1,    56,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    28,    50,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    28,
      50,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    56,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    34,    35,
      36,    37,    38,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    52,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    76,    77,    73,     0,     6,    79,    84,    66,
       5,    78,    80,    85,    90,    81,    73,    86,     7,    64,
      91,    92,    93,    99,   100,    73,    82,    83,    67,    73,
      73,    94,    96,   101,    67,    14,    15,    16,    17,    18,
      19,    20,    23,    24,    88,    27,    97,    28,    66,    98,
       8,    10,    11,    12,    51,    53,    54,    55,    57,    60,
      62,    63,    73,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   116,   117,   121,   123,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    87,    88,    89,    41,    67,    66,    95,
       7,   118,   119,    68,    27,    27,    27,    27,    49,    71,
      72,    73,   122,   122,   122,     5,    66,    66,    40,   118,
     118,   118,   118,   118,   118,    66,    66,    41,    41,    71,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    87,    96,   101,   122,   122,    73,   122,   122,    34,
      35,    36,    37,    38,    39,    41,    42,    43,    44,    45,
      46,    47,    48,    50,    52,    56,    56,    73,   122,    61,
     115,    71,    72,    66,     8,   120,    28,    28,    28,    28,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,    40,   122,    66,    66,    66,
      66,    66,    66,   122,    66,    58,    59,   122,   122,    56,
      56
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
        case 3:

/* Line 1455 of yacc.c  */
#line 76 "translate.y"
    {
        fprintf(yyout, "/* Translated through PTSD - Pascal To \"Si\" translaDor\n" \
                       " * By Vasiliy Tarasevich 2024\n" \
                       " * Original programme name - %s\n" \
                       " */\n\n", (yyvsp[(2) - (3)].cval));

        fprintf(yyout, "#include <stdio.h>\n" \
                       "#include <stdlib.h>\n" \
                       "#include <string.h>\n" \
                       "#include <stddef.h>\n");
    ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 102 "translate.y"
    {fprintf(yyout, "\n// Global variables\n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 112 "translate.y"
    {fprintf(yyout, "%s %s;\n", (yyvsp[(3) - (4)].cval), (yyvsp[(1) - (4)].cval));;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 116 "translate.y"
    {fprintf(yyout, "%s %s = %s;\n", (yyvsp[(3) - (6)].cval), (yyvsp[(1) - (6)].cval), (yyvsp[(5) - (6)].cval));;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 117 "translate.y"
    {fprintf(yyout, "%s %s = %s;\n", (yyvsp[(3) - (6)].cval), (yyvsp[(1) - (6)].cval), (yyvsp[(5) - (6)].cval));;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 121 "translate.y"
    {fprintf(yyout, "\n// Global constants\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 130 "translate.y"
    {fprintf(yyout, "const %s %s = %s;\n", (yyvsp[(3) - (6)].cval), (yyvsp[(1) - (6)].cval), (yyvsp[(5) - (6)].cval));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 185 "translate.y"
    {fprintf(yyout, "void %s(", (yyvsp[(2) - (3)].cval));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 190 "translate.y"
    {fprintf(yyout, ", ");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 195 "translate.y"
    {printf("%s", (yyvsp[(1) - (1)].cval));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 195 "translate.y"
    {fprintf(yyout, "%s %s", (yyvsp[(4) - (4)].cval), (yyvsp[(1) - (4)].cval));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 199 "translate.y"
    {fprintf(yyout, ")\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 212 "translate.y"
    {fprintf(yyout, "\nint main()\n{\n"); tabs_amount++;;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 221 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "%s;\n", (yyvsp[(1) - (2)].cval));
    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 231 "translate.y"
    {printTabs(tabs_amount); fprintf(yyout, "break;\n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 232 "translate.y"
    {printTabs(tabs_amount); fprintf(yyout, "continue;\n");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 242 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "if (%s)\n", (yyvsp[(2) - (3)].cval));
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 253 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "else\n");
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 263 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "while (%s)\n", (yyvsp[(2) - (3)].cval));
    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 274 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "for (int ptsd_iterator%d = 0; ptsd_iterator%d < %s; ptsd_iterator%d++)\n", 
                        iterator_amount, iterator_amount, (yyvsp[(2) - (3)].cval), iterator_amount);
        iterator_amount++;
    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 287 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "for (int %s = %s; %s < %s; %s++)\n", (yyvsp[(3) - (8)].cval), (yyvsp[(5) - (8)].cval), (yyvsp[(3) - (8)].cval), (yyvsp[(7) - (8)].cval), (yyvsp[(3) - (8)].cval));
    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 291 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "for (int %s = %s; %s > %s; %s--)\n", (yyvsp[(3) - (8)].cval), (yyvsp[(5) - (8)].cval), (yyvsp[(3) - (8)].cval), (yyvsp[(7) - (8)].cval), (yyvsp[(3) - (8)].cval));
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 302 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "do\n");
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 309 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "while (%s);\n", (yyvsp[(2) - (3)].cval));
    ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 316 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "printf(\"%%lf\", %s);\n", (yyvsp[(3) - (5)].cval));
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 320 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "printf(\"%%lf\\n\", %s);\n", (yyvsp[(3) - (5)].cval));
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 327 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "scanf(\"%%lf\", &%s);\n", (yyvsp[(3) - (5)].cval));
    ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 338 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "{\n");
        tabs_amount++;
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 346 "translate.y"
    {
        tabs_amount--;
        printTabs(tabs_amount);
        fprintf(yyout, "}\n");
    ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 354 "translate.y"
    {sprintf((yyval.cval), "%s = %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 358 "translate.y"
    {sprintf((yyval.cval), "%s", (yyvsp[(1) - (1)].cval));;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 359 "translate.y"
    {sprintf((yyval.cval), "%s", (yyvsp[(1) - (1)].cval));;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 360 "translate.y"
    {sprintf((yyval.cval), "%s", (yyvsp[(1) - (1)].cval));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 362 "translate.y"
    {sprintf((yyval.cval), "(%s)", (yyvsp[(2) - (3)].cval));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 363 "translate.y"
    {sprintf((yyval.cval), "%s + %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 364 "translate.y"
    {sprintf((yyval.cval), "%s - %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 365 "translate.y"
    {sprintf((yyval.cval), "%s * %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 366 "translate.y"
    {sprintf((yyval.cval), "%s / %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 367 "translate.y"
    {sprintf((yyval.cval), "%s / %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 368 "translate.y"
    {sprintf((yyval.cval), "%s %% %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 369 "translate.y"
    {sprintf((yyval.cval), "%s > %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 370 "translate.y"
    {sprintf((yyval.cval), "%s >= %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 371 "translate.y"
    {sprintf((yyval.cval), "%s < %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 372 "translate.y"
    {sprintf((yyval.cval), "%s <= %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 373 "translate.y"
    {sprintf((yyval.cval), "%s == %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 374 "translate.y"
    {sprintf((yyval.cval), "%s != %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 375 "translate.y"
    {sprintf((yyval.cval), "%s && %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 376 "translate.y"
    {sprintf((yyval.cval), "%s || %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 377 "translate.y"
    {sprintf((yyval.cval), "%s ^ %s", (yyvsp[(1) - (3)].cval), (yyvsp[(3) - (3)].cval));;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 378 "translate.y"
    {sprintf((yyval.cval), "!%s", (yyvsp[(2) - (2)].cval));;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 382 "translate.y"
    {
        printTabs(tabs_amount);
        fprintf(yyout, "return 0;\n}");
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2078 "translate.tab.c"
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
#line 388 "translate.y"


int main()
{
    yyin = fopen("source.txt", "r");
    yyout = fopen("output.c", "w");

    yyparse();
}

void yyerror(char* s)
{
    printf("%s", s);
}

void printTabs(int amount)
{
    for (int i = 0; i < amount; i++) {
        fprintf(yyout, "\t");
    }
}
