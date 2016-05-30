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
     ORDERED = 357,
     BY = 358,
     IMPRINTS = 359,
     EXISTS = 360,
     ESCAPE = 361,
     HAVING = 362,
     sqlGROUP = 363,
     sqlNULL = 364,
     FROM = 365,
     FOR = 366,
     MATCH = 367,
     EXTRACT = 368,
     SEQUENCE = 369,
     INCREMENT = 370,
     RESTART = 371,
     MAXVALUE = 372,
     MINVALUE = 373,
     CYCLE = 374,
     NOMAXVALUE = 375,
     NOMINVALUE = 376,
     NOCYCLE = 377,
     NEXT = 378,
     VALUE = 379,
     CACHE = 380,
     GENERATED = 381,
     ALWAYS = 382,
     IDENTITY = 383,
     SERIAL = 384,
     BIGSERIAL = 385,
     AUTO_INCREMENT = 386,
     SCOLON = 387,
     AT = 388,
     XMLCOMMENT = 389,
     XMLCONCAT = 390,
     XMLDOCUMENT = 391,
     XMLELEMENT = 392,
     XMLATTRIBUTES = 393,
     XMLFOREST = 394,
     XMLPARSE = 395,
     STRIP = 396,
     WHITESPACE = 397,
     XMLPI = 398,
     XMLQUERY = 399,
     PASSING = 400,
     XMLTEXT = 401,
     NIL = 402,
     REF = 403,
     ABSENT = 404,
     EMPTY = 405,
     DOCUMENT = 406,
     ELEMENT = 407,
     CONTENT = 408,
     XMLNAMESPACES = 409,
     NAMESPACE = 410,
     XMLVALIDATE = 411,
     RETURNING = 412,
     LOCATION = 413,
     ID = 414,
     ACCORDING = 415,
     XMLSCHEMA = 416,
     URI = 417,
     XMLAGG = 418,
     FILTER = 419,
     UNIONJOIN = 420,
     CORRESPONDING = 421,
     INTERSECT = 422,
     EXCEPT = 423,
     UNION = 424,
     DATA = 425,
     WITH = 426,
     FILTER_FUNC = 427,
     NOT = 428,
     SOME = 429,
     OR = 430,
     ILIKE = 431,
     NOT_ILIKE = 432,
     LIKE = 433,
     NOT_LIKE = 434,
     sqlIN = 435,
     NOT_IN = 436,
     BETWEEN = 437,
     NOT_BETWEEN = 438,
     ANY = 439,
     ALL = 440,
     AND = 441,
     COMPARISON = 442,
     SPLIT_PART = 443,
     POSITION = 444,
     SUBSTRING = 445,
     CONCATSTRING = 446,
     RIGHT_SHIFT_ASSIGN = 447,
     LEFT_SHIFT_ASSIGN = 448,
     RIGHT_SHIFT = 449,
     LEFT_SHIFT = 450,
     UMINUS = 451,
     GEOM_OVERLAP_OR_LEFT = 452,
     GEOM_OVERLAP_OR_BELOW = 453,
     GEOM_OVERLAP_OR_ABOVE = 454,
     GEOM_OVERLAP = 455,
     GEOM_DIST = 456,
     GEOM_ABOVE = 457,
     GEOM_BELOW = 458,
     GEOM_OVERLAP_OR_RIGHT = 459,
     TEMP = 460,
     TEMPORARY = 461,
     STREAM = 462,
     MERGE = 463,
     REMOTE = 464,
     REPLICA = 465,
     ASC = 466,
     DESC = 467,
     AUTHORIZATION = 468,
     CHECK = 469,
     CONSTRAINT = 470,
     CREATE = 471,
     TYPE = 472,
     PROCEDURE = 473,
     FUNCTION = 474,
     AGGREGATE = 475,
     RETURNS = 476,
     EXTERNAL = 477,
     sqlNAME = 478,
     DECLARE = 479,
     CALL = 480,
     LANGUAGE = 481,
     ANALYZE = 482,
     MINMAX = 483,
     SQL_EXPLAIN = 484,
     SQL_PLAN = 485,
     SQL_DEBUG = 486,
     SQL_TRACE = 487,
     PREPARE = 488,
     EXECUTE = 489,
     DEFAULT = 490,
     DISTINCT = 491,
     DROP = 492,
     FOREIGN = 493,
     RENAME = 494,
     ENCRYPTED = 495,
     UNENCRYPTED = 496,
     PASSWORD = 497,
     GRANT = 498,
     REVOKE = 499,
     ROLE = 500,
     ADMIN = 501,
     INTO = 502,
     IS = 503,
     KEY = 504,
     ON = 505,
     OPTION = 506,
     OPTIONS = 507,
     PATH = 508,
     PRIMARY = 509,
     PRIVILEGES = 510,
     PUBLIC = 511,
     REFERENCES = 512,
     SCHEMA = 513,
     SET = 514,
     AUTO_COMMIT = 515,
     RETURN = 516,
     ALTER = 517,
     ADD = 518,
     TABLE = 519,
     COLUMN = 520,
     TO = 521,
     UNIQUE = 522,
     VALUES = 523,
     VIEW = 524,
     WHERE = 525,
     sqlDATE = 526,
     TIME = 527,
     TIMESTAMP = 528,
     INTERVAL = 529,
     YEAR = 530,
     MONTH = 531,
     DAY = 532,
     HOUR = 533,
     MINUTE = 534,
     SECOND = 535,
     ZONE = 536,
     LIMIT = 537,
     OFFSET = 538,
     SAMPLE = 539,
     CASE = 540,
     WHEN = 541,
     THEN = 542,
     ELSE = 543,
     NULLIF = 544,
     COALESCE = 545,
     IF = 546,
     ELSEIF = 547,
     WHILE = 548,
     DO = 549,
     ATOMIC = 550,
     BEGIN = 551,
     END = 552,
     COPY = 553,
     RECORDS = 554,
     DELIMITERS = 555,
     STDIN = 556,
     STDOUT = 557,
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
#define ORDERED 357
#define BY 358
#define IMPRINTS 359
#define EXISTS 360
#define ESCAPE 361
#define HAVING 362
#define sqlGROUP 363
#define sqlNULL 364
#define FROM 365
#define FOR 366
#define MATCH 367
#define EXTRACT 368
#define SEQUENCE 369
#define INCREMENT 370
#define RESTART 371
#define MAXVALUE 372
#define MINVALUE 373
#define CYCLE 374
#define NOMAXVALUE 375
#define NOMINVALUE 376
#define NOCYCLE 377
#define NEXT 378
#define VALUE 379
#define CACHE 380
#define GENERATED 381
#define ALWAYS 382
#define IDENTITY 383
#define SERIAL 384
#define BIGSERIAL 385
#define AUTO_INCREMENT 386
#define SCOLON 387
#define AT 388
#define XMLCOMMENT 389
#define XMLCONCAT 390
#define XMLDOCUMENT 391
#define XMLELEMENT 392
#define XMLATTRIBUTES 393
#define XMLFOREST 394
#define XMLPARSE 395
#define STRIP 396
#define WHITESPACE 397
#define XMLPI 398
#define XMLQUERY 399
#define PASSING 400
#define XMLTEXT 401
#define NIL 402
#define REF 403
#define ABSENT 404
#define EMPTY 405
#define DOCUMENT 406
#define ELEMENT 407
#define CONTENT 408
#define XMLNAMESPACES 409
#define NAMESPACE 410
#define XMLVALIDATE 411
#define RETURNING 412
#define LOCATION 413
#define ID 414
#define ACCORDING 415
#define XMLSCHEMA 416
#define URI 417
#define XMLAGG 418
#define FILTER 419
#define UNIONJOIN 420
#define CORRESPONDING 421
#define INTERSECT 422
#define EXCEPT 423
#define UNION 424
#define DATA 425
#define WITH 426
#define FILTER_FUNC 427
#define NOT 428
#define SOME 429
#define OR 430
#define ILIKE 431
#define NOT_ILIKE 432
#define LIKE 433
#define NOT_LIKE 434
#define sqlIN 435
#define NOT_IN 436
#define BETWEEN 437
#define NOT_BETWEEN 438
#define ANY 439
#define ALL 440
#define AND 441
#define COMPARISON 442
#define SPLIT_PART 443
#define POSITION 444
#define SUBSTRING 445
#define CONCATSTRING 446
#define RIGHT_SHIFT_ASSIGN 447
#define LEFT_SHIFT_ASSIGN 448
#define RIGHT_SHIFT 449
#define LEFT_SHIFT 450
#define UMINUS 451
#define GEOM_OVERLAP_OR_LEFT 452
#define GEOM_OVERLAP_OR_BELOW 453
#define GEOM_OVERLAP_OR_ABOVE 454
#define GEOM_OVERLAP 455
#define GEOM_DIST 456
#define GEOM_ABOVE 457
#define GEOM_BELOW 458
#define GEOM_OVERLAP_OR_RIGHT 459
#define TEMP 460
#define TEMPORARY 461
#define STREAM 462
#define MERGE 463
#define REMOTE 464
#define REPLICA 465
#define ASC 466
#define DESC 467
#define AUTHORIZATION 468
#define CHECK 469
#define CONSTRAINT 470
#define CREATE 471
#define TYPE 472
#define PROCEDURE 473
#define FUNCTION 474
#define AGGREGATE 475
#define RETURNS 476
#define EXTERNAL 477
#define sqlNAME 478
#define DECLARE 479
#define CALL 480
#define LANGUAGE 481
#define ANALYZE 482
#define MINMAX 483
#define SQL_EXPLAIN 484
#define SQL_PLAN 485
#define SQL_DEBUG 486
#define SQL_TRACE 487
#define PREPARE 488
#define EXECUTE 489
#define DEFAULT 490
#define DISTINCT 491
#define DROP 492
#define FOREIGN 493
#define RENAME 494
#define ENCRYPTED 495
#define UNENCRYPTED 496
#define PASSWORD 497
#define GRANT 498
#define REVOKE 499
#define ROLE 500
#define ADMIN 501
#define INTO 502
#define IS 503
#define KEY 504
#define ON 505
#define OPTION 506
#define OPTIONS 507
#define PATH 508
#define PRIMARY 509
#define PRIVILEGES 510
#define PUBLIC 511
#define REFERENCES 512
#define SCHEMA 513
#define SET 514
#define AUTO_COMMIT 515
#define RETURN 516
#define ALTER 517
#define ADD 518
#define TABLE 519
#define COLUMN 520
#define TO 521
#define UNIQUE 522
#define VALUES 523
#define VIEW 524
#define WHERE 525
#define sqlDATE 526
#define TIME 527
#define TIMESTAMP 528
#define INTERVAL 529
#define YEAR 530
#define MONTH 531
#define DAY 532
#define HOUR 533
#define MINUTE 534
#define SECOND 535
#define ZONE 536
#define LIMIT 537
#define OFFSET 538
#define SAMPLE 539
#define CASE 540
#define WHEN 541
#define THEN 542
#define ELSE 543
#define NULLIF 544
#define COALESCE 545
#define IF 546
#define ELSEIF 547
#define WHILE 548
#define DO 549
#define ATOMIC 550
#define BEGIN 551
#define END 552
#define COPY 553
#define RECORDS 554
#define DELIMITERS 555
#define STDIN 556
#define STDOUT 557
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
	lng		l_val,operation;
	double		fval;
	char *		sval;
	symbol*		sym;
	dlist*		l;
	sql_subtype	type;
}
/* Line 193 of yacc.c.  */
#line 852 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 120 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"

extern int sqllex( YYSTYPE *yylval, void *m );
/* enable to activate debugging support
int yydebug=1;
*/


