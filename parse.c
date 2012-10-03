/* A Bison parser, made by GNU Bison 2.0.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AND = 258,
     OR = 259,
     NOT = 260,
     LBRACE = 261,
     RBRACE = 262,
     LSQBRACE = 263,
     RSQBRACE = 264,
     THEN = 265,
     MATCH = 266,
     PERMIT = 267,
     DENY = 268,
     ASK = 269,
     EQ = 270,
     NEQ = 271,
     TRUE = 272,
     SUB = 273,
     NSUB = 274,
     INPATH = 275,
     LOG = 276,
     COMMA = 277,
     IF = 278,
     USER = 279,
     GROUP = 280,
     EQUAL = 281,
     NEQUAL = 282,
     AS = 283,
     COLON = 284,
     RE = 285,
     LESSER = 286,
     GREATER = 287,
     STRING = 288,
     CMDSTRING = 289,
     NUMBER = 290
   };
#endif
#define AND 258
#define OR 259
#define NOT 260
#define LBRACE 261
#define RBRACE 262
#define LSQBRACE 263
#define RSQBRACE 264
#define THEN 265
#define MATCH 266
#define PERMIT 267
#define DENY 268
#define ASK 269
#define EQ 270
#define NEQ 271
#define TRUE 272
#define SUB 273
#define NSUB 274
#define INPATH 275
#define LOG 276
#define COMMA 277
#define IF 278
#define USER 279
#define GROUP 280
#define EQUAL 281
#define NEQUAL 282
#define AS 283
#define COLON 284
#define RE 285
#define LESSER 286
#define GREATER 287
#define STRING 288
#define CMDSTRING 289
#define NUMBER 290




/* Copy the first part of user declarations.  */
#line 32 "parse.y"

#include <sys/types.h>

#include <sys/time.h>
#include <sys/tree.h>

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <err.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
#include <regex.h>

#ifdef __linux__
#include <bits/posix1_lim.h>
#define MAXLOGNAME _POSIX_LOGIN_NAME_MAX
#endif /* __linux__ */

#include "intercept.h"
#include "systrace.h"
#include "systrace-errno.h"
#include "filter.h"

void yyrestart(FILE *);

struct logic *parse_newsymbol(char *, int, char *);

int yylex(void);
int yyparse(void);
int yyerror(const char *, ...);

