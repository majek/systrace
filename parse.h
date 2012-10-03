#ifndef BISON_PARSE_H
# define BISON_PARSE_H

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


extern YYSTYPE yylval;

#endif /* not BISON_PARSE_H */
