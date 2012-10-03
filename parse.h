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
/* Line 1318 of yacc.c.  */
#line 118 "parse.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