int errors = 0;
struct filter *myfilter;
extern char *mystring;
extern int myoff;
extern int iamroot;



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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 91 "parse.y"
typedef union YYSTYPE {
	int number;
	char *string;
	short action;
	struct logic *logic;
	struct predicate predicate;
	struct elevate elevate;
	uid_t uid;
	gid_t gid;
} YYSTYPE;
/* Line 190 of yacc.c.  */
#line 200 "parse.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 212 "parse.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   71

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  12
/* YYNRULES -- Number of rules. */
#define YYNRULES  41
/* YYNRULES -- Number of states. */
#define YYNSTATES  77

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,    11,    12,    16,    17,    19,    21,    23,
      25,    27,    28,    31,    36,    40,    41,    47,    53,    59,
      65,    71,    77,    83,    89,    91,    94,    98,   102,   106,
     111,   116,   121,   126,   131,   136,   141,   143,   144,   148,
     150,   152
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      37,     0,    -1,    44,    10,    47,    38,    39,    42,    43,
      -1,    -1,     8,    33,     9,    -1,    -1,    21,    -1,    35,
      -1,    33,    -1,    35,    -1,    33,    -1,    -1,    28,    40,
      -1,    28,    40,    29,    41,    -1,    28,    29,    41,    -1,
      -1,    22,    23,    24,    26,    40,    -1,    22,    23,    24,
      27,    40,    -1,    22,    23,    24,    31,    40,    -1,    22,
      23,    24,    32,    40,    -1,    22,    23,    25,    26,    41,
      -1,    22,    23,    25,    27,    41,    -1,    22,    23,    25,
      31,    41,    -1,    22,    23,    25,    32,    41,    -1,    45,
      -1,     5,    44,    -1,     6,    44,     7,    -1,    44,     3,
      44,    -1,    44,     4,    44,    -1,    33,    46,    11,    34,
      -1,    33,    46,    15,    34,    -1,    33,    46,    16,    34,
      -1,    33,    46,    18,    34,    -1,    33,    46,    19,    34,
      -1,    33,    46,    20,    34,    -1,    33,    46,    30,    34,
      -1,    17,    -1,    -1,     8,    35,     9,    -1,    12,    -1,
      14,    -1,    13,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   103,   103,   152,   155,   162,   165,   172,   176,   187,
     191,   203,   206,   216,   227,   239,   242,   248,   254,   260,
     266,   272,   278,   284,   291,   295,   307,   311,   324,   339,
     349,   359,   369,   379,   389,   399,   429,   442,   445,   454,
     458,   462
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "OR", "NOT", "LBRACE", "RBRACE",
  "LSQBRACE", "RSQBRACE", "THEN", "MATCH", "PERMIT", "DENY", "ASK", "EQ",
  "NEQ", "TRUE", "SUB", "NSUB", "INPATH", "LOG", "COMMA", "IF", "USER",
  "GROUP", "EQUAL", "NEQUAL", "AS", "COLON", "RE", "LESSER", "GREATER",
  "STRING", "CMDSTRING", "NUMBER", "$accept", "fullexpression",
  "errorcode", "logcode", "uid", "gid", "elevate", "predicate",
  "expression", "symbol", "typeoff", "action", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    40,    41,
      41,    42,    42,    42,    42,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    44,    44,    44,    44,    44,    45,
      45,    45,    45,    45,    45,    45,    45,    46,    46,    47,
      47,    47
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     7,     0,     3,     0,     1,     1,     1,     1,
       1,     0,     2,     4,     3,     0,     5,     5,     5,     5,
       5,     5,     5,     5,     1,     2,     3,     3,     3,     4,
       4,     4,     4,     4,     4,     4,     1,     0,     3,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,    36,    37,     0,     0,    24,    25,     0,
       0,     0,     1,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,    39,    41,    40,
       3,    38,    29,    30,    31,    32,    33,    34,    35,     0,
       5,     0,     6,    11,     4,     0,    15,     0,     8,     7,
      12,     0,     2,    10,     9,    14,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
      17,    18,    19,    20,    21,    22,    23
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,     5,    40,    43,    50,    55,    46,    52,     6,     7,
      11,    30
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -49
static const yysigned_char yypact[] =
{
      -5,    -5,    -5,   -49,    -3,    27,    19,   -49,    10,    40,
     -11,    -9,   -49,    -5,    -5,    41,   -49,    25,     1,     5,
      18,    26,    28,    29,    30,    10,    10,   -49,   -49,   -49,
      33,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,    32,
      45,    52,   -49,    39,   -49,     7,    46,    23,   -49,   -49,
      42,    47,   -49,   -49,   -49,   -49,    23,    21,   -49,    -1,
       6,    24,    24,    24,    24,    23,    23,    23,    23,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
     -49,   -49,   -49,   -49,   -13,   -48,   -49,   -49,     2,   -49,
     -49,   -49
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned char yytable[] =
{
       1,     2,    18,     8,     9,    10,    19,    20,    58,    21,
      22,    23,     3,    13,    14,    25,    26,    73,    74,    75,
      76,    24,    13,    14,    17,    61,    62,    12,     4,    15,
      63,    64,    65,    66,    31,    32,    47,    67,    68,    33,
      48,    39,    49,    13,    14,    59,    60,    16,    69,    70,
      71,    72,    34,    27,    28,    29,    53,    48,    54,    49,
      35,    44,    36,    37,    38,    41,    42,    45,    51,     0,
      57,    56
};

static const yysigned_char yycheck[] =
{
       5,     6,    11,     1,     2,     8,    15,    16,    56,    18,
      19,    20,    17,     3,     4,    13,    14,    65,    66,    67,
      68,    30,     3,     4,    35,    26,    27,     0,    33,    10,
      31,    32,    26,    27,     9,    34,    29,    31,    32,    34,
      33,     8,    35,     3,     4,    24,    25,     7,    61,    62,
      63,    64,    34,    12,    13,    14,    33,    33,    35,    35,
      34,     9,    34,    34,    34,    33,    21,    28,    22,    -1,
      23,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     5,     6,    17,    33,    37,    44,    45,    44,    44,
       8,    46,     0,     3,     4,    10,     7,    35,    11,    15,
      16,    18,    19,    20,    30,    44,    44,    12,    13,    14,
      47,     9,    34,    34,    34,    34,    34,    34,    34,     8,
      38,    33,    21,    39,     9,    28,    42,    29,    33,    35,
      40,    22,    43,    33,    35,    41,    29,    23,    41,    24,
      25,    26,    27,    31,    32,    26,    27,    31,    32,    40,
      40,    40,    40,    41,    41,    41,    41
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
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
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  register short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;


  yyvsp[0] = yylval;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
#line 104 "parse.y"
    {
		int flags = 0, errorcode = SYSTRACE_EPERM;

		switch ((yyvsp[-4].action)) {
		case ICPOLICY_NEVER:
			if ((yyvsp[-3].string) == NULL)
				break;
			errorcode = systrace_error_translate((yyvsp[-3].string));
			if (errorcode == -1)
				yyerror("Unknown error code: %s", (yyvsp[-3].string));
			break;
		case ICPOLICY_PERMIT:
			if ((yyvsp[-3].string) == NULL)
				break;
			if (!strcasecmp((yyvsp[-3].string), "inherit"))
				flags = PROCESS_INHERIT_POLICY;
			else if (!strcasecmp((yyvsp[-3].string), "detach"))
				flags = PROCESS_DETACH;
			else
				yyerror("Unknown flag: %s", (yyvsp[-3].string));
			break;
		}

		if ((yyvsp[-2].number))
			flags |= SYSCALL_LOG;

		/* Special policy that allows only yes or no */
		if ((yyvsp[-4].action) == ICPOLICY_ASK)
			flags |= PROCESS_PROMPT;

		if ((yyvsp[-3].string) != NULL)
			free((yyvsp[-3].string));

		myfilter = calloc(1, sizeof(struct filter));
		if (myfilter == NULL) {
			yyerror("calloc");
			break;
		}
		myfilter->logicroot = (yyvsp[-6].logic);
		myfilter->match_action = (yyvsp[-4].action);
		myfilter->match_error = errorcode;
		myfilter->match_flags = flags;
		myfilter->match_predicate = (yyvsp[0].predicate);
		myfilter->elevate = (yyvsp[-1].elevate);
	}
    break;

  case 3:
#line 152 "parse.y"
    {
	(yyval.string) = NULL;
}
    break;

  case 4:
#line 156 "parse.y"
    {
	(yyval.string) = (yyvsp[-1].string);
}
    break;

  case 5:
#line 162 "parse.y"
    {
	(yyval.number) = 0;
}
    break;

  case 6:
#line 166 "parse.y"
    {
	(yyval.number) = 1;
}
    break;

  case 7:
#line 173 "parse.y"
    {
	(yyval.uid) = (yyvsp[0].number);
}
    break;

  case 8:
#line 177 "parse.y"
    {
	struct passwd *pw;
	if ((pw = getpwnam((yyvsp[0].string))) == NULL) {
		yyerror("Unknown user %s", (yyvsp[0].string));
		break;
	}

	(yyval.uid) = pw->pw_uid;
}
    break;

  case 9:
#line 188 "parse.y"
    {
	(yyval.gid) = (yyvsp[0].number);
}
    break;

  case 10:
#line 192 "parse.y"
    {
	struct group *gr;
	if ((gr = getgrnam((yyvsp[0].string))) == NULL) {
		yyerror("Unknown group %s", (yyvsp[0].string));
		break;
	}

	(yyval.gid) = gr->gr_gid;
}
    break;

  case 11:
#line 203 "parse.y"
    {
	memset(&(yyval.elevate), 0, sizeof((yyval.elevate)));
}
    break;

  case 12:
#line 207 "parse.y"
    {
	if (!iamroot) {
		yyerror("Privilege elevation not allowed.");
		break;
	}

	(yyval.elevate).e_flags = ELEVATE_UID;
	(yyval.elevate).e_uid = (yyvsp[0].uid);
}
    break;

  case 13:
#line 217 "parse.y"
    {
	if (!iamroot) {
		yyerror("Privilege elevation not allowed.");
		break;
	}

	(yyval.elevate).e_flags = ELEVATE_UID|ELEVATE_GID;
	(yyval.elevate).e_uid = (yyvsp[-2].uid);
	(yyval.elevate).e_gid = (yyvsp[0].gid);
}
    break;

  case 14:
#line 228 "parse.y"
    {
	if (!iamroot) {
		yyerror("Privilege elevation not allowed.");
		break;
	}

	(yyval.elevate).e_flags = ELEVATE_GID;
	(yyval.elevate).e_gid = (yyvsp[0].gid);
}
    break;

  case 15:
#line 239 "parse.y"
    {
	memset(&(yyval.predicate), 0, sizeof((yyval.predicate)));
}
    break;

  case 16:
#line 243 "parse.y"
    {
	memset(&(yyval.predicate), 0, sizeof((yyval.predicate)));
	(yyval.predicate).p_uid = (yyvsp[0].uid);
	(yyval.predicate).p_flags = PREDIC_UID;
}
    break;

  case 17:
#line 249 "parse.y"
    {
	memset(&(yyval.predicate), 0, sizeof((yyval.predicate)));
	(yyval.predicate).p_uid = (yyvsp[0].uid);
	(yyval.predicate).p_flags = PREDIC_UID | PREDIC_NEGATIVE;
}
    break;

  case 18:
#line 255 "parse.y"
    {
	memset(&(yyval.predicate), 0, sizeof((yyval.predicate)));
	(yyval.predicate).p_uid = (yyvsp[0].uid);
	(yyval.predicate).p_flags = PREDIC_UID | PREDIC_LESSER;
}
    break;

  case 19:
#line 261 "parse.y"
    {
	memset(&(yyval.predicate), 0, sizeof((yyval.predicate)));
	(yyval.predicate).p_uid = (yyvsp[0].uid);
	(yyval.predicate).p_flags = PREDIC_UID | PREDIC_GREATER;
}
    break;

  case 20:
#line 267 "parse.y"
    {
	memset(&(yyval.predicate), 0, sizeof((yyval.predicate)));
	(yyval.predicate).p_gid = (yyvsp[0].gid);
	(yyval.predicate).p_flags = PREDIC_GID;
}
    break;

  case 21:
#line 273 "parse.y"
    {
	memset(&(yyval.predicate), 0, sizeof((yyval.predicate)));
	(yyval.predicate).p_gid = (yyvsp[0].gid);
	(yyval.predicate).p_flags = PREDIC_GID | PREDIC_NEGATIVE;
}
    break;

  case 22:
#line 279 "parse.y"
    {
	memset(&(yyval.predicate), 0, sizeof((yyval.predicate)));
	(yyval.predicate).p_gid = (yyvsp[0].gid);
	(yyval.predicate).p_flags = PREDIC_GID | PREDIC_LESSER;
}
    break;

  case 23:
#line 285 "parse.y"
    {
	memset(&(yyval.predicate), 0, sizeof((yyval.predicate)));
	(yyval.predicate).p_gid = (yyvsp[0].gid);
	(yyval.predicate).p_flags = PREDIC_GID | PREDIC_GREATER;
}
    break;

  case 24:
#line 292 "parse.y"
    {
	(yyval.logic) = (yyvsp[0].logic);
}
    break;

  case 25:
#line 296 "parse.y"
    {
	struct logic *node;
	node = calloc(1, sizeof(struct logic));
	if (node == NULL) {
		yyerror("calloc");
		break;
	}
	node->op = LOGIC_NOT;
	node->left = (yyvsp[0].logic);
	(yyval.logic) = node;
}
    break;

  case 26:
#line 308 "parse.y"
    {
	(yyval.logic) = (yyvsp[-1].logic);
}
    break;

  case 27:
#line 312 "parse.y"
    {
	struct logic *node;
	node = calloc(1, sizeof(struct logic));
	if (node == NULL) {
		yyerror("calloc");
		break;
	}
	node->op = LOGIC_AND;
	node->left = (yyvsp[-2].logic);
	node->right = (yyvsp[0].logic);
	(yyval.logic) = node;
}
    break;

  case 28:
#line 325 "parse.y"
    {
	struct logic *node;
	node = calloc(1, sizeof(struct logic));
	if (node == NULL) {
		yyerror("calloc");
		break;
	}
	node->op = LOGIC_OR;
	node->left = (yyvsp[-2].logic);
	node->right = (yyvsp[0].logic);
	(yyval.logic) = node;
}
    break;

  case 29:
#line 340 "parse.y"
    {
	struct logic *node;

	if ((node = parse_newsymbol((yyvsp[-3].string), (yyvsp[-2].number), (yyvsp[0].string))) == NULL)
		break;

	node->filter_match = filter_fnmatch;
	(yyval.logic) = node;
}
    break;

  case 30:
#line 350 "parse.y"
    {
	struct logic *node;

	if ((node = parse_newsymbol((yyvsp[-3].string), (yyvsp[-2].number), (yyvsp[0].string))) == NULL)
		break;

	node->filter_match = filter_stringmatch;
	(yyval.logic) = node;
}
    break;

  case 31:
#line 360 "parse.y"
    {
	struct logic *node;

	if ((node = parse_newsymbol((yyvsp[-3].string), (yyvsp[-2].number), (yyvsp[0].string))) == NULL)
		break;

	node->filter_match = filter_negstringmatch;
	(yyval.logic) = node;
}
    break;

  case 32:
#line 370 "parse.y"
    {
	struct logic *node;

	if ((node = parse_newsymbol((yyvsp[-3].string), (yyvsp[-2].number), (yyvsp[0].string))) == NULL)
		break;

	node->filter_match = filter_substrmatch;
	(yyval.logic) = node;
}
    break;

  case 33:
#line 380 "parse.y"
    {
	struct logic *node;

	if ((node = parse_newsymbol((yyvsp[-3].string), (yyvsp[-2].number), (yyvsp[0].string))) == NULL)
		break;

	node->filter_match = filter_negsubstrmatch;
	(yyval.logic) = node;
}
    break;

  case 34:
#line 390 "parse.y"
    {
	struct logic *node;

	if ((node = parse_newsymbol((yyvsp[-3].string), (yyvsp[-2].number), (yyvsp[0].string))) == NULL)
		break;

	node->filter_match = filter_inpath;
	(yyval.logic) = node;
}
    break;

  case 35:
#line 400 "parse.y"
    {
	struct logic *node;
	regex_t *re;

	if ((node = parse_newsymbol((yyvsp[-3].string), (yyvsp[-2].number), (yyvsp[0].string))) == NULL)
		break;

	if ((re = calloc(1, sizeof (regex_t))) == NULL) {
		yyerror("calloc");
		break;
	}

	/* Precompute regexp here, otherwise we need to compute it
	 * on the fly which is fairly expensive.
	 */
	if (!(node->flags & LOGIC_NEEDEXPAND)) {
		if (regcomp(re, node->filterdata,
			REG_EXTENDED | REG_NOSUB) != 0) {
			yyerror("Invalid regular expression: %s",
			    node->filterdata);
			break;
		}
		node->filterarg = re;
	} else
		node->filterarg = NULL;

	node->filter_match = filter_regex;
	(yyval.logic) = node;
}
    break;

  case 36:
#line 430 "parse.y"
    {
	struct logic *node;

	if ((node = parse_newsymbol(NULL, -1, NULL)) == NULL)
		break;

	node->filter_match = filter_true;
	(yyval.logic) = node;
}
    break;

  case 37:
#line 442 "parse.y"
    {
	(yyval.number) = -1;
}
    break;

  case 38:
#line 446 "parse.y"
    {
	if ((yyvsp[-1].number) < 0 || (yyvsp[-1].number) >= INTERCEPT_MAXSYSCALLARGS) {
		yyerror("Bad offset: %d", (yyvsp[-1].number));
		break;
	}
	(yyval.number) = (yyvsp[-1].number);
}
    break;

  case 39:
#line 455 "parse.y"
    {
	(yyval.action) = ICPOLICY_PERMIT;
}
    break;

  case 40:
#line 459 "parse.y"
    {
	(yyval.action) = ICPOLICY_ASK;
}
    break;

  case 41:
#line 463 "parse.y"
    {
	(yyval.action) = ICPOLICY_NEVER;
}
    break;


    }

/* Line 1037 of yacc.c.  */
#line 1653 "parse.c"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {

		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 yydestruct ("Error: popping",
                             yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

yyvsp -= yylen;
  yyssp -= yylen;
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  yydestruct ("Error: discarding lookahead",
              yytoken, &yylval);
  yychar = YYEMPTY;
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 466 "parse.y"


int
yyerror(const char *fmt, ...)
{
	va_list ap;
	errors = 1;

	va_start(ap, fmt);
	vfprintf(stderr, fmt, ap);
	fprintf(stderr, "\n");
	va_end(ap);
	return (0);
}

struct logic *
parse_newsymbol(char *type, int typeoff, char *data)
{
	struct logic *node;

	node = calloc(1, sizeof(struct logic));

	if (node == NULL) {
		yyerror("calloc");
		return (NULL);
	}
	node->op = LOGIC_SINGLE;
	node->type = type;
	node->typeoff = typeoff;
	if (data) {
		/* For the root user, variable expansion may change */
		if (iamroot) {
			node->filterdata = data;
			if (filter_needexpand(data))
				node->flags |= LOGIC_NEEDEXPAND;
		} else {
			node->filterdata = strdup(filter_expand(data));
			free(data);
		}
		if (node->filterdata == NULL) {
			yyerror("strdup");
			free(node);
			return (NULL);
		}
		node->filterlen = strlen(node->filterdata) + 1;
	}

	return (node);
}

int
parse_filter(char *name, struct filter **pfilter)
{

	errors = 0;

	myfilter = NULL;
	mystring = name;
	myoff = 0;

	yyparse();
	yyrestart(NULL);
	*pfilter = myfilter;
	return (errors ? -1 : 0);
}