/* Line 216 of yacc.c.  */
#line 871 "y.tab.c"

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
#define YYFINAL  223
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   16372

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  343
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  400
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1104
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2034

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
       2,     2,     2,     2,     2,     2,     2,   207,   193,     2,
     172,   173,   205,   191,   337,   192,   338,   206,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   339,     2,
       2,   176,     2,   342,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   340,     2,   341,   195,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   194,     2,   208,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   171,   174,   175,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   209,   210,   211,   212,   213,   214,   215,   216,
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
      25,    29,    30,    34,    37,    38,    40,    43,    45,    47,
      49,    51,    53,    55,    57,    59,    61,    63,    65,    67,
      69,    75,    77,    78,    80,    83,    86,    89,    94,    99,
     104,   108,   113,   117,   122,   127,   134,   139,   141,   144,
     148,   150,   151,   156,   157,   159,   161,   164,   166,   168,
     170,   172,   174,   175,   179,   181,   183,   190,   197,   199,
     203,   204,   208,   209,   213,   214,   217,   224,   231,   232,
     236,   237,   241,   243,   247,   249,   253,   256,   259,   262,
     264,   266,   269,   271,   273,   275,   279,   281,   283,   286,
     289,   292,   294,   296,   300,   302,   304,   311,   318,   324,
     330,   337,   344,   351,   356,   363,   374,   379,   383,   391,
     397,   402,   408,   413,   419,   425,   429,   433,   437,   439,
     440,   443,   446,   449,   451,   453,   455,   457,   459,   464,
     468,   473,   475,   478,   480,   483,   486,   490,   492,   495,
     497,   501,   505,   507,   511,   514,   516,   519,   521,   524,
     526,   528,   538,   540,   542,   544,   545,   549,   560,   561,
     563,   565,   566,   570,   575,   580,   585,   590,   597,   603,
     605,   607,   610,   613,   616,   619,   620,   625,   630,   634,
     638,   640,   645,   646,   650,   653,   655,   659,   661,   663,
     665,   667,   669,   671,   673,   677,   680,   681,   683,   685,
     688,   695,   697,   701,   703,   705,   707,   710,   712,   715,
     721,   723,   724,   728,   731,   732,   735,   738,   740,   742,
     745,   748,   752,   756,   757,   759,   761,   764,   767,   768,
     770,   772,   774,   775,   778,   781,   783,   785,   788,   794,
     796,   799,   803,   812,   817,   819,   823,   826,   833,   835,
     839,   841,   843,   844,   848,   849,   851,   855,   862,   866,
     868,   870,   882,   892,   904,   915,   927,   939,   949,   957,
     959,   965,   972,   973,   977,   978,   982,   984,   986,   988,
     990,   992,   994,   996,   998,  1000,  1002,  1004,  1006,  1008,
    1010,  1012,  1014,  1016,  1018,  1020,  1022,  1024,  1026,  1028,
    1030,  1032,  1034,  1037,  1040,  1045,  1047,  1048,  1050,  1054,
    1057,  1059,  1061,  1066,  1073,  1079,  1084,  1086,  1089,  1094,
    1096,  1099,  1100,  1103,  1111,  1112,  1115,  1121,  1130,  1131,
    1134,  1135,  1137,  1140,  1145,  1150,  1152,  1154,  1156,  1157,
    1162,  1165,  1175,  1177,  1179,  1181,  1183,  1185,  1189,  1190,
    1193,  1195,  1198,  1203,  1208,  1213,  1218,  1219,  1221,  1222,
    1224,  1228,  1229,  1233,  1235,  1237,  1238,  1241,  1243,  1248,
    1252,  1257,  1261,  1265,  1270,  1274,  1280,  1287,  1293,  1299,
    1304,  1309,  1313,  1317,  1321,  1325,  1326,  1330,  1333,  1335,
    1339,  1340,  1342,  1344,  1346,  1348,  1350,  1352,  1354,  1356,
    1358,  1362,  1365,  1369,  1374,  1378,  1383,  1387,  1388,  1390,
    1392,  1396,  1399,  1402,  1406,  1410,  1413,  1416,  1419,  1421,
    1423,  1424,  1427,  1431,  1432,  1433,  1437,  1451,  1465,  1474,
    1481,  1488,  1489,  1493,  1495,  1499,  1501,  1504,  1505,  1509,
    1515,  1523,  1524,  1526,  1527,  1530,  1533,  1538,  1543,  1544,
    1548,  1549,  1551,  1552,  1555,  1556,  1559,  1561,  1565,  1567,
    1571,  1576,  1582,  1587,  1593,  1594,  1597,  1600,  1602,  1606,
    1612,  1614,  1618,  1620,  1624,  1626,  1628,  1630,  1632,  1634,
    1635,  1637,  1639,  1641,  1645,  1649,  1653,  1654,  1657,  1661,
    1666,  1671,  1676,  1681,  1687,  1693,  1695,  1698,  1700,  1702,
    1704,  1706,  1709,  1712,  1714,  1718,  1722,  1724,  1731,  1733,
    1735,  1737,  1742,  1749,  1755,  1757,  1761,  1763,  1769,  1775,
    1781,  1785,  1787,  1788,  1790,  1792,  1793,  1795,  1801,  1803,
    1808,  1809,  1812,  1814,  1818,  1820,  1823,  1826,  1828,  1830,
    1833,  1835,  1837,  1838,  1844,  1850,  1853,  1858,  1860,  1861,
    1865,  1867,  1871,  1872,  1875,  1879,  1881,  1885,  1887,  1888,
    1892,  1893,  1896,  1899,  1900,  1903,  1906,  1907,  1910,  1913,
    1916,  1918,  1922,  1925,  1926,  1928,  1930,  1932,  1934,  1936,
    1938,  1940,  1942,  1944,  1946,  1948,  1951,  1953,  1957,  1961,
    1968,  1975,  1976,  1978,  1980,  1984,  1988,  1992,  1996,  1998,
    2002,  2007,  2011,  2017,  2023,  2031,  2039,  2041,  2045,  2050,
    2055,  2057,  2059,  2061,  2064,  2066,  2070,  2074,  2078,  2082,
    2087,  2091,  2093,  2097,  2101,  2105,  2109,  2113,  2117,  2121,
    2125,  2129,  2133,  2137,  2141,  2145,  2149,  2153,  2157,  2161,
    2165,  2170,  2173,  2177,  2181,  2185,  2189,  2192,  2195,  2199,
    2201,  2203,  2205,  2207,  2209,  2211,  2213,  2215,  2217,  2219,
    2224,  2226,  2228,  2230,  2232,  2234,  2236,  2238,  2240,  2246,
    2250,  2252,  2256,  2257,  2261,  2262,  2266,  2267,  2271,  2273,
    2275,  2277,  2279,  2282,  2284,  2287,  2290,  2295,  2298,  2300,
    2303,  2306,  2307,  2311,  2314,  2317,  2321,  2324,  2328,  2333,
    2335,  2339,  2341,  2343,  2345,  2347,  2354,  2357,  2360,  2363,
    2366,  2369,  2370,  2373,  2382,  2391,  2398,  2405,  2412,  2416,
    2425,  2427,  2431,  2433,  2437,  2441,  2444,  2445,  2448,  2450,
    2452,  2456,  2458,  2462,  2464,  2468,  2473,  2480,  2486,  2492,
    2497,  2504,  2506,  2508,  2510,  2511,  2515,  2516,  2520,  2521,
    2525,  2526,  2528,  2532,  2536,  2538,  2540,  2542,  2544,  2546,
    2548,  2550,  2553,  2555,  2558,  2561,  2564,  2568,  2570,  2573,
    2575,  2577,  2579,  2581,  2583,  2585,  2587,  2589,  2591,  2594,
    2599,  2604,  2606,  2609,  2612,  2615,  2618,  2620,  2622,  2627,
    2629,  2633,  2639,  2641,  2645,  2651,  2658,  2665,  2667,  2674,
    2679,  2685,  2690,  2692,  2696,  2700,  2704,  2709,  2711,  2714,
    2719,  2721,  2724,  2725,  2728,  2730,  2732,  2734,  2736,  2738,
    2740,  2742,  2744,  2749,  2754,  2759,  2761,  2766,  2768,  2770,
    2772,  2774,  2776,  2778,  2783,  2790,  2792,  2797,  2804,  2806,
    2809,  2811,  2813,  2815,  2817,  2822,  2824,  2829,  2836,  2838,
    2843,  2845,  2850,  2857,  2859,  2861,  2863,  2865,  2867,  2869,
    2872,  2874,  2876,  2880,  2882,  2886,  2888,  2890,  2892,  2894,
    2896,  2898,  2900,  2902,  2904,  2906,  2908,  2910,  2912,  2914,
    2916,  2918,  2920,  2922,  2924,  2926,  2928,  2930,  2932,  2934,
    2936,  2938,  2940,  2942,  2944,  2946,  2948,  2950,  2952,  2954,
    2956,  2958,  2960,  2962,  2964,  2966,  2968,  2970,  2972,  2974,
    2976,  2978,  2980,  2982,  2984,  2986,  2988,  2990,  2992,  2994,
    2996,  2998,  3000,  3002,  3004,  3006,  3008,  3010,  3012,  3014,
    3016,  3018,  3020,  3022,  3024,  3026,  3028,  3030,  3032,  3034,
    3036,  3038,  3040,  3042,  3044,  3046,  3048,  3050,  3052,  3054,
    3056,  3058,  3060,  3062,  3064,  3066,  3070,  3072,  3074,  3076,
    3078,  3081,  3084,  3088,  3093,  3094,  3096,  3099,  3101,  3103,
    3105,  3109,  3111,  3113,  3115,  3117,  3119,  3121,  3123,  3125,
    3127,  3129,  3131,  3137,  3143,  3149,  3157,  3158,  3161,  3166,
    3173,  3178,  3181,  3186,  3189,  3191,  3196,  3198,  3202,  3205,
    3206,  3209,  3211,  3213,  3216,  3218,  3222,  3224,  3225,  3228,
    3232,  3236,  3240,  3244,  3249,  3257,  3258,  3261,  3263,  3267,
    3270,  3272,  3273,  3276,  3278,  3285,  3288,  3291,  3299,  3301,
    3302,  3305,  3314,  3316,  3317,  3321,  3323,  3325,  3329,  3331,
    3333,  3336,  3341,  3342,  3344,  3348,  3352,  3358,  3365,  3367,
    3369,  3371,  3373,  3374,  3377,  3380,  3385,  3387,  3391,  3393,
    3395,  3397,  3399,  3403,  3406,  3409,  3410,  3412,  3415,  3418,
    3419,  3421,  3427,  3429,  3431,  3435,  3439,  3441,  3443,  3444,
    3447,  3449,  3452,  3454,  3455,  3457,  3459,  3462,  3463,  3465,
    3468,  3471,  3474,  3476,  3478
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     344,     0,    -1,   354,   132,    -1,    -1,   245,   345,   354,
     132,    -1,    -1,   242,   346,   354,   132,    -1,    -1,   241,
     347,   354,   132,    -1,    -1,   243,   348,   344,    -1,    -1,
     244,   349,   344,    -1,   663,   132,    -1,    -1,   132,    -1,
       1,   132,    -1,    51,    -1,   228,    -1,   249,    -1,   271,
      -1,   236,    -1,   359,    -1,   368,    -1,   373,    -1,   390,
      -1,   488,    -1,   385,    -1,   356,    -1,   358,    -1,   239,
     631,   440,   562,   355,    -1,   453,    -1,    -1,   240,    -1,
     353,   357,    -1,   353,   402,    -1,   434,   648,    -1,   357,
     337,   434,   648,    -1,   352,   657,   176,   523,    -1,   352,
      63,   225,   657,    -1,   352,   270,   657,    -1,   352,   628,
     176,   657,    -1,   352,   257,   657,    -1,   352,   284,   293,
      58,    -1,   352,   284,   293,   630,    -1,   350,   270,   360,
     362,   665,   363,    -1,   351,   270,   631,   491,    -1,   657,
      -1,   225,   361,    -1,   657,   225,   361,    -1,   657,    -1,
      -1,   247,    20,   271,   657,    -1,    -1,   364,    -1,   365,
      -1,   364,   365,    -1,   368,    -1,   373,    -1,   390,    -1,
     488,    -1,   385,    -1,    -1,   171,   258,   367,    -1,    56,
      -1,    62,    -1,   255,   376,   278,   383,   370,   372,    -1,
     255,   369,   278,   383,   371,   372,    -1,   655,    -1,   369,
     337,   655,    -1,    -1,   171,   255,   263,    -1,    -1,   171,
     258,   263,    -1,    -1,   110,   367,    -1,   256,   374,   376,
     110,   383,   372,    -1,   256,   375,   369,   110,   383,   372,
      -1,    -1,   255,   263,   111,    -1,    -1,   258,   263,   111,
      -1,   377,    -1,   380,   262,   379,    -1,   378,    -1,   378,
     337,   378,    -1,   310,   110,    -1,   310,   259,    -1,   276,
     631,    -1,   631,    -1,   487,    -1,   188,   267,    -1,   188,
      -1,   381,    -1,   382,    -1,   381,   337,   382,    -1,    67,
      -1,    64,    -1,    65,   440,    -1,    66,   440,    -1,   269,
     440,    -1,   246,    -1,   384,    -1,   383,   337,   384,    -1,
     268,    -1,   655,    -1,   274,   276,   631,   275,   389,   409,
      -1,   274,   276,   631,   275,   276,   631,    -1,   274,   276,
     631,   274,   387,    -1,   274,   276,   631,   249,   388,    -1,
     274,   276,   631,   271,    87,    89,    -1,   274,   276,   631,
     271,    67,    89,    -1,   274,   276,   631,   271,    87,    88,
      -1,   274,    55,   657,   386,    -1,   274,    55,   657,   251,
     278,   657,    -1,   274,    55,   271,   400,   254,   662,    16,
     324,   254,   662,    -1,   171,   400,   254,   662,    -1,   271,
     270,   657,    -1,   171,   400,   254,   662,   271,   270,   657,
      -1,   389,   657,   271,   247,   419,    -1,   389,   657,   271,
     109,    -1,   389,   657,   271,   175,   109,    -1,   389,   657,
     249,   247,    -1,   389,   657,   271,    98,     3,    -1,   389,
     657,   271,    98,   109,    -1,   389,   657,   491,    -1,   227,
     657,   491,    -1,   276,   657,   491,    -1,   277,    -1,    -1,
     350,   399,    -1,   350,   402,    -1,   350,   436,    -1,   442,
      -1,   445,    -1,   397,    -1,   391,    -1,   474,    -1,   350,
     114,   631,   392,    -1,   351,   114,   631,    -1,   274,   114,
     631,   393,    -1,   394,    -1,   392,   394,    -1,   395,    -1,
     393,   395,    -1,   316,   648,    -1,    85,   171,   646,    -1,
     396,    -1,   316,   648,    -1,   116,    -1,   116,   171,   646,
      -1,   116,   171,   582,    -1,   396,    -1,   115,   103,   645,
      -1,   118,   645,    -1,   121,    -1,   117,   645,    -1,   120,
      -1,   125,   645,    -1,   119,    -1,   122,    -1,   350,   398,
     315,   657,   262,   631,   172,   434,   173,    -1,   279,    -1,
     102,    -1,   104,    -1,    -1,   257,   657,   366,    -1,    55,
     657,   171,   400,   254,   662,   235,   662,   270,   657,    -1,
      -1,   253,    -1,   252,    -1,    -1,    98,   657,     3,    -1,
     276,   631,   405,   401,    -1,   219,   276,   631,   405,    -1,
     220,   276,   631,   405,    -1,   222,   276,   631,   405,    -1,
     221,   276,   631,   405,   262,     3,    -1,   403,   276,   631,
     405,   404,    -1,   218,    -1,   217,    -1,    58,   218,    -1,
      58,   217,    -1,    17,   218,    -1,    17,   217,    -1,    -1,
     262,    76,    64,    84,    -1,   262,    76,    83,    84,    -1,
     262,    76,   249,    -1,   172,   408,   173,    -1,   406,    -1,
     440,   316,   437,   407,    -1,    -1,   171,    82,   170,    -1,
     171,   170,    -1,   410,    -1,   408,   337,   410,    -1,   412,
      -1,   423,    -1,   409,    -1,   415,    -1,   435,    -1,   129,
      -1,   130,    -1,   654,   648,   413,    -1,   654,   411,    -1,
      -1,   414,    -1,   417,    -1,   414,   417,    -1,   657,   171,
     264,   172,   416,   173,    -1,   417,    -1,   416,   337,   417,
      -1,   418,    -1,   420,    -1,   421,    -1,   247,   419,    -1,
     583,    -1,   424,   431,    -1,   126,   127,   316,   128,   422,
      -1,   131,    -1,    -1,   172,   392,   173,    -1,   424,   432,
      -1,    -1,   227,   657,    -1,    82,    41,    -1,    42,    -1,
      43,    -1,   271,   109,    -1,   271,   247,    -1,   262,    65,
     425,    -1,   262,    64,   425,    -1,    -1,   426,    -1,   427,
      -1,   427,   426,    -1,   426,   427,    -1,    -1,    70,    -1,
      39,    -1,    40,    -1,    -1,   112,   429,    -1,   175,   109,
      -1,   109,    -1,   279,    -1,   266,   261,    -1,   269,   631,
     440,   430,   428,    -1,   433,    -1,   279,   441,    -1,   266,
     261,   441,    -1,   250,   261,   441,   269,   631,   440,   430,
     428,    -1,   226,   172,   557,   173,    -1,   657,    -1,   434,
     337,   657,    -1,   181,   631,    -1,   281,   631,   440,   316,
     437,   439,    -1,   438,    -1,   172,   437,   173,    -1,   540,
      -1,   534,    -1,    -1,   171,   226,   263,    -1,    -1,   441,
      -1,   172,   434,   173,    -1,   350,   229,   631,   234,   235,
     657,    -1,   657,   338,   657,    -1,     4,    -1,   662,    -1,
     350,   231,   631,   172,   472,   173,   233,   471,   234,   235,
     443,    -1,   350,   231,   631,   172,   472,   173,   233,   471,
     446,    -1,   350,   231,   631,   172,   472,   173,   233,   471,
     238,     5,   444,    -1,   350,   164,   231,   631,   172,   472,
     173,   234,   235,   443,    -1,   350,   232,   631,   172,   472,
     173,   233,   471,   234,   235,   443,    -1,   350,   232,   631,
     172,   472,   173,   233,   471,   238,     5,   444,    -1,   350,
     230,   631,   172,   472,   173,   234,   235,   443,    -1,   350,
     230,   631,   172,   472,   173,   446,    -1,   449,    -1,   308,
     447,   449,   132,   309,    -1,   308,   307,   447,   449,   132,
     309,    -1,    -1,   447,   449,   132,    -1,    -1,   448,   450,
     132,    -1,   493,    -1,   492,    -1,   359,    -1,   368,    -1,
     373,    -1,   390,    -1,   488,    -1,   385,    -1,   356,    -1,
     358,    -1,   451,    -1,   539,    -1,   493,    -1,   492,    -1,
     368,    -1,   373,    -1,   356,    -1,   358,    -1,   451,    -1,
     539,    -1,   453,    -1,   452,    -1,   467,    -1,   465,    -1,
     459,    -1,   457,    -1,   237,   454,    -1,   237,   602,    -1,
     455,   172,   456,   173,    -1,   631,    -1,    -1,   584,    -1,
     456,   337,   584,    -1,   273,   458,    -1,   438,    -1,   557,
      -1,   276,   172,   438,   173,    -1,   297,   584,   461,   464,
     309,   297,    -1,   297,   463,   464,   309,   297,    -1,   298,
     584,   299,   447,    -1,   460,    -1,   461,   460,    -1,   298,
     557,   299,   447,    -1,   462,    -1,   463,   462,    -1,    -1,
     300,   447,    -1,   303,   557,   299,   447,   466,   309,   303,
      -1,    -1,   300,   447,    -1,   304,   557,   299,   447,   466,
      -1,   468,   305,   557,   306,   447,   309,   305,   469,    -1,
      -1,   657,   339,    -1,    -1,   657,    -1,   654,   648,    -1,
     470,   337,   654,   648,    -1,   276,   172,   470,   173,    -1,
     648,    -1,   473,    -1,   205,    -1,    -1,   473,   337,   657,
     648,    -1,   657,   648,    -1,   350,   317,   631,   475,   476,
     262,   657,   477,   482,    -1,   319,    -1,   320,    -1,    67,
      -1,    64,    -1,    65,    -1,    65,   318,   434,    -1,    -1,
     326,   478,    -1,   479,    -1,   478,   479,    -1,   324,   481,
     480,   657,    -1,   323,   481,   480,   657,    -1,   324,   276,
     480,   657,    -1,   323,   276,   480,   657,    -1,    -1,   316,
      -1,    -1,   321,    -1,   483,   485,   486,    -1,    -1,   111,
     325,   484,    -1,   321,    -1,   322,    -1,    -1,   298,   557,
      -1,   450,    -1,   308,   307,   448,   309,    -1,   231,   631,
     489,    -1,   164,   231,   631,   489,    -1,   232,   631,   489,
      -1,   230,   631,   489,    -1,   351,   276,   631,   491,    -1,
     351,   487,   491,    -1,   351,   188,   231,   631,   491,    -1,
     351,   188,   164,   231,   631,   491,    -1,   351,   188,   232,
     631,   491,    -1,   351,   188,   230,   631,   491,    -1,   351,
     281,   631,   491,    -1,   351,   229,   631,   491,    -1,   351,
     257,   657,    -1,   351,    55,   657,    -1,   351,   315,   631,
      -1,   351,   317,   631,    -1,    -1,   172,   490,   173,    -1,
     172,   173,    -1,   648,    -1,   648,   337,   490,    -1,    -1,
      43,    -1,    42,    -1,   493,    -1,   492,    -1,   515,    -1,
     517,    -1,   516,    -1,   502,    -1,   494,    -1,    76,   499,
     500,    -1,    78,   657,    -1,    79,    78,   657,    -1,    77,
     499,   500,   501,    -1,    85,    86,   495,    -1,   271,    58,
      86,   495,    -1,   271,    86,   495,    -1,    -1,   496,    -1,
     497,    -1,   496,   337,   497,    -1,    87,    89,    -1,    87,
      88,    -1,    90,    91,   498,    -1,    96,    97,   661,    -1,
      87,    92,    -1,    87,    93,    -1,    94,    87,    -1,    95,
      -1,    80,    -1,    -1,   189,    81,    -1,   189,    82,    81,
      -1,    -1,    -1,   278,    78,   657,    -1,   310,   508,   259,
     631,   440,   110,   513,   503,   506,   509,   510,   511,   512,
      -1,   310,   508,   259,   631,   440,   110,   313,   503,   506,
     509,   510,   511,   512,    -1,   310,   508,    27,   259,   631,
     110,   513,   512,    -1,   310,   437,   259,   662,   506,   509,
      -1,   310,   437,   259,   314,   506,   509,    -1,    -1,   172,
     504,   173,    -1,   505,    -1,   504,   337,   505,    -1,   657,
      -1,   657,     3,    -1,    -1,   507,   312,   662,    -1,   507,
     312,   662,   337,   662,    -1,   507,   312,   662,   337,   662,
     337,   662,    -1,    -1,    16,    -1,    -1,   646,   311,    -1,
     295,   646,    -1,   646,   295,   646,   311,    -1,   646,   311,
     295,   646,    -1,    -1,   109,   480,   662,    -1,    -1,    59,
      -1,    -1,    60,    61,    -1,    -1,    82,   227,    -1,   514,
      -1,   172,   514,   173,    -1,   662,    -1,   514,   337,   662,
      -1,    64,   110,   631,   529,    -1,    65,   631,   271,   527,
     529,    -1,    67,   259,   631,   518,    -1,    67,   259,   631,
     441,   518,    -1,    -1,   247,   280,    -1,   280,   519,    -1,
     438,    -1,   172,   520,   173,    -1,   519,   337,   172,   520,
     173,    -1,   524,    -1,   520,   337,   524,    -1,   525,    -1,
     521,   337,   525,    -1,   109,    -1,   584,    -1,   523,    -1,
     523,    -1,   543,    -1,    -1,   188,    -1,   248,    -1,   528,
      -1,   527,   337,   528,    -1,   654,   176,   557,    -1,   441,
     176,   582,    -1,    -1,   282,   557,    -1,   172,   530,   173,
      -1,   551,    73,    74,   551,    -1,   551,   165,   551,   533,
      -1,   551,    74,   551,   533,    -1,   551,    72,    74,   551,
      -1,   551,   531,    74,   551,   533,    -1,   551,    72,   531,
      74,   551,    -1,    75,    -1,   532,    71,    -1,   532,    -1,
      68,    -1,    69,    -1,    70,    -1,   262,   557,    -1,    16,
     441,    -1,   534,    -1,   171,   535,   537,    -1,   535,   337,
     536,    -1,   536,    -1,   657,   440,   316,   172,   537,   173,
      -1,   540,    -1,   539,    -1,   540,    -1,    66,   526,   546,
     547,    -1,    66,   526,   546,   259,   541,   547,    -1,   543,
     559,   560,   561,   562,    -1,   542,    -1,   541,   337,   542,
      -1,   657,    -1,   543,   169,   544,   545,   543,    -1,   543,
     168,   544,   545,   543,    -1,   543,   167,   544,   545,   543,
      -1,   172,   543,   173,    -1,   538,    -1,    -1,   188,    -1,
     248,    -1,    -1,   166,    -1,   166,   103,   172,   555,   173,
      -1,   608,    -1,   548,   529,   554,   556,    -1,    -1,   110,
     549,    -1,   551,    -1,   549,   337,   551,    -1,   631,    -1,
     631,   553,    -1,   602,   553,    -1,   602,    -1,   550,    -1,
     582,   553,    -1,   582,    -1,   530,    -1,    -1,   340,   552,
     543,   341,   553,    -1,   316,   657,   172,   659,   173,    -1,
     316,   657,    -1,   657,   172,   659,   173,    -1,   657,    -1,
      -1,   108,   103,   555,    -1,   632,    -1,   555,   337,   632,
      -1,    -1,   107,   557,    -1,   558,   178,   557,    -1,   558,
      -1,   567,   189,   558,    -1,   567,    -1,    -1,   101,   103,
     563,    -1,    -1,   294,   645,    -1,   294,   586,    -1,    -1,
     295,   646,    -1,   295,   586,    -1,    -1,   296,   646,    -1,
     296,    14,    -1,   296,   586,    -1,   564,    -1,   563,   337,
     564,    -1,   584,   565,    -1,    -1,   223,    -1,   224,    -1,
     568,    -1,   569,    -1,   571,    -1,   573,    -1,   574,    -1,
     576,    -1,   578,    -1,   581,    -1,   584,    -1,   175,   567,
      -1,   566,    -1,   567,   190,   567,    -1,   567,   176,   567,
      -1,   567,   186,   570,   567,   189,   567,    -1,   567,   185,
     570,   567,   189,   567,    -1,    -1,    99,    -1,   100,    -1,
     567,   182,   572,    -1,   567,   180,   572,    -1,   567,   181,
     572,    -1,   567,   179,   572,    -1,   584,    -1,   584,   106,
     662,    -1,   584,   260,   175,   109,    -1,   584,   260,   109,
      -1,   567,   184,   172,   521,   173,    -1,   567,   183,   172,
     521,   173,    -1,   172,   575,   173,   184,   172,   521,   173,
      -1,   172,   575,   173,   183,   172,   521,   173,    -1,   567,
      -1,   575,   337,   567,    -1,   567,   190,   577,   582,    -1,
     567,   176,   577,   567,    -1,   187,    -1,   177,    -1,   188,
      -1,   105,   582,    -1,   567,    -1,   579,   337,   567,    -1,
     340,   579,   341,    -1,   580,   631,   580,    -1,   172,   543,
     173,    -1,   172,   280,   519,   173,    -1,   172,   534,   173,
      -1,   585,    -1,   584,   191,   584,    -1,   584,   192,   584,
      -1,   584,   205,   584,    -1,   584,   206,   584,    -1,   584,
     207,   584,    -1,   584,   195,   584,    -1,   584,   193,   584,
      -1,   584,   212,   584,    -1,   584,   209,   584,    -1,   584,
     216,   584,    -1,   584,   210,   584,    -1,   584,   215,   584,
      -1,   584,   211,   584,    -1,   584,   214,   584,    -1,   584,
     213,   584,    -1,   584,   133,   584,    -1,   584,   194,   584,
      -1,   584,   208,   584,    -1,   584,   208,   176,   584,    -1,
     208,   584,    -1,   584,   203,   584,    -1,   584,   202,   584,
      -1,   584,   201,   584,    -1,   584,   200,   584,    -1,   191,
     584,    -1,   192,   584,    -1,   172,   557,   173,    -1,   583,
      -1,   582,    -1,   611,    -1,   628,    -1,    62,    -1,   587,
      -1,   632,    -1,   601,    -1,   615,    -1,   602,    -1,   123,
     124,   111,   631,    -1,   605,    -1,   607,    -1,   635,    -1,
     633,    -1,   671,    -1,   586,    -1,   522,    -1,   342,    -1,
     588,   327,   172,   589,   173,    -1,   612,   172,   173,    -1,
     615,    -1,   590,   591,   592,    -1,    -1,   328,   103,   555,
      -1,    -1,   101,   103,   563,    -1,    -1,   593,   594,   600,
      -1,    84,    -1,   335,    -1,   595,    -1,   597,    -1,   336,
     332,    -1,   596,    -1,   329,   321,    -1,   585,   332,    -1,
     185,   595,   189,   598,    -1,   336,   331,    -1,   599,    -1,
     329,   321,    -1,   585,   332,    -1,    -1,   330,   329,   321,
      -1,   330,   108,    -1,   330,   334,    -1,   330,    82,   333,
      -1,   133,   657,    -1,   603,   172,   173,    -1,   603,   172,
     636,   173,    -1,   604,    -1,   657,   338,   604,    -1,   657,
      -1,    68,    -1,    69,    -1,    67,    -1,   113,   172,   622,
     110,   584,   173,    -1,    46,   606,    -1,    48,   606,    -1,
      47,   606,    -1,    50,   606,    -1,    49,   606,    -1,    -1,
     172,   173,    -1,   198,   172,   584,   110,   584,   111,   584,
     173,    -1,   198,   172,   584,   337,   584,   337,   584,   173,
      -1,   198,   172,   584,   110,   584,   173,    -1,   198,   172,
     584,   337,   584,   173,    -1,   197,   172,   584,   183,   584,
     173,    -1,   584,   199,   584,    -1,   196,   172,   584,   337,
     584,   337,   584,   173,    -1,   609,    -1,   608,   337,   609,
      -1,   205,    -1,   657,   338,   205,    -1,   602,   338,   205,
      -1,   557,   610,    -1,    -1,   316,   657,    -1,   629,    -1,
      10,    -1,   657,   338,    10,    -1,     8,    -1,   657,   338,
       8,    -1,     9,    -1,   657,   338,     9,    -1,   613,   172,
     205,   173,    -1,   613,   172,   657,   338,   205,   173,    -1,
     613,   172,   248,   643,   173,    -1,   613,   172,   188,   643,
     173,    -1,   613,   172,   643,   173,    -1,   614,   172,   643,
     337,   643,   173,    -1,   742,    -1,   191,    -1,   192,    -1,
      -1,   171,   284,   293,    -1,    -1,   172,   661,   173,    -1,
      -1,   172,   661,   173,    -1,    -1,   283,    -1,   284,   618,
     617,    -1,   285,   619,   617,    -1,   287,    -1,   288,    -1,
     289,    -1,   290,    -1,   291,    -1,   621,    -1,   292,    -1,
     621,   618,    -1,   621,    -1,   292,   619,    -1,   621,   618,
      -1,   292,   619,    -1,   623,   278,   624,    -1,   625,    -1,
     286,   626,    -1,    55,    -1,    57,    -1,    56,    -1,   662,
      -1,    13,    -1,    12,    -1,    11,    -1,    14,    -1,    15,
      -1,   283,   662,    -1,   284,   618,   617,   662,    -1,   285,
     619,   617,   662,    -1,   630,    -1,   653,   662,    -1,     6,
     662,    -1,   650,   662,    -1,     5,   662,    -1,    44,    -1,
      45,    -1,   286,   616,   662,   626,    -1,   657,    -1,   657,
     338,   657,    -1,   657,   338,   657,   338,   657,    -1,   657,
      -1,   657,   338,   657,    -1,   657,   338,   657,   338,   657,
      -1,    18,   172,   634,   316,   648,   173,    -1,    19,   172,
     634,   337,   648,   173,    -1,   557,    -1,   301,   172,   584,
     337,   584,   173,    -1,   302,   172,   637,   173,    -1,   297,
     584,   639,   642,   309,    -1,   297,   641,   642,   309,    -1,
     523,    -1,   636,   337,   523,    -1,   523,   337,   523,    -1,
     637,   337,   523,    -1,   298,   584,   299,   523,    -1,   638,
      -1,   639,   638,    -1,   298,   557,   299,   523,    -1,   640,
      -1,   641,   640,    -1,    -1,   300,   584,    -1,   584,    -1,
     661,    -1,   660,    -1,   660,    -1,   661,    -1,    20,    -1,
     651,    -1,   652,    -1,    20,   172,   644,   173,    -1,   651,
     172,   644,   173,    -1,   652,   172,   644,   173,    -1,   653,
      -1,   653,   172,   644,   173,    -1,    31,    -1,    32,    -1,
      35,    -1,    33,    -1,    34,    -1,    29,    -1,    29,   172,
     644,   173,    -1,    29,   172,   644,   337,   647,   173,    -1,
      30,    -1,    30,   172,   644,   173,    -1,    30,   172,   661,
     337,   661,   173,    -1,    36,    -1,    36,    38,    -1,    37,
      -1,   620,    -1,   627,    -1,     6,    -1,     6,   172,   644,
     173,    -1,   650,    -1,   650,   172,   644,   173,    -1,   650,
     172,   661,   337,   661,   173,    -1,     5,    -1,     5,   172,
     644,   173,    -1,    52,    -1,    52,   172,   649,   173,    -1,
      52,   172,   649,   337,   661,   173,    -1,    54,    -1,    53,
      -1,    53,    -1,   662,    -1,     7,    -1,    24,    -1,    20,
      21,    -1,    25,    -1,    26,    -1,    20,    22,    23,    -1,
      28,    -1,    27,    22,    23,    -1,   657,    -1,   656,    -1,
       5,    -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,     5,    -1,     6,    -1,   174,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,   658,    -1,    22,    -1,
     235,    -1,    23,    -1,   254,    -1,   265,    -1,    38,    -1,
     267,    -1,   257,    -1,    97,    -1,   229,    -1,    79,    -1,
     124,    -1,   293,    -1,    41,    -1,   316,    -1,   225,    -1,
     277,    -1,   119,    -1,   248,    -1,   115,    -1,   117,    -1,
     118,    -1,   242,    -1,   270,    -1,    85,    -1,   322,    -1,
     276,    -1,   125,    -1,   170,    -1,    96,    -1,   112,    -1,
     264,    -1,   321,    -1,   261,    -1,   238,    -1,    91,    -1,
      63,    -1,   283,    -1,   284,    -1,   285,    -1,   286,    -1,
     104,    -1,   245,    -1,   246,    -1,   241,    -1,   243,    -1,
     244,    -1,    26,    -1,   272,    -1,    82,    -1,   141,    -1,
     142,    -1,   145,    -1,   147,    -1,   148,    -1,   149,    -1,
     150,    -1,   151,    -1,   152,    -1,   153,    -1,   155,    -1,
     157,    -1,   158,    -1,   159,    -1,   160,    -1,   162,    -1,
     164,    -1,   218,    -1,   217,    -1,   239,    -1,   240,    -1,
      98,    -1,    52,    -1,   657,    -1,   659,   337,   657,    -1,
      11,    -1,    11,    -1,     5,    -1,     3,    -1,     3,   662,
      -1,   246,   664,    -1,   661,   172,   173,    -1,   661,   172,
     521,   173,    -1,    -1,   666,    -1,   265,   667,    -1,   659,
      -1,   670,    -1,   668,    -1,   669,   337,   668,    -1,   584,
      -1,   672,    -1,   673,    -1,   674,    -1,   675,    -1,   689,
      -1,   696,    -1,   698,    -1,   701,    -1,   711,    -1,   712,
      -1,   134,   172,   585,   715,   173,    -1,   135,   172,   669,
     715,   173,    -1,   136,   172,   668,   715,   173,    -1,   137,
     172,   235,   677,   676,   715,   173,    -1,    -1,   337,   716,
      -1,   337,   716,   337,   678,    -1,   337,   716,   337,   678,
     337,   684,    -1,   337,   716,   337,   684,    -1,   337,   678,
      -1,   337,   678,   337,   684,    -1,   337,   684,    -1,   657,
      -1,   138,   172,   679,   173,    -1,   680,    -1,   679,   337,
     680,    -1,   682,   681,    -1,    -1,   316,   683,    -1,   584,
      -1,   657,    -1,   685,   687,    -1,   686,    -1,   685,   337,
     686,    -1,   584,    -1,    -1,   263,   688,    -1,   109,   262,
     109,    -1,   150,   262,   109,    -1,   149,   262,   109,    -1,
     147,   262,   109,    -1,   147,   262,    82,   153,    -1,   139,
     172,   690,   691,   687,   715,   173,    -1,    -1,   716,   337,
      -1,   692,    -1,   691,   337,   692,    -1,   693,   694,    -1,
     584,    -1,    -1,   316,   695,    -1,   657,    -1,   140,   172,
     714,   585,   697,   173,    -1,    83,   142,    -1,   141,   142,
      -1,   143,   172,   235,   699,   700,   715,   173,    -1,   657,
      -1,    -1,   337,   585,    -1,   144,   172,   702,   703,   715,
     709,   710,   173,    -1,     3,    -1,    -1,   145,   704,   705,
      -1,   724,    -1,   706,    -1,   705,   337,   706,    -1,   707,
      -1,   708,    -1,   585,   723,    -1,   585,   316,   657,   723,
      -1,    -1,   724,    -1,   109,   262,   150,    -1,   150,   262,
     150,    -1,   146,   172,   585,   715,   173,    -1,   156,   172,
     713,   668,   725,   173,    -1,   714,    -1,   114,    -1,   151,
      -1,   153,    -1,    -1,   157,   153,    -1,   157,   114,    -1,
     154,   172,   717,   173,    -1,   718,    -1,   717,   337,   718,
      -1,   721,    -1,   722,    -1,   657,    -1,   584,    -1,   720,
     316,   719,    -1,   247,   720,    -1,    82,   247,    -1,    -1,
     724,    -1,   103,   148,    -1,   103,   124,    -1,    -1,   726,
      -1,   160,   278,   161,   727,   735,    -1,   728,    -1,   733,
      -1,   162,   729,   731,    -1,    82,   155,   731,    -1,   730,
      -1,     3,    -1,    -1,   158,   732,    -1,   730,    -1,   159,
     734,    -1,   657,    -1,    -1,   736,    -1,   738,    -1,   739,
     737,    -1,    -1,   738,    -1,   152,   741,    -1,    82,   155,
      -1,   155,   740,    -1,   730,    -1,   657,    -1,   163,   172,
     668,   559,   715,   173,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   612,   612,   623,   623,   637,   637,   652,   652,   667,
     667,   677,   677,   683,   684,   685,   686,   687,   692,   695,
     698,   701,   705,   706,   707,   708,   709,   710,   711,   712,
     713,   720,   724,   725,   729,   731,   735,   740,   748,   753,
     761,   769,   777,   785,   791,   799,   807,   815,   819,   823,
     830,   833,   834,   838,   839,   843,   844,   848,   848,   848,
     848,   848,   851,   852,   856,   857,   861,   870,   881,   882,
     887,   888,   892,   893,   898,   899,   903,   911,   921,   922,
     926,   927,   931,   935,   942,   943,   948,   949,   953,   954,
     955,   966,   967,   968,   972,   973,   978,   979,   980,   981,
     982,   983,   987,   988,   993,   994,  1000,  1006,  1011,  1016,
    1021,  1026,  1031,  1036,  1041,  1046,  1059,  1065,  1071,  1081,
    1086,  1090,  1094,  1096,  1104,  1112,  1117,  1122,  1130,  1131,
    1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1158,  1169,
    1186,  1196,  1197,  1201,  1202,  1206,  1207,  1208,  1212,  1213,
    1214,  1215,  1216,  1220,  1221,  1222,  1223,  1224,  1225,  1226,
    1227,  1234,  1244,  1245,  1246,  1247,  1267,  1272,  1283,  1284,
    1285,  1289,  1290,  1294,  1305,  1315,  1325,  1338,  1348,  1363,
    1364,  1365,  1366,  1367,  1368,  1372,  1373,  1374,  1375,  1379,
    1380,  1384,  1394,  1395,  1396,  1400,  1402,  1406,  1406,  1407,
    1407,  1407,  1410,  1411,  1415,  1423,  1476,  1477,  1481,  1483,
    1488,  1497,  1499,  1503,  1503,  1503,  1506,  1510,  1514,  1523,
    1552,  1590,  1591,  1596,  1607,  1608,  1612,  1613,  1614,  1615,
    1616,  1620,  1624,  1628,  1629,  1630,  1631,  1632,  1636,  1637,
    1638,  1639,  1643,  1644,  1648,  1649,  1650,  1651,  1652,  1662,
    1666,  1668,  1670,  1685,  1689,  1691,  1696,  1700,  1712,  1713,
    1717,  1718,  1722,  1723,  1727,  1728,  1732,  1736,  1744,  1749,
    1750,  1754,  1767,  1780,  1811,  1824,  1837,  1869,  1881,  1896,
    1898,  1902,  1920,  1921,  1926,  1927,  1932,  1933,  1934,  1935,
    1936,  1937,  1938,  1939,  1940,  1941,  1942,  1943,  1947,  1948,
    1949,  1950,  1951,  1952,  1953,  1954,  1958,  1959,  1960,  1961,
    1962,  1963,  1976,  1980,  1984,  1993,  1996,  1997,  1998,  2004,
    2008,  2009,  2010,  2015,  2021,  2029,  2037,  2039,  2044,  2052,
    2054,  2059,  2060,  2067,  2081,  2082,  2084,  2095,  2116,  2117,
    2121,  2122,  2127,  2131,  2139,  2141,  2146,  2147,  2151,  2155,
    2160,  2209,  2223,  2224,  2228,  2229,  2230,  2231,  2235,  2236,
    2240,  2241,  2247,  2248,  2249,  2250,  2253,  2255,  2258,  2260,
    2264,  2272,  2273,  2277,  2278,  2282,  2283,  2287,  2289,  2295,
    2301,  2307,  2313,  2322,  2327,  2332,  2340,  2348,  2356,  2364,
    2369,  2374,  2375,  2376,  2377,  2381,  2382,  2383,  2387,  2390,
    2395,  2396,  2397,  2402,  2403,  2408,  2409,  2410,  2411,  2415,
    2422,  2424,  2426,  2428,  2432,  2434,  2436,  2441,  2442,  2446,
    2448,  2454,  2455,  2456,  2457,  2461,  2462,  2463,  2464,  2468,
    2469,  2473,  2474,  2475,  2479,  2480,  2484,  2497,  2510,  2520,
    2527,  2537,  2538,  2542,  2543,  2547,  2551,  2560,  2564,  2569,
    2574,  2583,  2584,  2588,  2589,  2590,  2591,  2593,  2598,  2599,
    2603,  2604,  2608,  2609,  2613,  2614,  2618,  2619,  2623,  2624,
    2629,  2638,  2679,  2687,  2698,  2699,  2701,  2703,  2708,  2709,
    2714,  2715,  2720,  2721,  2726,  2743,  2747,  2751,  2752,  2756,
    2757,  2758,  2762,  2763,  2768,  2773,  2781,  2782,  2788,  2790,
    2796,  2804,  2812,  2820,  2828,  2839,  2840,  2841,  2845,  2846,
    2847,  2851,  2852,  2872,  2876,  2886,  2887,  2891,  2903,  2908,
    2910,  2914,  2925,  2936,  2967,  2968,  2973,  2977,  2986,  2995,
    3003,  3004,  3008,  3009,  3010,  3015,  3016,  3018,  3023,  3027,
    3037,  3038,  3042,  3043,  3048,  3052,  3056,  3060,  3067,  3068,
    3078,  3083,  3093,  3092,  3105,  3110,  3115,  3120,  3128,  3129,
    3133,  3135,  3141,  3142,  3147,  3152,  3156,  3161,  3165,  3166,
    3171,  3172,  3176,  3180,  3181,  3185,  3189,  3190,  3194,  3198,
    3202,  3203,  3208,  3217,  3218,  3219,  3223,  3224,  3225,  3226,
    3227,  3228,  3229,  3230,  3231,  3235,  3252,  3256,  3263,  3273,
    3280,  3290,  3291,  3292,  3296,  3303,  3310,  3317,  3327,  3331,
    3349,  3350,  3354,  3360,  3366,  3371,  3379,  3381,  3386,  3394,
    3404,  3405,  3406,  3410,  3414,  3415,  3419,  3423,  3432,  3433,
    3435,  3441,  3442,  3449,  3456,  3463,  3470,  3477,  3484,  3491,
    3498,  3505,  3512,  3519,  3525,  3532,  3539,  3546,  3553,  3560,
    3567,  3574,  3580,  3587,  3594,  3601,  3608,  3610,  3635,  3639,
    3640,  3644,  3645,  3647,  3649,  3650,  3651,  3652,  3653,  3654,
    3655,  3656,  3657,  3658,  3659,  3660,  3661,  3665,  3735,  3741,
    3742,  3746,  3751,  3752,  3757,  3758,  3763,  3764,  3769,  3770,
    3774,  3775,  3779,  3780,  3781,  3785,  3789,  3794,  3795,  3796,
    3800,  3804,  3805,  3806,  3807,  3808,  3812,  3816,  3820,  3848,
    3849,  3854,  3855,  3856,  3857,  3861,  3868,  3873,  3878,  3883,
    3888,  3896,  3897,  3901,  3911,  3921,  3928,  3935,  3942,  3949,
    3962,  3963,  3968,  3973,  3978,  3983,  3991,  3992,  3996,  4018,
    4019,  4024,  4025,  4030,  4031,  4037,  4043,  4049,  4055,  4061,
    4067,  4074,  4078,  4079,  4080,  4084,  4085,  4096,  4098,  4102,
    4104,  4108,  4109,  4115,  4124,  4125,  4126,  4127,  4128,  4132,
    4133,  4137,  4143,  4146,  4152,  4155,  4161,  4164,  4169,  4189,
    4190,  4191,  4195,  4201,  4265,  4296,  4347,  4386,  4403,  4419,
    4435,  4451,  4452,  4469,  4486,  4503,  4524,  4528,  4535,  4580,
    4581,  4585,  4596,  4599,  4603,  4611,  4617,  4625,  4629,  4634,
    4636,  4642,  4650,  4652,  4657,  4661,  4667,  4675,  4677,  4682,
    4690,  4692,  4697,  4698,  4702,  4707,  4718,  4729,  4739,  4749,
    4751,  4756,  4757,  4759,  4761,  4770,  4771,  4780,  4781,  4782,
    4783,  4784,  4786,  4787,  4800,  4818,  4819,  4833,  4853,  4854,
    4855,  4856,  4857,  4858,  4859,  4861,  4862,  4864,  4876,  4890,
    4904,  4907,  4922,  4937,  4940,  4960,  4972,  4987,  5002,  5003,
    5007,  5008,  5009,  5012,  5013,  5016,  5018,  5021,  5022,  5023,
    5024,  5025,  5026,  5030,  5031,  5032,  5033,  5034,  5035,  5036,
    5037,  5041,  5042,  5043,  5044,  5045,  5046,  5047,  5048,  5049,
    5050,  5051,  5052,  5053,  5055,  5056,  5057,  5058,  5059,  5060,
    5061,  5062,  5063,  5064,  5065,  5066,  5067,  5068,  5070,  5071,
    5072,  5073,  5074,  5075,  5076,  5077,  5078,  5079,  5080,  5081,
    5082,  5083,  5084,  5086,  5087,  5088,  5089,  5090,  5091,  5092,
    5093,  5095,  5096,  5097,  5098,  5099,  5100,  5101,  5102,  5103,
    5104,  5105,  5106,  5107,  5108,  5109,  5110,  5111,  5112,  5113,
    5114,  5115,  5116,  5117,  5121,  5122,  5127,  5150,  5171,  5203,
    5205,  5213,  5220,  5225,  5240,  5241,  5245,  5248,  5251,  5255,
    5257,  5262,  5266,  5267,  5268,  5269,  5270,  5271,  5272,  5273,
    5274,  5275,  5279,  5287,  5295,  5302,  5316,  5317,  5321,  5325,
    5329,  5333,  5337,  5341,  5348,  5352,  5356,  5357,  5367,  5375,
    5376,  5380,  5384,  5388,  5395,  5397,  5402,  5406,  5407,  5411,
    5412,  5413,  5414,  5415,  5419,  5432,  5433,  5437,  5439,  5444,
    5450,  5454,  5455,  5459,  5464,  5473,  5474,  5478,  5489,  5493,
    5494,  5499,  5509,  5512,  5514,  5518,  5522,  5523,  5527,  5528,
    5532,  5536,  5539,  5541,  5545,  5546,  5550,  5558,  5567,  5568,
    5572,  5573,  5577,  5578,  5579,  5594,  5598,  5599,  5609,  5610,
    5614,  5618,  5622,  5632,  5636,  5639,  5641,  5645,  5646,  5649,
    5651,  5655,  5660,  5661,  5665,  5666,  5670,  5674,  5677,  5679,
    5683,  5687,  5691,  5694,  5696,  5700,  5701,  5705,  5707,  5711,
    5715,  5716,  5720,  5724,  5728
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
  "ASYMMETRIC", "SYMMETRIC", "ORDER", "ORDERED", "BY", "IMPRINTS",
  "EXISTS", "ESCAPE", "HAVING", "sqlGROUP", "sqlNULL", "FROM", "FOR",
  "MATCH", "EXTRACT", "SEQUENCE", "INCREMENT", "RESTART", "MAXVALUE",
  "MINVALUE", "CYCLE", "NOMAXVALUE", "NOMINVALUE", "NOCYCLE", "NEXT",
  "VALUE", "CACHE", "GENERATED", "ALWAYS", "IDENTITY", "SERIAL",
  "BIGSERIAL", "AUTO_INCREMENT", "SCOLON", "AT", "XMLCOMMENT", "XMLCONCAT",
  "XMLDOCUMENT", "XMLELEMENT", "XMLATTRIBUTES", "XMLFOREST", "XMLPARSE",
  "STRIP", "WHITESPACE", "XMLPI", "XMLQUERY", "PASSING", "XMLTEXT", "NIL",
  "REF", "ABSENT", "EMPTY", "DOCUMENT", "ELEMENT", "CONTENT",
  "XMLNAMESPACES", "NAMESPACE", "XMLVALIDATE", "RETURNING", "LOCATION",
  "ID", "ACCORDING", "XMLSCHEMA", "URI", "XMLAGG", "FILTER", "UNIONJOIN",
  "CORRESPONDING", "INTERSECT", "EXCEPT", "UNION", "DATA", "WITH", "'('",
  "')'", "FILTER_FUNC", "NOT", "'='", "SOME", "OR", "ILIKE", "NOT_ILIKE",
  "LIKE", "NOT_LIKE", "sqlIN", "NOT_IN", "BETWEEN", "NOT_BETWEEN", "ANY",
  "ALL", "AND", "COMPARISON", "'+'", "'-'", "'&'", "'|'", "'^'",
  "SPLIT_PART", "POSITION", "SUBSTRING", "CONCATSTRING",
  "RIGHT_SHIFT_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT", "LEFT_SHIFT",
  "UMINUS", "'*'", "'/'", "'%'", "'~'", "GEOM_OVERLAP_OR_LEFT",
  "GEOM_OVERLAP_OR_BELOW", "GEOM_OVERLAP_OR_ABOVE", "GEOM_OVERLAP",
  "GEOM_DIST", "GEOM_ABOVE", "GEOM_BELOW", "GEOM_OVERLAP_OR_RIGHT", "TEMP",
  "TEMPORARY", "STREAM", "MERGE", "REMOTE", "REPLICA", "ASC", "DESC",
  "AUTHORIZATION", "CHECK", "CONSTRAINT", "CREATE", "TYPE", "PROCEDURE",
  "FUNCTION", "AGGREGATE", "RETURNS", "EXTERNAL", "sqlNAME", "DECLARE",
  "CALL", "LANGUAGE", "ANALYZE", "MINMAX", "SQL_EXPLAIN", "SQL_PLAN",
  "SQL_DEBUG", "SQL_TRACE", "PREPARE", "EXECUTE", "DEFAULT", "DISTINCT",
  "DROP", "FOREIGN", "RENAME", "ENCRYPTED", "UNENCRYPTED", "PASSWORD",
  "GRANT", "REVOKE", "ROLE", "ADMIN", "INTO", "IS", "KEY", "ON", "OPTION",
  "OPTIONS", "PATH", "PRIMARY", "PRIVILEGES", "PUBLIC", "REFERENCES",
  "SCHEMA", "SET", "AUTO_COMMIT", "RETURN", "ALTER", "ADD", "TABLE",
  "COLUMN", "TO", "UNIQUE", "VALUES", "VIEW", "WHERE", "sqlDATE", "TIME",
  "TIMESTAMP", "INTERVAL", "YEAR", "MONTH", "DAY", "HOUR", "MINUTE",
  "SECOND", "ZONE", "LIMIT", "OFFSET", "SAMPLE", "CASE", "WHEN", "THEN",
  "ELSE", "NULLIF", "COALESCE", "IF", "ELSEIF", "WHILE", "DO", "ATOMIC",
  "BEGIN", "END", "COPY", "RECORDS", "DELIMITERS", "STDIN", "STDOUT",
  "INDEX", "AS", "TRIGGER", "OF", "BEFORE", "AFTER", "ROW", "STATEMENT",
  "sqlNEW", "OLD", "EACH", "REFERENCING", "OVER", "PARTITION", "CURRENT",
  "EXCLUDE", "FOLLOWING", "PRECEDING", "OTHERS", "TIES", "RANGE",
  "UNBOUNDED", "','", "'.'", "':'", "'['", "']'", "'?'", "$accept",
  "sqlstmt", "@1", "@2", "@3", "@4", "@5", "create", "drop", "set",
  "declare", "sql", "opt_minmax", "declare_statement", "variable_list",
  "set_statement", "schema", "schema_name_clause",
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
  "external_function_name", "function_body", "func_def", "routine_body",
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
  "opt_to_savepoint", "copyfrom_stmt", "opt_header_list", "header_list",
  "header", "opt_seps", "opt_using", "opt_nr", "opt_null_string",
  "opt_locked", "opt_best_effort", "opt_constraint", "string_commalist",
  "string_commalist_contents", "delete_stmt", "update_stmt", "insert_stmt",
  "values_or_query_spec", "row_commalist", "atom_commalist",
  "value_commalist", "null", "simple_atom", "insert_atom", "value",
  "opt_distinct", "assignment_commalist", "assignment", "opt_where_clause",
  "joined_table", "join_type", "outer_join_type", "join_spec",
  "with_query", "with_list", "with_list_element", "with_query_expression",
  "simple_select", "select_statement_single_row",
  "select_no_parens_orderby", "select_target_list", "target_specification",
  "select_no_parens", "set_distinct", "opt_corresponding", "selection",
  "table_exp", "opt_from_clause", "table_ref_commalist", "simple_table",
  "table_ref", "@6", "table_name", "opt_group_by_clause",
  "column_ref_commalist", "opt_having_clause", "search_condition",
  "and_exp", "opt_order_by_clause", "opt_limit", "opt_offset",
  "opt_sample", "sort_specification_list", "ordering_spec", "opt_asc_desc",
  "predicate", "pred_exp", "comparison_predicate", "between_predicate",
  "opt_bounds", "like_predicate", "like_exp", "test_for_null",
  "in_predicate", "pred_exp_list", "all_or_any_predicate", "any_all_some",
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
  "nonzerolng", "poslng", "posint", "data_type", "subgeometry_type",
  "type_alias", "varchar", "clob", "blob", "column", "authid",
  "restricted_ident", "ident", "non_reserved_word", "name_commalist",
  "lngval", "intval", "string", "exec", "exec_ref",
  "opt_path_specification", "path_specification", "schema_name_list",
  "XML_value_expression", "XML_value_expression_list", "XML_primary",
  "XML_value_function", "XML_comment", "XML_concatenation", "XML_document",
  "XML_element",
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
     425,   426,    40,    41,   427,   428,    61,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,    43,    45,    38,   124,    94,   443,   444,   445,   446,
     447,   448,   449,   450,   451,    42,    47,    37,   126,   452,
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
     344,   349,   344,   344,   344,   344,   344,   344,   350,   351,
     352,   353,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   355,   355,   356,   356,   357,   357,   358,   358,
     358,   358,   358,   358,   358,   359,   359,   360,   360,   360,
     361,   362,   362,   363,   363,   364,   364,   365,   365,   365,
     365,   365,   366,   366,   367,   367,   368,   368,   369,   369,
     370,   370,   371,   371,   372,   372,   373,   373,   374,   374,
     375,   375,   376,   376,   377,   377,   378,   378,   379,   379,
     379,   380,   380,   380,   381,   381,   382,   382,   382,   382,
     382,   382,   383,   383,   384,   384,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   386,   386,   386,   387,
     387,   387,   387,   387,   387,   388,   388,   388,   389,   389,
     390,   390,   390,   390,   390,   390,   390,   390,   391,   391,
     391,   392,   392,   393,   393,   394,   394,   394,   395,   395,
     395,   395,   395,   396,   396,   396,   396,   396,   396,   396,
     396,   397,   398,   398,   398,   398,   399,   399,   400,   400,
     400,   401,   401,   402,   402,   402,   402,   402,   402,   403,
     403,   403,   403,   403,   403,   404,   404,   404,   404,   405,
     405,   406,   407,   407,   407,   408,   408,   409,   409,   410,
     410,   410,   411,   411,   412,   412,   413,   413,   414,   414,
     415,   416,   416,   417,   417,   417,   418,   419,   420,   421,
     421,   422,   422,   423,   424,   424,   425,   425,   425,   425,
     425,   426,   427,   428,   428,   428,   428,   428,   429,   429,
     429,   429,   430,   430,   431,   431,   431,   431,   431,   431,
     432,   432,   432,   433,   434,   434,   435,   436,   437,   437,
     438,   438,   439,   439,   440,   440,   441,   442,   443,   444,
     444,   445,   445,   445,   445,   445,   445,   445,   445,   446,
     446,   446,   447,   447,   448,   448,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   450,   450,
     450,   450,   450,   450,   450,   450,   451,   451,   451,   451,
     451,   451,   452,   453,   454,   455,   456,   456,   456,   457,
     458,   458,   458,   459,   459,   460,   461,   461,   462,   463,
     463,   464,   464,   465,   466,   466,   466,   467,   468,   468,
     469,   469,   470,   470,   471,   471,   472,   472,   472,   473,
     473,   474,   475,   475,   476,   476,   476,   476,   477,   477,
     478,   478,   479,   479,   479,   479,   480,   480,   481,   481,
     482,   483,   483,   484,   484,   485,   485,   486,   486,   487,
     487,   487,   487,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   489,   489,   489,   490,   490,
     491,   491,   491,   354,   354,   492,   492,   492,   492,   493,
     494,   494,   494,   494,   494,   494,   494,   495,   495,   496,
     496,   497,   497,   497,   497,   498,   498,   498,   498,   499,
     499,   500,   500,   500,   501,   501,   502,   502,   502,   502,
     502,   503,   503,   504,   504,   505,   505,   506,   506,   506,
     506,   507,   507,   508,   508,   508,   508,   508,   509,   509,
     510,   510,   511,   511,   512,   512,   513,   513,   514,   514,
     515,   516,   517,   517,   518,   518,   518,   518,   519,   519,
     520,   520,   521,   521,   522,   523,   524,   525,   525,   526,
     526,   526,   527,   527,   528,   528,   529,   529,   530,   530,
     530,   530,   530,   530,   530,   531,   531,   531,   532,   532,
     532,   533,   533,   354,   534,   535,   535,   536,   537,   354,
     354,   538,   539,   540,   541,   541,   542,   543,   543,   543,
     543,   543,   544,   544,   544,   545,   545,   545,   546,   547,
     548,   548,   549,   549,   550,   550,   550,   550,   551,   551,
     551,   551,   552,   551,   553,   553,   553,   553,   554,   554,
     555,   555,   556,   556,   557,   557,   558,   558,   559,   559,
     560,   560,   560,   561,   561,   561,   562,   562,   562,   562,
     563,   563,   564,   565,   565,   565,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   567,   567,   568,   568,   569,
     569,   570,   570,   570,   571,   571,   571,   571,   572,   572,
     573,   573,   574,   574,   574,   574,   575,   575,   576,   576,
     577,   577,   577,   578,   579,   579,   580,   581,   582,   582,
     582,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   584,
     584,   585,   585,   585,   585,   585,   585,   585,   585,   585,
     585,   585,   585,   585,   585,   585,   585,   586,   587,   588,
     588,   589,   590,   590,   591,   591,   592,   592,   593,   593,
     594,   594,   595,   595,   595,   596,   597,   598,   598,   598,
     599,   600,   600,   600,   600,   600,   601,   602,   602,   603,
     603,   604,   604,   604,   604,   605,   605,   605,   605,   605,
     605,   606,   606,   607,   607,   607,   607,   607,   607,   607,
     608,   608,   609,   609,   609,   609,   610,   610,   611,   612,
     612,   613,   613,   614,   614,   615,   615,   615,   615,   615,
     615,   615,   616,   616,   616,   617,   617,   618,   618,   619,
     619,   620,   620,   620,   621,   621,   621,   621,   621,   622,
     622,   623,   624,   624,   625,   625,   626,   626,   627,   628,
     628,   628,   629,   629,   629,   629,   629,   629,   629,   629,
     629,   629,   629,   629,   629,   629,   629,   629,   630,   631,
     631,   631,   632,   632,   632,   633,   633,   634,   635,   635,
     635,   635,   636,   636,   637,   637,   638,   639,   639,   640,
     641,   641,   642,   642,   643,   644,   645,   646,   647,   648,
     648,   648,   648,   648,   648,   648,   648,   648,   648,   648,
     648,   648,   648,   648,   648,   648,   648,   648,   648,   648,
     648,   648,   648,   648,   648,   648,   648,   648,   648,   648,
     648,   648,   648,   648,   648,   649,   649,   650,   651,   651,
     652,   652,   652,   653,   653,   654,   655,   656,   656,   656,
     656,   656,   656,   657,   657,   657,   657,   657,   657,   657,
     657,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   659,   659,   660,   661,   661,   662,
     662,   663,   664,   664,   665,   665,   666,   667,   668,   669,
     669,   670,   671,   671,   671,   671,   671,   671,   671,   671,
     671,   671,   672,   673,   674,   675,   676,   676,   676,   676,
     676,   676,   676,   676,   677,   678,   679,   679,   680,   681,
     681,   682,   683,   684,   685,   685,   686,   687,   687,   688,
     688,   688,   688,   688,   689,   690,   690,   691,   691,   692,
     693,   694,   694,   695,   696,   697,   697,   698,   699,   700,
     700,   701,   702,   703,   703,   704,   705,   705,   706,   706,
     707,   708,   709,   709,   710,   710,   711,   712,   713,   713,
     714,   714,   715,   715,   715,   716,   717,   717,   718,   718,
     719,   720,   721,   722,   722,   723,   723,   724,   724,   725,
     725,   726,   727,   727,   728,   728,   729,   730,   731,   731,
     732,   733,   734,   735,   735,   736,   736,   737,   737,   738,
     739,   739,   740,   741,   742
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     4,     0,     4,     0,     4,     0,
       3,     0,     3,     2,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     0,     1,     2,     2,     2,     4,     4,     4,
       3,     4,     3,     4,     4,     6,     4,     1,     2,     3,
       1,     0,     4,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     0,     3,     1,     1,     6,     6,     1,     3,
       0,     3,     0,     3,     0,     2,     6,     6,     0,     3,
       0,     3,     1,     3,     1,     3,     2,     2,     2,     1,
       1,     2,     1,     1,     1,     3,     1,     1,     2,     2,
       2,     1,     1,     3,     1,     1,     6,     6,     5,     5,
       6,     6,     6,     4,     6,    10,     4,     3,     7,     5,
       4,     5,     4,     5,     5,     3,     3,     3,     1,     0,
       2,     2,     2,     1,     1,     1,     1,     1,     4,     3,
       4,     1,     2,     1,     2,     2,     3,     1,     2,     1,
       3,     3,     1,     3,     2,     1,     2,     1,     2,     1,
       1,     9,     1,     1,     1,     0,     3,    10,     0,     1,
       1,     0,     3,     4,     4,     4,     4,     6,     5,     1,
       1,     2,     2,     2,     2,     0,     4,     4,     3,     3,
       1,     4,     0,     3,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     0,     1,     1,     2,
       6,     1,     3,     1,     1,     1,     2,     1,     2,     5,
       1,     0,     3,     2,     0,     2,     2,     1,     1,     2,
       2,     3,     3,     0,     1,     1,     2,     2,     0,     1,
       1,     1,     0,     2,     2,     1,     1,     2,     5,     1,
       2,     3,     8,     4,     1,     3,     2,     6,     1,     3,
       1,     1,     0,     3,     0,     1,     3,     6,     3,     1,
       1,    11,     9,    11,    10,    11,    11,     9,     7,     1,
       5,     6,     0,     3,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     4,     1,     0,     1,     3,     2,
       1,     1,     4,     6,     5,     4,     1,     2,     4,     1,
       2,     0,     2,     7,     0,     2,     5,     8,     0,     2,
       0,     1,     2,     4,     4,     1,     1,     1,     0,     4,
       2,     9,     1,     1,     1,     1,     1,     3,     0,     2,
       1,     2,     4,     4,     4,     4,     0,     1,     0,     1,
       3,     0,     3,     1,     1,     0,     2,     1,     4,     3,
       4,     3,     3,     4,     3,     5,     6,     5,     5,     4,
       4,     3,     3,     3,     3,     0,     3,     2,     1,     3,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     3,     4,     3,     4,     3,     0,     1,     1,
       3,     2,     2,     3,     3,     2,     2,     2,     1,     1,
       0,     2,     3,     0,     0,     3,    13,    13,     8,     6,
       6,     0,     3,     1,     3,     1,     2,     0,     3,     5,
       7,     0,     1,     0,     2,     2,     4,     4,     0,     3,
       0,     1,     0,     2,     0,     2,     1,     3,     1,     3,
       4,     5,     4,     5,     0,     2,     2,     1,     3,     5,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     3,     3,     3,     0,     2,     3,     4,
       4,     4,     4,     5,     5,     1,     2,     1,     1,     1,
       1,     2,     2,     1,     3,     3,     1,     6,     1,     1,
       1,     4,     6,     5,     1,     3,     1,     5,     5,     5,
       3,     1,     0,     1,     1,     0,     1,     5,     1,     4,
       0,     2,     1,     3,     1,     2,     2,     1,     1,     2,
       1,     1,     0,     5,     5,     2,     4,     1,     0,     3,
       1,     3,     0,     2,     3,     1,     3,     1,     0,     3,
       0,     2,     2,     0,     2,     2,     0,     2,     2,     2,
       1,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     3,     6,
       6,     0,     1,     1,     3,     3,     3,     3,     1,     3,
       4,     3,     5,     5,     7,     7,     1,     3,     4,     4,
       1,     1,     1,     2,     1,     3,     3,     3,     3,     4,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     2,     3,     3,     3,     3,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     3,
       1,     3,     0,     3,     0,     3,     0,     3,     1,     1,
       1,     1,     2,     1,     2,     2,     4,     2,     1,     2,
       2,     0,     3,     2,     2,     3,     2,     3,     4,     1,
       3,     1,     1,     1,     1,     6,     2,     2,     2,     2,
       2,     0,     2,     8,     8,     6,     6,     6,     3,     8,
       1,     3,     1,     3,     3,     2,     0,     2,     1,     1,
       3,     1,     3,     1,     3,     4,     6,     5,     5,     4,
       6,     1,     1,     1,     0,     3,     0,     3,     0,     3,
       0,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     2,     2,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       4,     1,     2,     2,     2,     2,     1,     1,     4,     1,
       3,     5,     1,     3,     5,     6,     6,     1,     6,     4,
       5,     4,     1,     3,     3,     3,     4,     1,     2,     4,
       1,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     1,     4,     1,     1,     1,
       1,     1,     1,     4,     6,     1,     4,     6,     1,     2,
       1,     1,     1,     1,     4,     1,     4,     6,     1,     4,
       1,     4,     6,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       2,     2,     3,     4,     0,     1,     2,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     5,     7,     0,     2,     4,     6,
       4,     2,     4,     2,     1,     4,     1,     3,     2,     0,
       2,     1,     1,     2,     1,     3,     1,     0,     2,     3,
       3,     3,     3,     4,     7,     0,     2,     1,     3,     2,
       1,     0,     2,     1,     6,     2,     2,     7,     1,     0,
       2,     8,     1,     0,     3,     1,     1,     3,     1,     1,
       2,     4,     0,     1,     3,     3,     5,     6,     1,     1,
       1,     1,     0,     2,     2,     4,     1,     3,     1,     1,
       1,     1,     3,     2,     2,     0,     1,     2,     2,     0,
       1,     5,     1,     1,     3,     3,     1,     1,     0,     2,
       1,     2,     1,     0,     1,     1,     2,     0,     1,     2,
       2,     2,     1,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    17,     0,     0,   489,     0,   430,   430,     0,
       0,     0,    15,     0,     0,    18,    21,     0,     0,     7,
       5,     9,    11,     3,     0,    19,     0,    78,    20,     0,
     453,     0,   165,     0,     0,     0,     0,    28,    29,    22,
      23,    24,    27,    25,   136,   135,   133,   134,    31,   137,
      26,   404,   403,   409,   408,   405,   407,   406,   513,   531,
     519,   520,   568,     0,    16,     0,   883,   884,   886,   887,
     888,   889,   891,   893,   938,   896,   904,   963,   927,   901,
     940,   915,   926,   920,   899,   962,   932,   921,   910,   911,
     912,   908,   902,   918,   941,   942,   943,   944,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   954,   955,   956,
     957,   919,   885,   959,   958,   906,   900,   892,   925,   960,
     961,   935,   913,   936,   937,   933,   934,   909,   894,   898,
     924,   922,   895,   897,   914,   939,   917,   907,   928,   929,
     930,   931,   903,   905,   923,   916,     0,   799,   890,   490,
     491,     0,     0,   429,   433,   433,   411,     0,   417,     0,
     516,   264,   489,     0,   714,   712,   713,   313,     0,   709,
     711,   264,     0,     0,     0,     0,     0,   968,   967,     0,
     971,   877,   878,   879,   880,   881,   882,    97,   264,   264,
      96,    92,   101,   264,     0,     0,     0,    82,    84,     0,
      93,    94,    68,   876,     0,     0,     0,     0,     0,   417,
       0,     0,     0,   966,     0,     0,     0,   258,     0,   261,
     260,     0,   827,     1,     0,     0,     0,   163,   164,     0,
       0,   180,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   162,     0,     0,     0,   130,   131,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   400,   779,   781,   780,
     927,   898,   914,   929,     0,     0,   959,   958,   917,    34,
      35,     0,   254,     2,     0,   532,   532,   532,   570,    13,
     496,     0,     0,   969,   883,   884,   886,   887,   888,   889,
     785,   784,   783,   786,   787,     0,     0,     0,   873,   796,
     797,   721,   721,   721,   721,   721,   663,     0,   484,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     732,     0,   928,   929,   930,   931,     0,     0,     0,     0,
     677,   676,   540,   736,   565,   596,   567,   586,   587,   588,
     589,   590,   591,   592,     0,   593,   660,   659,   594,   631,
     675,   664,     0,   666,   668,   670,   671,   538,   730,   661,
       0,     0,     0,   667,   662,   738,   791,   665,   673,   672,
       0,     0,   802,   782,   674,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   751,   474,     0,   410,   434,
     412,     0,     0,     0,   414,   418,   419,     0,   514,   518,
       0,     0,   265,     0,   530,     0,     0,   576,     0,     0,
      10,    12,     0,     0,    98,    99,    91,   100,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     417,   416,   168,     0,     0,     0,     0,   568,   455,     0,
       0,     0,     0,   454,   184,   183,     0,   182,   181,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
     906,    51,    47,   264,   264,     0,     0,     0,   392,   139,
       0,     0,     0,     0,     0,   400,   395,   395,   395,   391,
     400,   400,   400,   393,   394,   402,   401,   384,     0,    42,
      40,     0,     0,     0,     0,   858,   853,   867,   829,   868,
     870,   871,   842,   845,   837,   838,   840,   841,   839,   848,
     850,   860,   864,   863,   761,   758,   760,     0,     0,   851,
     852,    36,   855,   830,   831,   835,     0,   533,   534,   535,
     535,   535,     0,   573,     0,   470,     0,   496,   492,     0,
     875,   800,   970,   795,   793,     0,     0,     0,     0,   716,
     718,   717,   720,   719,     0,   623,     0,     0,   706,     0,
       0,     0,     0,  1025,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   567,     0,   668,   802,   595,
       0,   656,   657,     0,     0,     0,   651,   788,     0,   756,
       0,   756,   752,   753,     0,     0,     0,   820,   822,     0,
       0,   624,     0,     0,     0,   521,   496,     0,   735,     0,
       0,     0,     0,     0,     0,     0,     0,   601,   601,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   794,   792,     0,     0,     0,     0,   477,   474,
     472,   431,     0,     0,   413,   422,   421,     0,     0,     0,
     515,     0,     0,   540,   707,   812,   485,     0,   710,   711,
       0,    32,     8,     6,     4,     0,   972,     0,   487,   482,
     488,   104,    72,   102,   105,    69,    70,    85,   957,   917,
      83,    90,    89,    95,    79,    81,     0,     0,   415,   170,
     169,     0,   168,     0,     0,   113,     0,   149,     0,     0,
     159,   157,   155,   160,     0,     0,   140,   143,   152,   129,
       0,   129,   129,   259,   447,   447,     0,   264,     0,     0,
     168,     0,     0,   138,   141,   147,     0,   264,   264,   264,
     264,     0,   348,   348,   348,     0,   166,    48,    50,     0,
     974,     0,   224,   171,   190,     0,     0,   352,   353,     0,
       0,   264,   395,     0,   400,   400,   400,   390,     0,   382,
     379,   381,    46,   383,   389,    39,    43,   754,    44,    41,
      38,     0,     0,     0,   869,     0,     0,     0,     0,   849,
       0,   756,   756,   764,   765,   766,   767,   768,   760,   758,
       0,   777,   778,   255,     0,     0,     0,     0,   569,   580,
     583,   536,     0,     0,     0,   572,   571,   826,     0,   576,
     497,     0,     0,   471,     0,     0,   807,     0,     0,   874,
     722,   770,   769,     0,     0,     0,   631,   981,   979,  1062,
     978,  1062,     0,     0,     0,     0,  1060,  1061,     0,     0,
    1042,  1043,   631,  1059,     0,  1058,   568,     0,     0,     0,
     630,   628,   658,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   817,   822,     0,
     821,     0,     0,     0,     0,     0,   626,     0,   552,   551,
     541,   548,   542,   550,   547,   544,   799,   540,   524,   526,
     558,   737,   564,   621,   620,   622,   598,     0,   607,   608,
     605,   606,   604,     0,     0,   602,   603,     0,     0,   566,
     597,     0,   627,   647,   632,   633,   638,   648,   637,   728,
     655,   654,   653,   652,   634,   635,   636,     0,   649,   640,
     642,   644,   639,   646,   645,   643,   641,   611,     0,   682,
     734,   731,   679,     0,     0,   909,   824,     0,   802,     0,
     887,   888,   889,   733,   803,   475,   476,   473,   432,     0,
       0,     0,   428,   423,   424,   420,   266,     0,   708,     0,
     578,   579,   577,    33,    30,   973,     0,     0,     0,    74,
       0,    74,    88,    74,    74,     0,     0,     0,     0,     0,
       0,   156,   154,   158,   148,   144,     0,     0,   128,   109,
       0,     0,     0,   108,     0,     0,   224,   452,   458,     0,
     458,     0,     0,   456,   457,     0,     0,   145,   142,   348,
     174,   175,     0,   176,     0,   347,     0,   346,     0,     0,
       0,     0,     0,     0,    53,   975,    49,     0,     0,     0,
     199,   195,   197,   200,   198,     0,   201,     0,   875,     0,
     173,     0,     0,   355,   356,   354,     0,     0,   185,   380,
     400,   388,   385,   387,   397,     0,   398,    37,     0,   825,
       0,   872,     0,     0,     0,   825,   865,     0,   866,   762,
     763,   775,   774,     0,     0,   825,     0,     0,     0,     0,
     584,   585,   582,     0,   529,   528,   527,   575,   574,   523,
     495,   493,   494,   801,     0,     0,     0,   669,     0,     0,
       0,     0,     0,  1004,   996,     0,  1030,  1017,  1027,  1031,
    1026,   631,  1038,  1039,     0,  1062,     0,  1079,  1062,   628,
       0,   486,   480,   629,     0,     0,     0,   617,     0,     0,
       0,     0,   757,     0,   789,   759,   790,   798,     0,     0,
     818,     0,   823,   811,     0,     0,   809,     0,   625,     0,
     551,     0,     0,     0,   508,   509,   510,     0,     0,     0,
     505,     0,     0,   507,   905,   549,   557,   546,   545,     0,
       0,   522,     0,   562,   619,     0,     0,     0,     0,     0,
     618,   650,   610,     0,     0,   684,     0,   745,     0,   749,
       0,     0,     0,   435,   425,   426,   427,     0,   813,   483,
       0,   103,     0,    67,     0,    66,    76,    77,     0,     0,
     114,   117,   153,   151,   150,   400,   400,   400,   111,   112,
     110,     0,   107,   106,   366,   440,     0,   439,     0,     0,
       0,   146,     0,     0,   267,   338,     0,   350,     0,     0,
      64,    65,    63,     0,   964,   977,   976,   165,     0,    45,
      54,    55,    57,    58,    61,    59,    60,   256,   225,   189,
     224,     0,     0,     0,   223,   202,   203,   205,   206,     0,
       0,   192,   262,     0,     0,     0,     0,   178,   386,   396,
       0,   859,   854,   832,   843,     0,   846,     0,   861,     0,
     760,   772,   776,   856,     0,   833,   834,   836,   581,     0,
       0,     0,     0,  1064,  1063,   992,   980,   993,   994,     0,
    1062,   940,     0,  1071,     0,  1066,     0,  1068,  1069,     0,
       0,  1062,     0,  1029,     0,     0,     0,     0,  1062,     0,
       0,  1045,  1052,  1056,     0,     0,  1080,     0,   478,     0,
       0,     0,     0,     0,     0,     0,     0,   755,   819,     0,
     810,     0,   814,   815,   498,     0,   543,     0,     0,     0,
       0,     0,     0,   506,   555,     0,   800,   525,     0,     0,
     539,   609,   613,   612,     0,     0,     0,   678,     0,   686,
     748,   747,     0,     0,   804,   517,    73,    75,    71,     0,
     116,   126,   127,   125,     0,     0,   367,     0,   448,     0,
     464,   466,   468,   441,   441,     0,     0,   177,   489,   901,
     915,     0,     0,     0,     0,     0,   282,   294,   295,   288,
     289,   290,   293,   291,   278,   279,   296,   307,   306,   311,
     310,   309,   308,     0,   292,   287,   286,   297,     0,     0,
       0,     0,    52,     0,    56,   196,   875,     0,     0,   250,
       0,   220,     0,   204,   207,   208,   213,   214,   215,     0,
       0,   172,     0,   191,     0,   257,   357,   358,     0,     0,
     399,     0,   828,     0,     0,   773,     0,     0,   560,   802,
     805,   806,   715,     0,  1016,  1001,  1003,  1017,  1014,   997,
       0,  1074,  1073,  1065,     0,     0,     0,     0,     0,     0,
    1018,  1028,     0,  1033,  1032,  1035,  1036,  1034,   631,     0,
    1078,  1077,   631,  1044,  1046,  1048,  1049,     0,  1053,     0,
    1057,  1104,   481,     0,     0,     0,     0,   727,     0,   725,
     726,     0,   816,   808,     0,   502,     0,   499,     0,     0,
     501,   500,     0,     0,     0,   559,   563,   600,   599,   683,
       0,   688,   689,   681,     0,   746,   750,     0,     0,   122,
       0,   120,     0,     0,   459,     0,     0,     0,   438,     0,
       0,   447,   447,     0,     0,     0,     0,   312,     0,   315,
     917,   320,   319,   321,     0,   329,   331,     0,     0,   282,
     338,     0,   339,   349,     0,   338,   345,     0,   965,     0,
     251,     0,   216,   659,   209,   245,     0,     0,     0,     0,
     246,   218,   249,   224,     0,   194,     0,     0,   371,     0,
       0,     0,   188,   844,   847,   862,   857,   537,     0,     0,
       0,     0,     0,  1013,     0,   995,  1067,  1070,  1072,     0,
       0,     0,     0,  1024,  1037,     0,  1050,  1076,     0,     0,
       0,     0,     0,   479,   615,   614,     0,     0,     0,   553,
     504,   512,   511,   503,     0,   556,   685,     0,     0,     0,
     631,   701,   690,   693,   691,     0,     0,   123,   124,   121,
     119,   449,   467,   465,   469,     0,   443,   445,   458,   458,
       0,     0,     0,   277,     0,   316,     0,     0,   282,   330,
       0,     0,   326,   331,   282,   338,     0,     0,     0,     0,
     925,   272,     0,     0,     0,     0,   244,     0,   247,   264,
       0,   211,   193,   263,   368,   368,   359,   360,     0,   351,
     375,   161,   186,   187,   561,   803,  1011,     0,  1006,  1009,
    1002,  1015,   998,  1000,  1019,     0,  1022,  1021,  1020,  1075,
    1047,     0,     0,  1041,     0,     0,     0,  1093,  1082,  1083,
     729,   723,   724,   554,     0,   694,   692,   695,     0,   687,
     115,   118,     0,   442,     0,   446,   460,   460,     0,   274,
       0,     0,   317,     0,   282,   332,     0,     0,   327,     0,
     334,     0,   283,   282,     0,     0,     0,     0,     0,     0,
     264,   221,     0,   242,   210,   224,   366,   369,   366,   366,
     366,   361,     0,     0,   338,  1005,     0,     0,  1008,     0,
    1023,  1051,  1054,  1055,  1088,  1092,  1091,  1087,  1088,  1086,
       0,     0,     0,  1081,  1094,  1095,  1097,     0,     0,   703,
       0,   704,   450,   444,   461,   462,   462,   167,   268,   314,
       0,   322,   328,     0,   324,   282,     0,   282,     0,     0,
     283,   280,   338,   344,     0,   342,   271,   269,   273,   270,
     275,   276,   242,     0,   219,   253,   238,   233,   212,     0,
       0,     0,     0,   373,   374,   372,   376,     0,   302,   303,
     300,   301,   377,   304,   370,   299,   298,   305,  1007,  1012,
    1010,   999,     0,  1085,  1084,  1100,  1103,  1099,  1102,  1101,
    1096,  1098,     0,     0,   631,   696,   698,   705,   702,     0,
     464,   464,   318,   283,   325,   323,   335,     0,     0,   281,
       0,     0,   233,     0,   240,   241,   239,   243,     0,   234,
     235,   248,   365,   363,   364,   362,   284,  1090,  1089,   699,
     697,   700,   463,   437,   436,   282,   333,   340,   343,   252,
     222,     0,     0,     0,   237,     0,   236,   338,   334,   337,
     341,   227,   228,     0,     0,   232,   231,   378,     0,   336,
     226,   229,   230,   285
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,   176,   173,   172,   174,   175,    32,    33,    34,
      35,    36,  1014,  1467,   279,  1468,  1469,   481,   777,   780,
    1299,  1300,  1301,   776,  1292,  1470,   195,  1021,  1019,  1253,
    1471,   206,   207,   196,   197,   198,   720,   199,   200,   201,
     712,   713,  1472,   735,  1043,  1039,  1040,  1473,    44,   763,
     746,   764,   747,   765,    45,   247,   248,   731,  1090,   249,
     250,  1327,   783,   784,  1513,  1079,  1080,  1081,  1317,  1082,
    1503,  1504,  1083,  1770,  1505,  1506,  1652,  1507,  1508,  1924,
    1084,  1509,  2025,  1989,  1990,  1991,  1987,  1927,  1661,  1314,
    1662,   691,  1086,   251,   216,   217,  1515,   785,   422,    46,
    1743,  1918,    47,  1474,  1640,  2017,  1903,  1942,  1476,  1477,
    1478,  1627,  1628,  1831,  1479,  1632,  1480,  1752,  1753,  1635,
    1636,  1750,  1481,  1909,  1482,  1483,  2019,  1844,  1645,  1066,
    1067,    49,   789,  1096,  1668,  1776,  1777,  1447,  1858,  1779,
    1780,  1935,  1864,  1944,   266,  1484,   799,  1105,   507,  1485,
    1486,    53,   414,   415,   416,  1003,   154,   408,   684,    54,
    1621,  1735,  1736,  1048,  1049,   218,  1275,  1895,  1970,  1618,
    1450,  1451,    55,    56,    57,   680,   889,  1170,   707,   351,
     708,  1172,   709,   151,   557,   558,   555,   919,  1212,  1213,
    1590,   219,   159,   160,   418,    59,  1487,   220,   927,   928,
      62,   549,   842,   352,   625,   626,   920,   921,  1201,  1202,
    1215,  1223,  1527,  1420,   353,   354,   288,   553,   849,   701,
     838,   839,  1132,   355,   356,   357,   358,   947,   359,   938,
     360,   361,   596,   362,   937,   363,   622,   364,   365,   366,
     367,   368,   369,   370,   371,   372,  1234,  1235,  1429,  1603,
    1604,  1721,  1722,  1723,  1724,  1965,  1966,  1819,   373,   597,
     168,   169,   375,   569,   376,   377,   378,   628,   379,   380,
     381,   382,   383,   614,   901,   609,   611,   539,   829,   863,
     830,  1342,   831,   832,   540,   384,   385,   386,   925,   387,
     388,   857,   389,   697,   914,   907,   908,   617,   618,   911,
     987,  1108,   846,   221,  1521,  1106,  1117,   390,   543,   544,
     391,  1087,   714,   203,   598,   148,  1295,   222,  1109,   393,
      63,   180,  1074,  1075,  1296,   868,   869,   870,   394,   395,
     396,   397,   398,  1360,  1154,  1535,  1787,  1788,  1868,  1789,
    1950,  1536,  1537,  1538,  1371,  1550,   399,   874,  1157,  1158,
    1159,  1373,  1554,   400,  1376,   401,  1163,  1378,   402,   881,
    1165,  1380,  1563,  1564,  1565,  1566,  1567,  1701,   403,   404,
     884,   878,  1149,   875,  1364,  1365,  1688,  1366,  1367,  1368,
    1696,  1697,  1385,  1386,  1807,  1808,  1878,  1879,  1953,  1998,
    1809,  1876,  1883,  1884,  1960,  1885,  1886,  1959,  1957,   405
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1733
static const yytype_int16 yypact[] =
{
    1253,     7, -1733,    61, 15486,   -81,   199,   465,   465, 15486,
     503,   398, -1733, 15486,   261, -1733, -1733, 12666, 15486, -1733,
   -1733, -1733, -1733, -1733,   388, -1733,   699,   156,   496,    54,
     238,   635,  1490,   445, 12948, 11820,   591, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733,   619,   610, -1733, 15486, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733,   477,   419, -1733, -1733,
   -1733,  3920, 15486, -1733,   630,   630, -1733, 15486,   848,    35,
   -1733,   682,   -81,   788, -1733, -1733, -1733, -1733,   713, -1733,
     545,   682,  1663,  1663,  1253,  1253,  1663, -1733, -1733,   716,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,   682,   682,
   -1733,   624, -1733,   682,    33,   415,   641, -1733,   561,   646,
     600, -1733, -1733, -1733,   677,   680,   353,  1063,   873,   848,
   14358, 15486, 15486, -1733,   520,   953,   731, -1733,    42, -1733,
   -1733,  -155, -1733, -1733,   -68, 15486,   715, -1733, -1733, 15486,
     752, -1733, -1733,   719,   726,   728,   748, 15486, 15486, 15486,
   15486, 15486, 15768, 15486, -1733, 15486, 15486,   685, -1733, -1733,
     750, -1733, 15486, 15486,   818,   585, 15486, 15486, 15486, 15486,
   15486, 15486, 15486, 15486, 15486, 15486,   908, -1733, -1733, -1733,
     837, 15486, 15486,   782,   911,   916,   819,   830, 15486,   771,
   -1733,  1133, -1733, -1733,  1014,   406,   406,   406,   833, -1733,
     865, 14640, 15486,  1145,  1145,  1145,  1146,   978,   980,   983,
   -1733, -1733, -1733, -1733, -1733,   984,   999,  1150, -1733, -1733,
   -1733,  1017,  1017,  1017,  1017,  1017, -1733,  1019, -1733,  1020,
    1069, 15486,  1023,  1026,  1027,  1030,  1038,  1039,  1045,  1053,
    1057,  1058,  1059,  2140,  4258,  8820,  8820,  1060,  1061,  1065,
   -1733,  8820,  1145,   226,   367,   247,  6573,  1066,  1071,  4258,
   -1733, -1733,   267,   919,  1079, -1733,  1375, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, 15486, -1733, -1733, -1733,  9689, -1733,
   -1733, -1733,   931, -1733,   906, -1733, -1733,   922, -1733, -1733,
    1089,  1090,  1091,   937, -1733, -1733, -1733, -1733, -1733, -1733,
    1145,  1145,   121, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733,   326,   947, -1733,   987,
   -1733,   954,  1176,  1172, -1733,   933, -1733, 15486, -1733, -1733,
   15486,   956, -1733,  3920, -1733,  6894, 12666,   977,  1142,  1154,
   -1733, -1733,  1155,  4934, -1733, -1733, -1733, -1733, -1733, -1733,
     120,  1063,   120,   981, 13230,   358,  1179,  1182,  1184,   -47,
     848, -1733,   783,   473,  1130,   656,  1122,   688, -1733,    50,
    1042, 15486,   953,  1003, -1733, -1733,  1131, -1733, -1733,   653,
   15486, 15486, 15486, 15486, 15486,  1073,  1136,  1139,  1140,  1151,
   15486,  1076,  1088,  1144,   682,   727, 15486, 15486, -1733, -1733,
   15486,  1093, 15486, 15486, 15486,   908,  1153,  1153,  1153, -1733,
     908,   908,   908, -1733, -1733, -1733, -1733, -1733, 15486, -1733,
   -1733,    48, 15486,  8820, 15486,  1156,  1161, -1733,   489, -1733,
   -1733, -1733,  1162,  1163, -1733, -1733, -1733, -1733, -1733,  1288,
   -1733,  1164, -1733, -1733, -1733,  1168,  1173,   823, 15486, -1733,
   -1733, -1733,  1177,  1180,  1181,  1185,  8820, -1733, -1733,  1188,
    1188,  1188,    27,  1032,  4258, -1733,  1186,   400, -1733,  1187,
   -1733,  1010, -1733, -1733, -1733,  4258,  4258,  1332,  1191, -1733,
   -1733, -1733, -1733, -1733,    82, -1733,   917,  1250, -1733,  8820,
    8820,  8820,  1135,  1211,   645,  1137,  1363,  8820,   603,  8820,
    2140,  1199,  1201,   852,  1202,  1099,   -89, -1733,   204,  1770,
    2140,  1787,  1787,  8820,  8820,  8820,  1301, -1733,   388,  1205,
     388,  1205, -1733, -1733,  1145,  4258,  9098, -1733,   564,  8820,
    8820,  1770,   511,  9102, 15486, -1733,   865, 15486, -1733,  4258,
    3244,  8820,  8820,  8820,  8820,  1206,  1207,   955,   955,  4258,
    3244,  1043,  8820,  8820,  8820,  8820,  8820,  8820,  8820,  8820,
    8820,  8820,  8820,  8820,  8820,  8820,  7215,  8820,  8820,  8820,
    8820,  8820,  8820,  8820,  8820,   519,  1210,  1190,  3920,  1213,
    5255,  8820, -1733, -1733, 12102, 13794,  1104,  1199, -1733,   391,
   -1733, -1733,  1306,  1310, -1733, -1733, -1733,   764,   388,   848,
   -1733,   -86,  1219,  1283, -1733, -1733, 12935,   -59, -1733, -1733,
      31,  1158, -1733, -1733, -1733,  2140, -1733,   -53, -1733, -1733,
     666, -1733,   255, -1733, -1733, -1733,   256, -1733,   818, 15486,
   -1733, -1733, -1733, -1733, -1733, -1733,   120,   120, -1733, -1733,
   -1733,  1147,   783,  1118,  1129, -1733,  1297,  1231,   953,   953,
   -1733, -1733, -1733, -1733,   953,  2534,  1130, -1733, -1733,   518,
      66,  1126,   781, -1733,    40,    40, 15486,   682,  1096,   953,
     783,  1233,  2534,   653, -1733, -1733,  1236,  1144,  1144,  1144,
    1144,  1178, 14922, 14922, 14922,  1157, -1733, -1733, -1733,  1394,
    1166, 15486, 14076,  1322, -1733,  1105,  1106, -1733, -1733,   836,
    1165,  1144,  1153, 15486,   908,   908,   908, -1733,  2459, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733,   868, -1733, -1733,
   -1733,  1133,   388,   388, -1733,  1400,   388,   388,   388, -1733,
     105,  1205,  1205, -1733, -1733, -1733, -1733, -1733,  1173,  1168,
    1148, -1733, -1733, -1733,   388,   388,   388,   388,  1098, -1733,
   10643,  1325,   261,   261,   261, -1733, -1733, -1733,    27,   977,
   -1733,  1019, 14640, -1733,  4258, 15486, -1733,  1117,  1100, -1733,
   -1733, -1733, -1733,  1330, 15486, 12935,   499, 12935, -1733,   -67,
   -1733,  1284, 15486,  1270,  8820,  1107, -1733, -1733,  8820, 15486,
   -1733,  1298,   499, -1733,  8820, -1733,  1344,   872,  8820,   -26,
   -1733, -1733, -1733,   882,  4258, 13512,  2823, 10926,  2739,  1275,
    1167,  1145,  1277,  1145,   823,  1159,  8820, -1733,   665,  8820,
   -1733,  1169,  2880,  1116,   268,  4258, -1733,  2642, -1733, -1733,
    1119, -1733,   753, 16050, 16050, 16050,   258,   -32, -1733, -1733,
    1347, -1733, -1733, -1733, -1733, -1733,  1486,  4258, -1733, 10007,
   -1733, -1733, -1733,  7536,  7536, -1733, -1733,  4258,  4258, -1733,
   -1733,  1019, -1733, 12935,  1787,  1787,  1787,  1787,  1787,  1787,
    1787,  1787,  1787,  1787,  1321,  1321,   967,  8820,  1301,   568,
     568,   568,   568,  1326,  1326,  1326,  1326, -1733,  1351,  1143,
   -1733, -1733, -1733,  8820,  1290,  8820, 12935,  1292,   262,  1149,
    1295,  1296,  1302, -1733,   263, -1733,  1189, -1733, -1733, 15486,
     985,  1389, -1733, -1733, -1733, -1733, -1733,   261, -1733,  8820,
   -1733, -1733, -1733, -1733, -1733, -1733,  7536,  1222,   120,  1367,
    1227,  1367, -1733,   -30,   -30,  1145,  1230, 15486, 15486,   953,
     417, -1733, -1733, -1733, -1733, -1733, 15486, 15486, -1733, -1733,
   15486,  1396,   992, -1733, 15486, 15486, 15204, -1733,  1378,  1192,
    1378,  1383,  1390, -1733, -1733,  1234,   953, -1733, -1733, 14922,
   -1733, -1733,  1239, -1733, 15486, -1733,  1333,  1203,  2534,  1345,
    1348,   684,  1232, 15486,   637, -1733, -1733, 15486, 15486,   294,
   -1733, -1733, -1733, -1733, -1733,   501, -1733,  1818,   242, 15486,
   -1733,   520,   520, -1733,  1204, -1733,  1243, 15486,  1261, -1733,
     908, -1733, -1733, -1733, -1733,  1352,  1209, -1733,  1366, -1733,
    1368, -1733,  1369,   302,  1370,  1212, -1733,   305, -1733, -1733,
   -1733, -1733,  1266,   932,  1374,  1215,  1380,  1393,  1397,  8820,
   -1733, -1733, -1733,  1395, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733,  2534,  2534,  8820, -1733,   608,  1399,
    8820,  1401,  1405, -1733,  1225,  7857, 12935,  -122, -1733,  1257,
   -1733,   508, -1733,  1242,  1466,  1284,  1407,  1421,  1284,   711,
     308, -1733, -1733, -1733,  1411,  1412,  1413,  1770,  8820,  8820,
    8820,  8820, -1733,  1293, -1733, -1733, -1733, -1733,  8820,  2978,
   -1733,  1278, 12935, -1733,  8820,  8820, -1733,  8820,  1770,  2642,
    1415,   753,   261,  9102, -1733, -1733, -1733,   879,  1515,  9102,
   -1733,  9102,  1516,  1520, 15486, -1733,  1424, -1733, -1733, 12666,
   15486, -1733,  1494,  1491,  1486,  1145,   315,   321,  1441,  1746,
   -1733, 12935, -1733,  1496,  1420,  1499,  1432, -1733,  1433, -1733,
   12384,  8820, 15486, -1733, -1733, -1733, -1733,  1434, -1733, -1733,
    1349, -1733,   684, -1733,  1350, -1733, -1733, -1733,  1592,  1145,
   -1733, -1733, -1733, -1733, -1733,   908,   908,   908, -1733, -1733,
   -1733,  -112, -1733, -1733,  1300, -1733,  1145, -1733,   116,    74,
    1145, -1733,  1438,  1611, -1733,  9702, 15486, -1733,  1386,  1402,
   -1733, -1733, -1733, 15486, -1733,  1291, -1733,  1560,   746, -1733,
     637, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   14076,  1371,  1372,   682, -1733, -1733, -1733, -1733,   862,  1373,
    1633,  1467,  1468, 15486, 15486,  1470,  1564, -1733, -1733, -1733,
    2534, -1733, -1733, -1733, -1733,   388, -1733,   388, -1733,   388,
    1173, -1733, -1733, -1733,   388, -1733, -1733, -1733, -1733, 15486,
    1471,  1472, 11208, -1733, -1733, -1733, -1733, -1733, -1733,  5576,
    1284,  1404,  8820, 12935,   323, -1733,  1331, -1733, -1733,   757,
    8820,  1284, 15486, -1733,  1504,  1506,  1476,  8820,  1284,    22,
    8820, -1733,  1466, -1733,  1377,  1479, -1733,  1480, -1733,  8820,
    8820,  7536,  7536,  2923, 11526, 10326,  2784, -1733, -1733,  8820,
   -1733, 11808, -1733, -1733, -1733,   234,   753,  9102,  1582,  9102,
     734,   734,  9102, -1733,  1485, 15486,   282, -1733, 15486,  4258,
   -1733, -1733, -1733, -1733,  4258,  4258, 15486, -1733,  1556,    32,
   -1733, -1733,  1487,  1488, -1733, -1733, -1733, -1733, -1733,  1339,
    1409, -1733, -1733, -1733,  1426,   553, -1733,  1145,  1338,  1145,
    1596,  1354, -1733,  1509,  1509,  1449,  1451, -1733,   -81,   503,
     398,  1452, 12666,  3582,  8178,  4258,  1379, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733,  1384, -1733, -1733, -1733, -1733,  1353,  2534,
    2494,  2494, -1733, 15486, -1733, -1733,  1517,   682,   682, -1733,
    1566, -1733,  8820, -1733,   862, -1733, -1733, -1733, -1733,   357,
    1522, -1733,    60, -1733,  1469, -1733,  1359,  1387, 15486,   311,
   -1733,  1525, -1733,  1526,  1527, -1733,  1528,   330, -1733,  1365,
   -1733, -1733, -1733,  1533, 12935,  1388, -1733,   250, -1733,  1406,
    1541, -1733, -1733, -1733,  7857, 15486,  1444,  1453,  1455,  1461,
   -1733, -1733,  1553, -1733, -1733, -1733, -1733, -1733,   620,  1559,
   -1733, -1733,   287,  1408, -1733, -1733, -1733,     4, -1733,  1572,
   -1733, -1733, -1733,   332,   333,   341,  8820, -1733,  8820, -1733,
   -1733,  8820, -1733, -1733, 16050, -1733,  9102, -1733,   682,  4258,
   -1733, -1733,   734, 15486,   342,  1414, -1733,  1544,  1544,  1414,
    8820, -1733, -1733, -1733,  4596, -1733, -1733,  1483,  1474, -1733,
     476, -1733,  1629,  8820, -1733,  1145,   350,  1519, -1733,  1145,
   15486,    40,    40,  1145,  1514,  3920, 15486, -1733,  1578, -1733,
    1581, -1733, -1733, -1733,  4258, -1733,   686,  9373,  1456, -1733,
   10938,  4258, -1733, -1733,  1584, 10020, -1733,   724, -1733,  1489,
   -1733,  1443, -1733,  1183, -1733, -1733,  1645,  1585,  1500, 15486,
   -1733, -1733, -1733,   506,  1594, -1733,  1502,   759,  1651,   351,
    1683,  1684, -1733, -1733, -1733, -1733, -1733, -1733, 15486, 15486,
    8820,  8820,  8820, -1733,  8499, -1733, -1733, -1733, -1733,  1661,
     676,  1664,  1665, -1733, -1733, 15486, -1733, -1733,  8820,  1510,
    1513,  1603,   577, -1733, -1733, -1733, 12090, 12372, 12654, -1733,
   -1733, -1733, -1733, -1733,   352, -1733,  1098,  5897,  1463,  1454,
    1462,  1457, -1733, -1733, -1733,  1145, 15486, -1733, -1733, -1733,
   -1733,  1448, -1733, -1733, -1733,   363, -1733,  1785,  1378,  1378,
    1523, 15486,  1536, -1733,  1458,  8820,   563,  1498, -1733, -1733,
    1493,  8820, -1733,   689, -1733, 10938,  1667,  1497, 15486,  1569,
    1800, -1733,  1573,  1804, 15486,  1682, -1733,  4258, -1733,   682,
     379, -1733, -1733, -1733,   119,   345,   759, -1733,  1495, -1733,
    1518, -1733, -1733, -1733, -1733,  1475, 12935,   382, -1733,  1503,
   -1733, -1733,  1477, -1733, -1733,  1669, -1733, -1733, -1733,  1466,
   -1733,  1668,  1676, -1733,  1672, 15486,  1825,   559, -1733, -1733,
   -1733, -1733, -1733, -1733,  1640, -1733, -1733, -1733,   224, -1733,
   -1733, -1733,  1145, -1733, 15486, -1733,  1771,  1771, 15486, -1733,
   15486,   393, 12935,  1658, -1733, 10338,  1535,  3020, -1733,  1524,
    9384,  1705,  1531, -1733,   404,  2534, 15486,  1087, 15486,  1087,
     682,  1685,  1686,  1744, -1733,   506,  1300, -1733,  1300,  1300,
    1300, -1733,   777,  4258, 11220, -1733,  8820, 15486, -1733,  8820,
   -1733, -1733, -1733, -1733,  1700, -1733, -1733, -1733,  1700, -1733,
    1706, 15486,  1825, -1733, -1733, -1733,  1708,  6235,  1530, -1733,
    1545, -1733, -1733, -1733, -1733,  1805,  1805, -1733, -1733, -1733,
    8820, -1733, 10338,  1735, -1733, -1733,  1571, -1733,  4258,  1567,
    1574, -1733, 10656, -1733, 15486, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733,  1744,   653, -1733, -1733,   659,  1613, -1733, 15486,
   15486, 15486, 15486, -1733, -1733, -1733, -1733,  1575, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733,  1825, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733,  1552,  1547,  1548, -1733, -1733, -1733, -1733,  1827,
    1596,  1596, 12935, -1733, 10338, -1733, 10338,  1587,  1590, -1733,
    1591,  2534,  1613,   331, -1733, -1733, -1733, -1733,  1040,  1639,
    1642, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, 15486, -1733, -1733,
   -1733,    75,    75,  1831, -1733,  1841, -1733, 11538,  9384, -1733,
   -1733, -1733, -1733,  1866,   138, -1733, -1733, -1733,  1776, -1733,
   -1733, -1733, -1733, -1733
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1733,   945, -1733, -1733, -1733, -1733, -1733,  -953,  -940, -1733,
   -1733,   741, -1733,    10, -1733,    15,   289, -1733,  1128, -1733,
   -1733, -1733,   611, -1733,   658,     0,  1707, -1733, -1733,   -51,
       5, -1733, -1733,  1709, -1733,  1473, -1733, -1733, -1733,  1478,
    -345,   895,    44, -1733, -1733, -1733,   371,    51, -1733,    -6,
   -1733,  -741,  1193,  -408, -1733, -1733, -1733,  -130, -1733,  1898,
   -1733, -1733,   155, -1733, -1733, -1733,   894,   631, -1733, -1733,
   -1733, -1733, -1733, -1733, -1423, -1733,   329, -1733, -1733, -1733,
   -1733,  -720,   -69,   -46,   -44,   -25, -1733,    36, -1733, -1733,
   -1733,   -27, -1733, -1733,  -195,  -399, -1733,  -160,  -282, -1733,
   -1163,   112, -1733,   317, -1398, -1733, -1233,   -54, -1732, -1733,
     442, -1733, -1733, -1733, -1733, -1733, -1733,   211, -1733,   334,
   -1733,   212, -1733,   -52, -1733, -1733, -1733, -1733,   481,  -685,
   -1733, -1733, -1733, -1733, -1733, -1733,   191,  -848,   193, -1733,
   -1733, -1733, -1733, -1733,  1532,    59,  -412,   644,  -390,    20,
      25, -1733,  -142, -1733,  1286, -1733,  1969,  1824, -1733, -1733,
     526, -1733,   157,  -732, -1733, -1733, -1026,   158,    86,  -834,
     704,   535, -1733, -1733, -1733,  1311,  1314,   614,  -872, -1733,
    -398,   616,   990,  -148, -1733,  1160,  -110,  -841,   800, -1733,
   -1309,   169, -1733,  1593,  1001, -1733,    30,   100, -1733,   789,
      -2,   856,   594,  -407,  1086, -1733, -1733, -1733,  -563, -1733,
    -889, -1733, -1266, -1733,  -229,  1376,  1132, -1733, -1733,  1170,
     414,   887, -1733, -1733,  -251, -1733, -1733,  1382, -1733,   418,
   -1733, -1733, -1733, -1733,  1381, -1733, -1733,  1385, -1733,  -283,
   -1073,  1465,  -566,  -457, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733,   306, -1733, -1733, -1733, -1733, -1733, -1733,   -15,
   -1733,  -387, -1733,   557, -1733, -1733,  1356, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733,  -456,  -470,  -495, -1733,  -539, -1733,
   -1733, -1733, -1733,  1121, -1733,  1994, -1733,  1529,    -1, -1295,
   -1733,  1464, -1733, -1733, -1733,  1127, -1733,  1416, -1733,  1141,
    -628,   181,  -645,  -183, -1733,  -250, -1733,  -277, -1733, -1733,
    -263,  -285,    14, -1733,    57, -1733, -1312,  -473,     2,  -246,
   -1733, -1733, -1733, -1733, -1733,  -531, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733, -1733, -1733,   354, -1733,   163, -1733, -1733,
   -1733, -1546, -1733,   359,   502, -1733, -1733, -1733, -1733,   673,
   -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733, -1733, -1733,   338, -1733, -1733, -1733, -1733, -1733, -1733,
   -1733,  1460,  -814,   691, -1733,   507, -1733,   693, -1733, -1733,
     254, -1091, -1733, -1733, -1733, -1733, -1733, -1302,   178, -1733,
   -1733, -1733, -1733, -1733, -1733,   171, -1733, -1733, -1733, -1733
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1076
static const yytype_int16 yytable[] =
{
      40,   421,   167,   146,   542,    41,   559,   678,   281,   556,
      37,   427,   163,   866,   423,    38,   693,   171,   545,   456,
      51,   882,  1058,  1050,  1277,    52,   179,   695,   434,   435,
      60,   541,   458,   437,   575,  1217,  1218,   862,   213,   698,
     202,   822,   213,   989,    42,  1010,   748,   562,   563,   564,
     871,    43,  1475,   293,  1528,  1151,  1047,  1152,   886,    50,
     922,   147,  1085,   727,   290,   821,   156,   451,  1166,   460,
     161,  1226,  1227,  1381,   170,   147,  1200,   293,   623,   847,
    1252,  1654,   595,   599,   893,   800,   801,  1006,  1069,  1070,
    1148,   275,   282,  1031,  1032,   845,   607,   716,   621,  1033,
      61,   162,  1591,  1594,   594,   797,   806,   149,   293,   210,
     802,   803,   804,  1699,  1008,   810,  1601,  2021,  2022,   293,
    1015,  1297,   147,  1528,   679,   181,   182,   183,   184,   185,
     186,  1528,  1943,  1041,  1298,  1790,   374,  1444,  1793,    64,
     462,  1369,  1664,   438,   672,   673,  1560,  1173,   162,   464,
     465,   406,  1595,  1042,  1700,   903,   463,  2023,  1116,  1445,
    1599,   -80,   -80,   -80,   -80,   -80,   -80,   150,   211,    58,
    1561,    65,    40,    40,    40,    40,    40,    41,    41,    41,
      41,    41,    37,    37,    37,    37,    37,    38,    38,    38,
      38,    38,    51,    51,    51,    51,    51,    52,    52,    52,
      52,    52,    60,    60,    60,    60,    60,    14,   392,   147,
     454,   455,   457,   755,   410,  1370,    42,    42,    42,    42,
      42,   202,   913,    43,    43,    43,    43,    43,   469,  -758,
    1665,    50,    50,    50,    50,    50,   475,   476,   477,   478,
    1771,  1755,   483,  1011,   484,   485,  1449,  2031,   894,   213,
    -754,   538,   489,    13,    14,   495,   496,   497,   498,   419,
     500,   501,   502,   503,   504,   847,   847,   453,   147,   147,
    1150,   847,    61,    61,    61,    61,    61,   483,  1009,   758,
     678,  1714,   466,  1713,  1016,  1943,   147,   698,  1449,    39,
     441,  1568,   439,  -711,   147,   147,   147,   147,   479,   482,
     147,   461,   147,   147,   162,  1220,  1888,  1018,   728,   488,
     147,  1174,  1161,   147,   147,   147,   147,   499,   147,   147,
     147,   147,   147,  1951,   786,   850,  1085,   162,   509,   510,
     212,   593,  1889,  1121,   807,   147,   856,   856,   748,   595,
     923,    58,    58,    58,    58,    58,  2024,  1297,   560,   561,
    1835,  1382,  -451,  1167,  1387,  1236,  1840,  1238,  1200,  1122,
    1298,   594,   591,   641,   754,  1119,  1120,  1602,   904,   350,
    -760,   594,   417,   350,  1282,  1670,  -711,   623,   578,   936,
    1099,  1023,  1024,  1784,  1262,  2032,   905,  1453,   711,   950,
    1379,  1137,   162,   177,  1671,  1856, -1075,  -758,   608,   178,
     932,   285,   286,   287,  1101,  1102,  1103,  1756,   374,    13,
     214,   204,  1475,  1319,   205,  -254,   761,   187,   188,   189,
     190,   147,   187,   188,   189,   190,  1017,  1020,   213,  1653,
    -711,   710,  1928,    14,  -711,  -711,  1902, -1075,   612,   613,
    1857,  1196,    48,   722, -1075,  1912,   736,   853,   738,   739,
     740,   741,   742,   743,  -711,   715,   744,   162,   152,   674,
     757,    39,    39,    39,    39,    39,  1655,  1309,   542,   766,
     767,   768,   769,   770,   161,  1334,   594,   282,  1338,  1727,
     392,  1388,   545,   699,   158,   542,   791,   811,  1422,   792,
    1171,   794,   795,   796,  1423,  1034,  1543,    13,   675,   545,
     252,   147,   592,  1677,  2010,  1703,  1704,  1974,   698,  1976,
     814,   815,  1057,  1369,  1705,  1715,   930,  1012,   147,  1574,
    1575,   542,  1841,  1732,  1781,  1813,   624,   147,   147,   147,
     147,   147,  1656,   215,   542,   545,  1823,   778,  -760,   610,
    1653,   191,   895,   790,   147,   153,  1540,   147,   545,   147,
     147,   147,  1854,  1890,   208,  1865,   847,  1552,  1891,   253,
    1672,  1107,    13,    14,  1559,   805,  1899,   559,  1140,   809,
     556,   282,   593,   676,  1118,  1584,  1054,  1913,  1829,  -254,
    1958,   157,   209,  1657,  1341,  1728,   162,  1682,   887,   574,
    1085,  1374,  1018,  1018,   547,   833,  1219,  1052,   593,   192,
    1240,  1242,  1026,  1695,   192,  1197,   677,  2018,   924,   254,
     899,  1248,   902,  1433,    48,    48,    48,    48,    48,  1356,
     855,  1859,   193,  1658, -1075,  1142,  1659,   193,   977,   162,
    1055,  1310,  1500,   255,   923,   223,  1660,  1501,   676,  1335,
    1406,  1880,  1339,  1177,   732,  1389,  1410,   762,  1411,  1375,
    1997,  1610,  1016,   374,   548,  1184,  1148,  1186,  1016,  1804,
    1544,   816,  1611,   194,  1198,  1138,  1857,  1678,  1230,  1389,
    1016,   677, -1062,   163,   256,   257,   258,   259,  1016,  1493,
     926,   929,   554,  1916,   931,  1920,  1224,  1619,   538,  1493,
    1004,    13,   214,   440,   978,  1709,  1228,  1229,  1984,  1985,
    1824,   642,   260,   887,   181,   182,   183,   184,   185,   186,
    1328,  1881,  1826,  1827,  1882,   261,  1855,   883,  1022,  1866,
     284,   262,  1353,   283,   733,   392,   263,   988,  1612,  1986,
    1900,   994,   282,  1078,    13,    14,  1805,   852,   761,  1806,
    1290,  1914,   289,   592,   734,  1036,  1291,  1263,   291,   491,
    1588,  1311,   441,  1502,   876,  1051,   877,   292,  1795,   592,
     264,  1354,   265,   187,   188,   189,   190,  1312,   736,   592,
     738,   739,   740,   741,   742,   743,   147, -1040,   744,  1258,
    1313,   661,   662,   663,   664,  1796,   285,   286,   287,   284,
    1398,   542,  1100, -1040,  1037,  1038,   876,  1402,   877,  1403,
    1613,   252,  1204,  1205,  1206,   545,  1207,  1208,  1209,  1210,
     542,  1558,  -530,   147,  1562,   492,   493,   494,  1287,   407,
    1115,  1204,  1205,  1206,   545,  1207,  1208,  1209,  1210,  1068,
    1068,  1068,   698,   285,   286,   287,  1125,  1318,   778,  1088,
    1134,  1135,  1136,  -530,  1585,  1525,  1587,  1264,   915,  1592,
     147,  1000,   916,   698,   420,   285,   286,   287,  1001,  1002,
     253,   424,   615,  1147,   909,    15,  1546,   542,   542,   570,
     571,   572,   573,  1281,   592,  1441,  1442,  1443,  -530,  -530,
    -530,   545,   545,   426,  -530,   425,    25,   191,   433,  1738,
    1739,   436,    26,    27,  1350,  1351,  1321,  1322,   443,  1211,
    1093,  1094,   924,  1095,  1547,   749,  1548,  1549,   444,   560,
     254,    29,  1143,   428,   429,   593,   923,   432,  1211,   442,
     923,   147,  1060,  1061,  1062,  1063,   923,   750,   923,  1153,
     751,   752,   467,   468,   255,   411,  1162,   445,   412,  -530,
     446,   710,   710,   447,   413,   192,  1098,  1204,  1205,  1206,
     505,   506,   994,  1407,  1210,   285,   286,   287,  1762,   450,
    -530,   424,  1763,   906,   213,   909,  -530,  -530,   193,   762,
    1255,  -224,  1256,  1257,   926,   256,   257,   258,   259,  1421,
    1216,  1216,  1216,   470,  1634,  -530,  1748,  1751,  1500,  1748,
     459,  1171,  1171,  1501,  1110,   471,  1589,  1112,  1113,  1114,
     486,  1582,   472,   260,   473,  -530,  -530,  -530,  1929,   194,
    1930,  1931,  1932,  1440,   710,  1124,  1126,  1127,  1128,   285,
     286,   287,   262,  1710,   474,   891,   487,   263,   681,   682,
    1448,  1499,  1452,  1452,  1455,   729,   730,  -224,  1720,   285,
     286,   287,   685,   686,  1272,  1169,   787,   788,  -530,   490,
     940,   941,   942,   542,   945,   946,  1243,  1045,  1038,   612,
     613,   264,   508,   265,  1631,  1175,  1176,   545,   181,   182,
     183,   184,   185,   186,  1302,   511,  1307,  1244,  1245,  1303,
    1269,  1270,  1774,  1775,  1260,  1261,   592,   512,  -224,  1078,
     293,  1917,   513,  1265,  1266,  -180,  1325,  1267,  1933,  1934,
     642,  1271,   147,   560,  2011,  2012,  -179,   419,   514,  1502,
     823,   824,   825,   826,   827,   828,  1068,   546,  1304,   430,
     431,  1284,  1044,  1046,   923,  1305,   923,   552,  -224,   923,
    1294,  -224,  1562,  1306,   147,  1308,  2003,  2004,   515,   516,
     517,  -224,   550,   551,   843,   844,  1320,   554,   293,  -867,
    -741,  1720,  -743,   518,   147,  -739,   565,   519,   520,   521,
     307,   308,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   566,   567,  1597,  1598,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   924,   531,   532,   533,   924,   568,
    1596,   574,   576,   577,   924,   579,   924,   887,   580,   581,
    1405,  1614,   582,  1452,   823,   824,   825,   826,   827,   861,
     583,   584,   542,   542,   542,  1649,  1650,   585,  1742,   823,
     824,   825,   826,   827,  1340,   586,   545,   545,   545,   587,
     588,   589,   603,   604,  1633,   627,  1638,   605,   619,  1643,
    1646,  1646,  1058,   620,   667,   736,   737,   738,   739,   740,
     741,   742,   743,   -14,     1,   744,   926,   629,   666,   668,
     926,   669,   670,   671,  -680,   683,   926,   687,   926,   688,
     689,  1414,   692,   700,   702,   630,  1416,   929,   631,   632,
     633,   634,   635,   636,   637,   638,   703,   704,   639,   640,
     724,   194,  -217,   725,   726,   753,  1516,   994,   759,  1434,
    1302,   756,   760,   923,     2,  1303,  1711,   771,   772,  -217,
    1625,   773,   774,   781,  -217,  -217,   782,     3,     4,     5,
       6,  1964,   775,   779,   793,   798,   819,   848,   812,     7,
       8,     9,    10,   813,   817,   818,   820,  1522,    11,  1523,
     608,  1524,  1488,  1489,  1304,   610,  1526,  1833,   855,   834,
    1492,  1305,   835,   836,   841,   859,  -217,   837,  -217,  1306,
    1712,   864,   851,   854,   860,   873,   880,  1496,   592,  1731,
     872,   888,   879,  1734,   890,   892,   900,  1740,   943,   944,
     282,  1517,   979,   349,   995,    12,   982,   998,   999,   710,
     710,  1007,   924,   623,   924,   980,  1027,   924,  1013,  1028,
    1029,  1025,  1030,  1038,  1056,  1747,  1529,  1053,  1059,  -217,
    -217,  -217,  1757,  1064,  1072,  1071,   534,   535,   536,   537,
    1089,  1091,  1092,  1111,    13,    14,  1123,  1097,  1133,  1553,
    -217,  1073,  -217,  1144,   642,  1129,  -616,  1145,  -217,  -217,
    1146,  1148,  1155,  1164,  1160,   284,   745,   167,  1182,  -217,
    1185,  1183,  -217,  1195,   642,  1222,  1203,  -217,  1188,   642,
    1232,  1629,  -217,  1237,   926,  1239,   926,  -742,  -744,   926,
     538,  1233,  1294,  1845,  -740,  1529,  1246,  1252,  1193,  1820,
    1250,    15,  1254,  1529,  1259,  1268,  1241,  1274,  1280,    16,
      17,  1669,    18,  1278,    19,    20,    21,    22,    23,    24,
    1279,  1283,    25,  1293,  1276,  1324,  1285,   224,    26,    27,
     657,   658,   659,   660,   661,   662,   663,   664,  1288,   926,
    -217,  1289,  1323,  1326,    28,  1329,  1174,    29,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,  1852,  1331,
    1286,  1332,  1333,  1336,  -771,   225,  1330,  1343,   226,  1337,
    1648,   630,  1344,  1345,   631,   632,   633,   634,   635,   636,
     637,   638,  1359,    30,   639,   640,  1346,  1349,   542,  1379,
    1347,   924,  1355,  1372,  1357,   282,  1892,   224,  1358,  1377,
    1383,  1384,   545,  1390,  1391,  1392,  1397,  1400,  1404,  1409,
    1412,  1413,   227,  1427,   228,  1915,  1415,  1418,  1419,  1426,
    1428,  1919,  1687,  1919,   229,  1430,  1431,  1435,  1439,  1853,
     374,  1456,  1436,  1438,  1457,   225,  1446,   630,   226,  1490,
     631,   632,   633,   634,   635,   636,   637,   638,  1493,  1981,
    1424,   640,  1497,  1498,  1936,  1491,  1511,  1510,  1512,  1514,
    1519,  1216,  1518,   926,  1530,  1531,  1555,  1545,  1556,  1557,
    1294,  1541,  1570,  1571,   230,  1569,  1586,  1593,  1769,  1600,
    1605,  1606,   227,  1607,   228,   631,   632,   633,   634,   635,
     636,   637,   638,  1609,   229,  1615,   640,  1737,  1617,  1977,
    1608,  1620,   392,  1744,  1623,  1624,  1639,  1626,  1319,  1641,
    1922,  1619,  1642,  1651,  1663,  1666,   538,  1488,  1673,  1674,
    1675,  1676,  1488,  1679,   542,  1680,  1689,   231,   232,   233,
     234,   235,   236,  1667,  1685,  1690,   147,  1691,   545,   237,
     238,   239,   240,  1692,   230,  1681,  1693,     3,     4,     5,
       6,  2008,  1694,  1702,   640,  1529,  1785,  1725,  1729,     7,
       8,     9,    10,  1684,  1726,  1698,  1733,   241,    11,  1741,
    1745,  1678,  1799,  1746,  1766,  1754,  1758,  1767,  1764,  1765,
     242,  1768,  1778,  1850,  1772,  1773,   243,  1782,  1783,   244,
    1794,   245,  1801,  1797,  1798,  1802,  1803,   231,   232,   233,
     234,   235,   236,  1821,  1815,  1822,  1816,  1818,  1825,   237,
     238,   239,   240,  1828,  1817,   624,  1830,  1834,  1744,  1842,
     601,   602,  1836,  1843,  1846,  1847,   606,   246,  1848,  1849,
    1851,   616,  1488,  1242,  1869,   560,  1863,   241,  1872,  1867,
    1862,   147,  1870,   515,   516,   517,  1873,  1874,  1877,  1887,
    1894,  1901,  1904,  1906,    13,    14,   243,  1910,   518,   244,
    1911,   245,   519,   520,   521,   307,   308,   522,   523,   524,
     525,   526,   527,   528,   529,   530,  1926,  1923,  1952,  1925,
    1881,  1955,  1875,  1967,  1940,  1969,  1968,  1973,  1975,  1941,
     531,   532,   533,  1999,  1938,  1988,  1978,   246,  2000,  1939,
    2001,  1737,  1996,  1979,  1945,  1897,  2005,  1898,  2002,  1946,
     696,    15,  1488,  2006,  1947,  2011,  2007,  1488,   696,    16,
      17,  2013,    18,  1744,  2015,  1744,  2012,  2030,  2033,  1076,
    1437,  1494,    25,  1251,   449,   448,   717,  1983,    26,    27,
     642,  1488,   630,   723,  1949,   631,   632,   633,   634,   635,
     636,   637,   638,   280,    28,  1425,   640,    29,  1956,  1035,
    1273,  1495,  1730,  2026,  2016,  2014,   630,  1315,  1316,   631,
     632,   633,   634,   635,   636,   637,   638,  2009,  1982,  1488,
     640,  1921,  1761,  2028,  1838,  1839,  2029,  1861,  1860,  1488,
    1749,   560,  1647,    30,  1520,  1005,   721,   155,   696,   409,
    1622,  1893,  1971,  1454,  1616,  1896,  1992,  1993,  1994,  1995,
     997,   996,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,  1573,  1572,  1249,  1408,  1247,  1417,
     690,   840,  1141,  1221,  1716,   949,  1348,  1940,  1168,  1139,
     948,   951,  1941,  1814,   981,  1187,   952,  1938,   274,  1948,
     858,  1488,  1939,  1488,   910,  1190,  1800,  1945,  1792,  1683,
     808,  1791,  1946,  1551,   865,   867,   867,  1947,   885,  1191,
    1539,  1686,   865,  1871,   867,  1542,  1954,  1961,     0,     0,
       0,     0,     0,     0,  2020,     0,     0,     0,   896,   897,
     898,     0,     0,     0,  1488,  1488,     0,     0,     0,     0,
       0,     0,     0,     0,   912,   696,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   939,   939,   939,   939,
       0,   534,   535,   536,   537,     0,     0,   953,   954,   955,
     956,   957,   958,   959,   960,   961,   962,   963,   964,   965,
     966,   968,   969,   970,   971,   972,   973,   974,   975,   976,
       0,     0,     0,     0,     0,   986,   986,     0,     0,     0,
       0,     0,     0,   293,     0,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,     0,     0,   305,   306,
       0,     0,    72,    73,     0,     0,    74,   307,   308,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,     0,     0,   309,   310,   311,   312,   313,   314,
     315,     0,    77,     0,     0,   267,   268,   269,     0,     0,
       0,     0,   316,    78,     0,     0,   162,   164,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,   317,     0,     0,     0,   318,
       0,     0,    87,   319,     0,    88,     0,    89,    90,    91,
       0,     0,     0,   320,    92,    93,     0,     0,     0,     0,
       0,     0,     0,   321,   322,   323,   324,   325,     0,   326,
     327,    94,    95,   328,   329,    96,   330,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   331,   105,   106,   107,
     108,     0,   109,   332,   110,     0,     0,     0,     0,     0,
     111,    13,   590,     0,   112,   334,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   335,   336,     0,     0,     0,   337,   338,   339,  1156,
       0,     0,     0,   865,     0,     0,     0,     0,   341,   867,
       0,     0,     0,   696,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,  1189,     0,     0,  1192,   117,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,     0,
       0,     0,     0,     0,   128,     0,     0,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,   696,   696,
     134,     0,   135,     0,     0,     0,   136,   137,     0,     0,
     591,     0,     0,   342,   343,   344,   345,     0,     0,     0,
       0,     0,  1231,   142,     0,     0,     0,   346,     0,     0,
       0,   347,   348,     0,     0,     0,     0,     0,   986,     0,
     986,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,   145,     0,   515,   516,   517,     0,     0,     0,
       0,     0,     0,     0,   696,     0,     0,     0,     0,   518,
     349,   696,   350,   519,   520,   521,   307,   308,   522,   523,
     524,   525,   526,   527,   528,   529,   530,     0,     0,   515,
     516,   517,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   531,   532,   533,   518,     0,     0,     0,   519,   520,
     521,   307,   308,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,     0,     0,     0,     0,     0,     0,   515,
     516,   517,     0,     0,     0,     0,   531,   532,   533,     0,
       0,     0,     0,     0,   518,     0,     0,     0,   519,   520,
     521,   307,   308,   522,   523,   524,   525,   526,   527,   528,
     529,   530,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   531,   532,   533,     0,
       0,     0,     0,     0,   840,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1352,     0,     0,     0,   867,     0,     0,     0,     0,
    1363,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1393,  1394,  1395,  1396,    66,    67,    68,
      69,    70,    71,   696,     0,     0,     0,     0,     0,  1401,
     696,     0,   696,     0,    72,    73,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,   986,     0,   162,   164,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,    80,     0,     0,    81,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,     0,   534,   535,   536,   537,    86,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    88,     0,    89,
      90,    91,     0,     0,     0,     0,    92,    93,     0,     0,
    1644,     0,     0,     0,     0,     0,     0,   534,   535,   536,
     537,     0,     0,    94,    95,     0,     0,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,     0,   105,
     106,   107,   108,     0,   109,     0,   110,     0,     0,     0,
       0,     0,   111,    13,  1199,     0,   112,   534,   535,   536,
     537,     0,     0,     0,  1534,     0,     0,  1363,     0,     0,
       0,     0,     0,     0,     0,  1156,     0,     0,     0,     0,
       0,     0,   865,     0,     0,   865,     0,     0,     0,  1180,
       0,     0,     0,     0,   696,   696,   696,   696,     0,   113,
     114,     0,     0,     0,   696,     0,     0,   115,     0,     0,
       0,   116,   642,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,   642,   136,   137,
       0,     0,   591,     0,     0,   138,   139,   140,   141,  1637,
     643,   644,   645,   646,   647,   142,     0,     0,   648,   649,
     650,   651,   652,     0,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   642,  1580,   143,     0,
       0,     0,     0,   144,   145,     0,     0,   865,     0,     0,
       0,     0,     0,     0,     0,   643,   644,   645,   646,   647,
       0,     0,   918,   648,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,     0,     0,     0,     0,     0,     0,     0,     0,  1363,
       0,     0,     0,   642,   643,   644,   645,   646,   647,     0,
       0,     0,   648,   649,   650,   651,   652,     0,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
       0,  1706,     0,  1707,     0,     0,  1708,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   642,     0,     0,     0,
       0,     0,     0,     0,     0,   840,     0,     0,     0,   865,
       0,   643,   644,   645,   646,   647,  1181,     0,   865,   648,
     649,   650,   651,   652,     0,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   642,     0,     0,   643,   644,   645,   646,   647,     0,
       0,  1581,   648,   649,   650,   651,   652,     0,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
       0,     0,     0,     0,     0,  1786,  1534,  1534,     0,  1534,
       0,     0,     0,   642,     0,     0,     0,     0,     0,     0,
    1178,     0,     0,   865,     0,     0,     0,     0,     0,   643,
     644,   645,   646,   647,     0,     0,     0,   648,   649,   650,
     651,   652,   865,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1832,   643,   644,   645,   646,   647,  1837,  1194,     0,   648,
     649,   650,   651,   652,     0,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   293,     0,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
    1576,     0,   305,   306,     0,     0,    72,    73,     0,     0,
      74,   307,   308,     0,     0,     0,     0,  1399,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,   309,   310,
     311,   312,   313,   314,   315,     0,    77,     0,     0,   267,
     268,   269,     0,     0,     0,     0,   316,    78,     0,     0,
       0,   164,   165,   166,     0,     0,     0,     0,     0,  1905,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,  1786,     0,     0,  1534,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,   317,
       0,     0,   865,   318,     0,     0,    87,   319,     0,    88,
       0,    89,    90,    91,     0,  1972,     0,   320,    92,    93,
       0,     0,     0,     0,     0,     0,     0,   321,   322,   323,
     324,   325,     0,   326,   327,    94,    95,   328,   329,    96,
     330,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     331,   105,   106,   107,   108,     0,   109,   332,   110,     0,
       0,     0,     0,     0,   111,     0,   333,     0,   112,   334,
       0,   933,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   934,   935,     0,     0,   335,   336,     0,     0,     0,
     337,   338,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   341,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   128,     0,
       0,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   134,     0,   135,     0,     0,     0,
     136,   137,     0,     0,     0,     0,     0,   342,   343,   344,
     345,     0,     0,     0,     0,     0,     0,   142,     0,     0,
       0,   346,     0,     0,     0,   347,   348,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,     0,   144,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   349,   293,   350,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,     0,     0,
     305,   306,     0,     0,    72,    73,     0,     0,    74,   307,
     308,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,    76,     0,     0,   309,   310,   311,   312,
     313,   314,   315,     0,    77,     0,     0,   267,   268,   269,
       0,     0,     0,     0,   316,    78,     0,     0,   162,   164,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,    80,     0,     0,    81,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,     0,     0,     0,     0,     0,    86,   317,     0,     0,
       0,   318,     0,     0,    87,   319,     0,    88,     0,    89,
      90,    91,     0,     0,     0,   320,    92,    93,     0,     0,
       0,     0,     0,     0,     0,   321,   322,   323,   324,   325,
       0,   326,   327,    94,    95,   328,   329,    96,   330,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   331,   105,
     106,   107,   108,     0,   109,   332,   110,     0,     0,     0,
       0,     0,   111,    13,   590,     0,   112,   334,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   335,   336,     0,     0,     0,   337,   338,
     339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,     0,  1630,   137,
       0,     0,     0,     0,     0,   342,   343,   344,   345,     0,
       0,     0,     0,     0,     0,   142,     0,     0,     0,   346,
       0,     0,     0,   347,   348,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   144,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   349,   293,   350,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,     0,     0,   305,   306,
       0,     0,    72,    73,     0,     0,    74,   307,   308,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,     0,     0,   309,   310,   311,   312,   313,   314,
     315,     0,    77,     0,     0,   267,   268,   269,     0,     0,
       0,     0,   316,    78,     0,     0,     0,   164,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,   317,     0,     0,     0,   318,
       0,     0,    87,   319,     0,    88,     0,    89,    90,    91,
       0,     0,     0,   320,    92,    93,     0,     0,     0,     0,
       0,     0,     0,   321,   322,   323,   324,   325,     0,   326,
     327,    94,    95,   328,   329,    96,   330,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   331,   105,   106,   107,
     108,     0,   109,   332,   110,     0,     0,     0,     0,     0,
     111,     0,   333,     0,   112,   334,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   335,   336,     0,     0,     0,   337,   338,   339,     0,
       0,     0,     0,     0,     0,   340,     0,     0,   341,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,     0,
       0,     0,     0,     0,   128,     0,     0,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,     0,   135,     0,     0,     0,   136,   137,     0,     0,
       0,     0,     0,   342,   343,   344,   345,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,   346,     0,     0,
       0,   347,   348,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     349,   293,   350,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,     0,     0,   305,   306,     0,     0,
      72,    73,     0,     0,    74,   307,   308,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
       0,     0,   309,   310,   311,   312,   313,   314,   315,     0,
      77,     0,     0,   267,   268,   269,     0,     0,     0,     0,
     316,    78,     0,     0,     0,   164,   165,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
      80,     0,     0,    81,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,     0,     0,     0,
       0,     0,    86,   317,     0,     0,     0,   318,     0,     0,
      87,   319,     0,    88,     0,    89,    90,    91,     0,     0,
       0,   320,    92,    93,     0,     0,     0,     0,     0,     0,
       0,   321,   322,   323,   324,   325,     0,   326,   327,    94,
      95,   328,   329,    96,   330,    97,    98,    99,   100,   101,
     102,   103,     0,   104,   331,   105,   106,   107,   108,     0,
     109,   332,   110,     0,     0,     0,     0,     0,   111,     0,
     333,     0,   112,   334,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   335,
     336,     0,     0,     0,   337,   338,   339,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   341,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,     0,     0,     0,
       0,     0,   128,     0,     0,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,     0,
     135,     0,     0,     0,   136,   137,     0,     0,     0,     0,
       0,   342,   343,   344,   345,     0,     0,     0,     0,     0,
       0,   142,     0,     0,     0,   346,     0,     0,     0,   347,
     348,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   144,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   349,   293,
     350,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,     0,     0,   305,   306,     0,     0,    72,    73,
       0,     0,    74,   307,   308,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,    76,     0,     0,
     309,   310,   311,   312,   313,   314,   315,     0,    77,     0,
       0,   267,   268,   269,     0,     0,     0,     0,   316,    78,
       0,     0,     0,   164,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,    80,     0,
       0,    81,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,   318,     0,     0,    87,   319,
       0,    88,     0,    89,    90,    91,     0,     0,     0,   320,
      92,    93,     0,     0,     0,     0,     0,     0,     0,   321,
     322,   323,   324,   325,     0,   326,   327,    94,    95,   328,
     329,    96,   330,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   331,   105,   106,   107,   108,     0,   109,   332,
     110,     0,     0,     0,     0,     0,   111,     0,   600,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1717,     0,     0,     0,     0,     0,   335,   336,     0,
       0,     0,   337,   338,   339,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   341,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,     0,     0,     0,     0,     0,
     128,     0,     0,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,     0,   135,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,   342,
     343,   344,   345,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,   346,     0,     0,     0,   347,   348,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,     0,   144,   145,     0,
       0,     0,     0,     0,     0,  1718,     0,     0,     0,     0,
       0,     0,  1719,     0,     0,     0,     0,   293,   350,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
       0,     0,   305,   306,     0,     0,    72,    73,     0,     0,
      74,   307,   308,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,   309,   310,
     311,   312,   313,   314,   315,     0,    77,     0,     0,   267,
     268,   269,     0,     0,     0,     0,   316,    78,     0,     0,
     162,   164,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,   318,     0,     0,    87,   319,     0,    88,
       0,    89,    90,    91,     0,     0,     0,   320,    92,    93,
       0,     0,     0,     0,     0,     0,     0,   321,   322,   323,
     324,   325,     0,   326,   327,    94,    95,   328,   329,    96,
     330,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     331,   105,   106,   107,   108,     0,   109,   332,   110,     0,
       0,     0,     0,     0,   111,     0,   705,   706,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   335,   336,     0,     0,     0,
     337,   338,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   341,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   128,     0,
       0,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   134,     0,   135,     0,     0,     0,
     136,   137,     0,     0,     0,     0,     0,   342,   343,   344,
     345,     0,     0,     0,     0,     0,     0,   142,     0,     0,
       0,   346,     0,     0,     0,   347,   348,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,     0,   144,   145,     0,   293,     0,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,     0,     0,   305,   306,     0,   350,    72,    73,     0,
       0,    74,   307,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,     0,     0,   309,
     310,   311,   312,   313,   314,   315,     0,    77,     0,     0,
     267,   268,   269,     0,     0,     0,     0,   316,    78,     0,
       0,     0,   164,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,   318,     0,     0,    87,   319,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   320,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   321,   322,
     323,   324,   325,     0,   326,   327,    94,    95,   328,   329,
      96,   330,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   331,   105,   106,   107,   108,     0,   109,   332,   110,
       0,     0,     0,     0,     0,   111,     0,   600,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   983,     0,     0,   335,   336,     0,     0,
       0,   337,   338,   339,     0,     0,     0,     0,     0,     0,
     984,     0,     0,   341,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   985,     0,     0,     0,     0,     0,   128,
       0,     0,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,     0,   135,     0,     0,
       0,   136,   137,     0,     0,     0,     0,     0,   342,   343,
     344,   345,     0,     0,     0,     0,     0,     0,   142,     0,
       0,     0,   346,     0,     0,     0,   347,   348,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,   144,   145,     0,   293,
       0,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,     0,     0,   305,   306,     0,   350,    72,    73,
       0,     0,    74,   307,   308,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,    76,     0,     0,
     309,   310,   311,   312,   313,   314,   315,     0,    77,     0,
       0,   267,   268,   269,     0,     0,     0,     0,   316,    78,
       0,     0,     0,   164,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,    80,     0,
       0,    81,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,   318,     0,     0,    87,   319,
       0,    88,     0,    89,    90,    91,     0,     0,     0,   320,
      92,    93,     0,     0,     0,     0,     0,     0,     0,   321,
     322,   323,   324,   325,  1533,   326,   327,    94,    95,   328,
     329,    96,   330,    97,    98,    99,   100,   101,   102,   103,
     873,   104,   331,   105,   106,   107,   108,     0,   109,   332,
     110,     0,     0,     0,     0,     0,   111,     0,   600,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,   336,     0,
       0,     0,   337,   338,   339,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   341,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,     0,     0,     0,     0,     0,
     128,     0,     0,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,     0,   135,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,   342,
     343,   344,   345,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,   346,     0,     0,     0,   347,   348,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,     0,   144,   145,     0,
     293,     0,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,     0,     0,   305,   306,     0,   350,    72,
      73,     0,     0,    74,   307,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,    76,     0,
       0,   309,   310,   311,   312,   313,   314,   315,     0,    77,
       0,     0,   267,   268,   269,     0,     0,     0,     0,   316,
      78,     0,     0,     0,   164,   165,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,    80,
       0,     0,    81,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    83,    84,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,   318,     0,     0,    87,
     319,     0,    88,     0,    89,    90,    91,     0,     0,     0,
     320,    92,    93,     0,     0,     0,     0,     0,     0,     0,
     321,   322,   323,   324,   325,     0,   326,   327,    94,    95,
     328,   329,    96,   330,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   331,   105,   106,   107,   108,     0,   109,
     332,   110,     0,     0,     0,     0,     0,   111,     0,   600,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   335,   336,
       0,     0,     0,   337,   338,   339,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   341,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,     0,   135,
       0,     0,     0,   136,   137,     0,     0,     0,     0,     0,
     342,   343,   344,   345,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,   346,     0,     0,     0,   347,   348,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,   144,   145,
       0,     0,     0,     0,     0,     0,  1718,     0,     0,     0,
       0,     0,     0,  1719,     0,     0,     0,     0,   293,   350,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,     0,     0,   305,   306,     0,     0,    72,    73,     0,
       0,    74,   307,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,     0,     0,   309,
     310,   311,   312,   313,   314,   315,     0,    77,     0,     0,
     267,   268,   269,     0,     0,     0,     0,   316,    78,     0,
       0,     0,   164,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,   318,     0,     0,    87,   319,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   320,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   321,   322,
     323,   324,   325,     0,   326,   327,    94,    95,   328,   329,
      96,   330,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   331,   105,   106,   107,   108,     0,   109,   332,   110,
       0,     0,     0,     0,     0,   111,     0,   600,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   335,   336,     0,     0,
       0,   337,   338,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   127,     0,     0,     0,     0,     0,   128,
       0,     0,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,     0,   135,     0,     0,
       0,   136,   137,     0,     0,     0,     0,     0,   342,   343,
     344,   345,     0,     0,     0,     0,     0,     0,   142,     0,
       0,     0,   346,     0,     0,     0,   347,   348,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,   144,   145,     0,     0,
       0,     0,     0,     0,  1962,     0,     0,     0,     0,     0,
       0,  1963,     0,     0,     0,     0,   293,   350,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,     0,    72,    73,     0,     0,    74,
     307,   308,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    76,     0,     0,   309,   310,   311,
     312,   313,   314,   315,     0,    77,     0,     0,   267,   268,
     269,     0,     0,     0,     0,   316,    78,     0,     0,     0,
     164,   165,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,    80,     0,     0,    81,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,   318,     0,     0,    87,   319,     0,    88,     0,
      89,    90,    91,     0,     0,     0,   320,    92,    93,     0,
       0,     0,     0,     0,     0,     0,   321,   322,   323,   324,
     325,     0,   326,   327,    94,    95,   328,   329,    96,   330,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   331,
     105,   106,   107,   108,     0,   109,   332,   110,     0,     0,
       0,     0,     0,   111,     0,   600,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   335,   336,     0,     0,     0,   337,
     338,   339,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   341,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   342,   343,   344,   345,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
     346,   615,     0,     0,   347,   348,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,   144,   145,     0,   293,     0,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
       0,     0,   305,   306,     0,   350,    72,    73,     0,     0,
      74,   307,   308,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,   309,   310,
     311,   312,   313,   314,   315,     0,    77,     0,     0,   267,
     268,   269,     0,     0,     0,     0,   316,    78,     0,     0,
       0,   164,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,   318,     0,     0,    87,   319,     0,    88,
       0,    89,    90,    91,     0,     0,     0,   320,    92,    93,
       0,     0,     0,     0,     0,     0,     0,   321,   322,   323,
     324,   325,     0,   326,   327,    94,    95,   328,   329,    96,
     330,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     331,   105,   106,   107,   108,     0,   109,   332,   110,     0,
       0,     0,     0,     0,   111,     0,   600,   694,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   335,   336,     0,     0,     0,
     337,   338,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   341,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   128,     0,
       0,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   134,     0,   135,     0,     0,     0,
     136,   137,     0,     0,     0,     0,     0,   342,   343,   344,
     345,     0,     0,     0,     0,     0,     0,   142,     0,     0,
       0,   346,     0,     0,     0,   347,   348,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,     0,   144,   145,     0,   293,     0,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,     0,     0,   305,   306,     0,   350,    72,    73,     0,
       0,    74,   307,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,     0,     0,   309,
     310,   311,   312,   313,   314,   315,     0,    77,     0,     0,
     267,   268,   269,     0,     0,     0,     0,   316,    78,     0,
       0,     0,   164,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,   318,     0,     0,    87,   319,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   320,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   321,   322,
     323,   324,   325,     0,   326,   327,    94,    95,   328,   329,
      96,   330,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   331,   105,   106,   107,   108,     0,   109,   332,   110,
       0,     0,     0,     0,     0,   111,     0,   600,     0,   112,
       0,   967,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   335,   336,     0,     0,
       0,   337,   338,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   127,     0,     0,     0,     0,     0,   128,
       0,     0,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,     0,   135,     0,     0,
       0,   136,   137,     0,     0,     0,     0,     0,   342,   343,
     344,   345,     0,     0,     0,     0,     0,     0,   142,     0,
       0,     0,   346,     0,     0,     0,   347,   348,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,   144,   145,     0,   293,
       0,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,     0,     0,   305,   306,     0,   350,    72,    73,
       0,     0,    74,   307,   308,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,    76,     0,     0,
     309,   310,   311,   312,   313,   314,   315,     0,    77,     0,
       0,   267,   268,   269,     0,     0,     0,     0,   316,    78,
       0,     0,   162,   164,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,    80,     0,
       0,    81,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,   318,     0,     0,    87,   319,
       0,    88,     0,    89,    90,    91,     0,     0,     0,   320,
      92,    93,     0,     0,     0,     0,     0,     0,     0,   321,
     322,   323,   324,   325,     0,   326,   327,    94,    95,   328,
     329,    96,   330,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   331,   105,   106,   107,   108,     0,   109,   332,
     110,     0,     0,     0,     0,     0,   111,     0,   705,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,   336,     0,
       0,     0,   337,   338,   339,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   341,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,     0,     0,     0,     0,     0,
     128,     0,     0,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,     0,   135,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,   342,
     343,   344,   345,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,   346,     0,     0,     0,   347,   348,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,     0,   144,   145,     0,
     293,     0,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,     0,     0,   305,   306,     0,   350,    72,
      73,     0,     0,    74,   307,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,    76,     0,
       0,   309,   310,   311,   312,   313,   314,   315,     0,    77,
       0,     0,   267,   268,   269,     0,     0,     0,     0,   316,
      78,     0,     0,     0,   164,   165,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,  1361,
       0,     0,    81,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    83,    84,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,   318,     0,     0,    87,
     319,     0,    88,     0,    89,    90,    91,     0,     0,     0,
     320,    92,    93,     0,     0,     0,     0,     0,     0,     0,
     321,   322,   323,   324,   325,     0,   326,   327,    94,    95,
     328,   329,    96,   330,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   331,   105,   106,   107,   108,     0,   109,
     332,   110,     0,     0,     0,     0,     0,   111,     0,   600,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   335,   336,
       0,     0,     0,   337,   338,   339,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   341,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,  1362,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,     0,   135,
       0,     0,     0,   136,   137,     0,     0,     0,     0,     0,
     342,   343,   344,   345,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,   346,     0,     0,     0,   347,   348,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,   144,   145,
       0,   293,     0,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,     0,     0,   305,   306,     0,   350,
      72,    73,     0,     0,    74,   307,   308,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
       0,     0,   309,   310,   311,   312,   313,   314,   315,     0,
      77,     0,     0,   267,   268,   269,     0,     0,     0,     0,
     316,    78,     0,     0,     0,   164,   165,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
      80,     0,     0,    81,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,   318,     0,     0,
      87,   319,     0,    88,     0,    89,    90,    91,     0,     0,
       0,   320,    92,    93,     0,     0,     0,     0,     0,     0,
       0,   321,   322,   323,   324,   325,     0,   326,   327,    94,
      95,   328,   329,    96,   330,    97,    98,    99,   100,   101,
     102,   103,     0,   104,   331,   105,   106,   107,   108,     0,
     109,   332,   110,     0,     0,     0,     0,     0,   111,     0,
     600,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   335,
     336,     0,     0,     0,   337,   338,   339,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   341,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,     0,     0,     0,
       0,     0,   128,     0,     0,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,     0,
     135,     0,     0,     0,   136,   137,     0,     0,     0,     0,
       0,   342,   343,   344,   345,     0,     0,     0,     0,     0,
       0,   142,     0,     0,     0,   346,  1634,     0,     0,   347,
     348,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   144,
     145,     0,   293,     0,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,     0,     0,   305,   306,     0,
     350,    72,    73,     0,     0,    74,   307,   308,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
      76,     0,     0,   309,   310,   311,   312,   313,   314,   315,
       0,    77,     0,     0,   267,   268,   269,     0,     0,     0,
       0,   316,    78,     0,     0,     0,   164,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,    80,     0,     0,    81,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,   318,     0,
       0,    87,   319,     0,    88,     0,    89,    90,    91,     0,
       0,     0,   320,    92,    93,     0,     0,     0,     0,     0,
       0,     0,   321,   322,   323,   324,   325,  1533,   326,   327,
      94,    95,   328,   329,    96,   330,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   331,   105,   106,   107,   108,
       0,   109,   332,   110,     0,     0,     0,     0,     0,   111,
       0,   600,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     335,   336,     0,     0,     0,   337,   338,   339,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   341,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   116,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     0,   127,     0,     0,
       0,     0,     0,   128,     0,     0,   129,     0,     0,     0,
     130,     0,     0,   131,   132,     0,   133,     0,     0,   134,
       0,   135,     0,     0,     0,   136,   137,     0,     0,     0,
       0,     0,   342,   343,   344,   345,     0,     0,     0,     0,
       0,     0,   142,     0,     0,     0,   346,     0,     0,     0,
     347,   348,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
     144,   145,     0,   293,     0,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,     0,     0,   305,   306,
       0,   350,    72,    73,     0,     0,    74,   307,   308,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,     0,     0,   309,   310,   311,   312,   313,   314,
     315,     0,    77,     0,     0,   267,   268,   269,     0,     0,
       0,     0,   316,    78,     0,     0,     0,   164,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,   318,
       0,     0,    87,   319,     0,    88,     0,    89,    90,    91,
       0,     0,     0,   320,    92,    93,     0,     0,     0,     0,
       0,     0,     0,   321,   322,   323,   324,   325,     0,   326,
     327,    94,    95,   328,   329,    96,   330,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   331,   105,   106,   107,
     108,     0,   109,   332,   110,     0,     0,     0,     0,     0,
     111,     0,   600,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   335,   336,     0,     0,     0,   337,   338,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,     0,
       0,     0,     0,     0,   128,     0,     0,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,     0,   135,     0,     0,     0,   136,   137,     0,     0,
       0,     0,     0,   342,   343,   344,   345,    66,    67,    68,
      69,    70,    71,   142,     0,     0,     0,   346,     0,     0,
       0,   347,   348,     0,    72,    73,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
      75,   144,   145,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,   350,     0,     0,    78,     0,     0,     0,   164,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,    80,     0,     0,    81,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    88,     0,    89,
      90,    91,     0,     0,     0,     0,    92,    93,     0,     0,
       0,   642,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,     0,   105,
     106,   107,   108,     0,   109,     0,   110,     0,     0,     0,
       0,     0,   111,     0,   917,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   643,
     644,   645,   646,   647,     0,     0,     0,   648,   649,   650,
     651,   652,     0,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,     0,   136,   137,
       0,     0,     0,     0,     0,   138,   139,   140,   141,    66,
      67,    68,    69,    70,    71,   142,   906,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,    75,   144,   145,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,   918,     0,     0,     0,     0,    78,     3,     4,
    1458,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1459,     0,     0,    80,     0,     0,  1460,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,    88,
       0,    89,    90,    91,     0,     0,   642,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,     0,     0,   643,   644,   645,   646,   647,     0,
       0,     0,   648,   649,   650,   651,   652,     0,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,    15,   116,     0,     0,     0,     0,     0,   117,
      16,  1462,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,    25,     0,     0,     0,     0,   128,    26,
      27,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   134,    28,   135,  1463,    29,     0,
     136,   137,     0,     0,     0,     0,     0,   138,   139,   140,
     141,  1751,     0,     0,     0,     0,     0,   142,     0,     0,
       0,  1464,     0,     0,  1907,     0,     0,  1465,  1908,  -338,
       0,     0,     0,     0,    30,     0,     0,     0,     0,     0,
     143,     0,     0,     0,     0,   144,   145,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     3,     4,  1458,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,  1459,     0,     0,    80,     0,     0,  1460,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    88,     0,    89,
      90,    91,   642,     0,     0,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,     0,   105,
     106,   107,   108,     0,   109,     0,   110,     0,     0,     0,
       0,     0,   111,     0,     0,     0,   112,     0,     0,     0,
     643,   644,   645,   646,   647,     0,     0,     0,   648,   649,
     650,   651,   652,     0,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
      15,   116,     0,     0,     0,     0,  1461,   117,    16,  1462,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   665,
     127,    25,     0,     0,     0,     0,   128,    26,    27,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,    28,   135,  1463,    29,     0,   136,   137,
       0,     0,     0,     0,     0,   138,   139,   140,   141,     0,
       0,     0,     0,     0,     0,   142,     0,     0,     0,  1464,
       0,     0,     0,     0,     0,  1465,     0,     0,     0,     0,
    1466,     0,    30,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   144,   145,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     3,     4,  1458,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,  1459,
       0,     0,    80,     0,     0,  1460,     0,     0,     0,     0,
       0,    82,     0,  1225,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,     0,    89,    90,    91,
     642,     0,     0,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,     0,   109,     0,   110,     0,     0,     0,     0,     0,
     111,     0,     0,     0,   112,     0,     0,     0,   643,   644,
     645,   646,   647,     0,     0,     0,   648,   649,   650,   651,
     652,     0,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,    15,   116,
       0,     0,     0,     0,  1759,   117,    16,  1462,  1760,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,    25,
       0,     0,     0,     0,   128,    26,    27,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,    28,   135,  1463,    29,     0,   136,   137,     0,     0,
       0,     0,     0,   138,   139,   140,   141,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,  1464,     0,     0,
       0,     0,     0,  1465,     0,     0,     0,     0,  1466,     0,
      30,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,   145,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     3,     4,  1458,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,  1459,     0,     0,
      80,     0,     0,  1460,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,  1578,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,    88,     0,    89,    90,    91,     0,   642,
       0,     0,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,    96,     0,    97,    98,    99,   100,   101,
     102,   103,     0,   104,     0,   105,   106,   107,   108,  1579,
     109,     0,   110,     0,     0,     0,     0,     0,   111,     0,
       0,     0,   112,     0,     0,     0,     0,   643,   644,   645,
     646,   647,     0,     0,     0,   648,   649,   650,   651,   652,
       0,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,    15,   116,     0,     0,
       0,     0,     0,   117,    16,  1462,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,    25,     0,     0,
       0,     0,   128,    26,    27,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,    28,
     135,  1463,    29,     0,   136,   137,     0,     0,     0,     0,
       0,   138,   139,   140,   141,     0,     0,     0,     0,     0,
       0,   142,     0,     0,     0,  1464,     0,     0,     0,     0,
       0,  1465,     0,  -338,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   144,
     145,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       3,     4,  1458,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1459,     0,     0,    80,     0,
       0,  1460,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,    88,     0,    89,    90,    91,   642,     0,     0,     0,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,     0,
       0,    96,     0,    97,    98,    99,   100,   101,   102,   103,
       0,   104,     0,   105,   106,   107,   108,     0,   109,     0,
     110,     0,     0,     0,     0,     0,   111,     0,     0,     0,
     112,     0,     0,     0,   643,   644,   645,   646,   647,     0,
       0,     0,   648,   649,   650,   651,   652,     0,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
       0,     0,     0,     0,     0,     0,  1130,  1131,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,    15,   116,     0,     0,     0,     0,
       0,   117,    16,  1462,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,    25,     0,     0,     0,     0,
     128,    26,    27,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,    28,   135,  1463,
      29,     0,   136,   137,     0,     0,     0,     0,     0,   138,
     139,   140,   141,    66,    67,    68,    69,    70,    71,   142,
       0,     0,     0,  1464,     0,     0,     0,     0,     0,  1465,
      72,    73,     0,     0,    74,  1980,    30,     0,     0,     0,
       0,     0,   143,     0,     0,     0,    75,   144,   145,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     3,     4,  1458,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,  1459,     0,     0,
      80,     0,     0,  1460,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,    88,     0,    89,    90,    91,     0,   642,
       0,     0,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,    96,     0,    97,    98,    99,   100,   101,
     102,   103,     0,   104,     0,   105,   106,   107,   108,     0,
     109,     0,   110,     0,     0,     0,     0,     0,   111,  1179,
       0,     0,   112,     0,     0,     0,     0,   643,   644,   645,
     646,   647,     0,     0,     0,   648,   649,   650,   651,   652,
       0,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,    15,   116,     0,     0,
       0,     0,     0,   117,    16,  1462,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,    25,     0,     0,
       0,     0,   128,    26,    27,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,    28,
     135,  1463,    29,     0,   136,   137,     0,     0,     0,     0,
       0,   138,   139,   140,   141,    66,    67,    68,    69,    70,
      71,   142,     0,     0,     0,  1464,     0,     0,     0,     0,
       0,  1465,    72,    73,     0,     0,    74,     0,    30,     0,
       0,     0,     0,     0,   143,     0,     0,     0,    75,   144,
     145,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     3,     4,  1458,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,  1459,
       0,     0,    80,     0,     0,  1460,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,     0,    89,    90,    91,
       0,   642,     0,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,  1532,   109,     0,   110,     0,     0,     0,     0,     0,
     111,     0,     0,     0,   112,     0,     0,     0,     0,   643,
     644,   645,   646,   647,     0,     0,     0,   648,   649,   650,
     651,   652,     0,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,   117,    16,  1462,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,     0,
       0,     0,     0,     0,   128,    26,    27,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,    28,   135,  1463,     0,     0,   136,   137,     0,     0,
       0,     0,     0,   138,   139,   140,   141,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,  1464,     0,     0,
       0,     0,     0,  1465,     0,     0,     0,     0,  1937,     0,
      30,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,   145,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     3,     4,  1458,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,  1459,     0,     0,
      80,     0,     0,  1460,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,    88,     0,    89,    90,    91,     0,   642,
       0,     0,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,    96,     0,    97,    98,    99,   100,   101,
     102,   103,     0,   104,     0,   105,   106,   107,   108,  1577,
     109,     0,   110,     0,     0,     0,     0,     0,   111,     0,
       0,     0,   112,     0,     0,     0,     0,   643,   644,   645,
     646,   647,     0,     0,     0,   648,   649,   650,   651,   652,
       0,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,   117,    16,  1462,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,     0,     0,     0,
       0,     0,   128,    26,    27,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,    28,
     135,  1463,     0,     0,   136,   137,     0,     0,     0,     0,
       0,   138,   139,   140,   141,    66,    67,    68,    69,    70,
      71,   142,     0,     0,     0,  1464,     0,   224,     0,     0,
       0,  1465,    72,    73,     0,     0,    74,  2027,    30,     0,
       0,     0,     0,     0,   143,     0,     0,     0,    75,   144,
     145,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,   226,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,     0,    89,    90,    91,
       0,   642,     0,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,  1583,   109,     0,   110,     0,     0,     0,     0,     0,
     111,     0,     0,     0,   112,     0,     0,     0,     0,   643,
     644,   645,   646,   647,     0,     0,     0,   648,   649,   650,
     651,   652,     0,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   276,   277,   233,
     234,   235,   236,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,     0,
       0,     0,     0,     0,   128,     0,     0,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,     0,   135,     0,     0,     0,   278,   137,     0,     0,
       0,     0,     0,   138,   139,   140,   141,    66,    67,    68,
     990,   991,   992,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
      75,   144,   145,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,   164,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,    80,     0,     0,    81,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    88,     0,    89,
      90,    91,     0,   642,     0,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,     0,   105,
     106,   107,   108,  1810,   109,     0,   110,     0,     0,     0,
       0,     0,   111,     0,     0,     0,   112,     0,     0,     0,
       0,   643,   644,   645,   646,   647,     0,     0,     0,   648,
     649,   650,   651,   652,     0,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   993,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,     0,   136,   137,
       0,     0,     0,     0,     0,   138,   139,   140,   141,    66,
      67,    68,   990,   991,   992,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,    75,   144,   145,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,   164,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,    88,
       0,    89,    90,    91,     0,   642,     0,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,  1811,   109,     0,   110,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,     0,   643,   644,   645,   646,   647,     0,     0,
       0,   648,   649,   650,   651,   652,     0,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,  1432,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   128,     0,
       0,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   134,     0,   135,     0,     0,     0,
     136,   137,     0,     0,     0,     0,     0,   138,   139,   140,
     141,    66,    67,    68,    69,    70,    71,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,    75,   144,   145,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,   164,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,    80,     0,
       0,    81,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,    88,     0,    89,    90,    91,     0,   642,     0,     0,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,     0,
       0,    96,     0,    97,    98,    99,   100,   101,   102,   103,
       0,   104,     0,   105,   106,   107,   108,  1812,   109,     0,
     110,     0,     0,     0,     0,     0,   111,     0,     0,     0,
     112,     0,     0,     0,     0,   643,   644,   645,   646,   647,
       0,     0,     0,   648,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,     0,     0,     0,     0,     0,
     128,     0,     0,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,     0,   135,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,   138,
     139,   140,   141,    66,    67,    68,    69,    70,    71,   142,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,    75,   144,   145,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,   267,   268,   269,     0,     0,     0,     0,
       0,   270,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
      80,     0,     0,    81,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,    88,     0,    89,    90,    91,   642,     0,
       0,     0,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,    96,     0,    97,    98,    99,   100,   101,
     102,   103,     0,   104,     0,   105,   106,   107,   108,     0,
     109,     0,   110,     0,     0,     0,     0,     0,   111,     0,
       0,     0,   112,     0,     0,     0,   643,   644,   645,   646,
     647,     0,     0,     0,   648,   649,   650,   651,   652,     0,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,     0,     0,     0,
       0,     0,   128,     0,     0,   271,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   272,     0,
     135,     0,     0,     0,   136,   137,     0,     0,     0,     0,
       0,   138,   273,   140,   141,    66,    67,    68,    69,    70,
      71,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,    75,   144,
     145,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,     0,    89,    90,    91,
       0,     0,     0,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,     0,   109,     0,   718,     0,     0,     0,     0,     0,
     111,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
     257,   258,   259,     0,     0,   117,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,     0,
       0,     0,     0,     0,   128,     0,     0,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,     0,   135,     0,     0,     0,   719,   137,     0,     0,
       0,     0,     0,   138,   139,   140,   141,    66,    67,    68,
     990,   991,   992,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
      75,   144,   145,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,   164,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,    80,     0,     0,    81,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    88,     0,    89,
      90,    91,     0,     0,     0,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,     0,   105,
     106,   107,   108,     0,   109,     0,   110,     0,     0,     0,
       0,     0,   111,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,     0,   136,   137,
       0,     0,     0,     0,     0,   138,   139,   140,   141,    66,
      67,    68,    69,    70,    71,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,    75,   144,   145,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,    88,
       0,    89,    90,    91,     0,     0,     0,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,     0,     0,     0,   111,     0,    14,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   128,     0,
       0,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   134,     0,   135,     0,     0,     0,
     136,   137,     0,     0,     0,     0,     0,   138,   139,   140,
     141,    66,    67,    68,    69,    70,    71,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,    75,   144,   145,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,    80,     0,
       0,    81,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,    88,     0,    89,    90,    91,     0,     0,     0,     0,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,     0,
       0,    96,     0,    97,    98,    99,   100,   101,   102,   103,
       0,   104,     0,   105,   106,   107,   108,     0,   109,     0,
     110,     0,     0,     0,     0,     0,   111,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,  1077,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,  1078,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,     0,     0,     0,     0,     0,
     128,     0,     0,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,     0,   135,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,   138,
     139,   140,   141,    66,    67,    68,    69,    70,    71,   142,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,    75,   144,   145,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
      80,     0,     0,    81,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,    88,     0,    89,    90,    91,     0,     0,
       0,     0,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,    96,     0,    97,    98,    99,   100,   101,
     102,   103,     0,   104,     0,   105,   106,   107,   108,     0,
     109,     0,   110,     0,     0,     0,     0,     0,   111,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,     0,     0,     0,
       0,     0,   128,     0,     0,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,   452,
     135,     0,     0,     0,   136,   137,     0,     0,     0,     0,
       0,   138,   139,   140,   141,    66,    67,    68,    69,    70,
      71,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,    75,   144,
     145,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,     0,    89,    90,    91,
       0,     0,     0,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,     0,   109,     0,   110,     0,     0,     0,     0,     0,
     111,     0,   420,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,     0,
       0,     0,     0,     0,   128,     0,     0,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,     0,   135,     0,     0,     0,   136,   137,     0,     0,
       0,     0,     0,   138,   139,   140,   141,    66,    67,    68,
      69,    70,    71,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
      75,   144,   145,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,    80,     0,     0,    81,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    88,     0,    89,
      90,    91,     0,     0,     0,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,     0,   105,
     106,   107,   108,     0,   109,     0,   110,     0,     0,     0,
       0,     0,   111,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1065,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,     0,   136,   137,
       0,     0,     0,     0,     0,   138,   139,   140,   141,    66,
      67,    68,    69,    70,    71,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,    75,   144,   145,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,    88,
       0,    89,    90,    91,     0,     0,     0,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,  1078,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   128,     0,
       0,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   134,     0,   135,     0,     0,     0,
     136,   137,     0,     0,     0,     0,     0,   138,   139,   140,
     141,    66,    67,    68,    69,    70,    71,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,    75,   144,   145,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,    80,     0,
       0,    81,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,    88,     0,    89,    90,    91,     0,     0,     0,     0,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,     0,
       0,    96,     0,    97,    98,    99,   100,   101,   102,   103,
       0,   104,     0,   105,   106,   107,   108,     0,   109,     0,
     110,     0,     0,     0,     0,     0,   111,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,     0,     0,     0,     0,     0,
     128,     0,     0,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,     0,   135,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,   138,
     139,   140,   141,    66,    67,    68,    69,    70,    71,   142,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,    75,   144,   145,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
      80,     0,     0,    81,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,    88,     0,    89,    90,    91,     0,     0,
       0,     0,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,    96,     0,    97,    98,    99,   100,   101,
     102,   103,     0,   104,     0,   105,   106,   107,   108,     0,
     109,     0,   110,     0,     0,     0,     0,     0,   111,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   480,     0,     0,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,     0,     0,     0,
       0,     0,   128,     0,     0,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,     0,
     135,     0,     0,     0,   136,   137,     0,     0,     0,     0,
       0,   138,   139,   140,   141,    66,    67,    68,    69,    70,
      71,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,    75,   144,
     145,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,     0,    89,    90,    91,
       0,     0,     0,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,     0,   109,     0,   110,     0,     0,     0,     0,     0,
     111,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,     0,
       0,     0,     0,     0,   128,     0,     0,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,     0,   135,     0,     0,     0,   136,   137,     0,     0,
       0,     0,     0,   138,   139,   140,   141,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1214,     0,     0,     0,
       0,   144,   145
};

static const yytype_int16 yycheck[] =
{
       0,   161,    17,     4,   281,     0,   291,   406,    35,   291,
       0,   171,    14,   579,   162,     0,   423,    18,   281,   214,
       0,   587,   763,   755,  1050,     0,    24,   425,   188,   189,
       0,   281,   215,   193,   317,   924,   925,   576,    11,   426,
      26,   536,    11,   671,     0,    14,   454,   293,   294,   295,
     581,     0,  1285,     3,  1349,   869,    16,   871,   589,     0,
     623,     4,   782,   110,    65,   535,     9,   209,   882,    27,
      13,   943,   944,  1164,    17,    18,   917,     3,   110,   552,
     110,  1504,   333,   334,   173,   497,   498,   173,   773,   774,
     157,    34,    35,   738,   739,   552,   342,   442,   349,   744,
       0,    66,  1411,  1415,   333,   495,    58,   188,     3,    55,
     500,   501,   502,   109,   173,   513,    84,    42,    43,     3,
     173,  1074,    65,  1418,   406,     5,     6,     7,     8,     9,
      10,  1426,  1864,    67,  1074,  1681,   151,   249,  1684,   132,
     295,   263,    82,   110,   390,   391,   124,   173,    66,   217,
     218,   152,  1418,    87,   150,   611,   311,    82,    53,   271,
    1426,     5,     6,     7,     8,     9,    10,   248,   114,     0,
     148,   110,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   172,   151,   152,
     211,   212,   214,   459,   157,   337,   172,   173,   174,   175,
     176,   207,   620,   172,   173,   174,   175,   176,   229,     3,
     170,   172,   173,   174,   175,   176,   237,   238,   239,   240,
    1663,  1639,   243,   700,   245,   246,   172,   109,   337,    11,
       3,   337,   253,   171,   172,   256,   257,   258,   259,   159,
     261,   262,   263,   264,   265,   738,   739,   210,   211,   212,
     337,   744,   172,   173,   174,   175,   176,   278,   337,   462,
     679,  1593,   225,  1592,   337,  2017,   229,   674,   172,     0,
     337,  1382,   259,   172,   237,   238,   239,   240,   241,   242,
     243,   259,   245,   246,    66,   337,    82,   337,   450,   252,
     253,   337,   878,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,  1869,   484,   554,  1046,    66,   271,   272,
     276,   333,   108,   828,   286,   278,   565,   566,   746,   590,
     623,   172,   173,   174,   175,   176,   271,  1300,   291,   292,
    1748,  1165,   312,   884,  1168,   983,  1754,   985,  1199,   829,
    1300,   590,   280,   364,   314,   821,   822,   335,   614,   342,
       3,   600,   337,   342,  1059,    64,   172,   110,   321,   630,
     792,   726,   727,  1678,  1029,   247,   615,   313,   268,   640,
     103,   848,    66,     5,    83,   276,   109,   171,   172,    11,
     629,   167,   168,   169,   794,   795,   796,  1640,   423,   171,
     172,   255,  1645,   171,   258,   173,    85,    64,    65,    66,
      67,   364,    64,    65,    66,    67,   171,   171,    11,  1502,
     172,   433,  1855,   172,   172,   172,  1834,   150,   191,   192,
     321,   173,     0,   444,   157,  1843,   115,   557,   117,   118,
     119,   120,   121,   122,   172,   441,   125,    66,   259,   338,
     461,   172,   173,   174,   175,   176,   109,   173,   745,   470,
     471,   472,   473,   474,   417,   173,   705,   420,   173,     3,
     423,   173,   745,   426,    86,   762,   487,   514,   173,   490,
     888,   492,   493,   494,   173,   745,   173,   171,   172,   762,
      55,   444,   333,   173,   173,   173,   173,  1905,   895,  1907,
      21,    22,   762,   263,   173,   173,   626,   700,   461,  1391,
    1392,   798,  1755,   173,   173,   173,   259,   470,   471,   472,
     473,   474,   175,   295,   811,   798,   173,   480,   171,   172,
    1613,   188,   338,   486,   487,    80,  1360,   490,   811,   492,
     493,   494,   173,   329,    58,   173,  1029,  1371,   334,   114,
     249,   811,   171,   172,  1378,   508,   173,   852,   851,   512,
     852,   514,   574,   247,   820,   341,   759,   173,  1741,   337,
    1882,    78,    86,   226,  1123,   109,    66,   337,   590,   172,
    1310,    83,   337,   337,   188,   538,   338,   757,   600,   246,
     338,   338,   732,   316,   246,   337,   280,  2005,   623,   164,
     608,  1009,   610,  1241,   172,   173,   174,   175,   176,  1150,
     338,   276,   269,   266,   337,   854,   269,   269,   109,    66,
     760,   337,   126,   188,   917,     0,   279,   131,   247,   337,
    1203,    82,   337,   894,   171,   337,  1209,   316,  1211,   141,
    1952,    98,   337,   668,   248,   901,   157,   903,   337,    82,
     337,   172,   109,   310,   915,   848,   321,   337,   951,   337,
     337,   280,   173,   675,   229,   230,   231,   232,   337,   337,
     623,   624,   282,  1846,   627,  1848,   937,   337,   337,   337,
     688,   171,   172,   278,   175,  1584,   947,   948,    39,    40,
     337,   133,   257,   705,     5,     6,     7,     8,     9,    10,
    1100,   152,  1738,  1739,   155,   270,   337,   114,   719,   337,
     101,   276,   114,   132,   251,   668,   281,   670,   175,    70,
     337,   674,   675,   227,   171,   172,   159,   337,    85,   162,
      56,   337,   132,   574,   271,   227,    62,  1030,   271,   164,
      16,   250,   337,   247,   151,   756,   153,   338,    82,   590,
     315,   153,   317,    64,    65,    66,    67,   266,   115,   600,
     117,   118,   119,   120,   121,   122,   719,   157,   125,  1025,
     279,   213,   214,   215,   216,   109,   167,   168,   169,   101,
    1188,  1068,   793,   173,   276,   277,   151,  1195,   153,  1197,
     247,    55,    68,    69,    70,  1068,    72,    73,    74,    75,
    1087,  1377,   101,   756,  1380,   230,   231,   232,  1068,   189,
     818,    68,    69,    70,  1087,    72,    73,    74,    75,   772,
     773,   774,  1219,   167,   168,   169,   834,  1087,   781,   782,
     842,   843,   844,   132,  1407,  1340,  1409,  1030,   337,  1412,
     793,    87,   341,  1240,   172,   167,   168,   169,    94,    95,
     114,   173,   298,   864,   300,   228,   109,  1144,  1145,   312,
     313,   314,   315,  1056,   705,  1265,  1266,  1267,   167,   168,
     169,  1144,  1145,   338,   173,   172,   249,   188,   172,  1621,
    1622,   267,   255,   256,  1144,  1145,  1091,  1092,   337,   165,
      64,    65,   917,    67,   147,   249,   149,   150,   262,   852,
     164,   274,   855,   172,   173,   917,  1199,   176,   165,   278,
    1203,   864,   767,   768,   769,   770,  1209,   271,  1211,   872,
     274,   275,   217,   218,   188,    87,   879,   337,    90,   228,
     263,   943,   944,   263,    96,   246,   791,    68,    69,    70,
      42,    43,   895,    74,    75,   167,   168,   169,   234,    86,
     249,   173,   238,   298,    11,   300,   255,   256,   269,   316,
    1021,   109,  1023,  1024,   917,   229,   230,   231,   232,  1225,
     923,   924,   925,   231,   298,   274,   300,   298,   126,   300,
     259,  1389,  1390,   131,   813,   276,   262,   816,   817,   818,
     315,  1399,   276,   257,   276,   294,   295,   296,  1856,   310,
    1858,  1859,  1860,  1259,  1016,   834,   835,   836,   837,   167,
     168,   169,   276,  1586,   276,   173,   276,   281,    81,    82,
    1276,  1313,  1278,  1279,  1280,   252,   253,   175,  1604,   167,
     168,   169,    88,    89,  1045,   173,   319,   320,   337,   231,
     632,   633,   634,  1330,    99,   100,   999,   276,   277,   191,
     192,   315,   225,   317,  1463,   183,   184,  1330,     5,     6,
       7,     8,     9,    10,  1074,   293,  1077,    92,    93,  1074,
      88,    89,   323,   324,  1027,  1028,   917,   176,   226,   227,
       3,     4,   176,  1036,  1037,   276,  1097,  1040,   321,   322,
     133,  1044,  1045,  1046,    64,    65,   276,  1007,   337,   247,
     287,   288,   289,   290,   291,   292,  1059,   103,  1074,   174,
     175,  1064,   751,   752,  1407,  1074,  1409,   294,   266,  1412,
    1073,   269,  1698,  1074,  1077,  1078,  1970,  1971,     5,     6,
       7,   279,   286,   287,   550,   551,  1089,   282,     3,     3,
     172,  1717,   172,    20,  1097,   172,   172,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,   172,    22,  1424,  1425,   208,   209,   210,   211,   212,
     213,   214,   215,   216,  1199,    52,    53,    54,  1203,   172,
    1419,   172,   172,   124,  1209,   172,  1211,  1199,   172,   172,
    1202,  1447,   172,  1449,   287,   288,   289,   290,   291,   292,
     172,   172,  1489,  1490,  1491,  1497,  1498,   172,  1625,   287,
     288,   289,   290,   291,   292,   172,  1489,  1490,  1491,   172,
     172,   172,   172,   172,  1463,   316,  1465,   172,   172,  1489,
    1490,  1491,  1983,   172,   338,   115,   116,   117,   118,   119,
     120,   121,   122,     0,     1,   125,  1199,   178,   327,   337,
    1203,   172,   172,   172,   327,   278,  1209,    91,  1211,    97,
     337,  1214,   316,   296,   132,   176,  1219,  1220,   179,   180,
     181,   182,   183,   184,   185,   186,   132,   132,   189,   190,
     111,   310,   109,   111,   110,   173,  1323,  1240,   295,  1242,
    1300,   259,   171,  1586,    51,  1300,  1588,   234,   172,   126,
    1458,   172,   172,   225,   131,   132,   172,    64,    65,    66,
      67,  1887,   171,   247,   231,   172,    38,   295,   172,    76,
      77,    78,    79,   172,   172,   172,   172,  1335,    85,  1337,
     172,  1339,  1285,  1286,  1300,   172,  1344,  1746,   338,   172,
    1293,  1300,   172,   172,   166,    23,   173,   172,   175,  1300,
    1589,   111,   176,   176,   173,   154,     3,  1310,  1199,  1615,
     235,   172,   235,  1619,   173,   173,   171,  1623,   172,   172,
    1323,  1324,   172,   340,   280,   132,   173,    81,    78,  1391,
    1392,   172,  1407,   110,  1409,   205,   278,  1412,   240,   270,
     103,   254,   171,   277,   171,  1634,  1349,   311,   172,   226,
     227,   228,  1641,   235,    20,   258,   283,   284,   285,   286,
      98,   316,   316,    23,   171,   172,   278,   262,   103,  1372,
     247,   265,   249,   316,   133,   337,   337,   337,   255,   256,
     110,   157,   172,   145,   337,   101,   316,  1462,   173,   266,
     173,   284,   269,   337,   133,   108,   337,   274,   299,   133,
     109,  1462,   279,   173,  1407,   173,  1409,   172,   172,  1412,
     337,   328,  1415,  1758,   172,  1418,    87,   110,   309,  1725,
     258,   228,   255,  1426,   254,    89,   337,   109,   254,   236,
     237,  1518,   239,   110,   241,   242,   243,   244,   245,   246,
     110,   262,   249,   271,   312,   262,   173,    17,   255,   256,
     209,   210,   211,   212,   213,   214,   215,   216,   173,  1462,
     337,   173,   318,   262,   271,   173,   337,   274,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,  1767,   173,
     337,   173,   173,   173,   278,    55,   337,   173,    58,   337,
    1493,   176,   337,   173,   179,   180,   181,   182,   183,   184,
     185,   186,   337,   310,   189,   190,   173,   172,  1845,   103,
     173,  1586,   173,   316,   173,  1518,  1822,    17,   173,   337,
     173,   160,  1845,   172,   172,   172,   293,   309,   173,    74,
      74,    71,   102,   173,   104,  1845,   172,   103,   107,   103,
     101,  1847,  1545,  1849,   114,   173,   173,   173,    16,  1769,
    1625,   173,   263,   263,     3,    55,   316,   176,    58,   233,
     179,   180,   181,   182,   183,   184,   185,   186,   337,  1914,
     189,   190,   261,   261,  1863,   233,     3,   264,   171,   171,
      76,  1584,   172,  1586,   173,   173,   142,   316,   142,   173,
    1593,   247,   173,   173,   164,   278,    74,   172,  1659,   103,
     173,   173,   102,   324,   104,   179,   180,   181,   182,   183,
     184,   185,   186,   247,   114,   337,   190,  1620,    82,  1908,
     271,   172,  1625,  1626,   235,   234,   307,   235,   171,   305,
    1850,   337,   339,   127,   172,   226,   337,  1640,   173,   173,
     173,   173,  1645,   338,  1981,   172,   262,   217,   218,   219,
     220,   221,   222,   326,   173,   262,  1659,   262,  1981,   229,
     230,   231,   232,   262,   164,   337,   173,    64,    65,    66,
      67,  1981,   173,   161,   190,  1678,  1679,   254,   109,    76,
      77,    78,    79,   337,   270,   337,   227,   257,    85,   235,
     172,   337,  1695,   172,   109,   299,   172,   172,   269,   316,
     270,   261,   111,  1764,   170,   263,   276,    84,    84,   279,
     109,   281,   262,   109,   109,   262,   173,   217,   218,   219,
     220,   221,   222,  1726,   321,   337,   332,   330,     3,   229,
     230,   231,   232,   270,   332,   259,   338,   299,  1741,   132,
     335,   336,   309,   306,   235,     5,   341,   317,   235,     5,
     128,   346,  1755,   338,   337,  1758,   298,   257,   150,   316,
     325,  1764,   153,     5,     6,     7,   150,   155,     3,   189,
      59,   173,   297,   309,   171,   172,   276,   132,    20,   279,
     309,   281,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,   112,   172,   158,   173,
     152,   155,  1805,   333,  1864,    60,   321,   132,   297,  1864,
      52,    53,    54,   321,  1864,   262,   309,   317,   331,  1864,
     332,  1824,   307,   309,  1864,  1828,   299,  1830,    61,  1864,
     425,   228,  1835,   303,  1864,    64,   305,  1840,   433,   236,
     237,   262,   239,  1846,   262,  1848,    65,    41,   132,   781,
    1252,  1300,   249,  1018,   207,   206,   443,  1923,   255,   256,
     133,  1864,   176,   445,  1867,   179,   180,   181,   182,   183,
     184,   185,   186,    35,   271,   189,   190,   274,  1881,   746,
    1046,  1310,  1613,  2012,  1990,  1989,   176,   129,   130,   179,
     180,   181,   182,   183,   184,   185,   186,  1982,  1922,  1902,
     190,  1849,  1645,  2017,  1753,  1753,  2018,  1776,  1775,  1912,
    1636,  1914,  1491,   310,  1330,   689,   444,     8,   513,   155,
    1454,  1824,  1896,  1279,  1449,  1827,  1929,  1930,  1931,  1932,
     679,   677,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,  1390,  1389,  1016,  1207,  1007,  1220,
     417,   546,   852,   927,  1600,   639,  1129,  2017,   886,   849,
     638,   640,  2017,  1717,   668,   904,   641,  2017,    34,  1866,
     566,  1974,  2017,  1976,   618,   908,  1698,  2017,  1684,  1537,
     511,  1682,  2017,  1370,   579,   580,   581,  2017,   588,   908,
    1359,  1544,   587,  1799,   589,  1362,  1878,  1886,    -1,    -1,
      -1,    -1,    -1,    -1,  2007,    -1,    -1,    -1,   603,   604,
     605,    -1,    -1,    -1,  2017,  2018,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   619,   620,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   631,   632,   633,   634,
      -1,   283,   284,   285,   286,    -1,    -1,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
      -1,    -1,    -1,    -1,    -1,   670,   671,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
      -1,    -1,   112,   113,    -1,   115,    -1,   117,   118,   119,
      -1,    -1,    -1,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
     160,    -1,   162,   163,   164,    -1,    -1,    -1,    -1,    -1,
     170,   171,   172,    -1,   174,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   191,   192,    -1,    -1,    -1,   196,   197,   198,   874,
      -1,    -1,    -1,   878,    -1,    -1,    -1,    -1,   208,   884,
      -1,    -1,    -1,   888,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,
      -1,   906,    -1,    -1,   909,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    -1,   248,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,    -1,
      -1,   261,    -1,    -1,   264,   265,    -1,   267,   943,   944,
     270,    -1,   272,    -1,    -1,    -1,   276,   277,    -1,    -1,
     280,    -1,    -1,   283,   284,   285,   286,    -1,    -1,    -1,
      -1,    -1,   967,   293,    -1,    -1,    -1,   297,    -1,    -1,
      -1,   301,   302,    -1,    -1,    -1,    -1,    -1,   983,    -1,
     985,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      -1,   321,   322,    -1,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1009,    -1,    -1,    -1,    -1,    20,
     340,  1016,   342,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    -1,    -1,    -1,    -1,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,  1129,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1146,    -1,    -1,    -1,  1150,    -1,    -1,    -1,    -1,
    1155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1178,  1179,  1180,  1181,     5,     6,     7,
       8,     9,    10,  1188,    -1,    -1,    -1,    -1,    -1,  1194,
    1195,    -1,  1197,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,  1241,    -1,    66,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    -1,   283,   284,   285,   286,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,   117,
     118,   119,    -1,    -1,    -1,    -1,   124,   125,    -1,    -1,
     276,    -1,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,
     286,    -1,    -1,   141,   142,    -1,    -1,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,    -1,   157,
     158,   159,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,
      -1,    -1,   170,   171,   172,    -1,   174,   283,   284,   285,
     286,    -1,    -1,    -1,  1359,    -1,    -1,  1362,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1370,    -1,    -1,    -1,    -1,
      -1,    -1,  1377,    -1,    -1,  1380,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,  1389,  1390,  1391,  1392,    -1,   217,
     218,    -1,    -1,    -1,  1399,    -1,    -1,   225,    -1,    -1,
      -1,   229,   133,    -1,    -1,    -1,    -1,   235,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,   257,
      -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,   267,
      -1,    -1,   270,    -1,   272,    -1,    -1,   133,   276,   277,
      -1,    -1,   280,    -1,    -1,   283,   284,   285,   286,  1464,
     191,   192,   193,   194,   195,   293,    -1,    -1,   199,   200,
     201,   202,   203,    -1,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   133,   173,   316,    -1,
      -1,    -1,    -1,   321,   322,    -1,    -1,  1502,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   191,   192,   193,   194,   195,
      -1,    -1,   340,   199,   200,   201,   202,   203,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1544,
      -1,    -1,    -1,   133,   191,   192,   193,   194,   195,    -1,
      -1,    -1,   199,   200,   201,   202,   203,    -1,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
      -1,  1576,    -1,  1578,    -1,    -1,  1581,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1600,    -1,    -1,    -1,  1604,
      -1,   191,   192,   193,   194,   195,   337,    -1,  1613,   199,
     200,   201,   202,   203,    -1,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   133,    -1,    -1,   191,   192,   193,   194,   195,    -1,
      -1,   337,   199,   200,   201,   202,   203,    -1,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
      -1,    -1,    -1,    -1,    -1,  1680,  1681,  1682,    -1,  1684,
      -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,
     337,    -1,    -1,  1698,    -1,    -1,    -1,    -1,    -1,   191,
     192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   201,
     202,   203,  1717,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1745,   191,   192,   193,   194,   195,  1751,   337,    -1,   199,
     200,   201,   202,   203,    -1,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
     337,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,   299,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,   299,
      -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,
      -1,  1866,    -1,    -1,  1869,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,   105,
      -1,    -1,  1887,   109,    -1,    -1,   112,   113,    -1,   115,
      -1,   117,   118,   119,    -1,  1900,    -1,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,
     136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,    -1,   162,   163,   164,    -1,
      -1,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,   175,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   187,   188,    -1,    -1,   191,   192,    -1,    -1,    -1,
     196,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,
      -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,
     276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,
     286,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,
      -1,   297,    -1,    -1,    -1,   301,   302,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,    -1,    -1,    -1,    -1,   321,   322,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   340,     3,   342,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,   113,    -1,   115,    -1,   117,
     118,   119,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,   134,   135,   136,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,    -1,   162,   163,   164,    -1,    -1,    -1,
      -1,    -1,   170,   171,   172,    -1,   174,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   191,   192,    -1,    -1,    -1,   196,   197,
     198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,   257,
      -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,   267,
      -1,    -1,   270,    -1,   272,    -1,    -1,    -1,   276,   277,
      -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,    -1,
      -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,   297,
      -1,    -1,    -1,   301,   302,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    -1,   321,   322,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   340,     3,   342,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
      -1,    -1,   112,   113,    -1,   115,    -1,   117,   118,   119,
      -1,    -1,    -1,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
     160,    -1,   162,   163,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,   172,    -1,   174,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   191,   192,    -1,    -1,    -1,   196,   197,   198,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,   208,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    -1,   248,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,    -1,
      -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,
     270,    -1,   272,    -1,    -1,    -1,   276,   277,    -1,    -1,
      -1,    -1,    -1,   283,   284,   285,   286,    -1,    -1,    -1,
      -1,    -1,    -1,   293,    -1,    -1,    -1,   297,    -1,    -1,
      -1,   301,   302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      -1,   321,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     340,     3,   342,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,   104,   105,    -1,    -1,    -1,   109,    -1,    -1,
     112,   113,    -1,   115,    -1,   117,   118,   119,    -1,    -1,
      -1,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,   160,    -1,
     162,   163,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,
     172,    -1,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,
     192,    -1,    -1,    -1,   196,   197,   198,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,    -1,    -1,   257,    -1,    -1,    -1,   261,
      -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,    -1,
     272,    -1,    -1,    -1,   276,   277,    -1,    -1,    -1,    -1,
      -1,   283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,
      -1,   293,    -1,    -1,    -1,   297,    -1,    -1,    -1,   301,
     302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,   321,
     322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,     3,
     342,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,   109,    -1,    -1,   112,   113,
      -1,   115,    -1,   117,   118,   119,    -1,    -1,    -1,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,
     134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,   160,    -1,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   185,    -1,    -1,    -1,    -1,    -1,   191,   192,    -1,
      -1,    -1,   196,   197,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,   245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,
     264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,
      -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,
     284,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,   293,
      -1,    -1,    -1,   297,    -1,    -1,    -1,   301,   302,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   316,    -1,    -1,    -1,    -1,   321,   322,    -1,
      -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,    -1,    -1,    -1,     3,   342,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,   109,    -1,    -1,   112,   113,    -1,   115,
      -1,   117,   118,   119,    -1,    -1,    -1,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,
     136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,    -1,   162,   163,   164,    -1,
      -1,    -1,    -1,    -1,   170,    -1,   172,   173,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   191,   192,    -1,    -1,    -1,
     196,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,
      -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,
     276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,
     286,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,
      -1,   297,    -1,    -1,    -1,   301,   302,    -1,    -1,    -1,
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
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,   109,    -1,    -1,   112,   113,    -1,
     115,    -1,   117,   118,   119,    -1,    -1,    -1,   123,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   188,    -1,    -1,   191,   192,    -1,    -1,
      -1,   196,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,
     205,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,
      -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,
     265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,
      -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,
     285,   286,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,
      -1,    -1,   297,    -1,    -1,    -1,   301,   302,    -1,    -1,
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
     104,    -1,    -1,    -1,    -1,   109,    -1,    -1,   112,   113,
      -1,   115,    -1,   117,   118,   119,    -1,    -1,    -1,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,    -1,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,   192,    -1,
      -1,    -1,   196,   197,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,   245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,
     264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,
      -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,
     284,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,   293,
      -1,    -1,    -1,   297,    -1,    -1,    -1,   301,   302,    -1,
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
      -1,   104,    -1,    -1,    -1,    -1,   109,    -1,    -1,   112,
     113,    -1,   115,    -1,   117,   118,   119,    -1,    -1,    -1,
     123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,   160,    -1,   162,
     163,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,   192,
      -1,    -1,    -1,   196,   197,   198,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    -1,   248,    -1,    -1,    -1,    -1,
      -1,   254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,
      -1,   264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,
      -1,    -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,
     283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,
     293,    -1,    -1,    -1,   297,    -1,    -1,    -1,   301,   302,
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
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,   109,    -1,    -1,   112,   113,    -1,
     115,    -1,   117,   118,   119,    -1,    -1,    -1,   123,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   191,   192,    -1,    -1,
      -1,   196,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,
      -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,
     265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,
      -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,
     285,   286,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,
      -1,    -1,   297,    -1,    -1,    -1,   301,   302,    -1,    -1,
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
      97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,   109,    -1,    -1,   112,   113,    -1,   115,    -1,
     117,   118,   119,    -1,    -1,    -1,   123,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,   136,
     137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,    -1,   162,   163,   164,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   191,   192,    -1,    -1,    -1,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
      -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,   245,   246,
      -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,
     257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,
     267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,   276,
     277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
     297,   298,    -1,    -1,   301,   302,    -1,    -1,    -1,    -1,
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
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,   109,    -1,    -1,   112,   113,    -1,   115,
      -1,   117,   118,   119,    -1,    -1,    -1,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,
     136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,    -1,   162,   163,   164,    -1,
      -1,    -1,    -1,    -1,   170,    -1,   172,   173,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   191,   192,    -1,    -1,    -1,
     196,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,
      -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,
     276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,
     286,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,
      -1,   297,    -1,    -1,    -1,   301,   302,    -1,    -1,    -1,
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
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,   109,    -1,    -1,   112,   113,    -1,
     115,    -1,   117,   118,   119,    -1,    -1,    -1,   123,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,
      -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   191,   192,    -1,    -1,
      -1,   196,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,
      -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,
     265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,
      -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,
     285,   286,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,
      -1,    -1,   297,    -1,    -1,    -1,   301,   302,    -1,    -1,
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
     104,    -1,    -1,    -1,    -1,   109,    -1,    -1,   112,   113,
      -1,   115,    -1,   117,   118,   119,    -1,    -1,    -1,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,
     134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,   160,    -1,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,   192,    -1,
      -1,    -1,   196,   197,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,   245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,
     264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,
      -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,
     284,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,   293,
      -1,    -1,    -1,   297,    -1,    -1,    -1,   301,   302,    -1,
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
      -1,   104,    -1,    -1,    -1,    -1,   109,    -1,    -1,   112,
     113,    -1,   115,    -1,   117,   118,   119,    -1,    -1,    -1,
     123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,   160,    -1,   162,
     163,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,   192,
      -1,    -1,    -1,   196,   197,   198,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,    -1,    -1,    -1,    -1,
      -1,   254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,
      -1,   264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,
      -1,    -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,
     283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,
     293,    -1,    -1,    -1,   297,    -1,    -1,    -1,   301,   302,
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
      -1,    -1,   104,    -1,    -1,    -1,    -1,   109,    -1,    -1,
     112,   113,    -1,   115,    -1,   117,   118,   119,    -1,    -1,
      -1,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,   160,    -1,
     162,   163,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,
     172,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,
     192,    -1,    -1,    -1,   196,   197,   198,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,    -1,    -1,   257,    -1,    -1,    -1,   261,
      -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,    -1,
     272,    -1,    -1,    -1,   276,   277,    -1,    -1,    -1,    -1,
      -1,   283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,
      -1,   293,    -1,    -1,    -1,   297,   298,    -1,    -1,   301,
     302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,   109,    -1,
      -1,   112,   113,    -1,   115,    -1,   117,   118,   119,    -1,
      -1,    -1,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
      -1,   162,   163,   164,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     191,   192,    -1,    -1,    -1,   196,   197,   198,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,   245,   246,    -1,   248,    -1,    -1,
      -1,    -1,    -1,   254,    -1,    -1,   257,    -1,    -1,    -1,
     261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,
      -1,   272,    -1,    -1,    -1,   276,   277,    -1,    -1,    -1,
      -1,    -1,   283,   284,   285,   286,    -1,    -1,    -1,    -1,
      -1,    -1,   293,    -1,    -1,    -1,   297,    -1,    -1,    -1,
     301,   302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,   109,
      -1,    -1,   112,   113,    -1,   115,    -1,   117,   118,   119,
      -1,    -1,    -1,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
     160,    -1,   162,   163,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,   172,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   191,   192,    -1,    -1,    -1,   196,   197,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    -1,   248,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,    -1,
      -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,
     270,    -1,   272,    -1,    -1,    -1,   276,   277,    -1,    -1,
      -1,    -1,    -1,   283,   284,   285,   286,     5,     6,     7,
       8,     9,    10,   293,    -1,    -1,    -1,   297,    -1,    -1,
      -1,   301,   302,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      38,   321,   322,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   342,    -1,    -1,    63,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,   117,
     118,   119,    -1,    -1,    -1,    -1,   124,   125,    -1,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,    -1,    -1,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,    -1,   157,
     158,   159,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,
      -1,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,
     192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   201,
     202,   203,    -1,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,    -1,    -1,    -1,    -1,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,   257,
      -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,   267,
      -1,    -1,   270,    -1,   272,    -1,    -1,    -1,   276,   277,
      -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,     5,
       6,     7,     8,     9,    10,   293,   298,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    38,   321,   322,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,   340,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    -1,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
      -1,   117,   118,   119,    -1,    -1,   133,    -1,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
      -1,   157,   158,   159,   160,    -1,   162,    -1,   164,    -1,
      -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,   174,    -1,
      -1,    -1,    -1,    -1,   191,   192,   193,   194,   195,    -1,
      -1,    -1,   199,   200,   201,   202,   203,    -1,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,   228,   229,    -1,    -1,    -1,    -1,    -1,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,    -1,   248,   249,    -1,    -1,    -1,    -1,   254,   255,
     256,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,
      -1,   267,    -1,    -1,   270,   271,   272,   273,   274,    -1,
     276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,
     286,   298,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,
      -1,   297,    -1,    -1,   300,    -1,    -1,   303,   304,   305,
      -1,    -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,
     316,    -1,    -1,    -1,    -1,   321,   322,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,   117,
     118,   119,   133,    -1,    -1,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,    -1,    -1,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,    -1,   157,
     158,   159,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,
      -1,    -1,   170,    -1,    -1,    -1,   174,    -1,    -1,    -1,
     191,   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,
     201,   202,   203,    -1,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
     228,   229,    -1,    -1,    -1,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   260,
     248,   249,    -1,    -1,    -1,    -1,   254,   255,   256,   257,
      -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,   267,
      -1,    -1,   270,   271,   272,   273,   274,    -1,   276,   277,
      -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,    -1,
      -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,   297,
      -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,
     308,    -1,   310,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    -1,   321,   322,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,   106,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,    -1,   117,   118,   119,
     133,    -1,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,    -1,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,    -1,   157,   158,   159,
     160,    -1,   162,    -1,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,   174,    -1,    -1,    -1,   191,   192,
     193,   194,   195,    -1,    -1,    -1,   199,   200,   201,   202,
     203,    -1,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,   228,   229,
      -1,    -1,    -1,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    -1,   248,   249,
      -1,    -1,    -1,    -1,   254,   255,   256,   257,    -1,    -1,
      -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,
     270,   271,   272,   273,   274,    -1,   276,   277,    -1,    -1,
      -1,    -1,    -1,   283,   284,   285,   286,    -1,    -1,    -1,
      -1,    -1,    -1,   293,    -1,    -1,    -1,   297,    -1,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,
     310,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      -1,   321,   322,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,   111,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,    -1,   117,   118,   119,    -1,   133,
      -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,    -1,    -1,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,    -1,   157,   158,   159,   160,   173,
     162,    -1,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,   174,    -1,    -1,    -1,    -1,   191,   192,   193,
     194,   195,    -1,    -1,    -1,   199,   200,   201,   202,   203,
      -1,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,   228,   229,    -1,    -1,
      -1,    -1,    -1,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,    -1,   248,   249,    -1,    -1,
      -1,    -1,   254,   255,   256,   257,    -1,    -1,    -1,   261,
      -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,   271,
     272,   273,   274,    -1,   276,   277,    -1,    -1,    -1,    -1,
      -1,   283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,
      -1,   293,    -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,
      -1,   303,    -1,   305,    -1,    -1,    -1,    -1,   310,    -1,
      -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,   321,
     322,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    -1,    -1,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,    -1,   117,   118,   119,   133,    -1,    -1,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,
      -1,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,    -1,   157,   158,   159,   160,    -1,   162,    -1,
     164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
     174,    -1,    -1,    -1,   191,   192,   193,   194,   195,    -1,
      -1,    -1,   199,   200,   201,   202,   203,    -1,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
      -1,    -1,    -1,    -1,    -1,    -1,   223,   224,    -1,    -1,
      -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,    -1,   228,   229,    -1,    -1,    -1,    -1,
      -1,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,    -1,   248,   249,    -1,    -1,    -1,    -1,
     254,   255,   256,   257,    -1,    -1,    -1,   261,    -1,    -1,
     264,   265,    -1,   267,    -1,    -1,   270,   271,   272,   273,
     274,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,
     284,   285,   286,     5,     6,     7,     8,     9,    10,   293,
      -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,   303,
      22,    23,    -1,    -1,    26,   309,   310,    -1,    -1,    -1,
      -1,    -1,   316,    -1,    -1,    -1,    38,   321,   322,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,    -1,   117,   118,   119,    -1,   133,
      -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,    -1,    -1,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,    -1,   157,   158,   159,   160,    -1,
     162,    -1,   164,    -1,    -1,    -1,    -1,    -1,   170,   183,
      -1,    -1,   174,    -1,    -1,    -1,    -1,   191,   192,   193,
     194,   195,    -1,    -1,    -1,   199,   200,   201,   202,   203,
      -1,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,   228,   229,    -1,    -1,
      -1,    -1,    -1,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,    -1,   248,   249,    -1,    -1,
      -1,    -1,   254,   255,   256,   257,    -1,    -1,    -1,   261,
      -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,   271,
     272,   273,   274,    -1,   276,   277,    -1,    -1,    -1,    -1,
      -1,   283,   284,   285,   286,     5,     6,     7,     8,     9,
      10,   293,    -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,
      -1,   303,    22,    23,    -1,    -1,    26,    -1,   310,    -1,
      -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,    38,   321,
     322,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,    -1,   117,   118,   119,
      -1,   133,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,    -1,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,    -1,   157,   158,   159,
     160,   173,   162,    -1,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,   191,
     192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   201,
     202,   203,    -1,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,
      -1,    -1,    -1,    -1,    -1,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    -1,   248,    -1,
      -1,    -1,    -1,    -1,   254,   255,   256,   257,    -1,    -1,
      -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,
     270,   271,   272,   273,    -1,    -1,   276,   277,    -1,    -1,
      -1,    -1,    -1,   283,   284,   285,   286,    -1,    -1,    -1,
      -1,    -1,    -1,   293,    -1,    -1,    -1,   297,    -1,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,
     310,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      -1,   321,   322,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,    -1,   117,   118,   119,    -1,   133,
      -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,    -1,    -1,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,    -1,   157,   158,   159,   160,   173,
     162,    -1,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,   174,    -1,    -1,    -1,    -1,   191,   192,   193,
     194,   195,    -1,    -1,    -1,   199,   200,   201,   202,   203,
      -1,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,   255,   256,   257,    -1,    -1,    -1,   261,
      -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,   271,
     272,   273,    -1,    -1,   276,   277,    -1,    -1,    -1,    -1,
      -1,   283,   284,   285,   286,     5,     6,     7,     8,     9,
      10,   293,    -1,    -1,    -1,   297,    -1,    17,    -1,    -1,
      -1,   303,    22,    23,    -1,    -1,    26,   309,   310,    -1,
      -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,    38,   321,
     322,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,    -1,   117,   118,   119,
      -1,   133,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,    -1,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,    -1,   157,   158,   159,
     160,   173,   162,    -1,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,   191,
     192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   201,
     202,   203,    -1,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,   219,
     220,   221,   222,    -1,    -1,   225,    -1,    -1,    -1,   229,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    -1,   248,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,    -1,
      -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,
     270,    -1,   272,    -1,    -1,    -1,   276,   277,    -1,    -1,
      -1,    -1,    -1,   283,   284,   285,   286,     5,     6,     7,
       8,     9,    10,   293,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      38,   321,   322,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,   117,
     118,   119,    -1,   133,    -1,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,    -1,    -1,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,    -1,   157,
     158,   159,   160,   173,   162,    -1,   164,    -1,    -1,    -1,
      -1,    -1,   170,    -1,    -1,    -1,   174,    -1,    -1,    -1,
      -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
     200,   201,   202,   203,    -1,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,   257,
      -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,   267,
      -1,    -1,   270,    -1,   272,    -1,    -1,    -1,   276,   277,
      -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,     5,
       6,     7,     8,     9,    10,   293,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    38,   321,   322,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
      -1,   117,   118,   119,    -1,   133,    -1,    -1,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
      -1,   157,   158,   159,   160,   173,   162,    -1,   164,    -1,
      -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,   174,    -1,
      -1,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
      -1,   199,   200,   201,   202,   203,    -1,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,
      -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,
     276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,
     286,     5,     6,     7,     8,     9,    10,   293,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,    -1,    -1,    -1,    38,   321,   322,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,    -1,   117,   118,   119,    -1,   133,    -1,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,
      -1,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,    -1,   157,   158,   159,   160,   173,   162,    -1,
     164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
     174,    -1,    -1,    -1,    -1,   191,   192,   193,   194,   195,
      -1,    -1,    -1,   199,   200,   201,   202,   203,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,   245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,
     264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,
      -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,
     284,   285,   286,     5,     6,     7,     8,     9,    10,   293,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   316,    -1,    -1,    -1,    38,   321,   322,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,    -1,   117,   118,   119,   133,    -1,
      -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,    -1,    -1,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,    -1,   157,   158,   159,   160,    -1,
     162,    -1,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,   174,    -1,    -1,    -1,   191,   192,   193,   194,
     195,    -1,    -1,    -1,   199,   200,   201,   202,   203,    -1,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,    -1,    -1,   257,    -1,    -1,    -1,   261,
      -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,    -1,
     272,    -1,    -1,    -1,   276,   277,    -1,    -1,    -1,    -1,
      -1,   283,   284,   285,   286,     5,     6,     7,     8,     9,
      10,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,    38,   321,
     322,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,    -1,   117,   118,   119,
      -1,    -1,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,    -1,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,    -1,   157,   158,   159,
     160,    -1,   162,    -1,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,
     230,   231,   232,    -1,    -1,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    -1,   248,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,    -1,
      -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,
     270,    -1,   272,    -1,    -1,    -1,   276,   277,    -1,    -1,
      -1,    -1,    -1,   283,   284,   285,   286,     5,     6,     7,
       8,     9,    10,   293,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      38,   321,   322,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,   117,
     118,   119,    -1,    -1,    -1,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,    -1,    -1,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,    -1,   157,
     158,   159,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,
      -1,    -1,   170,    -1,    -1,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,   257,
      -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,   267,
      -1,    -1,   270,    -1,   272,    -1,    -1,    -1,   276,   277,
      -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,     5,
       6,     7,     8,     9,    10,   293,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    38,   321,   322,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
      -1,   117,   118,   119,    -1,    -1,    -1,    -1,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
      -1,   157,   158,   159,   160,    -1,   162,    -1,   164,    -1,
      -1,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,
      -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,
     276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,
     286,     5,     6,     7,     8,     9,    10,   293,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,    -1,    -1,    -1,    38,   321,   322,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,    -1,   117,   118,   119,    -1,    -1,    -1,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,
      -1,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,    -1,   157,   158,   159,   160,    -1,   162,    -1,
     164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,   227,    -1,   229,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,   245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,
     264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,
      -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,
     284,   285,   286,     5,     6,     7,     8,     9,    10,   293,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   316,    -1,    -1,    -1,    38,   321,   322,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,    -1,   117,   118,   119,    -1,    -1,
      -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,    -1,    -1,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,    -1,   157,   158,   159,   160,    -1,
     162,    -1,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,    -1,    -1,   257,    -1,    -1,    -1,   261,
      -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,   271,
     272,    -1,    -1,    -1,   276,   277,    -1,    -1,    -1,    -1,
      -1,   283,   284,   285,   286,     5,     6,     7,     8,     9,
      10,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,    38,   321,
     322,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,    -1,   117,   118,   119,
      -1,    -1,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,    -1,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,    -1,   157,   158,   159,
     160,    -1,   162,    -1,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,   172,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    -1,   248,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,    -1,
      -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,
     270,    -1,   272,    -1,    -1,    -1,   276,   277,    -1,    -1,
      -1,    -1,    -1,   283,   284,   285,   286,     5,     6,     7,
       8,     9,    10,   293,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      38,   321,   322,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,   117,
     118,   119,    -1,    -1,    -1,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,    -1,    -1,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,    -1,   157,
     158,   159,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,
      -1,    -1,   170,    -1,    -1,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,   257,
      -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,   267,
      -1,    -1,   270,    -1,   272,    -1,    -1,    -1,   276,   277,
      -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,     5,
       6,     7,     8,     9,    10,   293,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    38,   321,   322,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
      -1,   117,   118,   119,    -1,    -1,    -1,    -1,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
      -1,   157,   158,   159,   160,    -1,   162,    -1,   164,    -1,
      -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,   227,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,
      -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,
     276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,
     286,     5,     6,     7,     8,     9,    10,   293,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,    -1,    -1,    -1,    38,   321,   322,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,    -1,   117,   118,   119,    -1,    -1,    -1,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,
      -1,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,    -1,   157,   158,   159,   160,    -1,   162,    -1,
     164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,   245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,
     264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,
      -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,
     284,   285,   286,     5,     6,     7,     8,     9,    10,   293,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   316,    -1,    -1,    -1,    38,   321,   322,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,    -1,   117,   118,   119,    -1,    -1,
      -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,    -1,    -1,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,    -1,   157,   158,   159,   160,    -1,
     162,    -1,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,    -1,    -1,   257,    -1,    -1,    -1,   261,
      -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,    -1,
     272,    -1,    -1,    -1,   276,   277,    -1,    -1,    -1,    -1,
      -1,   283,   284,   285,   286,     5,     6,     7,     8,     9,
      10,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,    38,   321,
     322,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,    -1,   117,   118,   119,
      -1,    -1,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,    -1,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,    -1,   157,   158,   159,
     160,    -1,   162,    -1,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    -1,   248,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,    -1,
      -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,
     270,    -1,   272,    -1,    -1,    -1,   276,   277,    -1,    -1,
      -1,    -1,    -1,   283,   284,   285,   286,    -1,    -1,    -1,
      -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      -1,   321,   322
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    64,    65,    66,    67,    76,    77,    78,
      79,    85,   132,   171,   172,   228,   236,   237,   239,   241,
     242,   243,   244,   245,   246,   249,   255,   256,   271,   274,
     310,   344,   350,   351,   352,   353,   354,   356,   358,   359,
     368,   373,   385,   390,   391,   397,   442,   445,   453,   474,
     488,   492,   493,   494,   502,   515,   516,   517,   534,   538,
     539,   540,   543,   663,   132,   110,     5,     6,     7,     8,
       9,    10,    22,    23,    26,    38,    41,    52,    63,    79,
      82,    85,    91,    96,    97,    98,   104,   112,   115,   117,
     118,   119,   124,   125,   141,   142,   145,   147,   148,   149,
     150,   151,   152,   153,   155,   157,   158,   159,   160,   162,
     164,   170,   174,   217,   218,   225,   229,   235,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   248,   254,   257,
     261,   264,   265,   267,   270,   272,   276,   277,   283,   284,
     285,   286,   293,   316,   321,   322,   631,   657,   658,   188,
     248,   526,   259,    80,   499,   499,   657,    78,    86,   535,
     536,   657,    66,   543,    67,    68,    69,   602,   603,   604,
     657,   631,   347,   346,   348,   349,   345,     5,    11,   661,
     664,     5,     6,     7,     8,     9,    10,    64,    65,    66,
      67,   188,   246,   269,   310,   369,   376,   377,   378,   380,
     381,   382,   655,   656,   255,   258,   374,   375,    58,    86,
      55,   114,   276,    11,   172,   295,   437,   438,   508,   534,
     540,   646,   660,     0,    17,    55,    58,   102,   104,   114,
     164,   217,   218,   219,   220,   221,   222,   229,   230,   231,
     232,   257,   270,   276,   279,   281,   317,   398,   399,   402,
     403,   436,    55,   114,   164,   188,   229,   230,   231,   232,
     257,   270,   276,   281,   315,   317,   487,    55,    56,    57,
      63,   257,   270,   284,   628,   657,   217,   218,   276,   357,
     402,   434,   657,   132,   101,   167,   168,   169,   559,   132,
     631,   271,   338,     3,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    18,    19,    27,    28,    44,
      45,    46,    47,    48,    49,    50,    62,   105,   109,   113,
     123,   133,   134,   135,   136,   137,   139,   140,   143,   144,
     146,   156,   163,   172,   175,   191,   192,   196,   197,   198,
     205,   208,   283,   284,   285,   286,   297,   301,   302,   340,
     342,   522,   546,   557,   558,   566,   567,   568,   569,   571,
     573,   574,   576,   578,   580,   581,   582,   583,   584,   585,
     586,   587,   588,   601,   602,   605,   607,   608,   609,   611,
     612,   613,   614,   615,   628,   629,   630,   632,   633,   635,
     650,   653,   657,   662,   671,   672,   673,   674,   675,   689,
     696,   698,   701,   711,   712,   742,   631,   189,   500,   500,
     657,    87,    90,    96,   495,   496,   497,   337,   537,   540,
     172,   440,   441,   526,   173,   172,   338,   440,   354,   354,
     344,   344,   354,   172,   440,   440,   267,   440,   110,   259,
     278,   337,   278,   337,   262,   337,   263,   263,   376,   369,
      86,   495,   271,   657,   631,   631,   437,   543,   646,   259,
      27,   259,   295,   311,   217,   218,   657,   217,   218,   631,
     231,   276,   276,   276,   276,   631,   631,   631,   631,   657,
     225,   360,   657,   631,   631,   631,   315,   276,   657,   631,
     231,   164,   230,   231,   232,   631,   631,   631,   631,   657,
     631,   631,   631,   631,   631,    42,    43,   491,   225,   657,
     657,   293,   176,   176,   337,     5,     6,     7,    20,    24,
      25,    26,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    52,    53,    54,   283,   284,   285,   286,   337,   620,
     627,   648,   650,   651,   652,   653,   103,   188,   248,   544,
     544,   544,   294,   560,   282,   529,   441,   527,   528,   654,
     657,   657,   662,   662,   662,   172,   172,    22,   172,   606,
     606,   606,   606,   606,   172,   582,   172,   124,   657,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   280,   534,   543,   557,   567,   575,   602,   657,   567,
     172,   584,   584,   172,   172,   172,   584,   662,   172,   618,
     172,   619,   191,   192,   616,   298,   584,   640,   641,   172,
     172,   567,   579,   110,   259,   547,   548,   316,   610,   178,
     176,   179,   180,   181,   182,   183,   184,   185,   186,   189,
     190,   631,   133,   191,   192,   193,   194,   195,   199,   200,
     201,   202,   203,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   260,   327,   338,   337,   172,
     172,   172,   662,   662,   338,   172,   247,   280,   438,   441,
     518,    81,    82,   278,   501,    88,    89,    91,    97,   337,
     536,   434,   316,   546,   173,   523,   584,   636,   604,   657,
     296,   562,   132,   132,   132,   172,   173,   521,   523,   525,
     543,   268,   383,   384,   655,   655,   383,   378,   164,   276,
     379,   487,   631,   382,   111,   111,   110,   110,   495,   252,
     253,   400,   171,   251,   271,   386,   115,   116,   117,   118,
     119,   120,   121,   122,   125,   316,   393,   395,   396,   249,
     271,   274,   275,   173,   314,   662,   259,   631,   646,   295,
     171,    85,   316,   392,   394,   396,   631,   631,   631,   631,
     631,   234,   172,   172,   172,   171,   366,   361,   657,   247,
     362,   225,   172,   405,   406,   440,   440,   319,   320,   475,
     657,   631,   631,   231,   631,   631,   631,   491,   172,   489,
     489,   489,   491,   491,   491,   657,    58,   286,   630,   657,
     523,   434,   172,   172,    21,    22,   172,   172,   172,    38,
     172,   618,   619,   287,   288,   289,   290,   291,   292,   621,
     623,   625,   626,   657,   172,   172,   172,   172,   563,   564,
     584,   166,   545,   545,   545,   586,   645,   660,   295,   561,
     557,   176,   337,   529,   176,   338,   557,   634,   634,    23,
     173,   292,   621,   622,   111,   584,   585,   584,   668,   669,
     670,   668,   235,   154,   690,   716,   151,   153,   714,   235,
       3,   702,   585,   114,   713,   714,   668,   543,   172,   519,
     173,   173,   173,   173,   337,   338,   584,   584,   584,   661,
     171,   617,   661,   617,   662,   557,   298,   638,   639,   300,
     640,   642,   584,   523,   637,   337,   341,   172,   340,   530,
     549,   550,   551,   582,   602,   631,   657,   541,   542,   657,
     529,   657,   557,   177,   187,   188,   567,   577,   572,   584,
     572,   572,   572,   172,   172,    99,   100,   570,   570,   558,
     567,   577,   580,   584,   584,   584,   584,   584,   584,   584,
     584,   584,   584,   584,   584,   584,   584,   176,   584,   584,
     584,   584,   584,   584,   584,   584,   584,   109,   175,   172,
     205,   609,   173,   188,   205,   248,   584,   643,   657,   643,
       8,     9,    10,   205,   657,   280,   519,   518,    81,    78,
      87,    94,    95,   498,   661,   497,   173,   172,   173,   337,
      14,   586,   646,   240,   355,   173,   337,   171,   337,   371,
     171,   370,   631,   383,   383,   254,   400,   278,   270,   103,
     171,   645,   645,   645,   648,   395,   227,   276,   277,   388,
     389,    67,    87,   387,   389,   276,   389,    16,   506,   507,
     506,   631,   440,   311,   646,   400,   171,   648,   394,   172,
     405,   405,   405,   405,   235,   205,   472,   473,   657,   472,
     472,   258,    20,   265,   665,   666,   361,   181,   227,   408,
     409,   410,   412,   415,   423,   424,   435,   654,   657,    98,
     401,   316,   316,    64,    65,    67,   476,   262,   405,   489,
     631,   491,   491,   491,   173,   490,   648,   648,   644,   661,
     644,    23,   644,   644,   644,   661,    53,   649,   662,   617,
     617,   619,   618,   278,   644,   661,   644,   644,   644,   337,
     223,   224,   565,   103,   543,   543,   543,   586,   646,   562,
     582,   528,   557,   657,   316,   337,   110,   631,   157,   715,
     337,   715,   715,   657,   677,   172,   584,   691,   692,   693,
     337,   585,   657,   699,   145,   703,   715,   668,   559,   173,
     520,   523,   524,   173,   337,   183,   184,   567,   337,   183,
     110,   337,   173,   284,   662,   173,   662,   626,   299,   584,
     638,   642,   584,   309,   337,   337,   173,   337,   567,   172,
     530,   551,   552,   337,    68,    69,    70,    72,    73,    74,
      75,   165,   531,   532,   316,   553,   657,   553,   553,   338,
     337,   547,   108,   554,   567,   106,   521,   521,   567,   567,
     582,   584,   109,   328,   589,   590,   643,   173,   643,   173,
     338,   337,   338,   657,    92,    93,    87,   537,   523,   525,
     258,   384,   110,   372,   255,   372,   372,   372,   662,   254,
     657,   657,   645,   582,   646,   657,   657,   657,    89,    88,
      89,   657,   631,   409,   109,   509,   312,   509,   110,   110,
     254,   646,   472,   262,   657,   173,   337,   648,   173,   173,
      56,    62,   367,   271,   657,   659,   667,   350,   351,   363,
     364,   365,   368,   373,   385,   390,   488,   631,   657,   173,
     337,   250,   266,   279,   432,   129,   130,   411,   648,   171,
     657,   437,   437,   318,   262,   631,   262,   404,   491,   173,
     337,   173,   173,   173,   173,   337,   173,   337,   173,   337,
     292,   621,   624,   173,   337,   173,   173,   173,   564,   172,
     648,   648,   584,   114,   153,   173,   668,   173,   173,   337,
     676,    82,   247,   584,   717,   718,   720,   721,   722,   263,
     337,   687,   316,   694,    83,   141,   697,   337,   700,   103,
     704,   724,   715,   173,   160,   725,   726,   715,   173,   337,
     172,   172,   172,   584,   584,   584,   584,   293,   523,   299,
     309,   584,   523,   523,   173,   543,   551,    74,   531,    74,
     551,   551,    74,    71,   657,   172,   657,   542,   103,   107,
     556,   662,   173,   173,   189,   189,   103,   173,   101,   591,
     173,   173,   205,   643,   657,   173,   263,   367,   263,    16,
     662,   491,   491,   491,   249,   271,   316,   480,   662,   172,
     513,   514,   662,   313,   513,   662,   173,     3,    66,    79,
      85,   234,   237,   273,   297,   303,   308,   356,   358,   359,
     368,   373,   385,   390,   446,   449,   451,   452,   453,   457,
     459,   465,   467,   468,   488,   492,   493,   539,   657,   657,
     233,   233,   657,   337,   365,   410,   657,   261,   261,   441,
     126,   131,   247,   413,   414,   417,   418,   420,   421,   424,
     264,     3,   171,   407,   171,   439,   434,   657,   172,    76,
     490,   647,   661,   661,   661,   619,   661,   555,   632,   657,
     173,   173,   173,   138,   584,   678,   684,   685,   686,   716,
     715,   247,   720,   173,   337,   316,   109,   147,   149,   150,
     688,   692,   715,   657,   695,   142,   142,   173,   585,   715,
     124,   148,   585,   705,   706,   707,   708,   709,   724,   278,
     173,   173,   524,   520,   521,   521,   337,   173,   111,   173,
     173,   337,   523,   173,   341,   551,    74,   551,    16,   262,
     533,   533,   551,   172,   659,   555,   557,   567,   567,   555,
     103,    84,   335,   592,   593,   173,   173,   324,   271,   247,
      98,   109,   175,   247,   662,   337,   514,    82,   512,   337,
     172,   503,   503,   235,   234,   526,   235,   454,   455,   631,
     276,   438,   458,   557,   298,   462,   463,   584,   557,   307,
     447,   305,   339,   648,   276,   471,   648,   471,   657,   441,
     441,   127,   419,   583,   417,   109,   175,   226,   266,   269,
     279,   431,   433,   172,    82,   170,   226,   326,   477,   434,
      64,    83,   249,   173,   173,   173,   173,   173,   337,   338,
     172,   337,   337,   687,   337,   173,   718,   657,   719,   262,
     262,   262,   262,   173,   173,   316,   723,   724,   337,   109,
     150,   710,   161,   173,   173,   173,   584,   584,   584,   553,
     551,   441,   557,   533,   659,   173,   563,   185,   329,   336,
     585,   594,   595,   596,   597,   254,   270,     3,   109,   109,
     419,   662,   173,   227,   662,   504,   505,   657,   506,   506,
     662,   235,   546,   443,   657,   172,   172,   557,   300,   462,
     464,   298,   460,   461,   299,   447,   449,   557,   172,   234,
     238,   446,   234,   238,   269,   316,   109,   172,   261,   631,
     416,   417,   170,   263,   323,   324,   478,   479,   111,   482,
     483,   173,    84,    84,   632,   657,   584,   679,   680,   682,
     684,   686,   678,   684,   109,    82,   109,   109,   109,   657,
     706,   262,   262,   173,    82,   159,   162,   727,   728,   733,
     173,   173,   173,   173,   595,   321,   332,   332,   330,   600,
     662,   657,   337,   173,   337,     3,   509,   509,   270,   443,
     338,   456,   584,   438,   299,   447,   309,   584,   460,   464,
     447,   449,   132,   306,   470,   654,   235,     5,   235,     5,
     631,   128,   557,   440,   173,   337,   276,   321,   481,   276,
     481,   479,   325,   298,   485,   173,   337,   316,   681,   337,
     153,   723,   150,   150,   155,   657,   734,     3,   729,   730,
      82,   152,   155,   735,   736,   738,   739,   189,    82,   108,
     329,   334,   662,   505,    59,   510,   510,   657,   657,   173,
     337,   173,   447,   449,   297,   299,   309,   300,   304,   466,
     132,   309,   447,   173,   337,   648,   443,     4,   444,   662,
     443,   444,   440,   172,   422,   173,   112,   430,   417,   480,
     480,   480,   480,   321,   322,   484,   557,   308,   356,   358,
     368,   373,   450,   451,   486,   492,   493,   539,   680,   657,
     683,   684,   158,   731,   731,   155,   657,   741,   730,   740,
     737,   738,   329,   336,   585,   598,   599,   333,   321,    60,
     511,   511,   584,   132,   447,   297,   447,   557,   309,   309,
     309,   654,   430,   392,    39,    40,    70,   429,   262,   426,
     427,   428,   657,   657,   657,   657,   307,   730,   732,   321,
     331,   332,    61,   512,   512,   299,   303,   305,   648,   428,
     173,    64,    65,   262,   427,   262,   426,   448,   447,   469,
     657,    42,    43,    82,   271,   425,   425,   309,   450,   466,
      41,   109,   247,   132
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
#line 613 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 623 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 4:
#line 628 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 637 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 6:
#line 642 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 652 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 8:
#line 657 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 667 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 10:
#line 676 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 11:
#line 677 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 12:
#line 682 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 13:
#line 683 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym); YYACCEPT; }
    break;

  case 14:
#line 684 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 15:
#line 685 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 16:
#line 686 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 17:
#line 687 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYABORT; }
    break;

  case 30:
#line 714 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(2) - (5)].l));
		append_list(l, (yyvsp[(3) - (5)].l));
		append_symbol(l, (yyvsp[(4) - (5)].sym));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
    break;

  case 32:
#line 724 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 33:
#line 725 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 34:
#line 730 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[(2) - (2)].l)); }
    break;

  case 35:
#line 731 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 36:
#line 736 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(1) - (2)].l) );
		append_type(l, &(yyvsp[(2) - (2)].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 37:
#line 741 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l) );
		append_type(l, &(yyvsp[(4) - (4)].type) );
		(yyval.l) = append_symbol((yyvsp[(1) - (4)].l), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 38:
#line 749 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, (yyvsp[(2) - (4)].sval) );
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 39:
#line 754 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 40:
#line 762 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 41:
#line 770 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 42:
#line 778 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 43:
#line 786 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 44:
#line 792 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 45:
#line 801 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (6)].l));
		append_symbol(l, (yyvsp[(4) - (6)].sym));
		append_symbol(l, (yyvsp[(5) - (6)].sym));
		append_list(l, (yyvsp[(6) - (6)].l));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
    break;

  case 46:
#line 808 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_int(l, (yyvsp[(4) - (4)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
    break;

  case 47:
#line 816 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (1)].sval) );
	  append_string((yyval.l), NULL ); }
    break;

  case 48:
#line 820 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[(2) - (2)].sval) ); }
    break;

  case 49:
#line 824 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (3)].sval) );
	  append_string((yyval.l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 51:
#line 833 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 52:
#line 834 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[(4) - (4)].sval) ); }
    break;

  case 53:
#line 838 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 55:
#line 843 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 56:
#line 845 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 62:
#line 851 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 63:
#line 852 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 64:
#line 856 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 65:
#line 857 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_role; }
    break;

  case 66:
#line 862 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
    break;

  case 67:
#line 872 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
    break;

  case 68:
#line 881 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 69:
#line 883 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 70:
#line 887 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 71:
#line 888 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 72:
#line 892 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 73:
#line 893 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 74:
#line 898 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 75:
#line 899 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 76:
#line 904 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
    break;

  case 77:
#line 912 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
    break;

  case 78:
#line 921 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 79:
#line 922 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 80:
#line 926 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 81:
#line 927 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 82:
#line 932 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (1)].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
    break;

  case 83:
#line 936 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (3)].l));
	  append_symbol((yyval.l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 84:
#line 942 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(L(), (yyvsp[(1) - (1)].i_val)); }
    break;

  case 85:
#line 944 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(append_int(L(), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val)); }
    break;

  case 86:
#line 948 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
    break;

  case 87:
#line 949 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
    break;

  case 88:
#line 953 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(2) - (2)].l)); }
    break;

  case 89:
#line 954 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[(1) - (1)].l)); }
    break;

  case 90:
#line 955 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[(1) - (1)].l)); }
    break;

  case 91:
#line 966 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 92:
#line 967 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 94:
#line 972 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 95:
#line 974 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 96:
#line 978 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
    break;

  case 97:
#line 979 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
    break;

  case 98:
#line 980 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[(2) - (2)].l)); }
    break;

  case 99:
#line 981 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 100:
#line 982 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 101:
#line 983 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
    break;

  case 102:
#line 987 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 103:
#line 989 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 104:
#line 993 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 105:
#line 994 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 106:
#line 1002 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 107:
#line 1007 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, (yyvsp[(6) - (6)].l)));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 108:
#line 1012 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 109:
#line 1017 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 110:
#line 1022 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 111:
#line 1027 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 112:
#line 1032 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 113:
#line 1037 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (4)].sval));
	  append_list(l, (yyvsp[(4) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 114:
#line 1042 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
    break;

  case 115:
#line 1047 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 116:
#line 1059 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (4)].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[(2) - (4)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 117:
#line 1065 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 118:
#line 1072 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (7)].sval));
				  append_string(l, (yyvsp[(7) - (7)].sval));
				  append_int(l, (yyvsp[(2) - (7)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 119:
#line 1082 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
    break;

  case 120:
#line 1087 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
    break;

  case 121:
#line 1091 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
    break;

  case 122:
#line 1095 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[(2) - (4)].sval)); }
    break;

  case 123:
#line 1097 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  if (!strlen((yyvsp[(5) - (5)].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 124:
#line 1105 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 125:
#line 1113 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
    break;

  case 126:
#line 1118 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
    break;

  case 127:
#line 1123 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 128:
#line 1130 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 129:
#line 1131 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 130:
#line 1135 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 131:
#line 1136 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 132:
#line 1137 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 138:
#line 1159 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
    break;

  case 139:
#line 1170 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (3)].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
    break;

  case 140:
#line 1187 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
    break;

  case 141:
#line 1196 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 142:
#line 1197 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 143:
#line 1201 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 144:
#line 1202 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 145:
#line 1206 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 146:
#line 1207 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 147:
#line 1208 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 148:
#line 1212 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 149:
#line 1213 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
    break;

  case 150:
#line 1214 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[(3) - (3)].l_val)));  }
    break;

  case 151:
#line 1215 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[(3) - (3)].sym)));  }
    break;

  case 152:
#line 1216 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 153:
#line 1220 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 154:
#line 1221 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 155:
#line 1222 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
    break;

  case 156:
#line 1223 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 157:
#line 1224 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
    break;

  case 158:
#line 1225 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 159:
#line 1226 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
    break;

  case 160:
#line 1227 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
    break;

  case 161:
#line 1235 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (9)].sval));
	  append_int(l, (yyvsp[(2) - (9)].i_val));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
    break;

  case 162:
#line 1244 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 163:
#line 1245 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ordered_idx; }
    break;

  case 164:
#line 1246 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imprints_idx; }
    break;

  case 165:
#line 1247 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 166:
#line 1268 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval));
	  append_int(l, (yyvsp[(3) - (3)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
    break;

  case 167:
#line 1273 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (10)].sval));
	  append_string(l, (yyvsp[(6) - (10)].sval));
	  append_string(l, (yyvsp[(8) - (10)].sval));
	  append_string(l, (yyvsp[(10) - (10)].sval));
	  append_int(l, (yyvsp[(4) - (10)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
    break;

  case 168:
#line 1283 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 169:
#line 1284 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 170:
#line 1285 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
    break;

  case 171:
#line 1289 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 172:
#line 1290 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 173:
#line 1295 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1306 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1316 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1326 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1339 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1349 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1363 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 180:
#line 1364 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 181:
#line 1365 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 182:
#line 1366 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 183:
#line 1367 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 184:
#line 1368 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 185:
#line 1372 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_COMMIT; }
    break;

  case 186:
#line 1373 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DELETE; }
    break;

  case 187:
#line 1374 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_PRESERVE; }
    break;

  case 188:
#line 1375 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DROP; }
    break;

  case 189:
#line 1379 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[(2) - (3)].l)); }
    break;

  case 190:
#line 1380 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[(1) - (1)].l)); }
    break;

  case 191:
#line 1388 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (4)].l));
			  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym)); 
			  append_int((yyval.l), (yyvsp[(4) - (4)].i_val)); }
    break;

  case 192:
#line 1394 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 193:
#line 1395 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 194:
#line 1396 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 195:
#line 1401 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 196:
#line 1403 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 202:
#line 1410 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 203:
#line 1411 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 204:
#line 1416 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
			dlist *l = L();
			append_string(l, (yyvsp[(1) - (3)].sval));
			append_type(l, &(yyvsp[(2) - (3)].type));
			append_list(l, (yyvsp[(3) - (3)].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 205:
#line 1424 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1476 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 208:
#line 1482 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 209:
#line 1484 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 210:
#line 1490 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (6)].sval) );
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
    break;

  case 211:
#line 1498 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 212:
#line 1500 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 216:
#line 1506 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 217:
#line 1510 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 218:
#line 1516 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 219:
#line 1524 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1553 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1590 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 222:
#line 1591 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 223:
#line 1598 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 224:
#line 1607 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 225:
#line 1608 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 226:
#line 1612 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 227:
#line 1613 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 228:
#line 1614 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 229:
#line 1615 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 230:
#line 1616 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 231:
#line 1620 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(3) - (3)].i_val) << 8); }
    break;

  case 232:
#line 1624 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 233:
#line 1628 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
    break;

  case 234:
#line 1629 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 235:
#line 1630 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 236:
#line 1631 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 237:
#line 1632 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 238:
#line 1636 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 239:
#line 1637 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 240:
#line 1638 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 241:
#line 1639 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 242:
#line 1643 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 243:
#line 1644 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 244:
#line 1648 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
    break;

  case 245:
#line 1649 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
    break;

  case 246:
#line 1650 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
    break;

  case 247:
#line 1651 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
    break;

  case 248:
#line 1654 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(2) - (5)].l) );
			  append_list(l, (yyvsp[(3) - (5)].l) );
			  append_int(l, (yyvsp[(4) - (5)].i_val) );
			  append_int(l, (yyvsp[(5) - (5)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 250:
#line 1667 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[(2) - (2)].l)); }
    break;

  case 251:
#line 1669 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[(3) - (3)].l)); }
    break;

  case 252:
#line 1673 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(5) - (8)].l) );
			  append_list(l, (yyvsp[(3) - (8)].l) );
			  append_list(l, (yyvsp[(6) - (8)].l) );
			  append_int(l, (yyvsp[(7) - (8)].i_val) );
			  append_int(l, (yyvsp[(8) - (8)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 253:
#line 1685 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 254:
#line 1690 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 255:
#line 1692 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 256:
#line 1696 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 257:
#line 1701 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1713 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 262:
#line 1722 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 263:
#line 1723 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 264:
#line 1727 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 266:
#line 1732 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 267:
#line 1737 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				append_list(l, (yyvsp[(3) - (6)].l));
				append_string(l, (yyvsp[(6) - (6)].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
    break;

  case 268:
#line 1744 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 271:
#line 1758 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 272:
#line 1771 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 273:
#line 1783 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(10) - (11)].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p')
            {
                if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON_MAP") == 0)
                    lang = FUNC_LANG_MAP_PY;
                else lang = FUNC_LANG_PY;
            }
			else if (l == 'C' || l == 'c')
				lang = FUNC_LANG_C;
			else if (l == 'J' || l == 'j')
				lang = FUNC_LANG_J;
			else
				yyerror(m, sql_message("Language name R, C, P(ython), PYTHON_MAP or J(avascript):expected, received '%c'", l));

			append_list(f, (yyvsp[(3) - (11)].l));
			append_list(f, (yyvsp[(5) - (11)].l));
			append_symbol(f, (yyvsp[(8) - (11)].sym));
			append_list(f, NULL); 
			append_list(f, append_string(L(), (yyvsp[(11) - (11)].sval)));
			append_int(f, F_FUNC);
			append_int(f, lang);
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 274:
#line 1814 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 275:
#line 1828 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 276:
#line 1840 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(10) - (11)].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p')
            {
                if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON_MAP") == 0)
                     lang = FUNC_LANG_MAP_PY;
                else lang = FUNC_LANG_PY;
            }
			else if (l == 'C' || l == 'c')
				lang = FUNC_LANG_C;
			else if (l == 'J' || l == 'j')
				lang = FUNC_LANG_J;
			else
				yyerror(m, sql_message("Language name R, C, P(ython), PYTHON_MAP or J(avascript):expected, received '%c'", l));

			append_list(f, (yyvsp[(3) - (11)].l));
			append_list(f, (yyvsp[(5) - (11)].l));
			append_symbol(f, (yyvsp[(8) - (11)].sym));
			append_list(f, NULL);
			append_list(f, append_string(L(), (yyvsp[(11) - (11)].sval)));
			append_int(f, F_AGGR);
			append_int(f, lang);
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 277:
#line 1872 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 278:
#line 1884 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 279:
#line 1897 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[(1) - (1)].sym)); }
    break;

  case 280:
#line 1901 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(2) - (5)].l),(yyvsp[(3) - (5)].sym)); }
    break;

  case 281:
#line 1905 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(3) - (6)].l),(yyvsp[(4) - (6)].sym)); }
    break;

  case 282:
#line 1920 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 283:
#line 1922 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 284:
#line 1926 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 285:
#line 1928 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 312:
#line 1976 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 313:
#line 1980 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[(2) - (2)].sym));}
    break;

  case 314:
#line 1985 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L(); 
		  append_list( l, (yyvsp[(1) - (4)].l));
		  append_list( l, (yyvsp[(3) - (4)].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
    break;

  case 316:
#line 1996 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = L();}
    break;

  case 317:
#line 1997 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 318:
#line 1999 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 319:
#line 2004 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[(2) - (2)].sym)); }
    break;

  case 322:
#line 2011 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[(3) - (4)].sym)); }
    break;

  case 323:
#line 2016 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (6)].sym)),(yyvsp[(3) - (6)].l)),(yyvsp[(4) - (6)].l))); }
    break;

  case 324:
#line 2022 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[(2) - (5)].l)),(yyvsp[(3) - (5)].l))); }
    break;

  case 325:
#line 2030 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 326:
#line 2038 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 327:
#line 2040 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 328:
#line 2045 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 329:
#line 2053 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 330:
#line 2055 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 331:
#line 2059 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 332:
#line 2060 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 333:
#line 2070 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (7)].sym));
		  append_list(l, (yyvsp[(4) - (7)].l));
		  append_symbol(l, (yyvsp[(5) - (7)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
    break;

  case 334:
#line 2081 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 335:
#line 2083 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[(2) - (2)].l)); }
    break;

  case 336:
#line 2086 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  append_symbol(l, (yyvsp[(5) - (5)].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
    break;

  case 337:
#line 2100 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 338:
#line 2116 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 340:
#line 2121 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 342:
#line 2127 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[(1) - (2)].sval));
			  	  append_type((yyval.l), &(yyvsp[(2) - (2)].type));
				}
    break;

  case 343:
#line 2132 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
				  append_string((yyval.l), (yyvsp[(3) - (4)].sval));
			  	  append_type((yyval.l), &(yyvsp[(4) - (4)].type));
				}
    break;

  case 344:
#line 2140 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(3) - (4)].l)); }
    break;

  case 345:
#line 2142 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(1) - (1)].type))); }
    break;

  case 347:
#line 2147 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
    break;

  case 348:
#line 2151 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 349:
#line 2156 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *p = L();
			  append_string(p, (yyvsp[(3) - (4)].sval));
			  append_type(p, &(yyvsp[(4) - (4)].type));
			  (yyval.l) = append_list((yyvsp[(1) - (4)].l), p); }
    break;

  case 350:
#line 2161 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[(1) - (2)].sval));
			  append_type(p, &(yyvsp[(2) - (2)].type));
			  (yyval.l) = append_list(l, p); }
    break;

  case 351:
#line 2211 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 352:
#line 2223 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 353:
#line 2224 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 354:
#line 2228 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
    break;

  case 355:
#line 2229 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
    break;

  case 356:
#line 2230 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
    break;

  case 357:
#line 2231 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[(3) - (3)].l)); }
    break;

  case 358:
#line 2235 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 359:
#line 2236 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 360:
#line 2240 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 361:
#line 2242 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].l)); }
    break;

  case 362:
#line 2247 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 363:
#line 2248 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 364:
#line 2249 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 365:
#line 2250 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 370:
#line 2265 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[(1) - (3)].i_val));
	  append_symbol((yyval.l), (yyvsp[(2) - (3)].sym));
	  append_list((yyval.l), (yyvsp[(3) - (3)].l));
	}
    break;

  case 371:
#line 2272 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 372:
#line 2273 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 373:
#line 2277 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 374:
#line 2278 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 375:
#line 2282 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 376:
#line 2283 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 377:
#line 2288 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 378:
#line 2291 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 379:
#line 2296 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
    break;

  case 380:
#line 2302 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );	
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
    break;

  case 381:
#line 2308 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
    break;

  case 382:
#line 2314 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
    break;

  case 383:
#line 2323 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 384:
#line 2328 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = (yyvsp[(2) - (3)].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 385:
#line 2333 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 386:
#line 2341 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(6) - (6)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 387:
#line 2349 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 388:
#line 2357 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 389:
#line 2365 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
    break;

  case 390:
#line 2370 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
    break;

  case 391:
#line 2374 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 392:
#line 2375 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 393:
#line 2376 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[(3) - (3)].l) ); }
    break;

  case 394:
#line 2377 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, (yyvsp[(3) - (3)].l) ); }
    break;

  case 395:
#line 2381 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = NULL;}
    break;

  case 396:
#line 2382 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = (yyvsp[(2) - (3)].l);}
    break;

  case 397:
#line 2383 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = L(); }
    break;

  case 398:
#line 2387 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_type(l, &(yyvsp[(1) - (1)].type) );
				  (yyval.l)= l; }
    break;

  case 399:
#line 2390 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { append_type((yyvsp[(3) - (3)].l), &(yyvsp[(1) - (3)].type));
				  (yyval.l) = (yyvsp[(3) - (3)].l); }
    break;

  case 400:
#line 2395 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 401:
#line 2396 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 402:
#line 2397 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 409:
#line 2416 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	  (yyval.sym) = (yyvsp[(1) - (1)].sym);
	  m->type = Q_TRANS;					}
    break;

  case 410:
#line 2423 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[(3) - (3)].bval));  }
    break;

  case 411:
#line 2425 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[(2) - (2)].sval)); }
    break;

  case 412:
#line 2427 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[(3) - (3)].sval)); }
    break;

  case 413:
#line 2429 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[(3) - (4)].bval)), (yyvsp[(4) - (4)].sval) )); }
    break;

  case 414:
#line 2433 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 415:
#line 2435 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(4) - (4)].i_val)); }
    break;

  case 416:
#line 2437 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 417:
#line 2441 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; }
    break;

  case 419:
#line 2447 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 420:
#line 2449 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(1) - (3)].i_val) | (yyvsp[(3) - (3)].i_val)); }
    break;

  case 421:
#line 2454 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_readonly; }
    break;

  case 422:
#line 2455 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_writable; }
    break;

  case 423:
#line 2456 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_serializable; }
    break;

  case 424:
#line 2457 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; /* not supported */ }
    break;

  case 429:
#line 2468 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 430:
#line 2469 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 431:
#line 2473 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 432:
#line 2474 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 433:
#line 2475 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 434:
#line 2479 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 435:
#line 2480 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 436:
#line 2485 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (13)].l));
	  append_list(l, (yyvsp[(5) - (13)].l));
	  append_list(l, (yyvsp[(7) - (13)].l));
	  append_list(l, (yyvsp[(8) - (13)].l));
	  append_list(l, (yyvsp[(9) - (13)].l));
	  append_list(l, (yyvsp[(2) - (13)].l));
	  append_string(l, (yyvsp[(10) - (13)].sval));
	  append_int(l, (yyvsp[(11) - (13)].bval));
	  append_int(l, (yyvsp[(12) - (13)].bval));
	  append_int(l, (yyvsp[(13) - (13)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
    break;

  case 437:
#line 2498 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
    break;

  case 438:
#line 2511 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 439:
#line 2521 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 440:
#line 2528 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 441:
#line 2537 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 442:
#line 2538 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 443:
#line 2542 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 444:
#line 2543 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 445:
#line 2548 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (1)].sval) );
			  (yyval.l) = l; }
    break;

  case 446:
#line 2552 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (2)].sval) );
			  append_string(l, (yyvsp[(2) - (2)].sval) );
			  (yyval.l) = l; }
    break;

  case 447:
#line 2560 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 448:
#line 2565 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 449:
#line 2570 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (5)].sval));
				  append_string(l, (yyvsp[(5) - (5)].sval));
				  (yyval.l) = l; }
    break;

  case 450:
#line 2575 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (7)].sval));
				  append_string(l, (yyvsp[(5) - (7)].sval));
				  append_string(l, sql2str((yyvsp[(7) - (7)].sval)));
				  (yyval.l) = l; }
    break;

  case 451:
#line 2583 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 452:
#line 2584 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 453:
#line 2588 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 454:
#line 2589 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (2)].l_val)), 0); }
    break;

  case 455:
#line 2590 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[(2) - (2)].l_val)); }
    break;

  case 456:
#line 2592 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(3) - (4)].l_val)); }
    break;

  case 457:
#line 2594 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(4) - (4)].l_val)); }
    break;

  case 458:
#line 2598 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 459:
#line 2599 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 460:
#line 2603 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 461:
#line 2604 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 462:
#line 2608 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 463:
#line 2609 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 464:
#line 2613 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 465:
#line 2614 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 466:
#line 2618 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 467:
#line 2619 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 468:
#line 2623 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 469:
#line 2625 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 470:
#line 2631 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
    break;

  case 471:
#line 2640 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
    break;

  case 472:
#line 2681 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 473:
#line 2689 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 474:
#line 2698 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 475:
#line 2700 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 476:
#line 2702 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(2) - (2)].l)); }
    break;

  case 478:
#line 2708 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(2) - (3)].l)); }
    break;

  case 479:
#line 2710 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (5)].l), (yyvsp[(4) - (5)].l)); }
    break;

  case 480:
#line 2714 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 481:
#line 2716 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 482:
#line 2720 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 483:
#line 2722 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 484:
#line 2727 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 489:
#line 2756 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 490:
#line 2757 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 491:
#line 2758 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 492:
#line 2762 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 493:
#line 2764 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 494:
#line 2769 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym) );
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 495:
#line 2774 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
    break;

  case 496:
#line 2781 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 497:
#line 2782 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 498:
#line 2789 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 499:
#line 2792 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
    break;

  case 500:
#line 2797 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
    break;

  case 501:
#line 2805 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 0);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 502:
#line 2813 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 1);
	  append_int(l, 0);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 503:
#line 2821 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[(2) - (5)].i_val));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 504:
#line 2829 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[(3) - (5)].i_val));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 505:
#line 2839 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 506:
#line 2840 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (2)].i_val); }
    break;

  case 507:
#line 2841 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (1)].i_val); }
    break;

  case 508:
#line 2845 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 509:
#line 2846 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 510:
#line 2847 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 511:
#line 2851 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 512:
#line 2853 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[(2) - (2)].l)); }
    break;

  case 514:
#line 2877 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (3)].l));
	  	append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
    break;

  case 515:
#line 2886 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 516:
#line 2887 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 517:
#line 2892 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[(1) - (6)].sval)));
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 521:
#line 2915 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (4)].bval), (yyvsp[(3) - (4)].l), NULL,
		(yyvsp[(4) - (4)].l)->h->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 522:
#line 2926 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (6)].bval), (yyvsp[(3) - (6)].l), (yyvsp[(5) - (6)].l),
		(yyvsp[(6) - (6)].l)->h->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 523:
#line 2937 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 524:
#line 2967 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 525:
#line 2969 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 527:
#line 2979 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
    break;

  case 528:
#line 2988 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
    break;

  case 529:
#line 2997 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
    break;

  case 530:
#line 3003 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 532:
#line 3008 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 533:
#line 3009 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 534:
#line 3010 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 535:
#line 3015 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 536:
#line 3017 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 537:
#line 3019 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(4) - (5)].l); }
    break;

  case 539:
#line 3029 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[(1) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(4) - (4)].sym)); }
    break;

  case 540:
#line 3037 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 541:
#line 3038 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[(2) - (2)].l)); }
    break;

  case 542:
#line 3042 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 543:
#line 3044 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 544:
#line 3048 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (1)].l));
		  	  	  append_symbol(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 545:
#line 3052 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (2)].l));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 546:
#line 3056 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 547:
#line 3060 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (1)].sym));
		  	  	  append_symbol(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 549:
#line 3069 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 550:
#line 3079 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
    break;

  case 551:
#line 3083 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym);
				  append_symbol((yyvsp[(1) - (1)].sym)->data.lval, NULL); }
    break;

  case 552:
#line 3093 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->caching = 0; }
    break;

  case 553:
#line 3095 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[(3) - (5)].sym));
		append_symbol(op, (yyvsp[(5) - (5)].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
    break;

  case 554:
#line 3106 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (5)].sval));
		  	  	  append_list(l, (yyvsp[(4) - (5)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 555:
#line 3111 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (2)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 556:
#line 3116 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (4)].sval));
		  	  	  append_list(l, (yyvsp[(3) - (4)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 557:
#line 3121 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (1)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 558:
#line 3128 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 559:
#line 3129 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) );}
    break;

  case 560:
#line 3133 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(1) - (1)].l))); }
    break;

  case 561:
#line 3136 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(3) - (3)].l))); }
    break;

  case 562:
#line 3141 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 563:
#line 3142 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 564:
#line 3148 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
    break;

  case 565:
#line 3152 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 566:
#line 3157 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
    break;

  case 567:
#line 3161 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 568:
#line 3165 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 569:
#line 3167 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l)); }
    break;

  case 570:
#line 3171 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 571:
#line 3172 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 572:
#line 3176 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 573:
#line 3180 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 574:
#line 3181 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 575:
#line 3185 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 576:
#line 3189 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 577:
#line 3190 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val)));
			}
    break;

  case 578:
#line 3194 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[(2) - (2)].sval),NULL)));
			}
    break;

  case 579:
#line 3198 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 580:
#line 3202 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 581:
#line 3204 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 582:
#line 3209 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  append_int(l, (yyvsp[(2) - (2)].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
    break;

  case 583:
#line 3217 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 584:
#line 3218 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 585:
#line 3219 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 595:
#line 3236 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 596:
#line 3252 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 597:
#line 3257 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, (yyvsp[(2) - (3)].sval));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 598:
#line 3264 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 599:
#line 3274 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
    break;

  case 600:
#line 3281 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
    break;

  case 601:
#line 3290 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 602:
#line 3291 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 603:
#line 3292 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 604:
#line 3297 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 605:
#line 3304 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 606:
#line 3311 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 607:
#line 3318 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 608:
#line 3328 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (1)].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
    break;

  case 609:
#line 3332 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(3) - (3)].sval));
	  if (_strlen(s) != 1) {
		char *msg = sql_message("\b22025!ESCAPE must be one character");
		yyerror(m, msg);
		_DELETE(msg);
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

  case 610:
#line 3349 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[(1) - (4)].sym) );}
    break;

  case 611:
#line 3350 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[(1) - (3)].sym) ); }
    break;

  case 612:
#line 3355 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 613:
#line 3361 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 614:
#line 3367 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 615:
#line 3372 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 616:
#line 3380 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 617:
#line 3382 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 618:
#line 3388 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, (yyvsp[(2) - (4)].sval));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 619:
#line 3395 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 620:
#line 3404 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 621:
#line 3405 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 622:
#line 3406 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 623:
#line 3410 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[(2) - (2)].sym) ); }
    break;

  case 624:
#line 3414 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 625:
#line 3415 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym));  }
    break;

  case 626:
#line 3419 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 627:
#line 3424 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(1) - (3)].l));
		  append_list(l, (yyvsp[(2) - (3)].l));
		  append_list(l, (yyvsp[(3) - (3)].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
    break;

  case 628:
#line 3432 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 629:
#line 3434 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 630:
#line 3436 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 632:
#line 3443 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 633:
#line 3450 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 634:
#line 3457 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 635:
#line 3464 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 636:
#line 3471 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 637:
#line 3478 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 638:
#line 3485 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
			  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 639:
#line 3492 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 640:
#line 3499 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 641:
#line 3506 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 642:
#line 3513 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 643:
#line 3520 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 644:
#line 3526 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 645:
#line 3533 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 646:
#line 3540 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 647:
#line 3547 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 648:
#line 3554 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 649:
#line 3561 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 650:
#line 3568 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  		  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 651:
#line 3575 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 652:
#line 3581 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 653:
#line 3588 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 654:
#line 3595 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 655:
#line 3602 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 656:
#line 3609 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 657:
#line 3611 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
 			  (yyval.sym) = NULL;
			  assert((yyvsp[(2) - (2)].sym)->token != SQL_COLUMN || (yyvsp[(2) - (2)].sym)->data.lval->h->type != type_lng);
			  if ((yyvsp[(2) - (2)].sym)->token == SQL_COLUMN && (yyvsp[(2) - (2)].sym)->data.lval->h->type == type_int) {
				atom *a = sql_bind_arg(m, (yyvsp[(2) - (2)].sym)->data.lval->h->data.i_val);
				if (!atom_neg(a)) {
					(yyval.sym) = (yyvsp[(2) - (2)].sym);
				} else {
					char *msg = sql_message("\b22003!value too large or not a number");

					yyerror(m, msg);
					_DELETE(msg);
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

  case 658:
#line 3635 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 659:
#line 3639 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 662:
#line 3645 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
    break;

  case 663:
#line 3647 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
    break;

  case 665:
#line 3650 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[(1) - (1)].l)); }
    break;

  case 669:
#line 3654 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[(4) - (4)].l)); }
    break;

  case 677:
#line 3666 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
    break;

  case 678:
#line 3736 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[(1) - (5)].sym)), (yyvsp[(4) - (5)].l))); }
    break;

  case 679:
#line 3741 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[(1) - (3)].l) ); }
    break;

  case 681:
#line 3747 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[(1) - (3)].sym)), (yyvsp[(2) - (3)].sym)), (yyvsp[(3) - (3)].sym)); }
    break;

  case 682:
#line 3751 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 683:
#line 3753 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 684:
#line 3757 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 685:
#line 3759 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 686:
#line 3763 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 687:
#line 3765 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[(2) - (3)].l), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val))); }
    break;

  case 688:
#line 3769 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_ROWS; }
    break;

  case 689:
#line 3770 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_RANGE; }
    break;

  case 690:
#line 3774 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(1) - (1)].sym)), _symbol_create_int(SQL_FRAME, -1)); }
    break;

  case 691:
#line 3775 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 692:
#line 3779 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 693:
#line 3780 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 694:
#line 3781 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 695:
#line 3785 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 696:
#line 3790 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(2) - (4)].sym)), (yyvsp[(4) - (4)].sym)); }
    break;

  case 697:
#line 3794 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 698:
#line 3795 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 699:
#line 3796 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 700:
#line 3800 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 701:
#line 3804 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NONE; }
    break;

  case 702:
#line 3805 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
    break;

  case 703:
#line 3806 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_GROUP; }
    break;

  case 704:
#line 3807 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_TIES; }
    break;

  case 705:
#line 3808 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
    break;

  case 706:
#line 3812 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 707:
#line 3817 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 708:
#line 3821 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 709:
#line 3848 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 710:
#line 3849 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 711:
#line 3854 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 712:
#line 3855 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "left"); }
    break;

  case 713:
#line 3856 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "right"); }
    break;

  case 714:
#line 3857 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "insert"); }
    break;

  case 715:
#line 3862 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[(3) - (6)].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 716:
#line 3869 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 717:
#line 3874 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 718:
#line 3879 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 719:
#line 3884 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 720:
#line 3889 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 721:
#line 3896 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 722:
#line 3897 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 723:
#line 3902 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 726:
#line 3929 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 727:
#line 3936 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 728:
#line 3943 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 729:
#line 3950 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 730:
#line 3962 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 731:
#line 3964 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 732:
#line 3969 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 733:
#line 3974 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, (yyvsp[(1) - (3)].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 734:
#line 3979 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 735:
#line 3984 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
  		  append_string(l, (yyvsp[(2) - (2)].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
    break;

  case 736:
#line 3991 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 737:
#line 3992 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 738:
#line 3997 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 739:
#line 4018 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 740:
#line 4019 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 741:
#line 4024 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 742:
#line 4025 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 743:
#line 4030 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 744:
#line 4031 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 745:
#line 4038 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 746:
#line 4044 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 747:
#line 4050 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 748:
#line 4056 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 749:
#line 4062 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (4)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 750:
#line 4068 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 752:
#line 4078 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 753:
#line 4079 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = -1; }
    break;

  case 754:
#line 4080 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 755:
#line 4084 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 756:
#line 4085 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 757:
#line 4096 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 758:
#line 4098 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0+1; }
    break;

  case 759:
#line 4102 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 760:
#line 4104 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 6+1; }
    break;

  case 761:
#line 4108 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
    break;

  case 762:
#line 4110 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 763:
#line 4116 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 764:
#line 4124 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = iyear; }
    break;

  case 765:
#line 4125 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imonth; }
    break;

  case 766:
#line 4126 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = iday; }
    break;

  case 767:
#line 4127 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ihour; }
    break;

  case 768:
#line 4128 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imin; }
    break;

  case 770:
#line 4133 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = isec; }
    break;

  case 771:
#line 4138 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 772:
#line 4144 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (1)].i_val)), 0);  }
    break;

  case 773:
#line 4147 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 774:
#line 4153 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 775:
#line 4156 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 776:
#line 4162 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[(1) - (3)].l)), (yyvsp[(3) - (3)].l) ); }
    break;

  case 777:
#line 4165 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list( L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 778:
#line 4169 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 782:
#line 4195 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(1) - (1)].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
    break;

  case 783:
#line 4201 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 784:
#line 4266 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 785:
#line 4297 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 786:
#line 4348 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 787:
#line 4387 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 788:
#line 4404 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 789:
#line 4420 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 790:
#line 4436 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 792:
#line 4453 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 793:
#line 4470 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 794:
#line 4487 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 795:
#line 4504 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 796:
#line 4525 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
    break;

  case 797:
#line 4529 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
    break;

  case 798:
#line 4535 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 799:
#line 4580 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 800:
#line 4581 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (3)].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 801:
#line 4585 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (5)].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[(1) - (5)].sval)), 
						(yyvsp[(3) - (5)].sval)), 
					(yyvsp[(5) - (5)].sval))
				;}
    break;

  case 802:
#line 4596 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 803:
#line 4599 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 804:
#line 4604 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[(1) - (5)].sval)), (yyvsp[(3) - (5)].sval)), (yyvsp[(5) - (5)].sval));}
    break;

  case 805:
#line 4612 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 806:
#line 4618 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 808:
#line 4630 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[(3) - (6)].sym)), (yyvsp[(5) - (6)].sym))); }
    break;

  case 809:
#line 4635 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[(3) - (4)].l)); }
    break;

  case 810:
#line 4637 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (5)].sym)),(yyvsp[(3) - (5)].l)),(yyvsp[(4) - (5)].sym))); }
    break;

  case 811:
#line 4643 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[(2) - (4)].l)),(yyvsp[(3) - (4)].sym))); }
    break;

  case 812:
#line 4651 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 813:
#line 4653 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 814:
#line 4658 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (3)].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[(3) - (3)].sym));
			}
    break;

  case 815:
#line 4662 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 816:
#line 4668 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 817:
#line 4676 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 818:
#line 4678 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 819:
#line 4683 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 820:
#line 4691 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 821:
#line 4693 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 822:
#line 4697 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 823:
#line 4698 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 825:
#line 4708 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 826:
#line 4719 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 827:
#line 4729 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 828:
#line 4739 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 829:
#line 4750 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
    break;

  case 830:
#line 4752 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
    break;

  case 831:
#line 4756 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
    break;

  case 832:
#line 4758 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 833:
#line 4760 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 834:
#line 4762 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
    break;

  case 835:
#line 4770 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
    break;

  case 836:
#line 4772 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
    break;

  case 837:
#line 4780 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
    break;

  case 838:
#line 4781 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
    break;

  case 839:
#line 4782 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
    break;

  case 840:
#line 4783 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
    break;

  case 841:
#line 4784 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
    break;

  case 842:
#line 4786 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
    break;

  case 843:
#line 4788 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 844:
#line 4801 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 845:
#line 4818 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 846:
#line 4820 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 847:
#line 4834 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 848:
#line 4853 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 849:
#line 4854 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 850:
#line 4855 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
    break;

  case 853:
#line 4858 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 854:
#line 4860 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 855:
#line 4861 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 856:
#line 4863 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 857:
#line 4865 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 858:
#line 4876 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 859:
#line 4891 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 860:
#line 4904 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		sql_find_subtype(&(yyval.type), "geometry", 0, 0 );
	}
    break;

  case 861:
#line 4907 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 862:
#line 4922 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 863:
#line 4937 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		sql_find_subtype(&(yyval.type), "geometrya", 0, 0 );
	}
    break;

  case 864:
#line 4940 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 865:
#line 4960 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	int subtype = find_subgeometry_type((yyvsp[(1) - (1)].sval));
	char* geoSubType = (yyvsp[(1) - (1)].sval);

	if(subtype == 0) {
		char *msg = sql_message("\b22000!type (%s) unknown", geoSubType);
		yyerror(m, msg);
		_DELETE(msg);
		
	} 
	(yyval.i_val) = subtype;	
}
    break;

  case 866:
#line 4972 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	int subtype = find_subgeometry_type((yyvsp[(1) - (1)].sval));
	char* geoSubType = (yyvsp[(1) - (1)].sval);

	if(subtype == 0) {
		char *msg = sql_message("\b22000!type (%s) unknown", geoSubType);
		yyerror(m, msg);
		_DELETE(msg);
		
	} 
	(yyval.i_val) = subtype;	
}
    break;

  case 867:
#line 4988 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 868:
#line 5002 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 869:
#line 5003 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (2)].sval); }
    break;

  case 870:
#line 5007 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 871:
#line 5008 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 872:
#line 5009 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 873:
#line 5012 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 874:
#line 5013 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 877:
#line 5021 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 878:
#line 5022 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 879:
#line 5023 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 880:
#line 5024 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 881:
#line 5025 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 882:
#line 5026 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 883:
#line 5030 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 884:
#line 5031 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 885:
#line 5032 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 886:
#line 5033 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 887:
#line 5034 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 888:
#line 5035 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 889:
#line 5036 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 891:
#line 5041 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "large"); }
    break;

  case 892:
#line 5042 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "name"); }
    break;

  case 893:
#line 5043 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "object"); }
    break;

  case 894:
#line 5044 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "password"); }
    break;

  case 895:
#line 5045 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "path"); }
    break;

  case 896:
#line 5046 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "precision"); }
    break;

  case 897:
#line 5047 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
    break;

  case 898:
#line 5048 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "role"); }
    break;

  case 899:
#line 5049 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "size"); }
    break;

  case 900:
#line 5050 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "type"); }
    break;

  case 901:
#line 5051 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "release"); }
    break;

  case 902:
#line 5052 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "value"); }
    break;

  case 903:
#line 5053 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "zone"); }
    break;

  case 904:
#line 5055 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "action"); }
    break;

  case 905:
#line 5056 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "as"); }
    break;

  case 906:
#line 5057 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
    break;

  case 907:
#line 5058 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "column"); }
    break;

  case 908:
#line 5059 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
    break;

  case 909:
#line 5060 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
    break;

  case 910:
#line 5061 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "increment"); }
    break;

  case 911:
#line 5062 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
    break;

  case 912:
#line 5063 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
    break;

  case 913:
#line 5064 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "plan"); }
    break;

  case 914:
#line 5065 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "schema"); }
    break;

  case 915:
#line 5066 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "start"); }
    break;

  case 916:
#line 5067 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "statement"); }
    break;

  case 917:
#line 5068 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "table"); }
    break;

  case 918:
#line 5070 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cache"); }
    break;

  case 919:
#line 5071 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "data"); }
    break;

  case 920:
#line 5072 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
    break;

  case 921:
#line 5073 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "match"); }
    break;

  case 922:
#line 5074 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "options"); }
    break;

  case 923:
#line 5075 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "row"); }
    break;

  case 924:
#line 5076 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "key"); }
    break;

  case 925:
#line 5077 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "language"); }
    break;

  case 926:
#line 5078 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "level"); }
    break;

  case 927:
#line 5079 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "session"); }
    break;

  case 928:
#line 5080 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "date"); }
    break;

  case 929:
#line 5081 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "time"); }
    break;

  case 930:
#line 5082 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
    break;

  case 931:
#line 5083 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "interval"); }
    break;

  case 932:
#line 5084 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
    break;

  case 933:
#line 5086 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
    break;

  case 934:
#line 5087 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "execute"); }
    break;

  case 935:
#line 5088 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "explain"); }
    break;

  case 936:
#line 5089 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "debug"); }
    break;

  case 937:
#line 5090 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "trace"); }
    break;

  case 938:
#line 5091 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "text"); }
    break;

  case 939:
#line 5092 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
    break;

  case 940:
#line 5093 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "no"); }
    break;

  case 941:
#line 5095 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "strip"); }
    break;

  case 942:
#line 5096 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
    break;

  case 943:
#line 5097 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "passing"); }
    break;

  case 944:
#line 5098 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "nil"); }
    break;

  case 945:
#line 5099 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "ref"); }
    break;

  case 946:
#line 5100 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "absent"); }
    break;

  case 947:
#line 5101 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "empty"); }
    break;

  case 948:
#line 5102 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "document"); }
    break;

  case 949:
#line 5103 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "element"); }
    break;

  case 950:
#line 5104 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "content"); }
    break;

  case 951:
#line 5105 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
    break;

  case 952:
#line 5106 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "returning"); }
    break;

  case 953:
#line 5107 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "location"); }
    break;

  case 954:
#line 5108 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "id"); }
    break;

  case 955:
#line 5109 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "according"); }
    break;

  case 956:
#line 5110 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "uri"); }
    break;

  case 957:
#line 5111 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "filter"); }
    break;

  case 958:
#line 5112 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
    break;

  case 959:
#line 5113 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temp"); }
    break;

  case 960:
#line 5114 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
    break;

  case 961:
#line 5115 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
    break;

  case 962:
#line 5116 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "storage"); }
    break;

  case 963:
#line 5117 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
    break;

  case 964:
#line 5121 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 965:
#line 5123 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 966:
#line 5128 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 967:
#line 5151 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 968:
#line 5171 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 969:
#line 5204 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 970:
#line 5206 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { char *s = strconcat((yyvsp[(1) - (2)].sval),(yyvsp[(2) - (2)].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
    break;

  case 971:
#line 5214 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 972:
#line 5221 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (3)].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 973:
#line 5226 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (4)].i_val));
  	  append_list(l, (yyvsp[(3) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 974:
#line 5240 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 976:
#line 5245 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[(2) - (2)].l)); }
    break;

  case 979:
#line 5256 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 980:
#line 5258 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 992:
#line 5280 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
    break;

  case 993:
#line 5288 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
    break;

  case 994:
#line 5296 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
    break;

  case 995:
#line 5306 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_list(l, (yyvsp[(5) - (7)].l));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
    break;

  case 996:
#line 5316 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 997:
#line 5318 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 998:
#line 5322 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 999:
#line 5326 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (6)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (6)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(6) - (6)].l)); }
    break;

  case 1000:
#line 5330 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1001:
#line 5334 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1002:
#line 5338 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1003:
#line 5342 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(2) - (2)].l)); }
    break;

  case 1005:
#line 5352 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1006:
#line 5356 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1007:
#line 5358 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1008:
#line 5368 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (2)].sval));
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1009:
#line 5375 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1010:
#line 5376 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1013:
#line 5389 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[(1) - (2)].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[(2) - (2)].i_val)); 	}
    break;

  case 1014:
#line 5396 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1015:
#line 5398 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1017:
#line 5406 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1018:
#line 5407 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 1019:
#line 5411 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1020:
#line 5412 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1021:
#line 5413 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1022:
#line 5414 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 1023:
#line 5415 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 1024:
#line 5422 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (7)].sym));
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_int(l, (yyvsp[(5) - (7)].i_val));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
    break;

  case 1025:
#line 5432 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1026:
#line 5433 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 1027:
#line 5438 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 1028:
#line 5440 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 1029:
#line 5445 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (2)].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[(2) - (2)].sval)); }
    break;

  case 1030:
#line 5450 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1031:
#line 5454 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1032:
#line 5455 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1033:
#line 5459 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1034:
#line 5466 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_int(l, (yyvsp[(3) - (6)].i_val) );
	  append_symbol(l, (yyvsp[(4) - (6)].sym));
	  append_int(l, (yyvsp[(5) - (6)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
    break;

  case 1035:
#line 5473 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1036:
#line 5474 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1037:
#line 5481 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_symbol(l, (yyvsp[(5) - (7)].sym));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
    break;

  case 1039:
#line 5493 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1040:
#line 5495 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1041:
#line 5506 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1056:
#line 5552 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
    break;

  case 1057:
#line 5563 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1059:
#line 5568 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1060:
#line 5572 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1061:
#line 5573 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1062:
#line 5577 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1063:
#line 5578 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1064:
#line 5579 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1065:
#line 5594 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1066:
#line 5598 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1067:
#line 5600 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1072:
#line 5623 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { char *s = strconcat("xmlns:", (yyvsp[(3) - (3)].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1073:
#line 5632 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1074:
#line 5636 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1104:
#line 5732 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 13634 "y.tab.c"
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


#line 5753 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"

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


