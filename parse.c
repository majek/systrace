/* A Bison parser, made from parse.y
   by GNU bison 1.32.  */

#define YYBISON 1  /* Identify Bison output.  */

# define	AND	257
# define	OR	258
# define	NOT	259
# define	LBRACE	260
# define	RBRACE	261
# define	LSQBRACE	262
# define	RSQBRACE	263
# define	THEN	264
# define	MATCH	265
# define	PERMIT	266
# define	DENY	267
# define	ASK	268
# define	EQ	269
# define	NEQ	270
# define	TRUE	271
# define	SUB	272
# define	NSUB	273
# define	INPATH	274
# define	LOG	275
# define	COMMA	276
# define	IF	277
# define	USER	278
# define	GROUP	279
# define	EQUAL	280
# define	NEQUAL	281
# define	AS	282
# define	COLON	283
# define	RE	284
# define	LESSER	285
# define	GREATER	286
# define	STRING	287
# define	CMDSTRING	288
# define	NUMBER	289

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


#line 91 "parse.y"
#ifndef YYSTYPE
typedef union {
	int number;
	char *string;
	short action;
	struct logic *logic;
	struct predicate predicate;
	struct elevate elevate;
	uid_t uid;
	gid_t gid;
} yystype;
# define YYSTYPE yystype
#endif
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		77
#define	YYFLAG		-32768
#define	YYNTBASE	36

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 289 ? yytranslate[x] : 47)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const char yytranslate[] =
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
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     8,     9,    13,    14,    16,    18,    20,    22,
      24,    25,    28,    33,    37,    38,    44,    50,    56,    62,
      68,    74,    80,    86,    88,    91,    95,    99,   103,   108,
     113,   118,   123,   128,   133,   138,   140,   141,   145,   147,
     149
};
static const short yyrhs[] =
{
      43,    10,    46,    37,    38,    41,    42,     0,     0,     8,
      33,     9,     0,     0,    21,     0,    35,     0,    33,     0,
      35,     0,    33,     0,     0,    28,    39,     0,    28,    39,
      29,    40,     0,    28,    29,    40,     0,     0,    22,    23,
      24,    26,    39,     0,    22,    23,    24,    27,    39,     0,
      22,    23,    24,    31,    39,     0,    22,    23,    24,    32,
      39,     0,    22,    23,    25,    26,    40,     0,    22,    23,
      25,    27,    40,     0,    22,    23,    25,    31,    40,     0,
      22,    23,    25,    32,    40,     0,    44,     0,     5,    43,
       0,     6,    43,     7,     0,    43,     3,    43,     0,    43,
       4,    43,     0,    33,    45,    11,    34,     0,    33,    45,
      15,    34,     0,    33,    45,    16,    34,     0,    33,    45,
      18,    34,     0,    33,    45,    19,    34,     0,    33,    45,
      20,    34,     0,    33,    45,    30,    34,     0,    17,     0,
       0,     8,    35,     9,     0,    12,     0,    14,     0,    13,
       0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,   103,   151,   155,   161,   165,   172,   176,   187,   191,
     202,   206,   216,   227,   238,   242,   248,   254,   260,   266,
     272,   278,   284,   291,   295,   307,   311,   324,   339,   349,
     359,   369,   379,   389,   399,   429,   441,   445,   454,   458,
     462
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "AND", "OR", "NOT", "LBRACE", "RBRACE", 
  "LSQBRACE", "RSQBRACE", "THEN", "MATCH", "PERMIT", "DENY", "ASK", "EQ", 
  "NEQ", "TRUE", "SUB", "NSUB", "INPATH", "LOG", "COMMA", "IF", "USER", 
  "GROUP", "EQUAL", "NEQUAL", "AS", "COLON", "RE", "LESSER", "GREATER", 
  "STRING", "CMDSTRING", "NUMBER", "fullexpression", "errorcode", 
  "logcode", "uid", "gid", "elevate", "predicate", "expression", "symbol", 
  "typeoff", "action", NULL
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,    36,    37,    37,    38,    38,    39,    39,    40,    40,
      41,    41,    41,    41,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    43,    43,    43,    43,    43,    44,    44,
      44,    44,    44,    44,    44,    44,    45,    45,    46,    46,
      46
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     7,     0,     3,     0,     1,     1,     1,     1,     1,
       0,     2,     4,     3,     0,     5,     5,     5,     5,     5,
       5,     5,     5,     1,     2,     3,     3,     3,     4,     4,
       4,     4,     4,     4,     4,     1,     0,     3,     1,     1,
       1
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       0,     0,     0,    35,    36,     0,    23,    24,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    38,    40,    39,     2,    37,
      28,    29,    30,    31,    32,    33,    34,     0,     4,     0,
       5,    10,     3,     0,    14,     0,     7,     6,    11,     0,
       1,     9,     8,    13,     0,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     0,     0
};

