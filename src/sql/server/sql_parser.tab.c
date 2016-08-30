/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse sqlparse
#define yylex   sqllex
#define yyerror sqlerror
#define yylval  sqllval
#define yychar  sqlchar
#define yydebug sqldebug
#define yynerrs sqlnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     X_BODY = 259,
     IDENT = 260,
     aTYPE = 261,
     ALIAS = 262,
     AGGR = 263,
     AGGR2 = 264,
     RANK = 265,
     sqlINT = 266,
     OIDNUM = 267,
     HEXADECIMAL = 268,
     INTNUM = 269,
     APPROXNUM = 270,
     USING = 271,
     GLOBAL = 272,
     CAST = 273,
     CONVERT = 274,
     CHARACTER = 275,
     VARYING = 276,
     LARGE = 277,
     OBJECT = 278,
     VARCHAR = 279,
     CLOB = 280,
     sqlTEXT = 281,
     BINARY = 282,
     sqlBLOB = 283,
     sqlDECIMAL = 284,
     sqlFLOAT = 285,
     TINYINT = 286,
     SMALLINT = 287,
     BIGINT = 288,
     HUGEINT = 289,
     sqlINTEGER = 290,
     sqlDOUBLE = 291,
     sqlREAL = 292,
     PRECISION = 293,
     PARTIAL = 294,
     SIMPLE = 295,
     ACTION = 296,
     CASCADE = 297,
     RESTRICT = 298,
     BOOL_FALSE = 299,
     BOOL_TRUE = 300,
     CURRENT_DATE = 301,
     CURRENT_TIMESTAMP = 302,
     CURRENT_TIME = 303,
     LOCALTIMESTAMP = 304,
     LOCALTIME = 305,
     LEX_ERROR = 306,
     GEOMETRY = 307,
     GEOMETRYSUBTYPE = 308,
     GEOMETRYA = 309,
     USER = 310,
     CURRENT_USER = 311,
     SESSION_USER = 312,
     LOCAL = 313,
     LOCKED = 314,
     BEST = 315,
     EFFORT = 316,
     CURRENT_ROLE = 317,
     sqlSESSION = 318,
     sqlDELETE = 319,
     UPDATE = 320,
     SELECT = 321,
     INSERT = 322,
     LEFT = 323,
     RIGHT = 324,
     FULL = 325,
     OUTER = 326,
     NATURAL = 327,
     CROSS = 328,
     JOIN = 329,
     INNER = 330,
     COMMIT = 331,
     ROLLBACK = 332,
     SAVEPOINT = 333,
     RELEASE = 334,
     WORK = 335,
     CHAIN = 336,
     NO = 337,
     PRESERVE = 338,
     ROWS = 339,
     START = 340,
     TRANSACTION = 341,
     READ = 342,
     WRITE = 343,
     ONLY = 344,
     ISOLATION = 345,
     LEVEL = 346,
     UNCOMMITTED = 347,
     COMMITTED = 348,
     sqlREPEATABLE = 349,
     SERIALIZABLE = 350,
     DIAGNOSTICS = 351,
     sqlSIZE = 352,
     STORAGE = 353,
     ASYMMETRIC = 354,
     SYMMETRIC = 355,
     ORDER = 356,
     BY = 357,
     EXISTS = 358,
     ESCAPE = 359,
     HAVING = 360,
     sqlGROUP = 361,
     sqlNULL = 362,
     FROM = 363,
     FOR = 364,
     MATCH = 365,
     EXTRACT = 366,
     SEQUENCE = 367,
     INCREMENT = 368,
     RESTART = 369,
     MAXVALUE = 370,
     MINVALUE = 371,
     CYCLE = 372,
     NOMAXVALUE = 373,
     NOMINVALUE = 374,
     NOCYCLE = 375,
     NEXT = 376,
     VALUE = 377,
     CACHE = 378,
     GENERATED = 379,
     ALWAYS = 380,
     IDENTITY = 381,
     SERIAL = 382,
     BIGSERIAL = 383,
     AUTO_INCREMENT = 384,
     SCOLON = 385,
     AT = 386,
     XMLCOMMENT = 387,
     XMLCONCAT = 388,
     XMLDOCUMENT = 389,
     XMLELEMENT = 390,
     XMLATTRIBUTES = 391,
     XMLFOREST = 392,
     XMLPARSE = 393,
     STRIP = 394,
     WHITESPACE = 395,
     XMLPI = 396,
     XMLQUERY = 397,
     PASSING = 398,
     XMLTEXT = 399,
     NIL = 400,
     REF = 401,
     ABSENT = 402,
     EMPTY = 403,
     DOCUMENT = 404,
     ELEMENT = 405,
     CONTENT = 406,
     XMLNAMESPACES = 407,
     NAMESPACE = 408,
     XMLVALIDATE = 409,
     RETURNING = 410,
     LOCATION = 411,
     ID = 412,
     ACCORDING = 413,
     XMLSCHEMA = 414,
     URI = 415,
     XMLAGG = 416,
     FILTER = 417,
     UNIONJOIN = 418,
     CORRESPONDING = 419,
     INTERSECT = 420,
     EXCEPT = 421,
     UNION = 422,
     DATA = 423,
     WITH = 424,
     FILTER_FUNC = 425,
     NOT = 426,
     SOME = 427,
     OR = 428,
     ILIKE = 429,
     NOT_ILIKE = 430,
     LIKE = 431,
     NOT_LIKE = 432,
     sqlIN = 433,
     NOT_IN = 434,
     BETWEEN = 435,
     NOT_BETWEEN = 436,
     ANY = 437,
     ALL = 438,
     AND = 439,
     COMPARISON = 440,
     SPLIT_PART = 441,
     POSITION = 442,
     SUBSTRING = 443,
     CONCATSTRING = 444,
     RIGHT_SHIFT_ASSIGN = 445,
     LEFT_SHIFT_ASSIGN = 446,
     RIGHT_SHIFT = 447,
     LEFT_SHIFT = 448,
     UMINUS = 449,
     GEOM_OVERLAP_OR_LEFT = 450,
     GEOM_OVERLAP_OR_BELOW = 451,
     GEOM_OVERLAP_OR_ABOVE = 452,
     GEOM_OVERLAP = 453,
     GEOM_DIST = 454,
     GEOM_ABOVE = 455,
     GEOM_BELOW = 456,
     GEOM_OVERLAP_OR_RIGHT = 457,
     TEMP = 458,
     TEMPORARY = 459,
     STREAM = 460,
     MERGE = 461,
     REMOTE = 462,
     REPLICA = 463,
     ASC = 464,
     DESC = 465,
     AUTHORIZATION = 466,
     CHECK = 467,
     CONSTRAINT = 468,
     CREATE = 469,
     TYPE = 470,
     PROCEDURE = 471,
     FUNCTION = 472,
     AGGREGATE = 473,
     RETURNS = 474,
     EXTERNAL = 475,
     sqlNAME = 476,
     DECLARE = 477,
     CALL = 478,
     LANGUAGE = 479,
     ANALYZE = 480,
     MINMAX = 481,
     SQL_EXPLAIN = 482,
     SQL_PLAN = 483,
     SQL_DEBUG = 484,
     SQL_TRACE = 485,
     SQL_DOT = 486,
     PREPARE = 487,
     EXECUTE = 488,
     DEFAULT = 489,
     DISTINCT = 490,
     DROP = 491,
     FOREIGN = 492,
     RENAME = 493,
     ENCRYPTED = 494,
     UNENCRYPTED = 495,
     PASSWORD = 496,
     GRANT = 497,
     REVOKE = 498,
     ROLE = 499,
     ADMIN = 500,
     INTO = 501,
     IS = 502,
     KEY = 503,
     ON = 504,
     OPTION = 505,
     OPTIONS = 506,
     PATH = 507,
     PRIMARY = 508,
     PRIVILEGES = 509,
     PUBLIC = 510,
     REFERENCES = 511,
     SCHEMA = 512,
     SET = 513,
     AUTO_COMMIT = 514,
     RETURN = 515,
     ALTER = 516,
     ADD = 517,
     TABLE = 518,
     COLUMN = 519,
     TO = 520,
     UNIQUE = 521,
     VALUES = 522,
     VIEW = 523,
     WHERE = 524,
     sqlDATE = 525,
     TIME = 526,
     TIMESTAMP = 527,
     INTERVAL = 528,
     YEAR = 529,
     MONTH = 530,
     DAY = 531,
     HOUR = 532,
     MINUTE = 533,
     SECOND = 534,
     ZONE = 535,
     LIMIT = 536,
     OFFSET = 537,
     SAMPLE = 538,
     CASE = 539,
     WHEN = 540,
     THEN = 541,
     ELSE = 542,
     NULLIF = 543,
     COALESCE = 544,
     IF = 545,
     ELSEIF = 546,
     WHILE = 547,
     DO = 548,
     ATOMIC = 549,
     BEGIN = 550,
     END = 551,
     COPY = 552,
     RECORDS = 553,
     DELIMITERS = 554,
     STDIN = 555,
     STDOUT = 556,
     FWF = 557,
     INDEX = 558,
     AS = 559,
     TRIGGER = 560,
     OF = 561,
     BEFORE = 562,
     AFTER = 563,
     ROW = 564,
     STATEMENT = 565,
     sqlNEW = 566,
     OLD = 567,
     EACH = 568,
     REFERENCING = 569,
     OVER = 570,
     PARTITION = 571,
     CURRENT = 572,
     EXCLUDE = 573,
     FOLLOWING = 574,
     PRECEDING = 575,
     OTHERS = 576,
     TIES = 577,
     RANGE = 578,
     UNBOUNDED = 579
   };
#endif
/* Tokens.  */
#define STRING 258
#define X_BODY 259
#define IDENT 260
#define aTYPE 261
#define ALIAS 262
#define AGGR 263
#define AGGR2 264
#define RANK 265
#define sqlINT 266
#define OIDNUM 267
#define HEXADECIMAL 268
#define INTNUM 269
#define APPROXNUM 270
#define USING 271
#define GLOBAL 272
#define CAST 273
#define CONVERT 274
#define CHARACTER 275
#define VARYING 276
#define LARGE 277
#define OBJECT 278
#define VARCHAR 279
#define CLOB 280
#define sqlTEXT 281
#define BINARY 282
#define sqlBLOB 283
#define sqlDECIMAL 284
#define sqlFLOAT 285
#define TINYINT 286
#define SMALLINT 287
#define BIGINT 288
#define HUGEINT 289
#define sqlINTEGER 290
#define sqlDOUBLE 291
#define sqlREAL 292
#define PRECISION 293
#define PARTIAL 294
#define SIMPLE 295
#define ACTION 296
#define CASCADE 297
#define RESTRICT 298
#define BOOL_FALSE 299
#define BOOL_TRUE 300
#define CURRENT_DATE 301
#define CURRENT_TIMESTAMP 302
#define CURRENT_TIME 303
#define LOCALTIMESTAMP 304
#define LOCALTIME 305
#define LEX_ERROR 306
#define GEOMETRY 307
#define GEOMETRYSUBTYPE 308
#define GEOMETRYA 309
#define USER 310
#define CURRENT_USER 311
#define SESSION_USER 312
#define LOCAL 313
#define LOCKED 314
#define BEST 315
#define EFFORT 316
#define CURRENT_ROLE 317
#define sqlSESSION 318
#define sqlDELETE 319
#define UPDATE 320
#define SELECT 321
#define INSERT 322
#define LEFT 323
#define RIGHT 324
#define FULL 325
#define OUTER 326
#define NATURAL 327
#define CROSS 328
#define JOIN 329
#define INNER 330
#define COMMIT 331
#define ROLLBACK 332
#define SAVEPOINT 333
#define RELEASE 334
#define WORK 335
#define CHAIN 336
#define NO 337
#define PRESERVE 338
#define ROWS 339
#define START 340
#define TRANSACTION 341
#define READ 342
#define WRITE 343
#define ONLY 344
#define ISOLATION 345
#define LEVEL 346
#define UNCOMMITTED 347
#define COMMITTED 348
#define sqlREPEATABLE 349
#define SERIALIZABLE 350
#define DIAGNOSTICS 351
#define sqlSIZE 352
#define STORAGE 353
#define ASYMMETRIC 354
#define SYMMETRIC 355
#define ORDER 356
#define BY 357
#define EXISTS 358
#define ESCAPE 359
#define HAVING 360
#define sqlGROUP 361
#define sqlNULL 362
#define FROM 363
#define FOR 364
#define MATCH 365
#define EXTRACT 366
#define SEQUENCE 367
#define INCREMENT 368
#define RESTART 369
#define MAXVALUE 370
#define MINVALUE 371
#define CYCLE 372
#define NOMAXVALUE 373
#define NOMINVALUE 374
#define NOCYCLE 375
#define NEXT 376
#define VALUE 377
#define CACHE 378
#define GENERATED 379
#define ALWAYS 380
#define IDENTITY 381
#define SERIAL 382
#define BIGSERIAL 383
#define AUTO_INCREMENT 384
#define SCOLON 385
#define AT 386
#define XMLCOMMENT 387
#define XMLCONCAT 388
#define XMLDOCUMENT 389
#define XMLELEMENT 390
#define XMLATTRIBUTES 391
#define XMLFOREST 392
#define XMLPARSE 393
#define STRIP 394
#define WHITESPACE 395
#define XMLPI 396
#define XMLQUERY 397
#define PASSING 398
#define XMLTEXT 399
#define NIL 400
#define REF 401
#define ABSENT 402
#define EMPTY 403
#define DOCUMENT 404
#define ELEMENT 405
#define CONTENT 406
#define XMLNAMESPACES 407
#define NAMESPACE 408
#define XMLVALIDATE 409
#define RETURNING 410
#define LOCATION 411
#define ID 412
#define ACCORDING 413
#define XMLSCHEMA 414
#define URI 415
#define XMLAGG 416
#define FILTER 417
#define UNIONJOIN 418
#define CORRESPONDING 419
#define INTERSECT 420
#define EXCEPT 421
#define UNION 422
#define DATA 423
#define WITH 424
#define FILTER_FUNC 425
#define NOT 426
#define SOME 427
#define OR 428
#define ILIKE 429
#define NOT_ILIKE 430
#define LIKE 431
#define NOT_LIKE 432
#define sqlIN 433
#define NOT_IN 434
#define BETWEEN 435
#define NOT_BETWEEN 436
#define ANY 437
#define ALL 438
#define AND 439
#define COMPARISON 440
#define SPLIT_PART 441
#define POSITION 442
#define SUBSTRING 443
#define CONCATSTRING 444
#define RIGHT_SHIFT_ASSIGN 445
#define LEFT_SHIFT_ASSIGN 446
#define RIGHT_SHIFT 447
#define LEFT_SHIFT 448
#define UMINUS 449
#define GEOM_OVERLAP_OR_LEFT 450
#define GEOM_OVERLAP_OR_BELOW 451
#define GEOM_OVERLAP_OR_ABOVE 452
#define GEOM_OVERLAP 453
#define GEOM_DIST 454
#define GEOM_ABOVE 455
#define GEOM_BELOW 456
#define GEOM_OVERLAP_OR_RIGHT 457
#define TEMP 458
#define TEMPORARY 459
#define STREAM 460
#define MERGE 461
#define REMOTE 462
#define REPLICA 463
#define ASC 464
#define DESC 465
#define AUTHORIZATION 466
#define CHECK 467
#define CONSTRAINT 468
#define CREATE 469
#define TYPE 470
#define PROCEDURE 471
#define FUNCTION 472
#define AGGREGATE 473
#define RETURNS 474
#define EXTERNAL 475
#define sqlNAME 476
#define DECLARE 477
#define CALL 478
#define LANGUAGE 479
#define ANALYZE 480
#define MINMAX 481
#define SQL_EXPLAIN 482
#define SQL_PLAN 483
#define SQL_DEBUG 484
#define SQL_TRACE 485
#define SQL_DOT 486
#define PREPARE 487
#define EXECUTE 488
#define DEFAULT 489
#define DISTINCT 490
#define DROP 491
#define FOREIGN 492
#define RENAME 493
#define ENCRYPTED 494
#define UNENCRYPTED 495
#define PASSWORD 496
#define GRANT 497
#define REVOKE 498
#define ROLE 499
#define ADMIN 500
#define INTO 501
#define IS 502
#define KEY 503
#define ON 504
#define OPTION 505
#define OPTIONS 506
#define PATH 507
#define PRIMARY 508
#define PRIVILEGES 509
#define PUBLIC 510
#define REFERENCES 511
#define SCHEMA 512
#define SET 513
#define AUTO_COMMIT 514
#define RETURN 515
#define ALTER 516
#define ADD 517
#define TABLE 518
#define COLUMN 519
#define TO 520
#define UNIQUE 521
#define VALUES 522
#define VIEW 523
#define WHERE 524
#define sqlDATE 525
#define TIME 526
#define TIMESTAMP 527
#define INTERVAL 528
#define YEAR 529
#define MONTH 530
#define DAY 531
#define HOUR 532
#define MINUTE 533
#define SECOND 534
#define ZONE 535
#define LIMIT 536
#define OFFSET 537
#define SAMPLE 538
#define CASE 539
#define WHEN 540
#define THEN 541
#define ELSE 542
#define NULLIF 543
#define COALESCE 544
#define IF 545
#define ELSEIF 546
#define WHILE 547
#define DO 548
#define ATOMIC 549
#define BEGIN 550
#define END 551
#define COPY 552
#define RECORDS 553
#define DELIMITERS 554
#define STDIN 555
#define STDOUT 556
#define FWF 557
#define INDEX 558
#define AS 559
#define TRIGGER 560
#define OF 561
#define BEFORE 562
#define AFTER 563
#define ROW 564
#define STATEMENT 565
#define sqlNEW 566
#define OLD 567
#define EACH 568
#define REFERENCING 569
#define OVER 570
#define PARTITION 571
#define CURRENT 572
#define EXCLUDE 573
#define FOLLOWING 574
#define PRECEDING 575
#define OTHERS 576
#define TIES 577
#define RANGE 578
#define UNBOUNDED 579




/* Copy the first part of user declarations.  */
#line 9 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"

#include "monetdb_config.h"
#include <sql_mem.h>
#include "sql_parser.h"
#include "sql_symbol.h"
#include "sql_datetime.h"
#include "sql_decimal.h"	/* for decimal_from_str() */
#include "sql_semantic.h"	/* for sql_add_param() & sql_add_arg() */
#include "sql_env.h"
#include "rel_sequence.h"	/* for sql_next_seq_name() */
#ifdef HAVE_HGE
#include "mal.h"		/* for have_hge */
#endif

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define SA 	m->sa
#define _symbol_create(t,d)         symbol_create( SA, t, d)
#define _symbol_create_list(t,d)    symbol_create_list( SA, t, d)
#define _symbol_create_int(t,d)     symbol_create_int( SA, t, d)
#define _symbol_create_lng(t,d)     symbol_create_lng( SA, t, d)
#define _symbol_create_symbol(t,d)  symbol_create_symbol( SA, t, d)
#define _symbol_create_hexa(t,d)    symbol_create_hexa( SA, t, d)
#define _newAtomNode(d)		    newAtomNode( SA, d)

#define L()                  dlist_create( SA )

#define append_list(l,d)     dlist_append_list( SA, l, d)
#define append_int(l,d)      dlist_append_int( SA, l, d)
#define append_lng(l,d)      dlist_append_lng( SA, l, d)
#define append_symbol(l,d)   dlist_append_symbol( SA, l, d)
#define append_string(l,d)   dlist_append_string( SA, l, d)
#define append_type(l,d)     dlist_append_type( SA, l, d)

#define _atom_string(t, v)   atom_string(SA, t, v)

#define YYMALLOC malloc
#define YYFREE free

#define YY_parse_LSP_NEEDED	/* needed for bison++ 1.21.11-3 */

#define SET_Z(info)(info = info | 0x02)
#define SET_M(info)(info = info | 0x01)

#ifdef HAVE_HGE
#define MAX_DEC_DIGITS (have_hge ? 38 : 18)
#define MAX_HEX_DIGITS (have_hge ? 32 : 16)
#else
#define MAX_DEC_DIGITS 18
#define MAX_HEX_DIGITS 16
#endif

static inline int
UTF8_strlen(const char *val)
{
	const unsigned char *s = (const unsigned char *) val;
	int pos = 0;

	while (*s) {
		int c = *s++;

		pos++;
		if (c < 0xC0)
			continue;
		if (*s++ < 0x80)
			return int_nil;
		if (c < 0xE0)
			continue;
		if (*s++ < 0x80)
			return int_nil;
		if (c < 0xF0)
			continue;
		if (*s++ < 0x80)
			return int_nil;
		if (c < 0xF8)
			continue;
		if (*s++ < 0x80)
			return int_nil;
		if (c < 0xFC)
			continue;
		if (*s++ < 0x80)
			return int_nil;
	}
	return pos;
}



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 111 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
{
	int		i_val,bval;
	wrd		w_val;
	lng		l_val,operation;
	double		fval;
	char *		sval;
	symbol*		sym;
	dlist*		l;
	sql_subtype	type;
}
/* Line 193 of yacc.c.  */
#line 853 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 121 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"

extern int sqllex( YYSTYPE *yylval, void *m );
/* enable to activate debugging support
int yydebug=1;
*/


/* Line 216 of yacc.c.  */
#line 872 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  225
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   16401

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  343
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  405
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1108
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2043

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   579

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   205,   191,     2,
     170,   171,   203,   189,   337,   190,   338,   204,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   339,     2,
       2,   174,     2,   342,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   340,     2,   341,   193,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   192,     2,   206,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   172,   173,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    12,    13,    18,    19,    24,
      25,    30,    31,    35,    36,    40,    43,    44,    46,    49,
      51,    53,    55,    57,    59,    61,    63,    65,    67,    69,
      71,    73,    75,    81,    83,    84,    86,    89,    92,    95,
     100,   105,   110,   114,   119,   123,   128,   133,   140,   145,
     147,   150,   154,   156,   157,   162,   163,   165,   167,   170,
     172,   174,   176,   178,   180,   181,   185,   187,   189,   196,
     203,   205,   209,   210,   214,   215,   219,   220,   223,   230,
     237,   238,   242,   243,   247,   249,   253,   255,   259,   262,
     265,   268,   270,   272,   275,   277,   279,   281,   285,   287,
     289,   292,   295,   298,   300,   302,   306,   308,   310,   317,
     324,   330,   336,   343,   350,   357,   362,   369,   380,   385,
     389,   397,   403,   408,   414,   419,   425,   431,   435,   439,
     443,   445,   446,   449,   452,   455,   457,   459,   461,   463,
     465,   470,   474,   479,   481,   484,   486,   489,   492,   496,
     498,   501,   503,   507,   511,   513,   517,   520,   522,   525,
     527,   530,   532,   534,   544,   546,   547,   551,   562,   563,
     565,   567,   568,   572,   577,   582,   587,   592,   599,   605,
     607,   609,   612,   615,   618,   621,   622,   627,   632,   636,
     640,   642,   647,   648,   652,   655,   657,   661,   663,   665,
     667,   669,   671,   673,   675,   679,   682,   683,   685,   687,
     690,   697,   699,   703,   705,   707,   709,   712,   714,   717,
     723,   725,   726,   730,   733,   734,   737,   740,   742,   744,
     747,   750,   754,   758,   759,   761,   763,   766,   769,   770,
     772,   774,   776,   777,   780,   783,   785,   787,   790,   796,
     798,   801,   805,   814,   819,   821,   825,   828,   835,   837,
     841,   843,   845,   846,   850,   851,   853,   857,   864,   868,
     880,   890,   902,   913,   925,   937,   947,   955,   957,   963,
     970,   971,   975,   976,   980,   982,   984,   986,   988,   990,
     992,   994,   996,   998,  1000,  1002,  1004,  1006,  1008,  1010,
    1012,  1014,  1016,  1018,  1020,  1022,  1024,  1026,  1028,  1030,
    1032,  1035,  1038,  1043,  1045,  1046,  1048,  1052,  1055,  1057,
    1059,  1064,  1071,  1077,  1082,  1084,  1087,  1092,  1094,  1097,
    1098,  1101,  1109,  1110,  1113,  1119,  1128,  1129,  1132,  1133,
    1135,  1138,  1143,  1148,  1150,  1152,  1154,  1155,  1160,  1163,
    1173,  1175,  1177,  1179,  1181,  1183,  1187,  1188,  1191,  1193,
    1196,  1201,  1206,  1211,  1216,  1217,  1219,  1220,  1222,  1226,
    1227,  1231,  1233,  1235,  1236,  1239,  1241,  1246,  1250,  1255,
    1259,  1263,  1268,  1272,  1278,  1285,  1291,  1297,  1302,  1307,
    1311,  1315,  1319,  1323,  1324,  1328,  1331,  1333,  1337,  1338,
    1340,  1342,  1344,  1346,  1348,  1350,  1352,  1354,  1356,  1360,
    1363,  1367,  1372,  1376,  1381,  1385,  1386,  1388,  1390,  1394,
    1397,  1400,  1404,  1408,  1411,  1414,  1417,  1419,  1421,  1422,
    1425,  1429,  1430,  1431,  1435,  1450,  1464,  1473,  1480,  1487,
    1488,  1493,  1495,  1499,  1500,  1504,  1506,  1510,  1512,  1515,
    1516,  1520,  1526,  1534,  1535,  1537,  1538,  1541,  1544,  1549,
    1554,  1555,  1559,  1560,  1562,  1563,  1566,  1567,  1570,  1572,
    1576,  1578,  1582,  1587,  1593,  1598,  1604,  1605,  1608,  1611,
    1613,  1617,  1623,  1625,  1629,  1631,  1635,  1637,  1639,  1641,
    1643,  1645,  1646,  1648,  1650,  1652,  1656,  1660,  1664,  1665,
    1668,  1672,  1677,  1682,  1687,  1692,  1698,  1704,  1706,  1709,
    1711,  1713,  1715,  1717,  1720,  1723,  1725,  1729,  1733,  1735,
    1742,  1744,  1746,  1748,  1753,  1760,  1766,  1768,  1772,  1774,
    1780,  1786,  1792,  1796,  1798,  1799,  1801,  1803,  1804,  1806,
    1812,  1814,  1819,  1820,  1823,  1825,  1829,  1831,  1834,  1837,
    1839,  1841,  1844,  1846,  1848,  1849,  1855,  1861,  1864,  1869,
    1871,  1872,  1876,  1878,  1882,  1883,  1886,  1890,  1892,  1896,
    1898,  1899,  1903,  1904,  1907,  1910,  1911,  1914,  1917,  1918,
    1921,  1924,  1927,  1929,  1933,  1936,  1937,  1939,  1941,  1943,
    1945,  1947,  1949,  1951,  1953,  1955,  1957,  1959,  1962,  1964,
    1968,  1972,  1979,  1986,  1987,  1989,  1991,  1995,  1999,  2003,
    2007,  2009,  2013,  2018,  2022,  2028,  2034,  2042,  2050,  2052,
    2056,  2061,  2063,  2065,  2067,  2070,  2072,  2076,  2080,  2084,
    2088,  2093,  2097,  2099,  2103,  2107,  2111,  2115,  2119,  2123,
    2127,  2131,  2135,  2139,  2143,  2147,  2151,  2155,  2159,  2163,
    2167,  2171,  2176,  2179,  2183,  2187,  2191,  2195,  2198,  2201,
    2205,  2207,  2209,  2211,  2213,  2215,  2217,  2219,  2221,  2223,
    2225,  2230,  2232,  2234,  2236,  2238,  2240,  2242,  2244,  2246,
    2252,  2256,  2258,  2262,  2263,  2267,  2268,  2272,  2273,  2277,
    2279,  2281,  2283,  2285,  2288,  2290,  2293,  2296,  2301,  2304,
    2306,  2309,  2312,  2313,  2317,  2320,  2323,  2327,  2330,  2334,
    2339,  2341,  2345,  2347,  2349,  2351,  2353,  2360,  2363,  2366,
    2369,  2372,  2375,  2376,  2379,  2388,  2397,  2404,  2411,  2418,
    2422,  2431,  2433,  2437,  2439,  2443,  2447,  2450,  2451,  2454,
    2456,  2458,  2462,  2464,  2468,  2470,  2474,  2479,  2486,  2492,
    2498,  2503,  2510,  2512,  2514,  2516,  2517,  2521,  2522,  2526,
    2527,  2531,  2532,  2534,  2538,  2542,  2544,  2546,  2548,  2550,
    2552,  2554,  2556,  2559,  2561,  2564,  2567,  2570,  2574,  2576,
    2579,  2581,  2583,  2585,  2587,  2589,  2591,  2593,  2595,  2597,
    2600,  2605,  2610,  2612,  2615,  2618,  2621,  2624,  2626,  2628,
    2633,  2635,  2639,  2645,  2647,  2651,  2657,  2664,  2671,  2673,
    2680,  2685,  2691,  2696,  2698,  2702,  2706,  2710,  2715,  2717,
    2720,  2725,  2727,  2730,  2731,  2734,  2736,  2738,  2740,  2742,
    2744,  2746,  2748,  2750,  2752,  2754,  2759,  2764,  2769,  2771,
    2776,  2778,  2780,  2782,  2784,  2786,  2788,  2793,  2800,  2802,
    2807,  2814,  2816,  2819,  2821,  2823,  2825,  2827,  2832,  2834,
    2839,  2846,  2848,  2853,  2855,  2860,  2867,  2869,  2871,  2873,
    2875,  2877,  2879,  2882,  2884,  2886,  2890,  2892,  2896,  2898,
    2900,  2902,  2904,  2906,  2908,  2910,  2912,  2914,  2916,  2918,
    2920,  2922,  2924,  2926,  2928,  2930,  2932,  2934,  2936,  2938,
    2940,  2942,  2944,  2946,  2948,  2950,  2952,  2954,  2956,  2958,
    2960,  2962,  2964,  2966,  2968,  2970,  2972,  2974,  2976,  2978,
    2980,  2982,  2984,  2986,  2988,  2990,  2992,  2994,  2996,  2998,
    3000,  3002,  3004,  3006,  3008,  3010,  3012,  3014,  3016,  3018,
    3020,  3022,  3024,  3026,  3028,  3030,  3032,  3034,  3036,  3038,
    3040,  3042,  3044,  3046,  3048,  3050,  3052,  3054,  3056,  3058,
    3060,  3062,  3064,  3066,  3068,  3070,  3072,  3074,  3076,  3080,
    3082,  3084,  3086,  3088,  3090,  3093,  3096,  3100,  3105,  3106,
    3108,  3111,  3113,  3115,  3117,  3121,  3123,  3125,  3127,  3129,
    3131,  3133,  3135,  3137,  3139,  3141,  3143,  3149,  3155,  3161,
    3169,  3170,  3173,  3178,  3185,  3190,  3193,  3198,  3201,  3203,
    3208,  3210,  3214,  3217,  3218,  3221,  3223,  3225,  3228,  3230,
    3234,  3236,  3237,  3240,  3244,  3248,  3252,  3256,  3261,  3269,
    3270,  3273,  3275,  3279,  3282,  3284,  3285,  3288,  3290,  3297,
    3300,  3303,  3311,  3313,  3314,  3317,  3326,  3328,  3329,  3333,
    3335,  3337,  3341,  3343,  3345,  3348,  3353,  3354,  3356,  3360,
    3364,  3370,  3377,  3379,  3381,  3383,  3385,  3386,  3389,  3392,
    3397,  3399,  3403,  3405,  3407,  3409,  3411,  3415,  3418,  3421,
    3422,  3424,  3427,  3430,  3431,  3433,  3439,  3441,  3443,  3447,
    3451,  3453,  3455,  3456,  3459,  3461,  3464,  3466,  3467,  3469,
    3471,  3474,  3475,  3477,  3480,  3483,  3486,  3488,  3490
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     344,     0,    -1,   355,   130,    -1,    -1,   244,   345,   355,
     130,    -1,    -1,   240,   346,   355,   130,    -1,    -1,   239,
     347,   355,   130,    -1,    -1,   243,   348,   355,   130,    -1,
      -1,   241,   349,   344,    -1,    -1,   242,   350,   344,    -1,
     668,   130,    -1,    -1,   130,    -1,     1,   130,    -1,    51,
      -1,   226,    -1,   248,    -1,   270,    -1,   234,    -1,   360,
      -1,   369,    -1,   374,    -1,   391,    -1,   488,    -1,   386,
      -1,   357,    -1,   359,    -1,   237,   633,   441,   564,   356,
      -1,   453,    -1,    -1,   238,    -1,   354,   358,    -1,   354,
     403,    -1,   435,   652,    -1,   358,   337,   435,   652,    -1,
     353,   661,   174,   525,    -1,   353,    63,   223,   661,    -1,
     353,   269,   661,    -1,   353,   630,   174,   661,    -1,   353,
     256,   661,    -1,   353,   283,   292,    58,    -1,   353,   283,
     292,   632,    -1,   351,   269,   361,   363,   670,   364,    -1,
     352,   269,   633,   491,    -1,   661,    -1,   223,   362,    -1,
     661,   223,   362,    -1,   661,    -1,    -1,   246,    20,   270,
     661,    -1,    -1,   365,    -1,   366,    -1,   365,   366,    -1,
     369,    -1,   374,    -1,   391,    -1,   488,    -1,   386,    -1,
      -1,   169,   257,   368,    -1,    56,    -1,    62,    -1,   254,
     377,   277,   384,   371,   373,    -1,   254,   370,   277,   384,
     372,   373,    -1,   659,    -1,   370,   337,   659,    -1,    -1,
     169,   254,   262,    -1,    -1,   169,   257,   262,    -1,    -1,
     108,   368,    -1,   255,   375,   377,   108,   384,   373,    -1,
     255,   376,   370,   108,   384,   373,    -1,    -1,   254,   262,
     109,    -1,    -1,   257,   262,   109,    -1,   378,    -1,   381,
     261,   380,    -1,   379,    -1,   379,   337,   379,    -1,   309,
     108,    -1,   309,   258,    -1,   275,   633,    -1,   633,    -1,
     487,    -1,   186,   266,    -1,   186,    -1,   382,    -1,   383,
      -1,   382,   337,   383,    -1,    67,    -1,    64,    -1,    65,
     441,    -1,    66,   441,    -1,   268,   441,    -1,   245,    -1,
     385,    -1,   384,   337,   385,    -1,   267,    -1,   659,    -1,
     273,   275,   633,   274,   390,   410,    -1,   273,   275,   633,
     274,   275,   633,    -1,   273,   275,   633,   273,   388,    -1,
     273,   275,   633,   248,   389,    -1,   273,   275,   633,   270,
      87,    89,    -1,   273,   275,   633,   270,    67,    89,    -1,
     273,   275,   633,   270,    87,    88,    -1,   273,    55,   661,
     387,    -1,   273,    55,   661,   250,   277,   661,    -1,   273,
      55,   270,   401,   253,   667,    16,   324,   253,   667,    -1,
     169,   401,   253,   667,    -1,   270,   269,   661,    -1,   169,
     401,   253,   667,   270,   269,   661,    -1,   390,   661,   270,
     246,   420,    -1,   390,   661,   270,   107,    -1,   390,   661,
     270,   173,   107,    -1,   390,   661,   248,   246,    -1,   390,
     661,   270,    98,     3,    -1,   390,   661,   270,    98,   107,
      -1,   390,   661,   491,    -1,   225,   661,   491,    -1,   275,
     661,   491,    -1,   276,    -1,    -1,   351,   400,    -1,   351,
     403,    -1,   351,   437,    -1,   443,    -1,   445,    -1,   398,
      -1,   392,    -1,   474,    -1,   351,   112,   633,   393,    -1,
     352,   112,   633,    -1,   273,   112,   633,   394,    -1,   395,
      -1,   393,   395,    -1,   396,    -1,   394,   396,    -1,   316,
     652,    -1,    85,   169,   649,    -1,   397,    -1,   316,   652,
      -1,   114,    -1,   114,   169,   649,    -1,   114,   169,   584,
      -1,   397,    -1,   113,   102,   647,    -1,   116,   647,    -1,
     119,    -1,   115,   647,    -1,   118,    -1,   123,   647,    -1,
     117,    -1,   120,    -1,   351,   399,   315,   661,   261,   633,
     170,   435,   171,    -1,   278,    -1,    -1,   256,   661,   367,
      -1,    55,   661,   169,   401,   253,   667,   233,   667,   269,
     661,    -1,    -1,   252,    -1,   251,    -1,    -1,    98,   661,
       3,    -1,   275,   633,   406,   402,    -1,   217,   275,   633,
     406,    -1,   218,   275,   633,   406,    -1,   220,   275,   633,
     406,    -1,   219,   275,   633,   406,   261,     3,    -1,   404,
     275,   633,   406,   405,    -1,   216,    -1,   215,    -1,    58,
     216,    -1,    58,   215,    -1,    17,   216,    -1,    17,   215,
      -1,    -1,   261,    76,    64,    84,    -1,   261,    76,    83,
      84,    -1,   261,    76,   248,    -1,   170,   409,   171,    -1,
     407,    -1,   441,   316,   438,   408,    -1,    -1,   169,    82,
     168,    -1,   169,   168,    -1,   411,    -1,   409,   337,   411,
      -1,   413,    -1,   424,    -1,   410,    -1,   416,    -1,   436,
      -1,   127,    -1,   128,    -1,   658,   652,   414,    -1,   658,
     412,    -1,    -1,   415,    -1,   418,    -1,   415,   418,    -1,
     661,   169,   263,   170,   417,   171,    -1,   418,    -1,   417,
     337,   418,    -1,   419,    -1,   421,    -1,   422,    -1,   246,
     420,    -1,   585,    -1,   425,   432,    -1,   124,   125,   316,
     126,   423,    -1,   129,    -1,    -1,   170,   393,   171,    -1,
     425,   433,    -1,    -1,   225,   661,    -1,    82,    41,    -1,
      42,    -1,    43,    -1,   270,   107,    -1,   270,   246,    -1,
     261,    65,   426,    -1,   261,    64,   426,    -1,    -1,   427,
      -1,   428,    -1,   428,   427,    -1,   427,   428,    -1,    -1,
      70,    -1,    39,    -1,    40,    -1,    -1,   110,   430,    -1,
     173,   107,    -1,   107,    -1,   278,    -1,   265,   260,    -1,
     268,   633,   441,   431,   429,    -1,   434,    -1,   278,   442,
      -1,   265,   260,   442,    -1,   249,   260,   442,   268,   633,
     441,   431,   429,    -1,   224,   170,   559,   171,    -1,   661,
      -1,   435,   337,   661,    -1,   179,   633,    -1,   280,   633,
     441,   316,   438,   440,    -1,   439,    -1,   170,   438,   171,
      -1,   542,    -1,   536,    -1,    -1,   169,   224,   262,    -1,
      -1,   442,    -1,   170,   435,   171,    -1,   351,   227,   633,
     232,   233,   661,    -1,   661,   338,   661,    -1,   351,   229,
     633,   170,   472,   171,   231,   471,   232,   233,   444,    -1,
     351,   229,   633,   170,   472,   171,   231,   471,   446,    -1,
     351,   229,   633,   170,   472,   171,   231,   471,   236,     5,
       4,    -1,   351,   162,   229,   633,   170,   472,   171,   232,
     233,   444,    -1,   351,   230,   633,   170,   472,   171,   231,
     471,   232,   233,   444,    -1,   351,   230,   633,   170,   472,
     171,   231,   471,   236,     5,     4,    -1,   351,   228,   633,
     170,   472,   171,   232,   233,   444,    -1,   351,   228,   633,
     170,   472,   171,   446,    -1,   449,    -1,   307,   447,   449,
     130,   308,    -1,   307,   306,   447,   449,   130,   308,    -1,
      -1,   447,   449,   130,    -1,    -1,   448,   450,   130,    -1,
     493,    -1,   492,    -1,   360,    -1,   369,    -1,   374,    -1,
     391,    -1,   488,    -1,   386,    -1,   357,    -1,   359,    -1,
     451,    -1,   541,    -1,   493,    -1,   492,    -1,   369,    -1,
     374,    -1,   357,    -1,   359,    -1,   451,    -1,   541,    -1,
     453,    -1,   452,    -1,   467,    -1,   465,    -1,   459,    -1,
     457,    -1,   235,   454,    -1,   235,   604,    -1,   455,   170,
     456,   171,    -1,   633,    -1,    -1,   586,    -1,   456,   337,
     586,    -1,   272,   458,    -1,   439,    -1,   559,    -1,   275,
     170,   439,   171,    -1,   296,   586,   461,   464,   308,   296,
      -1,   296,   463,   464,   308,   296,    -1,   297,   586,   298,
     447,    -1,   460,    -1,   461,   460,    -1,   297,   559,   298,
     447,    -1,   462,    -1,   463,   462,    -1,    -1,   299,   447,
      -1,   302,   559,   298,   447,   466,   308,   302,    -1,    -1,
     299,   447,    -1,   303,   559,   298,   447,   466,    -1,   468,
     304,   559,   305,   447,   308,   304,   469,    -1,    -1,   661,
     339,    -1,    -1,   661,    -1,   658,   652,    -1,   470,   337,
     658,   652,    -1,   275,   170,   470,   171,    -1,   652,    -1,
     473,    -1,   203,    -1,    -1,   473,   337,   661,   652,    -1,
     661,   652,    -1,   351,   317,   633,   475,   476,   261,   661,
     477,   482,    -1,   319,    -1,   320,    -1,    67,    -1,    64,
      -1,    65,    -1,    65,   318,   435,    -1,    -1,   326,   478,
      -1,   479,    -1,   478,   479,    -1,   324,   481,   480,   661,
      -1,   323,   481,   480,   661,    -1,   324,   275,   480,   661,
      -1,   323,   275,   480,   661,    -1,    -1,   316,    -1,    -1,
     321,    -1,   483,   485,   486,    -1,    -1,   109,   325,   484,
      -1,   321,    -1,   322,    -1,    -1,   297,   559,    -1,   450,
      -1,   307,   306,   448,   308,    -1,   229,   633,   489,    -1,
     162,   229,   633,   489,    -1,   230,   633,   489,    -1,   228,
     633,   489,    -1,   352,   275,   633,   491,    -1,   352,   487,
     491,    -1,   352,   186,   229,   633,   491,    -1,   352,   186,
     162,   229,   633,   491,    -1,   352,   186,   230,   633,   491,
      -1,   352,   186,   228,   633,   491,    -1,   352,   280,   633,
     491,    -1,   352,   227,   633,   491,    -1,   352,   256,   661,
      -1,   352,    55,   661,    -1,   352,   315,   633,    -1,   352,
     317,   633,    -1,    -1,   170,   490,   171,    -1,   170,   171,
      -1,   652,    -1,   652,   337,   490,    -1,    -1,    43,    -1,
      42,    -1,   493,    -1,   492,    -1,   517,    -1,   519,    -1,
     518,    -1,   502,    -1,   494,    -1,    76,   499,   500,    -1,
      78,   661,    -1,    79,    78,   661,    -1,    77,   499,   500,
     501,    -1,    85,    86,   495,    -1,   270,    58,    86,   495,
      -1,   270,    86,   495,    -1,    -1,   496,    -1,   497,    -1,
     496,   337,   497,    -1,    87,    89,    -1,    87,    88,    -1,
      90,    91,   498,    -1,    96,    97,   666,    -1,    87,    92,
      -1,    87,    93,    -1,    94,    87,    -1,    95,    -1,    80,
      -1,    -1,   187,    81,    -1,   187,    82,    81,    -1,    -1,
      -1,   277,    78,   661,    -1,   309,   510,   258,   633,   441,
     108,   515,   505,   508,   511,   512,   513,   514,   503,    -1,
     309,   510,   258,   633,   441,   108,   312,   505,   508,   511,
     512,   513,   514,    -1,   309,   510,    27,   258,   633,   108,
     515,   514,    -1,   309,   438,   258,   667,   508,   511,    -1,
     309,   438,   258,   313,   508,   511,    -1,    -1,   314,   170,
     504,   171,    -1,   649,    -1,   504,   337,   649,    -1,    -1,
     170,   506,   171,    -1,   507,    -1,   506,   337,   507,    -1,
     661,    -1,   661,     3,    -1,    -1,   509,   311,   667,    -1,
     509,   311,   667,   337,   667,    -1,   509,   311,   667,   337,
     667,   337,   667,    -1,    -1,    16,    -1,    -1,   649,   310,
      -1,   294,   649,    -1,   649,   294,   649,   310,    -1,   649,
     310,   294,   649,    -1,    -1,   107,   480,   667,    -1,    -1,
      59,    -1,    -1,    60,    61,    -1,    -1,    82,   225,    -1,
     516,    -1,   170,   516,   171,    -1,   667,    -1,   516,   337,
     667,    -1,    64,   108,   633,   531,    -1,    65,   633,   270,
     529,   531,    -1,    67,   258,   633,   520,    -1,    67,   258,
     633,   442,   520,    -1,    -1,   246,   279,    -1,   279,   521,
      -1,   439,    -1,   170,   522,   171,    -1,   521,   337,   170,
     522,   171,    -1,   526,    -1,   522,   337,   526,    -1,   527,
      -1,   523,   337,   527,    -1,   107,    -1,   586,    -1,   525,
      -1,   525,    -1,   545,    -1,    -1,   186,    -1,   247,    -1,
     530,    -1,   529,   337,   530,    -1,   658,   174,   559,    -1,
     442,   174,   584,    -1,    -1,   281,   559,    -1,   170,   532,
     171,    -1,   553,    73,    74,   553,    -1,   553,   163,   553,
     535,    -1,   553,    74,   553,   535,    -1,   553,    72,    74,
     553,    -1,   553,   533,    74,   553,   535,    -1,   553,    72,
     533,    74,   553,    -1,    75,    -1,   534,    71,    -1,   534,
      -1,    68,    -1,    69,    -1,    70,    -1,   261,   559,    -1,
      16,   442,    -1,   536,    -1,   169,   537,   539,    -1,   537,
     337,   538,    -1,   538,    -1,   661,   441,   316,   170,   539,
     171,    -1,   542,    -1,   541,    -1,   542,    -1,    66,   528,
     548,   549,    -1,    66,   528,   548,   258,   543,   549,    -1,
     545,   561,   562,   563,   564,    -1,   544,    -1,   543,   337,
     544,    -1,   661,    -1,   545,   167,   546,   547,   545,    -1,
     545,   166,   546,   547,   545,    -1,   545,   165,   546,   547,
     545,    -1,   170,   545,   171,    -1,   540,    -1,    -1,   186,
      -1,   247,    -1,    -1,   164,    -1,   164,   102,   170,   557,
     171,    -1,   610,    -1,   550,   531,   556,   558,    -1,    -1,
     108,   551,    -1,   553,    -1,   551,   337,   553,    -1,   633,
      -1,   633,   555,    -1,   604,   555,    -1,   604,    -1,   552,
      -1,   584,   555,    -1,   584,    -1,   532,    -1,    -1,   340,
     554,   545,   341,   555,    -1,   316,   661,   170,   663,   171,
      -1,   316,   661,    -1,   661,   170,   663,   171,    -1,   661,
      -1,    -1,   106,   102,   557,    -1,   634,    -1,   557,   337,
     634,    -1,    -1,   105,   559,    -1,   560,   176,   559,    -1,
     560,    -1,   569,   187,   560,    -1,   569,    -1,    -1,   101,
     102,   565,    -1,    -1,   293,   648,    -1,   293,   588,    -1,
      -1,   294,   650,    -1,   294,   588,    -1,    -1,   295,   650,
      -1,   295,    14,    -1,   295,   588,    -1,   566,    -1,   565,
     337,   566,    -1,   586,   567,    -1,    -1,   221,    -1,   222,
      -1,   570,    -1,   571,    -1,   573,    -1,   575,    -1,   576,
      -1,   578,    -1,   580,    -1,   583,    -1,   586,    -1,   173,
     569,    -1,   568,    -1,   569,   188,   569,    -1,   569,   174,
     569,    -1,   569,   184,   572,   569,   187,   569,    -1,   569,
     183,   572,   569,   187,   569,    -1,    -1,    99,    -1,   100,
      -1,   569,   180,   574,    -1,   569,   178,   574,    -1,   569,
     179,   574,    -1,   569,   177,   574,    -1,   586,    -1,   586,
     104,   667,    -1,   586,   259,   173,   107,    -1,   586,   259,
     107,    -1,   569,   182,   170,   523,   171,    -1,   569,   181,
     170,   523,   171,    -1,   170,   577,   171,   182,   170,   523,
     171,    -1,   170,   577,   171,   181,   170,   523,   171,    -1,
     569,    -1,   577,   337,   569,    -1,   569,   188,   579,   584,
      -1,   185,    -1,   175,    -1,   186,    -1,   103,   584,    -1,
     569,    -1,   581,   337,   569,    -1,   340,   581,   341,    -1,
     582,   633,   582,    -1,   170,   545,   171,    -1,   170,   279,
     521,   171,    -1,   170,   536,   171,    -1,   587,    -1,   586,
     189,   586,    -1,   586,   190,   586,    -1,   586,   203,   586,
      -1,   586,   204,   586,    -1,   586,   205,   586,    -1,   586,
     193,   586,    -1,   586,   191,   586,    -1,   586,   210,   586,
      -1,   586,   207,   586,    -1,   586,   214,   586,    -1,   586,
     208,   586,    -1,   586,   213,   586,    -1,   586,   209,   586,
      -1,   586,   212,   586,    -1,   586,   211,   586,    -1,   586,
     131,   586,    -1,   586,   192,   586,    -1,   586,   206,   586,
      -1,   586,   206,   174,   586,    -1,   206,   586,    -1,   586,
     201,   586,    -1,   586,   200,   586,    -1,   586,   199,   586,
      -1,   586,   198,   586,    -1,   189,   586,    -1,   190,   586,
      -1,   170,   559,   171,    -1,   585,    -1,   584,    -1,   613,
      -1,   630,    -1,    62,    -1,   589,    -1,   634,    -1,   603,
      -1,   617,    -1,   604,    -1,   121,   122,   109,   633,    -1,
     607,    -1,   609,    -1,   637,    -1,   635,    -1,   676,    -1,
     588,    -1,   524,    -1,   342,    -1,   590,   327,   170,   591,
     171,    -1,   614,   170,   171,    -1,   617,    -1,   592,   593,
     594,    -1,    -1,   328,   102,   557,    -1,    -1,   101,   102,
     565,    -1,    -1,   595,   596,   602,    -1,    84,    -1,   335,
      -1,   597,    -1,   599,    -1,   336,   332,    -1,   598,    -1,
     329,   321,    -1,   587,   332,    -1,   183,   597,   187,   600,
      -1,   336,   331,    -1,   601,    -1,   329,   321,    -1,   587,
     332,    -1,    -1,   330,   329,   321,    -1,   330,   106,    -1,
     330,   334,    -1,   330,    82,   333,    -1,   131,   661,    -1,
     605,   170,   171,    -1,   605,   170,   638,   171,    -1,   606,
      -1,   661,   338,   606,    -1,   661,    -1,    68,    -1,    69,
      -1,    67,    -1,   111,   170,   624,   108,   586,   171,    -1,
      46,   608,    -1,    48,   608,    -1,    47,   608,    -1,    50,
     608,    -1,    49,   608,    -1,    -1,   170,   171,    -1,   196,
     170,   586,   108,   586,   109,   586,   171,    -1,   196,   170,
     586,   337,   586,   337,   586,   171,    -1,   196,   170,   586,
     108,   586,   171,    -1,   196,   170,   586,   337,   586,   171,
      -1,   195,   170,   586,   181,   586,   171,    -1,   586,   197,
     586,    -1,   194,   170,   586,   337,   586,   337,   586,   171,
      -1,   611,    -1,   610,   337,   611,    -1,   203,    -1,   661,
     338,   203,    -1,   604,   338,   203,    -1,   559,   612,    -1,
      -1,   316,   661,    -1,   631,    -1,    10,    -1,   661,   338,
      10,    -1,     8,    -1,   661,   338,     8,    -1,     9,    -1,
     661,   338,     9,    -1,   615,   170,   203,   171,    -1,   615,
     170,   661,   338,   203,   171,    -1,   615,   170,   247,   645,
     171,    -1,   615,   170,   186,   645,   171,    -1,   615,   170,
     645,   171,    -1,   616,   170,   645,   337,   645,   171,    -1,
     747,    -1,   189,    -1,   190,    -1,    -1,   169,   283,   292,
      -1,    -1,   170,   666,   171,    -1,    -1,   170,   666,   171,
      -1,    -1,   282,    -1,   283,   620,   619,    -1,   284,   621,
     619,    -1,   286,    -1,   287,    -1,   288,    -1,   289,    -1,
     290,    -1,   623,    -1,   291,    -1,   623,   620,    -1,   623,
      -1,   291,   621,    -1,   623,   620,    -1,   291,   621,    -1,
     625,   277,   626,    -1,   627,    -1,   285,   628,    -1,    55,
      -1,    57,    -1,    56,    -1,   667,    -1,    13,    -1,    12,
      -1,    11,    -1,    14,    -1,    15,    -1,   282,   667,    -1,
     283,   620,   619,   667,    -1,   284,   621,   619,   667,    -1,
     632,    -1,   657,   667,    -1,     6,   667,    -1,   654,   667,
      -1,     5,   667,    -1,    44,    -1,    45,    -1,   285,   618,
     667,   628,    -1,   661,    -1,   661,   338,   661,    -1,   661,
     338,   661,   338,   661,    -1,   661,    -1,   661,   338,   661,
      -1,   661,   338,   661,   338,   661,    -1,    18,   170,   636,
     316,   652,   171,    -1,    19,   170,   636,   337,   652,   171,
      -1,   559,    -1,   300,   170,   586,   337,   586,   171,    -1,
     301,   170,   639,   171,    -1,   296,   586,   641,   644,   308,
      -1,   296,   643,   644,   308,    -1,   525,    -1,   638,   337,
     525,    -1,   525,   337,   525,    -1,   639,   337,   525,    -1,
     297,   586,   298,   525,    -1,   640,    -1,   641,   640,    -1,
     297,   559,   298,   525,    -1,   642,    -1,   643,   642,    -1,
      -1,   299,   586,    -1,   586,    -1,   666,    -1,   665,    -1,
     664,    -1,   665,    -1,   664,    -1,   666,    -1,    20,    -1,
     655,    -1,   656,    -1,    20,   170,   646,   171,    -1,   655,
     170,   646,   171,    -1,   656,   170,   646,   171,    -1,   657,
      -1,   657,   170,   646,   171,    -1,    31,    -1,    32,    -1,
      35,    -1,    33,    -1,    34,    -1,    29,    -1,    29,   170,
     646,   171,    -1,    29,   170,   646,   337,   651,   171,    -1,
      30,    -1,    30,   170,   646,   171,    -1,    30,   170,   666,
     337,   666,   171,    -1,    36,    -1,    36,    38,    -1,    37,
      -1,   622,    -1,   629,    -1,     6,    -1,     6,   170,   646,
     171,    -1,   654,    -1,   654,   170,   646,   171,    -1,   654,
     170,   666,   337,   666,   171,    -1,     5,    -1,     5,   170,
     646,   171,    -1,    52,    -1,    52,   170,   653,   171,    -1,
      52,   170,   653,   337,   666,   171,    -1,    54,    -1,    53,
      -1,    53,    -1,   667,    -1,     7,    -1,    24,    -1,    20,
      21,    -1,    25,    -1,    26,    -1,    20,    22,    23,    -1,
      28,    -1,    27,    22,    23,    -1,   661,    -1,   660,    -1,
       5,    -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,     5,    -1,     6,    -1,   172,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,   662,    -1,    22,    -1,
     233,    -1,    23,    -1,   253,    -1,   264,    -1,    38,    -1,
     266,    -1,   256,    -1,    97,    -1,   227,    -1,    79,    -1,
     122,    -1,   292,    -1,    41,    -1,   316,    -1,   223,    -1,
     276,    -1,   117,    -1,   247,    -1,   113,    -1,   115,    -1,
     116,    -1,   240,    -1,   269,    -1,    85,    -1,   322,    -1,
     275,    -1,   123,    -1,   168,    -1,    96,    -1,   110,    -1,
     263,    -1,   321,    -1,   260,    -1,   236,    -1,    91,    -1,
      63,    -1,   282,    -1,   283,    -1,   284,    -1,   285,    -1,
     244,    -1,   245,    -1,   239,    -1,   243,    -1,   241,    -1,
     242,    -1,    26,    -1,   271,    -1,    82,    -1,   139,    -1,
     140,    -1,   143,    -1,   145,    -1,   146,    -1,   147,    -1,
     148,    -1,   149,    -1,   150,    -1,   151,    -1,   153,    -1,
     155,    -1,   156,    -1,   157,    -1,   158,    -1,   160,    -1,
     162,    -1,   216,    -1,   215,    -1,   237,    -1,   238,    -1,
      98,    -1,    52,    -1,   661,    -1,   663,   337,   661,    -1,
     665,    -1,    11,    -1,    11,    -1,     5,    -1,     3,    -1,
       3,   667,    -1,   245,   669,    -1,   666,   170,   171,    -1,
     666,   170,   523,   171,    -1,    -1,   671,    -1,   264,   672,
      -1,   663,    -1,   675,    -1,   673,    -1,   674,   337,   673,
      -1,   586,    -1,   677,    -1,   678,    -1,   679,    -1,   680,
      -1,   694,    -1,   701,    -1,   703,    -1,   706,    -1,   716,
      -1,   717,    -1,   132,   170,   587,   720,   171,    -1,   133,
     170,   674,   720,   171,    -1,   134,   170,   673,   720,   171,
      -1,   135,   170,   233,   682,   681,   720,   171,    -1,    -1,
     337,   721,    -1,   337,   721,   337,   683,    -1,   337,   721,
     337,   683,   337,   689,    -1,   337,   721,   337,   689,    -1,
     337,   683,    -1,   337,   683,   337,   689,    -1,   337,   689,
      -1,   661,    -1,   136,   170,   684,   171,    -1,   685,    -1,
     684,   337,   685,    -1,   687,   686,    -1,    -1,   316,   688,
      -1,   586,    -1,   661,    -1,   690,   692,    -1,   691,    -1,
     690,   337,   691,    -1,   586,    -1,    -1,   262,   693,    -1,
     107,   261,   107,    -1,   148,   261,   107,    -1,   147,   261,
     107,    -1,   145,   261,   107,    -1,   145,   261,    82,   151,
      -1,   137,   170,   695,   696,   692,   720,   171,    -1,    -1,
     721,   337,    -1,   697,    -1,   696,   337,   697,    -1,   698,
     699,    -1,   586,    -1,    -1,   316,   700,    -1,   661,    -1,
     138,   170,   719,   587,   702,   171,    -1,    83,   140,    -1,
     139,   140,    -1,   141,   170,   233,   704,   705,   720,   171,
      -1,   661,    -1,    -1,   337,   587,    -1,   142,   170,   707,
     708,   720,   714,   715,   171,    -1,     3,    -1,    -1,   143,
     709,   710,    -1,   729,    -1,   711,    -1,   710,   337,   711,
      -1,   712,    -1,   713,    -1,   587,   728,    -1,   587,   316,
     661,   728,    -1,    -1,   729,    -1,   107,   261,   148,    -1,
     148,   261,   148,    -1,   144,   170,   587,   720,   171,    -1,
     154,   170,   718,   673,   730,   171,    -1,   719,    -1,   112,
      -1,   149,    -1,   151,    -1,    -1,   155,   151,    -1,   155,
     112,    -1,   152,   170,   722,   171,    -1,   723,    -1,   722,
     337,   723,    -1,   726,    -1,   727,    -1,   661,    -1,   586,
      -1,   725,   316,   724,    -1,   246,   725,    -1,    82,   246,
      -1,    -1,   729,    -1,   102,   146,    -1,   102,   122,    -1,
      -1,   731,    -1,   158,   277,   159,   732,   740,    -1,   733,
      -1,   738,    -1,   160,   734,   736,    -1,    82,   153,   736,
      -1,   735,    -1,     3,    -1,    -1,   156,   737,    -1,   735,
      -1,   157,   739,    -1,   661,    -1,    -1,   741,    -1,   743,
      -1,   744,   742,    -1,    -1,   743,    -1,   150,   746,    -1,
      82,   153,    -1,   153,   745,    -1,   735,    -1,   661,    -1,
     161,   170,   673,   561,   720,   171,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   619,   619,   630,   630,   644,   644,   659,   659,   674,
     674,   689,   689,   699,   699,   705,   706,   707,   708,   709,
     714,   717,   720,   723,   727,   728,   729,   730,   731,   732,
     733,   734,   735,   742,   746,   747,   751,   753,   757,   762,
     770,   775,   783,   791,   799,   807,   813,   821,   829,   837,
     841,   845,   852,   855,   856,   860,   861,   865,   866,   870,
     870,   870,   870,   870,   873,   874,   878,   879,   883,   892,
     903,   904,   909,   910,   914,   915,   920,   921,   925,   933,
     943,   944,   948,   949,   953,   957,   964,   965,   970,   971,
     975,   976,   977,   988,   989,   990,   994,   995,  1000,  1001,
    1002,  1003,  1004,  1005,  1009,  1010,  1015,  1016,  1022,  1028,
    1033,  1038,  1043,  1048,  1053,  1058,  1063,  1068,  1081,  1087,
    1093,  1103,  1108,  1112,  1116,  1118,  1126,  1134,  1139,  1144,
    1152,  1153,  1157,  1158,  1159,  1160,  1161,  1162,  1163,  1164,
    1180,  1191,  1208,  1218,  1219,  1223,  1224,  1228,  1229,  1230,
    1234,  1235,  1236,  1237,  1238,  1242,  1243,  1244,  1245,  1246,
    1247,  1248,  1249,  1256,  1266,  1267,  1287,  1292,  1303,  1304,
    1305,  1309,  1310,  1314,  1325,  1335,  1345,  1358,  1368,  1383,
    1384,  1385,  1386,  1387,  1388,  1392,  1393,  1394,  1395,  1399,
    1400,  1404,  1414,  1415,  1416,  1420,  1422,  1426,  1426,  1427,
    1427,  1427,  1430,  1431,  1435,  1443,  1496,  1497,  1501,  1503,
    1508,  1517,  1519,  1523,  1523,  1523,  1526,  1530,  1534,  1543,
    1572,  1610,  1611,  1616,  1627,  1628,  1632,  1633,  1634,  1635,
    1636,  1640,  1644,  1648,  1649,  1650,  1651,  1652,  1656,  1657,
    1658,  1659,  1663,  1664,  1668,  1669,  1670,  1671,  1672,  1682,
    1686,  1688,  1690,  1705,  1709,  1711,  1716,  1720,  1732,  1733,
    1737,  1738,  1742,  1743,  1747,  1748,  1752,  1756,  1764,  1768,
    1781,  1794,  1822,  1835,  1848,  1877,  1889,  1904,  1906,  1910,
    1928,  1929,  1934,  1935,  1940,  1941,  1942,  1943,  1944,  1945,
    1946,  1947,  1948,  1949,  1950,  1951,  1955,  1956,  1957,  1958,
    1959,  1960,  1961,  1962,  1966,  1967,  1968,  1969,  1970,  1971,
    1984,  1988,  1992,  2001,  2004,  2005,  2006,  2012,  2016,  2017,
    2018,  2023,  2029,  2037,  2045,  2047,  2052,  2060,  2062,  2067,
    2068,  2075,  2089,  2090,  2092,  2103,  2124,  2125,  2129,  2130,
    2135,  2139,  2147,  2149,  2154,  2155,  2159,  2163,  2168,  2217,
    2231,  2232,  2236,  2237,  2238,  2239,  2243,  2244,  2248,  2249,
    2255,  2256,  2257,  2258,  2261,  2263,  2266,  2268,  2272,  2280,
    2281,  2285,  2286,  2290,  2291,  2295,  2297,  2303,  2309,  2315,
    2321,  2330,  2335,  2340,  2348,  2356,  2364,  2372,  2377,  2382,
    2383,  2384,  2385,  2389,  2390,  2391,  2395,  2398,  2403,  2404,
    2405,  2410,  2411,  2416,  2417,  2418,  2419,  2423,  2430,  2432,
    2434,  2436,  2440,  2442,  2444,  2449,  2450,  2454,  2456,  2462,
    2463,  2464,  2465,  2469,  2470,  2471,  2472,  2476,  2477,  2481,
    2482,  2483,  2487,  2488,  2492,  2506,  2520,  2530,  2537,  2547,
    2548,  2553,  2554,  2559,  2560,  2564,  2565,  2569,  2573,  2582,
    2586,  2591,  2596,  2605,  2606,  2610,  2611,  2612,  2613,  2615,
    2620,  2621,  2625,  2626,  2630,  2631,  2635,  2636,  2640,  2641,
    2645,  2646,  2651,  2660,  2701,  2709,  2720,  2721,  2723,  2725,
    2730,  2731,  2736,  2737,  2742,  2743,  2748,  2765,  2769,  2773,
    2774,  2778,  2779,  2780,  2784,  2785,  2790,  2795,  2803,  2804,
    2810,  2812,  2818,  2826,  2834,  2842,  2850,  2861,  2862,  2863,
    2867,  2868,  2869,  2873,  2874,  2894,  2898,  2908,  2909,  2913,
    2925,  2930,  2932,  2936,  2947,  2958,  2989,  2990,  2995,  2999,
    3008,  3017,  3025,  3026,  3030,  3031,  3032,  3037,  3038,  3040,
    3045,  3049,  3059,  3060,  3064,  3065,  3070,  3074,  3078,  3082,
    3089,  3090,  3100,  3105,  3115,  3114,  3127,  3132,  3137,  3142,
    3150,  3151,  3155,  3157,  3163,  3164,  3169,  3174,  3178,  3183,
    3187,  3188,  3193,  3194,  3198,  3202,  3203,  3207,  3211,  3212,
    3216,  3220,  3224,  3225,  3230,  3239,  3240,  3241,  3245,  3246,
    3247,  3248,  3249,  3250,  3251,  3252,  3253,  3257,  3274,  3278,
    3285,  3295,  3302,  3312,  3313,  3314,  3318,  3325,  3332,  3339,
    3349,  3353,  3369,  3370,  3374,  3380,  3386,  3391,  3399,  3401,
    3406,  3417,  3418,  3419,  3423,  3427,  3428,  3432,  3436,  3445,
    3446,  3448,  3454,  3455,  3462,  3469,  3476,  3483,  3490,  3497,
    3504,  3511,  3518,  3525,  3532,  3538,  3545,  3552,  3559,  3566,
    3573,  3580,  3587,  3593,  3600,  3607,  3614,  3621,  3623,  3645,
    3649,  3650,  3654,  3655,  3657,  3659,  3660,  3661,  3662,  3663,
    3664,  3665,  3666,  3667,  3668,  3669,  3670,  3671,  3675,  3745,
    3751,  3752,  3756,  3761,  3762,  3767,  3768,  3773,  3774,  3779,
    3780,  3784,  3785,  3789,  3790,  3791,  3795,  3799,  3804,  3805,
    3806,  3810,  3814,  3815,  3816,  3817,  3818,  3822,  3826,  3830,
    3858,  3859,  3864,  3865,  3866,  3867,  3871,  3878,  3883,  3888,
    3893,  3898,  3906,  3907,  3911,  3921,  3931,  3938,  3945,  3952,
    3959,  3972,  3973,  3978,  3983,  3988,  3993,  4001,  4002,  4006,
    4028,  4029,  4034,  4035,  4040,  4041,  4047,  4053,  4059,  4065,
    4071,  4077,  4084,  4088,  4089,  4090,  4094,  4095,  4106,  4108,
    4112,  4114,  4118,  4119,  4125,  4134,  4135,  4136,  4137,  4138,
    4142,  4143,  4147,  4153,  4156,  4162,  4165,  4171,  4174,  4179,
    4199,  4200,  4201,  4205,  4211,  4275,  4306,  4357,  4396,  4413,
    4429,  4445,  4461,  4462,  4479,  4496,  4513,  4534,  4538,  4545,
    4590,  4591,  4595,  4606,  4609,  4613,  4621,  4627,  4635,  4639,
    4644,  4646,  4652,  4660,  4662,  4667,  4671,  4677,  4685,  4687,
    4692,  4700,  4702,  4707,  4708,  4712,  4717,  4728,  4739,  4750,
    4760,  4770,  4780,  4782,  4787,  4788,  4790,  4792,  4801,  4802,
    4811,  4812,  4813,  4814,  4815,  4817,  4818,  4831,  4849,  4850,
    4864,  4884,  4885,  4886,  4887,  4888,  4889,  4890,  4892,  4893,
    4895,  4907,  4921,  4935,  4942,  4957,  4972,  4979,  4999,  5011,
    5026,  5041,  5042,  5046,  5047,  5048,  5051,  5052,  5055,  5057,
    5060,  5061,  5062,  5063,  5064,  5065,  5069,  5070,  5071,  5072,
    5073,  5074,  5075,  5076,  5080,  5081,  5082,  5083,  5084,  5085,
    5086,  5087,  5088,  5089,  5090,  5091,  5092,  5094,  5095,  5096,
    5097,  5098,  5099,  5100,  5101,  5102,  5103,  5104,  5105,  5106,
    5107,  5109,  5110,  5111,  5112,  5113,  5114,  5115,  5116,  5117,
    5118,  5119,  5120,  5121,  5122,  5124,  5125,  5126,  5127,  5128,
    5129,  5130,  5131,  5132,  5134,  5135,  5136,  5137,  5138,  5139,
    5140,  5141,  5142,  5143,  5144,  5145,  5146,  5147,  5148,  5149,
    5150,  5151,  5152,  5153,  5154,  5155,  5156,  5160,  5161,  5166,
    5184,  5207,  5228,  5260,  5262,  5270,  5277,  5282,  5297,  5298,
    5302,  5305,  5308,  5312,  5314,  5319,  5323,  5324,  5325,  5326,
    5327,  5328,  5329,  5330,  5331,  5332,  5336,  5344,  5352,  5359,
    5373,  5374,  5378,  5382,  5386,  5390,  5394,  5398,  5405,  5409,
    5413,  5414,  5424,  5432,  5433,  5437,  5441,  5445,  5452,  5454,
    5459,  5463,  5464,  5468,  5469,  5470,  5471,  5472,  5476,  5489,
    5490,  5494,  5496,  5501,  5507,  5511,  5512,  5516,  5521,  5530,
    5531,  5535,  5546,  5550,  5551,  5556,  5566,  5569,  5571,  5575,
    5579,  5580,  5584,  5585,  5589,  5593,  5596,  5598,  5602,  5603,
    5607,  5615,  5624,  5625,  5629,  5630,  5634,  5635,  5636,  5651,
    5655,  5656,  5666,  5667,  5671,  5675,  5679,  5689,  5693,  5696,
    5698,  5702,  5703,  5706,  5708,  5712,  5717,  5718,  5722,  5723,
    5727,  5731,  5734,  5736,  5740,  5744,  5748,  5751,  5753,  5757,
    5758,  5762,  5764,  5768,  5772,  5773,  5777,  5781,  5785
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "X_BODY", "IDENT", "aTYPE",
  "ALIAS", "AGGR", "AGGR2", "RANK", "sqlINT", "OIDNUM", "HEXADECIMAL",
  "INTNUM", "APPROXNUM", "USING", "GLOBAL", "CAST", "CONVERT", "CHARACTER",
  "VARYING", "LARGE", "OBJECT", "VARCHAR", "CLOB", "sqlTEXT", "BINARY",
  "sqlBLOB", "sqlDECIMAL", "sqlFLOAT", "TINYINT", "SMALLINT", "BIGINT",
  "HUGEINT", "sqlINTEGER", "sqlDOUBLE", "sqlREAL", "PRECISION", "PARTIAL",
  "SIMPLE", "ACTION", "CASCADE", "RESTRICT", "BOOL_FALSE", "BOOL_TRUE",
  "CURRENT_DATE", "CURRENT_TIMESTAMP", "CURRENT_TIME", "LOCALTIMESTAMP",
  "LOCALTIME", "LEX_ERROR", "GEOMETRY", "GEOMETRYSUBTYPE", "GEOMETRYA",
  "USER", "CURRENT_USER", "SESSION_USER", "LOCAL", "LOCKED", "BEST",
  "EFFORT", "CURRENT_ROLE", "sqlSESSION", "sqlDELETE", "UPDATE", "SELECT",
  "INSERT", "LEFT", "RIGHT", "FULL", "OUTER", "NATURAL", "CROSS", "JOIN",
  "INNER", "COMMIT", "ROLLBACK", "SAVEPOINT", "RELEASE", "WORK", "CHAIN",
  "NO", "PRESERVE", "ROWS", "START", "TRANSACTION", "READ", "WRITE",
  "ONLY", "ISOLATION", "LEVEL", "UNCOMMITTED", "COMMITTED",
  "sqlREPEATABLE", "SERIALIZABLE", "DIAGNOSTICS", "sqlSIZE", "STORAGE",
  "ASYMMETRIC", "SYMMETRIC", "ORDER", "BY", "EXISTS", "ESCAPE", "HAVING",
  "sqlGROUP", "sqlNULL", "FROM", "FOR", "MATCH", "EXTRACT", "SEQUENCE",
  "INCREMENT", "RESTART", "MAXVALUE", "MINVALUE", "CYCLE", "NOMAXVALUE",
  "NOMINVALUE", "NOCYCLE", "NEXT", "VALUE", "CACHE", "GENERATED", "ALWAYS",
  "IDENTITY", "SERIAL", "BIGSERIAL", "AUTO_INCREMENT", "SCOLON", "AT",
  "XMLCOMMENT", "XMLCONCAT", "XMLDOCUMENT", "XMLELEMENT", "XMLATTRIBUTES",
  "XMLFOREST", "XMLPARSE", "STRIP", "WHITESPACE", "XMLPI", "XMLQUERY",
  "PASSING", "XMLTEXT", "NIL", "REF", "ABSENT", "EMPTY", "DOCUMENT",
  "ELEMENT", "CONTENT", "XMLNAMESPACES", "NAMESPACE", "XMLVALIDATE",
  "RETURNING", "LOCATION", "ID", "ACCORDING", "XMLSCHEMA", "URI", "XMLAGG",
  "FILTER", "UNIONJOIN", "CORRESPONDING", "INTERSECT", "EXCEPT", "UNION",
  "DATA", "WITH", "'('", "')'", "FILTER_FUNC", "NOT", "'='", "SOME", "OR",
  "ILIKE", "NOT_ILIKE", "LIKE", "NOT_LIKE", "sqlIN", "NOT_IN", "BETWEEN",
  "NOT_BETWEEN", "ANY", "ALL", "AND", "COMPARISON", "'+'", "'-'", "'&'",
  "'|'", "'^'", "SPLIT_PART", "POSITION", "SUBSTRING", "CONCATSTRING",
  "RIGHT_SHIFT_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT", "LEFT_SHIFT",
  "UMINUS", "'*'", "'/'", "'%'", "'~'", "GEOM_OVERLAP_OR_LEFT",
  "GEOM_OVERLAP_OR_BELOW", "GEOM_OVERLAP_OR_ABOVE", "GEOM_OVERLAP",
  "GEOM_DIST", "GEOM_ABOVE", "GEOM_BELOW", "GEOM_OVERLAP_OR_RIGHT", "TEMP",
  "TEMPORARY", "STREAM", "MERGE", "REMOTE", "REPLICA", "ASC", "DESC",
  "AUTHORIZATION", "CHECK", "CONSTRAINT", "CREATE", "TYPE", "PROCEDURE",
  "FUNCTION", "AGGREGATE", "RETURNS", "EXTERNAL", "sqlNAME", "DECLARE",
  "CALL", "LANGUAGE", "ANALYZE", "MINMAX", "SQL_EXPLAIN", "SQL_PLAN",
  "SQL_DEBUG", "SQL_TRACE", "SQL_DOT", "PREPARE", "EXECUTE", "DEFAULT",
  "DISTINCT", "DROP", "FOREIGN", "RENAME", "ENCRYPTED", "UNENCRYPTED",
  "PASSWORD", "GRANT", "REVOKE", "ROLE", "ADMIN", "INTO", "IS", "KEY",
  "ON", "OPTION", "OPTIONS", "PATH", "PRIMARY", "PRIVILEGES", "PUBLIC",
  "REFERENCES", "SCHEMA", "SET", "AUTO_COMMIT", "RETURN", "ALTER", "ADD",
  "TABLE", "COLUMN", "TO", "UNIQUE", "VALUES", "VIEW", "WHERE", "sqlDATE",
  "TIME", "TIMESTAMP", "INTERVAL", "YEAR", "MONTH", "DAY", "HOUR",
  "MINUTE", "SECOND", "ZONE", "LIMIT", "OFFSET", "SAMPLE", "CASE", "WHEN",
  "THEN", "ELSE", "NULLIF", "COALESCE", "IF", "ELSEIF", "WHILE", "DO",
  "ATOMIC", "BEGIN", "END", "COPY", "RECORDS", "DELIMITERS", "STDIN",
  "STDOUT", "FWF", "INDEX", "AS", "TRIGGER", "OF", "BEFORE", "AFTER",
  "ROW", "STATEMENT", "sqlNEW", "OLD", "EACH", "REFERENCING", "OVER",
  "PARTITION", "CURRENT", "EXCLUDE", "FOLLOWING", "PRECEDING", "OTHERS",
  "TIES", "RANGE", "UNBOUNDED", "','", "'.'", "':'", "'['", "']'", "'?'",
  "$accept", "sqlstmt", "@1", "@2", "@3", "@4", "@5", "@6", "create",
  "drop", "set", "declare", "sql", "opt_minmax", "declare_statement",
  "variable_list", "set_statement", "schema", "schema_name_clause",
  "authorization_identifier", "opt_schema_default_char_set",
  "opt_schema_element_list", "schema_element_list", "schema_element",
  "opt_grantor", "grantor", "grant", "authid_list", "opt_with_grant",
  "opt_with_admin", "opt_from_grantor", "revoke", "opt_grant_for",
  "opt_admin_for", "privileges", "global_privileges", "global_privilege",
  "object_name", "object_privileges", "operation_commalist", "operation",
  "grantee_commalist", "grantee", "alter_statement", "passwd_schema",
  "alter_table_element", "drop_table_element", "opt_column",
  "create_statement", "seq_def", "opt_seq_params", "opt_alt_seq_params",
  "opt_seq_param", "opt_alt_seq_param", "opt_seq_common_param",
  "index_def", "opt_index_type", "role_def", "opt_encrypted",
  "table_opt_storage", "table_def", "opt_temp", "opt_on_commit",
  "table_content_source", "as_subquery_clause", "with_or_without_data",
  "table_element_list", "add_table_element", "table_element",
  "serial_or_bigserial", "column_def", "opt_column_def_opt_list",
  "column_def_opt_list", "column_options", "column_option_list",
  "column_option", "default", "default_value", "column_constraint",
  "generated_column", "serial_opt_params", "table_constraint",
  "opt_constraint_name", "ref_action", "ref_on_update", "ref_on_delete",
  "opt_ref_action", "opt_match_type", "opt_match",
  "column_constraint_type", "table_constraint_type",
  "domain_constraint_type", "ident_commalist", "like_table", "view_def",
  "query_expression_def", "query_expression", "opt_with_check_option",
  "opt_column_list", "column_commalist_parens", "type_def",
  "external_function_name", "func_def", "routine_body",
  "procedure_statement_list", "trigger_procedure_statement_list",
  "procedure_statement", "trigger_procedure_statement",
  "control_statement", "call_statement", "call_procedure_statement",
  "routine_invocation", "routine_name", "argument_list",
  "return_statement", "return_value", "case_statement", "when_statement",
  "when_statements", "when_search_statement", "when_search_statements",
  "case_opt_else_statement", "if_statement", "if_opt_else",
  "while_statement", "opt_begin_label", "opt_end_label",
  "table_function_column_list", "func_data_type", "opt_paramlist",
  "paramlist", "trigger_def", "trigger_action_time", "trigger_event",
  "opt_referencing_list", "old_or_new_values_alias_list",
  "old_or_new_values_alias", "opt_as", "opt_row", "triggered_action",
  "opt_for_each", "row_or_statement", "opt_when", "triggered_statement",
  "routine_designator", "drop_statement", "opt_typelist", "typelist",
  "drop_action", "update_statement", "transaction_statement",
  "_transaction_stmt", "transaction_mode_list", "_transaction_mode_list",
  "transaction_mode", "iso_level", "opt_work", "opt_chain",
  "opt_to_savepoint", "copyfrom_stmt", "opt_fwf_widths", "fwf_widthlist",
  "opt_header_list", "header_list", "header", "opt_seps", "opt_using",
  "opt_nr", "opt_null_string", "opt_locked", "opt_best_effort",
  "opt_constraint", "string_commalist", "string_commalist_contents",
  "delete_stmt", "update_stmt", "insert_stmt", "values_or_query_spec",
  "row_commalist", "atom_commalist", "value_commalist", "null",
  "simple_atom", "insert_atom", "value", "opt_distinct",
  "assignment_commalist", "assignment", "opt_where_clause", "joined_table",
  "join_type", "outer_join_type", "join_spec", "with_query", "with_list",
  "with_list_element", "with_query_expression", "simple_select",
  "select_statement_single_row", "select_no_parens_orderby",
  "select_target_list", "target_specification", "select_no_parens",
  "set_distinct", "opt_corresponding", "selection", "table_exp",
  "opt_from_clause", "table_ref_commalist", "simple_table", "table_ref",
  "@7", "table_name", "opt_group_by_clause", "column_ref_commalist",
  "opt_having_clause", "search_condition", "and_exp",
  "opt_order_by_clause", "opt_limit", "opt_offset", "opt_sample",
  "sort_specification_list", "ordering_spec", "opt_asc_desc", "predicate",
  "pred_exp", "comparison_predicate", "between_predicate", "opt_bounds",
  "like_predicate", "like_exp", "test_for_null", "in_predicate",
  "pred_exp_list", "all_or_any_predicate", "any_all_some",
  "existence_test", "filter_arg_list", "filter_args", "filter_exp",
  "subquery", "simple_scalar_exp", "scalar_exp", "value_exp", "param",
  "window_function", "window_function_type", "window_specification",
  "window_partition_clause", "window_order_clause", "window_frame_clause",
  "window_frame_units", "window_frame_extent", "window_frame_start",
  "window_frame_preceding", "window_frame_between", "window_frame_end",
  "window_frame_following", "window_frame_exclusion", "var_ref",
  "func_ref", "qfunc", "func_ident", "datetime_funcs", "opt_brackets",
  "string_funcs", "column_exp_commalist", "column_exp", "opt_alias_name",
  "atom", "qrank", "qaggr", "qaggr2", "aggr_ref", "opt_sign", "tz",
  "time_precision", "timestamp_precision", "datetime_type",
  "non_second_datetime_field", "datetime_field", "start_field",
  "end_field", "single_datetime_field", "interval_qualifier",
  "interval_type", "user", "literal", "interval_expression", "qname",
  "column_ref", "cast_exp", "cast_value", "case_exp", "scalar_exp_list",
  "case_scalar_exp_list", "when_value", "when_value_list", "when_search",
  "when_search_list", "case_opt_else", "case_scalar_exp", "nonzero",
  "nonzerolng", "nonzerowrd", "poslng", "poswrd", "posint", "data_type",
  "subgeometry_type", "type_alias", "varchar", "clob", "blob", "column",
  "authid", "restricted_ident", "ident", "non_reserved_word",
  "name_commalist", "wrdval", "lngval", "intval", "string", "exec",
  "exec_ref", "opt_path_specification", "path_specification",
  "schema_name_list", "XML_value_expression", "XML_value_expression_list",
  "XML_primary", "XML_value_function", "XML_comment", "XML_concatenation",
  "XML_document", "XML_element",
  "opt_comma_XML_namespace_declaration_attributes_element_content",
  "XML_element_name", "XML_attributes", "XML_attribute_list",
  "XML_attribute", "opt_XML_attribute_name", "XML_attribute_value",
  "XML_attribute_name", "XML_element_content_and_option",
  "XML_element_content_list", "XML_element_content",
  "opt_XML_content_option", "XML_content_option", "XML_forest",
  "opt_XML_namespace_declaration_and_comma", "forest_element_list",
  "forest_element", "forest_element_value", "opt_forest_element_name",
  "forest_element_name", "XML_parse", "XML_whitespace_option", "XML_PI",
  "XML_PI_target", "opt_comma_string_value_expression", "XML_query",
  "XQuery_expression", "opt_XML_query_argument_list",
  "XML_query_default_passing_mechanism", "XML_query_argument_list",
  "XML_query_argument", "XML_query_context_item", "XML_query_variable",
  "opt_XML_query_returning_mechanism", "XML_query_empty_handling_option",
  "XML_text", "XML_validate", "document_or_content_or_sequence",
  "document_or_content", "opt_XML_returning_clause",
  "XML_namespace_declaration", "XML_namespace_declaration_item_list",
  "XML_namespace_declaration_item", "XML_namespace_prefix",
  "XML_namespace_URI", "XML_regular_namespace_declaration_item",
  "XML_default_namespace_declaration_item", "opt_XML_passing_mechanism",
  "XML_passing_mechanism", "opt_XML_valid_according_to_clause",
  "XML_valid_according_to_clause", "XML_valid_according_to_what",
  "XML_valid_according_to_URI", "XML_valid_target_namespace_URI",
  "XML_URI", "opt_XML_valid_schema_location",
  "XML_valid_schema_location_URI", "XML_valid_according_to_identifier",
  "registered_XML_Schema_name", "opt_XML_valid_element_clause",
  "XML_valid_element_clause", "opt_XML_valid_element_name_specification",
  "XML_valid_element_name_specification",
  "XML_valid_element_namespace_specification",
  "XML_valid_element_namespace_URI", "XML_valid_element_name",
  "XML_aggregate", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
      40,    41,   425,   426,    61,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,    43,
      45,    38,   124,    94,   441,   442,   443,   444,   445,   446,
     447,   448,   449,    42,    47,    37,   126,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,    44,    46,    58,
      91,    93,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   343,   344,   345,   344,   346,   344,   347,   344,   348,
     344,   349,   344,   350,   344,   344,   344,   344,   344,   344,
     351,   352,   353,   354,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   356,   356,   357,   357,   358,   358,
     359,   359,   359,   359,   359,   359,   359,   360,   360,   361,
     361,   361,   362,   363,   363,   364,   364,   365,   365,   366,
     366,   366,   366,   366,   367,   367,   368,   368,   369,   369,
     370,   370,   371,   371,   372,   372,   373,   373,   374,   374,
     375,   375,   376,   376,   377,   377,   378,   378,   379,   379,
     380,   380,   380,   381,   381,   381,   382,   382,   383,   383,
     383,   383,   383,   383,   384,   384,   385,   385,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   387,   387,
     387,   388,   388,   388,   388,   388,   388,   389,   389,   389,
     390,   390,   391,   391,   391,   391,   391,   391,   391,   391,
     392,   392,   392,   393,   393,   394,   394,   395,   395,   395,
     396,   396,   396,   396,   396,   397,   397,   397,   397,   397,
     397,   397,   397,   398,   399,   399,   400,   400,   401,   401,
     401,   402,   402,   403,   403,   403,   403,   403,   403,   404,
     404,   404,   404,   404,   404,   405,   405,   405,   405,   406,
     406,   407,   408,   408,   408,   409,   409,   410,   410,   411,
     411,   411,   412,   412,   413,   413,   414,   414,   415,   415,
     416,   417,   417,   418,   418,   418,   419,   420,   421,   422,
     422,   423,   423,   424,   425,   425,   426,   426,   426,   426,
     426,   427,   428,   429,   429,   429,   429,   429,   430,   430,
     430,   430,   431,   431,   432,   432,   432,   432,   432,   432,
     433,   433,   433,   434,   435,   435,   436,   437,   438,   438,
     439,   439,   440,   440,   441,   441,   442,   443,   444,   445,
     445,   445,   445,   445,   445,   445,   445,   446,   446,   446,
     447,   447,   448,   448,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   450,   450,   450,   450,
     450,   450,   450,   450,   451,   451,   451,   451,   451,   451,
     452,   453,   454,   455,   456,   456,   456,   457,   458,   458,
     458,   459,   459,   460,   461,   461,   462,   463,   463,   464,
     464,   465,   466,   466,   466,   467,   468,   468,   469,   469,
     470,   470,   471,   471,   472,   472,   472,   473,   473,   474,
     475,   475,   476,   476,   476,   476,   477,   477,   478,   478,
     479,   479,   479,   479,   480,   480,   481,   481,   482,   483,
     483,   484,   484,   485,   485,   486,   486,   487,   487,   487,
     487,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   489,   489,   489,   490,   490,   491,   491,
     491,   355,   355,   492,   492,   492,   492,   493,   494,   494,
     494,   494,   494,   494,   494,   495,   495,   496,   496,   497,
     497,   497,   497,   498,   498,   498,   498,   499,   499,   500,
     500,   500,   501,   501,   502,   502,   502,   502,   502,   503,
     503,   504,   504,   505,   505,   506,   506,   507,   507,   508,
     508,   508,   508,   509,   509,   510,   510,   510,   510,   510,
     511,   511,   512,   512,   513,   513,   514,   514,   515,   515,
     516,   516,   517,   518,   519,   519,   520,   520,   520,   520,
     521,   521,   522,   522,   523,   523,   524,   525,   526,   527,
     527,   528,   528,   528,   529,   529,   530,   530,   531,   531,
     532,   532,   532,   532,   532,   532,   532,   533,   533,   533,
     534,   534,   534,   535,   535,   355,   536,   537,   537,   538,
     539,   355,   355,   540,   541,   542,   543,   543,   544,   545,
     545,   545,   545,   545,   546,   546,   546,   547,   547,   547,
     548,   549,   550,   550,   551,   551,   552,   552,   552,   552,
     553,   553,   553,   553,   554,   553,   555,   555,   555,   555,
     556,   556,   557,   557,   558,   558,   559,   559,   560,   560,
     561,   561,   562,   562,   562,   563,   563,   563,   564,   564,
     564,   564,   565,   565,   566,   567,   567,   567,   568,   568,
     568,   568,   568,   568,   568,   568,   568,   569,   569,   570,
     570,   571,   571,   572,   572,   572,   573,   573,   573,   573,
     574,   574,   575,   575,   576,   576,   576,   576,   577,   577,
     578,   579,   579,   579,   580,   581,   581,   582,   583,   584,
     584,   584,   585,   585,   585,   585,   585,   585,   585,   585,
     585,   585,   585,   585,   585,   585,   585,   585,   585,   585,
     585,   585,   585,   585,   585,   585,   585,   585,   585,   585,
     586,   586,   587,   587,   587,   587,   587,   587,   587,   587,
     587,   587,   587,   587,   587,   587,   587,   587,   588,   589,
     590,   590,   591,   592,   592,   593,   593,   594,   594,   595,
     595,   596,   596,   597,   597,   597,   598,   599,   600,   600,
     600,   601,   602,   602,   602,   602,   602,   603,   604,   604,
     605,   605,   606,   606,   606,   606,   607,   607,   607,   607,
     607,   607,   608,   608,   609,   609,   609,   609,   609,   609,
     609,   610,   610,   611,   611,   611,   611,   612,   612,   613,
     614,   614,   615,   615,   616,   616,   617,   617,   617,   617,
     617,   617,   617,   618,   618,   618,   619,   619,   620,   620,
     621,   621,   622,   622,   622,   623,   623,   623,   623,   623,
     624,   624,   625,   626,   626,   627,   627,   628,   628,   629,
     630,   630,   630,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   632,
     633,   633,   633,   634,   634,   634,   635,   635,   636,   637,
     637,   637,   637,   638,   638,   639,   639,   640,   641,   641,
     642,   643,   643,   644,   644,   645,   646,   647,   648,   649,
     650,   651,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   653,   653,
     654,   655,   655,   656,   656,   656,   657,   657,   658,   659,
     660,   660,   660,   660,   660,   660,   661,   661,   661,   661,
     661,   661,   661,   661,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   663,   663,   664,
     665,   666,   666,   667,   667,   668,   669,   669,   670,   670,
     671,   672,   673,   674,   674,   675,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   677,   678,   679,   680,
     681,   681,   681,   681,   681,   681,   681,   681,   682,   683,
     684,   684,   685,   686,   686,   687,   688,   689,   690,   690,
     691,   692,   692,   693,   693,   693,   693,   693,   694,   695,
     695,   696,   696,   697,   698,   699,   699,   700,   701,   702,
     702,   703,   704,   705,   705,   706,   707,   708,   708,   709,
     710,   710,   711,   711,   712,   713,   714,   714,   715,   715,
     716,   717,   718,   718,   719,   719,   720,   720,   720,   721,
     722,   722,   723,   723,   724,   725,   726,   727,   727,   728,
     728,   729,   729,   730,   730,   731,   732,   732,   733,   733,
     734,   735,   736,   736,   737,   738,   739,   740,   740,   741,
     741,   742,   742,   743,   744,   744,   745,   746,   747
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     3,     0,     3,     2,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     0,     1,     2,     2,     2,     4,
       4,     4,     3,     4,     3,     4,     4,     6,     4,     1,
       2,     3,     1,     0,     4,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     0,     3,     1,     1,     6,     6,
       1,     3,     0,     3,     0,     3,     0,     2,     6,     6,
       0,     3,     0,     3,     1,     3,     1,     3,     2,     2,
       2,     1,     1,     2,     1,     1,     1,     3,     1,     1,
       2,     2,     2,     1,     1,     3,     1,     1,     6,     6,
       5,     5,     6,     6,     6,     4,     6,    10,     4,     3,
       7,     5,     4,     5,     4,     5,     5,     3,     3,     3,
       1,     0,     2,     2,     2,     1,     1,     1,     1,     1,
       4,     3,     4,     1,     2,     1,     2,     2,     3,     1,
       2,     1,     3,     3,     1,     3,     2,     1,     2,     1,
       2,     1,     1,     9,     1,     0,     3,    10,     0,     1,
       1,     0,     3,     4,     4,     4,     4,     6,     5,     1,
       1,     2,     2,     2,     2,     0,     4,     4,     3,     3,
       1,     4,     0,     3,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     0,     1,     1,     2,
       6,     1,     3,     1,     1,     1,     2,     1,     2,     5,
       1,     0,     3,     2,     0,     2,     2,     1,     1,     2,
       2,     3,     3,     0,     1,     1,     2,     2,     0,     1,
       1,     1,     0,     2,     2,     1,     1,     2,     5,     1,
       2,     3,     8,     4,     1,     3,     2,     6,     1,     3,
       1,     1,     0,     3,     0,     1,     3,     6,     3,    11,
       9,    11,    10,    11,    11,     9,     7,     1,     5,     6,
       0,     3,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     4,     1,     0,     1,     3,     2,     1,     1,
       4,     6,     5,     4,     1,     2,     4,     1,     2,     0,
       2,     7,     0,     2,     5,     8,     0,     2,     0,     1,
       2,     4,     4,     1,     1,     1,     0,     4,     2,     9,
       1,     1,     1,     1,     1,     3,     0,     2,     1,     2,
       4,     4,     4,     4,     0,     1,     0,     1,     3,     0,
       3,     1,     1,     0,     2,     1,     4,     3,     4,     3,
       3,     4,     3,     5,     6,     5,     5,     4,     4,     3,
       3,     3,     3,     0,     3,     2,     1,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     4,     3,     4,     3,     0,     1,     1,     3,     2,
       2,     3,     3,     2,     2,     2,     1,     1,     0,     2,
       3,     0,     0,     3,    14,    13,     8,     6,     6,     0,
       4,     1,     3,     0,     3,     1,     3,     1,     2,     0,
       3,     5,     7,     0,     1,     0,     2,     2,     4,     4,
       0,     3,     0,     1,     0,     2,     0,     2,     1,     3,
       1,     3,     4,     5,     4,     5,     0,     2,     2,     1,
       3,     5,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     3,     3,     3,     0,     2,
       3,     4,     4,     4,     4,     5,     5,     1,     2,     1,
       1,     1,     1,     2,     2,     1,     3,     3,     1,     6,
       1,     1,     1,     4,     6,     5,     1,     3,     1,     5,
       5,     5,     3,     1,     0,     1,     1,     0,     1,     5,
       1,     4,     0,     2,     1,     3,     1,     2,     2,     1,
       1,     2,     1,     1,     0,     5,     5,     2,     4,     1,
       0,     3,     1,     3,     0,     2,     3,     1,     3,     1,
       0,     3,     0,     2,     2,     0,     2,     2,     0,     2,
       2,     2,     1,     3,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       3,     6,     6,     0,     1,     1,     3,     3,     3,     3,
       1,     3,     4,     3,     5,     5,     7,     7,     1,     3,
       4,     1,     1,     1,     2,     1,     3,     3,     3,     3,
       4,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     2,     3,     3,     3,     3,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     1,     3,     0,     3,     0,     3,     0,     3,     1,
       1,     1,     1,     2,     1,     2,     2,     4,     2,     1,
       2,     2,     0,     3,     2,     2,     3,     2,     3,     4,
       1,     3,     1,     1,     1,     1,     6,     2,     2,     2,
       2,     2,     0,     2,     8,     8,     6,     6,     6,     3,
       8,     1,     3,     1,     3,     3,     2,     0,     2,     1,
       1,     3,     1,     3,     1,     3,     4,     6,     5,     5,
       4,     6,     1,     1,     1,     0,     3,     0,     3,     0,
       3,     0,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     1,     2,     2,     2,     2,     1,     1,     4,
       1,     3,     5,     1,     3,     5,     6,     6,     1,     6,
       4,     5,     4,     1,     3,     3,     3,     4,     1,     2,
       4,     1,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     1,     4,
       1,     1,     1,     1,     1,     1,     4,     6,     1,     4,
       6,     1,     2,     1,     1,     1,     1,     4,     1,     4,
       6,     1,     4,     1,     4,     6,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     2,     2,     3,     4,     0,     1,
       2,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     5,     5,     7,
       0,     2,     4,     6,     4,     2,     4,     2,     1,     4,
       1,     3,     2,     0,     2,     1,     1,     2,     1,     3,
       1,     0,     2,     3,     3,     3,     3,     4,     7,     0,
       2,     1,     3,     2,     1,     0,     2,     1,     6,     2,
       2,     7,     1,     0,     2,     8,     1,     0,     3,     1,
       1,     3,     1,     1,     2,     4,     0,     1,     3,     3,
       5,     6,     1,     1,     1,     1,     0,     2,     2,     4,
       1,     3,     1,     1,     1,     1,     3,     2,     2,     0,
       1,     2,     2,     0,     1,     5,     1,     1,     3,     3,
       1,     1,     0,     2,     1,     2,     1,     0,     1,     1,
       2,     0,     1,     2,     2,     2,     1,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    19,     0,     0,   491,     0,   428,   428,     0,
       0,     0,    17,     0,     0,    20,    23,     0,     0,     7,
       5,    11,    13,     9,     3,     0,    21,     0,    80,    22,
       0,   455,     0,   165,     0,     0,     0,     0,    30,    31,
      24,    25,    26,    29,    27,   138,   137,   135,   136,    33,
     139,    28,   402,   401,   407,   406,   403,   405,   404,   515,
     533,   521,   522,   570,     0,    18,     0,   886,   887,   889,
     890,   891,   892,   894,   896,   941,   899,   907,   966,   930,
     904,   943,   918,   929,   923,   902,   965,   924,   913,   914,
     915,   911,   905,   921,   944,   945,   946,   947,   948,   949,
     950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
     960,   922,   888,   962,   961,   909,   903,   895,   928,   963,
     964,   937,   916,   939,   940,   938,   935,   936,   912,   897,
     901,   927,   925,   898,   900,   917,   942,   920,   910,   931,
     932,   933,   934,   906,   908,   926,   919,     0,   800,   893,
     492,   493,     0,     0,   427,   431,   431,   409,     0,   415,
       0,   518,   264,   491,     0,   715,   713,   714,   311,     0,
     710,   712,   264,     0,     0,     0,     0,     0,     0,   972,
     971,     0,   975,   880,   881,   882,   883,   884,   885,    99,
     264,   264,    98,    94,   103,   264,     0,     0,     0,    84,
      86,     0,    95,    96,    70,   879,     0,     0,     0,     0,
       0,   415,     0,     0,     0,   970,     0,     0,     0,   258,
       0,   261,   260,     0,   829,     1,     0,     0,     0,     0,
       0,   180,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,     0,     0,     0,   132,   133,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,   780,   782,   781,
     930,   901,   917,   932,     0,     0,   962,   961,   920,    36,
      37,     0,   254,     2,     0,   534,   534,   534,   572,    15,
     498,     0,     0,   973,   886,   887,   889,   890,   891,   892,
     786,   785,   784,   787,   788,     0,     0,     0,   876,   797,
     798,   722,   722,   722,   722,   722,   664,     0,   486,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     733,     0,   931,   932,   933,   934,     0,     0,     0,     0,
     678,   677,   542,   737,   567,   598,   569,   588,   589,   590,
     591,   592,   593,   594,     0,   595,   661,   660,   596,   632,
     676,   665,     0,   667,   669,   671,   672,   540,   731,   662,
       0,     0,     0,   668,   663,   739,   792,   666,   674,   673,
       0,     0,   803,   783,   675,   986,   987,   988,   989,   990,
     991,   992,   993,   994,   995,   752,   476,     0,   408,   432,
     410,     0,     0,     0,   412,   416,   417,     0,   516,   520,
       0,     0,   265,     0,   532,     0,     0,   578,     0,     0,
      12,    14,     0,     0,     0,   100,   101,    93,   102,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   415,   414,   168,     0,     0,     0,     0,   570,   457,
       0,     0,     0,     0,   456,   184,   183,     0,   182,   181,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,   909,    53,    49,   264,   264,     0,     0,     0,   390,
     141,     0,     0,     0,     0,     0,   398,   393,   393,   393,
     389,   398,   398,   398,   391,   392,   400,   399,   382,     0,
      44,    42,     0,     0,     0,     0,   861,   856,   870,   832,
     871,   873,   874,   845,   848,   840,   841,   843,   844,   842,
     851,   853,   863,   867,   866,   762,   759,   761,     0,     0,
     854,   855,    38,   858,   833,   834,   838,     0,   535,   536,
     537,   537,   537,     0,   575,     0,   472,     0,   498,   494,
       0,   878,   801,   974,   796,   794,     0,     0,     0,     0,
     717,   719,   718,   721,   720,     0,   624,     0,     0,   707,
       0,     0,     0,     0,  1029,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   569,     0,   669,   803,
     597,     0,   657,   658,     0,     0,     0,   652,   789,     0,
     757,     0,   757,   753,   754,     0,     0,     0,   821,   823,
       0,     0,   625,     0,     0,     0,   523,   498,     0,   736,
       0,     0,     0,     0,     0,     0,     0,     0,   603,   603,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   795,   793,     0,     0,     0,     0,   479,
     476,   474,   429,     0,     0,   411,   420,   419,     0,     0,
       0,   517,     0,     0,   542,   708,   813,   487,     0,   711,
     712,     0,    34,     8,     6,    10,     4,     0,   976,     0,
     489,   484,   490,   106,    74,   104,   107,    71,    72,    87,
     960,   920,    85,    92,    91,    97,    81,    83,     0,     0,
     413,   170,   169,     0,   168,     0,     0,   115,     0,   151,
       0,     0,   161,   159,   157,   162,     0,     0,   142,   145,
     154,   131,     0,   131,   131,   259,   449,   449,     0,   264,
       0,     0,   168,     0,     0,   140,   143,   149,     0,   264,
     264,   264,   264,     0,   346,   346,   346,     0,   166,    50,
      52,     0,   978,     0,   224,   171,   190,     0,     0,   350,
     351,     0,     0,   264,   393,     0,   398,   398,   398,   388,
       0,   380,   377,   379,    48,   381,   387,    41,    45,   755,
      46,    43,    40,     0,     0,     0,   872,     0,     0,     0,
       0,   852,     0,   757,   757,   765,   766,   767,   768,   769,
     761,   759,     0,   778,   779,   255,     0,     0,     0,     0,
     571,   582,   585,   538,     0,     0,     0,   574,   573,   828,
     969,     0,   578,   499,     0,     0,   473,     0,     0,   808,
       0,     0,   877,   723,   771,   770,     0,     0,     0,   632,
     985,   983,  1066,   982,  1066,     0,     0,     0,     0,  1064,
    1065,     0,     0,  1046,  1047,   632,  1063,     0,  1062,   570,
       0,     0,     0,   631,   629,   659,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     818,   823,     0,   822,     0,     0,     0,     0,     0,   627,
       0,   554,   553,   543,   550,   544,   552,   549,   546,   800,
     542,   526,   528,   560,   738,   566,   600,   609,   610,   607,
     608,   606,     0,     0,   604,   605,     0,     0,   568,   622,
     621,   623,   599,     0,   628,   648,   633,   634,   639,   649,
     638,   729,   656,   655,   654,   653,   635,   636,   637,     0,
     650,   641,   643,   645,   640,   647,   646,   644,   642,   613,
       0,   683,   735,   732,   680,     0,     0,   912,   825,     0,
     803,     0,   890,   891,   892,   734,   804,   477,   478,   475,
     430,     0,     0,     0,   426,   421,   422,   418,   266,     0,
     709,     0,   580,   581,   579,   830,    35,    32,   977,     0,
       0,     0,    76,     0,    76,    90,    76,    76,     0,     0,
       0,     0,     0,     0,   158,   827,   156,   160,   150,   146,
       0,     0,   130,   111,     0,     0,     0,   110,     0,     0,
     224,   454,   460,     0,   460,     0,     0,   458,   459,     0,
       0,   147,   144,   346,   174,   175,     0,   176,     0,   345,
       0,   344,     0,     0,     0,     0,     0,     0,    55,   979,
      51,     0,     0,     0,   199,   195,   197,   200,   198,     0,
     201,     0,   878,     0,   173,     0,     0,   353,   354,   352,
       0,     0,   185,   378,   398,   386,   383,   385,   395,     0,
     396,    39,     0,   826,     0,   875,     0,     0,     0,   826,
     868,     0,   869,   763,   764,   776,   775,     0,     0,   826,
       0,     0,     0,     0,   586,   587,   584,     0,   531,   530,
     529,   577,   576,   525,   497,   495,   496,   802,     0,     0,
       0,   670,     0,     0,     0,     0,     0,  1008,  1000,     0,
    1034,  1021,  1031,  1035,  1030,   632,  1042,  1043,     0,  1066,
       0,  1083,  1066,   629,     0,   488,   482,   630,     0,     0,
       0,   619,     0,     0,     0,     0,   758,     0,   790,   760,
     791,   799,     0,     0,   819,     0,   824,   812,     0,     0,
     810,     0,   626,     0,   553,     0,     0,     0,   510,   511,
     512,     0,     0,     0,   507,     0,     0,   509,   908,   551,
     559,   548,   547,     0,     0,   524,     0,   564,     0,     0,
       0,     0,     0,   620,   651,   612,     0,     0,   685,     0,
     746,     0,   750,     0,     0,     0,   433,   423,   424,   425,
       0,   814,   485,     0,   105,     0,    69,     0,    68,    78,
      79,     0,     0,   116,   119,   155,   153,   152,   398,   398,
     398,   113,   114,   112,     0,   109,   108,   364,   438,     0,
     437,     0,     0,     0,   148,     0,     0,   267,   336,     0,
     348,     0,     0,    66,    67,    65,     0,   967,   981,   980,
     165,     0,    47,    56,    57,    59,    60,    63,    61,    62,
     256,   225,   189,   224,     0,     0,     0,   223,   202,   203,
     205,   206,     0,     0,   192,   262,     0,     0,     0,     0,
     178,   384,   394,     0,   862,   857,   835,   846,     0,   849,
       0,   864,     0,   761,   773,   777,   859,     0,   836,   837,
     839,   583,     0,     0,     0,     0,  1068,  1067,   996,   984,
     997,   998,     0,  1066,   943,     0,  1075,     0,  1070,     0,
    1072,  1073,     0,     0,  1066,     0,  1033,     0,     0,     0,
       0,  1066,     0,     0,  1049,  1056,  1060,     0,     0,  1084,
       0,   480,     0,     0,     0,     0,     0,     0,     0,     0,
     756,   820,     0,   811,     0,   815,   816,   500,     0,   545,
       0,     0,     0,     0,     0,     0,   508,   557,     0,   801,
     527,     0,     0,   541,   611,   615,   614,     0,     0,     0,
     679,     0,   687,   749,   748,     0,     0,   805,   519,    75,
      77,    73,     0,   118,   128,   129,   127,     0,     0,   365,
       0,   450,     0,   466,   468,   470,   443,   443,     0,     0,
     177,   491,   904,   918,     0,     0,     0,     0,     0,   280,
     292,   293,   286,   287,   288,   291,   289,   276,   277,   294,
     305,   304,   309,   308,   307,   306,     0,   290,   285,   284,
     295,     0,     0,     0,     0,    54,     0,    58,   196,   878,
       0,     0,   250,     0,   220,     0,   204,   207,   208,   213,
     214,   215,     0,     0,   172,     0,   191,     0,   257,   355,
     356,     0,     0,   397,     0,   831,     0,     0,   774,     0,
       0,   562,   803,   806,   807,   716,     0,  1020,  1005,  1007,
    1021,  1018,  1001,     0,  1078,  1077,  1069,     0,     0,     0,
       0,     0,     0,  1022,  1032,     0,  1037,  1036,  1039,  1040,
    1038,   632,     0,  1082,  1081,   632,  1048,  1050,  1052,  1053,
       0,  1057,     0,  1061,  1108,   483,     0,     0,     0,     0,
     728,     0,   726,   727,     0,   817,   809,     0,   504,     0,
     501,     0,     0,   503,   502,     0,     0,     0,   561,   565,
     602,   601,   684,     0,   689,   690,   682,     0,   747,   751,
       0,     0,   124,     0,   122,     0,     0,   461,     0,     0,
       0,   436,     0,     0,   449,   449,     0,     0,     0,     0,
     310,     0,   313,   920,   318,   317,   319,     0,   327,   329,
       0,     0,   280,   336,     0,   337,   347,     0,   336,   343,
       0,   968,     0,   251,     0,   216,   660,   209,   245,     0,
       0,     0,     0,   246,   218,   249,   224,     0,   194,     0,
       0,   369,     0,     0,     0,   188,   847,   850,   865,   860,
     539,     0,     0,     0,     0,     0,  1017,     0,   999,  1071,
    1074,  1076,     0,     0,     0,     0,  1028,  1041,     0,  1054,
    1080,     0,     0,     0,     0,     0,   481,   617,   616,     0,
       0,     0,   555,   506,   514,   513,   505,     0,   558,   686,
       0,     0,     0,   632,   702,   691,   694,   692,     0,     0,
     125,   126,   123,   121,   451,   469,   467,   471,     0,   445,
     447,   460,   460,     0,     0,     0,   275,     0,   314,     0,
       0,   280,   328,     0,     0,   324,   329,   280,   336,     0,
       0,     0,     0,   928,   270,     0,     0,     0,     0,   244,
       0,   247,   264,     0,   211,   193,   263,   366,   366,   357,
     358,     0,   349,   373,   163,   186,   187,   563,   804,  1015,
       0,  1010,  1013,  1006,  1019,  1002,  1004,  1023,     0,  1026,
    1025,  1024,  1079,  1051,     0,     0,  1045,     0,     0,     0,
    1097,  1086,  1087,   730,   724,   725,   556,     0,   695,   693,
     696,     0,   688,   117,   120,     0,   444,     0,   448,   462,
     462,     0,   272,     0,     0,   315,     0,   280,   330,     0,
       0,   325,     0,   332,     0,   281,   280,     0,     0,     0,
       0,     0,     0,   264,   221,     0,   242,   210,   224,   364,
     367,   364,   364,   364,   359,     0,     0,   336,  1009,     0,
       0,  1012,     0,  1027,  1055,  1058,  1059,  1092,  1096,  1095,
    1091,  1092,  1090,     0,     0,     0,  1085,  1098,  1099,  1101,
       0,     0,   704,     0,   705,   452,   446,   463,   464,   464,
     167,   268,   312,     0,   320,   326,     0,   322,   280,     0,
     280,     0,     0,   281,   278,   336,   342,     0,   340,   269,
     271,   273,   274,   242,     0,   219,   253,   238,   233,   212,
       0,     0,     0,     0,   371,   372,   370,   374,     0,   300,
     301,   298,   299,   375,   302,   368,   297,   296,   303,  1011,
    1016,  1014,  1003,     0,  1089,  1088,  1104,  1107,  1103,  1106,
    1105,  1100,  1102,     0,     0,   632,   697,   699,   706,   703,
       0,   466,   466,   316,   281,   323,   321,   333,     0,     0,
     279,     0,     0,   233,     0,   240,   241,   239,   243,     0,
     234,   235,   248,   363,   361,   362,   360,   282,  1094,  1093,
     700,   698,   701,   465,   435,   439,   280,   331,   338,   341,
     252,   222,     0,     0,     0,   237,     0,   236,   336,     0,
     434,   332,   335,   339,   227,   228,     0,     0,   232,   231,
     376,     0,     0,   334,   226,   229,   230,   283,     0,   441,
     440,     0,   442
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,   178,   174,   173,   177,   175,   176,    33,    34,
      35,    36,    37,  1017,  1470,   279,  1471,  1472,   482,   779,
     782,  1302,  1303,  1304,   778,  1295,  1473,   197,  1024,  1022,
    1256,  1474,   208,   209,   198,   199,   200,   722,   201,   202,
     203,   714,   715,  1475,   737,  1047,  1043,  1044,  1476,    45,
     765,   748,   766,   749,   767,    46,   247,   248,   733,  1094,
     249,   250,  1330,   785,   786,  1516,  1083,  1084,  1085,  1320,
    1086,  1506,  1507,  1087,  1773,  1508,  1509,  1655,  1510,  1511,
    1925,  1088,  1512,  2028,  1990,  1991,  1992,  1988,  1928,  1664,
    1317,  1665,   692,  1090,   251,   218,   219,  1518,   787,   422,
      47,  1746,    48,  1477,  1643,  2018,  1906,  1943,  1479,  1480,
    1481,  1630,  1631,  1834,  1482,  1635,  1483,  1755,  1756,  1638,
    1639,  1753,  1484,  1912,  1485,  1486,  2022,  1847,  1648,  1070,
    1071,    50,   791,  1100,  1671,  1779,  1780,  1450,  1861,  1782,
    1783,  1936,  1867,  1945,   266,  1487,   801,  1109,   508,  1488,
    1489,    54,   414,   415,   416,  1005,   155,   408,   685,    55,
    2020,  2038,  1624,  1738,  1739,  1052,  1053,   220,  1278,  1898,
    1971,  1621,  1453,  1454,    56,    57,    58,   681,   892,  1174,
     709,   351,   710,  1176,   711,   152,   558,   559,   556,   922,
    1216,  1217,  1593,   221,   160,   161,   418,    60,  1490,   222,
     930,   931,    63,   550,   844,   352,   626,   627,   923,   924,
    1205,  1206,  1219,  1227,  1530,  1423,   353,   354,   288,   554,
     852,   702,   840,   841,  1136,   355,   356,   357,   358,   946,
     359,   937,   360,   361,   597,   362,   953,   363,   623,   364,
     365,   366,   367,   368,   369,   370,   371,   372,  1237,  1238,
    1432,  1606,  1607,  1724,  1725,  1726,  1727,  1966,  1967,  1822,
     373,   598,   169,   170,   375,   570,   376,   377,   378,   629,
     379,   380,   381,   382,   383,   615,   904,   610,   612,   540,
     831,   866,   832,  1345,   833,   834,   541,   384,   385,   386,
     928,   387,   388,   860,   389,   698,   917,   910,   911,   618,
     619,   914,   989,  1112,  1034,   848,   223,  1014,  1524,  1110,
    1121,   390,   544,   545,   391,  1091,   716,   205,   599,   149,
    1298,  1015,   224,  1113,   393,    64,   182,  1078,  1079,  1299,
     871,   872,   873,   394,   395,   396,   397,   398,  1363,  1158,
    1538,  1790,  1791,  1871,  1792,  1951,  1539,  1540,  1541,  1374,
    1553,   399,   877,  1161,  1162,  1163,  1376,  1557,   400,  1379,
     401,  1167,  1381,   402,   884,  1169,  1383,  1566,  1567,  1568,
    1569,  1570,  1704,   403,   404,   887,   881,  1153,   878,  1367,
    1368,  1691,  1369,  1370,  1371,  1699,  1700,  1388,  1389,  1810,
    1811,  1881,  1882,  1954,  1999,  1812,  1879,  1886,  1887,  1961,
    1888,  1889,  1960,  1958,   405
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1740
static const yytype_int16 yypact[] =
{
    1400,    19, -1740,    44, 15503,   538,   -97,   340,   340, 15503,
     362,   367, -1740, 15503,    89, -1740, -1740, 12623, 15503, -1740,
   -1740, -1740, -1740, -1740, -1740,   482, -1740,   525,   132,    67,
     173,   339,   490,  1154,   392, 12911, 11759,   352, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740,   784,   390, -1740, 15503, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740,   305,   257, -1740,
   -1740, -1740,  4141, 15503, -1740,   422,   422, -1740, 15503,   807,
      82, -1740,   442,   538,   687, -1740, -1740, -1740, -1740,   472,
   -1740,   287,   442,  2662,  2662,  1400,  1400,  2662,  2662, -1740,
   -1740,   507, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
     442,   442, -1740,   452, -1740,   442,   410,   248,   458, -1740,
     406,   485,   430, -1740, -1740, -1740,   511,   514,   394,  1281,
     695,   807, 14351, 15503, 15503, -1740,   599,   775,   531, -1740,
      66, -1740, -1740,  -160, -1740, -1740,   737, 15503,   811, 15503,
     586, -1740, -1740,   561,   601,   607,   623, 15503, 15503, 15503,
   15503, 15503, 15791, 15503, -1740, 15503, 15503,   657, -1740, -1740,
     626, -1740, 15503, 15503,   610,   501, 15503, 15503, 15503, 15503,
   15503, 15503, 15503, 15503, 15503, 15503,   923, -1740, -1740, -1740,
     589, 15503, 15503,   528,   772,   813,   702,   734, 15503,   684,
   -1740,  1083, -1740, -1740,   922,   548,   548,   548,   740, -1740,
     749, 14639, 15503,  1035,  1035,  1035,  1038,   873,   876,   879,
   -1740, -1740, -1740, -1740, -1740,   886,   898,  1049, -1740, -1740,
   -1740,   907,   907,   907,   907,   907, -1740,   909, -1740,   924,
     974, 15503,   955,   960,   964,   968,   973,   978,   989,  1014,
    1022,  1028,  1030,  3127,  4479,  8720,  8720,  1036,  1040,  1048,
   -1740,  8720,  1035,   387,   434,   114,  6473,  1056,  1061,  4479,
   -1740, -1740,   418,   857,  1032, -1740,  1377, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, 15503, -1740, -1740, -1740, 10513, -1740,
   -1740, -1740,   896, -1740,   895, -1740, -1740,   900, -1740, -1740,
    1078,  1080,  1090,   948, -1740, -1740, -1740, -1740, -1740, -1740,
    1035,  1035,   108, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740,   444,   916, -1740,  1004,
   -1740,   976,  1179,  1197, -1740,   962, -1740, 15503, -1740, -1740,
   15503,   985, -1740,  4141, -1740,  6794, 12623,  1007,  1174,  1176,
   -1740, -1740,  1177,  1178,  2050, -1740, -1740, -1740, -1740, -1740,
   -1740,   103,  1281,   103,  1001, 13199,   378,  1202,  1203,  1205,
     -11,   807, -1740,   831,   605,   750,   825,  1143,   809, -1740,
      53,  1060, 15503,   775,  1025, -1740, -1740,  1151, -1740, -1740,
     844, 15503, 15503, 15503, 15503, 15503,  1092,  1152,  1156,  1158,
    1160, 15503,  1087,  1111,  1165,   442,   821, 15503, 15503, -1740,
   -1740, 15503,  1107, 15503, 15503, 15503,   923,  1167,  1167,  1167,
   -1740,   923,   923,   923, -1740, -1740, -1740, -1740, -1740, 15503,
   -1740, -1740,    33, 15503,  8720, 15503,  1180,  1181, -1740,   680,
   -1740, -1740, -1740,  1184,  1185, -1740, -1740, -1740, -1740, -1740,
    1309, -1740,  1193, -1740, -1740, -1740,  1206,  1207,  1055, 15503,
   -1740, -1740, -1740,  1208,  1210,  1216,  1217,  8720, -1740, -1740,
    1211,  1211,  1211,    39,  1054,  4479, -1740,  1214,  -165, -1740,
    1218, -1740,  1052, -1740, -1740, -1740,  4479,  4479,  1368,  1222,
   -1740, -1740, -1740, -1740, -1740,   359, -1740,  1071,  1286, -1740,
    8720,  8720,  8720,  1164,  1251,   756,  1171,  1402,  8720,   660,
    8720,  3127,  1237,  1238,   935,  1240,   812,   190, -1740,   203,
    1315,  3127,  1307,  1307,  8720,  8720,  8720,   943, -1740,   482,
    1239,   482,  1239, -1740, -1740,  1035,  4479,  9905, -1740,   497,
    8720,  8720,  1315,   486,  9017, 15503, -1740,   749, 15503, -1740,
    4479,  4479,  8720,  8720,  8720,  8720,  1242,  1243,  1046,  1046,
    4479,  3465,  1075,  8720,  8720,  8720,  8720,  8720,  8720,  8720,
    8720,  8720,  8720,  8720,  8720,  8720,  8720,  7115,  8720,  8720,
    8720,  8720,  8720,  8720,  8720,  8720,   296,  1247,  1215,  4141,
    1250,  5155,  8720, -1740, -1740, 12047, 13775,  1145,  1237, -1740,
     487, -1740, -1740,  1345,  1350, -1740, -1740, -1740,   696,   482,
     807, -1740,   200,  1261,  1328, -1740, -1740, 13762,   279, -1740,
   -1740,    54,  1201, -1740, -1740, -1740, -1740,  3127, -1740,   280,
   -1740, -1740,   926, -1740,   208, -1740, -1740, -1740,   222, -1740,
     610, 15503, -1740, -1740, -1740, -1740, -1740, -1740,   103,   103,
   -1740, -1740, -1740,  1182,   831,  1163,  1172, -1740,  1346,  1283,
     775,   775, -1740, -1740, -1740, -1740,   775,  2434,   750, -1740,
   -1740,   658,    64,  1183,   890, -1740,    63,    63, 15503,   442,
    1140,   775,   831,  1284,  2434,   844, -1740, -1740,  1290,  1165,
    1165,  1165,  1165,  1228, 14927, 14927, 14927,  1213, -1740, -1740,
   -1740,  1448,  1220, 15503, 14063,  1374, -1740,  1159,  1166, -1740,
   -1740,   972,  1219,  1165,  1167, 15503,   923,   923,   923, -1740,
    2383, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,  1024,
   -1740, -1740, -1740,  1083,   482,   482, -1740,  1451,   482,   482,
     482, -1740,   111,  1239,  1239, -1740, -1740, -1740, -1740, -1740,
    1207,  1206,  1204, -1740, -1740, -1740,   482,   482,   482,   482,
    1149, -1740, 11428,  1385,    89,    89,    89, -1740, -1740, -1740,
   -1740,    39,  1007, -1740,   909, 14639, -1740,  4479, 15503, -1740,
    1175,  1169, -1740, -1740, -1740, -1740,  1380, 15503, 13762,    -8,
   13762, -1740,   -48, -1740,  1349, 15503,  1331,  8720,  1186, -1740,
   -1740,  8720, 15503, -1740,  1366,    -8, -1740,  8720, -1740,  1421,
     996,  8720,   293, -1740, -1740, -1740,  1039,  4479, 13487,  2860,
   11747,  2775,  1353,  1244,  1035,  1355,  1035,  1055,  1230,  8720,
   -1740,   659,  8720, -1740,  1221,  2910,  1194,   300,  4479, -1740,
    2541, -1740, -1740,  1225, -1740,   868, 16079, 16079, 16079,   228,
      25, -1740, -1740,  1437, -1740, -1740,  1440, -1740, 10819, -1740,
   -1740, -1740,  7436,  7436, -1740, -1740,  4479,  4479, -1740, -1740,
   -1740, -1740, -1740,   909, -1740, 13762,  1307,  1307,  1307,  1307,
    1307,  1307,  1307,  1307,  1307,  1307,  1327,  1327,   709,  8720,
     943,   757,   757,   757,   757,  1422,  1422,  1422,  1422, -1740,
    1459,  1254, -1740, -1740, -1740,  8720,  1396,  8720, 13762,  1401,
     236,  1231,  1413,  1416,  1417, -1740,   243, -1740,  1252, -1740,
   -1740, 15503,  1150,  1501, -1740, -1740, -1740, -1740, -1740,    89,
   -1740,  8720, -1740, -1740, -1740, -1740, -1740, -1740, -1740,  7436,
    1335,   103,  1486,  1343,  1486, -1740,    51,    51,  1035,  1348,
   15503, 15503,   775,   104, -1740, -1740, -1740, -1740, -1740, -1740,
   15503, 15503, -1740, -1740, 15503,  1507,  1157, -1740, 15503, 15503,
   15215, -1740,  1491,  1288,  1491,  1494,  1495, -1740, -1740,  1351,
     775, -1740, -1740, 14927, -1740, -1740,  1352, -1740, 15503, -1740,
    1435,  1270,  2434,  1438,  1439,   665,  1341, 15503,   803, -1740,
   -1740, 15503, 15503,   317, -1740, -1740, -1740, -1740, -1740,  -120,
   -1740,  1767,   136, 15503, -1740,   599,   599, -1740,  1297, -1740,
    1364, 15503,  1369, -1740,   923, -1740, -1740, -1740, -1740,  1445,
    1294, -1740,  1465, -1740,  1467, -1740,  1475,   334,  1478,  1313,
   -1740,   345, -1740, -1740, -1740, -1740,  1376,  1259,  1480,  1319,
    1487,  1489,  1490,  8720, -1740, -1740, -1740,  1492, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,  2434,  2434,
    8720, -1740,    15,  1493,  8720,  1496,  1497, -1740,  1320,  7757,
   13762,   146, -1740,  1347, -1740,   461, -1740,  1332,  1563,  1349,
    1500,  1514,  1349,  1003,   369, -1740, -1740, -1740,  1504,  1505,
    1506,  1315,  8720,  8720,  8720,  8720, -1740,  1387, -1740, -1740,
   -1740, -1740,  8720,  9294, -1740,  1372, 13762, -1740,  8720,  8720,
   -1740,  8720,  1315,  2541,  1510,   868,    89,  9017, -1740, -1740,
   -1740,  1053,  1608,  9017, -1740,  9017,  1610,  1616, 15503, -1740,
    1519, -1740, -1740, 12623, 15503, -1740,  1588,  1586,  1035,   391,
     417,  1397,  1533, -1740, 13762, -1740,  1590,  1522,  1593,  1525,
   -1740,  1526, -1740, 12335,  8720, 15503, -1740, -1740, -1740, -1740,
    1527, -1740, -1740,  1441, -1740,   665, -1740,  1443, -1740, -1740,
   -1740,  1683,  1035, -1740, -1740, -1740, -1740, -1740,   923,   923,
     923, -1740, -1740, -1740,   396, -1740, -1740,  1384, -1740,  1035,
   -1740,   252,    45,  1035, -1740,  1530,  1703, -1740,  9611, 15503,
   -1740,  1477,  1488, -1740, -1740, -1740, 15503, -1740,  1381, -1740,
    1227,   698, -1740,   803, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, 14063,  1462,  1463,   442, -1740, -1740, -1740,
   -1740,   782,  1464,  1722,  1557,  1559, 15503, 15503,  1560,  1655,
   -1740, -1740, -1740,  2434, -1740, -1740, -1740, -1740,   482, -1740,
     482, -1740,   482,  1207, -1740, -1740, -1740,   482, -1740, -1740,
   -1740, -1740, 15503,  1561,  1564, 12035, -1740, -1740, -1740, -1740,
   -1740, -1740,  5476,  1349,  1498,  8720, 13762,   426, -1740,  1418,
   -1740, -1740,   872,  8720,  1349, 15503, -1740,  1596,  1597,  1567,
    8720,  1349,   306,  8720, -1740,  1563, -1740,  1466,  1569, -1740,
    1570, -1740,  8720,  8720,  7436,  7436,  9004, 12323, 11126,  2806,
   -1740, -1740,  8720, -1740, 12611, -1740, -1740, -1740,   -47,   868,
    9017,  1671,  9017,   619,   619,  9017, -1740,  1576, 15503,   246,
   -1740, 15503,  4479, -1740, -1740, -1740, -1740,  4479,  4479, 15503,
   -1740,  1645,    16, -1740, -1740,  1578,  1579, -1740, -1740, -1740,
   -1740, -1740,  1427,  1482, -1740, -1740, -1740,  1508,   598, -1740,
    1035,  1419,  1035,  1673,  1420, -1740,  1583,  1583,  1528,  1531,
   -1740,   538,   362,   367,  1535, 12623,  3803,  8078,  4479,  1452,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740,  1455, -1740, -1740, -1740,
   -1740,  1425,  2434,  2478,  2478, -1740, 15503, -1740, -1740,  1591,
     442,   442, -1740,  1641, -1740,  8720, -1740,   782, -1740, -1740,
   -1740, -1740,   454,  1599, -1740,   318, -1740,  1546, -1740,  1442,
    1449, 15503,   209, -1740,  1606, -1740,  1607,  1609, -1740,  1611,
     427, -1740,  1446, -1740, -1740, -1740,  1613, 13762,  1444, -1740,
     164, -1740,  1453,  1614, -1740, -1740, -1740,  7757, 15503,  1544,
    1545,  1547,  1548, -1740, -1740,  1615, -1740, -1740, -1740, -1740,
   -1740,   545,  1617, -1740, -1740,   308,  1470, -1740, -1740, -1740,
     307, -1740,  1630, -1740, -1740, -1740,   440,   447,   455,  8720,
   -1740,  8720, -1740, -1740,  8720, -1740, -1740, 16079, -1740,  9017,
   -1740,   442,  4479, -1740, -1740,   619, 15503,   460,  1473, -1740,
    1623,  1623,  1473,  8720, -1740, -1740, -1740,  4817, -1740, -1740,
    1562,  1549, -1740,   389, -1740,  1706,  8720, -1740,  1035,   469,
    1589, -1740,  1035, 15503,    63,    63,  1035,  1592,  4141, 15503,
   -1740,  1646, -1740,  1652, -1740, -1740, -1740,  4479, -1740,   715,
   10210,  1529, -1740, 10831,  4479, -1740, -1740,  1653,  9916, -1740,
     645, -1740,  1556, -1740,  1512, -1740,  2625, -1740, -1740,  1723,
    1659,  1572, 15503, -1740, -1740, -1740,   591,  1665, -1740,  1574,
     932,  1725,   476,  1754,  1755, -1740, -1740, -1740, -1740, -1740,
   -1740, 15503, 15503,  8720,  8720,  8720, -1740,  8399, -1740, -1740,
   -1740, -1740,  1733,   322,  1734,  1736, -1740, -1740, 15503, -1740,
   -1740,  8720,  1584,  1585,  1677,     8, -1740, -1740, -1740, 12899,
   13187, 13475, -1740, -1740, -1740, -1740, -1740,   480, -1740,  1149,
    5797,  1536,  1517,  1518,  1521, -1740, -1740, -1740,  1035, 15503,
   -1740, -1740, -1740, -1740,  1515, -1740, -1740, -1740,   493, -1740,
    1851,  1491,  1491,  1594, 15503,  1600, -1740,  1523,  8720,   631,
    1566, -1740, -1740,  1551,  8720, -1740,   719, -1740, 10831,  1730,
    1565, 15503,  1629,  1860, -1740,  1633,  1863, 15503,  1743, -1740,
    4479, -1740,   442,   510, -1740, -1740, -1740,  -154,  -152,   932,
   -1740,  1550, -1740,  1575, -1740, -1740, -1740, -1740,  1538, 13762,
     512, -1740,  1568, -1740, -1740,  1540, -1740, -1740,  1727, -1740,
   -1740, -1740,  1563, -1740,  1732,  1735, -1740,  1728, 15503,  1879,
     505, -1740, -1740, -1740, -1740, -1740, -1740,  1699, -1740, -1740,
   -1740,   281, -1740, -1740, -1740,  1035, -1740, 15503, -1740,  1828,
    1828, 15503, -1740, 15503,   524, 13762,  1719, -1740, 10221,  1602,
    9599, -1740,  1598,  9306,  1762,  1603, -1740,   537,  2434, 15503,
    1889, 15503,  1892,   442,  1729,  1731,  1790, -1740,   591,  1384,
   -1740,  1384,  1384,  1384, -1740,   941,  4479, 11136, -1740,  8720,
   15503, -1740,  8720, -1740, -1740, -1740, -1740,  1745, -1740, -1740,
   -1740,  1745, -1740,  1751, 15503,  1879, -1740, -1740, -1740,  1757,
    6135,  1577, -1740,  1587, -1740, -1740, -1740, -1740,  1845,  1845,
   -1740, -1740, -1740,  8720, -1740, 10221,  1782, -1740, -1740,  1618,
   -1740,  4479,  1605,  1612, -1740, 10526, -1740, 15503, -1740, -1740,
   -1740, -1740, -1740,  1790,   844, -1740, -1740,   817,  1654, -1740,
   15503, 15503, 15503, 15503, -1740, -1740, -1740, -1740,  1619, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740,  1879, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740,  1595,  1620,  1601, -1740, -1740, -1740, -1740,
    1856,  1673,  1673, 13762, -1740, 10221, -1740, 10221,  1628,  1625,
   -1740,  1624,  2434,  1654,   632, -1740, -1740, -1740, -1740,  1200,
    1657,  1668, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740,  1626, -1740, -1740, 15503, -1740,
   -1740, -1740,   211,   211,  1867, -1740,  1873, -1740, 11441,  1769,
   -1740,  9306, -1740, -1740, -1740, -1740,  1900,   347, -1740, -1740,
   -1740,  1812,   775, -1740, -1740, -1740, -1740, -1740,   541, -1740,
   -1740,   775, -1740
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1740,  1093, -1740, -1740, -1740, -1740, -1740, -1740,  -982,  -974,
   -1740, -1740,  1008, -1740,    12, -1740,    18,   564, -1740,  1161,
   -1740, -1740, -1740,   640, -1740,   690,     0,  1740, -1740, -1740,
     105,     6, -1740, -1740,  1742, -1740,  1509, -1740, -1740, -1740,
    1511,  -383,   931,    46, -1740, -1740, -1740,   519,    61, -1740,
      31, -1740,  -746,  1212,  -417, -1740, -1740, -1740,  -602, -1740,
    1918, -1740, -1740,   232, -1740, -1740, -1740,   906,   646, -1740,
   -1740, -1740, -1740, -1740, -1740, -1441, -1740,   342, -1740, -1740,
   -1740, -1740,  -731,   -52,   -27,   -25,   -17, -1740,    47, -1740,
   -1740, -1740,   -31, -1740, -1740,  -196,  -397, -1740,  -158,  -276,
   -1740, -1379, -1740,   319, -1372, -1740, -1246,   -50, -1739, -1740,
     583, -1740, -1740, -1740, -1740, -1740, -1740,   213, -1740,   332,
   -1740,   216, -1740,   -43, -1740, -1740, -1740, -1740,   479,  -688,
   -1740, -1740, -1740, -1740, -1740, -1740,   201,  -658,   204, -1740,
   -1740, -1740, -1740, -1740,  1539,   124,  -422,   650,  -444,    24,
      30, -1740,  -119, -1740,  1318, -1740,  2001,  1854, -1740, -1740,
   -1740, -1740,   554, -1740,   188,  -732, -1740, -1740, -1028,   186,
     118,  -694,   738,   567, -1740, -1740, -1740,  1354,  1357,   628,
    -880, -1740,  -370,   634,  1009,  -156, -1740,  1168,  -147,  -866,
     816, -1740, -1309,   135, -1740,  1621,  1020, -1740,    36,   258,
   -1740,   808,    68,   993,   732,  -412,  1101, -1740, -1740, -1740,
    -608, -1740,  -883, -1740, -1275, -1740,  -207,  1393,  1148, -1740,
   -1740,  1187,   437,   908, -1740, -1740,  -248, -1740, -1740,  1404,
   -1740,   555, -1740, -1740, -1740, -1740, -1740, -1740, -1740,  1403,
   -1740,  -268, -1093,  1342,  -537,  -475, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740,   324, -1740, -1740, -1740, -1740, -1740,
   -1740,   -16, -1740,  -395, -1740,   670, -1740, -1740,  1378, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740,  -385,  -453,  -502, -1740,
    -550, -1740, -1740, -1740, -1740,  1139, -1740,  2031, -1740,  1555,
      77, -1323, -1740,  1503, -1740, -1740, -1740,  1170, -1740,  1456,
   -1740,  1173,  -638,   357,  -652, -1740,  -215,  1223, -1740,  -240,
   -1740,  -258, -1740, -1740,  -253,  -288,    20, -1740,     4, -1740,
   -1315,  1532,  -469,   -15,  -220, -1740, -1740, -1740, -1740, -1740,
    -518, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,
     384, -1740,   210, -1740, -1740, -1740, -1585, -1740,   395,   542,
   -1740, -1740, -1740, -1740,   710, -1740, -1740, -1740, -1740, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740, -1740, -1740,   385, -1740,
   -1740, -1740, -1740, -1740, -1740, -1740,  1520,  -805,   725, -1740,
     543, -1740,   724, -1740, -1740,   290, -1097, -1740, -1740, -1740,
   -1740, -1740, -1486,   212, -1740, -1740, -1740, -1740, -1740, -1740,
     214, -1740, -1740, -1740, -1740
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1080
static const yytype_int16 yytable[] =
{
      41,   168,   459,   560,   421,   281,    42,   423,   148,   679,
     181,   694,    38,   157,   427,   557,   925,   162,    39,  1062,
     457,   171,   148,   543,    52,  1054,  1280,   865,   546,  1531,
      53,   699,   435,   436,   991,   824,    61,   438,   750,   275,
     282,   542,  1478,   869,  1221,  1222,    43,   204,   293,   576,
     215,   885,   799,  1089,  1204,   696,   293,   804,   805,   806,
     718,    44,  1229,  1230,   874,   215,  1657,  1155,  1012,  1156,
     148,  1384,   889,   563,   564,   565,   802,   803,   847,  1051,
    1170,   147,   164,   823,   850,   596,   600,  1073,  1074,  1036,
    1807,   808,   452,   461,  1037,   172,  1300,   729,  1531,  1793,
    1604,   622,  1796,  1597,  1301,  1594,  1531,  1152,   183,   184,
     185,   186,   187,   188,   293,   215,   555,  -755,   285,   286,
     287,  1859,   608,  1862,    51,   210,   595,  1356,  1944,  1314,
     680,  1045,  1029,   624,   463,    59,   374,   -82,   -82,   -82,
     -82,   -82,   -82,   290,   812,  1315,  1598,  1152,   163,    65,
     464,  1046,    66,   211,  1602,   163,   392,   148,  1316,  1255,
    1059,   153,   410, -1066,  1120,  1808,  1357,  1860,  1809,  1860,
     673,   674,   855,    41,    41,    41,    41,    41,    41,    42,
      42,    42,    42,    42,    42,    38,    38,    38,    38,    38,
      38,    39,    39,    39,    39,    39,    39,    52,    52,    52,
      52,    52,    52,    53,    53,    53,    53,    53,    53,    61,
      61,    61,    61,    61,    61,  1452,   454,   148,   148,    43,
      43,    43,    43,    43,    43,  1774,  1013,   906,   212,   204,
     406,   467,   850,   148,    44,    44,    44,    44,    44,    44,
     757,   148,   148,   148,   148,   480,   483,   148,   760,   148,
     148,   916,    14,  2024,  2025,   293,   489,   148,    62,    14,
     148,   148,   148,   148,   500,   148,   148,   148,   148,   148,
    1758,  1035,  1035,  1673,   575,   510,   511,  1035,  -712,  1944,
     699,  1717,   148,   679,   458,   213,  1716,  1952,  1571,  1154,
     455,   456,  1674,  2026,  1587,   561,   562,    51,    51,    51,
      51,    51,    51,   613,   614,  1322,   470,  -254,    59,    59,
      59,    59,    59,    59,   476,   477,   478,   479,   809,  1089,
     484,  1300,   485,   486,   462,   579,   442,   788,  1125,  1301,
     490,   750,   730,   496,   497,   498,   499,  1204,   501,   502,
     503,   504,   505,   596,  1165,  1026,  1027,  1239,   853,  1241,
     215,  1605,  1105,  1106,  1107,   484,   926,  1456,  1787,   859,
     859,   896,  1224,  1891,  1385,  1832,   756,  1390,   148,  1171,
     713,  1008,  1103,  -712,  -453,  1285,  1141,  1020,  1126,  1838,
    1265,   350,   850,   936,   595,  1843,   206,  1892,  1021,   207,
    -759,  1023,  1730,   952,   595,   907,   350,  1759,  -712,  1959,
    1667,   594,  1478,   979,  1798,   163,  -712,   374,  1372,   908,
    1382,   856,  1656,  -712,  1702, -1079,  -712,  1929,   419,   417,
     154,   162,  1452,   935,   282,   163,  1372,   392,  1563,  1799,
     700,    62,    62,    62,    62,    62,    62,  -761,  1123,  1124,
     158,   642,   189,   190,   191,   192,   675,   252,   214,   148,
    1010,  1018,  1564,   159,  2035,  1703, -1079,  1675,   189,   190,
     191,   192,   717, -1079,  1177,  1905,   148,  1998,   593,   980,
    1919,  1200,  1921,  -254,  1915,   148,   148,   148,   148,   148,
     933,  2027,   283,  1373,   813,   780,  1668,   179,  1312,   543,
     225,   792,   148,   180,   546,   148,  1731,   148,   148,   148,
     595,  1685,   712,   699,   253,  1337,   543,  1038,    13,   216,
     163,   546,  1844,   807,  1577,  1578,  1341,   811,   439,   282,
     289,  1175,   724,  1656,  1061,   441,   624,   897,    13,    14,
     183,   184,   185,   186,   187,   188,  1975,   539,  1977,   759,
    1391,   898,   543,   835,  1377,  1021,  1058,   546,   768,   769,
     770,   771,   772,   163,   254,   543,  -759,   609,  1543,  1021,
     546,  1658,  1425,  1035,    40,   793,  1223,   560,   794,  1555,
     796,   797,   798,  1111,  1243,   291,  1562,  1344,   255,   557,
     193,  1245,  1089,    49,   858,   442,  1144,  1883,  1426,   189,
     190,   191,   192,  2036,   902,   292,   905,  1546,  1680,  1409,
    1378,  1056,  1122,  -761,   611,  1413,  1436,  1414,   927,   407,
    1893,  1706,   420,    13,   676,  1894,  1011,  1019,  1707,   256,
     257,   258,   259,   194,  1698,   426,  1708,  1659,   929,   932,
    1178,  1718,   934,   217,  2021,  1591,  1359,  1201,   592,   194,
    1735,  1251,   425,   594,  1447, -1079,   195,  1784,   260,  1181,
    1146,  1816,   926,   374,  1313,  1884,    13,    14,  1885,   890,
    1331,   261,   195,   492,  1826,   163,  1448,   262,   440,   594,
    1202,  1338,   263,   392,  1006,   990,   625,   434,  1660,   996,
     282,  1857,  1342,  1868,  1188,  1233,  1190,  1208,  1209,  1210,
     677,  1211,  1212,  1213,  1214,  1902,  1613,   163,  1231,  1232,
   -1044,   816,   817,   196,  1712,  1614,  1392,   264,  1916,   265,
     593,   193,  2040,  1829,  1830,  1503, -1044,   763,   437,  1661,
    1504,  1293,  1662,   678,   150,   148,   593,  1294,  1019,   493,
     494,   495,  1663,   677,   548,   443,   593,    40,    40,    40,
      40,    40,    40,   444,   164,   738,   445,   740,   741,   742,
     743,   744,   745,   252,  1019,   746,    49,    49,    49,    49,
      49,    49,   148,  1547,  1681,  1266,   678,   446,    13,   216,
     194,  1615,   886,   447,   734,   890,   448,  1392,  1072,  1072,
    1072,   451,  1215,  1002,  1019,   151,   215,   780,  1092,   460,
    1003,  1004,  1019,   195,   616,   549,   912,  1496,  1025,   148,
      13,    14,  1588,  2011,  1590,  1119,  1622,  1595,  1261,   879,
     253,   880,   509,   539,   543,   471,  1082,  1496,  1267,   546,
     512,  1129,  1401,   918,  1444,  1445,  1446,   919,   699,  1405,
    1827,  1406,  1290,   543,   196,  1055,   472,  1505,   546,   491,
     643,  1528,   593,  1561,  1616,  1284,  1565,  1858,   699,  1869,
     818,  1321,   285,   286,   287,   735,  1985,  1986,   424,   561,
     254,  1903,  1147,   738,   739,   740,   741,   742,   743,   744,
     745,   148,  1104,   746,  1917,   736,   473,  1765,  2041,  1157,
    1592,  1766,   474,  1040,   255,   284,  1166,  1987,   643,  -224,
     543,   543,  1741,  1742,   411,   546,   546,   412,   475,  1324,
    1325,   488,   996,   413,   927,   879,  1503,   880,  1353,  1354,
     284,  1504,  1138,  1139,  1140,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   929,   256,   257,   258,   259,   763,
    1220,  1220,  1220,  1041,  1042,   926,  1208,  1209,  1210,   926,
    1211,  1212,  1213,  1214,  1151,   926,   513,   926,   764,   285,
     286,   287,   465,   466,   260,  -224,   909,   738,   912,   740,
     741,   742,   743,   744,   745,   506,   507,   746,   662,   663,
     664,   665,   487,   262,   285,   286,   287,  -180,   263,  1549,
     424,  1713,   571,   572,   573,   574,   631,   514,   594,   632,
     633,   634,   635,   636,   637,   638,   639,   682,   683,   640,
     641,  1064,  1065,  1066,  1067,  1246,  -224,  1082,  1424,  -179,
     712,   712,  1637,   264,  1751,   265,  1754,  1550,  1751,  1551,
    1552,   515,  1175,  1175,   547,  1102,   468,   469,  1505,    15,
     555,  1215,  1585,   553,  1263,  1264,  1097,  1098,   293,  1099,
    1502,  -870,  1443,  -742,  1268,  1269,  -744,  -224,  1270,  -740,
    -224,    26,  1274,   148,   561,   593,   566,    27,    28,  1451,
    -224,  1455,  1455,  1458,   686,   687,   747,  1072,   567,  1634,
    1723,   568,  1287,   751,   643,   543,    30,   569,  1305,   575,
     546,  1297,   731,   732,  1306,   148,  1311,   712,   516,   517,
     518,   285,   286,   287,   577,   752,   578,  1323,   753,   754,
     285,   286,   287,   519,  -532,   148,   894,   520,   521,   522,
     307,   308,   523,   524,   525,   526,   527,   528,   529,   530,
     531,  1208,  1209,  1210,  1307,   580,  1275,  1410,  1214,  1258,
     581,  1259,  1260,  -532,   582,   532,   533,   534,   583,  1308,
     789,   790,   926,   584,   926,   944,   945,   926,   585,  -618,
     658,   659,   660,   661,   662,   663,   664,   665,  1310,   586,
     764,   285,   286,   287,  1565,  1049,  1042,  1173,  -532,  -532,
    -532,   226,  1114,   628,  -532,  1116,  1117,  1118,  1328,  1600,
    1601,   428,   429,  1723,   587,   432,   433,   927,   939,   940,
     941,   927,   588,  1128,  1130,  1131,  1132,   927,   589,   927,
     590,  1930,  1309,  1931,  1932,  1933,   604,   929,   630,   227,
     605,   929,   228,   613,   614,  1599,  1745,   929,   606,   929,
    1179,  1180,  1417,   667,  1652,  1653,   620,  1419,   932,  -532,
    1617,   621,  1455,   668,   543,   543,   543,   669,  1062,   546,
     546,   546,  1247,  1248,   226,  1272,  1273,   996,   670,  1437,
     671,  -532,  1646,  1649,  1649,  1777,  1778,  -532,  -532,  1636,
     672,  1641,  1934,  1935,  2012,  2013,   229,   419,   430,   431,
     688,   890,  1048,  1050,  1408,  -681,  -532,  2004,  2005,   551,
     552,   684,   227,   845,   846,   228,   183,   184,   185,   186,
     187,   188,  1491,  1492,   689,  1519,  -532,  -532,  -532,   690,
    1495,   693,   701,  1305,   703,  1628,   704,   705,   706,  1306,
     196,   726,   727,   728,   755,  1714,   230,  1499,   758,   761,
     762,   926,   774,  1525,   773,  1526,   775,  1527,   776,   777,
     282,  1520,  1529,   781,   783,   784,   795,   800,   593,   229,
    -532,   825,   826,   827,   828,   829,   830,   821,   851,  1307,
     814,   815,  1836,  1965,   819,   820,  1532,   825,   826,   827,
     828,   829,   864,   822,  1308,   535,   536,   537,   538,   231,
     232,   233,   234,   235,   236,   843,   609,   611,   836,  1556,
     837,   237,   238,   239,   240,  1715,   838,   839,   854,   230,
     858,   862,   857,   863,   927,   867,   927,   875,  1734,   927,
     -16,     1,  1737,   876,   882,   883,  1743,   891,   903,   893,
     241,   895,   942,   943,   929,   349,   929,   981,   982,   929,
     539,   984,  1297,   242,   997,  1532,  1000,  1309,  1001,   243,
    1750,  1009,   244,  1532,   245,  1028,   624,  1760,   643,  1016,
    1030,  1031,   231,   232,   233,   234,   235,   236,  1032,   168,
    1057,     2,  1033,  1060,   237,   238,   239,   240,   643,  1042,
    1063,  1068,   712,   712,     3,     4,     5,     6,  1076,   929,
    1075,   246,  1093,  1848,  1115,  1095,     7,     8,     9,    10,
    1101,  1127,  1096,   241,  1077,    11,  1133,  1137,  1150,   631,
    1672,  1148,   632,   633,   634,   635,   636,   637,   638,   639,
    1651,  1159,   243,   641,  1152,   244,  1149,   245,  1823,  1168,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   284,  1164,  1186,   282,  1189,  1187,  1192,  1197,
      12,  1199,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,  1632,  1226,   246,   825,   826,   827,   828,   829,
    1343,   631,  1690,   643,   632,   633,   634,   635,   636,   637,
     638,   639,  1207,  1855,   640,   641,  1235,  1240,  1244,    13,
      14,   631,  1242,   927,   632,   633,   634,   635,   636,   637,
     638,   639,  1236,  -743,  1427,   641,  -745,  -741,  1249,  1178,
     543,  1220,  1253,   929,  1255,   546,  1271,  1257,  1277,  1279,
    1297,  1262,  1281,  1282,  1283,  1895,  1288,  1289,  1918,  1291,
    1292,  1296,   374,  1286,  1856,  1326,  1332,   632,   633,   634,
     635,   636,   637,   638,   639,  1327,    15,  1740,   641,  1982,
    1329,  1333,   392,  1747,    16,    17,  1334,    18,  1335,    19,
      20,    21,    22,    23,    24,    25,  1336,  1491,    26,  1339,
    1340,  1346,  1491,  -772,    27,    28,  1347,  1362,  1348,  1937,
    1349,  1350,  1352,  1375,  1358,  1382,   148,  1360,  1361,  1380,
      29,  1386,  1387,    30,  1393,  1394,  1395,   602,   603,  1400,
    1403,  1407,  1412,   607,  1415,  1532,  1788,  1416,   617,  1418,
    1421,  1422,  1429,  1430,  1431,  1923,  1433,  1434,  1438,  1442,
    1449,  1459,  1802,  1439,  1978,  1441,  1460,   631,  1493,    31,
     632,   633,   634,   635,   636,   637,   638,   639,  1496,  1494,
    1428,   641,  1500,  1501,   543,  1514,  1515,  1513,  1517,   546,
    1521,  1522,  1533,  1824,  1548,  1534,  1558,  1559,  1560,  1772,
    1573,  1574,  2009,  1572,  1544,  1589,  1596,  1603,  1747,  1608,
    1609,  1610,  1611,  1623,  1612,  1620,  1618,  1622,  1642,  1644,
    1322,  1626,  1491,  1627,  1645,   561,  1654,   697,  1629,  1666,
    1669,   148,   516,   517,   518,  1670,   697,  1676,  1677,   539,
    1678,  1684,  1679,  1683,  1682,  1688,  1696,   519,  1697,  1705,
    1687,   520,   521,   522,   307,   308,   523,   524,   525,   526,
     527,   528,   529,   530,   531,  1692,  1693,  1701,  1694,  1695,
    1681,   641,  1878,  1732,  1736,  1728,  1748,  2039,  1729,   532,
     533,   534,  1749,  1761,  1767,  1744,  2042,  1757,  1768,  1770,
    1769,  1740,  1771,  1775,  1781,  1900,  1776,  1901,  1785,  1786,
    1797,  1800,  1491,  1801,  1853,  1804,  1805,  1491,  1806,  1819,
    1820,  1821,  1825,  1747,  1828,  1747,   697,  1818,   625,  1839,
    1845,  1833,  1849,  1831,  1837,  1850,  1851,  1941,  1852,  1854,
    1846,  1491,  1866,  1942,  1950,  1865,  1245,  1872,  1873,  1939,
    1875,  1877,  1880,  1876,  1870,  1940,  1890,  1897,  1957,   842,
    1904,  1946,  1913,  1920,  1318,  1319,  1922,  1947,  1907,  1924,
    1927,  1953,  1926,  1948,  1956,  1970,  1909,  1884,  1969,  1491,
    1968,  1914,  1974,  1979,  1976,  1989,  2000,  2003,  2014,  1491,
    1980,   561,   868,   870,   870,  1997,  2006,  2007,  2008,  2016,
     868,  2012,   870,  2002,  1993,  1994,  1995,  1996,  2013,  2032,
    2019,  2034,  2037,  1497,  1080,  1440,   899,   900,   901,   450,
     449,  2001,  1254,   719,   280,  1984,  1276,   725,  1733,  1498,
    1039,  2029,   915,   697,  2017,  2015,  2010,  1764,  2031,  1841,
    1983,  1752,  1842,  1650,   938,   938,   938,   938,  2033,  1491,
    1864,  1491,  1863,  1523,   723,   955,   956,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   970,
     971,   972,   973,   974,   975,   976,   977,   978,  1007,   156,
     409,  1625,  2023,   988,   988,  1896,  1899,  1972,  1941,  1619,
    1457,  1576,  1491,  1145,  1942,  1491,  1575,  1411,  1252,  1250,
    1939,  1225,  1420,   948,   999,   998,  1940,  1172,   691,  1143,
    1719,  1351,  1946,   947,  1817,   954,  1191,   983,  1947,   535,
     536,   537,   538,   293,  1948,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   274,   810,   305,   306,
     861,  1795,    73,    74,  1142,   913,    75,   307,   308,  1949,
    1794,  1194,  1686,  1554,  1195,   849,  1803,  1542,    76,  1545,
    1689,    77,  1874,  1955,   309,   310,   311,   312,   313,   314,
     315,     0,    78,  1962,     0,   267,   268,   269,     0,   888,
       0,     0,   316,    79,     0,     0,   163,   165,   166,   167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,   318,     0,     0,
      87,   319,     0,    88,     0,    89,    90,    91,     0,     0,
       0,   320,    92,    93,     0,     0,     0,     0,     0,     0,
       0,   321,   322,   323,   324,   325,     0,   326,   327,    94,
      95,   328,   329,    96,   330,    97,    98,    99,   100,   101,
     102,   103,     0,   104,   331,   105,   106,   107,   108,     0,
     109,   332,   110,     0,     0,     0,     0,     0,   111,  1160,
     707,   708,   112,   868,     0,     0,     0,     0,     0,   870,
       0,     0,     0,   697,     0,     0,     0,     0,     0,   335,
     336,     0,     0,     0,   337,   338,   339,     0,     0,     0,
       0,  1193,     0,     0,  1196,     0,   341,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,   117,   697,   697,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,  1234,     0,   132,   133,     0,   134,     0,     0,   135,
       0,   136,     0,     0,     0,   137,   138,   988,     0,   988,
       0,     0,   342,   343,   344,   345,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,   346,     0,     0,     0,
     347,   348,     0,   697,     0,     0,     0,     0,     0,     0,
       0,   697,     0,     0,     0,     0,   144,     0,     0,     0,
       0,   145,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   516,   517,
     518,     0,   350,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   519,     0,     0,     0,   520,   521,   522,
     307,   308,   523,   524,   525,   526,   527,   528,   529,   530,
     531,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   532,   533,   534,     0,   516,
     517,   518,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   519,     0,     0,     0,   520,   521,
     522,   307,   308,   523,   524,   525,   526,   527,   528,   529,
     530,   531,     0,     0,     0,   842,     0,     0,     0,     0,
       0,     0,     0,   516,   517,   518,   532,   533,   534,     0,
       0,     0,  1355,     0,     0,     0,   870,     0,   519,     0,
       0,  1366,   520,   521,   522,   307,   308,   523,   524,   525,
     526,   527,   528,   529,   530,   531,     0,     0,     0,     0,
       0,     0,     0,     0,  1396,  1397,  1398,  1399,     0,     0,
     532,   533,   534,     0,   697,     0,     0,     0,     0,     0,
    1404,   697,     0,   697,     0,     0,    67,    68,    69,    70,
      71,    72,     0,     0,  1108,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,     0,   988,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,   163,   165,   166,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
       0,     0,     0,    92,    93,   535,   536,   537,   538,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,  1537,     0,     0,  1366,     0,   111,
      13,  1203,     0,   112,     0,  1160,   535,   536,   537,   538,
       0,     0,   868,     0,     0,   868,     3,     4,     5,     6,
       0,     0,  -217,     0,   697,   697,   697,   697,     7,     8,
       9,    10,     0,     0,   697,     0,     0,    11,     0,  -217,
       0,     0,     0,  1647,  -217,  -217,   113,   114,     0,     0,
     535,   536,   537,   538,   115,     0,     0,     0,   116,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,  -217,   130,  -217,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,  1640,
     135,     0,   136,     0,     0,     0,   137,   138,     0,     0,
     592,     0,     0,   139,   140,   141,   142,     0,     0,     0,
       0,    13,    14,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   868,     0,  -217,
    -217,  -217,     0,     0,     0,     0,     0,   144,     0,     0,
       0,     0,   145,   146,     0,     0,     0,     0,     0,     0,
       0,  -217,     0,  -217,     0,     0,     0,     0,     0,  -217,
    -217,   921,     0,  1184,     0,     0,     0,     0,    15,  1366,
    -217,     0,     0,  -217,     0,     0,    16,    17,  -217,    18,
       0,     0,     0,  -217,     0,     0,   643,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    27,    28,     0,     0,
       0,  1709,     0,  1710,     0,     0,  1711,     0,     0,     0,
       0,     0,    29,     0,     0,    30,     0,   643,     0,     0,
       0,     0,     0,     0,     0,   842,     0,     0,     0,   868,
       0,     0,     0,     0,     0,     0,     0,     0,   868,     0,
       0,     0,  -217,     0,   644,   645,   646,   647,   648,     0,
       0,    31,   649,   650,   651,   652,   653,  1583,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,   643,     0,     0,     0,   644,   645,   646,   647,   648,
       0,     0,     0,   649,   650,   651,   652,   653,     0,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,     0,     0,     0,  1789,  1537,  1537,     0,  1537,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   643,     0,   868,     0,     0,     0,     0,     0,   644,
     645,   646,   647,   648,     0,     0,     0,   649,   650,   651,
     652,   653,   868,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1835,     0,     0,     0,     0,     0,  1840,     0,     0,   644,
     645,   646,   647,   648,     0,     0,     0,   649,   650,   651,
     652,   653,  1185,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,     0,     0,     0,     0,
     293,     0,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,  1584,     0,   305,   306,     0,     0,    73,
      74,     0,     0,    75,   307,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,    77,     0,
       0,   309,   310,   311,   312,   313,   314,   315,     0,    78,
       0,     0,   267,   268,   269,     0,     0,     0,     0,   316,
      79,     0,     0,   163,   165,   166,   167,  1182,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,  1789,    82,     0,  1537,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
     317,     0,   868,     0,   318,     0,     0,    87,   319,     0,
      88,     0,    89,    90,    91,  1973,     0,  1198,   320,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   321,   322,
     323,   324,   325,     0,   326,   327,    94,    95,   328,   329,
      96,   330,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   331,   105,   106,   107,   108,     0,   109,   332,   110,
       0,     0,     0,     0,     0,   111,    13,   591,     0,   112,
     334,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   335,   336,     0,     0,
       0,   337,   338,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,   592,     0,     0,   342,
     343,   344,   345,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,   346,     0,     0,     0,   347,   348,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,     0,     0,     0,     0,   145,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   349,   293,   350,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,     0,     0,   305,   306,     0,     0,    73,    74,     0,
       0,    75,   307,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,    77,     0,     0,   309,
     310,   311,   312,   313,   314,   315,     0,    78,     0,     0,
     267,   268,   269,     0,     0,     0,     0,   316,    79,     0,
       0,     0,   165,   166,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,   317,     0,
       0,     0,   318,     0,     0,    87,   319,     0,    88,     0,
      89,    90,    91,     0,     0,     0,   320,    92,    93,     0,
       0,     0,     0,     0,     0,     0,   321,   322,   323,   324,
     325,     0,   326,   327,    94,    95,   328,   329,    96,   330,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   331,
     105,   106,   107,   108,     0,   109,   332,   110,     0,     0,
       0,     0,     0,   111,     0,   333,     0,   112,   334,     0,
     949,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     950,   951,     0,     0,   335,   336,     0,     0,     0,   337,
     338,   339,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   341,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   342,   343,   344,
     345,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,   346,     0,     0,     0,   347,   348,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,     0,   145,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   349,   293,   350,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,     0,    73,    74,     0,     0,    75,
     307,   308,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,   309,   310,   311,
     312,   313,   314,   315,     0,    78,     0,     0,   267,   268,
     269,     0,     0,     0,     0,   316,    79,     0,     0,   163,
     165,   166,   167,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,   317,     0,     0,     0,
     318,     0,     0,    87,   319,     0,    88,     0,    89,    90,
      91,     0,     0,     0,   320,    92,    93,     0,     0,     0,
       0,     0,     0,     0,   321,   322,   323,   324,   325,     0,
     326,   327,    94,    95,   328,   329,    96,   330,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   331,   105,   106,
     107,   108,     0,   109,   332,   110,     0,     0,     0,     0,
       0,   111,    13,   591,     0,   112,   334,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   335,   336,     0,     0,     0,   337,   338,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   341,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,     0,   136,     0,     0,     0,  1633,   138,
       0,     0,     0,     0,     0,   342,   343,   344,   345,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,   346,
       0,     0,     0,   347,   348,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   144,
       0,     0,     0,     0,   145,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   349,   293,   350,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,     0,     0,   305,
     306,     0,     0,    73,    74,     0,     0,    75,   307,   308,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,   309,   310,   311,   312,   313,
     314,   315,     0,    78,     0,     0,   267,   268,   269,     0,
       0,     0,     0,   316,    79,     0,     0,     0,   165,   166,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,   317,     0,     0,     0,   318,     0,
       0,    87,   319,     0,    88,     0,    89,    90,    91,     0,
       0,     0,   320,    92,    93,     0,     0,     0,     0,     0,
       0,     0,   321,   322,   323,   324,   325,     0,   326,   327,
      94,    95,   328,   329,    96,   330,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   331,   105,   106,   107,   108,
       0,   109,   332,   110,     0,     0,     0,     0,     0,   111,
       0,   333,     0,   112,   334,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     335,   336,     0,     0,     0,   337,   338,   339,     0,     0,
       0,     0,     0,     0,   340,     0,     0,   341,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   116,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,     0,   136,     0,     0,     0,   137,   138,     0,     0,
       0,     0,     0,   342,   343,   344,   345,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,   346,     0,     0,
       0,   347,   348,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,     0,     0,
       0,     0,   145,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   349,   293,   350,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,     0,     0,   305,   306,     0,
       0,    73,    74,     0,     0,    75,   307,   308,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
      77,     0,     0,   309,   310,   311,   312,   313,   314,   315,
       0,    78,     0,     0,   267,   268,   269,     0,     0,     0,
       0,   316,    79,     0,     0,     0,   165,   166,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,   317,     0,     0,     0,   318,     0,     0,    87,
     319,     0,    88,     0,    89,    90,    91,     0,     0,     0,
     320,    92,    93,     0,     0,     0,     0,     0,     0,     0,
     321,   322,   323,   324,   325,     0,   326,   327,    94,    95,
     328,   329,    96,   330,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   331,   105,   106,   107,   108,     0,   109,
     332,   110,     0,     0,     0,     0,     0,   111,     0,   333,
       0,   112,   334,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   335,   336,
       0,     0,     0,   337,   338,   339,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   341,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,     0,
     136,     0,     0,     0,   137,   138,     0,     0,     0,     0,
       0,   342,   343,   344,   345,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,   346,     0,     0,     0,   347,
     348,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,     0,     0,     0,     0,
     145,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   349,
     293,   350,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,     0,     0,   305,   306,     0,     0,    73,
      74,     0,     0,    75,   307,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,    77,     0,
       0,   309,   310,   311,   312,   313,   314,   315,     0,    78,
       0,     0,   267,   268,   269,     0,     0,     0,     0,   316,
      79,     0,     0,     0,   165,   166,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,   318,     0,     0,    87,   319,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   320,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   321,   322,
     323,   324,   325,     0,   326,   327,    94,    95,   328,   329,
      96,   330,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   331,   105,   106,   107,   108,     0,   109,   332,   110,
       0,     0,     0,     0,     0,   111,     0,   601,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1720,     0,     0,     0,     0,     0,   335,   336,     0,     0,
       0,   337,   338,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   342,
     343,   344,   345,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,   346,     0,     0,     0,   347,   348,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,     0,     0,     0,     0,   145,   146,
       0,     0,     0,     0,     0,     0,  1721,     0,     0,     0,
       0,     0,     0,  1722,     0,     0,     0,     0,   293,   350,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,     0,     0,   305,   306,     0,     0,    73,    74,     0,
       0,    75,   307,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,    77,     0,     0,   309,
     310,   311,   312,   313,   314,   315,     0,    78,     0,     0,
     267,   268,   269,     0,     0,     0,     0,   316,    79,     0,
       0,     0,   165,   166,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,   318,     0,     0,    87,   319,     0,    88,     0,
      89,    90,    91,     0,     0,     0,   320,    92,    93,     0,
       0,     0,     0,     0,     0,     0,   321,   322,   323,   324,
     325,     0,   326,   327,    94,    95,   328,   329,    96,   330,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   331,
     105,   106,   107,   108,     0,   109,   332,   110,     0,     0,
       0,     0,     0,   111,     0,   601,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   985,     0,     0,   335,   336,     0,     0,     0,   337,
     338,   339,     0,     0,     0,     0,     0,     0,   986,     0,
       0,   341,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   987,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   342,   343,   344,
     345,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,   346,     0,     0,     0,   347,   348,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,     0,   145,   146,     0,   293,
       0,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,     0,     0,   305,   306,     0,   350,    73,    74,
       0,     0,    75,   307,   308,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    77,     0,     0,
     309,   310,   311,   312,   313,   314,   315,     0,    78,     0,
       0,   267,   268,   269,     0,     0,     0,     0,   316,    79,
       0,     0,     0,   165,   166,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,   318,     0,     0,    87,   319,     0,    88,
       0,    89,    90,    91,     0,     0,     0,   320,    92,    93,
       0,     0,     0,     0,     0,     0,     0,   321,   322,   323,
     324,   325,  1536,   326,   327,    94,    95,   328,   329,    96,
     330,    97,    98,    99,   100,   101,   102,   103,   876,   104,
     331,   105,   106,   107,   108,     0,   109,   332,   110,     0,
       0,     0,     0,     0,   111,     0,   601,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   335,   336,     0,     0,     0,
     337,   338,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   341,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,     0,     0,     0,     0,     0,   129,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,     0,   136,     0,     0,
       0,   137,   138,     0,     0,     0,     0,     0,   342,   343,
     344,   345,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,   346,     0,     0,     0,   347,   348,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,     0,     0,     0,     0,   145,   146,     0,
     293,     0,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,     0,     0,   305,   306,     0,   350,    73,
      74,     0,     0,    75,   307,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,    77,     0,
       0,   309,   310,   311,   312,   313,   314,   315,     0,    78,
       0,     0,   267,   268,   269,     0,     0,     0,     0,   316,
      79,     0,     0,     0,   165,   166,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,   318,     0,     0,    87,   319,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   320,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   321,   322,
     323,   324,   325,     0,   326,   327,    94,    95,   328,   329,
      96,   330,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   331,   105,   106,   107,   108,     0,   109,   332,   110,
       0,     0,     0,     0,     0,   111,     0,   601,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   335,   336,     0,     0,
       0,   337,   338,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   342,
     343,   344,   345,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,   346,     0,     0,     0,   347,   348,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,     0,     0,     0,     0,   145,   146,
       0,     0,     0,     0,     0,     0,  1721,     0,     0,     0,
       0,     0,     0,  1722,     0,     0,     0,     0,   293,   350,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,     0,     0,   305,   306,     0,     0,    73,    74,     0,
       0,    75,   307,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,    77,     0,     0,   309,
     310,   311,   312,   313,   314,   315,     0,    78,     0,     0,
     267,   268,   269,     0,     0,     0,     0,   316,    79,     0,
       0,     0,   165,   166,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,   318,     0,     0,    87,   319,     0,    88,     0,
      89,    90,    91,     0,     0,     0,   320,    92,    93,     0,
       0,     0,     0,     0,     0,     0,   321,   322,   323,   324,
     325,     0,   326,   327,    94,    95,   328,   329,    96,   330,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   331,
     105,   106,   107,   108,     0,   109,   332,   110,     0,     0,
       0,     0,     0,   111,     0,   601,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   335,   336,     0,     0,     0,   337,
     338,   339,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   341,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   342,   343,   344,
     345,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,   346,     0,     0,     0,   347,   348,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,     0,   145,   146,     0,     0,
       0,     0,     0,     0,  1963,     0,     0,     0,     0,     0,
       0,  1964,     0,     0,     0,     0,   293,   350,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,     0,    73,    74,     0,     0,    75,
     307,   308,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,   309,   310,   311,
     312,   313,   314,   315,     0,    78,     0,     0,   267,   268,
     269,     0,     0,     0,     0,   316,    79,     0,     0,     0,
     165,   166,   167,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
     318,     0,     0,    87,   319,     0,    88,     0,    89,    90,
      91,     0,     0,     0,   320,    92,    93,     0,     0,     0,
       0,     0,     0,     0,   321,   322,   323,   324,   325,     0,
     326,   327,    94,    95,   328,   329,    96,   330,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   331,   105,   106,
     107,   108,     0,   109,   332,   110,     0,     0,     0,     0,
       0,   111,     0,   601,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   335,   336,     0,     0,     0,   337,   338,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   341,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,     0,   136,     0,     0,     0,   137,   138,
       0,     0,     0,     0,     0,   342,   343,   344,   345,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,   346,
     616,     0,     0,   347,   348,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   144,
       0,     0,     0,     0,   145,   146,     0,   293,     0,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
       0,     0,   305,   306,     0,   350,    73,    74,     0,     0,
      75,   307,   308,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,    77,     0,     0,   309,   310,
     311,   312,   313,   314,   315,     0,    78,     0,     0,   267,
     268,   269,     0,     0,     0,     0,   316,    79,     0,     0,
       0,   165,   166,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,   318,     0,     0,    87,   319,     0,    88,     0,    89,
      90,    91,     0,     0,     0,   320,    92,    93,     0,     0,
       0,     0,     0,     0,     0,   321,   322,   323,   324,   325,
       0,   326,   327,    94,    95,   328,   329,    96,   330,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   331,   105,
     106,   107,   108,     0,   109,   332,   110,     0,     0,     0,
       0,     0,   111,     0,   601,   695,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   335,   336,     0,     0,     0,   337,   338,
     339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,     0,     0,     0,     0,     0,   129,     0,     0,
     130,     0,     0,     0,   131,     0,     0,   132,   133,     0,
     134,     0,     0,   135,     0,   136,     0,     0,     0,   137,
     138,     0,     0,     0,     0,     0,   342,   343,   344,   345,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
     346,     0,     0,     0,   347,   348,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,     0,     0,     0,     0,   145,   146,     0,   293,     0,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,     0,     0,   305,   306,     0,   350,    73,    74,     0,
       0,    75,   307,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,    77,     0,     0,   309,
     310,   311,   312,   313,   314,   315,     0,    78,     0,     0,
     267,   268,   269,     0,     0,     0,     0,   316,    79,     0,
       0,     0,   165,   166,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,   318,     0,     0,    87,   319,     0,    88,     0,
      89,    90,    91,     0,     0,     0,   320,    92,    93,     0,
       0,     0,     0,     0,     0,     0,   321,   322,   323,   324,
     325,     0,   326,   327,    94,    95,   328,   329,    96,   330,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   331,
     105,   106,   107,   108,     0,   109,   332,   110,     0,     0,
       0,     0,     0,   111,     0,   601,     0,   112,     0,   969,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   335,   336,     0,     0,     0,   337,
     338,   339,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   341,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   342,   343,   344,
     345,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,   346,     0,     0,     0,   347,   348,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,     0,   145,   146,     0,   293,
       0,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,     0,     0,   305,   306,     0,   350,    73,    74,
       0,     0,    75,   307,   308,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    77,     0,     0,
     309,   310,   311,   312,   313,   314,   315,     0,    78,     0,
       0,   267,   268,   269,     0,     0,     0,     0,   316,    79,
       0,     0,   163,   165,   166,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,   318,     0,     0,    87,   319,     0,    88,
       0,    89,    90,    91,     0,     0,     0,   320,    92,    93,
       0,     0,     0,     0,     0,     0,     0,   321,   322,   323,
     324,   325,     0,   326,   327,    94,    95,   328,   329,    96,
     330,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     331,   105,   106,   107,   108,     0,   109,   332,   110,     0,
       0,     0,     0,     0,   111,     0,   707,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   335,   336,     0,     0,     0,
     337,   338,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   341,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,     0,     0,     0,     0,     0,   129,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,     0,   136,     0,     0,
       0,   137,   138,     0,     0,     0,     0,     0,   342,   343,
     344,   345,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,   346,     0,     0,     0,   347,   348,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,     0,     0,     0,     0,   145,   146,     0,
     293,     0,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,     0,     0,   305,   306,     0,   350,    73,
      74,     0,     0,    75,   307,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,    77,     0,
       0,   309,   310,   311,   312,   313,   314,   315,     0,    78,
       0,     0,   267,   268,   269,     0,     0,     0,     0,   316,
      79,     0,     0,     0,   165,   166,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,  1364,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,   318,     0,     0,    87,   319,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   320,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   321,   322,
     323,   324,   325,     0,   326,   327,    94,    95,   328,   329,
      96,   330,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   331,   105,   106,   107,   108,     0,   109,   332,   110,
       0,     0,     0,     0,     0,   111,     0,   601,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   335,   336,     0,     0,
       0,   337,   338,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,  1365,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   342,
     343,   344,   345,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,   346,     0,     0,     0,   347,   348,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,     0,     0,     0,     0,   145,   146,
       0,   293,     0,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,     0,     0,   305,   306,     0,   350,
      73,    74,     0,     0,    75,   307,   308,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,    77,
       0,     0,   309,   310,   311,   312,   313,   314,   315,     0,
      78,     0,     0,   267,   268,   269,     0,     0,     0,     0,
     316,    79,     0,     0,     0,   165,   166,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    84,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,   318,     0,     0,    87,   319,
       0,    88,     0,    89,    90,    91,     0,     0,     0,   320,
      92,    93,     0,     0,     0,     0,     0,     0,     0,   321,
     322,   323,   324,   325,     0,   326,   327,    94,    95,   328,
     329,    96,   330,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   331,   105,   106,   107,   108,     0,   109,   332,
     110,     0,     0,     0,     0,     0,   111,     0,   601,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,   336,     0,
       0,     0,   337,   338,   339,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   341,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,     0,     0,     0,     0,
       0,   129,     0,     0,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,     0,     0,   135,     0,   136,
       0,     0,     0,   137,   138,     0,     0,     0,     0,     0,
     342,   343,   344,   345,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,   346,  1637,     0,     0,   347,   348,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,     0,     0,     0,     0,   145,
     146,     0,   293,     0,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,     0,     0,   305,   306,     0,
     350,    73,    74,     0,     0,    75,   307,   308,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
      77,     0,     0,   309,   310,   311,   312,   313,   314,   315,
       0,    78,     0,     0,   267,   268,   269,     0,     0,     0,
       0,   316,    79,     0,     0,     0,   165,   166,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,   318,     0,     0,    87,
     319,     0,    88,     0,    89,    90,    91,     0,     0,     0,
     320,    92,    93,     0,     0,     0,     0,     0,     0,     0,
     321,   322,   323,   324,   325,  1536,   326,   327,    94,    95,
     328,   329,    96,   330,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   331,   105,   106,   107,   108,     0,   109,
     332,   110,     0,     0,     0,     0,     0,   111,     0,   601,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   335,   336,
       0,     0,     0,   337,   338,   339,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   341,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,     0,
     136,     0,     0,     0,   137,   138,     0,     0,     0,     0,
       0,   342,   343,   344,   345,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,   346,     0,     0,     0,   347,
     348,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,     0,     0,     0,     0,
     145,   146,     0,   293,     0,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,     0,     0,   305,   306,
       0,   350,    73,    74,     0,     0,    75,   307,   308,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,    77,     0,     0,   309,   310,   311,   312,   313,   314,
     315,     0,    78,     0,     0,   267,   268,   269,     0,     0,
       0,     0,   316,    79,     0,     0,     0,   165,   166,   167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,   318,     0,     0,
      87,   319,     0,    88,     0,    89,    90,    91,     0,     0,
       0,   320,    92,    93,     0,     0,     0,     0,     0,     0,
       0,   321,   322,   323,   324,   325,     0,   326,   327,    94,
      95,   328,   329,    96,   330,    97,    98,    99,   100,   101,
     102,   103,     0,   104,   331,   105,   106,   107,   108,     0,
     109,   332,   110,     0,     0,     0,     0,     0,   111,     0,
     601,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   335,
     336,     0,     0,     0,   337,   338,   339,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   341,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
       0,   136,     0,     0,     0,   137,   138,     0,     0,     0,
       0,     0,   342,   343,   344,   345,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,   346,     0,     0,     0,
     347,   348,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,   144,     0,     0,    73,
      74,   145,   146,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,    77,     0,
       0,     0,   350,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,   165,   166,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,    89,    90,    91,   643,     0,     0,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,     0,   109,     0,   110,
       0,     0,     0,     0,     0,   111,     0,   920,     0,   112,
       0,     0,     0,   644,   645,   646,   647,   648,     0,     0,
       0,   649,   650,   651,   652,   653,     0,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,     0,    75,   144,     0,     0,     0,     0,   145,   146,
       0,  1579,     0,     0,    76,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   921,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       3,     4,  1461,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1462,     0,     0,    81,     0,
       0,  1463,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,    88,
       0,    89,    90,    91,     0,   643,     0,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,     0,   644,   645,   646,   647,   648,     0,     0,
       0,   649,   650,   651,   652,   653,     0,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,    15,   116,     0,     0,     0,     0,     0,   117,
      16,  1465,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,    26,     0,     0,     0,     0,   129,
      27,    28,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,    29,   136,  1466,    30,
       0,   137,   138,     0,     0,     0,     0,     0,   139,   140,
     141,   142,  1402,     0,     0,     0,     0,     0,   143,     0,
       0,     0,  1467,     0,     0,  1910,     0,     0,  1468,  1911,
    -336,     0,     0,     0,     0,    31,    67,    68,    69,    70,
      71,    72,   144,     0,     0,     0,     0,   145,   146,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     3,     4,  1461,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    1462,     0,     0,    81,     0,     0,  1463,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
     643,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,     0,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     0,     0,     0,     0,   644,   645,
     646,   647,   648,     0,     0,     0,   649,   650,   651,   652,
     653,     0,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,    15,   116,     0,
       0,     0,     0,  1464,   117,    16,  1465,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,    26,
       0,     0,     0,     0,   129,    27,    28,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,    29,   136,  1466,    30,     0,   137,   138,     0,     0,
       0,     0,     0,   139,   140,   141,   142,  1908,     0,     0,
       0,     0,     0,   143,     0,     0,     0,  1467,     0,     0,
       0,     0,     0,  1468,     0,     0,     0,     0,  1469,     0,
      31,    67,    68,    69,    70,    71,    72,   144,     0,     0,
       0,     0,   145,   146,     0,     0,     0,     0,    73,    74,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       3,     4,  1461,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1462,     0,     0,    81,     0,
       0,  1463,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,    88,
       0,    89,    90,    91,     0,     0,   643,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,     0,     0,   644,   645,   646,   647,   648,     0,
       0,     0,   649,   650,   651,   652,   653,     0,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,    15,   116,     0,     0,     0,     0,  1762,   117,
      16,  1465,  1763,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,    26,     0,     0,     0,     0,   129,
      27,    28,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,    29,   136,  1466,    30,
       0,   137,   138,     0,     0,     0,     0,     0,   139,   140,
     141,   142,   909,     0,     0,     0,     0,     0,   143,     0,
       0,     0,  1467,     0,     0,     0,     0,     0,  1468,     0,
       0,     0,     0,  1469,     0,    31,    67,    68,    69,    70,
      71,    72,   144,     0,     0,     0,     0,   145,   146,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     3,     4,  1461,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    1462,     0,     0,    81,     0,     0,  1463,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
       0,   643,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,     0,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     0,     0,     0,     0,     0,   644,
     645,   646,   647,   648,     0,     0,     0,   649,   650,   651,
     652,   653,     0,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,    15,   116,     0,
       0,     0,     0,     0,   117,    16,  1465,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,    26,
       0,     0,     0,     0,   129,    27,    28,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,    29,   136,  1466,    30,     0,   137,   138,     0,     0,
       0,     0,     0,   139,   140,   141,   142,  1754,     0,     0,
       0,     0,     0,   143,     0,     0,     0,  1467,     0,     0,
       0,     0,     0,  1468,     0,  -336,     0,     0,     0,     0,
      31,    67,    68,    69,    70,    71,    72,   144,     0,     0,
       0,     0,   145,   146,     0,     0,     0,     0,    73,    74,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       3,     4,  1461,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1462,     0,     0,    81,     0,
       0,  1463,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,    88,
       0,    89,    90,    91,   643,     0,     0,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,   644,   645,   646,   647,   648,     0,     0,     0,
     649,   650,   651,   652,   653,     0,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,    15,   116,     0,     0,     0,     0,     0,   117,
      16,  1465,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   666,   128,    26,     0,     0,     0,     0,   129,
      27,    28,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,    29,   136,  1466,    30,
       0,   137,   138,     0,     0,     0,     0,     0,   139,   140,
     141,   142,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,  1467,     0,     0,     0,     0,     0,  1468,     0,
       0,     0,     0,     0,  1981,    31,    67,    68,    69,    70,
      71,    72,   144,     0,     0,     0,     0,   145,   146,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     3,     4,  1461,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    1462,     0,     0,    81,     0,     0,  1463,     0,     0,     0,
       0,     0,    83,  1228,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
     643,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,     0,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     0,     0,     0,     0,   644,   645,
     646,   647,   648,     0,     0,     0,   649,   650,   651,   652,
     653,     0,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,    15,   116,     0,
       0,     0,     0,     0,   117,    16,  1465,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,    26,
       0,     0,     0,     0,   129,    27,    28,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,    29,   136,  1466,    30,     0,   137,   138,     0,     0,
       0,     0,     0,   139,   140,   141,   142,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,  1467,     0,     0,
       0,     0,     0,  1468,     0,     0,     0,     0,     0,     0,
      31,    67,    68,    69,    70,    71,    72,   144,     0,     0,
       0,     0,   145,   146,     0,     0,     0,     0,    73,    74,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       3,     4,  1461,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1462,     0,     0,    81,     0,
       0,  1463,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,  1581,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,    88,
       0,    89,    90,    91,     0,     0,     0,   643,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,     0,   109,  1582,   110,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,   644,   645,   646,   647,   648,
       0,     0,     0,   649,   650,   651,   652,   653,     0,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,   117,
      16,  1465,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,     0,     0,     0,     0,     0,   129,
      27,    28,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,    29,   136,  1466,     0,
       0,   137,   138,     0,     0,     0,     0,     0,   139,   140,
     141,   142,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,  1467,     0,     0,     0,     0,     0,  1468,     0,
       0,     0,     0,  1938,     0,    31,    67,    68,    69,    70,
      71,    72,   144,     0,     0,     0,     0,   145,   146,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     3,     4,  1461,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    1462,     0,     0,    81,     0,     0,  1463,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,   643,
       0,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,     0,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     0,     0,     0,   644,   645,   646,
     647,   648,     0,     0,     0,   649,   650,   651,   652,   653,
       0,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,     0,     0,     0,     0,     0,  1134,
    1135,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   116,     0,
       0,     0,     0,     0,   117,    16,  1465,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,    27,    28,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,    29,   136,  1466,     0,     0,   137,   138,     0,     0,
       0,     0,     0,   139,   140,   141,   142,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,  1467,     0,     0,
       0,     0,     0,  1468,     0,     0,     0,     0,     0,  2030,
      31,     0,     0,     0,     0,     0,     0,   144,     0,     0,
       0,     0,   145,   146,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,   226,     0,     0,     0,
       0,    73,    74,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,   228,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,    89,    90,    91,     0,   643,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,   111,  1183,     0,
       0,   112,     0,     0,     0,     0,   644,   645,   646,   647,
     648,     0,     0,     0,   649,   650,   651,   652,   653,     0,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   276,   277,   233,   234,   235,   236,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,     0,
     136,     0,     0,     0,   278,   138,     0,     0,     0,     0,
       0,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,    67,    68,    69,   992,   993,   994,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,     0,     0,    75,     0,   144,     0,     0,     0,     0,
     145,   146,     0,     0,     0,    76,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,   165,   166,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,    89,    90,    91,     0,   643,     0,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,  1535,   109,     0,   110,
       0,     0,     0,     0,     0,   111,     0,     0,     0,   112,
       0,     0,     0,     0,   644,   645,   646,   647,   648,     0,
       0,     0,   649,   650,   651,   652,   653,     0,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     995,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
      67,    68,    69,   992,   993,   994,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    75,     0,   144,     0,     0,     0,     0,   145,   146,
       0,     0,     0,    76,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,   165,   166,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,     0,   643,     0,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,  1580,   109,     0,   110,     0,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
       0,     0,   644,   645,   646,   647,   648,     0,     0,     0,
     649,   650,   651,   652,   653,     0,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,  1435,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   139,   140,   141,
     142,     0,     0,     0,     0,     0,     0,   143,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    75,
       0,   144,     0,     0,     0,     0,   145,   146,     0,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
     165,   166,   167,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,     0,   643,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,  1586,   109,     0,   110,     0,     0,     0,     0,
       0,   111,     0,     0,     0,   112,     0,     0,     0,     0,
     644,   645,   646,   647,   648,     0,     0,     0,   649,   650,
     651,   652,   653,     0,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,     0,   136,     0,     0,     0,   137,   138,
       0,     0,     0,     0,     0,   139,   140,   141,   142,     0,
       0,     0,     0,     0,     0,   143,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,   144,
       0,     0,     0,     0,   145,   146,     0,     0,     0,    76,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,   267,   268,   269,     0,
       0,     0,     0,     0,   270,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
     643,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
    1813,   109,     0,   110,     0,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     0,     0,     0,     0,   644,   645,
     646,   647,   648,     0,     0,     0,   649,   650,   651,   652,
     653,     0,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   116,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   271,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     272,     0,   136,     0,     0,     0,   137,   138,     0,     0,
       0,     0,     0,   139,   273,   141,   142,     0,     0,     0,
       0,     0,     0,   143,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,    75,     0,   144,     0,     0,
       0,     0,   145,   146,     0,     0,     0,    76,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,    89,    90,    91,     0,   643,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,  1814,   109,
       0,   720,     0,     0,     0,     0,     0,   111,     0,     0,
       0,   112,     0,     0,     0,     0,   644,   645,   646,   647,
     648,     0,     0,     0,   649,   650,   651,   652,   653,     0,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,   257,   258,   259,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,     0,
     136,     0,     0,     0,   721,   138,     0,     0,     0,     0,
       0,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,    67,    68,    69,   992,   993,   994,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,     0,     0,    75,     0,   144,     0,     0,     0,     0,
     145,   146,     0,     0,     0,    76,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,   165,   166,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,    89,    90,    91,     0,   643,     0,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,  1815,   109,     0,   110,
       0,     0,     0,     0,     0,   111,     0,     0,     0,   112,
       0,     0,     0,     0,   644,   645,   646,   647,   648,     0,
       0,     0,   649,   650,   651,   652,   653,     0,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    75,     0,   144,     0,     0,     0,     0,   145,   146,
       0,     0,     0,    76,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,   163,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,   643,     0,     0,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,     0,   109,     0,   110,     0,     0,
       0,     0,     0,   111,     0,    14,     0,   112,     0,     0,
       0,   644,   645,   646,   647,   648,     0,     0,     0,   649,
     650,   651,   652,   653,     0,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   139,   140,   141,
     142,     0,     0,     0,     0,     0,     0,   143,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    75,
       0,   144,     0,     0,     0,     0,   145,   146,     0,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,     0,     0,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,     0,   109,     0,   110,     0,     0,     0,     0,
       0,   111,     0,     0,     0,   112,     0,     0,     0,     0,
       0,     0,  1081,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,  1082,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,     0,   136,     0,     0,     0,   137,   138,
       0,     0,     0,     0,     0,   139,   140,   141,   142,     0,
       0,     0,     0,     0,     0,   143,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,   144,
       0,     0,     0,     0,   145,   146,     0,     0,     0,    76,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
       0,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,     0,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   116,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,   453,   136,     0,     0,     0,   137,   138,     0,     0,
       0,     0,     0,   139,   140,   141,   142,     0,     0,     0,
       0,     0,     0,   143,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,    75,     0,   144,     0,     0,
       0,     0,   145,   146,     0,     0,     0,    76,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,    89,    90,    91,     0,     0,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,   111,     0,   420,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,     0,
     136,     0,     0,     0,   137,   138,     0,     0,     0,     0,
       0,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,     0,     0,    75,     0,   144,     0,     0,     0,     0,
     145,   146,     0,     0,     0,    76,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,    89,    90,    91,     0,     0,     0,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,     0,   109,     0,   110,
       0,     0,     0,     0,     0,   111,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1069,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    75,     0,   144,     0,     0,     0,     0,   145,   146,
       0,     0,     0,    76,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,     0,     0,     0,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,     0,   109,     0,   110,     0,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
    1082,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   139,   140,   141,
     142,     0,     0,     0,     0,     0,     0,   143,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    75,
       0,   144,     0,     0,     0,     0,   145,   146,     0,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,     0,     0,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,     0,   109,     0,   110,     0,     0,     0,     0,
       0,   111,     0,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,     0,   136,     0,     0,     0,   137,   138,
       0,     0,     0,     0,     0,   139,   140,   141,   142,     0,
       0,     0,     0,     0,     0,   143,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,   144,
       0,     0,     0,     0,   145,   146,     0,     0,     0,    76,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
       0,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,     0,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   481,     0,     0,     0,   116,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,     0,   136,     0,     0,     0,   137,   138,     0,     0,
       0,     0,     0,   139,   140,   141,   142,     0,     0,     0,
       0,     0,     0,   143,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,    75,     0,   144,     0,     0,
       0,     0,   145,   146,     0,     0,     0,    76,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,    89,    90,    91,     0,     0,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,   111,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,     0,
     136,     0,     0,     0,   137,   138,     0,     0,     0,     0,
       0,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1218,     0,     0,     0,     0,
     145,   146
};

static const yytype_int16 yycheck[] =
{
       0,    17,   217,   291,   162,    36,     0,   163,     4,   406,
      25,   423,     0,     9,   172,   291,   624,    13,     0,   765,
     216,    17,    18,   281,     0,   757,  1054,   577,   281,  1352,
       0,   426,   190,   191,   672,   537,     0,   195,   455,    35,
      36,   281,  1288,   580,   927,   928,     0,    27,     3,   317,
      11,   588,   496,   784,   920,   425,     3,   501,   502,   503,
     443,     0,   942,   943,   582,    11,  1507,   872,    14,   874,
      66,  1168,   590,   293,   294,   295,   498,   499,   553,    16,
     885,     4,    14,   536,   553,   333,   334,   775,   776,   741,
      82,    58,   211,    27,   746,    18,  1078,   108,  1421,  1684,
      84,   349,  1687,  1418,  1078,  1414,  1429,   155,     5,     6,
       7,     8,     9,    10,     3,    11,   281,     3,   165,   166,
     167,   275,   342,   275,     0,    58,   333,   112,  1867,   249,
     406,    67,   734,   108,   294,     0,   152,     5,     6,     7,
       8,     9,    10,    66,   514,   265,  1421,   155,    66,   130,
     310,    87,   108,    86,  1429,    66,   152,   153,   278,   108,
     762,   258,   158,   171,    53,   157,   151,   321,   160,   321,
     390,   391,   337,   173,   174,   175,   176,   177,   178,   173,
     174,   175,   176,   177,   178,   173,   174,   175,   176,   177,
     178,   173,   174,   175,   176,   177,   178,   173,   174,   175,
     176,   177,   178,   173,   174,   175,   176,   177,   178,   173,
     174,   175,   176,   177,   178,   170,   212,   213,   214,   173,
     174,   175,   176,   177,   178,  1666,   701,   612,    55,   209,
     153,   227,   701,   229,   173,   174,   175,   176,   177,   178,
     460,   237,   238,   239,   240,   241,   242,   243,   463,   245,
     246,   621,   170,    42,    43,     3,   252,   253,     0,   170,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
    1642,   740,   741,    64,   170,   271,   272,   746,   170,  2018,
     675,  1596,   278,   680,   216,   112,  1595,  1872,  1385,   337,
     213,   214,    83,    82,   341,   291,   292,   173,   174,   175,
     176,   177,   178,   189,   190,   169,   229,   171,   173,   174,
     175,   176,   177,   178,   237,   238,   239,   240,   285,  1050,
     243,  1303,   245,   246,   258,   321,   337,   485,   830,  1303,
     253,   748,   451,   256,   257,   258,   259,  1203,   261,   262,
     263,   264,   265,   591,   881,   728,   729,   985,   555,   987,
      11,   335,   796,   797,   798,   278,   624,   312,  1681,   566,
     567,   171,   337,    82,  1169,  1744,   313,  1172,   364,   887,
     267,   171,   794,   170,   311,  1063,   851,   169,   831,  1751,
    1032,   342,   851,   631,   591,  1757,   254,   106,   337,   257,
       3,   169,     3,   641,   601,   615,   342,  1643,   170,  1885,
      82,   333,  1648,   107,    82,    66,   170,   423,   262,   616,
     102,   558,  1505,   170,   107,   107,   170,  1858,   160,   337,
      80,   417,   170,   630,   420,    66,   262,   423,   122,   107,
     426,   173,   174,   175,   176,   177,   178,     3,   823,   824,
      78,   364,    64,    65,    66,    67,   338,    55,   275,   445,
     171,   171,   146,    86,   107,   148,   148,   248,    64,    65,
      66,    67,   442,   155,   171,  1837,   462,  1953,   333,   173,
    1849,   171,  1851,   337,  1846,   471,   472,   473,   474,   475,
     627,   270,   130,   337,   515,   481,   168,     5,   171,   747,
       0,   487,   488,    11,   747,   491,   107,   493,   494,   495,
     707,   337,   434,   898,   112,   171,   764,   747,   169,   170,
      66,   764,  1758,   509,  1394,  1395,   171,   513,   108,   515,
     130,   891,   445,  1616,   764,   277,   108,   337,   169,   170,
       5,     6,     7,     8,     9,    10,  1908,   337,  1910,   462,
     171,   338,   800,   539,    83,   337,   761,   800,   471,   472,
     473,   474,   475,    66,   162,   813,   169,   170,  1363,   337,
     813,   107,   171,  1032,     0,   488,   338,   855,   491,  1374,
     493,   494,   495,   813,   338,   270,  1381,  1127,   186,   855,
     186,   338,  1313,     0,   338,   337,   854,    82,   171,    64,
      65,    66,    67,   246,   609,   338,   611,   171,   171,  1207,
     139,   759,   822,   169,   170,  1213,  1244,  1215,   624,   187,
     329,   171,   170,   169,   170,   334,   337,   337,   171,   227,
     228,   229,   230,   245,   316,   338,   171,   173,   624,   625,
     337,   171,   628,   294,  2006,    16,  1154,   337,   279,   245,
     171,  1011,   170,   575,   248,   337,   268,   171,   256,   897,
     857,   171,   920,   669,   337,   150,   169,   170,   153,   591,
    1104,   269,   268,   162,   171,    66,   270,   275,   258,   601,
     918,   337,   280,   669,   689,   671,   258,   170,   224,   675,
     676,   171,   337,   171,   904,   953,   906,    68,    69,    70,
     246,    72,    73,    74,    75,   171,    98,    66,   946,   947,
     155,    21,    22,   309,  1587,   107,   337,   315,   171,   317,
     575,   186,   171,  1741,  1742,   124,   171,    85,   266,   265,
     129,    56,   268,   279,   186,   721,   591,    62,   337,   228,
     229,   230,   278,   246,   186,   277,   601,   173,   174,   175,
     176,   177,   178,   337,   676,   113,   261,   115,   116,   117,
     118,   119,   120,    55,   337,   123,   173,   174,   175,   176,
     177,   178,   758,   337,   337,  1033,   279,   337,   169,   170,
     245,   173,   112,   262,   169,   707,   262,   337,   774,   775,
     776,    86,   163,    87,   337,   247,    11,   783,   784,   258,
      94,    95,   337,   268,   297,   247,   299,   337,   721,   795,
     169,   170,  1410,   171,  1412,   820,   337,  1415,  1028,   149,
     112,   151,   223,   337,  1072,   229,   225,   337,  1033,  1072,
     292,   836,  1192,   337,  1268,  1269,  1270,   341,  1223,  1199,
     337,  1201,  1072,  1091,   309,   758,   275,   246,  1091,   229,
     131,  1343,   707,  1380,   246,  1060,  1383,   337,  1243,   337,
     170,  1091,   165,   166,   167,   250,    39,    40,   171,   855,
     162,   337,   858,   113,   114,   115,   116,   117,   118,   119,
     120,   867,   795,   123,   337,   270,   275,   232,   337,   875,
     261,   236,   275,   225,   186,   101,   882,    70,   131,   107,
    1148,  1149,  1624,  1625,    87,  1148,  1149,    90,   275,  1095,
    1096,   275,   898,    96,   920,   149,   124,   151,  1148,  1149,
     101,   129,   844,   845,   846,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   920,   227,   228,   229,   230,    85,
     926,   927,   928,   275,   276,  1203,    68,    69,    70,  1207,
      72,    73,    74,    75,   867,  1213,   174,  1215,   316,   165,
     166,   167,   215,   216,   256,   173,   297,   113,   299,   115,
     116,   117,   118,   119,   120,    42,    43,   123,   211,   212,
     213,   214,   315,   275,   165,   166,   167,   275,   280,   107,
     171,  1589,   312,   313,   314,   315,   174,   174,   920,   177,
     178,   179,   180,   181,   182,   183,   184,    81,    82,   187,
     188,   769,   770,   771,   772,  1001,   224,   225,  1228,   275,
     942,   943,   297,   315,   299,   317,   297,   145,   299,   147,
     148,   337,  1392,  1393,   102,   793,   215,   216,   246,   226,
     281,   163,  1402,   293,  1030,  1031,    64,    65,     3,    67,
    1316,     3,  1262,   170,  1040,  1041,   170,   265,  1044,   170,
     268,   248,  1048,  1049,  1050,   920,   170,   254,   255,  1279,
     278,  1281,  1282,  1283,    88,    89,   316,  1063,   170,  1466,
    1607,    22,  1068,   248,   131,  1333,   273,   170,  1078,   170,
    1333,  1077,   251,   252,  1078,  1081,  1082,  1019,     5,     6,
       7,   165,   166,   167,   170,   270,   122,  1093,   273,   274,
     165,   166,   167,    20,   101,  1101,   171,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    68,    69,    70,  1078,   170,  1049,    74,    75,  1024,
     170,  1026,  1027,   130,   170,    52,    53,    54,   170,  1078,
     319,   320,  1410,   170,  1412,    99,   100,  1415,   170,   337,
     207,   208,   209,   210,   211,   212,   213,   214,  1081,   170,
     316,   165,   166,   167,  1701,   275,   276,   171,   165,   166,
     167,    17,   815,   316,   171,   818,   819,   820,  1101,  1427,
    1428,   173,   174,  1720,   170,   177,   178,  1203,   633,   634,
     635,  1207,   170,   836,   837,   838,   839,  1213,   170,  1215,
     170,  1859,  1078,  1861,  1862,  1863,   170,  1203,   176,    55,
     170,  1207,    58,   189,   190,  1422,  1628,  1213,   170,  1215,
     181,   182,  1218,   327,  1500,  1501,   170,  1223,  1224,   226,
    1450,   170,  1452,   338,  1492,  1493,  1494,   337,  1984,  1492,
    1493,  1494,    92,    93,    17,    88,    89,  1243,   170,  1245,
     170,   248,  1492,  1493,  1494,   323,   324,   254,   255,  1466,
     170,  1468,   321,   322,    64,    65,   112,  1009,   175,   176,
      91,  1203,   753,   754,  1206,   327,   273,  1971,  1972,   286,
     287,   277,    55,   551,   552,    58,     5,     6,     7,     8,
       9,    10,  1288,  1289,    97,  1326,   293,   294,   295,   337,
    1296,   316,   295,  1303,   130,  1461,   130,   130,   130,  1303,
     309,   109,   109,   108,   171,  1591,   162,  1313,   258,   294,
     169,  1589,   170,  1338,   232,  1340,   170,  1342,   170,   169,
    1326,  1327,  1347,   246,   223,   170,   229,   170,  1203,   112,
     337,   286,   287,   288,   289,   290,   291,    38,   294,  1303,
     170,   170,  1749,  1890,   170,   170,  1352,   286,   287,   288,
     289,   290,   291,   170,  1303,   282,   283,   284,   285,   215,
     216,   217,   218,   219,   220,   164,   170,   170,   170,  1375,
     170,   227,   228,   229,   230,  1592,   170,   170,   174,   162,
     338,    23,   174,   171,  1410,   109,  1412,   233,  1618,  1415,
       0,     1,  1622,   152,   233,     3,  1626,   170,   169,   171,
     256,   171,   170,   170,  1410,   340,  1412,   170,   203,  1415,
     337,   171,  1418,   269,   279,  1421,    81,  1303,    78,   275,
    1637,   170,   278,  1429,   280,   253,   108,  1644,   131,   238,
     277,   269,   215,   216,   217,   218,   219,   220,   102,  1465,
     310,    51,   169,   169,   227,   228,   229,   230,   131,   276,
     170,   233,  1394,  1395,    64,    65,    66,    67,    20,  1465,
     257,   317,    98,  1761,    23,   316,    76,    77,    78,    79,
     261,   277,   316,   256,   264,    85,   337,   102,   108,   174,
    1521,   316,   177,   178,   179,   180,   181,   182,   183,   184,
    1496,   170,   275,   188,   155,   278,   337,   280,  1728,   143,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   101,   337,   171,  1521,   171,   283,   298,   308,
     130,   337,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,  1465,   106,   317,   286,   287,   288,   289,   290,
     291,   174,  1548,   131,   177,   178,   179,   180,   181,   182,
     183,   184,   337,  1770,   187,   188,   107,   171,   337,   169,
     170,   174,   171,  1589,   177,   178,   179,   180,   181,   182,
     183,   184,   328,   170,   187,   188,   170,   170,    87,   337,
    1848,  1587,   257,  1589,   108,  1848,    89,   254,   107,   311,
    1596,   253,   108,   108,   253,  1825,   171,   337,  1848,   171,
     171,   270,  1628,   261,  1772,   318,   171,   177,   178,   179,
     180,   181,   182,   183,   184,   261,   226,  1623,   188,  1917,
     261,   337,  1628,  1629,   234,   235,   171,   237,   171,   239,
     240,   241,   242,   243,   244,   245,   171,  1643,   248,   171,
     337,   171,  1648,   277,   254,   255,   337,   337,   171,  1866,
     171,   171,   170,   316,   171,   102,  1662,   171,   171,   337,
     270,   171,   158,   273,   170,   170,   170,   335,   336,   292,
     308,   171,    74,   341,    74,  1681,  1682,    71,   346,   170,
     102,   105,   102,   171,   101,  1853,   171,   171,   171,    16,
     316,   171,  1698,   262,  1911,   262,     3,   174,   231,   309,
     177,   178,   179,   180,   181,   182,   183,   184,   337,   231,
     187,   188,   260,   260,  1982,     3,   169,   263,   169,  1982,
     170,    76,   171,  1729,   316,   171,   140,   140,   171,  1662,
     171,   171,  1982,   277,   246,    74,   170,   102,  1744,   171,
     171,   324,   270,   170,   246,    82,   337,   337,   306,   304,
     169,   233,  1758,   232,   339,  1761,   125,   425,   233,   170,
     224,  1767,     5,     6,     7,   326,   434,   171,   171,   337,
     171,   337,   171,   170,   338,   171,   171,    20,   171,   159,
     337,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,   261,   261,   337,   261,   261,
     337,   188,  1808,   107,   225,   253,   170,  2032,   269,    52,
      53,    54,   170,   170,   268,   233,  2041,   298,   316,   170,
     107,  1827,   260,   168,   109,  1831,   262,  1833,    84,    84,
     107,   107,  1838,   107,  1767,   261,   261,  1843,   171,   332,
     332,   330,   337,  1849,     3,  1851,   514,   321,   258,   308,
     130,   338,   233,   269,   298,     5,   233,  1867,     5,   126,
     305,  1867,   297,  1867,  1870,   325,   338,   337,   151,  1867,
     148,   153,     3,   148,   316,  1867,   187,    59,  1884,   547,
     171,  1867,   130,     4,   127,   128,     4,  1867,   296,   170,
     110,   156,   171,  1867,   153,    60,   308,   150,   321,  1905,
     333,   308,   130,   308,   296,   261,   321,    61,   261,  1915,
     308,  1917,   580,   581,   582,   306,   298,   302,   304,   261,
     588,    64,   590,   332,  1930,  1931,  1932,  1933,    65,   170,
     314,    41,   130,  1303,   783,  1255,   604,   605,   606,   209,
     208,   331,  1021,   444,    36,  1924,  1050,   446,  1616,  1313,
     748,  2013,   620,   621,  1991,  1990,  1983,  1648,  2018,  1756,
    1923,  1639,  1756,  1494,   632,   633,   634,   635,  2021,  1975,
    1779,  1977,  1778,  1333,   445,   643,   644,   645,   646,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   690,     8,
     156,  1457,  2008,   671,   672,  1827,  1830,  1899,  2018,  1452,
    1282,  1393,  2018,   855,  2018,  2021,  1392,  1211,  1019,  1009,
    2018,   930,  1224,   640,   680,   678,  2018,   889,   417,   852,
    1603,  1133,  2018,   639,  1720,   642,   907,   669,  2018,   282,
     283,   284,   285,     3,  2018,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    35,   512,    18,    19,
     567,  1687,    22,    23,   851,   619,    26,    27,    28,  1869,
    1685,   911,  1540,  1373,   911,   553,  1701,  1362,    38,  1365,
    1547,    41,  1802,  1881,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,  1889,    -1,    55,    56,    57,    -1,   589,
      -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
     110,   111,    -1,   113,    -1,   115,   116,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,   134,   135,    -1,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,    -1,
     160,   161,   162,    -1,    -1,    -1,    -1,    -1,   168,   877,
     170,   171,   172,   881,    -1,    -1,    -1,    -1,    -1,   887,
      -1,    -1,    -1,   891,    -1,    -1,    -1,    -1,    -1,   189,
     190,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,
      -1,   909,    -1,    -1,   912,    -1,   206,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,
      -1,    -1,    -1,   223,    -1,    -1,    -1,   227,    -1,    -1,
      -1,    -1,    -1,   233,   942,   943,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,
     260,   969,    -1,   263,   264,    -1,   266,    -1,    -1,   269,
      -1,   271,    -1,    -1,    -1,   275,   276,   985,    -1,   987,
      -1,    -1,   282,   283,   284,   285,    -1,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
     300,   301,    -1,  1011,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1019,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      -1,   321,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,   342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    -1,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,  1133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    52,    53,    54,    -1,
      -1,    -1,  1150,    -1,    -1,    -1,  1154,    -1,    20,    -1,
      -1,  1159,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1182,  1183,  1184,  1185,    -1,    -1,
      52,    53,    54,    -1,  1192,    -1,    -1,    -1,    -1,    -1,
    1198,  1199,    -1,  1201,    -1,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,  1244,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,   115,   116,   117,    -1,
      -1,    -1,    -1,   122,   123,   282,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
      -1,   160,    -1,   162,  1362,    -1,    -1,  1365,    -1,   168,
     169,   170,    -1,   172,    -1,  1373,   282,   283,   284,   285,
      -1,    -1,  1380,    -1,    -1,  1383,    64,    65,    66,    67,
      -1,    -1,   107,    -1,  1392,  1393,  1394,  1395,    76,    77,
      78,    79,    -1,    -1,  1402,    -1,    -1,    85,    -1,   124,
      -1,    -1,    -1,   275,   129,   130,   215,   216,    -1,    -1,
     282,   283,   284,   285,   223,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,   171,   256,   173,    -1,
      -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,  1467,
     269,    -1,   271,    -1,    -1,    -1,   275,   276,    -1,    -1,
     279,    -1,    -1,   282,   283,   284,   285,    -1,    -1,    -1,
      -1,   169,   170,   292,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1505,    -1,   224,
     225,   226,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,
      -1,    -1,   321,   322,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,
     255,   340,    -1,   108,    -1,    -1,    -1,    -1,   226,  1547,
     265,    -1,    -1,   268,    -1,    -1,   234,   235,   273,   237,
      -1,    -1,    -1,   278,    -1,    -1,   131,    -1,    -1,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   254,   255,    -1,    -1,
      -1,  1579,    -1,  1581,    -1,    -1,  1584,    -1,    -1,    -1,
      -1,    -1,   270,    -1,    -1,   273,    -1,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1603,    -1,    -1,    -1,  1607,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1616,    -1,
      -1,    -1,   337,    -1,   189,   190,   191,   192,   193,    -1,
      -1,   309,   197,   198,   199,   200,   201,   171,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
      -1,   131,    -1,    -1,    -1,   189,   190,   191,   192,   193,
      -1,    -1,    -1,   197,   198,   199,   200,   201,    -1,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,    -1,    -1,    -1,    -1,  1683,  1684,  1685,    -1,  1687,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,    -1,  1701,    -1,    -1,    -1,    -1,    -1,   189,
     190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   199,
     200,   201,  1720,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1748,    -1,    -1,    -1,    -1,    -1,  1754,    -1,    -1,   189,
     190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   199,
     200,   201,   337,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,   337,    -1,    18,    19,    -1,    -1,    22,
      23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    66,    67,    68,    69,   337,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,  1869,    85,    -1,  1872,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
     103,    -1,  1890,    -1,   107,    -1,    -1,   110,   111,    -1,
     113,    -1,   115,   116,   117,  1903,    -1,   337,   121,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,    -1,   160,   161,   162,
      -1,    -1,    -1,    -1,    -1,   168,   169,   170,    -1,   172,
     173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,   190,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
     223,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,
     263,   264,    -1,   266,    -1,    -1,   269,    -1,   271,    -1,
      -1,    -1,   275,   276,    -1,    -1,   279,    -1,    -1,   282,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,   300,   301,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,   321,   322,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,     3,   342,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   107,    -1,    -1,   110,   111,    -1,   113,    -1,
     115,   116,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,   134,
     135,    -1,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,   162,    -1,    -1,
      -1,    -1,    -1,   168,    -1,   170,    -1,   172,   173,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     185,   186,    -1,    -1,   189,   190,    -1,    -1,    -1,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
      -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,   264,
      -1,   266,    -1,    -1,   269,    -1,   271,    -1,    -1,    -1,
     275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,   300,   301,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   340,     3,   342,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
     107,    -1,    -1,   110,   111,    -1,   113,    -1,   115,   116,
     117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,    -1,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,    -1,   160,   161,   162,    -1,    -1,    -1,    -1,
      -1,   168,   169,   170,    -1,   172,   173,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,   190,    -1,    -1,    -1,   194,   195,   196,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,
      -1,    -1,    -1,   260,    -1,    -1,   263,   264,    -1,   266,
      -1,    -1,   269,    -1,   271,    -1,    -1,    -1,   275,   276,
      -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,   301,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
      -1,    -1,    -1,    -1,   321,   322,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   340,     3,   342,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   107,    -1,
      -1,   110,   111,    -1,   113,    -1,   115,   116,   117,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132,   133,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
      -1,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,   168,
      -1,   170,    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   190,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,   206,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,
      -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,
      -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,    -1,
     269,    -1,   271,    -1,    -1,    -1,   275,   276,    -1,    -1,
      -1,    -1,    -1,   282,   283,   284,   285,    -1,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,   300,   301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,
      -1,    -1,   321,   322,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   340,     3,   342,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,   107,    -1,    -1,   110,
     111,    -1,   113,    -1,   115,   116,   117,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,    -1,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,    -1,   160,
     161,   162,    -1,    -1,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   190,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,    -1,
      -1,    -1,   223,    -1,    -1,    -1,   227,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,   260,
      -1,    -1,   263,   264,    -1,   266,    -1,    -1,   269,    -1,
     271,    -1,    -1,    -1,   275,   276,    -1,    -1,    -1,    -1,
      -1,   282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,
     301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,
     321,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,
       3,   342,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,
      23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,   110,   111,    -1,
     113,    -1,   115,   116,   117,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,    -1,   160,   161,   162,
      -1,    -1,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    -1,    -1,    -1,   189,   190,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
     223,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,
     263,   264,    -1,   266,    -1,    -1,   269,    -1,   271,    -1,
      -1,    -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,   300,   301,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,   321,   322,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,
      -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,     3,   342,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,   110,   111,    -1,   113,    -1,
     115,   116,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,   134,
     135,    -1,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,   162,    -1,    -1,
      -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,    -1,    -1,   189,   190,    -1,    -1,    -1,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,
      -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
      -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,   264,
      -1,   266,    -1,    -1,   269,    -1,   271,    -1,    -1,    -1,
     275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,   300,   301,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,   342,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,   110,   111,    -1,   113,
      -1,   115,   116,   117,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,    -1,
      -1,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   190,    -1,    -1,    -1,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,
      -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,
      -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,
     264,    -1,   266,    -1,    -1,   269,    -1,   271,    -1,    -1,
      -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,
     284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,   300,   301,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,   342,    22,
      23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,   110,   111,    -1,
     113,    -1,   115,   116,   117,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,    -1,   160,   161,   162,
      -1,    -1,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,   190,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
     223,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,
     263,   264,    -1,   266,    -1,    -1,   269,    -1,   271,    -1,
      -1,    -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,   300,   301,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,   321,   322,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,
      -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,     3,   342,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,   110,   111,    -1,   113,    -1,
     115,   116,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,   134,
     135,    -1,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,   162,    -1,    -1,
      -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   190,    -1,    -1,    -1,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
      -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,   264,
      -1,   266,    -1,    -1,   269,    -1,   271,    -1,    -1,    -1,
     275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,   300,   301,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,    -1,
      -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,    -1,    -1,
      -1,   336,    -1,    -1,    -1,    -1,     3,   342,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,   110,   111,    -1,   113,    -1,   115,   116,
     117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,    -1,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,    -1,   160,   161,   162,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   170,    -1,   172,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,   190,    -1,    -1,    -1,   194,   195,   196,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,
      -1,    -1,    -1,   260,    -1,    -1,   263,   264,    -1,   266,
      -1,    -1,   269,    -1,   271,    -1,    -1,    -1,   275,   276,
      -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,
     297,    -1,    -1,   300,   301,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
      -1,    -1,    -1,    -1,   321,   322,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,   342,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,   110,   111,    -1,   113,    -1,   115,
     116,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,
      -1,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,    -1,   160,   161,   162,    -1,    -1,    -1,
      -1,    -1,   168,    -1,   170,   171,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   189,   190,    -1,    -1,    -1,   194,   195,
     196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
     216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,
      -1,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
      -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,
     256,    -1,    -1,    -1,   260,    -1,    -1,   263,   264,    -1,
     266,    -1,    -1,   269,    -1,   271,    -1,    -1,    -1,   275,
     276,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,
      -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,
     296,    -1,    -1,    -1,   300,   301,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,    -1,    -1,    -1,    -1,   321,   322,    -1,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,   342,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,   110,   111,    -1,   113,    -1,
     115,   116,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,   134,
     135,    -1,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,   162,    -1,    -1,
      -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   190,    -1,    -1,    -1,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
      -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,   264,
      -1,   266,    -1,    -1,   269,    -1,   271,    -1,    -1,    -1,
     275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,   300,   301,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,   342,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,   110,   111,    -1,   113,
      -1,   115,   116,   117,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,   162,    -1,
      -1,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   190,    -1,    -1,    -1,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,
      -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,
      -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,
     264,    -1,   266,    -1,    -1,   269,    -1,   271,    -1,    -1,
      -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,
     284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,   300,   301,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,   342,    22,
      23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,   110,   111,    -1,
     113,    -1,   115,   116,   117,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,    -1,   160,   161,   162,
      -1,    -1,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,   190,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
     223,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,
     263,   264,    -1,   266,    -1,    -1,   269,    -1,   271,    -1,
      -1,    -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,   300,   301,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,   321,   322,
      -1,     3,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,   342,
      22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,   116,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,   133,   134,   135,    -1,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,    -1,   160,   161,
     162,    -1,    -1,    -1,    -1,    -1,   168,    -1,   170,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   190,    -1,
      -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,
      -1,   223,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,
      -1,   233,    -1,    -1,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,    -1,    -1,    -1,    -1,
      -1,   253,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,
      -1,   263,   264,    -1,   266,    -1,    -1,   269,    -1,   271,
      -1,    -1,    -1,   275,   276,    -1,    -1,    -1,    -1,    -1,
     282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,   296,   297,    -1,    -1,   300,   301,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,   321,
     322,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
     342,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,   110,
     111,    -1,   113,    -1,   115,   116,   117,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,    -1,   160,
     161,   162,    -1,    -1,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   190,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,    -1,
      -1,    -1,   223,    -1,    -1,    -1,   227,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,   260,
      -1,    -1,   263,   264,    -1,   266,    -1,    -1,   269,    -1,
     271,    -1,    -1,    -1,   275,   276,    -1,    -1,    -1,    -1,
      -1,   282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,
     301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,
     321,   322,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,   342,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
     110,   111,    -1,   113,    -1,   115,   116,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,   134,   135,    -1,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,    -1,
     160,   161,   162,    -1,    -1,    -1,    -1,    -1,   168,    -1,
     170,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
     190,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,
      -1,    -1,    -1,   223,    -1,    -1,    -1,   227,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    -1,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,
     260,    -1,    -1,   263,   264,    -1,   266,    -1,    -1,   269,
      -1,   271,    -1,    -1,    -1,   275,   276,    -1,    -1,    -1,
      -1,    -1,   282,   283,   284,   285,    -1,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
     300,   301,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    22,
      23,   321,   322,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,   342,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,   115,   116,   117,   131,    -1,    -1,    -1,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,    -1,   155,   156,   157,   158,    -1,   160,    -1,   162,
      -1,    -1,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
      -1,   197,   198,   199,   200,   201,    -1,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
     223,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,
     263,   264,    -1,   266,    -1,    -1,   269,    -1,   271,    -1,
      -1,    -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,   316,    -1,    -1,    -1,    -1,   321,   322,
      -1,   337,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    -1,    -1,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,   115,   116,   117,    -1,   131,    -1,    -1,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,    -1,   160,    -1,   162,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
      -1,   197,   198,   199,   200,   201,    -1,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    -1,   247,   248,    -1,    -1,    -1,    -1,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,
     264,    -1,   266,    -1,    -1,   269,   270,   271,   272,   273,
      -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,
     284,   285,   298,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,   299,    -1,    -1,   302,   303,
     304,    -1,    -1,    -1,    -1,   309,     5,     6,     7,     8,
       9,    10,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,   115,   116,   117,    -1,
     131,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
      -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,   189,   190,
     191,   192,   193,    -1,    -1,    -1,   197,   198,   199,   200,
     201,    -1,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,
      -1,    -1,    -1,    -1,   223,    -1,    -1,   226,   227,    -1,
      -1,    -1,    -1,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,   248,
      -1,    -1,    -1,    -1,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,    -1,
     269,   270,   271,   272,   273,    -1,   275,   276,    -1,    -1,
      -1,    -1,    -1,   282,   283,   284,   285,   298,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,   302,    -1,    -1,    -1,    -1,   307,    -1,
     309,     5,     6,     7,     8,     9,    10,   316,    -1,    -1,
      -1,    -1,   321,   322,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    -1,    -1,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,   115,   116,   117,    -1,    -1,   131,    -1,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,    -1,   160,    -1,   162,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,   189,   190,   191,   192,   193,    -1,
      -1,    -1,   197,   198,   199,   200,   201,    -1,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    -1,   247,   248,    -1,    -1,    -1,    -1,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,
     264,    -1,   266,    -1,    -1,   269,   270,   271,   272,   273,
      -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,
     284,   285,   297,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,   302,    -1,
      -1,    -1,    -1,   307,    -1,   309,     5,     6,     7,     8,
       9,    10,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,   115,   116,   117,    -1,
      -1,   131,    -1,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
      -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,   189,
     190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   199,
     200,   201,    -1,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,
      -1,    -1,    -1,    -1,   223,    -1,    -1,   226,   227,    -1,
      -1,    -1,    -1,    -1,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,   248,
      -1,    -1,    -1,    -1,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,    -1,
     269,   270,   271,   272,   273,    -1,   275,   276,    -1,    -1,
      -1,    -1,    -1,   282,   283,   284,   285,   297,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,   302,    -1,   304,    -1,    -1,    -1,    -1,
     309,     5,     6,     7,     8,     9,    10,   316,    -1,    -1,
      -1,    -1,   321,   322,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    -1,    -1,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,   115,   116,   117,   131,    -1,    -1,    -1,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,    -1,   160,    -1,   162,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    -1,
      -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
     197,   198,   199,   200,   201,    -1,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   259,   247,   248,    -1,    -1,    -1,    -1,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,
     264,    -1,   266,    -1,    -1,   269,   270,   271,   272,   273,
      -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,
     284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,   302,    -1,
      -1,    -1,    -1,    -1,   308,   309,     5,     6,     7,     8,
       9,    10,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,   104,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,   115,   116,   117,    -1,
     131,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
      -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,   189,   190,
     191,   192,   193,    -1,    -1,    -1,   197,   198,   199,   200,
     201,    -1,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,
      -1,    -1,    -1,    -1,   223,    -1,    -1,   226,   227,    -1,
      -1,    -1,    -1,    -1,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,   248,
      -1,    -1,    -1,    -1,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,    -1,
     269,   270,   271,   272,   273,    -1,   275,   276,    -1,    -1,
      -1,    -1,    -1,   282,   283,   284,   285,    -1,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,   302,    -1,    -1,    -1,    -1,    -1,    -1,
     309,     5,     6,     7,     8,     9,    10,   316,    -1,    -1,
      -1,    -1,   321,   322,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    -1,    -1,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,   115,   116,   117,    -1,    -1,    -1,   131,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,    -1,   160,   171,   162,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   190,   191,   192,   193,
      -1,    -1,    -1,   197,   198,   199,   200,   201,    -1,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,
      -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,
     264,    -1,   266,    -1,    -1,   269,   270,   271,   272,    -1,
      -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,
     284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,   302,    -1,
      -1,    -1,    -1,   307,    -1,   309,     5,     6,     7,     8,
       9,    10,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,   115,   116,   117,   131,
      -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
      -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,   172,    -1,    -1,    -1,   189,   190,   191,
     192,   193,    -1,    -1,    -1,   197,   198,   199,   200,   201,
      -1,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,
      -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,   254,   255,   256,    -1,    -1,
      -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,    -1,
     269,   270,   271,   272,    -1,    -1,   275,   276,    -1,    -1,
      -1,    -1,    -1,   282,   283,   284,   285,    -1,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,
     309,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,
      -1,    -1,   321,   322,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,   115,   116,   117,    -1,   131,    -1,
      -1,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,    -1,   160,
      -1,   162,    -1,    -1,    -1,    -1,    -1,   168,   181,    -1,
      -1,   172,    -1,    -1,    -1,    -1,   189,   190,   191,   192,
     193,    -1,    -1,    -1,   197,   198,   199,   200,   201,    -1,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   215,   216,   217,   218,   219,   220,
      -1,    -1,   223,    -1,    -1,    -1,   227,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,   260,
      -1,    -1,   263,   264,    -1,   266,    -1,    -1,   269,    -1,
     271,    -1,    -1,    -1,   275,   276,    -1,    -1,    -1,    -1,
      -1,   282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,   292,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   316,    -1,    -1,    -1,    -1,
     321,   322,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,   115,   116,   117,    -1,   131,    -1,    -1,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,    -1,   155,   156,   157,   158,   171,   160,    -1,   162,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,
      -1,    -1,    -1,    -1,   189,   190,   191,   192,   193,    -1,
      -1,    -1,   197,   198,   199,   200,   201,    -1,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
     223,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,
     263,   264,    -1,   266,    -1,    -1,   269,    -1,   271,    -1,
      -1,    -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   316,    -1,    -1,    -1,    -1,   321,   322,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
     115,   116,   117,    -1,   131,    -1,    -1,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,    -1,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   171,   160,    -1,   162,    -1,    -1,
      -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
     197,   198,   199,   200,   201,    -1,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   203,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
      -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,   264,
      -1,   266,    -1,    -1,   269,    -1,   271,    -1,    -1,    -1,
     275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,   292,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,   115,   116,
     117,    -1,   131,    -1,    -1,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,    -1,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,   171,   160,    -1,   162,    -1,    -1,    -1,    -1,
      -1,   168,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,
     189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
     199,   200,   201,    -1,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,
      -1,    -1,    -1,   260,    -1,    -1,   263,   264,    -1,   266,
      -1,    -1,   269,    -1,   271,    -1,    -1,    -1,   275,   276,
      -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,   292,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   316,
      -1,    -1,    -1,    -1,   321,   322,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,   115,   116,   117,    -1,
     131,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
     171,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,   189,   190,
     191,   192,   193,    -1,    -1,    -1,   197,   198,   199,   200,
     201,    -1,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,
      -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,
      -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,    -1,
     269,    -1,   271,    -1,    -1,    -1,   275,   276,    -1,    -1,
      -1,    -1,    -1,   282,   283,   284,   285,    -1,    -1,    -1,
      -1,    -1,    -1,   292,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,   316,    -1,    -1,
      -1,    -1,   321,   322,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,   115,   116,   117,    -1,   131,    -1,
      -1,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   171,   160,
      -1,   162,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,   172,    -1,    -1,    -1,    -1,   189,   190,   191,   192,
     193,    -1,    -1,    -1,   197,   198,   199,   200,   201,    -1,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,    -1,
      -1,    -1,   223,    -1,    -1,    -1,   227,   228,   229,   230,
      -1,    -1,   233,    -1,    -1,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,   260,
      -1,    -1,   263,   264,    -1,   266,    -1,    -1,   269,    -1,
     271,    -1,    -1,    -1,   275,   276,    -1,    -1,    -1,    -1,
      -1,   282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,   292,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   316,    -1,    -1,    -1,    -1,
     321,   322,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,   115,   116,   117,    -1,   131,    -1,    -1,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,    -1,   155,   156,   157,   158,   171,   160,    -1,   162,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,
      -1,    -1,    -1,    -1,   189,   190,   191,   192,   193,    -1,
      -1,    -1,   197,   198,   199,   200,   201,    -1,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
     223,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,
     263,   264,    -1,   266,    -1,    -1,   269,    -1,   271,    -1,
      -1,    -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   316,    -1,    -1,    -1,    -1,   321,   322,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
     115,   116,   117,   131,    -1,    -1,    -1,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,    -1,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,    -1,   160,    -1,   162,    -1,    -1,
      -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,    -1,
      -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
     198,   199,   200,   201,    -1,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
      -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,   264,
      -1,   266,    -1,    -1,   269,    -1,   271,    -1,    -1,    -1,
     275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,   292,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,   115,   116,
     117,    -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,    -1,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,    -1,   160,    -1,   162,    -1,    -1,    -1,    -1,
      -1,   168,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,
      -1,    -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,   225,    -1,
     227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,
      -1,    -1,    -1,   260,    -1,    -1,   263,   264,    -1,   266,
      -1,    -1,   269,    -1,   271,    -1,    -1,    -1,   275,   276,
      -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,   292,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   316,
      -1,    -1,    -1,    -1,   321,   322,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,   115,   116,   117,    -1,
      -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
      -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,
      -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,
      -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,    -1,
     269,   270,   271,    -1,    -1,    -1,   275,   276,    -1,    -1,
      -1,    -1,    -1,   282,   283,   284,   285,    -1,    -1,    -1,
      -1,    -1,    -1,   292,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,   316,    -1,    -1,
      -1,    -1,   321,   322,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,   115,   116,   117,    -1,    -1,    -1,
      -1,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,    -1,   160,
      -1,   162,    -1,    -1,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,    -1,
      -1,    -1,   223,    -1,    -1,    -1,   227,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,   260,
      -1,    -1,   263,   264,    -1,   266,    -1,    -1,   269,    -1,
     271,    -1,    -1,    -1,   275,   276,    -1,    -1,    -1,    -1,
      -1,   282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,   292,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   316,    -1,    -1,    -1,    -1,
     321,   322,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,   115,   116,   117,    -1,    -1,    -1,    -1,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,    -1,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,    -1,   155,   156,   157,   158,    -1,   160,    -1,   162,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
     223,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,
     263,   264,    -1,   266,    -1,    -1,   269,    -1,   271,    -1,
      -1,    -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   316,    -1,    -1,    -1,    -1,   321,   322,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
     115,   116,   117,    -1,    -1,    -1,    -1,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,    -1,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,    -1,   160,    -1,   162,    -1,    -1,
      -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
     225,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,   264,
      -1,   266,    -1,    -1,   269,    -1,   271,    -1,    -1,    -1,
     275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,   292,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,   115,   116,
     117,    -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,    -1,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,    -1,   160,    -1,   162,    -1,    -1,    -1,    -1,
      -1,   168,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,
      -1,    -1,    -1,   260,    -1,    -1,   263,   264,    -1,   266,
      -1,    -1,   269,    -1,   271,    -1,    -1,    -1,   275,   276,
      -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,   292,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   316,
      -1,    -1,    -1,    -1,   321,   322,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,   115,   116,   117,    -1,
      -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
      -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,
      -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,
      -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,    -1,
     269,    -1,   271,    -1,    -1,    -1,   275,   276,    -1,    -1,
      -1,    -1,    -1,   282,   283,   284,   285,    -1,    -1,    -1,
      -1,    -1,    -1,   292,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,   316,    -1,    -1,
      -1,    -1,   321,   322,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,   115,   116,   117,    -1,    -1,    -1,
      -1,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,    -1,   160,
      -1,   162,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,    -1,
      -1,    -1,   223,    -1,    -1,    -1,   227,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,   260,
      -1,    -1,   263,   264,    -1,   266,    -1,    -1,   269,    -1,
     271,    -1,    -1,    -1,   275,   276,    -1,    -1,    -1,    -1,
      -1,   282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,
     321,   322
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    64,    65,    66,    67,    76,    77,    78,
      79,    85,   130,   169,   170,   226,   234,   235,   237,   239,
     240,   241,   242,   243,   244,   245,   248,   254,   255,   270,
     273,   309,   344,   351,   352,   353,   354,   355,   357,   359,
     360,   369,   374,   386,   391,   392,   398,   443,   445,   453,
     474,   488,   492,   493,   494,   502,   517,   518,   519,   536,
     540,   541,   542,   545,   668,   130,   108,     5,     6,     7,
       8,     9,    10,    22,    23,    26,    38,    41,    52,    63,
      79,    82,    85,    91,    96,    97,    98,   110,   113,   115,
     116,   117,   122,   123,   139,   140,   143,   145,   146,   147,
     148,   149,   150,   151,   153,   155,   156,   157,   158,   160,
     162,   168,   172,   215,   216,   223,   227,   233,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   247,   253,
     256,   260,   263,   264,   266,   269,   271,   275,   276,   282,
     283,   284,   285,   292,   316,   321,   322,   633,   661,   662,
     186,   247,   528,   258,    80,   499,   499,   661,    78,    86,
     537,   538,   661,    66,   545,    67,    68,    69,   604,   605,
     606,   661,   633,   347,   346,   349,   350,   348,   345,     5,
      11,   666,   669,     5,     6,     7,     8,     9,    10,    64,
      65,    66,    67,   186,   245,   268,   309,   370,   377,   378,
     379,   381,   382,   383,   659,   660,   254,   257,   375,   376,
      58,    86,    55,   112,   275,    11,   170,   294,   438,   439,
     510,   536,   542,   649,   665,     0,    17,    55,    58,   112,
     162,   215,   216,   217,   218,   219,   220,   227,   228,   229,
     230,   256,   269,   275,   278,   280,   317,   399,   400,   403,
     404,   437,    55,   112,   162,   186,   227,   228,   229,   230,
     256,   269,   275,   280,   315,   317,   487,    55,    56,    57,
      63,   256,   269,   283,   630,   661,   215,   216,   275,   358,
     403,   435,   661,   130,   101,   165,   166,   167,   561,   130,
     633,   270,   338,     3,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    18,    19,    27,    28,    44,
      45,    46,    47,    48,    49,    50,    62,   103,   107,   111,
     121,   131,   132,   133,   134,   135,   137,   138,   141,   142,
     144,   154,   161,   170,   173,   189,   190,   194,   195,   196,
     203,   206,   282,   283,   284,   285,   296,   300,   301,   340,
     342,   524,   548,   559,   560,   568,   569,   570,   571,   573,
     575,   576,   578,   580,   582,   583,   584,   585,   586,   587,
     588,   589,   590,   603,   604,   607,   609,   610,   611,   613,
     614,   615,   616,   617,   630,   631,   632,   634,   635,   637,
     654,   657,   661,   667,   676,   677,   678,   679,   680,   694,
     701,   703,   706,   716,   717,   747,   633,   187,   500,   500,
     661,    87,    90,    96,   495,   496,   497,   337,   539,   542,
     170,   441,   442,   528,   171,   170,   338,   441,   355,   355,
     344,   344,   355,   355,   170,   441,   441,   266,   441,   108,
     258,   277,   337,   277,   337,   261,   337,   262,   262,   377,
     370,    86,   495,   270,   661,   633,   633,   438,   545,   649,
     258,    27,   258,   294,   310,   215,   216,   661,   215,   216,
     633,   229,   275,   275,   275,   275,   633,   633,   633,   633,
     661,   223,   361,   661,   633,   633,   633,   315,   275,   661,
     633,   229,   162,   228,   229,   230,   633,   633,   633,   633,
     661,   633,   633,   633,   633,   633,    42,    43,   491,   223,
     661,   661,   292,   174,   174,   337,     5,     6,     7,    20,
      24,    25,    26,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    52,    53,    54,   282,   283,   284,   285,   337,
     622,   629,   652,   654,   655,   656,   657,   102,   186,   247,
     546,   546,   546,   293,   562,   281,   531,   442,   529,   530,
     658,   661,   661,   667,   667,   667,   170,   170,    22,   170,
     608,   608,   608,   608,   608,   170,   584,   170,   122,   661,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   279,   536,   545,   559,   569,   577,   604,   661,
     569,   170,   586,   586,   170,   170,   170,   586,   667,   170,
     620,   170,   621,   189,   190,   618,   297,   586,   642,   643,
     170,   170,   569,   581,   108,   258,   549,   550,   316,   612,
     176,   174,   177,   178,   179,   180,   181,   182,   183,   184,
     187,   188,   633,   131,   189,   190,   191,   192,   193,   197,
     198,   199,   200,   201,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   259,   327,   338,   337,
     170,   170,   170,   667,   667,   338,   170,   246,   279,   439,
     442,   520,    81,    82,   277,   501,    88,    89,    91,    97,
     337,   538,   435,   316,   548,   171,   525,   586,   638,   606,
     661,   295,   564,   130,   130,   130,   130,   170,   171,   523,
     525,   527,   545,   267,   384,   385,   659,   659,   384,   379,
     162,   275,   380,   487,   633,   383,   109,   109,   108,   108,
     495,   251,   252,   401,   169,   250,   270,   387,   113,   114,
     115,   116,   117,   118,   119,   120,   123,   316,   394,   396,
     397,   248,   270,   273,   274,   171,   313,   667,   258,   633,
     649,   294,   169,    85,   316,   393,   395,   397,   633,   633,
     633,   633,   633,   232,   170,   170,   170,   169,   367,   362,
     661,   246,   363,   223,   170,   406,   407,   441,   441,   319,
     320,   475,   661,   633,   633,   229,   633,   633,   633,   491,
     170,   489,   489,   489,   491,   491,   491,   661,    58,   285,
     632,   661,   525,   435,   170,   170,    21,    22,   170,   170,
     170,    38,   170,   620,   621,   286,   287,   288,   289,   290,
     291,   623,   625,   627,   628,   661,   170,   170,   170,   170,
     565,   566,   586,   164,   547,   547,   547,   588,   648,   664,
     665,   294,   563,   559,   174,   337,   531,   174,   338,   559,
     636,   636,    23,   171,   291,   623,   624,   109,   586,   587,
     586,   673,   674,   675,   673,   233,   152,   695,   721,   149,
     151,   719,   233,     3,   707,   587,   112,   718,   719,   673,
     545,   170,   521,   171,   171,   171,   171,   337,   338,   586,
     586,   586,   666,   169,   619,   666,   619,   667,   559,   297,
     640,   641,   299,   642,   644,   586,   525,   639,   337,   341,
     170,   340,   532,   551,   552,   553,   584,   604,   633,   661,
     543,   544,   661,   531,   661,   559,   569,   574,   586,   574,
     574,   574,   170,   170,    99,   100,   572,   572,   560,   175,
     185,   186,   569,   579,   582,   586,   586,   586,   586,   586,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   174,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   107,
     173,   170,   203,   611,   171,   186,   203,   247,   586,   645,
     661,   645,     8,     9,    10,   203,   661,   279,   521,   520,
      81,    78,    87,    94,    95,   498,   666,   497,   171,   170,
     171,   337,    14,   588,   650,   664,   238,   356,   171,   337,
     169,   337,   372,   169,   371,   633,   384,   384,   253,   401,
     277,   269,   102,   169,   647,   665,   647,   647,   652,   396,
     225,   275,   276,   389,   390,    67,    87,   388,   390,   275,
     390,    16,   508,   509,   508,   633,   441,   310,   649,   401,
     169,   652,   395,   170,   406,   406,   406,   406,   233,   203,
     472,   473,   661,   472,   472,   257,    20,   264,   670,   671,
     362,   179,   225,   409,   410,   411,   413,   416,   424,   425,
     436,   658,   661,    98,   402,   316,   316,    64,    65,    67,
     476,   261,   406,   489,   633,   491,   491,   491,   171,   490,
     652,   652,   646,   666,   646,    23,   646,   646,   646,   666,
      53,   653,   667,   619,   619,   621,   620,   277,   646,   666,
     646,   646,   646,   337,   221,   222,   567,   102,   545,   545,
     545,   588,   650,   564,   584,   530,   559,   661,   316,   337,
     108,   633,   155,   720,   337,   720,   720,   661,   682,   170,
     586,   696,   697,   698,   337,   587,   661,   704,   143,   708,
     720,   673,   561,   171,   522,   525,   526,   171,   337,   181,
     182,   569,   337,   181,   108,   337,   171,   283,   667,   171,
     667,   628,   298,   586,   640,   644,   586,   308,   337,   337,
     171,   337,   569,   170,   532,   553,   554,   337,    68,    69,
      70,    72,    73,    74,    75,   163,   533,   534,   316,   555,
     661,   555,   555,   338,   337,   549,   106,   556,   104,   523,
     523,   569,   569,   584,   586,   107,   328,   591,   592,   645,
     171,   645,   171,   338,   337,   338,   661,    92,    93,    87,
     539,   525,   527,   257,   385,   108,   373,   254,   373,   373,
     373,   667,   253,   661,   661,   647,   584,   649,   661,   661,
     661,    89,    88,    89,   661,   633,   410,   107,   511,   311,
     511,   108,   108,   253,   649,   472,   261,   661,   171,   337,
     652,   171,   171,    56,    62,   368,   270,   661,   663,   672,
     351,   352,   364,   365,   366,   369,   374,   386,   391,   488,
     633,   661,   171,   337,   249,   265,   278,   433,   127,   128,
     412,   652,   169,   661,   438,   438,   318,   261,   633,   261,
     405,   491,   171,   337,   171,   171,   171,   171,   337,   171,
     337,   171,   337,   291,   623,   626,   171,   337,   171,   171,
     171,   566,   170,   652,   652,   586,   112,   151,   171,   673,
     171,   171,   337,   681,    82,   246,   586,   722,   723,   725,
     726,   727,   262,   337,   692,   316,   699,    83,   139,   702,
     337,   705,   102,   709,   729,   720,   171,   158,   730,   731,
     720,   171,   337,   170,   170,   170,   586,   586,   586,   586,
     292,   525,   298,   308,   586,   525,   525,   171,   545,   553,
      74,   533,    74,   553,   553,    74,    71,   661,   170,   661,
     544,   102,   105,   558,   667,   171,   171,   187,   187,   102,
     171,   101,   593,   171,   171,   203,   645,   661,   171,   262,
     368,   262,    16,   667,   491,   491,   491,   248,   270,   316,
     480,   667,   170,   515,   516,   667,   312,   515,   667,   171,
       3,    66,    79,    85,   232,   235,   272,   296,   302,   307,
     357,   359,   360,   369,   374,   386,   391,   446,   449,   451,
     452,   453,   457,   459,   465,   467,   468,   488,   492,   493,
     541,   661,   661,   231,   231,   661,   337,   366,   411,   661,
     260,   260,   442,   124,   129,   246,   414,   415,   418,   419,
     421,   422,   425,   263,     3,   169,   408,   169,   440,   435,
     661,   170,    76,   490,   651,   666,   666,   666,   621,   666,
     557,   634,   661,   171,   171,   171,   136,   586,   683,   689,
     690,   691,   721,   720,   246,   725,   171,   337,   316,   107,
     145,   147,   148,   693,   697,   720,   661,   700,   140,   140,
     171,   587,   720,   122,   146,   587,   710,   711,   712,   713,
     714,   729,   277,   171,   171,   526,   522,   523,   523,   337,
     171,   109,   171,   171,   337,   525,   171,   341,   553,    74,
     553,    16,   261,   535,   535,   553,   170,   663,   557,   559,
     569,   569,   557,   102,    84,   335,   594,   595,   171,   171,
     324,   270,   246,    98,   107,   173,   246,   667,   337,   516,
      82,   514,   337,   170,   505,   505,   233,   232,   528,   233,
     454,   455,   633,   275,   439,   458,   559,   297,   462,   463,
     586,   559,   306,   447,   304,   339,   652,   275,   471,   652,
     471,   661,   442,   442,   125,   420,   585,   418,   107,   173,
     224,   265,   268,   278,   432,   434,   170,    82,   168,   224,
     326,   477,   435,    64,    83,   248,   171,   171,   171,   171,
     171,   337,   338,   170,   337,   337,   692,   337,   171,   723,
     661,   724,   261,   261,   261,   261,   171,   171,   316,   728,
     729,   337,   107,   148,   715,   159,   171,   171,   171,   586,
     586,   586,   555,   553,   442,   559,   535,   663,   171,   565,
     183,   329,   336,   587,   596,   597,   598,   599,   253,   269,
       3,   107,   107,   420,   667,   171,   225,   667,   506,   507,
     661,   508,   508,   667,   233,   548,   444,   661,   170,   170,
     559,   299,   462,   464,   297,   460,   461,   298,   447,   449,
     559,   170,   232,   236,   446,   232,   236,   268,   316,   107,
     170,   260,   633,   417,   418,   168,   262,   323,   324,   478,
     479,   109,   482,   483,   171,    84,    84,   634,   661,   586,
     684,   685,   687,   689,   691,   683,   689,   107,    82,   107,
     107,   107,   661,   711,   261,   261,   171,    82,   157,   160,
     732,   733,   738,   171,   171,   171,   171,   597,   321,   332,
     332,   330,   602,   667,   661,   337,   171,   337,     3,   511,
     511,   269,   444,   338,   456,   586,   439,   298,   447,   308,
     586,   460,   464,   447,   449,   130,   305,   470,   658,   233,
       5,   233,     5,   633,   126,   559,   441,   171,   337,   275,
     321,   481,   275,   481,   479,   325,   297,   485,   171,   337,
     316,   686,   337,   151,   728,   148,   148,   153,   661,   739,
       3,   734,   735,    82,   150,   153,   740,   741,   743,   744,
     187,    82,   106,   329,   334,   667,   507,    59,   512,   512,
     661,   661,   171,   337,   171,   447,   449,   296,   298,   308,
     299,   303,   466,   130,   308,   447,   171,   337,   652,   444,
       4,   444,     4,   441,   170,   423,   171,   110,   431,   418,
     480,   480,   480,   480,   321,   322,   484,   559,   307,   357,
     359,   369,   374,   450,   451,   486,   492,   493,   541,   685,
     661,   688,   689,   156,   736,   736,   153,   661,   746,   735,
     745,   742,   743,   329,   336,   587,   600,   601,   333,   321,
      60,   513,   513,   586,   130,   447,   296,   447,   559,   308,
     308,   308,   658,   431,   393,    39,    40,    70,   430,   261,
     427,   428,   429,   661,   661,   661,   661,   306,   735,   737,
     321,   331,   332,    61,   514,   514,   298,   302,   304,   652,
     429,   171,    64,    65,   261,   428,   261,   427,   448,   314,
     503,   447,   469,   661,    42,    43,    82,   270,   426,   426,
     308,   450,   170,   466,    41,   107,   246,   130,   504,   649,
     171,   337,   649
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
      yyerror (m, YY_("syntax error: cannot back up")); \
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, m)
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
		  Type, Value, m); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvc *m)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, m)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    mvc *m;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (m);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvc *m)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, m)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    mvc *m;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, m);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, mvc *m)
#else
static void
yy_reduce_print (yyvsp, yyrule, m)
    YYSTYPE *yyvsp;
    int yyrule;
    mvc *m;
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , m);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, m); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, mvc *m)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, m)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    mvc *m;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (m);

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
int yyparse (mvc *m);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

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
yyparse (mvc *m)
#else
int
yyparse (m)
    mvc *m;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 620 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		if (m->sym) {
			append_symbol(m->sym->data.lval, (yyval.sym));
			(yyval.sym) = m->sym;
		} else {
			m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym);
		}
		YYACCEPT;
	}
    break;

  case 3:
#line 630 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 4:
#line 635 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[(3) - (4)].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[(3) - (4)].sym);
			  }
			  YYACCEPT;
			}
    break;

  case 5:
#line 644 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 6:
#line 649 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[(3) - (4)].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[(3) - (4)].sym);
			  }
			  YYACCEPT;
			}
    break;

  case 7:
#line 659 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 8:
#line 664 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[(3) - (4)].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[(3) - (4)].sym);
			  }
			  YYACCEPT;
			}
    break;

  case 9:
#line 674 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_dot;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 10:
#line 679 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[(3) - (4)].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[(3) - (4)].sym);
			  }
			  YYACCEPT;
			}
    break;

  case 11:
#line 689 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
			  if (m->scanner.mode == LINE_1) {
				yyerror(m, "SQL debugging only supported in interactive mode");
				YYABORT;
			  }
		  	  m->emod |= mod_debug;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 12:
#line 698 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 13:
#line 699 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 14:
#line 704 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 15:
#line 705 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym); YYACCEPT; }
    break;

  case 16:
#line 706 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 17:
#line 707 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 18:
#line 708 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 19:
#line 709 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYABORT; }
    break;

  case 32:
#line 736 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(2) - (5)].l));
		append_list(l, (yyvsp[(3) - (5)].l));
		append_symbol(l, (yyvsp[(4) - (5)].sym));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
    break;

  case 34:
#line 746 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 35:
#line 747 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 36:
#line 752 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[(2) - (2)].l)); }
    break;

  case 37:
#line 753 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 38:
#line 758 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(1) - (2)].l) );
		append_type(l, &(yyvsp[(2) - (2)].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 39:
#line 763 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l) );
		append_type(l, &(yyvsp[(4) - (4)].type) );
		(yyval.l) = append_symbol((yyvsp[(1) - (4)].l), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 40:
#line 771 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, (yyvsp[(2) - (4)].sval) );
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 41:
#line 776 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 42:
#line 784 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 43:
#line 792 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 44:
#line 800 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 45:
#line 808 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 46:
#line 814 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 47:
#line 823 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (6)].l));
		append_symbol(l, (yyvsp[(4) - (6)].sym));
		append_symbol(l, (yyvsp[(5) - (6)].sym));
		append_list(l, (yyvsp[(6) - (6)].l));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
    break;

  case 48:
#line 830 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_int(l, (yyvsp[(4) - (4)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
    break;

  case 49:
#line 838 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (1)].sval) );
	  append_string((yyval.l), NULL ); }
    break;

  case 50:
#line 842 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[(2) - (2)].sval) ); }
    break;

  case 51:
#line 846 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (3)].sval) );
	  append_string((yyval.l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 53:
#line 855 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 54:
#line 856 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[(4) - (4)].sval) ); }
    break;

  case 55:
#line 860 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 57:
#line 865 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 58:
#line 867 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 64:
#line 873 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 65:
#line 874 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 66:
#line 878 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 67:
#line 879 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_role; }
    break;

  case 68:
#line 884 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
    break;

  case 69:
#line 894 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
    break;

  case 70:
#line 903 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 71:
#line 905 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 72:
#line 909 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 73:
#line 910 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 74:
#line 914 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 75:
#line 915 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 76:
#line 920 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 77:
#line 921 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 78:
#line 926 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
    break;

  case 79:
#line 934 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
    break;

  case 80:
#line 943 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 81:
#line 944 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 82:
#line 948 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 83:
#line 949 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 84:
#line 954 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (1)].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
    break;

  case 85:
#line 958 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (3)].l));
	  append_symbol((yyval.l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 86:
#line 964 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(L(), (yyvsp[(1) - (1)].i_val)); }
    break;

  case 87:
#line 966 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(append_int(L(), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val)); }
    break;

  case 88:
#line 970 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
    break;

  case 89:
#line 971 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
    break;

  case 90:
#line 975 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(2) - (2)].l)); }
    break;

  case 91:
#line 976 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[(1) - (1)].l)); }
    break;

  case 92:
#line 977 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[(1) - (1)].l)); }
    break;

  case 93:
#line 988 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 94:
#line 989 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 96:
#line 994 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 97:
#line 996 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 98:
#line 1000 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
    break;

  case 99:
#line 1001 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
    break;

  case 100:
#line 1002 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[(2) - (2)].l)); }
    break;

  case 101:
#line 1003 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 102:
#line 1004 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 103:
#line 1005 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
    break;

  case 104:
#line 1009 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 105:
#line 1011 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 106:
#line 1015 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 107:
#line 1016 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 108:
#line 1024 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 109:
#line 1029 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, (yyvsp[(6) - (6)].l)));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 110:
#line 1034 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 111:
#line 1039 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 112:
#line 1044 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 113:
#line 1049 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 114:
#line 1054 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 115:
#line 1059 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (4)].sval));
	  append_list(l, (yyvsp[(4) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 116:
#line 1064 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
    break;

  case 117:
#line 1069 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  dlist *p = L();
	  append_string(l, NULL);
	  append_string(p, (yyvsp[(6) - (10)].sval));
	  append_string(p, NULL);
	  append_int(p, (yyvsp[(4) - (10)].i_val));
	  append_string(p, (yyvsp[(10) - (10)].sval));
	  append_list(l, p);
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 118:
#line 1081 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (4)].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[(2) - (4)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 119:
#line 1087 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 120:
#line 1094 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (7)].sval));
				  append_string(l, (yyvsp[(7) - (7)].sval));
				  append_int(l, (yyvsp[(2) - (7)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 121:
#line 1104 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
    break;

  case 122:
#line 1109 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
    break;

  case 123:
#line 1113 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
    break;

  case 124:
#line 1117 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[(2) - (4)].sval)); }
    break;

  case 125:
#line 1119 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  if (!strlen((yyvsp[(5) - (5)].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 126:
#line 1127 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 127:
#line 1135 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
    break;

  case 128:
#line 1140 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
    break;

  case 129:
#line 1145 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 130:
#line 1152 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 131:
#line 1153 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 132:
#line 1157 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 133:
#line 1158 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 134:
#line 1159 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 140:
#line 1181 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
    break;

  case 141:
#line 1192 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (3)].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
    break;

  case 142:
#line 1209 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
    break;

  case 143:
#line 1218 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 144:
#line 1219 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 145:
#line 1223 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 146:
#line 1224 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 147:
#line 1228 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 148:
#line 1229 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 149:
#line 1230 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 150:
#line 1234 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 151:
#line 1235 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
    break;

  case 152:
#line 1236 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[(3) - (3)].l_val)));  }
    break;

  case 153:
#line 1237 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[(3) - (3)].sym)));  }
    break;

  case 154:
#line 1238 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 155:
#line 1242 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 156:
#line 1243 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 157:
#line 1244 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
    break;

  case 158:
#line 1245 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 159:
#line 1246 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
    break;

  case 160:
#line 1247 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 161:
#line 1248 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
    break;

  case 162:
#line 1249 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
    break;

  case 163:
#line 1257 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (9)].sval));
	  append_int(l, (yyvsp[(2) - (9)].i_val));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
    break;

  case 164:
#line 1266 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 165:
#line 1267 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 166:
#line 1288 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval));
	  append_int(l, (yyvsp[(3) - (3)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
    break;

  case 167:
#line 1293 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (10)].sval));
	  append_string(l, (yyvsp[(6) - (10)].sval));
	  append_string(l, (yyvsp[(8) - (10)].sval));
	  append_string(l, (yyvsp[(10) - (10)].sval));
	  append_int(l, (yyvsp[(4) - (10)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
    break;

  case 168:
#line 1303 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 169:
#line 1304 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 170:
#line 1305 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
    break;

  case 171:
#line 1309 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 172:
#line 1310 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 173:
#line 1315 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, SQL_PERSIST);
	  append_list(l, (yyvsp[(2) - (4)].l));
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, (yyvsp[(4) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 174:
#line 1326 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_STREAM;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 175:
#line 1336 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_MERGE_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 176:
#line 1346 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_REPLICA_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 177:
#line 1359 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_REMOTE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(4) - (6)].sym));
	  append_int(l, commit_action);
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 178:
#line 1369 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, (yyvsp[(1) - (5)].i_val));
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  if ((yyvsp[(1) - (5)].i_val) != SQL_PERSIST)
		commit_action = (yyvsp[(5) - (5)].i_val);
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 179:
#line 1383 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 180:
#line 1384 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 181:
#line 1385 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 182:
#line 1386 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 183:
#line 1387 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 184:
#line 1388 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 185:
#line 1392 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_COMMIT; }
    break;

  case 186:
#line 1393 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DELETE; }
    break;

  case 187:
#line 1394 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_PRESERVE; }
    break;

  case 188:
#line 1395 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DROP; }
    break;

  case 189:
#line 1399 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[(2) - (3)].l)); }
    break;

  case 190:
#line 1400 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[(1) - (1)].l)); }
    break;

  case 191:
#line 1408 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (4)].l));
			  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym)); 
			  append_int((yyval.l), (yyvsp[(4) - (4)].i_val)); }
    break;

  case 192:
#line 1414 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 193:
#line 1415 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 194:
#line 1416 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 195:
#line 1421 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 196:
#line 1423 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 202:
#line 1430 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 203:
#line 1431 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 204:
#line 1436 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
			dlist *l = L();
			append_string(l, (yyvsp[(1) - (3)].sval));
			append_type(l, &(yyvsp[(2) - (3)].type));
			append_list(l, (yyvsp[(3) - (3)].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 205:
#line 1444 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { /* SERIAL = INTEGER GENERATED ALWAYS AS IDENTITY PRIMARY KEY */
			/* handle multi-statements by wrapping them in a list */
			sql_subtype it;
			dlist* stmts;
			/* note: sql_next_seq_name uses sa_alloc */
			str sn = sql_next_seq_name(m);
			dlist *p; /* primary key */
			/* sequence generation code */
			dlist *l = L();
			/* finally all the options */
			dlist *o = L();

			/* the name of the sequence */
			dlist *seqn1 = L(), *seqn2 = L();

			if (m->scanner.schema)
				append_string(seqn1, m->scanner.schema);
			append_list(l, append_string(seqn1, sn));
			if ((yyvsp[(2) - (2)].i_val) == 1)
				sql_find_subtype(&it, "bigint", 64, 0);
			else
				sql_find_subtype(&it, "int", 32, 0);
    			append_symbol(o, _symbol_create_list(SQL_TYPE, append_type(L(),&it)));
			append_list(l, o);
			append_int(l, 1); /* to be dropped */

			if (m->sym) {
				stmts = m->sym->data.lval;
			} else {
				stmts = L();
				m->sym = _symbol_create_list(SQL_MULSTMT, stmts);
			}	
			append_symbol(stmts, _symbol_create_list(SQL_CREATE_SEQ, l));

			l = L();
			append_string(l, (yyvsp[(1) - (2)].sval));
			append_type(l, &it);
			o = L();
			if (m->scanner.schema)
				append_string(seqn2, m->scanner.schema);
			append_string(seqn2, sn);
			append_symbol(o, _symbol_create_symbol(SQL_DEFAULT, _symbol_create_list(SQL_NEXT, seqn2)));
			p = L();
			append_string(p, NULL);
			append_symbol(p, _symbol_create(SQL_PRIMARY_KEY, NULL));
			append_symbol(o, _symbol_create_list(SQL_CONSTRAINT, p));
			append_list(l, o);
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 206:
#line 1496 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 208:
#line 1502 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 209:
#line 1504 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 210:
#line 1510 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (6)].sval) );
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
    break;

  case 211:
#line 1518 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 212:
#line 1520 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 216:
#line 1526 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 217:
#line 1530 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 218:
#line 1536 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 219:
#line 1544 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		/* handle multi-statements by wrapping them in a list */
		sql_subtype it;
		dlist* stmts;
		/* note: sql_next_seq_name uses sa_alloc */
		str sn = sql_next_seq_name(m);
		/* sequence generation code */
		dlist *l = L();
		/* the name of the sequence */
		append_list(l, append_string(L(), sn));
		if (!(yyvsp[(5) - (5)].l))
			(yyvsp[(5) - (5)].l) = L();
		sql_find_subtype(&it, "int", 32, 0);
    		append_symbol((yyvsp[(5) - (5)].l), _symbol_create_list(SQL_TYPE, append_type(L(),&it)));

		/* finally all the options */
		append_list(l, (yyvsp[(5) - (5)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, _symbol_create_list(SQL_NEXT, append_string(L(), sn)));

		if (m->sym) {
			stmts = m->sym->data.lval;
		} else {
			stmts = L();
			m->sym = _symbol_create_list(SQL_MULSTMT, stmts);
		}	
		append_symbol(stmts, _symbol_create_list(SQL_CREATE_SEQ, l));
	}
    break;

  case 220:
#line 1573 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		/* handle multi-statements by wrapping them in a list */
		sql_subtype it;
		dlist* stmts;
		/* note: sql_next_seq_name uses sa_alloc */
		str sn = sql_next_seq_name(m);
		/* sequence generation code */
		dlist *l = L();
		/* finally all the options */
		dlist *o = L();

		/* the name of the sequence */
		dlist *seqn1 = L(), *seqn2 = L();

		if (m->scanner.schema)
			append_string(seqn1, m->scanner.schema);
		append_list(l, append_string(seqn1, sn));
		sql_find_subtype(&it, "int", 32, 0);
    		append_symbol(o, _symbol_create_list(SQL_TYPE, append_type(L(),&it)));
		append_list(l, o);
		append_int(l, 0); /* to be dropped */
		if (m->scanner.schema)
			append_string(seqn2, m->scanner.schema);
		append_string(seqn2, sn);
		(yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, _symbol_create_list(SQL_NEXT, seqn2));

		if (m->sym) {
			stmts = m->sym->data.lval;
		} else {
			stmts = L();
			m->sym = _symbol_create_list(SQL_MULSTMT, stmts);
		}	
		append_symbol(stmts, _symbol_create_list(SQL_CREATE_SEQ, l));
	}
    break;

  case 221:
#line 1610 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 222:
#line 1611 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 223:
#line 1618 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 224:
#line 1627 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 225:
#line 1628 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 226:
#line 1632 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 227:
#line 1633 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 228:
#line 1634 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 229:
#line 1635 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 230:
#line 1636 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 231:
#line 1640 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(3) - (3)].i_val) << 8); }
    break;

  case 232:
#line 1644 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 233:
#line 1648 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
    break;

  case 234:
#line 1649 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 235:
#line 1650 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 236:
#line 1651 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 237:
#line 1652 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 238:
#line 1656 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 239:
#line 1657 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 240:
#line 1658 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 241:
#line 1659 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 242:
#line 1663 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 243:
#line 1664 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 244:
#line 1668 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
    break;

  case 245:
#line 1669 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
    break;

  case 246:
#line 1670 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
    break;

  case 247:
#line 1671 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
    break;

  case 248:
#line 1674 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(2) - (5)].l) );
			  append_list(l, (yyvsp[(3) - (5)].l) );
			  append_int(l, (yyvsp[(4) - (5)].i_val) );
			  append_int(l, (yyvsp[(5) - (5)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 250:
#line 1687 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[(2) - (2)].l)); }
    break;

  case 251:
#line 1689 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[(3) - (3)].l)); }
    break;

  case 252:
#line 1693 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(5) - (8)].l) );
			  append_list(l, (yyvsp[(3) - (8)].l) );
			  append_list(l, (yyvsp[(6) - (8)].l) );
			  append_int(l, (yyvsp[(7) - (8)].i_val) );
			  append_int(l, (yyvsp[(8) - (8)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 253:
#line 1705 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 254:
#line 1710 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 255:
#line 1712 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 256:
#line 1716 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 257:
#line 1721 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_int(l, (yyvsp[(6) - (6)].bval));
	  append_int(l, TRUE);	/* persistent view */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 259:
#line 1733 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 262:
#line 1742 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 263:
#line 1743 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 264:
#line 1747 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 266:
#line 1752 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 267:
#line 1757 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				append_list(l, (yyvsp[(3) - (6)].l));
				append_string(l, (yyvsp[(6) - (6)].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
    break;

  case 268:
#line 1764 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 269:
#line 1772 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (11)].l));
				append_list(f, (yyvsp[(5) - (11)].l));
				append_symbol(f, (yyvsp[(8) - (11)].sym));
				append_list(f, (yyvsp[(11) - (11)].l));
				append_list(f, NULL);
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_MAL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 270:
#line 1785 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (9)].l));
				append_list(f, (yyvsp[(5) - (9)].l));
				append_symbol(f, (yyvsp[(8) - (9)].sym));
				append_list(f, NULL);
				append_list(f, (yyvsp[(9) - (9)].l));
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_SQL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 271:
#line 1797 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(10) - (11)].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'C' || l == 'c')
				lang = FUNC_LANG_C;
			else if (l == 'J' || l == 'j')
				lang = FUNC_LANG_J;
			else {
				char *msg = sql_message("Language name R, C, or J(avascript):expected, received '%c'", l);
				yyerror(m, msg);
				_DELETE(msg);
			}

			append_list(f, (yyvsp[(3) - (11)].l));
			append_list(f, (yyvsp[(5) - (11)].l));
			append_symbol(f, (yyvsp[(8) - (11)].sym));
			append_list(f, NULL); 
			append_list(f, append_string(L(), (yyvsp[(11) - (11)].sval)));
			append_int(f, F_FUNC);
			append_int(f, lang);
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 272:
#line 1825 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(4) - (10)].l));
				append_list(f, (yyvsp[(6) - (10)].l)); 
				/* no returns - use OID */
				append_symbol(f, NULL); 
				append_list(f, (yyvsp[(10) - (10)].l));
				append_list(f, NULL);
				append_int(f, F_FILT);
				append_int(f, FUNC_LANG_MAL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 273:
#line 1839 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (11)].l));
				append_list(f, (yyvsp[(5) - (11)].l));
				append_symbol(f, (yyvsp[(8) - (11)].sym));
				append_list(f, (yyvsp[(11) - (11)].l));
				append_list(f, NULL);
				append_int(f, F_AGGR);
				append_int(f, FUNC_LANG_MAL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 274:
#line 1851 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(10) - (11)].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'C' || l == 'c')
				lang = FUNC_LANG_C;
			else if (l == 'J' || l == 'j')
				lang = FUNC_LANG_J;
			else {
				char *msg = sql_message("Language name R, C, or J(avascript):expected, received '%c'", l);
				yyerror(m, msg);
				_DELETE(msg);
			}

			append_list(f, (yyvsp[(3) - (11)].l));
			append_list(f, (yyvsp[(5) - (11)].l));
			append_symbol(f, (yyvsp[(8) - (11)].sym));
			append_list(f, NULL);
			append_list(f, append_string(L(), (yyvsp[(11) - (11)].sval)));
			append_int(f, F_AGGR);
			append_int(f, lang);
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 275:
#line 1880 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (9)].l));
				append_list(f, (yyvsp[(5) - (9)].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, (yyvsp[(9) - (9)].l));
				append_list(f, NULL);
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_MAL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 276:
#line 1892 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (7)].l));
				append_list(f, (yyvsp[(5) - (7)].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, NULL); 
				append_list(f, (yyvsp[(7) - (7)].l));
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_SQL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 277:
#line 1905 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[(1) - (1)].sym)); }
    break;

  case 278:
#line 1909 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(2) - (5)].l),(yyvsp[(3) - (5)].sym)); }
    break;

  case 279:
#line 1913 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(3) - (6)].l),(yyvsp[(4) - (6)].sym)); }
    break;

  case 280:
#line 1928 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 281:
#line 1930 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 282:
#line 1934 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 283:
#line 1936 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 310:
#line 1984 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 311:
#line 1988 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[(2) - (2)].sym));}
    break;

  case 312:
#line 1993 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L(); 
		  append_list( l, (yyvsp[(1) - (4)].l));
		  append_list( l, (yyvsp[(3) - (4)].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
    break;

  case 314:
#line 2004 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = L();}
    break;

  case 315:
#line 2005 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 316:
#line 2007 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 317:
#line 2012 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[(2) - (2)].sym)); }
    break;

  case 320:
#line 2019 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[(3) - (4)].sym)); }
    break;

  case 321:
#line 2024 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (6)].sym)),(yyvsp[(3) - (6)].l)),(yyvsp[(4) - (6)].l))); }
    break;

  case 322:
#line 2030 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[(2) - (5)].l)),(yyvsp[(3) - (5)].l))); }
    break;

  case 323:
#line 2038 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 324:
#line 2046 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 325:
#line 2048 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 326:
#line 2053 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 327:
#line 2061 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 328:
#line 2063 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 329:
#line 2067 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 330:
#line 2068 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 331:
#line 2078 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (7)].sym));
		  append_list(l, (yyvsp[(4) - (7)].l));
		  append_symbol(l, (yyvsp[(5) - (7)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
    break;

  case 332:
#line 2089 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 333:
#line 2091 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[(2) - (2)].l)); }
    break;

  case 334:
#line 2094 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  append_symbol(l, (yyvsp[(5) - (5)].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
    break;

  case 335:
#line 2108 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l;
		  char *label = (yyvsp[(1) - (8)].sval)?(yyvsp[(1) - (8)].sval):(yyvsp[(8) - (8)].sval);
		  if ((yyvsp[(1) - (8)].sval) && (yyvsp[(8) - (8)].sval) && strcmp((yyvsp[(1) - (8)].sval), (yyvsp[(8) - (8)].sval)) != 0) {
			(yyval.sym) = NULL;
			yyerror(m, "WHILE: labels should match");
			YYABORT;
		  }
 		  l = L();
		  append_symbol(l, (yyvsp[(3) - (8)].sym)); /* condition */
		  append_list(l, (yyvsp[(5) - (8)].l));	/* statements */
		  append_string(l, label);
		  (yyval.sym) = _symbol_create_list(SQL_WHILE, l);
		}
    break;

  case 336:
#line 2124 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 338:
#line 2129 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 340:
#line 2135 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[(1) - (2)].sval));
			  	  append_type((yyval.l), &(yyvsp[(2) - (2)].type));
				}
    break;

  case 341:
#line 2140 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
				  append_string((yyval.l), (yyvsp[(3) - (4)].sval));
			  	  append_type((yyval.l), &(yyvsp[(4) - (4)].type));
				}
    break;

  case 342:
#line 2148 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(3) - (4)].l)); }
    break;

  case 343:
#line 2150 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(1) - (1)].type))); }
    break;

  case 345:
#line 2155 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
    break;

  case 346:
#line 2159 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 347:
#line 2164 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *p = L();
			  append_string(p, (yyvsp[(3) - (4)].sval));
			  append_type(p, &(yyvsp[(4) - (4)].type));
			  (yyval.l) = append_list((yyvsp[(1) - (4)].l), p); }
    break;

  case 348:
#line 2169 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[(1) - (2)].sval));
			  append_type(p, &(yyvsp[(2) - (2)].type));
			  (yyval.l) = append_list(l, p); }
    break;

  case 349:
#line 2219 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (9)].l));
	  append_int(l, (yyvsp[(4) - (9)].i_val));
	  append_symbol(l, (yyvsp[(5) - (9)].sym));
	  append_string(l, (yyvsp[(7) - (9)].sval));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  append_list(l, (yyvsp[(9) - (9)].l));
	  (yyval.sym) = _symbol_create_list(SQL_CREATE_TRIGGER, l); 
	}
    break;

  case 350:
#line 2231 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 351:
#line 2232 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 352:
#line 2236 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
    break;

  case 353:
#line 2237 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
    break;

  case 354:
#line 2238 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
    break;

  case 355:
#line 2239 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[(3) - (3)].l)); }
    break;

  case 356:
#line 2243 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 357:
#line 2244 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 358:
#line 2248 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 359:
#line 2250 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].l)); }
    break;

  case 360:
#line 2255 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 361:
#line 2256 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 362:
#line 2257 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 363:
#line 2258 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 368:
#line 2273 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[(1) - (3)].i_val));
	  append_symbol((yyval.l), (yyvsp[(2) - (3)].sym));
	  append_list((yyval.l), (yyvsp[(3) - (3)].l));
	}
    break;

  case 369:
#line 2280 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 370:
#line 2281 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 371:
#line 2285 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 372:
#line 2286 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 373:
#line 2290 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 374:
#line 2291 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 375:
#line 2296 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 376:
#line 2299 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 377:
#line 2304 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
    break;

  case 378:
#line 2310 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );	
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
    break;

  case 379:
#line 2316 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
    break;

  case 380:
#line 2322 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
    break;

  case 381:
#line 2331 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 382:
#line 2336 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = (yyvsp[(2) - (3)].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 383:
#line 2341 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 384:
#line 2349 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(6) - (6)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 385:
#line 2357 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 386:
#line 2365 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 387:
#line 2373 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
    break;

  case 388:
#line 2378 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
    break;

  case 389:
#line 2382 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 390:
#line 2383 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 391:
#line 2384 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[(3) - (3)].l) ); }
    break;

  case 392:
#line 2385 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, (yyvsp[(3) - (3)].l) ); }
    break;

  case 393:
#line 2389 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = NULL;}
    break;

  case 394:
#line 2390 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = (yyvsp[(2) - (3)].l);}
    break;

  case 395:
#line 2391 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = L(); }
    break;

  case 396:
#line 2395 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_type(l, &(yyvsp[(1) - (1)].type) );
				  (yyval.l)= l; }
    break;

  case 397:
#line 2398 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { append_type((yyvsp[(3) - (3)].l), &(yyvsp[(1) - (3)].type));
				  (yyval.l) = (yyvsp[(3) - (3)].l); }
    break;

  case 398:
#line 2403 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 399:
#line 2404 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 400:
#line 2405 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 407:
#line 2424 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	  (yyval.sym) = (yyvsp[(1) - (1)].sym);
	  m->type = Q_TRANS;					}
    break;

  case 408:
#line 2431 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[(3) - (3)].bval));  }
    break;

  case 409:
#line 2433 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[(2) - (2)].sval)); }
    break;

  case 410:
#line 2435 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[(3) - (3)].sval)); }
    break;

  case 411:
#line 2437 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[(3) - (4)].bval)), (yyvsp[(4) - (4)].sval) )); }
    break;

  case 412:
#line 2441 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 413:
#line 2443 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(4) - (4)].i_val)); }
    break;

  case 414:
#line 2445 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 415:
#line 2449 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; }
    break;

  case 417:
#line 2455 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 418:
#line 2457 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(1) - (3)].i_val) | (yyvsp[(3) - (3)].i_val)); }
    break;

  case 419:
#line 2462 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_readonly; }
    break;

  case 420:
#line 2463 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_writable; }
    break;

  case 421:
#line 2464 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_serializable; }
    break;

  case 422:
#line 2465 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; /* not supported */ }
    break;

  case 427:
#line 2476 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 428:
#line 2477 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 429:
#line 2481 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 430:
#line 2482 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 431:
#line 2483 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 432:
#line 2487 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 433:
#line 2488 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 434:
#line 2493 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (14)].l));
	  append_list(l, (yyvsp[(5) - (14)].l));
	  append_list(l, (yyvsp[(7) - (14)].l));
	  append_list(l, (yyvsp[(8) - (14)].l));
	  append_list(l, (yyvsp[(9) - (14)].l));
	  append_list(l, (yyvsp[(2) - (14)].l));
	  append_string(l, (yyvsp[(10) - (14)].sval));
	  append_int(l, (yyvsp[(11) - (14)].bval));
	  append_int(l, (yyvsp[(12) - (14)].bval));
	  append_int(l, (yyvsp[(13) - (14)].bval));
	  append_list(l, (yyvsp[(14) - (14)].l));
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
    break;

  case 435:
#line 2507 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (13)].l));
	  append_list(l, (yyvsp[(5) - (13)].l));
	  append_list(l, NULL);
	  append_list(l, (yyvsp[(8) - (13)].l));
	  append_list(l, (yyvsp[(9) - (13)].l));
	  append_list(l, (yyvsp[(2) - (13)].l));
	  append_string(l, (yyvsp[(10) - (13)].sval));
	  append_int(l, (yyvsp[(11) - (13)].bval));
	  append_int(l, (yyvsp[(12) - (13)].bval));
	  append_int(l, (yyvsp[(13) - (13)].bval));
	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
    break;

  case 436:
#line 2521 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  if ((yyvsp[(2) - (8)].l) != NULL) {
	  	yyerror(m, "COPY INTO: cannot pass number of records when using binary COPY INTO");
		YYABORT;
	  }
	  append_list(l, (yyvsp[(5) - (8)].l));
	  append_list(l, (yyvsp[(7) - (8)].l));
	  append_int(l, (yyvsp[(8) - (8)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_BINCOPYFROM, l ); }
    break;

  case 437:
#line 2531 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 438:
#line 2538 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 439:
#line 2547 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 440:
#line 2548 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 441:
#line 2553 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(L(), (yyvsp[(1) - (1)].l_val)); }
    break;

  case 442:
#line 2555 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l_val)); }
    break;

  case 443:
#line 2559 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 444:
#line 2560 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 445:
#line 2564 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 446:
#line 2565 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 447:
#line 2570 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (1)].sval) );
			  (yyval.l) = l; }
    break;

  case 448:
#line 2574 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (2)].sval) );
			  append_string(l, (yyvsp[(2) - (2)].sval) );
			  (yyval.l) = l; }
    break;

  case 449:
#line 2582 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 450:
#line 2587 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 451:
#line 2592 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (5)].sval));
				  append_string(l, (yyvsp[(5) - (5)].sval));
				  (yyval.l) = l; }
    break;

  case 452:
#line 2597 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (7)].sval));
				  append_string(l, (yyvsp[(5) - (7)].sval));
				  append_string(l, sql2str((yyvsp[(7) - (7)].sval)));
				  (yyval.l) = l; }
    break;

  case 453:
#line 2605 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 454:
#line 2606 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 455:
#line 2610 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 456:
#line 2611 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (2)].l_val)), 0); }
    break;

  case 457:
#line 2612 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[(2) - (2)].l_val)); }
    break;

  case 458:
#line 2614 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(3) - (4)].l_val)); }
    break;

  case 459:
#line 2616 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(4) - (4)].l_val)); }
    break;

  case 460:
#line 2620 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 461:
#line 2621 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 462:
#line 2625 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 463:
#line 2626 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 464:
#line 2630 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 465:
#line 2631 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 466:
#line 2635 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 467:
#line 2636 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 468:
#line 2640 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 469:
#line 2641 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 470:
#line 2645 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 471:
#line 2647 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 472:
#line 2653 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
    break;

  case 473:
#line 2662 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
    break;

  case 474:
#line 2703 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 475:
#line 2711 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 476:
#line 2720 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 477:
#line 2722 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 478:
#line 2724 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(2) - (2)].l)); }
    break;

  case 480:
#line 2730 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(2) - (3)].l)); }
    break;

  case 481:
#line 2732 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (5)].l), (yyvsp[(4) - (5)].l)); }
    break;

  case 482:
#line 2736 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 483:
#line 2738 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 484:
#line 2742 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 485:
#line 2744 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 486:
#line 2749 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
	  if (m->emode == m_normal && m->caching) {
		/* replace by argument */
		atom *a = atom_general(SA, sql_bind_localtype("void"), NULL);

		sql_add_arg( m, a);
		(yyval.sym) = _symbol_create_list( SQL_COLUMN,
			append_int(L(), m->argc-1));
	   } else {
		(yyval.sym) = _symbol_create(SQL_NULL, NULL );
	   }
	}
    break;

  case 491:
#line 2778 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 492:
#line 2779 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 493:
#line 2780 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 494:
#line 2784 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 495:
#line 2786 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 496:
#line 2791 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym) );
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 497:
#line 2796 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
    break;

  case 498:
#line 2803 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 499:
#line 2804 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 500:
#line 2811 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 501:
#line 2814 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
    break;

  case 502:
#line 2819 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
    break;

  case 503:
#line 2827 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 0);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 504:
#line 2835 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 1);
	  append_int(l, 0);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 505:
#line 2843 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[(2) - (5)].i_val));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 506:
#line 2851 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[(3) - (5)].i_val));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 507:
#line 2861 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 508:
#line 2862 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (2)].i_val); }
    break;

  case 509:
#line 2863 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (1)].i_val); }
    break;

  case 510:
#line 2867 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 511:
#line 2868 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 512:
#line 2869 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 513:
#line 2873 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 514:
#line 2875 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[(2) - (2)].l)); }
    break;

  case 516:
#line 2899 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (3)].l));
	  	append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
    break;

  case 517:
#line 2908 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 518:
#line 2909 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 519:
#line 2914 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[(1) - (6)].sval)));
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 523:
#line 2937 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (4)].bval), (yyvsp[(3) - (4)].l), NULL,
		(yyvsp[(4) - (4)].l)->h->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 524:
#line 2948 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (6)].bval), (yyvsp[(3) - (6)].l), (yyvsp[(5) - (6)].l),
		(yyvsp[(6) - (6)].l)->h->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 525:
#line 2959 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
	  (yyval.sym) = (yyvsp[(1) - (5)].sym);
	  if ((yyvsp[(2) - (5)].sym) || (yyvsp[(3) - (5)].sym) || (yyvsp[(4) - (5)].sym) || (yyvsp[(5) - (5)].sym)) {
	  	if ((yyvsp[(1) - (5)].sym) != NULL &&
		    ((yyvsp[(1) - (5)].sym)->token == SQL_SELECT ||
		     (yyvsp[(1) - (5)].sym)->token == SQL_UNION  ||
		     (yyvsp[(1) - (5)].sym)->token == SQL_EXCEPT ||
		     (yyvsp[(1) - (5)].sym)->token == SQL_INTERSECT)) {
			if ((yyvsp[(1) - (5)].sym)->token == SQL_SELECT) {
	 			SelectNode *s = (SelectNode*)(yyvsp[(1) - (5)].sym);
	
	  			s -> orderby = (yyvsp[(2) - (5)].sym);
	  			s -> limit = (yyvsp[(3) - (5)].sym);
	  			s -> offset = (yyvsp[(4) - (5)].sym);
	  			s -> sample = (yyvsp[(5) - (5)].sym);
			} else { /* Add extra select * from .. in case of UNION, EXCEPT, INTERSECT */
				(yyval.sym) = newSelectNode( 
					SA, 0, 
					append_symbol(L(), _symbol_create_list(SQL_TABLE, append_string(append_string(L(),NULL),NULL))), NULL,
					_symbol_create_list( SQL_FROM, append_symbol(L(), (yyvsp[(1) - (5)].sym))), NULL, NULL, NULL, (yyvsp[(2) - (5)].sym), _symbol_create_list(SQL_NAME, append_list(append_string(L(),"inner"),NULL)), (yyvsp[(3) - (5)].sym), (yyvsp[(4) - (5)].sym), (yyvsp[(5) - (5)].sym));
			}
	  	} else {
			yyerror(m, "missing SELECT operator");
			YYABORT;
	  	}
	 } 
	}
    break;

  case 526:
#line 2989 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 527:
#line 2991 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 529:
#line 3001 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
    break;

  case 530:
#line 3010 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
    break;

  case 531:
#line 3019 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
    break;

  case 532:
#line 3025 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 534:
#line 3030 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 535:
#line 3031 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 536:
#line 3032 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 537:
#line 3037 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 538:
#line 3039 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 539:
#line 3041 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(4) - (5)].l); }
    break;

  case 541:
#line 3051 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[(1) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(4) - (4)].sym)); }
    break;

  case 542:
#line 3059 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 543:
#line 3060 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[(2) - (2)].l)); }
    break;

  case 544:
#line 3064 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 545:
#line 3066 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 546:
#line 3070 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (1)].l));
		  	  	  append_symbol(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 547:
#line 3074 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (2)].l));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 548:
#line 3078 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 549:
#line 3082 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (1)].sym));
		  	  	  append_symbol(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 551:
#line 3091 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
				  (yyval.sym) = (yyvsp[(1) - (2)].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[(1) - (2)].sym);
				  	sn->name = (yyvsp[(2) - (2)].sym);
				  } else {
				  	append_symbol((yyvsp[(1) - (2)].sym)->data.lval, (yyvsp[(2) - (2)].sym));
				  }
				}
    break;

  case 552:
#line 3101 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
    break;

  case 553:
#line 3105 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym);
				  append_symbol((yyvsp[(1) - (1)].sym)->data.lval, NULL); }
    break;

  case 554:
#line 3115 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->caching = 0; }
    break;

  case 555:
#line 3117 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[(3) - (5)].sym));
		append_symbol(op, (yyvsp[(5) - (5)].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
    break;

  case 556:
#line 3128 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (5)].sval));
		  	  	  append_list(l, (yyvsp[(4) - (5)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 557:
#line 3133 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (2)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 558:
#line 3138 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (4)].sval));
		  	  	  append_list(l, (yyvsp[(3) - (4)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 559:
#line 3143 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (1)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 560:
#line 3150 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 561:
#line 3151 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) );}
    break;

  case 562:
#line 3155 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(1) - (1)].l))); }
    break;

  case 563:
#line 3158 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(3) - (3)].l))); }
    break;

  case 564:
#line 3163 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 565:
#line 3164 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 566:
#line 3170 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
    break;

  case 567:
#line 3174 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 568:
#line 3179 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
    break;

  case 569:
#line 3183 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 570:
#line 3187 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 571:
#line 3189 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l)); }
    break;

  case 572:
#line 3193 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 573:
#line 3194 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("wrd");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].w_val))); 
			}
    break;

  case 574:
#line 3198 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 575:
#line 3202 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 576:
#line 3203 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("wrd");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].w_val))); 
			}
    break;

  case 577:
#line 3207 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 578:
#line 3211 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 579:
#line 3212 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("wrd");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].w_val)));
			}
    break;

  case 580:
#line 3216 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[(2) - (2)].sval),NULL)));
			}
    break;

  case 581:
#line 3220 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 582:
#line 3224 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 583:
#line 3226 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 584:
#line 3231 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  append_int(l, (yyvsp[(2) - (2)].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
    break;

  case 585:
#line 3239 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 586:
#line 3240 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 587:
#line 3241 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 597:
#line 3258 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym);

		  if ((yyval.sym)->token == SQL_EXISTS)
			(yyval.sym)->token = SQL_NOT_EXISTS;
		  else if ((yyval.sym)->token == SQL_NOT_EXISTS)
			(yyval.sym)->token = SQL_EXISTS;
		  else if ((yyval.sym)->token == SQL_NOT_BETWEEN)
			(yyval.sym)->token = SQL_BETWEEN;
		  else if ((yyval.sym)->token == SQL_BETWEEN)
			(yyval.sym)->token = SQL_NOT_BETWEEN;
		  else if ((yyval.sym)->token == SQL_NOT_LIKE)
			(yyval.sym)->token = SQL_LIKE;
		  else if ((yyval.sym)->token == SQL_LIKE)
			(yyval.sym)->token = SQL_NOT_LIKE;
		  else
			(yyval.sym) = _symbol_create_symbol(SQL_NOT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 598:
#line 3274 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 599:
#line 3279 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, (yyvsp[(2) - (3)].sval));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 600:
#line 3286 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 601:
#line 3296 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
    break;

  case 602:
#line 3303 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
    break;

  case 603:
#line 3312 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 604:
#line 3313 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 605:
#line 3314 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 606:
#line 3319 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 607:
#line 3326 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 608:
#line 3333 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 609:
#line 3340 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 610:
#line 3350 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (1)].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
    break;

  case 611:
#line 3354 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(3) - (3)].sval));
	  if (_strlen(s) != 1) {
		yyerror(m, "\b22025!ESCAPE must be one character");
		(yyval.sym) = NULL;
		YYABORT;
	  } else {
		dlist *l = L();
		append_symbol(l, (yyvsp[(1) - (3)].sym));
		append_string(l, s);
		(yyval.sym) = _symbol_create_list(SQL_ESCAPE, l);
	  }
	}
    break;

  case 612:
#line 3369 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[(1) - (4)].sym) );}
    break;

  case 613:
#line 3370 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[(1) - (3)].sym) ); }
    break;

  case 614:
#line 3375 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 615:
#line 3381 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 616:
#line 3387 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 617:
#line 3392 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 618:
#line 3400 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 619:
#line 3402 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 620:
#line 3408 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, (yyvsp[(2) - (4)].sval));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 621:
#line 3417 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 622:
#line 3418 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 623:
#line 3419 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 624:
#line 3423 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[(2) - (2)].sym) ); }
    break;

  case 625:
#line 3427 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 626:
#line 3428 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym));  }
    break;

  case 627:
#line 3432 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 628:
#line 3437 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(1) - (3)].l));
		  append_list(l, (yyvsp[(2) - (3)].l));
		  append_list(l, (yyvsp[(3) - (3)].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
    break;

  case 629:
#line 3445 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 630:
#line 3447 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 631:
#line 3449 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 633:
#line 3456 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 634:
#line 3463 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 635:
#line 3470 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 636:
#line 3477 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 637:
#line 3484 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 638:
#line 3491 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 639:
#line 3498 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
			  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 640:
#line 3505 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 641:
#line 3512 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 642:
#line 3519 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 643:
#line 3526 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 644:
#line 3533 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 645:
#line 3539 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 646:
#line 3546 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 647:
#line 3553 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 648:
#line 3560 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 649:
#line 3567 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 650:
#line 3574 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 651:
#line 3581 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  		  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 652:
#line 3588 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 653:
#line 3594 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 654:
#line 3601 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 655:
#line 3608 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 656:
#line 3615 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 657:
#line 3622 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 658:
#line 3624 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
 			  (yyval.sym) = NULL;
			  assert((yyvsp[(2) - (2)].sym)->token != SQL_COLUMN || (yyvsp[(2) - (2)].sym)->data.lval->h->type != type_lng);
			  if ((yyvsp[(2) - (2)].sym)->token == SQL_COLUMN && (yyvsp[(2) - (2)].sym)->data.lval->h->type == type_int) {
				atom *a = sql_bind_arg(m, (yyvsp[(2) - (2)].sym)->data.lval->h->data.i_val);
				if (!atom_neg(a)) {
					(yyval.sym) = (yyvsp[(2) - (2)].sym);
				} else {
					yyerror(m, "\b22003!value too large or not a number");
					(yyval.sym) = NULL;
					YYABORT;
				}
			  } 
			  if (!(yyval.sym)) {
				dlist *l = L();
			  	append_list(l, 
			  		append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_neg")));
	  		  	append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  	(yyval.sym) = _symbol_create_list( SQL_UNOP, l ); 
			  }
			}
    break;

  case 659:
#line 3645 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 660:
#line 3649 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 663:
#line 3655 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
    break;

  case 664:
#line 3657 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
    break;

  case 666:
#line 3660 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[(1) - (1)].l)); }
    break;

  case 670:
#line 3664 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[(4) - (4)].l)); }
    break;

  case 678:
#line 3676 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
    break;

  case 679:
#line 3746 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[(1) - (5)].sym)), (yyvsp[(4) - (5)].l))); }
    break;

  case 680:
#line 3751 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[(1) - (3)].l) ); }
    break;

  case 682:
#line 3757 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[(1) - (3)].sym)), (yyvsp[(2) - (3)].sym)), (yyvsp[(3) - (3)].sym)); }
    break;

  case 683:
#line 3761 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 684:
#line 3763 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 685:
#line 3767 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 686:
#line 3769 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 687:
#line 3773 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 688:
#line 3775 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[(2) - (3)].l), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val))); }
    break;

  case 689:
#line 3779 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_ROWS; }
    break;

  case 690:
#line 3780 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_RANGE; }
    break;

  case 691:
#line 3784 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(1) - (1)].sym)), _symbol_create_int(SQL_FRAME, -1)); }
    break;

  case 692:
#line 3785 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 693:
#line 3789 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 694:
#line 3790 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 695:
#line 3791 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 696:
#line 3795 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 697:
#line 3800 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(2) - (4)].sym)), (yyvsp[(4) - (4)].sym)); }
    break;

  case 698:
#line 3804 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 699:
#line 3805 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 700:
#line 3806 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 701:
#line 3810 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 702:
#line 3814 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NONE; }
    break;

  case 703:
#line 3815 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
    break;

  case 704:
#line 3816 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_GROUP; }
    break;

  case 705:
#line 3817 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_TIES; }
    break;

  case 706:
#line 3818 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
    break;

  case 707:
#line 3822 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 708:
#line 3827 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 709:
#line 3831 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (4)].l));
	  if (dlist_length((yyvsp[(3) - (4)].l)) == 1) {
  	  	append_symbol(l, (yyvsp[(3) - (4)].l)->h->data.sym);
	  	(yyval.sym) = _symbol_create_list( SQL_UNOP, l ); 
	  } else if (dlist_length((yyvsp[(3) - (4)].l)) == 2) {
  	  	append_symbol(l, (yyvsp[(3) - (4)].l)->h->data.sym);
  	  	append_symbol(l, (yyvsp[(3) - (4)].l)->h->next->data.sym);
	  	(yyval.sym) = _symbol_create_list( SQL_BINOP, l ); 
	  } else {
  	  	append_list(l, (yyvsp[(3) - (4)].l));
	  	(yyval.sym) = _symbol_create_list( SQL_NOP, l ); 
	  }
	}
    break;

  case 710:
#line 3858 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 711:
#line 3859 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 712:
#line 3864 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 713:
#line 3865 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "left"); }
    break;

  case 714:
#line 3866 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "right"); }
    break;

  case 715:
#line 3867 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "insert"); }
    break;

  case 716:
#line 3872 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[(3) - (6)].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 717:
#line 3879 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 718:
#line 3884 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 719:
#line 3889 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 720:
#line 3894 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 721:
#line 3899 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 722:
#line 3906 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 723:
#line 3907 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 724:
#line 3912 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[(3) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(5) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(7) - (8)].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 725:
#line 3922 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[(3) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(5) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(7) - (8)].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 726:
#line 3932 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 727:
#line 3939 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 728:
#line 3946 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 729:
#line 3953 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 730:
#line 3960 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "splitpart")));
  		  	  append_symbol(ops, (yyvsp[(3) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(5) - (8)].sym));
  		  	  append_symbol(ops, (yyvsp[(7) - (8)].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 731:
#line 3972 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 732:
#line 3974 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 733:
#line 3979 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 734:
#line 3984 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, (yyvsp[(1) - (3)].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 735:
#line 3989 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 736:
#line 3994 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
  		  append_string(l, (yyvsp[(2) - (2)].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
    break;

  case 737:
#line 4001 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 738:
#line 4002 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 739:
#line 4007 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
	  if (m->emode == m_normal && m->caching) { 
	  	/* replace by argument */
	  	AtomNode *an = (AtomNode*)(yyvsp[(1) - (1)].sym);
	
	  	sql_add_arg( m, an->a);
		an->a = NULL;
	  	/* we miss use SQL_COLUMN also for param's, maybe
	     		change SQL_COLUMN to SQL_IDENT */
 	  	(yyval.sym) = _symbol_create_list( SQL_COLUMN,
			append_int(L(), m->argc-1));
	   } else {
	  	AtomNode *an = (AtomNode*)(yyvsp[(1) - (1)].sym);
		atom *a = an->a; 
		an->a = atom_dup(SA, a); 
		(yyval.sym) = (yyvsp[(1) - (1)].sym);
	   }
	}
    break;

  case 740:
#line 4028 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 741:
#line 4029 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 742:
#line 4034 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 743:
#line 4035 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 744:
#line 4040 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 745:
#line 4041 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 746:
#line 4048 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 747:
#line 4054 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 748:
#line 4060 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 749:
#line 4066 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 750:
#line 4072 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (4)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 751:
#line 4078 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 753:
#line 4088 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 754:
#line 4089 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = -1; }
    break;

  case 755:
#line 4090 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 756:
#line 4094 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 757:
#line 4095 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 758:
#line 4106 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 759:
#line 4108 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0+1; }
    break;

  case 760:
#line 4112 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 761:
#line 4114 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 6+1; }
    break;

  case 762:
#line 4118 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
    break;

  case 763:
#line 4120 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 764:
#line 4126 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 765:
#line 4134 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = iyear; }
    break;

  case 766:
#line 4135 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imonth; }
    break;

  case 767:
#line 4136 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = iday; }
    break;

  case 768:
#line 4137 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ihour; }
    break;

  case 769:
#line 4138 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imin; }
    break;

  case 771:
#line 4143 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = isec; }
    break;

  case 772:
#line 4148 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 773:
#line 4154 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (1)].i_val)), 0);  }
    break;

  case 774:
#line 4157 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 775:
#line 4163 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 776:
#line 4166 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 777:
#line 4172 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[(1) - (3)].l)), (yyvsp[(3) - (3)].l) ); }
    break;

  case 778:
#line 4175 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list( L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 779:
#line 4179 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		int sk, ek, sp, ep;
	  	int tpe;

		(yyval.type).type = NULL;
	  	if ( (tpe = parse_interval_qualifier( m, (yyvsp[(2) - (2)].l), &sk, &ek, &sp, &ep )) < 0){
			yyerror(m, "\b22006!incorrect interval");
			YYABORT;
	  	} else {
			int d = inttype2digits(sk, ek);
			if (tpe == 0){
				sql_find_subtype(&(yyval.type), "month_interval", d, 0);
			} else {
				sql_find_subtype(&(yyval.type), "sec_interval", d, 0);
			}
	  	}
	}
    break;

  case 783:
#line 4205 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(1) - (1)].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
    break;

  case 784:
#line 4211 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int len = _strlen((yyvsp[(1) - (1)].sval)), i = 2, err = 0;
		  char * hexa = (yyvsp[(1) - (1)].sval);
	 	  sql_subtype t;
#ifdef HAVE_HGE
		  hge res = 0;
#else
		  lng res = 0;
#endif
		  /* skip leading '0' */
		  while (i < len && hexa[i] == '0')
		  	i++;

		  /* we only support positive values that fit in a signed 128-bit type,
		   * i.e., max. 63/127 bit => < 2^63/2^127 => < 0x800...
		   * (leading sign (-0x...) is handled separately elsewhere)
		   */
		  if (len - i < MAX_HEX_DIGITS || (len - i == MAX_HEX_DIGITS && hexa[i] < '8'))
		  	while (err == 0 && i < len)
		  	{
				res <<= 4;
				if ('0'<= hexa[i] && hexa[i] <= '9')
					res = res + (hexa[i] - '0');
				else if ('A' <= hexa[i] && hexa[i] <= 'F')
					res = res + (hexa[i] - 'A' + 10);
				else if ('a' <= hexa[i] && hexa[i] <= 'f')
					res = res + (hexa[i] - 'a' + 10);
				else
					err = 1;
		  		i++;
			}
		  else
			err = 1;

		  if (err == 0) {
		  	assert(res >= 0);

		  	/* use smallest type that can accommodate the given value */
			if (res <= GDK_bte_max)
				sql_find_subtype(&t, "tinyint", 8, 0 );
			else if (res <= GDK_sht_max)
				sql_find_subtype(&t, "smallint", 16, 0 );
		  	else if (res <= GDK_int_max)
				sql_find_subtype(&t, "int", 32, 0 );
			else if (res <= GDK_lng_max)
				sql_find_subtype(&t, "bigint", 64, 0 );
#ifdef HAVE_HGE
			else if (res <= GDK_hge_max && have_hge)
				sql_find_subtype(&t, "hugeint", 128, 0 );
#endif
			else
				err = 1;
		  }

		  if (err != 0) {
			char *msg = sql_message("\b22003!invalid hexadecimal number or hexadecimal too large (%s)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
			(yyval.sym) = _newAtomNode( atom_int(SA, &t, res));
		  }
		}
    break;

  case 785:
#line 4276 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int err = 0, len = sizeof(lng);
		  lng value, *p = &value;
		  sql_subtype t;

		  lngFromStr((yyvsp[(1) - (1)].sval), &len, &p);
		  if (value == lng_nil)
		  	err = 2;

		  if (!err) {
		    if ((value > GDK_lng_min && value <= GDK_lng_max))
#if SIZEOF_OID == SIZEOF_INT
		  	  sql_find_subtype(&t, "oid", 31, 0 );
#else
		  	  sql_find_subtype(&t, "oid", 63, 0 );
#endif
		    else
			  err = 1;
		  }

		  if (err) {
			char *msg = sql_message("\b22003!OID value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode( atom_int(SA, &t, value));
		  }
		}
    break;

  case 786:
#line 4307 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int digits = _strlen((yyvsp[(1) - (1)].sval)), err = 0;
#ifdef HAVE_HGE
		  hge value, *p = &value;
		  int len = sizeof(hge);
#else
		  lng value, *p = &value;
		  int len = sizeof(lng);
#endif
		  sql_subtype t;

#ifdef HAVE_HGE
		  hgeFromStr((yyvsp[(1) - (1)].sval), &len, &p);
		  if (value == hge_nil)
		  	err = 2;
#else
		  lngFromStr((yyvsp[(1) - (1)].sval), &len, &p);
		  if (value == lng_nil)
		  	err = 2;
#endif

		  /* find the most suitable data type for the given number */
		  if (!err) {
		    int bits = digits2bits(digits);
		    if (value > GDK_bte_min && value <= GDK_bte_max)
		  	  sql_find_subtype(&t, "tinyint", bits, 0 );
		    else if (value > GDK_sht_min && value <= GDK_sht_max)
		  	  sql_find_subtype(&t, "smallint", bits, 0 );
		    else if (value > GDK_int_min && value <= GDK_int_max)
		  	  sql_find_subtype(&t, "int", bits, 0 );
		    else if (value > GDK_lng_min && value <= GDK_lng_max)
		  	  sql_find_subtype(&t, "bigint", bits, 0 );
#ifdef HAVE_HGE
		    else if (value > GDK_hge_min && value <= GDK_hge_max && have_hge)
		  	  sql_find_subtype(&t, "hugeint", bits, 0 );
#endif
		    else
			  err = 1;
		  }

		  if (err) {
			char *msg = sql_message("\b22003!integer value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode( atom_int(SA, &t, value));
		  }
		}
    break;

  case 787:
#line 4358 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { char *s = strip_extra_zeros(sa_strdup(SA, (yyvsp[(1) - (1)].sval)));
		  char *dot = strchr(s, '.');
		  int digits = _strlen(s) - 1;
		  int scale = digits - (int) (dot-s);
		  sql_subtype t;

		  if (digits <= 0)
			digits = 1;
		  if (digits <= MAX_DEC_DIGITS) {
		  	double val = strtod((yyvsp[(1) - (1)].sval),NULL);
#ifdef HAVE_HGE
		  	hge value = decimal_from_str(s, NULL);
#else
		  	lng value = decimal_from_str(s, NULL);
#endif

		  	if (*s == '+' || *s == '-')
				digits --;
		  	sql_find_subtype(&t, "decimal", digits, scale );
		  	(yyval.sym) = _newAtomNode( atom_dec(SA, &t, value, val));
		   } else {
			char *p = (yyvsp[(1) - (1)].sval);
			double val;

			errno = 0;
			val = strtod((yyvsp[(1) - (1)].sval),&p);
			if (p == (yyvsp[(1) - (1)].sval) || val == dbl_nil || (errno == ERANGE && (val < -1 || val > 1))) {
				char *msg = sql_message("\b22003!double value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.sym) = NULL;
				YYABORT;
			}
		  	sql_find_subtype(&t, "double", 51, 0 );
		  	(yyval.sym) = _newAtomNode(atom_float(SA, &t, val));
		   }
		}
    break;

  case 788:
#line 4397 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
  		  char *p = (yyvsp[(1) - (1)].sval);
		  double val;

		  errno = 0;
 		  val = strtod((yyvsp[(1) - (1)].sval),&p);
		  if (p == (yyvsp[(1) - (1)].sval) || val == dbl_nil || (errno == ERANGE && (val < -1 || val > 1))) {
			char *msg = sql_message("\b22003!double value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  }
		  sql_find_subtype(&t, "double", 51, 0 );
		  (yyval.sym) = _newAtomNode(atom_float(SA, &t, val)); }
    break;

  case 789:
#line 4414 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a;
		  int r;

 		  r = sql_find_subtype(&t, "date", 0, 0 );
		  if (!r || (a = atom_general(SA, &t, (yyvsp[(2) - (2)].sval))) == NULL) {
			char *msg = sql_message("\b22007!incorrect date value (%s)", (yyvsp[(2) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
    break;

  case 790:
#line 4430 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a;
		  int r;

	          r = sql_find_subtype(&t, ((yyvsp[(3) - (4)].bval))?"timetz":"time", (yyvsp[(2) - (4)].i_val), 0);
		  if (!r || (a = atom_general(SA, &t, (yyvsp[(4) - (4)].sval))) == NULL) {
			char *msg = sql_message("\b22007!incorrect time value (%s)", (yyvsp[(4) - (4)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
    break;

  case 791:
#line 4446 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a;
		  int r;

 		  r = sql_find_subtype(&t, ((yyvsp[(3) - (4)].bval))?"timestamptz":"timestamp",(yyvsp[(2) - (4)].i_val),0);
		  if (!r || (a = atom_general(SA, &t, (yyvsp[(4) - (4)].sval))) == NULL) {
			char *msg = sql_message("\b22007!incorrect timestamp value (%s)", (yyvsp[(4) - (4)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
    break;

  case 793:
#line 4463 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a= 0;
		  int r;

		  (yyval.sym) = NULL;
 		  r = sql_find_subtype(&t, "blob", 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[(2) - (2)].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message("\b22M28!incorrect blob %s", (yyvsp[(2) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
    break;

  case 794:
#line 4480 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  atom *a= 0;
		  int r;

		  (yyval.sym) = NULL;
		  r = sql_find_subtype(&t, (yyvsp[(1) - (2)].sval), 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[(2) - (2)].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message("\b22000!incorrect %s %s", (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
    break;

  case 795:
#line 4497 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t; 
		  atom *a = 0;
		  int r;

		  (yyval.sym) = NULL;
		  r = sql_find_subtype(&t, (yyvsp[(1) - (2)].sval), 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[(2) - (2)].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message("\b22000!incorrect %s %s", (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
    break;

  case 796:
#line 4514 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  sql_type *t = mvc_bind_type(m, (yyvsp[(1) - (2)].sval));
		  atom *a;

		  (yyval.sym) = NULL;
		  if (t) {
		  	sql_subtype tpe;
			sql_init_subtype(&tpe, t, 0, 0);
			a = atom_general(SA, &tpe, (yyvsp[(2) - (2)].sval));
			if (a)
				(yyval.sym) = _newAtomNode(a);
		  }
		  if (!t || !(yyval.sym)) {
			char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[(1) - (2)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
    break;

  case 797:
#line 4535 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
    break;

  case 798:
#line 4539 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
    break;

  case 799:
#line 4545 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
		sql_subtype t;
		int sk, ek, sp, ep, tpe;
	  	lng i = 0;
		int r = 0;

		(yyval.sym) = NULL;
	  	if ( (tpe = parse_interval_qualifier( m, (yyvsp[(4) - (4)].l), &sk, &ek, &sp, &ep )) < 0){
			yyerror(m, "incorrect interval");
			YYABORT;
	  	} else {
			int d = inttype2digits(sk, ek);
			if (tpe == 0){
				r=sql_find_subtype(&t, "month_interval", d, 0);
			} else {
				r=sql_find_subtype(&t, "sec_interval", d, 0);
			}
	  	}
	  	if (!r || (tpe = parse_interval( m, (yyvsp[(2) - (4)].i_val), (yyvsp[(3) - (4)].sval), sk, ek, sp, ep, &i)) < 0) { 
			yyerror(m, "incorrect interval");
			(yyval.sym) = NULL;
			YYABORT;
	  	} else {
			/* count the number of digits in the input */
/*
			lng cpyval = i, inlen = 1;

			cpyval /= qualifier2multiplier(ek);
			while (cpyval /= 10)
				inlen++;
		    	if (inlen > t.digits) {
				char *msg = sql_message("\b22006!incorrect interval (" LLFMT " > %d)", inlen, t.digits);
				yyerror(m, msg);
				$$ = NULL;
				YYABORT;
			}
*/
	  		(yyval.sym) = _newAtomNode( atom_int(SA, &t, i));
	  	}
	}
    break;

  case 800:
#line 4590 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 801:
#line 4591 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (3)].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 802:
#line 4595 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (5)].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[(1) - (5)].sval)), 
						(yyvsp[(3) - (5)].sval)), 
					(yyvsp[(5) - (5)].sval))
				;}
    break;

  case 803:
#line 4606 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 804:
#line 4609 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 805:
#line 4614 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[(1) - (5)].sval)), (yyvsp[(3) - (5)].sval)), (yyvsp[(5) - (5)].sval));}
    break;

  case 806:
#line 4622 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 807:
#line 4628 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 809:
#line 4640 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[(3) - (6)].sym)), (yyvsp[(5) - (6)].sym))); }
    break;

  case 810:
#line 4645 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[(3) - (4)].l)); }
    break;

  case 811:
#line 4647 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (5)].sym)),(yyvsp[(3) - (5)].l)),(yyvsp[(4) - (5)].sym))); }
    break;

  case 812:
#line 4653 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[(2) - (4)].l)),(yyvsp[(3) - (4)].sym))); }
    break;

  case 813:
#line 4661 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 814:
#line 4663 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 815:
#line 4668 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (3)].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[(3) - (3)].sym));
			}
    break;

  case 816:
#line 4672 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 817:
#line 4678 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 818:
#line 4686 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 819:
#line 4688 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 820:
#line 4693 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 821:
#line 4701 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 822:
#line 4703 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 823:
#line 4707 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 824:
#line 4708 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 826:
#line 4718 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 827:
#line 4729 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 828:
#line 4740 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.w_val) = (yyvsp[(1) - (1)].w_val);
		  if ((yyval.w_val) <= 0) {
			(yyval.w_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 829:
#line 4750 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 830:
#line 4760 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.w_val) = (yyvsp[(1) - (1)].w_val);
		  if ((yyval.w_val) < 0) {
			(yyval.w_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 831:
#line 4770 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 832:
#line 4781 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
    break;

  case 833:
#line 4783 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
    break;

  case 834:
#line 4787 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
    break;

  case 835:
#line 4789 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 836:
#line 4791 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 837:
#line 4793 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
    break;

  case 838:
#line 4801 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
    break;

  case 839:
#line 4803 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
    break;

  case 840:
#line 4811 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
    break;

  case 841:
#line 4812 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
    break;

  case 842:
#line 4813 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
    break;

  case 843:
#line 4814 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
    break;

  case 844:
#line 4815 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
    break;

  case 845:
#line 4817 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
    break;

  case 846:
#line 4819 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
			  int d = (yyvsp[(3) - (4)].i_val);
			  if (d > MAX_DEC_DIGITS) {
				char *msg = sql_message("\b22003!decimal of %d digits are not supported", d);
				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
			        sql_find_subtype(&(yyval.type), "decimal", d, 0); 
			  }
			}
    break;

  case 847:
#line 4832 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
			  int d = (yyvsp[(3) - (6)].i_val);
			  int s = (yyvsp[(5) - (6)].i_val);
			  if (s > d || d > MAX_DEC_DIGITS) {
				char *msg = NULL;
				if (s > d)
					msg = sql_message("\b22003!scale (%d) should be less or equal to the precision (%d)", s, d);
				else
					msg = sql_message("\b22003!decimal(%d,%d) isn't supported because P=%d > %d", d, s, d, MAX_DEC_DIGITS);
				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_find_subtype(&(yyval.type), "decimal", d, s);
			  }
			}
    break;

  case 848:
#line 4849 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 849:
#line 4851 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (4)].i_val) > 0 && (yyvsp[(3) - (4)].i_val) <= 24) {
				sql_find_subtype(&(yyval.type), "real", (yyvsp[(3) - (4)].i_val), 0);
			  } else if ((yyvsp[(3) - (4)].i_val) > 24 && (yyvsp[(3) - (4)].i_val) <= 53) {
				sql_find_subtype(&(yyval.type), "double", (yyvsp[(3) - (4)].i_val), 0);
			  } else {
				char *msg = sql_message("\b22003!number of digits for FLOAT values should be between 1 and 53");

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  }
			}
    break;

  case 850:
#line 4865 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(5) - (6)].i_val) >= (yyvsp[(3) - (6)].i_val)) {
				char *msg = sql_message("\b22003!precision(%d) should be less than number of digits(%d)", (yyvsp[(5) - (6)].i_val), (yyvsp[(3) - (6)].i_val));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else if ((yyvsp[(3) - (6)].i_val) > 0 && (yyvsp[(3) - (6)].i_val) <= 24) {
				sql_find_subtype(&(yyval.type), "real", (yyvsp[(3) - (6)].i_val), (yyvsp[(5) - (6)].i_val));
			  } else if ((yyvsp[(3) - (6)].i_val) > 24 && (yyvsp[(3) - (6)].i_val) <= 53) {
				sql_find_subtype(&(yyval.type), "double", (yyvsp[(3) - (6)].i_val), (yyvsp[(5) - (6)].i_val));
			  } else {
				char *msg = sql_message("\b22003!number of digits for FLOAT values should be between 1 and 53");
				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  }
			}
    break;

  case 851:
#line 4884 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 852:
#line 4885 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 853:
#line 4886 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
    break;

  case 856:
#line 4889 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 857:
#line 4891 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 858:
#line 4892 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 859:
#line 4894 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 860:
#line 4896 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(5) - (6)].i_val) >= (yyvsp[(3) - (6)].i_val)) {
				char *msg = sql_message("\b22003!precision(%d) should be less than number of digits(%d)", (yyvsp[(5) - (6)].i_val), (yyvsp[(3) - (6)].i_val));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
			 	sql_find_subtype(&(yyval.type), (yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].i_val), (yyvsp[(5) - (6)].i_val));
			  }
			}
    break;

  case 861:
#line 4907 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
			  sql_type *t = mvc_bind_type(m, (yyvsp[(1) - (1)].sval));
			  if (!t) {
				char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[(1) - (1)].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_init_subtype(&(yyval.type), t, 0, 0);
			  }
			}
    break;

  case 862:
#line 4922 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
			  sql_type *t = mvc_bind_type(m, (yyvsp[(1) - (4)].sval));
			  if (!t) {
				char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[(1) - (4)].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_init_subtype(&(yyval.type), t, (yyvsp[(3) - (4)].i_val), 0);
			  }
			}
    break;

  case 863:
#line 4935 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometry", 0, 0 )) {
			yyerror(m, "\b22000!type (geometry) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 864:
#line 4942 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		int geoSubType = (yyvsp[(3) - (4)].i_val); 

		if(geoSubType == 0) {
			(yyval.type).type = NULL;
			YYABORT;
		} else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, 0 )) {
			char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[(1) - (4)].sval));
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.type).type = NULL;
			YYABORT;
		}
		
	}
    break;

  case 865:
#line 4957 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		int geoSubType = (yyvsp[(3) - (6)].i_val); 
		int srid = (yyvsp[(5) - (6)].i_val); 

		if(geoSubType == 0) {
			(yyval.type).type = NULL;
			YYABORT;
		} else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, srid )) {
			char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[(1) - (6)].sval));
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 866:
#line 4972 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometrya", 0, 0 )) {
			yyerror(m, "\b22000!type (geometrya) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 867:
#line 4979 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	int geoSubType = find_subgeometry_type((yyvsp[(1) - (1)].sval));

	if(geoSubType == 0) {
		char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[(1) - (1)].sval));
		(yyval.type).type = NULL;
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	}  else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, 0 )) {
		char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[(1) - (1)].sval));
		yyerror(m, msg);
		_DELETE(msg);
		(yyval.type).type = NULL;
		YYABORT;
	}
}
    break;

  case 868:
#line 4999 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	int subtype = find_subgeometry_type((yyvsp[(1) - (1)].sval));
	char* geoSubType = (yyvsp[(1) - (1)].sval);

	if(subtype == 0) {
		char *msg = sql_message("\b22000!type (%s) unknown", geoSubType);
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} 
	(yyval.i_val) = subtype;	
}
    break;

  case 869:
#line 5011 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	int subtype = find_subgeometry_type((yyvsp[(1) - (1)].sval));
	char* geoSubType = (yyvsp[(1) - (1)].sval);

	if(subtype == 0) {
		char *msg = sql_message("\b22000!type (%s) unknown", geoSubType);
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} 
	(yyval.i_val) = subtype;	
}
    break;

  case 870:
#line 5027 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 	char *t = sql_bind_alias((yyvsp[(1) - (1)].sval));
	  	if (!t) {
			char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sval) = NULL;
			YYABORT;
		}
		(yyval.sval) = t;
	}
    break;

  case 871:
#line 5041 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 872:
#line 5042 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (2)].sval); }
    break;

  case 873:
#line 5046 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 874:
#line 5047 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 875:
#line 5048 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 876:
#line 5051 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 877:
#line 5052 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 880:
#line 5060 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 881:
#line 5061 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 882:
#line 5062 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 883:
#line 5063 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 884:
#line 5064 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 885:
#line 5065 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 886:
#line 5069 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 887:
#line 5070 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 888:
#line 5071 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 889:
#line 5072 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 890:
#line 5073 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 891:
#line 5074 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 892:
#line 5075 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 894:
#line 5080 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "large"); }
    break;

  case 895:
#line 5081 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "name"); }
    break;

  case 896:
#line 5082 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "object"); }
    break;

  case 897:
#line 5083 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "password"); }
    break;

  case 898:
#line 5084 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "path"); }
    break;

  case 899:
#line 5085 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "precision"); }
    break;

  case 900:
#line 5086 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
    break;

  case 901:
#line 5087 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "role"); }
    break;

  case 902:
#line 5088 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "size"); }
    break;

  case 903:
#line 5089 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "type"); }
    break;

  case 904:
#line 5090 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "release"); }
    break;

  case 905:
#line 5091 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "value"); }
    break;

  case 906:
#line 5092 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "zone"); }
    break;

  case 907:
#line 5094 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "action"); }
    break;

  case 908:
#line 5095 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "as"); }
    break;

  case 909:
#line 5096 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
    break;

  case 910:
#line 5097 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "column"); }
    break;

  case 911:
#line 5098 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
    break;

  case 912:
#line 5099 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
    break;

  case 913:
#line 5100 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "increment"); }
    break;

  case 914:
#line 5101 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
    break;

  case 915:
#line 5102 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
    break;

  case 916:
#line 5103 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "plan"); }
    break;

  case 917:
#line 5104 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "schema"); }
    break;

  case 918:
#line 5105 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "start"); }
    break;

  case 919:
#line 5106 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "statement"); }
    break;

  case 920:
#line 5107 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "table"); }
    break;

  case 921:
#line 5109 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cache"); }
    break;

  case 922:
#line 5110 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "data"); }
    break;

  case 923:
#line 5111 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
    break;

  case 924:
#line 5112 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "match"); }
    break;

  case 925:
#line 5113 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "options"); }
    break;

  case 926:
#line 5114 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "row"); }
    break;

  case 927:
#line 5115 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "key"); }
    break;

  case 928:
#line 5116 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "language"); }
    break;

  case 929:
#line 5117 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "level"); }
    break;

  case 930:
#line 5118 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "session"); }
    break;

  case 931:
#line 5119 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "date"); }
    break;

  case 932:
#line 5120 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "time"); }
    break;

  case 933:
#line 5121 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
    break;

  case 934:
#line 5122 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "interval"); }
    break;

  case 935:
#line 5124 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
    break;

  case 936:
#line 5125 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "execute"); }
    break;

  case 937:
#line 5126 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "explain"); }
    break;

  case 938:
#line 5127 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "dot"); }
    break;

  case 939:
#line 5128 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "debug"); }
    break;

  case 940:
#line 5129 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "trace"); }
    break;

  case 941:
#line 5130 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "text"); }
    break;

  case 942:
#line 5131 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
    break;

  case 943:
#line 5132 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "no"); }
    break;

  case 944:
#line 5134 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "strip"); }
    break;

  case 945:
#line 5135 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
    break;

  case 946:
#line 5136 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "passing"); }
    break;

  case 947:
#line 5137 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "nil"); }
    break;

  case 948:
#line 5138 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "ref"); }
    break;

  case 949:
#line 5139 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "absent"); }
    break;

  case 950:
#line 5140 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "empty"); }
    break;

  case 951:
#line 5141 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "document"); }
    break;

  case 952:
#line 5142 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "element"); }
    break;

  case 953:
#line 5143 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "content"); }
    break;

  case 954:
#line 5144 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
    break;

  case 955:
#line 5145 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "returning"); }
    break;

  case 956:
#line 5146 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "location"); }
    break;

  case 957:
#line 5147 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "id"); }
    break;

  case 958:
#line 5148 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "according"); }
    break;

  case 959:
#line 5149 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "uri"); }
    break;

  case 960:
#line 5150 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "filter"); }
    break;

  case 961:
#line 5151 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
    break;

  case 962:
#line 5152 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temp"); }
    break;

  case 963:
#line 5153 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
    break;

  case 964:
#line 5154 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
    break;

  case 965:
#line 5155 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "storage"); }
    break;

  case 966:
#line 5156 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
    break;

  case 967:
#line 5160 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 968:
#line 5162 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 969:
#line 5166 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
		lng l = (yyvsp[(1) - (1)].l_val);
#if SIZEOF_WRD == SIZEOF_INT

		if (l > GDK_int_max) {
			char *msg = sql_message("\b22000!constant (" LLFMT ") has wrong type (number expected)", l);

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.w_val) = 0;
			YYABORT;
		}
#endif
		(yyval.w_val) = (wrd) l;
	}
    break;

  case 970:
#line 5185 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  char *end = NULL, *s = (yyvsp[(1) - (1)].sval);
		  int l = _strlen(s);
		  // errno might be non-zero due to other people's code
		  errno = 0;
		  if (l <= 19) {
		  	(yyval.l_val) = strtoll(s,&end,10);
		  } else {
			(yyval.l_val) = 0;
		  }
		  if (s+l != end || errno == ERANGE) {
			char *msg = sql_message("\b22003!integer value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			errno = 0;
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.l_val) = 0;
			YYABORT;
		  }
		}
    break;

  case 971:
#line 5208 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  char *end = NULL, *s = (yyvsp[(1) - (1)].sval);
		  int l = _strlen(s);
		  // errno might be non-zero due to other people's code
		  errno = 0;
		  if (l <= 10) {
		  	(yyval.i_val) = strtol(s,&end,10);
		  } else {
			(yyval.i_val) = 0;
		  }
		  if (s+l != end || errno == ERANGE) {
			char *msg = sql_message("\b22003!integer value too large or not a number (%s)", (yyvsp[(1) - (1)].sval));

			errno = 0;
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		}
    break;

  case 972:
#line 5228 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  char *name = (yyvsp[(1) - (1)].sval);
		  sql_subtype *tpe;

		  if (!stack_find_var(m, name)) {
			char *msg = sql_message("\b22000!constant (%s) unknown", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		  tpe = stack_find_type(m, name);
		  if (tpe->type->localtype == TYPE_lng ||
		      tpe->type->localtype == TYPE_int ||
		      tpe->type->localtype == TYPE_sht ||
		      tpe->type->localtype == TYPE_bte ) {
			lng sgn = stack_get_number(m, name);
			assert((lng) GDK_int_min < sgn && sgn <= (lng) GDK_int_max);
			(yyval.i_val) = (int) sgn;
		  } else {
			char *msg = sql_message("\b22000!constant (%s) has wrong type (number expected)", (yyvsp[(1) - (1)].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		}
    break;

  case 973:
#line 5261 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 974:
#line 5263 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { char *s = strconcat((yyvsp[(1) - (2)].sval),(yyvsp[(2) - (2)].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
    break;

  case 975:
#line 5271 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 976:
#line 5278 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (3)].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 977:
#line 5283 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (4)].i_val));
  	  append_list(l, (yyvsp[(3) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 978:
#line 5297 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 980:
#line 5302 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[(2) - (2)].l)); }
    break;

  case 983:
#line 5313 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 984:
#line 5315 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 996:
#line 5337 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
    break;

  case 997:
#line 5345 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
    break;

  case 998:
#line 5353 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
    break;

  case 999:
#line 5363 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_list(l, (yyvsp[(5) - (7)].l));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
    break;

  case 1000:
#line 5373 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 1001:
#line 5375 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1002:
#line 5379 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1003:
#line 5383 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (6)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (6)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(6) - (6)].l)); }
    break;

  case 1004:
#line 5387 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1005:
#line 5391 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1006:
#line 5395 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1007:
#line 5399 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(2) - (2)].l)); }
    break;

  case 1009:
#line 5409 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1010:
#line 5413 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1011:
#line 5415 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1012:
#line 5425 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (2)].sval));
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1013:
#line 5432 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1014:
#line 5433 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1017:
#line 5446 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[(1) - (2)].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[(2) - (2)].i_val)); 	}
    break;

  case 1018:
#line 5453 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1019:
#line 5455 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1021:
#line 5463 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1022:
#line 5464 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 1023:
#line 5468 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1024:
#line 5469 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1025:
#line 5470 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1026:
#line 5471 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 1027:
#line 5472 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 1028:
#line 5479 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (7)].sym));
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_int(l, (yyvsp[(5) - (7)].i_val));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
    break;

  case 1029:
#line 5489 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1030:
#line 5490 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 1031:
#line 5495 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 1032:
#line 5497 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 1033:
#line 5502 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (2)].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[(2) - (2)].sval)); }
    break;

  case 1034:
#line 5507 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1035:
#line 5511 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1036:
#line 5512 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1037:
#line 5516 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1038:
#line 5523 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_int(l, (yyvsp[(3) - (6)].i_val) );
	  append_symbol(l, (yyvsp[(4) - (6)].sym));
	  append_int(l, (yyvsp[(5) - (6)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
    break;

  case 1039:
#line 5530 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1040:
#line 5531 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1041:
#line 5538 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_symbol(l, (yyvsp[(5) - (7)].sym));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
    break;

  case 1043:
#line 5550 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1044:
#line 5552 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1045:
#line 5563 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1060:
#line 5609 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
    break;

  case 1061:
#line 5620 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1063:
#line 5625 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1064:
#line 5629 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1065:
#line 5630 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1066:
#line 5634 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1067:
#line 5635 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1068:
#line 5636 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1069:
#line 5651 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1070:
#line 5655 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1071:
#line 5657 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1076:
#line 5680 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { char *s = strconcat("xmlns:", (yyvsp[(3) - (3)].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1077:
#line 5689 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1078:
#line 5693 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1108:
#line 5789 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
          dlist *aggr = L();

          if ((yyvsp[(4) - (6)].sym)) {
	  	if ((yyvsp[(3) - (6)].sym) != NULL && (yyvsp[(3) - (6)].sym)->token == SQL_SELECT) {
			SelectNode *s = (SelectNode*)(yyvsp[(3) - (6)].sym);
	
			s->orderby = (yyvsp[(4) - (6)].sym);
	  	} else {
			yyerror(m, "ORDER BY: missing select operator");
			YYABORT;
		}
	  }
          append_list(aggr, append_string(append_string(L(), "sys"), "xmlagg"));
  	  append_int(aggr, FALSE);
	  append_symbol(aggr, (yyvsp[(3) - (6)].sym));
	  /* int returning not used */
	  (yyval.sym) = _symbol_create_list( SQL_AGGR, aggr);
	}
    break;


/* Line 1267 of yacc.c.  */
#line 13709 "y.tab.c"
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
      yyerror (m, YY_("syntax error"));
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
	    yyerror (m, yymsg);
	  }
	else
	  {
	    yyerror (m, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, m);
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
		  yystos[yystate], yyvsp, m);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (m, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, m);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, m);
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


#line 5810 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"

int find_subgeometry_type(char* geoSubType) {
	int subType = 0;
	if(strcmp(geoSubType, "point") == 0 )
		subType = (1 << 2);
	else if(strcmp(geoSubType, "linestring") == 0)
		subType = (2 << 2);
	else if(strcmp(geoSubType, "polygon") == 0)
		subType = (4 << 2);
	else if(strcmp(geoSubType, "multipoint") == 0)
		subType = (5 << 2);
	else if(strcmp(geoSubType, "multilinestring") == 0)
		subType = (6 << 2);
	else if(strcmp(geoSubType, "multipolygon") == 0)
		subType = (7 << 2);
	else if(strcmp(geoSubType, "geometrycollection") == 0)
		subType = (8 << 2);
	else {
		size_t strLength = strlen(geoSubType);
		if(strLength > 0 ) {
			char *typeSubStr = malloc(strLength);
			char flag = geoSubType[strLength-1]; 
			
			memcpy(typeSubStr, geoSubType, strLength-1);
			typeSubStr[strLength-1]='\0';
			if(flag == 'z' || flag == 'm' ) {
				subType = find_subgeometry_type(typeSubStr);
			
			
				if(flag == 'z')
					SET_Z(subType);
				if(flag == 'm')
					SET_M(subType);
			}
			free(typeSubStr);
		}

	}
	return subType;	
}

char *token2string(int token)
{
	switch (token) {
#define SQL(TYPE) case SQL_##TYPE : return #TYPE
	SQL(CREATE_SCHEMA);
	SQL(CREATE_TABLE);
	SQL(CREATE_VIEW);
	SQL(CREATE_INDEX);
	SQL(CREATE_ROLE);
	SQL(CREATE_USER);
	SQL(CREATE_TYPE);
	SQL(CREATE_FUNC);
	SQL(CREATE_SEQ);
	SQL(CREATE_TRIGGER);
	SQL(DROP_SCHEMA);
	SQL(DROP_TABLE);
	SQL(DROP_VIEW);
	SQL(DROP_INDEX);
	SQL(DROP_ROLE);
	SQL(DROP_USER);
	SQL(DROP_TYPE);
	SQL(DROP_FUNC);
	SQL(DROP_SEQ);
	SQL(DROP_TRIGGER);
	SQL(ALTER_TABLE);
	SQL(ALTER_SEQ);
	SQL(ALTER_USER);
	SQL(DROP_COLUMN);
	SQL(DROP_CONSTRAINT);
	SQL(DROP_DEFAULT);
	SQL(DECLARE);
	SQL(SET);
	SQL(PREP);
	SQL(NAME);
	SQL(USER);
	SQL(PATH);
	SQL(CHARSET);
	SQL(SCHEMA);
	SQL(TABLE);
	SQL(TYPE);
	SQL(CASE);
	SQL(CAST);
	SQL(RETURN);
	SQL(IF);
	SQL(ELSE);
	SQL(WHILE);
	SQL(COLUMN);
	SQL(COLUMN_OPTIONS);
	SQL(COALESCE);
	SQL(CONSTRAINT);
	SQL(CHECK);
	SQL(DEFAULT);
	SQL(NOT_NULL);
	SQL(NULL);
	SQL(NULLIF);
	SQL(UNIQUE);
	SQL(PRIMARY_KEY);
	SQL(FOREIGN_KEY);
	SQL(BEGIN);
#define TR(TYPE) case TR_##TYPE : return #TYPE
	TR(COMMIT);
	TR(ROLLBACK);
	TR(SAVEPOINT);
	TR(RELEASE);
	TR(START);
	TR(MODE);
	SQL(INSERT);
	SQL(DELETE);
	SQL(UPDATE);
	SQL(CROSS);
	SQL(JOIN);
	SQL(SELECT);
	SQL(WHERE);
	SQL(FROM);
	SQL(UNIONJOIN);
	SQL(UNION);
	SQL(EXCEPT);
	SQL(INTERSECT);
	SQL(VALUES);
	SQL(ASSIGN);
	SQL(ORDERBY);
	SQL(GROUPBY);
	SQL(DESC);
	SQL(AND);
	SQL(OR);
	SQL(NOT);
	SQL(EXISTS);
	SQL(NOT_EXISTS);
	SQL(OP);
	SQL(UNOP);
	SQL(BINOP);
	SQL(NOP);
	SQL(BETWEEN);
	SQL(NOT_BETWEEN);
	SQL(LIKE);
	SQL(IN);
	SQL(NOT_IN);
	SQL(GRANT);
	SQL(GRANT_ROLES);
	SQL(REVOKE);
	SQL(REVOKE_ROLES);
	SQL(EXECUTE);
	SQL(PRIVILEGES);
	SQL(ROLE);
	SQL(PARAMETER);
	SQL(FUNC);
	SQL(AGGR);
	SQL(RANK);
	SQL(FRAME);
	SQL(COMPARE);
	SQL(FILTER);
	SQL(TEMP_LOCAL);
	SQL(TEMP_GLOBAL);
	SQL(INT_VALUE);
	SQL(ATOM);
	SQL(USING);
	SQL(WHEN);
	SQL(ESCAPE);
	SQL(COPYFROM);
	SQL(BINCOPYFROM);
	SQL(COPYTO);
	SQL(EXPORT);
	SQL(NEXT);
	SQL(MULSTMT);
	SQL(WITH);
	SQL(XMLCOMMENT);
	SQL(XMLCONCAT);
	SQL(XMLDOCUMENT);
	SQL(XMLELEMENT);
	SQL(XMLATTRIBUTE);
	SQL(XMLFOREST);
	SQL(XMLPARSE);
	SQL(XMLPI);
	SQL(XMLQUERY);
	SQL(XMLTEXT);
	SQL(XMLVALIDATE);
	SQL(XMLNAMESPACES);
	}
	return "unknown";	/* just needed for broken compilers ! */
}

void *sql_error( mvc * sql, int error_code, char *format, ... )
{
	va_list	ap;

	va_start (ap,format);
	if (sql->errstr[0] == '\0') 
		vsnprintf(sql->errstr, ERRSIZE-1, _(format), ap);
	if (!sql->session->status)
		sql->session->status = -error_code;
	va_end (ap);
	return NULL;
}

int sqlerror(mvc * c, const char *err)
{
	char *sqlstate = "42000!";
	if (err && *err == '\b') {
		sqlstate = "";
		err++;
	}
	if (c->scanner.errstr) {
		if (c->scanner.errstr[0] == '!')
			(void)sql_error(c, 4,
					"!%s%s: %s\n",
					sqlstate, err, c->scanner.errstr + 1);
		else
			(void)sql_error(c, 4,
					"!%s%s: %s in \"%.80s\"\n",
					sqlstate, err, c->scanner.errstr,
					QUERY(c->scanner));
	} else
		(void)sql_error(c, 4,
				"!%s%s in: \"%.80s\"\n",
				sqlstate, err, QUERY(c->scanner));
	return 1;
}