static const short yydefgoto[] =
{
      75,    38,    41,    48,    53,    44,    50,     5,     6,    10,
      28
};

static const short yypact[] =
{
      -5,    -5,    -5,-32768,    17,    14,-32768,    19,    41,   -27,
      -9,    -5,    -5,    42,-32768,    31,    12,    13,    26,    27,
      28,    29,    30,    19,    19,-32768,-32768,-32768,    34,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,    20,    37,    56,
  -32768,    38,-32768,     8,    45,   -30,-32768,-32768,    39,    46,
  -32768,-32768,-32768,-32768,   -30,    11,-32768,     0,     7,    24,
      24,    24,    24,   -30,   -30,   -30,   -30,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,    70,    71,-32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,   -10,   -50,-32768,-32768,    18,-32768,-32768,
  -32768
};


#define	YYLAST		71


static const short yytable[] =
{
       1,     2,    16,    51,    56,    52,    17,    18,    15,    19,
      20,    21,     3,    71,    72,    73,    74,    11,    12,     7,
       8,    22,    11,    12,    13,     9,    59,    60,     4,    23,
      24,    61,    62,    63,    64,    57,    58,    45,    65,    66,
      29,    46,    37,    47,    11,    12,    30,    31,    14,    67,
      68,    69,    70,    39,    25,    26,    27,    46,    40,    47,
      32,    33,    34,    35,    36,    42,    43,    49,    54,    55,
      76,    77
};

static const short yycheck[] =
{
       5,     6,    11,    33,    54,    35,    15,    16,    35,    18,
      19,    20,    17,    63,    64,    65,    66,     3,     4,     1,
       2,    30,     3,     4,    10,     8,    26,    27,    33,    11,
      12,    31,    32,    26,    27,    24,    25,    29,    31,    32,
       9,    33,     8,    35,     3,     4,    34,    34,     7,    59,
      60,    61,    62,    33,    12,    13,    14,    33,    21,    35,
      34,    34,    34,    34,    34,     9,    28,    22,    29,    23,
       0,     0
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/local/share/bison/bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001 Free Software Foundation, Inc.

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

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#ifdef __cplusplus
# define YYSTD(x) std::x
#else
# define YYSTD(x) x
#endif

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
#  define YYSIZE_T YYSTD (size_t)
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#    define YYSIZE_T YYSTD (size_t)
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  ifdef __cplusplus
#   include <cstdlib> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T std::size_t
#  else
#   ifdef __STDC__
#    include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#    define YYSIZE_T size_t
#   endif
#  endif
#  define YYSTACK_ALLOC YYSTD (malloc)
#  define YYSTACK_FREE YYSTD (free)
# endif

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

/* Relocate the TYPE STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Type, Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	yymemcpy ((char *) yyptr, (char *) (Stack),			\
		  yysize * (YYSIZE_T) sizeof (Type));			\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (Type) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# ifdef __cplusplus
#  include <cstddef> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T std::size_t
# else
#  ifdef __STDC__
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
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
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif /* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  ifdef __cplusplus
#   include <cstdio>  /* INFRINGES ON USER NAME SPACE */
#  else
#   include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYFPRINTF YYSTD (fprintf)
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
/* Nonzero means print parse trace. [The following comment makes no
   sense to me.  Could someone clarify it?  --akim] Since this is
   uninitialized, it does not stop multiple parsers from coexisting.
   */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
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

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#if ! defined (yyoverflow) && ! defined (yymemcpy)
# if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#  define yymemcpy __builtin_memcpy
# else				/* not GNU C or C++ */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
#  if defined (__STDC__) || defined (__cplusplus)
yymemcpy (char *yyto, const char *yyfrom, YYSIZE_T yycount)
#  else
yymemcpy (yyto, yyfrom, yycount)
     char *yyto;
     const char *yyfrom;
     YYSIZE_T yycount;
#  endif
{
  register const char *yyf = yyfrom;
  register char *yyt = yyto;
  register YYSIZE_T yyi = yycount;

  while (yyi-- != 0)
    *yyt++ = *yyf++;
}
# endif
#endif

#ifdef YYERROR_VERBOSE

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
#endif

#line 341 "/usr/local/share/bison/bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# ifdef __cplusplus
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else /* !__cplusplus */
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif /* !__cplusplus */
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif  /* !YYPURE */

int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif  /* !YYPURE */

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
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
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
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

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (short, yyss);
	YYSTACK_RELOCATE (YYSTYPE, yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (YYLTYPE, yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
     /* We have to keep this `#if YYDEBUG', since we use variables
	which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

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

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1-yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif

  switch (yyn) {

case 1:
#line 104 "parse.y"
{
		int flags = 0, errorcode = SYSTRACE_EPERM;

		switch (yyvsp[-4].action) {
		case ICPOLICY_NEVER:
			if (yyvsp[-3].string == NULL)
				break;
			errorcode = systrace_error_translate(yyvsp[-3].string);
			if (errorcode == -1)
				yyerror("Unknown error code: %s", yyvsp[-3].string);
			break;
		case ICPOLICY_PERMIT:
			if (yyvsp[-3].string == NULL)
				break;
			if (!strcasecmp(yyvsp[-3].string, "inherit"))
				flags = PROCESS_INHERIT_POLICY;
			else if (!strcasecmp(yyvsp[-3].string, "detach"))
				flags = PROCESS_DETACH;
			else
				yyerror("Unknown flag: %s", yyvsp[-3].string);
			break;
		}

		if (yyvsp[-2].number)
			flags |= SYSCALL_LOG;

		/* Special policy that allows only yes or no */
		if (yyvsp[-4].action == ICPOLICY_ASK)
			flags |= PROCESS_PROMPT;

		if (yyvsp[-3].string != NULL)
			free(yyvsp[-3].string);

		myfilter = calloc(1, sizeof(struct filter));
		if (myfilter == NULL) {
			yyerror("calloc");
			break;
		}
		myfilter->logicroot = yyvsp[-6].logic;
		myfilter->match_action = yyvsp[-4].action;
		myfilter->match_error = errorcode;
		myfilter->match_flags = flags;
		myfilter->match_predicate = yyvsp[0].predicate;
		myfilter->elevate = yyvsp[-1].elevate;
	}
    break;
case 2:
#line 152 "parse.y"
{
	yyval.string = NULL;
}
    break;
case 3:
#line 156 "parse.y"
{
	yyval.string = yyvsp[-1].string;
}
    break;
case 4:
#line 162 "parse.y"
{
	yyval.number = 0;
}
    break;
case 5:
#line 166 "parse.y"
{
	yyval.number = 1;
}
    break;
case 6:
#line 173 "parse.y"
{
	yyval.uid = yyvsp[0].number;
}
    break;
case 7:
#line 177 "parse.y"
{
	struct passwd *pw;
	if ((pw = getpwnam(yyvsp[0].string)) == NULL) {
		yyerror("Unknown user %s", yyvsp[0].string);
		break;
	}

	yyval.uid = pw->pw_uid;
}
    break;
case 8:
#line 188 "parse.y"
{
	yyval.gid = yyvsp[0].number;
}
    break;
case 9:
#line 192 "parse.y"
{
	struct group *gr;
	if ((gr = getgrnam(yyvsp[0].string)) == NULL) {
		yyerror("Unknown group %s", yyvsp[0].string);
		break;
	}

	yyval.gid = gr->gr_gid;
}
    break;
case 10:
#line 203 "parse.y"
{
	memset(&yyval.elevate, 0, sizeof(yyval.elevate));
}
    break;
case 11:
#line 207 "parse.y"
{
	if (!iamroot) {
		yyerror("Privilege elevation not allowed.");
		break;
	}

	yyval.elevate.e_flags = ELEVATE_UID;
	yyval.elevate.e_uid = yyvsp[0].uid;
}
    break;
case 12:
#line 217 "parse.y"
{
	if (!iamroot) {
		yyerror("Privilege elevation not allowed.");
		break;
	}

	yyval.elevate.e_flags = ELEVATE_UID|ELEVATE_GID;
	yyval.elevate.e_uid = yyvsp[-2].uid;
	yyval.elevate.e_gid = yyvsp[0].gid;
}
    break;
case 13:
#line 228 "parse.y"
{
	if (!iamroot) {
		yyerror("Privilege elevation not allowed.");
		break;
	}

	yyval.elevate.e_flags = ELEVATE_GID;
	yyval.elevate.e_gid = yyvsp[0].gid;
}
    break;
case 14:
#line 239 "parse.y"
{
	memset(&yyval.predicate, 0, sizeof(yyval.predicate));
}
    break;
case 15:
#line 243 "parse.y"
{
	memset(&yyval.predicate, 0, sizeof(yyval.predicate));
	yyval.predicate.p_uid = yyvsp[0].uid;
	yyval.predicate.p_flags = PREDIC_UID;
}
    break;
case 16:
#line 249 "parse.y"
{
	memset(&yyval.predicate, 0, sizeof(yyval.predicate));
	yyval.predicate.p_uid = yyvsp[0].uid;
	yyval.predicate.p_flags = PREDIC_UID | PREDIC_NEGATIVE;
}
    break;
case 17:
#line 255 "parse.y"
{
	memset(&yyval.predicate, 0, sizeof(yyval.predicate));
	yyval.predicate.p_uid = yyvsp[0].uid;
	yyval.predicate.p_flags = PREDIC_UID | PREDIC_LESSER;
}
    break;
case 18:
#line 261 "parse.y"
{
	memset(&yyval.predicate, 0, sizeof(yyval.predicate));
	yyval.predicate.p_uid = yyvsp[0].uid;
	yyval.predicate.p_flags = PREDIC_UID | PREDIC_GREATER;
}
    break;
case 19:
#line 267 "parse.y"
{
	memset(&yyval.predicate, 0, sizeof(yyval.predicate));
	yyval.predicate.p_gid = yyvsp[0].gid;
	yyval.predicate.p_flags = PREDIC_GID;
}
    break;
case 20:
#line 273 "parse.y"
{
	memset(&yyval.predicate, 0, sizeof(yyval.predicate));
	yyval.predicate.p_gid = yyvsp[0].gid;
	yyval.predicate.p_flags = PREDIC_GID | PREDIC_NEGATIVE;
}
    break;
case 21:
#line 279 "parse.y"
{
	memset(&yyval.predicate, 0, sizeof(yyval.predicate));
	yyval.predicate.p_gid = yyvsp[0].gid;
	yyval.predicate.p_flags = PREDIC_GID | PREDIC_LESSER;
}
    break;
case 22:
#line 285 "parse.y"
{
	memset(&yyval.predicate, 0, sizeof(yyval.predicate));
	yyval.predicate.p_gid = yyvsp[0].gid;
	yyval.predicate.p_flags = PREDIC_GID | PREDIC_GREATER;
}
    break;
case 23:
#line 292 "parse.y"
{
	yyval.logic = yyvsp[0].logic;
}
    break;
case 24:
#line 296 "parse.y"
{
	struct logic *node;
	node = calloc(1, sizeof(struct logic));
	if (node == NULL) {
		yyerror("calloc");
		break;
	}
	node->op = LOGIC_NOT;
	node->left = yyvsp[0].logic;
	yyval.logic = node;
}
    break;
case 25:
#line 308 "parse.y"
{
	yyval.logic = yyvsp[-1].logic;
}
    break;
case 26:
#line 312 "parse.y"
{
	struct logic *node;
	node = calloc(1, sizeof(struct logic));
	if (node == NULL) {
		yyerror("calloc");
		break;
	}
	node->op = LOGIC_AND;
	node->left = yyvsp[-2].logic;
	node->right = yyvsp[0].logic;
	yyval.logic = node;
}
    break;
case 27:
#line 325 "parse.y"
{
	struct logic *node;
	node = calloc(1, sizeof(struct logic));
	if (node == NULL) {
		yyerror("calloc");
		break;
	}
	node->op = LOGIC_OR;
	node->left = yyvsp[-2].logic;
	node->right = yyvsp[0].logic;
	yyval.logic = node;
}
    break;
case 28:
#line 340 "parse.y"
{
	struct logic *node;

	if ((node = parse_newsymbol(yyvsp[-3].string, yyvsp[-2].number, yyvsp[0].string)) == NULL)
		break;

	node->filter_match = filter_fnmatch;
	yyval.logic = node;
}
    break;
case 29:
#line 350 "parse.y"
{
	struct logic *node;

	if ((node = parse_newsymbol(yyvsp[-3].string, yyvsp[-2].number, yyvsp[0].string)) == NULL)
		break;

	node->filter_match = filter_stringmatch;
	yyval.logic = node;
}
    break;
case 30:
#line 360 "parse.y"
{
	struct logic *node;

	if ((node = parse_newsymbol(yyvsp[-3].string, yyvsp[-2].number, yyvsp[0].string)) == NULL)
		break;

	node->filter_match = filter_negstringmatch;
	yyval.logic = node;
}
    break;
case 31:
#line 370 "parse.y"
{
	struct logic *node;

	if ((node = parse_newsymbol(yyvsp[-3].string, yyvsp[-2].number, yyvsp[0].string)) == NULL)
		break;

	node->filter_match = filter_substrmatch;
	yyval.logic = node;
}
    break;
case 32:
#line 380 "parse.y"
{
	struct logic *node;

	if ((node = parse_newsymbol(yyvsp[-3].string, yyvsp[-2].number, yyvsp[0].string)) == NULL)
		break;

	node->filter_match = filter_negsubstrmatch;
	yyval.logic = node;
}
    break;
case 33:
#line 390 "parse.y"
{
	struct logic *node;

	if ((node = parse_newsymbol(yyvsp[-3].string, yyvsp[-2].number, yyvsp[0].string)) == NULL)
		break;

	node->filter_match = filter_inpath;
	yyval.logic = node;
}
    break;
case 34:
#line 400 "parse.y"
{
	struct logic *node;
	regex_t *re;

	if ((node = parse_newsymbol(yyvsp[-3].string, yyvsp[-2].number, yyvsp[0].string)) == NULL)
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
	yyval.logic = node;
}
    break;
case 35:
#line 430 "parse.y"
{
	struct logic *node;

	if ((node = parse_newsymbol(NULL, -1, NULL)) == NULL)
		break;

	node->filter_match = filter_true;
	yyval.logic = node;
}
    break;
case 36:
#line 442 "parse.y"
{
	yyval.number = -1;
}
    break;
case 37:
#line 446 "parse.y"
{
	if (yyvsp[-1].number < 0 || yyvsp[-1].number >= INTERCEPT_MAXSYSCALLARGS) {
		yyerror("Bad offset: %d", yyvsp[-1].number);
		break;
	}
	yyval.number = yyvsp[-1].number;
}
    break;
case 38:
#line 455 "parse.y"
{
	yyval.action = ICPOLICY_PERMIT;
}
    break;
case 39:
#line 459 "parse.y"
{
	yyval.action = ICPOLICY_ASK;
}
    break;
case 40:
#line 463 "parse.y"
{
	yyval.action = ICPOLICY_NEVER;
}
    break;
}

#line 727 "/usr/local/share/bison/bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
yyerrhandle:
  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

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

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

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
