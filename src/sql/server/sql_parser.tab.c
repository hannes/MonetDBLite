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
     FWF = 558,
     INDEX = 559,
     AS = 560,
     TRIGGER = 561,
     OF = 562,
     BEFORE = 563,
     AFTER = 564,
     ROW = 565,
     STATEMENT = 566,
     sqlNEW = 567,
     OLD = 568,
     EACH = 569,
     REFERENCING = 570,
     OVER = 571,
     PARTITION = 572,
     CURRENT = 573,
     EXCLUDE = 574,
     FOLLOWING = 575,
     PRECEDING = 576,
     OTHERS = 577,
     TIES = 578,
     RANGE = 579,
     UNBOUNDED = 580
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
#define FWF 558
#define INDEX 559
#define AS 560
#define TRIGGER 561
#define OF 562
#define BEFORE 563
#define AFTER 564
#define ROW 565
#define STATEMENT 566
#define sqlNEW 567
#define OLD 568
#define EACH 569
#define REFERENCING 570
#define OVER 571
#define PARTITION 572
#define CURRENT 573
#define EXCLUDE 574
#define FOLLOWING 575
#define PRECEDING 576
#define OTHERS 577
#define TIES 578
#define RANGE 579
#define UNBOUNDED 580




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
#line 854 "y.tab.c"
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
#line 873 "y.tab.c"

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
#define YYLAST   16546

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  344
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  402
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1112
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2043

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   580

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   207,   193,     2,
     172,   173,   205,   191,   338,   192,   339,   206,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   340,     2,
       2,   176,     2,   343,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   341,     2,   342,   195,     2,     2,     2,     2,     2,
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
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337
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
    1423,  1424,  1427,  1431,  1432,  1433,  1437,  1452,  1466,  1475,
    1482,  1489,  1490,  1495,  1497,  1501,  1502,  1507,  1509,  1513,
    1514,  1518,  1520,  1524,  1526,  1529,  1530,  1534,  1540,  1548,
    1549,  1551,  1552,  1555,  1558,  1563,  1568,  1569,  1573,  1574,
    1576,  1577,  1580,  1581,  1584,  1586,  1590,  1592,  1596,  1601,
    1608,  1613,  1619,  1620,  1623,  1626,  1628,  1632,  1638,  1640,
    1644,  1646,  1650,  1652,  1654,  1656,  1658,  1660,  1661,  1663,
    1665,  1667,  1671,  1675,  1679,  1680,  1683,  1687,  1692,  1697,
    1702,  1707,  1713,  1719,  1721,  1724,  1726,  1728,  1730,  1732,
    1735,  1738,  1740,  1744,  1748,  1750,  1757,  1759,  1761,  1763,
    1768,  1775,  1781,  1783,  1787,  1789,  1795,  1801,  1807,  1811,
    1813,  1814,  1816,  1818,  1819,  1821,  1827,  1829,  1834,  1835,
    1838,  1840,  1844,  1846,  1849,  1852,  1854,  1856,  1859,  1861,
    1863,  1864,  1870,  1876,  1879,  1884,  1886,  1887,  1891,  1893,
    1897,  1898,  1901,  1905,  1907,  1911,  1913,  1914,  1918,  1919,
    1922,  1925,  1926,  1929,  1932,  1933,  1936,  1939,  1942,  1944,
    1948,  1951,  1952,  1954,  1956,  1958,  1960,  1962,  1964,  1966,
    1968,  1970,  1972,  1974,  1977,  1979,  1983,  1987,  1994,  2001,
    2002,  2004,  2006,  2010,  2014,  2018,  2022,  2024,  2028,  2033,
    2037,  2043,  2049,  2057,  2065,  2067,  2071,  2076,  2081,  2083,
    2085,  2087,  2090,  2092,  2096,  2100,  2104,  2108,  2113,  2117,
    2119,  2123,  2127,  2131,  2135,  2139,  2143,  2147,  2151,  2155,
    2159,  2163,  2167,  2171,  2175,  2179,  2183,  2187,  2191,  2196,
    2199,  2203,  2207,  2211,  2215,  2218,  2221,  2225,  2227,  2229,
    2231,  2233,  2235,  2237,  2239,  2241,  2243,  2245,  2250,  2252,
    2254,  2256,  2258,  2260,  2262,  2264,  2266,  2272,  2276,  2278,
    2282,  2283,  2287,  2288,  2292,  2293,  2297,  2299,  2301,  2303,
    2305,  2308,  2310,  2313,  2316,  2321,  2324,  2326,  2329,  2332,
    2333,  2337,  2340,  2343,  2347,  2350,  2354,  2359,  2361,  2365,
    2367,  2369,  2371,  2373,  2380,  2383,  2386,  2389,  2392,  2395,
    2396,  2399,  2408,  2417,  2424,  2431,  2438,  2442,  2451,  2453,
    2457,  2459,  2463,  2467,  2470,  2471,  2474,  2476,  2478,  2482,
    2484,  2488,  2490,  2494,  2499,  2506,  2512,  2518,  2523,  2530,
    2532,  2534,  2536,  2537,  2541,  2542,  2546,  2547,  2551,  2552,
    2554,  2558,  2562,  2564,  2566,  2568,  2570,  2572,  2574,  2576,
    2579,  2581,  2584,  2587,  2590,  2594,  2596,  2599,  2601,  2603,
    2605,  2607,  2609,  2611,  2613,  2615,  2617,  2620,  2625,  2630,
    2632,  2635,  2638,  2641,  2644,  2646,  2648,  2653,  2655,  2659,
    2665,  2667,  2671,  2677,  2684,  2691,  2693,  2700,  2705,  2711,
    2716,  2718,  2722,  2726,  2730,  2735,  2737,  2740,  2745,  2747,
    2750,  2751,  2754,  2756,  2758,  2760,  2762,  2764,  2766,  2768,
    2770,  2775,  2780,  2785,  2787,  2792,  2794,  2796,  2798,  2800,
    2802,  2804,  2809,  2816,  2818,  2823,  2830,  2832,  2835,  2837,
    2839,  2841,  2843,  2848,  2850,  2855,  2862,  2864,  2869,  2871,
    2876,  2883,  2885,  2887,  2889,  2891,  2893,  2895,  2898,  2900,
    2902,  2906,  2908,  2912,  2914,  2916,  2918,  2920,  2922,  2924,
    2926,  2928,  2930,  2932,  2934,  2936,  2938,  2940,  2942,  2944,
    2946,  2948,  2950,  2952,  2954,  2956,  2958,  2960,  2962,  2964,
    2966,  2968,  2970,  2972,  2974,  2976,  2978,  2980,  2982,  2984,
    2986,  2988,  2990,  2992,  2994,  2996,  2998,  3000,  3002,  3004,
    3006,  3008,  3010,  3012,  3014,  3016,  3018,  3020,  3022,  3024,
    3026,  3028,  3030,  3032,  3034,  3036,  3038,  3040,  3042,  3044,
    3046,  3048,  3050,  3052,  3054,  3056,  3058,  3060,  3062,  3064,
    3066,  3068,  3070,  3072,  3074,  3076,  3078,  3080,  3082,  3084,
    3086,  3088,  3090,  3092,  3096,  3098,  3100,  3102,  3104,  3107,
    3110,  3114,  3119,  3120,  3122,  3125,  3127,  3129,  3131,  3135,
    3137,  3139,  3141,  3143,  3145,  3147,  3149,  3151,  3153,  3155,
    3157,  3163,  3169,  3175,  3183,  3184,  3187,  3192,  3199,  3204,
    3207,  3212,  3215,  3217,  3222,  3224,  3228,  3231,  3232,  3235,
    3237,  3239,  3242,  3244,  3248,  3250,  3251,  3254,  3258,  3262,
    3266,  3270,  3275,  3283,  3284,  3287,  3289,  3293,  3296,  3298,
    3299,  3302,  3304,  3311,  3314,  3317,  3325,  3327,  3328,  3331,
    3340,  3342,  3343,  3347,  3349,  3351,  3355,  3357,  3359,  3362,
    3367,  3368,  3370,  3374,  3378,  3384,  3391,  3393,  3395,  3397,
    3399,  3400,  3403,  3406,  3411,  3413,  3417,  3419,  3421,  3423,
    3425,  3429,  3432,  3435,  3436,  3438,  3441,  3444,  3445,  3447,
    3453,  3455,  3457,  3461,  3465,  3467,  3469,  3470,  3473,  3475,
    3478,  3480,  3481,  3483,  3485,  3488,  3489,  3491,  3494,  3497,
    3500,  3502,  3504
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     345,     0,    -1,   355,   132,    -1,    -1,   245,   346,   355,
     132,    -1,    -1,   242,   347,   355,   132,    -1,    -1,   241,
     348,   355,   132,    -1,    -1,   243,   349,   345,    -1,    -1,
     244,   350,   345,    -1,   666,   132,    -1,    -1,   132,    -1,
       1,   132,    -1,    51,    -1,   228,    -1,   249,    -1,   271,
      -1,   236,    -1,   360,    -1,   369,    -1,   374,    -1,   391,
      -1,   489,    -1,   386,    -1,   357,    -1,   359,    -1,   239,
     634,   441,   565,   356,    -1,   454,    -1,    -1,   240,    -1,
     354,   358,    -1,   354,   403,    -1,   435,   651,    -1,   358,
     338,   435,   651,    -1,   353,   660,   176,   526,    -1,   353,
      63,   225,   660,    -1,   353,   270,   660,    -1,   353,   631,
     176,   660,    -1,   353,   257,   660,    -1,   353,   284,   293,
      58,    -1,   353,   284,   293,   633,    -1,   351,   270,   361,
     363,   668,   364,    -1,   352,   270,   634,   492,    -1,   660,
      -1,   225,   362,    -1,   660,   225,   362,    -1,   660,    -1,
      -1,   247,    20,   271,   660,    -1,    -1,   365,    -1,   366,
      -1,   365,   366,    -1,   369,    -1,   374,    -1,   391,    -1,
     489,    -1,   386,    -1,    -1,   171,   258,   368,    -1,    56,
      -1,    62,    -1,   255,   377,   278,   384,   371,   373,    -1,
     255,   370,   278,   384,   372,   373,    -1,   658,    -1,   370,
     338,   658,    -1,    -1,   171,   255,   263,    -1,    -1,   171,
     258,   263,    -1,    -1,   110,   368,    -1,   256,   375,   377,
     110,   384,   373,    -1,   256,   376,   370,   110,   384,   373,
      -1,    -1,   255,   263,   111,    -1,    -1,   258,   263,   111,
      -1,   378,    -1,   381,   262,   380,    -1,   379,    -1,   379,
     338,   379,    -1,   310,   110,    -1,   310,   259,    -1,   276,
     634,    -1,   634,    -1,   488,    -1,   188,   267,    -1,   188,
      -1,   382,    -1,   383,    -1,   382,   338,   383,    -1,    67,
      -1,    64,    -1,    65,   441,    -1,    66,   441,    -1,   269,
     441,    -1,   246,    -1,   385,    -1,   384,   338,   385,    -1,
     268,    -1,   658,    -1,   274,   276,   634,   275,   390,   410,
      -1,   274,   276,   634,   275,   276,   634,    -1,   274,   276,
     634,   274,   388,    -1,   274,   276,   634,   249,   389,    -1,
     274,   276,   634,   271,    87,    89,    -1,   274,   276,   634,
     271,    67,    89,    -1,   274,   276,   634,   271,    87,    88,
      -1,   274,    55,   660,   387,    -1,   274,    55,   660,   251,
     278,   660,    -1,   274,    55,   271,   401,   254,   665,    16,
     325,   254,   665,    -1,   171,   401,   254,   665,    -1,   271,
     270,   660,    -1,   171,   401,   254,   665,   271,   270,   660,
      -1,   390,   660,   271,   247,   420,    -1,   390,   660,   271,
     109,    -1,   390,   660,   271,   175,   109,    -1,   390,   660,
     249,   247,    -1,   390,   660,   271,    98,     3,    -1,   390,
     660,   271,    98,   109,    -1,   390,   660,   492,    -1,   227,
     660,   492,    -1,   276,   660,   492,    -1,   277,    -1,    -1,
     351,   400,    -1,   351,   403,    -1,   351,   437,    -1,   443,
      -1,   446,    -1,   398,    -1,   392,    -1,   475,    -1,   351,
     114,   634,   393,    -1,   352,   114,   634,    -1,   274,   114,
     634,   394,    -1,   395,    -1,   393,   395,    -1,   396,    -1,
     394,   396,    -1,   317,   651,    -1,    85,   171,   649,    -1,
     397,    -1,   317,   651,    -1,   116,    -1,   116,   171,   649,
      -1,   116,   171,   585,    -1,   397,    -1,   115,   103,   648,
      -1,   118,   648,    -1,   121,    -1,   117,   648,    -1,   120,
      -1,   125,   648,    -1,   119,    -1,   122,    -1,   351,   399,
     316,   660,   262,   634,   172,   435,   173,    -1,   279,    -1,
     102,    -1,   104,    -1,    -1,   257,   660,   367,    -1,    55,
     660,   171,   401,   254,   665,   235,   665,   270,   660,    -1,
      -1,   253,    -1,   252,    -1,    -1,    98,   660,     3,    -1,
     276,   634,   406,   402,    -1,   219,   276,   634,   406,    -1,
     220,   276,   634,   406,    -1,   222,   276,   634,   406,    -1,
     221,   276,   634,   406,   262,     3,    -1,   404,   276,   634,
     406,   405,    -1,   218,    -1,   217,    -1,    58,   218,    -1,
      58,   217,    -1,    17,   218,    -1,    17,   217,    -1,    -1,
     262,    76,    64,    84,    -1,   262,    76,    83,    84,    -1,
     262,    76,   249,    -1,   172,   409,   173,    -1,   407,    -1,
     441,   317,   438,   408,    -1,    -1,   171,    82,   170,    -1,
     171,   170,    -1,   411,    -1,   409,   338,   411,    -1,   413,
      -1,   424,    -1,   410,    -1,   416,    -1,   436,    -1,   129,
      -1,   130,    -1,   657,   651,   414,    -1,   657,   412,    -1,
      -1,   415,    -1,   418,    -1,   415,   418,    -1,   660,   171,
     264,   172,   417,   173,    -1,   418,    -1,   417,   338,   418,
      -1,   419,    -1,   421,    -1,   422,    -1,   247,   420,    -1,
     586,    -1,   425,   432,    -1,   126,   127,   317,   128,   423,
      -1,   131,    -1,    -1,   172,   393,   173,    -1,   425,   433,
      -1,    -1,   227,   660,    -1,    82,    41,    -1,    42,    -1,
      43,    -1,   271,   109,    -1,   271,   247,    -1,   262,    65,
     426,    -1,   262,    64,   426,    -1,    -1,   427,    -1,   428,
      -1,   428,   427,    -1,   427,   428,    -1,    -1,    70,    -1,
      39,    -1,    40,    -1,    -1,   112,   430,    -1,   175,   109,
      -1,   109,    -1,   279,    -1,   266,   261,    -1,   269,   634,
     441,   431,   429,    -1,   434,    -1,   279,   442,    -1,   266,
     261,   442,    -1,   250,   261,   442,   269,   634,   441,   431,
     429,    -1,   226,   172,   560,   173,    -1,   660,    -1,   435,
     338,   660,    -1,   181,   634,    -1,   281,   634,   441,   317,
     438,   440,    -1,   439,    -1,   172,   438,   173,    -1,   543,
      -1,   537,    -1,    -1,   171,   226,   263,    -1,    -1,   442,
      -1,   172,   435,   173,    -1,   351,   229,   634,   234,   235,
     660,    -1,   660,   339,   660,    -1,     4,    -1,   665,    -1,
     351,   231,   634,   172,   473,   173,   233,   472,   234,   235,
     444,    -1,   351,   231,   634,   172,   473,   173,   233,   472,
     447,    -1,   351,   231,   634,   172,   473,   173,   233,   472,
     238,     5,   445,    -1,   351,   164,   231,   634,   172,   473,
     173,   234,   235,   444,    -1,   351,   232,   634,   172,   473,
     173,   233,   472,   234,   235,   444,    -1,   351,   232,   634,
     172,   473,   173,   233,   472,   238,     5,   445,    -1,   351,
     230,   634,   172,   473,   173,   234,   235,   444,    -1,   351,
     230,   634,   172,   473,   173,   447,    -1,   450,    -1,   308,
     448,   450,   132,   309,    -1,   308,   307,   448,   450,   132,
     309,    -1,    -1,   448,   450,   132,    -1,    -1,   449,   451,
     132,    -1,   494,    -1,   493,    -1,   360,    -1,   369,    -1,
     374,    -1,   391,    -1,   489,    -1,   386,    -1,   357,    -1,
     359,    -1,   452,    -1,   542,    -1,   494,    -1,   493,    -1,
     369,    -1,   374,    -1,   357,    -1,   359,    -1,   452,    -1,
     542,    -1,   454,    -1,   453,    -1,   468,    -1,   466,    -1,
     460,    -1,   458,    -1,   237,   455,    -1,   237,   605,    -1,
     456,   172,   457,   173,    -1,   634,    -1,    -1,   587,    -1,
     457,   338,   587,    -1,   273,   459,    -1,   439,    -1,   560,
      -1,   276,   172,   439,   173,    -1,   297,   587,   462,   465,
     309,   297,    -1,   297,   464,   465,   309,   297,    -1,   298,
     587,   299,   448,    -1,   461,    -1,   462,   461,    -1,   298,
     560,   299,   448,    -1,   463,    -1,   464,   463,    -1,    -1,
     300,   448,    -1,   303,   560,   299,   448,   467,   309,   303,
      -1,    -1,   300,   448,    -1,   304,   560,   299,   448,   467,
      -1,   469,   305,   560,   306,   448,   309,   305,   470,    -1,
      -1,   660,   340,    -1,    -1,   660,    -1,   657,   651,    -1,
     471,   338,   657,   651,    -1,   276,   172,   471,   173,    -1,
     651,    -1,   474,    -1,   205,    -1,    -1,   474,   338,   660,
     651,    -1,   660,   651,    -1,   351,   318,   634,   476,   477,
     262,   660,   478,   483,    -1,   320,    -1,   321,    -1,    67,
      -1,    64,    -1,    65,    -1,    65,   319,   435,    -1,    -1,
     327,   479,    -1,   480,    -1,   479,   480,    -1,   325,   482,
     481,   660,    -1,   324,   482,   481,   660,    -1,   325,   276,
     481,   660,    -1,   324,   276,   481,   660,    -1,    -1,   317,
      -1,    -1,   322,    -1,   484,   486,   487,    -1,    -1,   111,
     326,   485,    -1,   322,    -1,   323,    -1,    -1,   298,   560,
      -1,   451,    -1,   308,   307,   449,   309,    -1,   231,   634,
     490,    -1,   164,   231,   634,   490,    -1,   232,   634,   490,
      -1,   230,   634,   490,    -1,   352,   276,   634,   492,    -1,
     352,   488,   492,    -1,   352,   188,   231,   634,   492,    -1,
     352,   188,   164,   231,   634,   492,    -1,   352,   188,   232,
     634,   492,    -1,   352,   188,   230,   634,   492,    -1,   352,
     281,   634,   492,    -1,   352,   229,   634,   492,    -1,   352,
     257,   660,    -1,   352,    55,   660,    -1,   352,   316,   634,
      -1,   352,   318,   634,    -1,    -1,   172,   491,   173,    -1,
     172,   173,    -1,   651,    -1,   651,   338,   491,    -1,    -1,
      43,    -1,    42,    -1,   494,    -1,   493,    -1,   518,    -1,
     520,    -1,   519,    -1,   503,    -1,   495,    -1,    76,   500,
     501,    -1,    78,   660,    -1,    79,    78,   660,    -1,    77,
     500,   501,   502,    -1,    85,    86,   496,    -1,   271,    58,
      86,   496,    -1,   271,    86,   496,    -1,    -1,   497,    -1,
     498,    -1,   497,   338,   498,    -1,    87,    89,    -1,    87,
      88,    -1,    90,    91,   499,    -1,    96,    97,   664,    -1,
      87,    92,    -1,    87,    93,    -1,    94,    87,    -1,    95,
      -1,    80,    -1,    -1,   189,    81,    -1,   189,    82,    81,
      -1,    -1,    -1,   278,    78,   660,    -1,   310,   511,   259,
     634,   441,   110,   516,   506,   509,   512,   513,   514,   515,
     504,    -1,   310,   511,   259,   634,   441,   110,   313,   506,
     509,   512,   513,   514,   515,    -1,   310,   511,    27,   259,
     634,   110,   516,   515,    -1,   310,   438,   259,   665,   509,
     512,    -1,   310,   438,   259,   314,   509,   512,    -1,    -1,
     315,   172,   505,   173,    -1,   649,    -1,   505,   338,   649,
      -1,    -1,   315,   172,   505,   173,    -1,   649,    -1,   505,
     338,   649,    -1,    -1,   172,   507,   173,    -1,   508,    -1,
     507,   338,   508,    -1,   660,    -1,   660,     3,    -1,    -1,
     510,   312,   665,    -1,   510,   312,   665,   338,   665,    -1,
     510,   312,   665,   338,   665,   338,   665,    -1,    -1,    16,
      -1,    -1,   649,   311,    -1,   295,   649,    -1,   649,   295,
     649,   311,    -1,   649,   311,   295,   649,    -1,    -1,   109,
     481,   665,    -1,    -1,    59,    -1,    -1,    60,    61,    -1,
      -1,    82,   227,    -1,   517,    -1,   172,   517,   173,    -1,
     665,    -1,   517,   338,   665,    -1,    64,   110,   634,   532,
      -1,    65,   634,   271,   530,   551,   532,    -1,    67,   259,
     634,   521,    -1,    67,   259,   634,   442,   521,    -1,    -1,
     247,   280,    -1,   280,   522,    -1,   439,    -1,   172,   523,
     173,    -1,   522,   338,   172,   523,   173,    -1,   527,    -1,
     523,   338,   527,    -1,   528,    -1,   524,   338,   528,    -1,
     109,    -1,   587,    -1,   526,    -1,   526,    -1,   546,    -1,
      -1,   188,    -1,   248,    -1,   531,    -1,   530,   338,   531,
      -1,   657,   176,   560,    -1,   442,   176,   585,    -1,    -1,
     282,   560,    -1,   172,   533,   173,    -1,   554,    73,    74,
     554,    -1,   554,   165,   554,   536,    -1,   554,    74,   554,
     536,    -1,   554,    72,    74,   554,    -1,   554,   534,    74,
     554,   536,    -1,   554,    72,   534,    74,   554,    -1,    75,
      -1,   535,    71,    -1,   535,    -1,    68,    -1,    69,    -1,
      70,    -1,   262,   560,    -1,    16,   442,    -1,   537,    -1,
     171,   538,   540,    -1,   538,   338,   539,    -1,   539,    -1,
     660,   441,   317,   172,   540,   173,    -1,   543,    -1,   542,
      -1,   543,    -1,    66,   529,   549,   550,    -1,    66,   529,
     549,   259,   544,   550,    -1,   546,   562,   563,   564,   565,
      -1,   545,    -1,   544,   338,   545,    -1,   660,    -1,   546,
     169,   547,   548,   546,    -1,   546,   168,   547,   548,   546,
      -1,   546,   167,   547,   548,   546,    -1,   172,   546,   173,
      -1,   541,    -1,    -1,   188,    -1,   248,    -1,    -1,   166,
      -1,   166,   103,   172,   558,   173,    -1,   611,    -1,   551,
     532,   557,   559,    -1,    -1,   110,   552,    -1,   554,    -1,
     552,   338,   554,    -1,   634,    -1,   634,   556,    -1,   605,
     556,    -1,   605,    -1,   553,    -1,   585,   556,    -1,   585,
      -1,   533,    -1,    -1,   341,   555,   546,   342,   556,    -1,
     317,   660,   172,   662,   173,    -1,   317,   660,    -1,   660,
     172,   662,   173,    -1,   660,    -1,    -1,   108,   103,   558,
      -1,   635,    -1,   558,   338,   635,    -1,    -1,   107,   560,
      -1,   561,   178,   560,    -1,   561,    -1,   570,   189,   561,
      -1,   570,    -1,    -1,   101,   103,   566,    -1,    -1,   294,
     648,    -1,   294,   589,    -1,    -1,   295,   649,    -1,   295,
     589,    -1,    -1,   296,   649,    -1,   296,    14,    -1,   296,
     589,    -1,   567,    -1,   566,   338,   567,    -1,   587,   568,
      -1,    -1,   223,    -1,   224,    -1,   571,    -1,   572,    -1,
     574,    -1,   576,    -1,   577,    -1,   579,    -1,   581,    -1,
     584,    -1,   587,    -1,   175,   570,    -1,   569,    -1,   570,
     190,   570,    -1,   570,   176,   570,    -1,   570,   186,   573,
     570,   189,   570,    -1,   570,   185,   573,   570,   189,   570,
      -1,    -1,    99,    -1,   100,    -1,   570,   182,   575,    -1,
     570,   180,   575,    -1,   570,   181,   575,    -1,   570,   179,
     575,    -1,   587,    -1,   587,   106,   665,    -1,   587,   260,
     175,   109,    -1,   587,   260,   109,    -1,   570,   184,   172,
     524,   173,    -1,   570,   183,   172,   524,   173,    -1,   172,
     578,   173,   184,   172,   524,   173,    -1,   172,   578,   173,
     183,   172,   524,   173,    -1,   570,    -1,   578,   338,   570,
      -1,   570,   190,   580,   585,    -1,   570,   176,   580,   570,
      -1,   187,    -1,   177,    -1,   188,    -1,   105,   585,    -1,
     570,    -1,   582,   338,   570,    -1,   341,   582,   342,    -1,
     583,   634,   583,    -1,   172,   546,   173,    -1,   172,   280,
     522,   173,    -1,   172,   537,   173,    -1,   588,    -1,   587,
     191,   587,    -1,   587,   192,   587,    -1,   587,   205,   587,
      -1,   587,   206,   587,    -1,   587,   207,   587,    -1,   587,
     195,   587,    -1,   587,   193,   587,    -1,   587,   212,   587,
      -1,   587,   209,   587,    -1,   587,   216,   587,    -1,   587,
     210,   587,    -1,   587,   215,   587,    -1,   587,   211,   587,
      -1,   587,   214,   587,    -1,   587,   213,   587,    -1,   587,
     133,   587,    -1,   587,   194,   587,    -1,   587,   208,   587,
      -1,   587,   208,   176,   587,    -1,   208,   587,    -1,   587,
     203,   587,    -1,   587,   202,   587,    -1,   587,   201,   587,
      -1,   587,   200,   587,    -1,   191,   587,    -1,   192,   587,
      -1,   172,   560,   173,    -1,   586,    -1,   585,    -1,   614,
      -1,   631,    -1,    62,    -1,   590,    -1,   635,    -1,   604,
      -1,   618,    -1,   605,    -1,   123,   124,   111,   634,    -1,
     608,    -1,   610,    -1,   638,    -1,   636,    -1,   674,    -1,
     589,    -1,   525,    -1,   343,    -1,   591,   328,   172,   592,
     173,    -1,   615,   172,   173,    -1,   618,    -1,   593,   594,
     595,    -1,    -1,   329,   103,   558,    -1,    -1,   101,   103,
     566,    -1,    -1,   596,   597,   603,    -1,    84,    -1,   336,
      -1,   598,    -1,   600,    -1,   337,   333,    -1,   599,    -1,
     330,   322,    -1,   588,   333,    -1,   185,   598,   189,   601,
      -1,   337,   332,    -1,   602,    -1,   330,   322,    -1,   588,
     333,    -1,    -1,   331,   330,   322,    -1,   331,   108,    -1,
     331,   335,    -1,   331,    82,   334,    -1,   133,   660,    -1,
     606,   172,   173,    -1,   606,   172,   639,   173,    -1,   607,
      -1,   660,   339,   607,    -1,   660,    -1,    68,    -1,    69,
      -1,    67,    -1,   113,   172,   625,   110,   587,   173,    -1,
      46,   609,    -1,    48,   609,    -1,    47,   609,    -1,    50,
     609,    -1,    49,   609,    -1,    -1,   172,   173,    -1,   198,
     172,   587,   110,   587,   111,   587,   173,    -1,   198,   172,
     587,   338,   587,   338,   587,   173,    -1,   198,   172,   587,
     110,   587,   173,    -1,   198,   172,   587,   338,   587,   173,
      -1,   197,   172,   587,   183,   587,   173,    -1,   587,   199,
     587,    -1,   196,   172,   587,   338,   587,   338,   587,   173,
      -1,   612,    -1,   611,   338,   612,    -1,   205,    -1,   660,
     339,   205,    -1,   605,   339,   205,    -1,   560,   613,    -1,
      -1,   317,   660,    -1,   632,    -1,    10,    -1,   660,   339,
      10,    -1,     8,    -1,   660,   339,     8,    -1,     9,    -1,
     660,   339,     9,    -1,   616,   172,   205,   173,    -1,   616,
     172,   660,   339,   205,   173,    -1,   616,   172,   248,   646,
     173,    -1,   616,   172,   188,   646,   173,    -1,   616,   172,
     646,   173,    -1,   617,   172,   646,   338,   646,   173,    -1,
     745,    -1,   191,    -1,   192,    -1,    -1,   171,   284,   293,
      -1,    -1,   172,   664,   173,    -1,    -1,   172,   664,   173,
      -1,    -1,   283,    -1,   284,   621,   620,    -1,   285,   622,
     620,    -1,   287,    -1,   288,    -1,   289,    -1,   290,    -1,
     291,    -1,   624,    -1,   292,    -1,   624,   621,    -1,   624,
      -1,   292,   622,    -1,   624,   621,    -1,   292,   622,    -1,
     626,   278,   627,    -1,   628,    -1,   286,   629,    -1,    55,
      -1,    57,    -1,    56,    -1,   665,    -1,    13,    -1,    12,
      -1,    11,    -1,    14,    -1,    15,    -1,   283,   665,    -1,
     284,   621,   620,   665,    -1,   285,   622,   620,   665,    -1,
     633,    -1,   656,   665,    -1,     6,   665,    -1,   653,   665,
      -1,     5,   665,    -1,    44,    -1,    45,    -1,   286,   619,
     665,   629,    -1,   660,    -1,   660,   339,   660,    -1,   660,
     339,   660,   339,   660,    -1,   660,    -1,   660,   339,   660,
      -1,   660,   339,   660,   339,   660,    -1,    18,   172,   637,
     317,   651,   173,    -1,    19,   172,   637,   338,   651,   173,
      -1,   560,    -1,   301,   172,   587,   338,   587,   173,    -1,
     302,   172,   640,   173,    -1,   297,   587,   642,   645,   309,
      -1,   297,   644,   645,   309,    -1,   526,    -1,   639,   338,
     526,    -1,   526,   338,   526,    -1,   640,   338,   526,    -1,
     298,   587,   299,   526,    -1,   641,    -1,   642,   641,    -1,
     298,   560,   299,   526,    -1,   643,    -1,   644,   643,    -1,
      -1,   300,   587,    -1,   587,    -1,   664,    -1,   663,    -1,
     663,    -1,   664,    -1,    20,    -1,   654,    -1,   655,    -1,
      20,   172,   647,   173,    -1,   654,   172,   647,   173,    -1,
     655,   172,   647,   173,    -1,   656,    -1,   656,   172,   647,
     173,    -1,    31,    -1,    32,    -1,    35,    -1,    33,    -1,
      34,    -1,    29,    -1,    29,   172,   647,   173,    -1,    29,
     172,   647,   338,   650,   173,    -1,    30,    -1,    30,   172,
     647,   173,    -1,    30,   172,   664,   338,   664,   173,    -1,
      36,    -1,    36,    38,    -1,    37,    -1,   623,    -1,   630,
      -1,     6,    -1,     6,   172,   647,   173,    -1,   653,    -1,
     653,   172,   647,   173,    -1,   653,   172,   664,   338,   664,
     173,    -1,     5,    -1,     5,   172,   647,   173,    -1,    52,
      -1,    52,   172,   652,   173,    -1,    52,   172,   652,   338,
     664,   173,    -1,    54,    -1,    53,    -1,    53,    -1,   665,
      -1,     7,    -1,    24,    -1,    20,    21,    -1,    25,    -1,
      26,    -1,    20,    22,    23,    -1,    28,    -1,    27,    22,
      23,    -1,   660,    -1,   659,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,     5,    -1,
       6,    -1,   174,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,   661,    -1,    22,    -1,   235,    -1,    23,    -1,
     254,    -1,   265,    -1,    38,    -1,   267,    -1,   257,    -1,
      97,    -1,   229,    -1,    79,    -1,   124,    -1,   293,    -1,
      41,    -1,   317,    -1,   225,    -1,   277,    -1,   119,    -1,
     248,    -1,   115,    -1,   117,    -1,   118,    -1,   242,    -1,
     270,    -1,    85,    -1,   323,    -1,   276,    -1,   125,    -1,
     170,    -1,    96,    -1,   112,    -1,   264,    -1,   322,    -1,
     261,    -1,   238,    -1,    91,    -1,    63,    -1,   283,    -1,
     284,    -1,   285,    -1,   286,    -1,   104,    -1,   245,    -1,
     246,    -1,   241,    -1,   243,    -1,   244,    -1,    26,    -1,
     272,    -1,    82,    -1,   141,    -1,   142,    -1,   145,    -1,
     147,    -1,   148,    -1,   149,    -1,   150,    -1,   151,    -1,
     152,    -1,   153,    -1,   155,    -1,   157,    -1,   158,    -1,
     159,    -1,   160,    -1,   162,    -1,   164,    -1,   218,    -1,
     217,    -1,   239,    -1,   240,    -1,    98,    -1,    52,    -1,
     660,    -1,   662,   338,   660,    -1,    11,    -1,    11,    -1,
       5,    -1,     3,    -1,     3,   665,    -1,   246,   667,    -1,
     664,   172,   173,    -1,   664,   172,   524,   173,    -1,    -1,
     669,    -1,   265,   670,    -1,   662,    -1,   673,    -1,   671,
      -1,   672,   338,   671,    -1,   587,    -1,   675,    -1,   676,
      -1,   677,    -1,   678,    -1,   692,    -1,   699,    -1,   701,
      -1,   704,    -1,   714,    -1,   715,    -1,   134,   172,   588,
     718,   173,    -1,   135,   172,   672,   718,   173,    -1,   136,
     172,   671,   718,   173,    -1,   137,   172,   235,   680,   679,
     718,   173,    -1,    -1,   338,   719,    -1,   338,   719,   338,
     681,    -1,   338,   719,   338,   681,   338,   687,    -1,   338,
     719,   338,   687,    -1,   338,   681,    -1,   338,   681,   338,
     687,    -1,   338,   687,    -1,   660,    -1,   138,   172,   682,
     173,    -1,   683,    -1,   682,   338,   683,    -1,   685,   684,
      -1,    -1,   317,   686,    -1,   587,    -1,   660,    -1,   688,
     690,    -1,   689,    -1,   688,   338,   689,    -1,   587,    -1,
      -1,   263,   691,    -1,   109,   262,   109,    -1,   150,   262,
     109,    -1,   149,   262,   109,    -1,   147,   262,   109,    -1,
     147,   262,    82,   153,    -1,   139,   172,   693,   694,   690,
     718,   173,    -1,    -1,   719,   338,    -1,   695,    -1,   694,
     338,   695,    -1,   696,   697,    -1,   587,    -1,    -1,   317,
     698,    -1,   660,    -1,   140,   172,   717,   588,   700,   173,
      -1,    83,   142,    -1,   141,   142,    -1,   143,   172,   235,
     702,   703,   718,   173,    -1,   660,    -1,    -1,   338,   588,
      -1,   144,   172,   705,   706,   718,   712,   713,   173,    -1,
       3,    -1,    -1,   145,   707,   708,    -1,   727,    -1,   709,
      -1,   708,   338,   709,    -1,   710,    -1,   711,    -1,   588,
     726,    -1,   588,   317,   660,   726,    -1,    -1,   727,    -1,
     109,   262,   150,    -1,   150,   262,   150,    -1,   146,   172,
     588,   718,   173,    -1,   156,   172,   716,   671,   728,   173,
      -1,   717,    -1,   114,    -1,   151,    -1,   153,    -1,    -1,
     157,   153,    -1,   157,   114,    -1,   154,   172,   720,   173,
      -1,   721,    -1,   720,   338,   721,    -1,   724,    -1,   725,
      -1,   660,    -1,   587,    -1,   723,   317,   722,    -1,   247,
     723,    -1,    82,   247,    -1,    -1,   727,    -1,   103,   148,
      -1,   103,   124,    -1,    -1,   729,    -1,   160,   278,   161,
     730,   738,    -1,   731,    -1,   736,    -1,   162,   732,   734,
      -1,    82,   155,   734,    -1,   733,    -1,     3,    -1,    -1,
     158,   735,    -1,   733,    -1,   159,   737,    -1,   660,    -1,
      -1,   739,    -1,   741,    -1,   742,   740,    -1,    -1,   741,
      -1,   152,   744,    -1,    82,   155,    -1,   155,   743,    -1,
     733,    -1,   660,    -1,   163,   172,   671,   562,   718,   173,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   614,   614,   625,   625,   639,   639,   654,   654,   669,
     669,   679,   679,   685,   686,   687,   688,   689,   694,   697,
     700,   703,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   722,   726,   727,   731,   733,   737,   742,   750,   755,
     763,   771,   779,   787,   793,   801,   809,   817,   821,   825,
     832,   835,   836,   840,   841,   845,   846,   850,   850,   850,
     850,   850,   853,   854,   858,   859,   863,   872,   883,   884,
     889,   890,   894,   895,   900,   901,   905,   913,   923,   924,
     928,   929,   933,   937,   944,   945,   950,   951,   955,   956,
     957,   968,   969,   970,   974,   975,   980,   981,   982,   983,
     984,   985,   989,   990,   995,   996,  1002,  1008,  1013,  1018,
    1023,  1028,  1033,  1038,  1043,  1048,  1061,  1067,  1073,  1083,
    1088,  1092,  1096,  1098,  1106,  1114,  1119,  1124,  1132,  1133,
    1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,  1160,  1171,
    1188,  1198,  1199,  1203,  1204,  1208,  1209,  1210,  1214,  1215,
    1216,  1217,  1218,  1222,  1223,  1224,  1225,  1226,  1227,  1228,
    1229,  1236,  1246,  1247,  1248,  1249,  1269,  1274,  1285,  1286,
    1287,  1291,  1292,  1296,  1307,  1317,  1327,  1340,  1350,  1365,
    1366,  1367,  1368,  1369,  1370,  1374,  1375,  1376,  1377,  1381,
    1382,  1386,  1396,  1397,  1398,  1402,  1404,  1408,  1408,  1409,
    1409,  1409,  1412,  1413,  1417,  1425,  1478,  1479,  1483,  1485,
    1490,  1499,  1501,  1505,  1505,  1505,  1508,  1512,  1516,  1525,
    1554,  1592,  1593,  1598,  1609,  1610,  1614,  1615,  1616,  1617,
    1618,  1622,  1626,  1630,  1631,  1632,  1633,  1634,  1638,  1639,
    1640,  1641,  1645,  1646,  1650,  1651,  1652,  1653,  1654,  1664,
    1668,  1670,  1672,  1687,  1691,  1693,  1698,  1702,  1714,  1715,
    1719,  1720,  1724,  1725,  1729,  1730,  1734,  1738,  1746,  1751,
    1752,  1756,  1769,  1782,  1813,  1826,  1839,  1871,  1883,  1898,
    1900,  1904,  1922,  1923,  1928,  1929,  1934,  1935,  1936,  1937,
    1938,  1939,  1940,  1941,  1942,  1943,  1944,  1945,  1949,  1950,
    1951,  1952,  1953,  1954,  1955,  1956,  1960,  1961,  1962,  1963,
    1964,  1965,  1978,  1982,  1986,  1995,  1998,  1999,  2000,  2006,
    2010,  2011,  2012,  2017,  2023,  2031,  2039,  2041,  2046,  2054,
    2056,  2061,  2062,  2069,  2083,  2084,  2086,  2097,  2118,  2119,
    2123,  2124,  2129,  2133,  2141,  2143,  2148,  2149,  2153,  2157,
    2162,  2211,  2225,  2226,  2230,  2231,  2232,  2233,  2237,  2238,
    2242,  2243,  2249,  2250,  2251,  2252,  2255,  2257,  2260,  2262,
    2266,  2274,  2275,  2279,  2280,  2284,  2285,  2289,  2291,  2297,
    2303,  2309,  2315,  2324,  2329,  2334,  2342,  2350,  2358,  2366,
    2371,  2376,  2377,  2378,  2379,  2383,  2384,  2385,  2389,  2392,
    2397,  2398,  2399,  2404,  2405,  2410,  2411,  2412,  2413,  2417,
    2424,  2426,  2428,  2430,  2434,  2436,  2438,  2443,  2444,  2448,
    2450,  2456,  2457,  2458,  2459,  2463,  2464,  2465,  2466,  2470,
    2471,  2475,  2476,  2477,  2481,  2482,  2486,  2500,  2514,  2524,
    2531,  2543,  2544,  2549,  2550,  2555,  2556,  2561,  2562,  2567,
    2568,  2572,  2573,  2577,  2581,  2590,  2594,  2599,  2604,  2613,
    2614,  2618,  2619,  2620,  2621,  2623,  2628,  2629,  2633,  2634,
    2638,  2639,  2643,  2644,  2648,  2649,  2653,  2654,  2659,  2668,
    2710,  2718,  2729,  2730,  2732,  2734,  2739,  2740,  2745,  2746,
    2751,  2752,  2757,  2774,  2778,  2782,  2783,  2787,  2788,  2789,
    2793,  2794,  2799,  2804,  2812,  2813,  2819,  2821,  2827,  2835,
    2843,  2851,  2859,  2870,  2871,  2872,  2876,  2877,  2878,  2882,
    2883,  2903,  2907,  2917,  2918,  2922,  2934,  2939,  2941,  2945,
    2956,  2967,  2998,  2999,  3004,  3008,  3017,  3026,  3034,  3035,
    3039,  3040,  3041,  3046,  3047,  3049,  3054,  3058,  3068,  3069,
    3073,  3074,  3079,  3083,  3087,  3091,  3098,  3099,  3109,  3114,
    3124,  3123,  3136,  3141,  3146,  3151,  3159,  3160,  3164,  3166,
    3172,  3173,  3178,  3183,  3187,  3192,  3196,  3197,  3202,  3203,
    3207,  3211,  3212,  3216,  3220,  3221,  3225,  3229,  3233,  3234,
    3239,  3248,  3249,  3250,  3254,  3255,  3256,  3257,  3258,  3259,
    3260,  3261,  3262,  3266,  3283,  3287,  3294,  3304,  3311,  3321,
    3322,  3323,  3327,  3334,  3341,  3348,  3358,  3362,  3380,  3381,
    3385,  3391,  3397,  3402,  3410,  3412,  3417,  3425,  3435,  3436,
    3437,  3441,  3445,  3446,  3450,  3454,  3463,  3464,  3466,  3472,
    3473,  3480,  3487,  3494,  3501,  3508,  3515,  3522,  3529,  3536,
    3543,  3550,  3556,  3563,  3570,  3577,  3584,  3591,  3598,  3605,
    3611,  3618,  3625,  3632,  3639,  3641,  3666,  3670,  3671,  3675,
    3676,  3678,  3680,  3681,  3682,  3683,  3684,  3685,  3686,  3687,
    3688,  3689,  3690,  3691,  3692,  3696,  3766,  3772,  3773,  3777,
    3782,  3783,  3788,  3789,  3794,  3795,  3800,  3801,  3805,  3806,
    3810,  3811,  3812,  3816,  3820,  3825,  3826,  3827,  3831,  3835,
    3836,  3837,  3838,  3839,  3843,  3847,  3851,  3879,  3880,  3885,
    3886,  3887,  3888,  3892,  3899,  3904,  3909,  3914,  3919,  3927,
    3928,  3932,  3942,  3952,  3959,  3966,  3973,  3980,  3993,  3994,
    3999,  4004,  4009,  4014,  4022,  4023,  4027,  4049,  4050,  4055,
    4056,  4061,  4062,  4068,  4074,  4080,  4086,  4092,  4098,  4105,
    4109,  4110,  4111,  4115,  4116,  4127,  4129,  4133,  4135,  4139,
    4140,  4146,  4155,  4156,  4157,  4158,  4159,  4163,  4164,  4168,
    4174,  4177,  4183,  4186,  4192,  4195,  4200,  4220,  4221,  4222,
    4226,  4232,  4296,  4327,  4388,  4427,  4444,  4460,  4476,  4492,
    4493,  4510,  4527,  4544,  4565,  4569,  4576,  4621,  4622,  4626,
    4637,  4640,  4644,  4652,  4658,  4666,  4670,  4675,  4677,  4683,
    4691,  4693,  4698,  4702,  4708,  4716,  4718,  4723,  4731,  4733,
    4738,  4739,  4743,  4748,  4759,  4770,  4780,  4790,  4792,  4797,
    4798,  4800,  4802,  4811,  4812,  4821,  4822,  4823,  4824,  4825,
    4827,  4828,  4841,  4859,  4860,  4874,  4894,  4895,  4896,  4897,
    4898,  4899,  4900,  4902,  4903,  4905,  4917,  4931,  4945,  4948,
    4963,  4978,  4981,  5001,  5013,  5028,  5043,  5044,  5048,  5049,
    5050,  5053,  5054,  5057,  5059,  5062,  5063,  5064,  5065,  5066,
    5067,  5071,  5072,  5073,  5074,  5075,  5076,  5077,  5078,  5082,
    5083,  5084,  5085,  5086,  5087,  5088,  5089,  5090,  5091,  5092,
    5093,  5094,  5096,  5097,  5098,  5099,  5100,  5101,  5102,  5103,
    5104,  5105,  5106,  5107,  5108,  5109,  5111,  5112,  5113,  5114,
    5115,  5116,  5117,  5118,  5119,  5120,  5121,  5122,  5123,  5124,
    5125,  5127,  5128,  5129,  5130,  5131,  5132,  5133,  5134,  5136,
    5137,  5138,  5139,  5140,  5141,  5142,  5143,  5144,  5145,  5146,
    5147,  5148,  5149,  5150,  5151,  5152,  5153,  5154,  5155,  5156,
    5157,  5158,  5162,  5163,  5168,  5191,  5212,  5244,  5246,  5254,
    5261,  5266,  5281,  5282,  5286,  5289,  5292,  5296,  5298,  5303,
    5307,  5308,  5309,  5310,  5311,  5312,  5313,  5314,  5315,  5316,
    5320,  5328,  5336,  5343,  5357,  5358,  5362,  5366,  5370,  5374,
    5378,  5382,  5389,  5393,  5397,  5398,  5408,  5416,  5417,  5421,
    5425,  5429,  5436,  5438,  5443,  5447,  5448,  5452,  5453,  5454,
    5455,  5456,  5460,  5473,  5474,  5478,  5480,  5485,  5491,  5495,
    5496,  5500,  5505,  5514,  5515,  5519,  5530,  5534,  5535,  5540,
    5550,  5553,  5555,  5559,  5563,  5564,  5568,  5569,  5573,  5577,
    5580,  5582,  5586,  5587,  5591,  5599,  5608,  5609,  5613,  5614,
    5618,  5619,  5620,  5635,  5639,  5640,  5650,  5651,  5655,  5659,
    5663,  5673,  5677,  5680,  5682,  5686,  5687,  5690,  5692,  5696,
    5701,  5702,  5706,  5707,  5711,  5715,  5718,  5720,  5724,  5728,
    5732,  5735,  5737,  5741,  5742,  5746,  5748,  5752,  5756,  5757,
    5761,  5765,  5769
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
  "FWF", "INDEX", "AS", "TRIGGER", "OF", "BEFORE", "AFTER", "ROW",
  "STATEMENT", "sqlNEW", "OLD", "EACH", "REFERENCING", "OVER", "PARTITION",
  "CURRENT", "EXCLUDE", "FOLLOWING", "PRECEDING", "OTHERS", "TIES",
  "RANGE", "UNBOUNDED", "','", "'.'", "':'", "'['", "']'", "'?'",
  "$accept", "sqlstmt", "@1", "@2", "@3", "@4", "@5", "create", "drop",
  "set", "declare", "sql", "opt_minmax", "declare_statement",
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
  "@6", "table_name", "opt_group_by_clause", "column_ref_commalist",
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
     573,   574,   575,   576,   577,   578,   579,   580,    44,    46,
      58,    91,    93,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   344,   345,   346,   345,   347,   345,   348,   345,   349,
     345,   350,   345,   345,   345,   345,   345,   345,   351,   352,
     353,   354,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   356,   356,   357,   357,   358,   358,   359,   359,
     359,   359,   359,   359,   359,   360,   360,   361,   361,   361,
     362,   363,   363,   364,   364,   365,   365,   366,   366,   366,
     366,   366,   367,   367,   368,   368,   369,   369,   370,   370,
     371,   371,   372,   372,   373,   373,   374,   374,   375,   375,
     376,   376,   377,   377,   378,   378,   379,   379,   380,   380,
     380,   381,   381,   381,   382,   382,   383,   383,   383,   383,
     383,   383,   384,   384,   385,   385,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   387,   387,   387,   388,
     388,   388,   388,   388,   388,   389,   389,   389,   390,   390,
     391,   391,   391,   391,   391,   391,   391,   391,   392,   392,
     392,   393,   393,   394,   394,   395,   395,   395,   396,   396,
     396,   396,   396,   397,   397,   397,   397,   397,   397,   397,
     397,   398,   399,   399,   399,   399,   400,   400,   401,   401,
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
     445,   446,   446,   446,   446,   446,   446,   446,   446,   447,
     447,   447,   448,   448,   449,   449,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   451,   451,
     451,   451,   451,   451,   451,   451,   452,   452,   452,   452,
     452,   452,   453,   454,   455,   456,   457,   457,   457,   458,
     459,   459,   459,   460,   460,   461,   462,   462,   463,   464,
     464,   465,   465,   466,   467,   467,   467,   468,   469,   469,
     470,   470,   471,   471,   472,   472,   473,   473,   473,   474,
     474,   475,   476,   476,   477,   477,   477,   477,   478,   478,
     479,   479,   480,   480,   480,   480,   481,   481,   482,   482,
     483,   484,   484,   485,   485,   486,   486,   487,   487,   488,
     488,   488,   488,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   490,   490,   490,   491,   491,
     492,   492,   492,   355,   355,   493,   493,   493,   493,   494,
     495,   495,   495,   495,   495,   495,   495,   496,   496,   497,
     497,   498,   498,   498,   498,   499,   499,   499,   499,   500,
     500,   501,   501,   501,   502,   502,   503,   503,   503,   503,
     503,   504,   504,   505,   505,   504,   504,   505,   505,   506,
     506,   507,   507,   508,   508,   509,   509,   509,   509,   510,
     510,   511,   511,   511,   511,   511,   512,   512,   513,   513,
     514,   514,   515,   515,   516,   516,   517,   517,   518,   519,
     520,   520,   521,   521,   521,   521,   522,   522,   523,   523,
     524,   524,   525,   526,   527,   528,   528,   529,   529,   529,
     530,   530,   531,   531,   532,   532,   533,   533,   533,   533,
     533,   533,   533,   534,   534,   534,   535,   535,   535,   536,
     536,   355,   537,   538,   538,   539,   540,   355,   355,   541,
     542,   543,   544,   544,   545,   546,   546,   546,   546,   546,
     547,   547,   547,   548,   548,   548,   549,   550,   551,   551,
     552,   552,   553,   553,   553,   553,   554,   554,   554,   554,
     555,   554,   556,   556,   556,   556,   557,   557,   558,   558,
     559,   559,   560,   560,   561,   561,   562,   562,   563,   563,
     563,   564,   564,   564,   565,   565,   565,   565,   566,   566,
     567,   568,   568,   568,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   570,   570,   571,   571,   572,   572,   573,
     573,   573,   574,   574,   574,   574,   575,   575,   576,   576,
     577,   577,   577,   577,   578,   578,   579,   579,   580,   580,
     580,   581,   582,   582,   583,   584,   585,   585,   585,   586,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   586,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   586,
     586,   586,   586,   586,   586,   586,   586,   587,   587,   588,
     588,   588,   588,   588,   588,   588,   588,   588,   588,   588,
     588,   588,   588,   588,   588,   589,   590,   591,   591,   592,
     593,   593,   594,   594,   595,   595,   596,   596,   597,   597,
     598,   598,   598,   599,   600,   601,   601,   601,   602,   603,
     603,   603,   603,   603,   604,   605,   605,   606,   606,   607,
     607,   607,   607,   608,   608,   608,   608,   608,   608,   609,
     609,   610,   610,   610,   610,   610,   610,   610,   611,   611,
     612,   612,   612,   612,   613,   613,   614,   615,   615,   616,
     616,   617,   617,   618,   618,   618,   618,   618,   618,   618,
     619,   619,   619,   620,   620,   621,   621,   622,   622,   623,
     623,   623,   624,   624,   624,   624,   624,   625,   625,   626,
     627,   627,   628,   628,   629,   629,   630,   631,   631,   631,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   633,   634,   634,   634,
     635,   635,   635,   636,   636,   637,   638,   638,   638,   638,
     639,   639,   640,   640,   641,   642,   642,   643,   644,   644,
     645,   645,   646,   647,   648,   649,   650,   651,   651,   651,
     651,   651,   651,   651,   651,   651,   651,   651,   651,   651,
     651,   651,   651,   651,   651,   651,   651,   651,   651,   651,
     651,   651,   651,   651,   651,   651,   651,   651,   651,   651,
     651,   651,   651,   652,   652,   653,   654,   654,   655,   655,
     655,   656,   656,   657,   658,   659,   659,   659,   659,   659,
     659,   660,   660,   660,   660,   660,   660,   660,   660,   661,
     661,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   662,   662,   663,   664,   664,   665,   665,   666,
     667,   667,   668,   668,   669,   670,   671,   672,   672,   673,
     674,   674,   674,   674,   674,   674,   674,   674,   674,   674,
     675,   676,   677,   678,   679,   679,   679,   679,   679,   679,
     679,   679,   680,   681,   682,   682,   683,   684,   684,   685,
     686,   687,   688,   688,   689,   690,   690,   691,   691,   691,
     691,   691,   692,   693,   693,   694,   694,   695,   696,   697,
     697,   698,   699,   700,   700,   701,   702,   703,   703,   704,
     705,   706,   706,   707,   708,   708,   709,   709,   710,   711,
     712,   712,   713,   713,   714,   715,   716,   716,   717,   717,
     718,   718,   718,   719,   720,   720,   721,   721,   722,   723,
     724,   725,   725,   726,   726,   727,   727,   728,   728,   729,
     730,   730,   731,   731,   732,   733,   734,   734,   735,   736,
     737,   738,   738,   739,   739,   740,   740,   741,   742,   742,
     743,   744,   745
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
       0,     2,     3,     0,     0,     3,    14,    13,     8,     6,
       6,     0,     4,     1,     3,     0,     4,     1,     3,     0,
       3,     1,     3,     1,     2,     0,     3,     5,     7,     0,
       1,     0,     2,     2,     4,     4,     0,     3,     0,     1,
       0,     2,     0,     2,     1,     3,     1,     3,     4,     6,
       4,     5,     0,     2,     2,     1,     3,     5,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     3,     3,     3,     0,     2,     3,     4,     4,     4,
       4,     5,     5,     1,     2,     1,     1,     1,     1,     2,
       2,     1,     3,     3,     1,     6,     1,     1,     1,     4,
       6,     5,     1,     3,     1,     5,     5,     5,     3,     1,
       0,     1,     1,     0,     1,     5,     1,     4,     0,     2,
       1,     3,     1,     2,     2,     1,     1,     2,     1,     1,
       0,     5,     5,     2,     4,     1,     0,     3,     1,     3,
       0,     2,     3,     1,     3,     1,     0,     3,     0,     2,
       2,     0,     2,     2,     0,     2,     2,     2,     1,     3,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     3,     6,     6,     0,
       1,     1,     3,     3,     3,     3,     1,     3,     4,     3,
       5,     5,     7,     7,     1,     3,     4,     4,     1,     1,
       1,     2,     1,     3,     3,     3,     3,     4,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     2,
       3,     3,     3,     3,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     3,     1,     3,
       0,     3,     0,     3,     0,     3,     1,     1,     1,     1,
       2,     1,     2,     2,     4,     2,     1,     2,     2,     0,
       3,     2,     2,     3,     2,     3,     4,     1,     3,     1,
       1,     1,     1,     6,     2,     2,     2,     2,     2,     0,
       2,     8,     8,     6,     6,     6,     3,     8,     1,     3,
       1,     3,     3,     2,     0,     2,     1,     1,     3,     1,
       3,     1,     3,     4,     6,     5,     5,     4,     6,     1,
       1,     1,     0,     3,     0,     3,     0,     3,     0,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     4,     1,
       2,     2,     2,     2,     1,     1,     4,     1,     3,     5,
       1,     3,     5,     6,     6,     1,     6,     4,     5,     4,
       1,     3,     3,     3,     4,     1,     2,     4,     1,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     1,     4,     1,     1,     1,     1,     1,
       1,     4,     6,     1,     4,     6,     1,     2,     1,     1,
       1,     1,     4,     1,     4,     6,     1,     4,     1,     4,
       6,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     2,     2,
       3,     4,     0,     1,     2,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     5,     5,     7,     0,     2,     4,     6,     4,     2,
       4,     2,     1,     4,     1,     3,     2,     0,     2,     1,
       1,     2,     1,     3,     1,     0,     2,     3,     3,     3,
       3,     4,     7,     0,     2,     1,     3,     2,     1,     0,
       2,     1,     6,     2,     2,     7,     1,     0,     2,     8,
       1,     0,     3,     1,     1,     3,     1,     1,     2,     4,
       0,     1,     3,     3,     5,     6,     1,     1,     1,     1,
       0,     2,     2,     4,     1,     3,     1,     1,     1,     1,
       3,     2,     2,     0,     1,     2,     2,     0,     1,     5,
       1,     1,     3,     3,     1,     1,     0,     2,     1,     2,
       1,     0,     1,     1,     2,     0,     1,     2,     2,     2,
       1,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    17,     0,     0,   497,     0,   430,   430,     0,
       0,     0,    15,     0,     0,    18,    21,     0,     0,     7,
       5,     9,    11,     3,     0,    19,     0,    78,    20,     0,
     461,     0,   165,     0,     0,     0,     0,    28,    29,    22,
      23,    24,    27,    25,   136,   135,   133,   134,    31,   137,
      26,   404,   403,   409,   408,   405,   407,   406,   521,   539,
     527,   528,   576,     0,    16,     0,   891,   892,   894,   895,
     896,   897,   899,   901,   946,   904,   912,   971,   935,   909,
     948,   923,   934,   928,   907,   970,   940,   929,   918,   919,
     920,   916,   910,   926,   949,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
     965,   927,   893,   967,   966,   914,   908,   900,   933,   968,
     969,   943,   921,   944,   945,   941,   942,   917,   902,   906,
     932,   930,   903,   905,   922,   947,   925,   915,   936,   937,
     938,   939,   911,   913,   931,   924,     0,   807,   898,   498,
     499,     0,     0,   429,   433,   433,   411,     0,   417,     0,
     524,   264,   497,     0,   722,   720,   721,   313,     0,   717,
     719,   264,     0,     0,     0,     0,     0,   976,   975,     0,
     979,   885,   886,   887,   888,   889,   890,    97,   264,   264,
      96,    92,   101,   264,     0,     0,     0,    82,    84,     0,
      93,    94,    68,   884,     0,     0,     0,     0,     0,   417,
       0,     0,     0,   974,     0,     0,     0,   258,     0,   261,
     260,     0,   835,     1,     0,     0,     0,   163,   164,     0,
       0,   180,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   162,     0,     0,     0,   130,   131,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   400,   787,   789,   788,
     935,   906,   922,   937,     0,     0,   967,   966,   925,    34,
      35,     0,   254,     2,     0,   540,   540,   540,   578,    13,
     504,     0,     0,   977,   891,   892,   894,   895,   896,   897,
     793,   792,   791,   794,   795,     0,     0,     0,   881,   804,
     805,   729,   729,   729,   729,   729,   671,     0,   492,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     740,     0,   936,   937,   938,   939,     0,     0,     0,     0,
     685,   684,   548,   744,   573,   604,   575,   594,   595,   596,
     597,   598,   599,   600,     0,   601,   668,   667,   602,   639,
     683,   672,     0,   674,   676,   678,   679,   546,   738,   669,
       0,     0,     0,   675,   670,   746,   799,   673,   681,   680,
       0,     0,   810,   790,   682,   990,   991,   992,   993,   994,
     995,   996,   997,   998,   999,   759,   482,     0,   410,   434,
     412,     0,     0,     0,   414,   418,   419,     0,   522,   526,
       0,     0,   265,     0,   538,     0,     0,   584,     0,     0,
      10,    12,     0,     0,    98,    99,    91,   100,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     417,   416,   168,     0,     0,     0,     0,   576,   463,     0,
       0,     0,     0,   462,   184,   183,     0,   182,   181,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
     914,    51,    47,   264,   264,     0,     0,     0,   392,   139,
       0,     0,     0,     0,     0,   400,   395,   395,   395,   391,
     400,   400,   400,   393,   394,   402,   401,   384,     0,    42,
      40,     0,     0,     0,     0,   866,   861,   875,   837,   876,
     878,   879,   850,   853,   845,   846,   848,   849,   847,   856,
     858,   868,   872,   871,   769,   766,   768,     0,     0,   859,
     860,    36,   863,   838,   839,   843,     0,   541,   542,   543,
     543,   543,     0,   581,     0,   478,     0,   548,   500,     0,
     883,   808,   978,   803,   801,     0,     0,     0,     0,   724,
     726,   725,   728,   727,     0,   631,     0,     0,   714,     0,
       0,     0,     0,  1033,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   575,     0,   676,   810,   603,
       0,   664,   665,     0,     0,     0,   659,   796,     0,   764,
       0,   764,   760,   761,     0,     0,     0,   828,   830,     0,
       0,   632,     0,     0,     0,   529,   504,     0,   743,     0,
       0,     0,     0,     0,     0,     0,     0,   609,   609,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   802,   800,     0,     0,     0,     0,   485,   482,
     480,   431,     0,     0,   413,   422,   421,     0,     0,     0,
     523,     0,     0,   548,   715,   820,   493,     0,   718,   719,
       0,    32,     8,     6,     4,     0,   980,     0,   495,   490,
     496,   104,    72,   102,   105,    69,    70,    85,   965,   925,
      83,    90,    89,    95,    79,    81,     0,     0,   415,   170,
     169,     0,   168,     0,     0,   113,     0,   149,     0,     0,
     159,   157,   155,   160,     0,     0,   140,   143,   152,   129,
       0,   129,   129,   259,   455,   455,     0,   264,     0,     0,
     168,     0,     0,   138,   141,   147,     0,   264,   264,   264,
     264,     0,   348,   348,   348,     0,   166,    48,    50,     0,
     982,     0,   224,   171,   190,     0,     0,   352,   353,     0,
       0,   264,   395,     0,   400,   400,   400,   390,     0,   382,
     379,   381,    46,   383,   389,    39,    43,   762,    44,    41,
      38,     0,     0,     0,   877,     0,     0,     0,     0,   857,
       0,   764,   764,   772,   773,   774,   775,   776,   768,   766,
       0,   785,   786,   255,     0,     0,     0,     0,   577,   588,
     591,   544,     0,     0,     0,   580,   579,   834,     0,   584,
     505,     0,     0,   504,     0,     0,   815,     0,     0,   882,
     730,   778,   777,     0,     0,     0,   639,   989,   987,  1070,
     986,  1070,     0,     0,     0,     0,  1068,  1069,     0,     0,
    1050,  1051,   639,  1067,     0,  1066,   576,     0,     0,     0,
     638,   636,   666,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   825,   830,     0,
     829,     0,     0,     0,     0,     0,   634,     0,   560,   559,
     549,   556,   550,   558,   555,   552,   807,   548,   532,   534,
     566,   745,   572,   629,   628,   630,   606,     0,   615,   616,
     613,   614,   612,     0,     0,   610,   611,     0,     0,   574,
     605,     0,   635,   655,   640,   641,   646,   656,   645,   736,
     663,   662,   661,   660,   642,   643,   644,     0,   657,   648,
     650,   652,   647,   654,   653,   651,   649,   619,     0,   690,
     742,   739,   687,     0,     0,   917,   832,     0,   810,     0,
     895,   896,   897,   741,   811,   483,   484,   481,   432,     0,
       0,     0,   428,   423,   424,   420,   266,     0,   716,     0,
     586,   587,   585,    33,    30,   981,     0,     0,     0,    74,
       0,    74,    88,    74,    74,     0,     0,     0,     0,     0,
       0,   156,   154,   158,   148,   144,     0,     0,   128,   109,
       0,     0,     0,   108,     0,     0,   224,   460,   466,     0,
     466,     0,     0,   464,   465,     0,     0,   145,   142,   348,
     174,   175,     0,   176,     0,   347,     0,   346,     0,     0,
       0,     0,     0,     0,    53,   983,    49,     0,     0,     0,
     199,   195,   197,   200,   198,     0,   201,     0,   883,     0,
     173,     0,     0,   355,   356,   354,     0,     0,   185,   380,
     400,   388,   385,   387,   397,     0,   398,    37,     0,   833,
       0,   880,     0,     0,     0,   833,   873,     0,   874,   770,
     771,   783,   782,     0,     0,   833,     0,     0,     0,     0,
     592,   593,   590,     0,   537,   536,   535,   583,   582,   531,
     503,   501,   479,   502,   809,     0,     0,     0,   677,     0,
       0,     0,     0,     0,  1012,  1004,     0,  1038,  1025,  1035,
    1039,  1034,   639,  1046,  1047,     0,  1070,     0,  1087,  1070,
     636,     0,   494,   488,   637,     0,     0,     0,   625,     0,
       0,     0,     0,   765,     0,   797,   767,   798,   806,     0,
       0,   826,     0,   831,   819,     0,     0,   817,     0,   633,
       0,   559,     0,     0,     0,   516,   517,   518,     0,     0,
       0,   513,     0,     0,   515,   913,   557,   565,   554,   553,
       0,     0,   530,     0,   570,   627,     0,     0,     0,     0,
       0,   626,   658,   618,     0,     0,   692,     0,   753,     0,
     757,     0,     0,     0,   435,   425,   426,   427,     0,   821,
     491,     0,   103,     0,    67,     0,    66,    76,    77,     0,
       0,   114,   117,   153,   151,   150,   400,   400,   400,   111,
     112,   110,     0,   107,   106,   366,   440,     0,   439,     0,
       0,     0,   146,     0,     0,   267,   338,     0,   350,     0,
       0,    64,    65,    63,     0,   972,   985,   984,   165,     0,
      45,    54,    55,    57,    58,    61,    59,    60,   256,   225,
     189,   224,     0,     0,     0,   223,   202,   203,   205,   206,
       0,     0,   192,   262,     0,     0,     0,     0,   178,   386,
     396,     0,   867,   862,   840,   851,     0,   854,     0,   869,
       0,   768,   780,   784,   864,     0,   841,   842,   844,   589,
       0,     0,     0,     0,  1072,  1071,  1000,   988,  1001,  1002,
       0,  1070,   948,     0,  1079,     0,  1074,     0,  1076,  1077,
       0,     0,  1070,     0,  1037,     0,     0,     0,     0,  1070,
       0,     0,  1053,  1060,  1064,     0,     0,  1088,     0,   486,
       0,     0,     0,     0,     0,     0,     0,     0,   763,   827,
       0,   818,     0,   822,   823,   506,     0,   551,     0,     0,
       0,     0,     0,     0,   514,   563,     0,   808,   533,     0,
       0,   547,   617,   621,   620,     0,     0,     0,   686,     0,
     694,   756,   755,     0,     0,   812,   525,    73,    75,    71,
       0,   116,   126,   127,   125,     0,     0,   367,     0,   456,
       0,   472,   474,   476,   449,   449,     0,     0,   177,   497,
     909,   923,     0,     0,     0,     0,     0,   282,   294,   295,
     288,   289,   290,   293,   291,   278,   279,   296,   307,   306,
     311,   310,   309,   308,     0,   292,   287,   286,   297,     0,
       0,     0,     0,    52,     0,    56,   196,   883,     0,     0,
     250,     0,   220,     0,   204,   207,   208,   213,   214,   215,
       0,     0,   172,     0,   191,     0,   257,   357,   358,     0,
       0,   399,     0,   836,     0,     0,   781,     0,     0,   568,
     810,   813,   814,   723,     0,  1024,  1009,  1011,  1025,  1022,
    1005,     0,  1082,  1081,  1073,     0,     0,     0,     0,     0,
       0,  1026,  1036,     0,  1041,  1040,  1043,  1044,  1042,   639,
       0,  1086,  1085,   639,  1052,  1054,  1056,  1057,     0,  1061,
       0,  1065,  1112,   489,     0,     0,     0,     0,   735,     0,
     733,   734,     0,   824,   816,     0,   510,     0,   507,     0,
       0,   509,   508,     0,     0,     0,   567,   571,   608,   607,
     691,     0,   696,   697,   689,     0,   754,   758,     0,     0,
     122,     0,   120,     0,     0,   467,     0,     0,     0,   438,
       0,     0,   455,   455,     0,     0,     0,     0,   312,     0,
     315,   925,   320,   319,   321,     0,   329,   331,     0,     0,
     282,   338,     0,   339,   349,     0,   338,   345,     0,   973,
       0,   251,     0,   216,   667,   209,   245,     0,     0,     0,
       0,   246,   218,   249,   224,     0,   194,     0,     0,   371,
       0,     0,     0,   188,   852,   855,   870,   865,   545,     0,
       0,     0,     0,     0,  1021,     0,  1003,  1075,  1078,  1080,
       0,     0,     0,     0,  1032,  1045,     0,  1058,  1084,     0,
       0,     0,     0,     0,   487,   623,   622,     0,     0,     0,
     561,   512,   520,   519,   511,     0,   564,   693,     0,     0,
       0,   639,   709,   698,   701,   699,     0,     0,   123,   124,
     121,   119,   457,   475,   473,   477,     0,   451,   453,   466,
     466,     0,     0,     0,   277,     0,   316,     0,     0,   282,
     330,     0,     0,   326,   331,   282,   338,     0,     0,     0,
       0,   933,   272,     0,     0,     0,     0,   244,     0,   247,
     264,     0,   211,   193,   263,   368,   368,   359,   360,     0,
     351,   375,   161,   186,   187,   569,   811,  1019,     0,  1014,
    1017,  1010,  1023,  1006,  1008,  1027,     0,  1030,  1029,  1028,
    1083,  1055,     0,     0,  1049,     0,     0,     0,  1101,  1090,
    1091,   737,   731,   732,   562,     0,   702,   700,   703,     0,
     695,   115,   118,     0,   450,     0,   454,   468,   468,     0,
     274,     0,     0,   317,     0,   282,   332,     0,     0,   327,
       0,   334,     0,   283,   282,     0,     0,     0,     0,     0,
       0,   264,   221,     0,   242,   210,   224,   366,   369,   366,
     366,   366,   361,     0,     0,   338,  1013,     0,     0,  1016,
       0,  1031,  1059,  1062,  1063,  1096,  1100,  1099,  1095,  1096,
    1094,     0,     0,     0,  1089,  1102,  1103,  1105,     0,     0,
     711,     0,   712,   458,   452,   469,   470,   470,   167,   268,
     314,     0,   322,   328,     0,   324,   282,     0,   282,     0,
       0,   283,   280,   338,   344,     0,   342,   271,   269,   273,
     270,   275,   276,   242,     0,   219,   253,   238,   233,   212,
       0,     0,     0,     0,   373,   374,   372,   376,     0,   302,
     303,   300,   301,   377,   304,   370,   299,   298,   305,  1015,
    1020,  1018,  1007,     0,  1093,  1092,  1108,  1111,  1107,  1110,
    1109,  1104,  1106,     0,     0,   639,   704,   706,   713,   710,
       0,   472,   472,   318,   283,   325,   323,   335,     0,     0,
     281,     0,     0,   233,     0,   240,   241,   239,   243,     0,
     234,   235,   248,   365,   363,   364,   362,   284,  1098,  1097,
     707,   705,   708,   471,   437,   441,   282,   333,   340,   343,
     252,   222,     0,     0,     0,   237,     0,   236,   338,     0,
     436,   334,   337,   341,   227,   228,     0,     0,   232,   231,
     378,     0,     0,   336,   226,   229,   230,   285,     0,   443,
     442,     0,   444
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,   176,   173,   172,   174,   175,    32,    33,    34,
      35,    36,  1014,  1468,   279,  1469,  1470,   481,   777,   780,
    1300,  1301,  1302,   776,  1293,  1471,   195,  1021,  1019,  1254,
    1472,   206,   207,   196,   197,   198,   720,   199,   200,   201,
     712,   713,  1473,   735,  1043,  1039,  1040,  1474,    44,   763,
     746,   764,   747,   765,    45,   247,   248,   731,  1090,   249,
     250,  1328,   783,   784,  1514,  1079,  1080,  1081,  1318,  1082,
    1504,  1505,  1083,  1771,  1506,  1507,  1653,  1508,  1509,  1925,
    1084,  1510,  2028,  1990,  1991,  1992,  1988,  1928,  1662,  1315,
    1663,   691,  1086,   251,   216,   217,  1516,   785,   422,    46,
    1744,  1919,    47,  1475,  1641,  2018,  1904,  1943,  1477,  1478,
    1479,  1628,  1629,  1832,  1480,  1633,  1481,  1753,  1754,  1636,
    1637,  1751,  1482,  1910,  1483,  1484,  2022,  1845,  1646,  1066,
    1067,    49,   789,  1096,  1669,  1777,  1778,  1448,  1859,  1780,
    1781,  1936,  1865,  1945,   266,  1485,   799,  1105,   507,  1486,
    1487,    53,   414,   415,   416,  1003,   154,   408,   684,    54,
    2020,  2038,  1622,  1736,  1737,  1048,  1049,   218,  1276,  1896,
    1971,  1619,  1451,  1452,    55,    56,    57,   680,   889,  1171,
     707,   351,   708,  1173,   709,   151,   557,   558,   555,   919,
    1213,  1214,  1591,   219,   159,   160,   418,    59,  1488,   220,
     927,   928,    62,   549,   842,   352,   625,   626,   920,   921,
    1202,  1203,  1216,  1224,  1528,  1421,   353,   354,   288,   553,
     849,   701,   838,   839,  1132,   355,   356,   357,   358,   947,
     359,   938,   360,   361,   596,   362,   937,   363,   622,   364,
     365,   366,   367,   368,   369,   370,   371,   372,  1235,  1236,
    1430,  1604,  1605,  1722,  1723,  1724,  1725,  1966,  1967,  1820,
     373,   597,   168,   169,   375,   569,   376,   377,   378,   628,
     379,   380,   381,   382,   383,   614,   901,   609,   611,   539,
     829,   863,   830,  1343,   831,   832,   540,   384,   385,   386,
     925,   387,   388,   857,   389,   697,   914,   907,   908,   617,
     618,   911,   987,  1108,   846,   221,  1522,  1106,  1117,   390,
     543,   544,   391,  1087,   714,   203,   598,   148,  1296,   222,
    1109,   393,    63,   180,  1074,  1075,  1297,   868,   869,   870,
     394,   395,   396,   397,   398,  1361,  1155,  1536,  1788,  1789,
    1869,  1790,  1951,  1537,  1538,  1539,  1372,  1551,   399,   874,
    1158,  1159,  1160,  1374,  1555,   400,  1377,   401,  1164,  1379,
     402,   881,  1166,  1381,  1564,  1565,  1566,  1567,  1568,  1702,
     403,   404,   884,   878,  1150,   875,  1365,  1366,  1689,  1367,
    1368,  1369,  1697,  1698,  1386,  1387,  1808,  1809,  1879,  1880,
    1954,  1999,  1810,  1877,  1884,  1885,  1961,  1886,  1887,  1960,
    1958,   405
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1787
static const yytype_int16 yypact[] =
{
    1444,   292, -1787,    32, 15645,   -33,  -131,    80,    80, 15645,
     361,   360, -1787, 15645,    41, -1787, -1787, 12755, 15645, -1787,
   -1787, -1787, -1787, -1787,   792, -1787,   694,   156,    73,   324,
     238,   487,  1285,  1124, 13044, 11888,   335, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787,   745,   366, -1787, 15645, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787,   286,   232, -1787, -1787,
   -1787,  3924, 15645, -1787,   461,   461, -1787, 15645,   752,    40,
   -1787,   494,   -33,   815, -1787, -1787, -1787, -1787,   517, -1787,
     375,   494,  2868,  2868,  1444,  1444,  2868, -1787, -1787,   570,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,   494,   494,
   -1787,   478, -1787,   494,    -9,   120,   518, -1787,   414,   500,
     491, -1787, -1787, -1787,   587,   590,   386,  1041,   776,   752,
   14489, 15645, 15645, -1787,   617,   887,   652, -1787,    96, -1787,
   -1787,  -158, -1787, -1787,   317, 15645,   410, -1787, -1787, 15645,
     684, -1787, -1787,   642,   649,   655,   727, 15645, 15645, 15645,
   15645, 15645, 15934, 15645, -1787, 15645, 15645,   671, -1787, -1787,
     742, -1787, 15645, 15645,   793,   713, 15645, 15645, 15645, 15645,
   15645, 15645, 15645, 15645, 15645, 15645,   926, -1787, -1787, -1787,
     809, 15645, 15645,   738,   861,   876,   785,   788, 15645,   737,
   -1787,   922, -1787, -1787,   975,   365,   365,   365,   790, -1787,
     804, 14778, 15645,  1091,  1091,  1091,  1100,   940,   954,   960,
   -1787, -1787, -1787, -1787, -1787,   963,   972,  1127, -1787, -1787,
   -1787,   974,   974,   974,   974,   974, -1787,   983, -1787,  1008,
    1064, 15645,  1021,  1024,  1026,  1032,  1038,  1046,  1049,  1050,
    1051,  1060,  1065,  2151,  4263,  8839,  8839,  1067,  1069,  1071,
   -1787,  8839,  1091,   306,   453,    76,  6585,  1075,  1089,  4263,
   -1787, -1787,   385,   896,  1058, -1787,  1637, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, 15645, -1787, -1787, -1787, 10944, -1787,
   -1787, -1787,   934, -1787,   924, -1787, -1787,   927, -1787, -1787,
    1094,  1096,  1097,   942, -1787, -1787, -1787, -1787, -1787, -1787,
    1091,  1091,   -43, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787,   229,   915, -1787,   993,
   -1787,   971,  1181,  1177, -1787,   938, -1787, 15645, -1787, -1787,
   15645,   967, -1787,  3924, -1787,  6907, 12755,   995,  1155,  1157,
   -1787, -1787,  1160,  4941, -1787, -1787, -1787, -1787, -1787, -1787,
     104,  1041,   104,   984, 13333,   399,  1184,  1185,  1188,   -26,
     752, -1787,   814,   499,   616,   598,  1126,   724, -1787,    56,
    1044, 15645,   887,  1005, -1787, -1787,  1134, -1787, -1787,   980,
   15645, 15645, 15645, 15645, 15645,  1074,  1137,  1139,  1142,  1144,
   15645,  1070,  1095,  1147,   494,   762, 15645, 15645, -1787, -1787,
   15645,  1085, 15645, 15645, 15645,   926,  1149,  1149,  1149, -1787,
     926,   926,   926, -1787, -1787, -1787, -1787, -1787, 15645, -1787,
   -1787,    29, 15645,  8839, 15645,  1153,  1154, -1787,   525, -1787,
   -1787, -1787,  1156,  1159, -1787, -1787, -1787, -1787, -1787,  1284,
   -1787,  1161, -1787, -1787, -1787,  1164,  1165,   939, 15645, -1787,
   -1787, -1787,  1166,  1169,  1170,  1172,  8839, -1787, -1787,  1163,
    1163,  1163,    43,  1053,  4263, -1787,  1151,    28, -1787,  1171,
   -1787,  1011, -1787, -1787, -1787,  4263,  4263,  1323,  1178, -1787,
   -1787, -1787, -1787, -1787,   222, -1787,   991,  1246, -1787,  8839,
    8839,  8839,  1125,  1205,   670,  1136,  1358,  8839,   626,  8839,
    2151,  1190,  1201,   822,  1202,   935,   212, -1787,   233,  1526,
    2151,  1455,  1455,  8839,  8839,  8839,   948, -1787,   792,  1206,
     792,  1206, -1787, -1787,  1091,  4263, 10334, -1787,   637,  8839,
    8839,  1526,  -193,  9137, 15645, -1787,   804, 15645, -1787,  4263,
    3246,  8839,  8839,  8839,  8839,  1207,  1208,  1010,  1010,  4263,
    3246,  1037,  8839,  8839,  8839,  8839,  8839,  8839,  8839,  8839,
    8839,  8839,  8839,  8839,  8839,  8839,  7229,  8839,  8839,  8839,
    8839,  8839,  8839,  8839,  8839,   540,  1210,  1179,  3924,  1212,
    5263,  8839, -1787, -1787, 12177, 13911,  1103,  1190, -1787,   351,
   -1787, -1787,  1305,  1310, -1787, -1787, -1787,   772,   792,   752,
   -1787,   245,  1219,  1282, -1787, -1787, 14193,   258, -1787, -1787,
      60,  1162, -1787, -1787, -1787,  2151, -1787,   267, -1787, -1787,
     873, -1787,    77, -1787, -1787, -1787,   235, -1787,   793, 15645,
   -1787, -1787, -1787, -1787, -1787, -1787,   104,   104, -1787, -1787,
   -1787,  1143,   814,  1118,  1133, -1787,  1301,  1235,   887,   887,
   -1787, -1787, -1787, -1787,   887,  2997,   616, -1787, -1787,   449,
      67,  1131,   846, -1787,    46,    46, 15645,   494,  1099,   887,
     814,  1240,  2997,   980, -1787, -1787,  1241,  1147,  1147,  1147,
    1147,  1182, 15067, 15067, 15067,  1167, -1787, -1787, -1787,  1394,
    1158, 15645, 14200,  1321, -1787,  1104,  1107, -1787, -1787,  1006,
    1168,  1147,  1149, 15645,   926,   926,   926, -1787,  1746, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787,   936, -1787, -1787,
   -1787,   922,   792,   792, -1787,  1405,   792,   792,   792, -1787,
     441,  1206,  1206, -1787, -1787, -1787, -1787, -1787,  1165,  1164,
    1174, -1787, -1787, -1787,   792,   792,   792,   792,  1093, -1787,
   11875,  1326,    41,    41,    41, -1787, -1787, -1787,    43,   995,
   -1787,   983, 14778,   804,  4263, 15645, -1787,  1116,  1098, -1787,
   -1787, -1787, -1787,  1324, 15645, 14193,   -16, 14193, -1787,   -53,
   -1787,  1278, 15645,  1265,  8839,  1101, -1787, -1787,  8839, 15645,
   -1787,  1293,   -16, -1787,  8839, -1787,  1340,   832,  8839,   301,
   -1787, -1787, -1787,   946,  4263, 13622,  9124, 12165,  2980,  1273,
    1175,  1091,  1277,  1091,   939,  1176,  8839, -1787,   641,  8839,
   -1787,  1145,  9414,  1115,   308,  4263, -1787,  2644, -1787, -1787,
    1117, -1787,   892, 16223, 16223, 16223,   241,    36, -1787, -1787,
    1350, -1787, -1787, -1787, -1787, -1787,  1676,  4263, -1787, 11250,
   -1787, -1787, -1787,  7551,  7551, -1787, -1787,  4263,  4263, -1787,
   -1787,   983, -1787, 14193,  1455,  1455,  1455,  1455,  1455,  1455,
    1455,  1455,  1455,  1455,  1257,  1257,  1043,  8839,   948,   594,
     594,   594,   594,  1327,  1327,  1327,  1327, -1787,  1352,  1148,
   -1787, -1787, -1787,  8839,  1290,  8839, 14193,  1303,   248,  1140,
    1307,  1308,  1309, -1787,   254, -1787,  1146, -1787, -1787, 15645,
    1045,  1396, -1787, -1787, -1787, -1787, -1787,    41, -1787,  8839,
   -1787, -1787, -1787, -1787, -1787, -1787,  7551,  1228,   104,  1377,
    1233,  1377, -1787,    38,    38,  1091,  1236, 15645, 15645,   887,
     224, -1787, -1787, -1787, -1787, -1787, 15645, 15645, -1787, -1787,
   15645,  1400,  1052, -1787, 15645, 15645, 15356, -1787,  1382,  1180,
    1382,  1384,  1387, -1787, -1787,  1244,   887, -1787, -1787, 15067,
   -1787, -1787,  1237, -1787, 15645, -1787,  1328,  1186,  2997,  1339,
    1346,   474,  1229, 15645,   609, -1787, -1787, 15645, 15645,   310,
   -1787, -1787, -1787, -1787, -1787,   577, -1787,  2481,   -55, 15645,
   -1787,   617,   617, -1787,  1194, -1787,  1263, 15645,  1264, -1787,
     926, -1787, -1787, -1787, -1787,  1354,  1192, -1787,  1355, -1787,
    1359, -1787,  1360,   333,  1361,  1203, -1787,   337, -1787, -1787,
   -1787, -1787,  1266,  1077,  1370,  1213,  1373,  1379,  1381,  8839,
   -1787, -1787, -1787,  1385, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787,  2997,  2997,  8839, -1787,    18,
    1383,  8839,  1386,  1389, -1787,  1220,  7873, 14193,  -168, -1787,
    1243, -1787,   624, -1787,  1225,  1462,  1278,  1395,  1407,  1278,
     519,   341, -1787, -1787, -1787,  1397,  1398,  1399,  1526,  8839,
    8839,  8839,  8839, -1787,  1280, -1787, -1787, -1787, -1787,  8839,
    1789, -1787,  1268, 14193, -1787,  8839,  8839, -1787,  8839,  1526,
    2644,  1401,   892,    41,  9137, -1787, -1787, -1787,   806,  1504,
    9137, -1787,  9137,  1505,  1509, 15645, -1787,  1409, -1787, -1787,
   12755, 15645, -1787,  1479,  1476,  1676,  1091,   352,   353,  1779,
    1878, -1787, 14193, -1787,  1482,  1414,  1489,  1418, -1787,  1422,
   -1787, 12466,  8839, 15645, -1787, -1787, -1787, -1787,  1423, -1787,
   -1787,  1335, -1787,   474, -1787,  1338, -1787, -1787, -1787,  1586,
    1091, -1787, -1787, -1787, -1787, -1787,   926,   926,   926, -1787,
   -1787, -1787,   174, -1787, -1787,  1288, -1787,  1091, -1787,   289,
      82,  1091, -1787,  1433,  1604, -1787,  9733, 15645, -1787,  1375,
    1376, -1787, -1787, -1787, 15645, -1787,  1272, -1787,  1318,   404,
   -1787,   609, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, 14200,  1351,  1353,   494, -1787, -1787, -1787, -1787,   759,
    1349,  1614,  1447,  1448, 15645, 15645,  1449,  1547, -1787, -1787,
   -1787,  2997, -1787, -1787, -1787, -1787,   792, -1787,   792, -1787,
     792,  1165, -1787, -1787, -1787,   792, -1787, -1787, -1787, -1787,
   15645,  1451,  1454, 12454, -1787, -1787, -1787, -1787, -1787, -1787,
    5585,  1278,  1388,  8839, 14193,   355, -1787,  1311, -1787, -1787,
     770,  8839,  1278, 15645, -1787,  1487,  1490,  1458,  8839,  1278,
      -5,  8839, -1787,  1462, -1787,  1356,  1460, -1787,  1465, -1787,
    8839,  8839,  7551,  7551,  9720, 12743, 11557,  3028, -1787, -1787,
    8839, -1787, 13032, -1787, -1787, -1787,   268,   892,  9137,  1565,
    9137,   516,   516,  9137, -1787,  1469, 15645,   255, -1787, 15645,
    4263, -1787, -1787, -1787, -1787,  4263,  4263, 15645, -1787,  1539,
      14, -1787, -1787,  1470,  1471, -1787, -1787, -1787, -1787, -1787,
    1322,  1378, -1787, -1787, -1787,  1404,   608, -1787,  1091,  1314,
    1091,  1564,  1315, -1787,  1483,  1483,  1413,  1420, -1787,   -33,
     361,   360,  1421, 12755,  3585,  8195,  4263,  1366, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787,  1369, -1787, -1787, -1787, -1787,  1317,
    2997,  2536,  2536, -1787, 15645, -1787, -1787,  1511,   494,   494,
   -1787,  1531, -1787,  8839, -1787,   759, -1787, -1787, -1787, -1787,
     497,  1512, -1787,    53, -1787,  1450, -1787,  1363,  1364, 15645,
     163, -1787,  1519, -1787,  1521,  1523, -1787,  1524,   370, -1787,
    1365, -1787, -1787, -1787,  1541, 14193,  1391, -1787,  -124, -1787,
    1392,  1525, -1787, -1787, -1787,  7873, 15645,  1452,  1457,  1459,
    1461, -1787, -1787,  1544, -1787, -1787, -1787, -1787, -1787,   358,
    1549, -1787, -1787,   325,  1393, -1787, -1787, -1787,   346, -1787,
    1559, -1787, -1787, -1787,   371,   372,   378,  8839, -1787,  8839,
   -1787, -1787,  8839, -1787, -1787, 16223, -1787,  9137, -1787,   494,
    4263, -1787, -1787,   516, 15645,   391,  1406, -1787,  1534,  1534,
    1406,  8839, -1787, -1787, -1787,  4602, -1787, -1787,  1473,  1463,
   -1787,   418, -1787,  1623,  8839, -1787,  1091,   405,  1507, -1787,
    1091, 15645,    46,    46,  1091,  1500,  3924, 15645, -1787,  1566,
   -1787,  1567, -1787, -1787, -1787,  4263, -1787,   679, 10640,  1438,
   -1787, 10957,  4263, -1787, -1787,  1570, 10039, -1787,   667, -1787,
    1474, -1787,  1428, -1787,  1678, -1787, -1787,  1638,  1574,  1488,
   15645, -1787, -1787, -1787,   593,  1578, -1787,  1493,   818,  1639,
     406,  1673,  1675, -1787, -1787, -1787, -1787, -1787, -1787, 15645,
   15645,  8839,  8839,  8839, -1787,  8517, -1787, -1787, -1787, -1787,
    1651,   735,  1652,  1653, -1787, -1787, 15645, -1787, -1787,  8839,
    1501,  1503,  1594,   623, -1787, -1787, -1787, 13321, 13610, 13899,
   -1787, -1787, -1787, -1787, -1787,   408, -1787,  1093,  5907,  1446,
    1436,  1453,  1464, -1787, -1787, -1787,  1091, 15645, -1787, -1787,
   -1787, -1787,  1456, -1787, -1787, -1787,   426, -1787,  1781,  1382,
    1382,  1515, 15645,  1529, -1787,  1467,  8839,   647,  1491, -1787,
   -1787,  1480,  8839, -1787,   711, -1787, 10957,  1659,  1486, 15645,
    1558,  1791, -1787,  1562,  1798, 15645,  1680, -1787,  4263, -1787,
     494,   448, -1787, -1787, -1787,   186,   445,   818, -1787,  1485,
   -1787,  1516, -1787, -1787, -1787, -1787,  1492, 14193,   456, -1787,
    1498, -1787, -1787,  1494, -1787, -1787,  1672, -1787, -1787, -1787,
    1462, -1787,  1679,  1684, -1787,  1682, 15645,  1835,   596, -1787,
   -1787, -1787, -1787, -1787, -1787,  1650, -1787, -1787, -1787,     9,
   -1787, -1787, -1787,  1091, -1787, 15645, -1787,  1782,  1782, 15645,
   -1787, 15645,   457, 14193,  1669, -1787, 10345,  1546, 10027, -1787,
    1535,  9427,  1715,  1540, -1787,   464,  2997, 15645,  1150, 15645,
    1150,   494,  1691,  1677,  1740, -1787,   593,  1288, -1787,  1288,
    1288,  1288, -1787,   844,  4263, 11263, -1787,  8839, 15645, -1787,
    8839, -1787, -1787, -1787, -1787,  1696, -1787, -1787, -1787,  1696,
   -1787,  1713, 15645,  1835, -1787, -1787, -1787,  1717,  6246,  1537,
   -1787,  1550, -1787, -1787, -1787, -1787,  1813,  1813, -1787, -1787,
   -1787,  8839, -1787, 10345,  1742, -1787, -1787,  1579, -1787,  4263,
    1568,  1569, -1787, 10651, -1787, 15645, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787,  1740,   980, -1787, -1787,   714,  1617, -1787,
   15645, 15645, 15645, 15645, -1787, -1787, -1787, -1787,  1575, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787,  1835, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787,  1561,  1552,  1553, -1787, -1787, -1787, -1787,
    1826,  1564,  1564, 14193, -1787, 10345, -1787, 10345,  1589,  1590,
   -1787,  1584,  2997,  1617,   895, -1787, -1787, -1787, -1787,  1113,
    1630,  1632, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787,  1581, -1787, -1787, 15645, -1787,
   -1787, -1787,   183,   183,  1833, -1787,  1836, -1787, 11569,  1726,
   -1787,  9427, -1787, -1787, -1787, -1787,  1859,    -4, -1787, -1787,
   -1787,  1771,   887, -1787, -1787, -1787, -1787, -1787,   467, -1787,
   -1787,   887, -1787
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1787,  1007, -1787, -1787, -1787, -1787, -1787,  -982,  -949, -1787,
   -1787,   857, -1787,    10, -1787,    15,   442, -1787,  1128, -1787,
   -1787, -1787,   606, -1787,   657,     0,  1701, -1787, -1787,  -137,
       5, -1787, -1787,  1705, -1787,  1472, -1787, -1787, -1787,  1468,
    -379,   898,    57, -1787, -1787, -1787,   432,   100, -1787,    -7,
   -1787,  -759,  1189,  -405, -1787, -1787, -1787,  -592, -1787,  1883,
   -1787, -1787,   203, -1787, -1787, -1787,   874,   610, -1787, -1787,
   -1787, -1787, -1787, -1787, -1457, -1787,   309, -1787, -1787, -1787,
   -1787,  -736,   -89,   -65,   -62,   -47, -1787,    16, -1787, -1787,
   -1787,   -34, -1787, -1787,  -182,  -395, -1787,  -148,  -282, -1787,
   -1400,    87, -1787,   294, -1387, -1787, -1239,   -80, -1771, -1787,
     484, -1787, -1787, -1787, -1787, -1787, -1787,   187, -1787,   305,
   -1787,   189, -1787,   -76, -1787, -1787, -1787, -1787,   454,  -684,
   -1787, -1787, -1787, -1787, -1787, -1787,   171,  -838,   173, -1787,
   -1787, -1787, -1787, -1787,  1506,   126,  -421,   620,  -435,    20,
      25, -1787,  -116, -1787,  1267, -1787,  1945,  1799, -1787, -1787,
   -1787, -1787,   511, -1787,   142,  -727, -1787, -1787, -1028,   143,
      75,  -785,   690,   523, -1787, -1787, -1787,  1296,  1300,   595,
    -892, -1787,  -398,   588,   969,  -155, -1787,  1135,  -499,  -849,
     798, -1787, -1304,   216, -1787,  1576,  1001, -1787,    30,   208,
   -1787,   789,    64,   904,   651,  -402,  1082,  1477, -1787, -1787,
    -609, -1787,  -887, -1787,  -670, -1787,  -272,  1372,  1129, -1787,
   -1787,  1173,   412,   885, -1787, -1787,  -253, -1787, -1787,  1402,
   -1787,   422, -1787, -1787, -1787, -1787,  1410, -1787, -1787,  1380,
   -1787,  -274, -1345,  1466,  -543,  -479, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787,   307, -1787, -1787, -1787, -1787, -1787,
   -1787,   -15, -1787,  -371, -1787,   778, -1787, -1787,  1367, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787,  -392,  -465,  -505, -1787,
    -547, -1787, -1787, -1787, -1787,  1120, -1787,  1985, -1787,  1528,
      68, -1275, -1787,  1475, -1787, -1787, -1787,  1119, -1787,  1408,
   -1787,  1141,  -645,   334,  -656,  -196, -1787,  -257, -1787,  -246,
   -1787, -1787,  -242,  -285,    27, -1787,    -1, -1787, -1313,  -422,
      -6,  -173, -1787, -1787, -1787, -1787, -1787,  -539, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787, -1787, -1787,   357, -1787,   169,
   -1787, -1787, -1787, -1583, -1787,   354,   506, -1787, -1787, -1787,
   -1787,   680, -1787, -1787, -1787, -1787, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787, -1787, -1787,   367, -1787, -1787, -1787, -1787,
   -1787, -1787, -1787,  1484,  -813,   692, -1787,   520, -1787,   693,
   -1787, -1787,   273, -1018, -1787, -1787, -1787, -1787, -1787, -1786,
     195, -1787, -1787, -1787, -1787, -1787, -1787,   188, -1787, -1787,
   -1787, -1787
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1084
static const yytype_int16 yytable[] =
{
      40,   281,   167,   147,  1058,    41,   559,   423,   156,   556,
      37,   678,   161,   421,   922,    38,   170,   147,   179,   458,
      51,   693,  1278,   427,   541,    52,   989,   695,  1050,   862,
      60,   822,   456,   275,   282,   542,   866,  1218,  1219,   545,
     434,   435,   871,   575,   882,   437,  1085,  1476,  1655,   748,
     886,  1227,  1228,   202,   213,   698,  1152,    42,  1153,   293,
     797,   594,  1047,   716,   147,   802,   803,   804,  1201,  1167,
     821,   213,   146,   845,  1010,  1529,   800,   801,   163,  -762,
     595,   599,  1031,  1032,   727,   293,   171,   806,  1033,  1069,
    1070,  1889,  1298,   451,  1944,  1370,   621,  1959,  1602,  1791,
      43,   438,  1794,  1595,  1149,  2035,   162,   162,  1592,   181,
     182,   183,   184,   185,   186,   810,  1320,  1890,  -254,  1561,
     562,   563,   564,   460,   679,  1299,    50,   930,   152,  -719,
     847,   208,  1354,   290,  1041,  1665,   374,   462,   623,  1370,
    1026,  1149,    65,  1562,  1529,   915,   623,  1382,  1253,   916,
     392,   147,  1529,   463,  1042,   149,   410, -1070,  1654,   209,
     153,   -80,   -80,   -80,   -80,   -80,   -80,  1998,  1055,   607,
    1371,  1355,    40,    40,    40,    40,    40,    41,    41,    41,
      41,    41,    37,    37,    37,    37,    37,    38,    38,    38,
      38,    38,    51,    51,    51,    51,    51,    52,    52,    52,
      52,    52,    60,    60,    60,    60,    60,  1772,    61,   453,
     147,   147,    14,    14,  1683,   150,    58,   672,   673,   903,
     406,  1011,   913,  1666,   466,  2024,  2025,  1671,   147,    42,
      42,    42,    42,    42,   202,   213,   147,   147,   147,   147,
     479,   482,   147,  2036,   147,   147,  1672,  1944,  1017,   213,
     439,   488,   147,  1756,  1450,   147,   147,   147,   147,   499,
     147,   147,   147,   147,   147,  2026,   758,   612,   613,  1654,
     509,   510,    43,    43,    43,    43,    43,   147,   457,   454,
     455,  1715,   850,  -254,   678,  1151,   755,  1952,   162,  1714,
     560,   561,   293,   856,   856,   162,   674,   469,    50,    50,
      50,    50,    50,   698,   162,   475,   476,   477,   478,  -766,
    1085,   483,   441,   484,   485,   807,   847,   847,   594,  1298,
     578,   489,   847,  1121,   495,   496,   497,   498,   594,   500,
     501,   502,   503,   504,   728,  1162,   786,   595,  1237,  1891,
    1239,   748,  1830,   905,  1892,  1168,   483,  1023,  1024,   923,
    1603,  1201,  1299,  1383,  1142,   461,  1388,   932,  -459,  1101,
    1102,  1103,  1836,   147,  1122,  1569,   852,   419,  1841,  1137,
     754,  1099,   711,  1263,  1221,  1283,  1018,   936,   417,   210,
      61,    61,    61,    61,    61,   893,   350,   950,    58,    58,
      58,    58,    58,    13,    14,  1454,   574,   593,   440,  1929,
      13,   675,  1757,   350,  1785,  -719,  1020,  1476,   374,    13,
     214,   204,  1673,  -719,   205,  1018,   161,   162,  1006,   282,
    -719,  1728,   392,  1445,    64,   699,  -719,  -719,  1380,  1119,
    1120,  1008,   641,   594, -1083,   285,   286,   287,   211,   157,
    1015,   904,    39,   147,   293,  1446,   158,  1917,  1903,  1921,
     187,   188,   189,   190,  2027,  1700,  -768,  1913,   441,   252,
     147,  1450,  1857,   187,   188,   189,   190,   283,   715,   147,
     147,   147,   147,   147,  1174, -1083,   676,  -766,   608,   778,
     811,  1197, -1083,  1310,    48,   790,   147,   223,  1034,   147,
    1172,   147,   147,   147,  1116,   623,  1701,   710,   289,   542,
    1575,  1576,   591,   545,  1012,  1057,  1335,   805,  1858,   677,
    1339,   809,   722,   282,  1389, -1048,   542,  1842,   253,  1975,
     545,  1977,    13,    14,   698,  1423,  1424,  1729,  1544,   757,
    1291, -1048,  1589,   215,   464,   465,  1292,   833,   766,   767,
     768,   769,   770,  1678,  1704,  1705,   814,   815,  1541,   592,
     894,  1706,   542,   547,  1107,   791,   545,   291,   792,  1553,
     794,   795,   796,  1054,  1716,   542,  1560,   559,   254,   545,
     556,   292,   895,  1018,   191,  1085,  1342,  1140,  1733,  1782,
    1220,  1814,  1143,   538,  1205,  1206,  1207,  1241,  1208,  1209,
    1210,  1211,   255,  1243,   855,  1407,  1009,  1434,   676,  1824,
     212,  1411,   899,  1412,   902,  1016,  1656,   847,   924,  1052,
    1585,  1249,  1357,   548,    39,    39,    39,    39,    39,  2021,
    -538,  1855,   926,   929,  -768,   610,   931,   467,   468,  1866,
    1900,   677,   192,   256,   257,   258,   259,  1914,   593,  1175,
    2040,  1178,  1696,   923,   624,   192,  1198,  1118,  1311,   977,
     407,  -538,  1138,   374,   887,   193,    48,    48,    48,    48,
      48,   260,  1199, -1083,   593,  1329,   420,   392,   193,   988,
     732,  1336,  1657,   994,   282,  1340,  1036,  1231,  1881,  1390,
     262,  1212,  1004,   162,  1225,   263,  -538,  -538,  -538,   425,
    1016,  1016,  -538,  1545,  1229,  1230,   194,   816,  1710,   181,
     182,   183,   184,   185,   186,  1805,  1611,  1375,  1679,  1390,
    1016,  1827,  1828,   162,   426,   978,  1016,  1612,   147,  1501,
     264,  1860,   265,  1658,  1502,  1037,  1038,   642,  1185,  1494,
    1187,   736,   737,   738,   739,   740,   741,   742,   743,   163,
     883,   744,   433,  1620,   538,   436,  1494,  -538,  1882,  1596,
     733,  1883,   443,  1985,  1986,   147,  1264,  1600,   187,   188,
     189,   190,   444,  1659,  1825,  1376,  1660,  1858,  -538,   887,
     734,  1068,  1068,  1068,  -538,  -538,  1661,   876,  1590,   877,
     778,  1088,  1806,  1613,  1987,  1807,  1856,  1022,    13,   214,
     592,  1399,   147,  -538,  1867,  1901,   442,   177,  1403,  1586,
    1404,  1588,  1915,   178,  1593,  2041,   592,   661,   662,   663,
     664,  1288,  1115,  -538,  -538,  -538,   592,  1796,    13,    14,
    1078,   876,   542,   877,  1051,   284,   545,  1312,  1125,   445,
    1319,  1442,  1443,  1444,  1265,  1559,  1526,    15,  1563,   411,
    1503,   542,   412,  1313,  1797,   545,   284,   749,   413,   698,
     446,   560,  1259,   447,  1144,  1614,  1314,  -538,    25,  1000,
    1282,  1100,   450,   147,    26,    27,  1001,  1002,  -224,   750,
     698,  1154,   751,   752,  1205,  1206,  1207,   491,  1163,  1547,
    1408,  1211,   191,    29,  1256,  1501,  1257,  1258,  1351,  1352,
    1502,   285,   286,   287,   994,  1739,  1740,   424,   213,   542,
     542,  1763,   924,   545,   545,  1764,  1134,  1135,  1136,  1322,
    1323,   459,   285,   286,   287,   470,   926,  1548,   471,  1549,
    1550,   592,  1217,  1217,  1217,   472,   923,   515,   516,   517,
     923,   473,  1148,   745,  -224,   615,   923,   909,   923,   906,
     192,   909,   518,   492,   493,   494,   519,   520,   521,   307,
     308,   522,   523,   524,   525,   526,   527,   528,   529,   530,
    1205,  1206,  1207,   193,  1208,  1209,  1210,  1211,   505,   506,
    1060,  1061,  1062,  1063,   531,   532,   533,  1635,  1711,  1749,
     761,   593,   285,   286,   287,  -224,  1078,   486,   424,   285,
     286,   287,  1172,  1172,  1098,   891,   681,   682,  1244,   285,
     286,   287,  1583,   474,   194,  1170,  1503,   710,   710,  1752,
     736,  1749,   738,   739,   740,   741,   742,   743,   487,  1930,
     744,  1931,  1932,  1933,   490,  -224,  1261,  1262,  -224,   428,
     429,   511,  1500,   432,   508,  1266,  1267,   512,  -224,  1268,
     285,   286,   287,  1272,   147,   560,   181,   182,   183,   184,
     185,   186,   513,  1422,   940,   941,   942,  1212,  1068,   685,
     686,  -180,  1721,  1285,  -179,   761,   729,   730,  2011,  1632,
    1093,  1094,  1295,  1095,  1303,   514,   147,  1309,   546,  1304,
     710,   642,   787,   788,   552,   542,   554,  1441,  1321,   545,
     570,   571,   572,   573,   293,   736,   147,   738,   739,   740,
     741,   742,   743,  -875,  1449,   744,  1453,  1453,  1456,   945,
     946,   630,  -749,  1273,   631,   632,   633,   634,   635,   636,
     637,   638,  1045,  1038,   639,   640,  -751,   612,   613,  1176,
    1177,  1305,  -747,   592,   923,   565,   923,  1245,  1246,   923,
    1270,  1271,  1775,  1776,   566,  1308,   568,  1110,  1597,   567,
    1112,  1113,  1114,   293,  1918,   574,  1563,   657,   658,   659,
     660,   661,   662,   663,   664,  1326,  1934,  1935,  1124,  1126,
    1127,  1128,  1598,  1599,  1306,  1721,   642,  2012,  2013,   252,
     576,   430,   431,  1044,  1046,   924,  2004,  2005,   577,   924,
     550,   551,  1634,   579,  1639,   924,   580,   924,   581,   926,
    1307,   843,   844,   926,   582,   534,   535,   536,   537,   926,
     583,   926,   762,   627,  1415,   419,  1650,  1651,   584,  1417,
     929,   585,   586,   587,  1743,  1058,   823,   824,   825,   826,
     827,   828,   588,  1644,  1647,  1647,   629,   589,   253,   603,
     994,   604,  1435,   605,   542,   542,   542,   619,   545,   545,
     545,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     538,   620,   666,   667,   887,   668,   669,  1406,   670,   671,
    -688,   683,   687,  -624,   688,  1615,   689,  1453,   823,   824,
     825,   826,   827,   861,   692,  1489,  1490,   702,   254,   703,
    1517,   700,   704,  1493,   194,   724,   725,   762,   726,   753,
     759,  1303,   224,   756,  1626,   760,  1304,  1712,   771,   772,
    1497,   773,   255,   923,   774,   775,   793,   779,  1713,   782,
     781,   798,   819,   282,  1518,   812,   813,   851,   817,   841,
    1523,   818,  1524,   820,  1525,   224,   608,   610,   834,  1527,
     225,   835,   836,   226,   837,  1965,   859,   854,   848,  1530,
     855,   860,  1834,   256,   257,   258,   259,   864,  1305,   873,
     872,   880,   888,  1748,   823,   824,   825,   826,   827,  1341,
    1758,   879,  1554,   225,   890,   892,   226,   900,   349,   943,
     944,   260,   979,   995,   980,   982,   998,   227,   999,   228,
     642,  1007,   623,   924,   261,   924,  1027,  1025,   924,   229,
     262,  1306,  1013,  1028,  1029,   263,  1030,   926,  1038,   926,
    1053,  1056,   926,  1059,  1072,  1295,   592,  1064,  1530,  1089,
     227,  1091,   228,  1073,  1092,  1071,  1530,  1307,  1111,  1133,
    1097,  1129,   229,  1145,  1147,  1149,  1146,  1156,  1165,  1161,
     264,   284,   265,  1732,   -14,     1,  1183,  1735,   167,   230,
    1186,  1741,  1123,  1196,  1194,  1204,   710,   710,  1223,  1184,
     642,  1233,   926,  1238,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,  1846,  1189,  1240,  1234,  1242,  -750,
    -752,  -748,   230,  1247,  1175,  1670,  1251,  1253,  1255,  1269,
    1260,  1275,  1277,  1649,  1279,     2,  1853,  1280,  1281,  1284,
    1294,  1286,   231,   232,   233,   234,   235,   236,     3,     4,
       5,     6,  1289,  1324,   237,   238,   239,   240,   282,  1290,
       7,     8,     9,    10,  1287,  1325,  1327,  1330,  1332,    11,
    1331,  1630,  1333,  1334,  1337,   231,   232,   233,   234,   235,
     236,  1338,   241,  1344,  -779,  1688,  1346,   237,   238,   239,
     240,  1345,  1347,  1821,  1348,   242,  1356,  1350,  1360,  1358,
    1373,   243,  1359,  1378,   244,  1380,   245,  1385,  1384,  1391,
    1392,  1393,   924,  1398,  1405,   241,    12,  1401,  1410,  1413,
    1414,  1416,  1419,  1420,  1217,  1427,   926,  1428,   642,  1916,
    1429,  1431,  1937,  1295,   243,  1432,  1436,   244,  1437,   245,
     542,  1439,  1440,   246,   545,  1447,  1457,  1458,  1491,  1492,
    1494,   374,  1498,  1511,  1499,    13,    14,  1512,  1513,  1515,
    1738,  1519,  1854,  1520,  1531,   392,  1745,  1532,  1546,  1556,
    1982,  1558,  1557,  1571,  1570,  1542,   246,  1978,  1572,  1587,
    1489,  1594,  1601,  1606,  1607,  1489,  1618,  1608,  1624,  1609,
    1893,  1610,  1616,  1620,  1625,  1621,  1627,  1643,  1652,   147,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,    15,  1640,  1642,  1920,  1667,  1920,  1530,  1786,
      16,    17,  1320,    18,  1664,    19,    20,    21,    22,    23,
      24,  1668,  1674,    25,  1675,  1800,  1676,  1677,  1686,    26,
      27,   538,   630,  1923,  1680,   631,   632,   633,   634,   635,
     636,   637,   638,  1681,  1690,    28,   640,  1694,    29,  1691,
    1703,  1692,  1695,  1693,   640,  2009,  1822,  1726,  1770,  1682,
    1685,  1699,  1730,  1727,  1734,  1742,   542,  1755,  1746,  1747,
     545,  1745,  1759,  1765,  1679,  1766,  1768,  1767,  1773,  1769,
    1779,   515,   516,   517,    30,  1489,  1774,  1783,   560,  1784,
    1795,  1798,  1799,  1802,   147,  1803,   518,  1804,  1816,  1817,
     519,   520,   521,   307,   308,   522,   523,   524,   525,   526,
     527,   528,   529,   530,  1826,  1829,  1818,  -217,   624,  1837,
    1835,  1843,  1844,  1847,  1823,  1819,  1848,  1849,   531,   532,
     533,   601,   602,  1850,  -217,  1876,  1831,   606,  1852,  -217,
    -217,  1863,   616,   630,  1864,  1868,   631,   632,   633,   634,
     635,   636,   637,   638,  1738,  1871,   639,   640,  1898,  1873,
    1899,  1243,  1870,  1851,  1874,  1489,  2039,  1875,  1878,  1888,
    1489,  1895,  1902,  1905,  1907,  2042,  1745,  1911,  1745,  1912,
    1926,  -217,  1927,  -217,  1953,   631,   632,   633,   634,   635,
     636,   637,   638,  1924,  1489,  1941,   640,  1950,  1956,  1882,
    1942,  1968,  1969,  1970,  1974,  1939,  1976,  1979,  1980,  1989,
    1940,  1957,  1997,  2000,  2001,  1946,  2002,  2003,  2006,  2008,
    1947,   696,  2014,  2007,  2016,  1948,  2019,  2012,  2032,   696,
    2034,  2013,  1489,  2037,  -217,  -217,  -217,  1495,   449,  1076,
    1438,   448,  1489,   723,   560,   717,  1252,  1984,   280,  1104,
    1274,  1496,   642,  1731,  2029,  -217,  2017,  -217,  2015,  1993,
    1994,  1995,  1996,  -217,  -217,  1035,  2010,  1922,  2031,  1983,
    1762,  1839,  1750,  1840,  -217,  2033,  1648,  -217,  1862,  1861,
     721,  1521,  -217,   155,   409,   630,  1005,  -217,   631,   632,
     633,   634,   635,   636,   637,   638,  1623,  1894,  1425,   640,
    1455,  1897,  1972,  1617,  1489,   997,  1489,   996,  1573,   696,
     643,   644,   645,   646,   647,  1250,  1574,  1141,   648,   649,
     650,   651,   652,   690,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,  1409,  2023,  1248,  1222,
    1418,   949,   840,  1717,  1349,  1169,  -217,  1489,  1941,   274,
    1489,   952,  1139,  1942,  1188,  1815,   910,  1191,  1939,   534,
     535,   536,   537,  1940,   853,   981,  1949,  1792,  1946,   808,
     948,   858,  1793,  1947,  1684,   865,   867,   867,  1948,  1192,
     951,  1552,  1540,   865,   630,   867,  1543,   631,   632,   633,
     634,   635,   636,   637,   638,  1687,  1801,  1426,   640,   896,
     897,   898,   885,  1872,  1955,  1962,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   912,   696,     0,  1400,     0,
       0,     0,     0,     0,     0,     0,     0,   939,   939,   939,
     939,     0,     0,     0,     0,     0,     0,     0,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
     965,   966,   968,   969,   970,   971,   972,   973,   974,   975,
     976,     0,     0,     0,     0,     0,   986,   986,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   293,     0,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,     0,     0,   305,
     306,     0,     0,    72,    73,     0,     0,    74,   307,   308,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,    76,     0,     0,   309,   310,   311,   312,   313,
     314,   315,     0,    77,     0,     0,   267,   268,   269,     0,
       0,     0,     0,   316,    78,     0,     0,   162,   164,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,   317,     0,     0,     0,
     318,     0,     0,    87,   319,     0,    88,     0,    89,    90,
      91,     0,     0,     0,   320,    92,    93,     0,     0,     0,
       0,     0,     0,     0,   321,   322,   323,   324,   325,     0,
     326,   327,    94,    95,   328,   329,    96,   330,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   331,   105,   106,
     107,   108,     0,   109,   332,   110,     0,     0,     0,     0,
       0,   111,    13,   590,     0,   112,   334,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1157,     0,   335,   336,   865,     0,     0,   337,   338,   339,
     867,     0,     0,     0,   696,     0,     0,     0,     0,   341,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,  1190,     0,     0,  1193,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,   127,
       0,     0,     0,     0,     0,   128,     0,     0,   129,   696,
     696,     0,   130,     0,     0,   131,   132,     0,   133,     0,
       0,   134,     0,   135,     0,     0,     0,   136,   137,     0,
       0,   591,     0,  1232,   342,   343,   344,   345,     0,     0,
       0,     0,     0,     0,   142,     0,     0,     0,   346,   986,
       0,   986,   347,   348,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   144,   145,   696,     0,     0,     0,     0,
       0,     0,   696,     0,     0,     0,   515,   516,   517,     0,
       0,     0,   349,     0,   350,     0,     0,     0,     0,     0,
       0,   518,     0,     0,     0,   519,   520,   521,   307,   308,
     522,   523,   524,   525,   526,   527,   528,   529,   530,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   531,   532,   533,     0,     0,     0,     0,
       0,   515,   516,   517,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   518,     0,     0,     0,
     519,   520,   521,   307,   308,   522,   523,   524,   525,   526,
     527,   528,   529,   530,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   531,   532,
     533,     0,     0,     0,     0,   840,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1316,  1317,     0,  1353,     0,     0,     0,   867,     0,     0,
       0,     0,  1364,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1394,  1395,  1396,  1397,    66,
      67,    68,    69,    70,    71,   696,     0,     0,     0,     0,
       0,  1402,   696,     0,   696,     0,    72,    73,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,   986,     0,
     162,   164,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,    88,
       0,    89,    90,    91,   534,   535,   536,   537,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,     0,  1645,     0,   111,    13,  1200,     0,   112,   534,
     535,   536,   537,     0,     0,     0,  1535,     0,     0,  1364,
       0,     0,     0,     0,     0,     0,     0,  1157,     0,     0,
       0,     0,     0,     0,   865,     0,     0,   865,     0,     0,
       0,     0,     0,     0,     0,     0,   696,   696,   696,   696,
       0,   113,   114,     0,     0,     0,   696,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   128,     0,
       0,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   134,     0,   135,     0,     0,     0,
     136,   137,     0,     0,   591,     0,     0,   138,   139,   140,
     141,  1638,     3,     4,     5,     6,     0,   142,     0,     0,
       0,     0,     0,     0,     7,     8,     9,    10,     0,     0,
       0,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,   144,   145,     0,   865,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   918,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   515,   516,   517,     0,     0,     0,     0,     0,
       0,  1364,     0,     0,     0,     0,     0,   518,     0,     0,
       0,   519,   520,   521,   307,   308,   522,   523,   524,   525,
     526,   527,   528,   529,   530,     0,     0,     0,     0,    13,
      14,     0,     0,  1707,     0,  1708,     0,     0,  1709,   531,
     532,   533,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   840,     0,     0,
       0,   865,     0,     0,     0,     0,     0,     0,     0,     0,
     865,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1181,     0,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     0,    18,     0,     0,
       0,     0,     0,   642,     0,     0,     0,    25,     0,     0,
       0,     0,     0,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,    29,     0,     0,     0,     0,  1787,  1535,  1535,
       0,  1535,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   642,     0,     0,     0,   865,     0,     0,     0,     0,
       0,   643,   644,   645,   646,   647,     0,     0,    30,   648,
     649,   650,   651,   652,   865,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,     0,     0,     0,
       0,  1581,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1833,     0,     0,     0,     0,     0,  1838,   643,
     644,   645,   646,   647,     0,     0,     0,   648,   649,   650,
     651,   652,     0,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,     0,     0,     0,     0,   293,
       0,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,     0,     0,   305,   306,     0,     0,    72,    73,
       0,     0,    74,   307,   308,     0,     0,     0,     0,     0,
     534,   535,   536,   537,    75,     0,     0,    76,     0,     0,
     309,   310,   311,   312,   313,   314,   315,     0,    77,     0,
       0,   267,   268,   269,     0,     0,     0,     0,   316,    78,
       0,     0,     0,   164,   165,   166,     0,     0,  1182,     0,
       0,     0,     0,     0,     0,    79,     0,     0,    80,     0,
       0,    81,     0,  1787,     0,     0,  1535,    82,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
      86,   317,     0,     0,   865,   318,     0,     0,    87,   319,
       0,    88,     0,    89,    90,    91,  1582,  1973,     0,   320,
      92,    93,     0,     0,     0,     0,     0,     0,     0,   321,
     322,   323,   324,   325,     0,   326,   327,    94,    95,   328,
     329,    96,   330,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   331,   105,   106,   107,   108,     0,   109,   332,
     110,     0,     0,     0,     0,     0,   111,     0,   333,     0,
     112,   334,     0,   933,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   934,   935,     0,     0,   335,   336,     0,
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
       0,     0,     0,   143,     0,     0,     0,     0,   144,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   349,   293,   350,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,     0,     0,   305,   306,     0,     0,    72,    73,     0,
       0,    74,   307,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,     0,     0,   309,
     310,   311,   312,   313,   314,   315,     0,    77,     0,     0,
     267,   268,   269,     0,     0,     0,     0,   316,    78,     0,
       0,   162,   164,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
     317,     0,     0,     0,   318,     0,     0,    87,   319,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   320,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   321,   322,
     323,   324,   325,     0,   326,   327,    94,    95,   328,   329,
      96,   330,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   331,   105,   106,   107,   108,     0,   109,   332,   110,
       0,     0,     0,     0,     0,   111,    13,   590,     0,   112,
     334,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   335,   336,     0,     0,
       0,   337,   338,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   127,     0,     0,     0,     0,     0,   128,
       0,     0,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,     0,   135,     0,     0,
       0,  1631,   137,     0,     0,     0,     0,     0,   342,   343,
     344,   345,     0,     0,     0,     0,     0,     0,   142,     0,
       0,     0,   346,     0,     0,     0,   347,   348,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,     0,   144,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   349,   293,   350,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
       0,     0,   305,   306,     0,     0,    72,    73,     0,     0,
      74,   307,   308,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,   309,   310,
     311,   312,   313,   314,   315,     0,    77,     0,     0,   267,
     268,   269,     0,     0,     0,     0,   316,    78,     0,     0,
       0,   164,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,   317,
       0,     0,     0,   318,     0,     0,    87,   319,     0,    88,
       0,    89,    90,    91,     0,     0,     0,   320,    92,    93,
       0,     0,     0,     0,     0,     0,     0,   321,   322,   323,
     324,   325,     0,   326,   327,    94,    95,   328,   329,    96,
     330,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     331,   105,   106,   107,   108,     0,   109,   332,   110,     0,
       0,     0,     0,     0,   111,     0,   333,     0,   112,   334,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   335,   336,     0,     0,     0,
     337,   338,   339,     0,     0,     0,     0,     0,     0,   340,
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
       0,   143,     0,     0,     0,     0,   144,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   349,   293,   350,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,     0,    72,    73,     0,     0,    74,
     307,   308,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    76,     0,     0,   309,   310,   311,
     312,   313,   314,   315,     0,    77,     0,     0,   267,   268,
     269,     0,     0,     0,     0,   316,    78,     0,     0,     0,
     164,   165,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,    80,     0,     0,    81,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,   317,     0,
       0,     0,   318,     0,     0,    87,   319,     0,    88,     0,
      89,    90,    91,     0,     0,     0,   320,    92,    93,     0,
       0,     0,     0,     0,     0,     0,   321,   322,   323,   324,
     325,     0,   326,   327,    94,    95,   328,   329,    96,   330,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   331,
     105,   106,   107,   108,     0,   109,   332,   110,     0,     0,
       0,     0,     0,   111,     0,   333,     0,   112,   334,     0,
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
     346,     0,     0,     0,   347,   348,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,     0,   144,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   349,   293,   350,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,     0,     0,
     305,   306,     0,     0,    72,    73,     0,     0,    74,   307,
     308,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,    76,     0,     0,   309,   310,   311,   312,
     313,   314,   315,     0,    77,     0,     0,   267,   268,   269,
       0,     0,     0,     0,   316,    78,     0,     0,     0,   164,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,    80,     0,     0,    81,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,   318,     0,     0,    87,   319,     0,    88,     0,    89,
      90,    91,     0,     0,     0,   320,    92,    93,     0,     0,
       0,     0,     0,     0,     0,   321,   322,   323,   324,   325,
       0,   326,   327,    94,    95,   328,   329,    96,   330,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   331,   105,
     106,   107,   108,     0,   109,   332,   110,     0,     0,     0,
       0,     0,   111,     0,   600,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1718,     0,     0,
       0,     0,     0,   335,   336,     0,     0,     0,   337,   338,
     339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,     0,   136,   137,
       0,     0,     0,     0,     0,   342,   343,   344,   345,     0,
       0,     0,     0,     0,     0,   142,     0,     0,     0,   346,
       0,     0,     0,   347,   348,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,   144,   145,     0,     0,     0,     0,
       0,     0,  1719,     0,     0,     0,     0,     0,     0,  1720,
       0,     0,     0,     0,   293,   350,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,     0,     0,   305,
     306,     0,     0,    72,    73,     0,     0,    74,   307,   308,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,    76,     0,     0,   309,   310,   311,   312,   313,
     314,   315,     0,    77,     0,     0,   267,   268,   269,     0,
       0,     0,     0,   316,    78,     0,     0,   162,   164,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
     318,     0,     0,    87,   319,     0,    88,     0,    89,    90,
      91,     0,     0,     0,   320,    92,    93,     0,     0,     0,
       0,     0,     0,     0,   321,   322,   323,   324,   325,     0,
     326,   327,    94,    95,   328,   329,    96,   330,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   331,   105,   106,
     107,   108,     0,   109,   332,   110,     0,     0,     0,     0,
       0,   111,     0,   705,   706,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   335,   336,     0,     0,     0,   337,   338,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   341,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,   127,
       0,     0,     0,     0,     0,   128,     0,     0,   129,     0,
       0,     0,   130,     0,     0,   131,   132,     0,   133,     0,
       0,   134,     0,   135,     0,     0,     0,   136,   137,     0,
       0,     0,     0,     0,   342,   343,   344,   345,     0,     0,
       0,     0,     0,     0,   142,     0,     0,     0,   346,     0,
       0,     0,   347,   348,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   144,   145,     0,   293,     0,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,   350,    72,    73,     0,     0,    74,
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
       0,   983,     0,     0,   335,   336,     0,     0,     0,   337,
     338,   339,     0,     0,     0,     0,     0,     0,   984,     0,
       0,   341,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   985,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   342,   343,   344,   345,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
     346,     0,     0,     0,   347,   348,     0,     0,     0,     0,
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
     323,   324,   325,  1534,   326,   327,    94,    95,   328,   329,
      96,   330,    97,    98,    99,   100,   101,   102,   103,   873,
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
       0,     0,     0,     0,   143,     0,     0,     0,     0,   144,
     145,     0,     0,     0,     0,     0,     0,  1719,     0,     0,
       0,     0,     0,     0,  1720,     0,     0,     0,     0,   293,
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
       0,     0,     0,   143,     0,     0,     0,     0,   144,   145,
       0,     0,     0,     0,     0,     0,  1963,     0,     0,     0,
       0,     0,     0,  1964,     0,     0,     0,     0,   293,   350,
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
       0,     0,   346,   615,     0,     0,   347,   348,     0,     0,
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
     694,   112,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,   321,   322,   323,   324,   325,     0,   326,   327,
      94,    95,   328,   329,    96,   330,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   331,   105,   106,   107,   108,
       0,   109,   332,   110,     0,     0,     0,     0,     0,   111,
       0,   600,     0,   112,     0,   967,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,   145,     0,   293,     0,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,     0,     0,   305,
     306,     0,   350,    72,    73,     0,     0,    74,   307,   308,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,    76,     0,     0,   309,   310,   311,   312,   313,
     314,   315,     0,    77,     0,     0,   267,   268,   269,     0,
       0,     0,     0,   316,    78,     0,     0,   162,   164,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
     318,     0,     0,    87,   319,     0,    88,     0,    89,    90,
      91,     0,     0,     0,   320,    92,    93,     0,     0,     0,
       0,     0,     0,     0,   321,   322,   323,   324,   325,     0,
     326,   327,    94,    95,   328,   329,    96,   330,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   331,   105,   106,
     107,   108,     0,   109,   332,   110,     0,     0,     0,     0,
       0,   111,     0,   705,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   335,   336,     0,     0,     0,   337,   338,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   341,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,   127,
       0,     0,     0,     0,     0,   128,     0,     0,   129,     0,
       0,     0,   130,     0,     0,   131,   132,     0,   133,     0,
       0,   134,     0,   135,     0,     0,     0,   136,   137,     0,
       0,     0,     0,     0,   342,   343,   344,   345,     0,     0,
       0,     0,     0,     0,   142,     0,     0,     0,   346,     0,
       0,     0,   347,   348,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   144,   145,     0,   293,     0,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,   350,    72,    73,     0,     0,    74,
     307,   308,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    76,     0,     0,   309,   310,   311,
     312,   313,   314,   315,     0,    77,     0,     0,   267,   268,
     269,     0,     0,     0,     0,   316,    78,     0,     0,     0,
     164,   165,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,  1362,     0,     0,    81,     0,
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
    1363,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   342,   343,   344,   345,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
     346,     0,     0,     0,   347,   348,     0,     0,     0,     0,
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
       0,     0,   346,  1635,     0,     0,   347,   348,     0,     0,
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
     321,   322,   323,   324,   325,  1534,   326,   327,    94,    95,
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
       0,     0,   321,   322,   323,   324,   325,     0,   326,   327,
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
     347,   348,    66,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,    72,
      73,   144,   145,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,    76,     0,
       0,     0,   350,     0,     0,     0,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,     0,   164,   165,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,    80,
       0,     0,    81,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    83,    84,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,    89,    90,    91,   642,     0,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,   111,     0,   917,
       0,   112,     0,     0,     0,   643,   644,   645,   646,   647,
       0,     0,     0,   648,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,     0,   135,
       0,     0,     0,   136,   137,     0,     0,     0,     0,     0,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
     142,     0,    66,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,     0,     0,    74,   143,     0,     0,     0,     0,   144,
     145,     0,  1179,     0,     0,    75,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   918,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     3,     4,  1459,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,  1460,     0,     0,    80,
       0,     0,  1461,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    83,    84,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,    89,    90,    91,   642,     0,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,   111,     0,     0,
       0,   112,     0,     0,     0,   643,   644,   645,   646,   647,
       0,     0,     0,   648,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,    15,   116,     0,     0,     0,
       0,     0,   117,    16,  1463,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,    25,     0,     0,     0,
       0,   128,    26,    27,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,    28,   135,
    1464,    29,     0,   136,   137,     0,     0,     0,     0,     0,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,  1465,     0,     0,  1908,     0,     0,
    1466,  1909,  -338,     0,     0,     0,     0,    30,    66,    67,
      68,    69,    70,    71,   143,     0,     0,     0,     0,   144,
     145,     0,  1195,     0,     0,    72,    73,     0,     0,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     3,     4,  1459,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,  1460,     0,     0,    80,     0,     0,  1461,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,   642,     0,     0,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,     0,   109,     0,   110,     0,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
       0,   643,   644,   645,   646,   647,     0,     0,     0,   648,
     649,   650,   651,   652,     0,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,    15,   116,     0,     0,     0,     0,  1462,   117,    16,
    1463,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,    25,     0,     0,     0,     0,   128,    26,    27,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,    28,   135,  1464,    29,     0,   136,
     137,     0,     0,     0,     0,     0,   138,   139,   140,   141,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
    1465,     0,     0,     0,     0,     0,  1466,     0,     0,     0,
       0,  1467,     0,    30,    66,    67,    68,    69,    70,    71,
     143,     0,     0,     0,     0,   144,   145,     0,  1577,     0,
       0,    72,    73,     0,     0,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     3,     4,  1459,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,  1460,     0,
       0,    80,     0,     0,  1461,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
     642,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,     0,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     0,     0,     0,     0,   643,   644,
     645,   646,   647,     0,     0,     0,   648,   649,   650,   651,
     652,     0,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,    15,   116,     0,
       0,     0,     0,  1760,   117,    16,  1463,  1761,   119,   120,
     121,   122,   123,   124,   125,   126,     0,   127,    25,     0,
       0,     0,     0,   128,    26,    27,   129,     0,     0,     0,
     130,     0,     0,   131,   132,     0,   133,     0,     0,   134,
      28,   135,  1464,    29,     0,   136,   137,     0,     0,     0,
       0,     0,   138,   139,   140,   141,  1906,     0,     0,     0,
       0,     0,   142,     0,     0,     0,  1465,     0,     0,     0,
       0,     0,  1466,     0,     0,     0,     0,  1467,     0,    30,
      66,    67,    68,    69,    70,    71,   143,     0,     0,     0,
       0,   144,   145,     0,     0,     0,     0,    72,    73,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     3,
       4,  1459,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1460,     0,     0,    80,     0,     0,
    1461,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,    89,    90,    91,     0,     0,   642,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,     0,   109,     0,   110,
       0,     0,     0,     0,     0,   111,     0,     0,     0,   112,
       0,     0,     0,     0,     0,   643,   644,   645,   646,   647,
       0,     0,     0,   648,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,    15,   116,     0,     0,     0,     0,     0,
     117,    16,  1463,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   127,    25,     0,     0,     0,     0,   128,
      26,    27,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,    28,   135,  1464,    29,
       0,   136,   137,     0,     0,     0,     0,     0,   138,   139,
     140,   141,   906,     0,     0,     0,     0,     0,   142,     0,
       0,     0,  1465,     0,     0,     0,     0,     0,  1466,     0,
    -338,     0,     0,     0,     0,    30,    66,    67,    68,    69,
      70,    71,   143,     0,     0,     0,     0,   144,   145,     0,
       0,     0,     0,    72,    73,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     3,     4,  1459,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    1460,     0,     0,    80,     0,     0,  1461,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,     0,     0,   642,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,     0,   109,     0,   110,     0,     0,     0,     0,
       0,   111,     0,     0,     0,   112,     0,     0,     0,     0,
       0,   643,   644,   645,   646,   647,     0,     0,     0,   648,
     649,   650,   651,   652,     0,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,    15,
     116,     0,     0,     0,     0,     0,   117,    16,  1463,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,   127,
      25,     0,     0,     0,     0,   128,    26,    27,   129,     0,
       0,     0,   130,     0,     0,   131,   132,     0,   133,     0,
       0,   134,    28,   135,  1464,    29,     0,   136,   137,     0,
       0,     0,     0,     0,   138,   139,   140,   141,  1752,     0,
       0,     0,     0,     0,   142,     0,     0,     0,  1465,     0,
       0,     0,     0,     0,  1466,     0,     0,     0,     0,     0,
    1981,    30,    66,    67,    68,    69,    70,    71,   143,     0,
       0,     0,     0,   144,   145,     0,     0,     0,     0,    72,
      73,     0,     0,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     3,     4,  1459,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,  1460,     0,     0,    80,
       0,     0,  1461,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    83,    84,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,    89,    90,    91,   642,     0,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,   111,     0,     0,
       0,   112,     0,     0,     0,   643,   644,   645,   646,   647,
       0,     0,     0,   648,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,    15,   116,     0,     0,     0,
       0,     0,   117,    16,  1463,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   665,   127,    25,     0,     0,     0,
       0,   128,    26,    27,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,    28,   135,
    1464,    29,     0,   136,   137,     0,     0,     0,     0,     0,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,  1465,     0,     0,     0,     0,     0,
    1466,     0,     0,     0,     0,     0,     0,    30,    66,    67,
      68,    69,    70,    71,   143,     0,     0,     0,     0,   144,
     145,     0,     0,     0,     0,    72,    73,     0,     0,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     3,     4,  1459,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,  1460,     0,     0,    80,     0,     0,  1461,     0,
       0,     0,     0,     0,    82,     0,  1226,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,   642,     0,     0,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,     0,   109,     0,   110,     0,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
       0,   643,   644,   645,   646,   647,     0,     0,     0,   648,
     649,   650,   651,   652,     0,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,     0,     0,     0,   117,    16,
    1463,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,    26,    27,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,    28,   135,  1464,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   138,   139,   140,   141,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
    1465,     0,     0,     0,     0,     0,  1466,     0,     0,     0,
       0,  1938,     0,    30,    66,    67,    68,    69,    70,    71,
     143,     0,     0,     0,     0,   144,   145,     0,     0,     0,
       0,    72,    73,     0,     0,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     3,     4,  1459,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,  1460,     0,
       0,    80,     0,     0,  1461,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,  1579,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
     642,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
    1580,   109,     0,   110,     0,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     0,     0,     0,     0,   643,   644,
     645,   646,   647,     0,     0,     0,   648,   649,   650,   651,
     652,     0,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   116,     0,
       0,     0,     0,     0,   117,    16,  1463,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     0,   127,     0,     0,
       0,     0,     0,   128,    26,    27,   129,     0,     0,     0,
     130,     0,     0,   131,   132,     0,   133,     0,     0,   134,
      28,   135,  1464,     0,     0,   136,   137,     0,     0,     0,
       0,     0,   138,   139,   140,   141,     0,     0,     0,     0,
       0,     0,   142,     0,     0,     0,  1465,     0,     0,     0,
       0,     0,  1466,     0,     0,     0,     0,     0,  2030,    30,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,   145,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
      72,    73,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,   226,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
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
     663,   664,     0,     0,     0,     0,     0,     0,  1130,  1131,
       0,     0,     0,     0,     0,   276,   277,   233,   234,   235,
     236,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,     0,     0,     0,
       0,     0,   128,     0,     0,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,     0,
     135,     0,     0,     0,   278,   137,     0,     0,     0,     0,
       0,   138,   139,   140,   141,     0,     0,     0,     0,     0,
       0,   142,    66,    67,    68,   990,   991,   992,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,     0,     0,    74,     0,   143,     0,     0,     0,     0,
     144,   145,     0,     0,     0,    75,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,     0,   164,   165,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,    80,
       0,     0,    81,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    83,    84,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,    89,    90,    91,     0,   642,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,   111,  1180,     0,
       0,   112,     0,     0,     0,     0,   643,   644,   645,   646,
     647,     0,     0,     0,   648,   649,   650,   651,   652,     0,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   993,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,     0,   135,
       0,     0,     0,   136,   137,     0,     0,     0,     0,     0,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
     142,    66,    67,    68,   990,   991,   992,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
       0,     0,    74,     0,   143,     0,     0,     0,     0,   144,
     145,     0,     0,     0,    75,     0,     0,    76,     0,     0,
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
       0,   104,     0,   105,   106,   107,   108,  1533,   109,     0,
     110,     0,     0,     0,     0,     0,   111,     0,     0,     0,
     112,     0,     0,     0,     0,   643,   644,   645,   646,   647,
       0,     0,     0,   648,   649,   650,   651,   652,     0,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,  1433,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,     0,     0,     0,     0,     0,
     128,     0,     0,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,     0,   135,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,   138,
     139,   140,   141,     0,     0,     0,     0,     0,     0,   142,
      66,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,     0,
       0,    74,     0,   143,     0,     0,     0,     0,   144,   145,
       0,     0,     0,    75,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,   164,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,    89,    90,    91,     0,   642,     0,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,  1578,   109,     0,   110,
       0,     0,     0,     0,     0,   111,     0,     0,     0,   112,
       0,     0,     0,     0,   643,   644,   645,   646,   647,     0,
       0,     0,   648,   649,   650,   651,   652,     0,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   127,     0,     0,     0,     0,     0,   128,
       0,     0,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,     0,   135,     0,     0,
       0,   136,   137,     0,     0,     0,     0,     0,   138,   139,
     140,   141,     0,     0,     0,     0,     0,     0,   142,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,     0,     0,
      74,     0,   143,     0,     0,     0,     0,   144,   145,     0,
       0,     0,    75,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,   267,
     268,   269,     0,     0,     0,     0,     0,   270,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,    88,
       0,    89,    90,    91,     0,   642,     0,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,  1584,   109,     0,   110,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,     0,   643,   644,   645,   646,   647,     0,     0,
       0,   648,   649,   650,   651,   652,     0,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   128,     0,
       0,   271,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   272,     0,   135,     0,     0,     0,
     136,   137,     0,     0,     0,     0,     0,   138,   273,   140,
     141,     0,     0,     0,     0,     0,     0,   142,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,     0,     0,    74,
       0,   143,     0,     0,     0,     0,   144,   145,     0,     0,
       0,    75,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,    80,     0,     0,    81,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,     0,   642,     0,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,  1811,   109,     0,   718,     0,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
       0,     0,   643,   644,   645,   646,   647,     0,     0,     0,
     648,   649,   650,   651,   652,     0,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,   257,   258,   259,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   719,
     137,     0,     0,     0,     0,     0,   138,   139,   140,   141,
       0,     0,     0,     0,     0,     0,   142,    66,    67,    68,
     990,   991,   992,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,     0,     0,    74,     0,
     143,     0,     0,     0,     0,   144,   145,     0,     0,     0,
      75,     0,     0,    76,     0,     0,     0,     0,     0,     0,
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
     106,   107,   108,  1812,   109,     0,   110,     0,     0,     0,
       0,     0,   111,     0,     0,     0,   112,     0,     0,     0,
       0,   643,   644,   645,   646,   647,     0,     0,     0,   648,
     649,   650,   651,   652,     0,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,     0,   136,   137,
       0,     0,     0,     0,     0,   138,   139,   140,   141,     0,
       0,     0,     0,     0,     0,   142,    66,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,     0,     0,    74,     0,   143,
       0,     0,     0,     0,   144,   145,     0,     0,     0,    75,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,     0,   642,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,  1813,   109,     0,   110,     0,     0,     0,     0,
       0,   111,     0,    14,     0,   112,     0,     0,     0,     0,
     643,   644,   645,   646,   647,     0,     0,     0,   648,   649,
     650,   651,   652,     0,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,   127,
       0,     0,     0,     0,     0,   128,     0,     0,   129,     0,
       0,     0,   130,     0,     0,   131,   132,     0,   133,     0,
       0,   134,     0,   135,     0,     0,     0,   136,   137,     0,
       0,     0,     0,     0,   138,   139,   140,   141,     0,     0,
       0,     0,     0,     0,   142,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,     0,     0,    74,     0,   143,     0,
       0,     0,     0,   144,   145,     0,     0,     0,    75,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,     0,    89,    90,    91,
       0,     0,     0,     0,    92,    93,   642,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,     0,   109,     0,   110,     0,     0,     0,     0,     0,
     111,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,  1077,     0,     0,   643,   644,   645,   646,   647,     0,
       0,     0,   648,   649,   650,   651,   652,     0,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,  1078,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,     0,
       0,     0,     0,     0,   128,     0,     0,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,     0,   135,     0,     0,     0,   136,   137,     0,     0,
       0,     0,     0,   138,   139,   140,   141,     0,     0,     0,
       0,     0,     0,   142,    66,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,     0,     0,    74,     0,   143,     0,     0,
       0,     0,   144,   145,     0,     0,     0,    75,     0,     0,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,    80,     0,     0,    81,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
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
     121,   122,   123,   124,   125,   126,     0,   127,     0,     0,
       0,     0,     0,   128,     0,     0,   129,     0,     0,     0,
     130,     0,     0,   131,   132,     0,   133,     0,     0,   134,
     452,   135,     0,     0,     0,   136,   137,     0,     0,     0,
       0,     0,   138,   139,   140,   141,     0,     0,     0,     0,
       0,     0,   142,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,     0,     0,    74,     0,   143,     0,     0,     0,
       0,   144,   145,     0,     0,     0,    75,     0,     0,    76,
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
     420,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,     0,     0,     0,
       0,     0,   128,     0,     0,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,     0,
     135,     0,     0,     0,   136,   137,     0,     0,     0,     0,
       0,   138,   139,   140,   141,     0,     0,     0,     0,     0,
       0,   142,    66,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,     0,     0,    74,     0,   143,     0,     0,     0,     0,
     144,   145,     0,     0,     0,    75,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,    80,
       0,     0,    81,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    83,    84,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,    89,    90,    91,     0,     0,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,   111,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1065,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,     0,   135,
       0,     0,     0,   136,   137,     0,     0,     0,     0,     0,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
     142,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
       0,     0,    74,     0,   143,     0,     0,     0,     0,   144,
     145,     0,     0,     0,    75,     0,     0,    76,     0,     0,
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
       0,   115,     0,  1078,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,     0,     0,     0,     0,     0,
     128,     0,     0,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,     0,   135,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,   138,
     139,   140,   141,     0,     0,     0,     0,     0,     0,   142,
      66,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,     0,
       0,    74,     0,   143,     0,     0,     0,     0,   144,   145,
       0,     0,     0,    75,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   127,     0,     0,     0,     0,     0,   128,
       0,     0,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,     0,   135,     0,     0,
       0,   136,   137,     0,     0,     0,     0,     0,   138,   139,
     140,   141,     0,     0,     0,     0,     0,     0,   142,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,     0,     0,
      74,     0,   143,     0,     0,     0,     0,   144,   145,     0,
       0,     0,    75,     0,     0,    76,     0,     0,     0,     0,
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
       0,   113,   114,     0,     0,     0,     0,     0,     0,   480,
       0,     0,     0,   116,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   128,     0,
       0,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   134,     0,   135,     0,     0,     0,
     136,   137,     0,     0,     0,     0,     0,   138,   139,   140,
     141,     0,     0,     0,     0,     0,     0,   142,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,     0,     0,    74,
       0,   143,     0,     0,     0,     0,   144,   145,     0,     0,
       0,    75,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,    80,     0,     0,    81,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,     0,     0,
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
       0,     0,   116,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   138,   139,   140,   141,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1215,     0,     0,     0,     0,   144,   145
};

static const yytype_int16 yycheck[] =
{
       0,    35,    17,     4,   763,     0,   291,   162,     9,   291,
       0,   406,    13,   161,   623,     0,    17,    18,    24,   215,
       0,   423,  1050,   171,   281,     0,   671,   425,   755,   576,
       0,   536,   214,    34,    35,   281,   579,   924,   925,   281,
     188,   189,   581,   317,   587,   193,   782,  1286,  1505,   454,
     589,   943,   944,    26,    11,   426,   869,     0,   871,     3,
     495,   333,    16,   442,    65,   500,   501,   502,   917,   882,
     535,    11,     4,   552,    14,  1350,   497,   498,    14,     3,
     333,   334,   738,   739,   110,     3,    18,    58,   744,   773,
     774,    82,  1074,   209,  1865,   263,   349,  1883,    84,  1682,
       0,   110,  1685,  1416,   157,   109,    66,    66,  1412,     5,
       6,     7,     8,     9,    10,   513,   171,   108,   173,   124,
     293,   294,   295,    27,   406,  1074,     0,   626,   259,   172,
     552,    58,   114,    65,    67,    82,   151,   295,   110,   263,
     732,   157,   110,   148,  1419,   338,   110,  1165,   110,   342,
     151,   152,  1427,   311,    87,   188,   157,   173,  1503,    86,
      80,     5,     6,     7,     8,     9,    10,  1953,   760,   342,
     338,   153,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,  1664,     0,   210,
     211,   212,   172,   172,   338,   248,     0,   390,   391,   611,
     152,   700,   620,   170,   225,    42,    43,    64,   229,   172,
     173,   174,   175,   176,   207,    11,   237,   238,   239,   240,
     241,   242,   243,   247,   245,   246,    83,  2018,   171,    11,
     259,   252,   253,  1640,   172,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,    82,   462,   191,   192,  1614,
     271,   272,   172,   173,   174,   175,   176,   278,   214,   211,
     212,  1594,   554,   338,   679,   338,   459,  1870,    66,  1593,
     291,   292,     3,   565,   566,    66,   339,   229,   172,   173,
     174,   175,   176,   674,    66,   237,   238,   239,   240,     3,
    1046,   243,   338,   245,   246,   286,   738,   739,   590,  1301,
     321,   253,   744,   828,   256,   257,   258,   259,   600,   261,
     262,   263,   264,   265,   450,   878,   484,   590,   983,   330,
     985,   746,  1742,   615,   335,   884,   278,   726,   727,   623,
     336,  1200,  1301,  1166,   853,   259,  1169,   629,   312,   794,
     795,   796,  1749,   364,   829,  1383,   338,   159,  1755,   848,
     314,   792,   268,  1029,   338,  1059,   338,   630,   338,    55,
     172,   173,   174,   175,   176,   173,   343,   640,   172,   173,
     174,   175,   176,   171,   172,   313,   172,   333,   278,  1856,
     171,   172,  1641,   343,  1679,   172,   171,  1646,   423,   171,
     172,   255,   249,   172,   258,   338,   417,    66,   173,   420,
     172,     3,   423,   249,   132,   426,   172,   172,   103,   821,
     822,   173,   364,   705,   109,   167,   168,   169,   114,    78,
     173,   614,     0,   444,     3,   271,    86,  1847,  1835,  1849,
      64,    65,    66,    67,   271,   109,     3,  1844,   338,    55,
     461,   172,   276,    64,    65,    66,    67,   132,   441,   470,
     471,   472,   473,   474,   173,   150,   247,   171,   172,   480,
     514,   173,   157,   173,     0,   486,   487,     0,   745,   490,
     888,   492,   493,   494,    53,   110,   150,   433,   132,   745,
    1392,  1393,   280,   745,   700,   762,   173,   508,   322,   280,
     173,   512,   444,   514,   173,   157,   762,  1756,   114,  1906,
     762,  1908,   171,   172,   895,   173,   173,   109,   173,   461,
      56,   173,    16,   295,   217,   218,    62,   538,   470,   471,
     472,   473,   474,   173,   173,   173,    21,    22,  1361,   333,
     338,   173,   798,   188,   811,   487,   798,   271,   490,  1372,
     492,   493,   494,   759,   173,   811,  1379,   852,   164,   811,
     852,   339,   339,   338,   188,  1311,  1123,   851,   173,   173,
     339,   173,   854,   338,    68,    69,    70,   339,    72,    73,
      74,    75,   188,   339,   339,  1204,   338,  1242,   247,   173,
     276,  1210,   608,  1212,   610,   338,   109,  1029,   623,   757,
     342,  1009,  1151,   248,   172,   173,   174,   175,   176,  2006,
     101,   173,   623,   624,   171,   172,   627,   217,   218,   173,
     173,   280,   246,   229,   230,   231,   232,   173,   574,   338,
     173,   894,   317,   917,   259,   246,   338,   820,   338,   109,
     189,   132,   848,   668,   590,   269,   172,   173,   174,   175,
     176,   257,   915,   338,   600,  1100,   172,   668,   269,   670,
     171,   338,   175,   674,   675,   338,   227,   951,    82,   338,
     276,   165,   688,    66,   937,   281,   167,   168,   169,   172,
     338,   338,   173,   338,   947,   948,   310,   172,  1585,     5,
       6,     7,     8,     9,    10,    82,    98,    83,   338,   338,
     338,  1739,  1740,    66,   339,   175,   338,   109,   719,   126,
     316,   276,   318,   226,   131,   276,   277,   133,   901,   338,
     903,   115,   116,   117,   118,   119,   120,   121,   122,   675,
     114,   125,   172,   338,   338,   267,   338,   228,   152,  1419,
     251,   155,   338,    39,    40,   756,  1030,  1427,    64,    65,
      66,    67,   262,   266,   338,   141,   269,   322,   249,   705,
     271,   772,   773,   774,   255,   256,   279,   151,   262,   153,
     781,   782,   159,   175,    70,   162,   338,   719,   171,   172,
     574,  1189,   793,   274,   338,   338,   278,     5,  1196,  1408,
    1198,  1410,   338,    11,  1413,   338,   590,   213,   214,   215,
     216,  1068,   818,   294,   295,   296,   600,    82,   171,   172,
     227,   151,  1068,   153,   756,   101,  1068,   250,   834,   338,
    1087,  1266,  1267,  1268,  1030,  1378,  1341,   228,  1381,    87,
     247,  1087,    90,   266,   109,  1087,   101,   249,    96,  1220,
     263,   852,  1025,   263,   855,   247,   279,   338,   249,    87,
    1056,   793,    86,   864,   255,   256,    94,    95,   109,   271,
    1241,   872,   274,   275,    68,    69,    70,   164,   879,   109,
      74,    75,   188,   274,  1021,   126,  1023,  1024,  1145,  1146,
     131,   167,   168,   169,   895,  1622,  1623,   173,    11,  1145,
    1146,   234,   917,  1145,  1146,   238,   842,   843,   844,  1091,
    1092,   259,   167,   168,   169,   231,   917,   147,   276,   149,
     150,   705,   923,   924,   925,   276,  1200,     5,     6,     7,
    1204,   276,   864,   317,   175,   298,  1210,   300,  1212,   298,
     246,   300,    20,   230,   231,   232,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      68,    69,    70,   269,    72,    73,    74,    75,    42,    43,
     767,   768,   769,   770,    52,    53,    54,   298,  1587,   300,
      85,   917,   167,   168,   169,   226,   227,   316,   173,   167,
     168,   169,  1390,  1391,   791,   173,    81,    82,   999,   167,
     168,   169,  1400,   276,   310,   173,   247,   943,   944,   298,
     115,   300,   117,   118,   119,   120,   121,   122,   276,  1857,
     125,  1859,  1860,  1861,   231,   266,  1027,  1028,   269,   172,
     173,   293,  1314,   176,   225,  1036,  1037,   176,   279,  1040,
     167,   168,   169,  1044,  1045,  1046,     5,     6,     7,     8,
       9,    10,   176,  1226,   632,   633,   634,   165,  1059,    88,
      89,   276,  1605,  1064,   276,    85,   252,   253,   173,  1464,
      64,    65,  1073,    67,  1074,   338,  1077,  1078,   103,  1074,
    1016,   133,   320,   321,   294,  1331,   282,  1260,  1089,  1331,
     312,   313,   314,   315,     3,   115,  1097,   117,   118,   119,
     120,   121,   122,     3,  1277,   125,  1279,  1280,  1281,    99,
     100,   176,   172,  1045,   179,   180,   181,   182,   183,   184,
     185,   186,   276,   277,   189,   190,   172,   191,   192,   183,
     184,  1074,   172,   917,  1408,   172,  1410,    92,    93,  1413,
      88,    89,   324,   325,   172,  1077,   172,   813,  1420,    22,
     816,   817,   818,     3,     4,   172,  1699,   209,   210,   211,
     212,   213,   214,   215,   216,  1097,   322,   323,   834,   835,
     836,   837,  1425,  1426,  1074,  1718,   133,    64,    65,    55,
     172,   174,   175,   751,   752,  1200,  1971,  1972,   124,  1204,
     286,   287,  1464,   172,  1466,  1210,   172,  1212,   172,  1200,
    1074,   550,   551,  1204,   172,   283,   284,   285,   286,  1210,
     172,  1212,   317,   317,  1215,  1007,  1498,  1499,   172,  1220,
    1221,   172,   172,   172,  1626,  1984,   287,   288,   289,   290,
     291,   292,   172,  1490,  1491,  1492,   178,   172,   114,   172,
    1241,   172,  1243,   172,  1490,  1491,  1492,   172,  1490,  1491,
    1492,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     338,   172,   328,   339,  1200,   338,   172,  1203,   172,   172,
     328,   278,    91,   338,    97,  1448,   338,  1450,   287,   288,
     289,   290,   291,   292,   317,  1286,  1287,   132,   164,   132,
    1324,   296,   132,  1294,   310,   111,   111,   317,   110,   173,
     295,  1301,    17,   259,  1459,   171,  1301,  1589,   234,   172,
    1311,   172,   188,  1587,   172,   171,   231,   247,  1590,   172,
     225,   172,    38,  1324,  1325,   172,   172,   176,   172,   166,
    1336,   172,  1338,   172,  1340,    17,   172,   172,   172,  1345,
      55,   172,   172,    58,   172,  1888,    23,   176,   295,  1350,
     339,   173,  1747,   229,   230,   231,   232,   111,  1301,   154,
     235,     3,   172,  1635,   287,   288,   289,   290,   291,   292,
    1642,   235,  1373,    55,   173,   173,    58,   171,   341,   172,
     172,   257,   172,   280,   205,   173,    81,   102,    78,   104,
     133,   172,   110,  1408,   270,  1410,   278,   254,  1413,   114,
     276,  1301,   240,   270,   103,   281,   171,  1408,   277,  1410,
     311,   171,  1413,   172,    20,  1416,  1200,   235,  1419,    98,
     102,   317,   104,   265,   317,   258,  1427,  1301,    23,   103,
     262,   338,   114,   317,   110,   157,   338,   172,   145,   338,
     316,   101,   318,  1616,     0,     1,   173,  1620,  1463,   164,
     173,  1624,   278,   338,   309,   338,  1392,  1393,   108,   284,
     133,   109,  1463,   173,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,  1759,   299,   173,   329,   338,   172,
     172,   172,   164,    87,   338,  1519,   258,   110,   255,    89,
     254,   109,   312,  1494,   110,    51,  1768,   110,   254,   262,
     271,   173,   217,   218,   219,   220,   221,   222,    64,    65,
      66,    67,   173,   319,   229,   230,   231,   232,  1519,   173,
      76,    77,    78,    79,   338,   262,   262,   173,   173,    85,
     338,  1463,   173,   173,   173,   217,   218,   219,   220,   221,
     222,   338,   257,   173,   278,  1546,   173,   229,   230,   231,
     232,   338,   173,  1726,   173,   270,   173,   172,   338,   173,
     317,   276,   173,   338,   279,   103,   281,   160,   173,   172,
     172,   172,  1587,   293,   173,   257,   132,   309,    74,    74,
      71,   172,   103,   107,  1585,   103,  1587,   173,   133,  1846,
     101,   173,  1864,  1594,   276,   173,   173,   279,   263,   281,
    1846,   263,    16,   318,  1846,   317,   173,     3,   233,   233,
     338,  1626,   261,   264,   261,   171,   172,     3,   171,   171,
    1621,   172,  1770,    76,   173,  1626,  1627,   173,   317,   142,
    1915,   173,   142,   173,   278,   247,   318,  1909,   173,    74,
    1641,   172,   103,   173,   173,  1646,    82,   325,   235,   271,
    1823,   247,   338,   338,   234,   172,   235,   340,   127,  1660,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   228,   307,   305,  1848,   226,  1850,  1679,  1680,
     236,   237,   171,   239,   172,   241,   242,   243,   244,   245,
     246,   327,   173,   249,   173,  1696,   173,   173,   173,   255,
     256,   338,   176,  1851,   339,   179,   180,   181,   182,   183,
     184,   185,   186,   172,   262,   271,   190,   173,   274,   262,
     161,   262,   173,   262,   190,  1982,  1727,   254,  1660,   338,
     338,   338,   109,   270,   227,   235,  1982,   299,   172,   172,
    1982,  1742,   172,   269,   338,   317,   172,   109,   170,   261,
     111,     5,     6,     7,   310,  1756,   263,    84,  1759,    84,
     109,   109,   109,   262,  1765,   262,    20,   173,   322,   333,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,     3,   270,   333,   109,   259,   309,
     299,   132,   306,   235,   338,   331,     5,   235,    52,    53,
      54,   335,   336,     5,   126,  1806,   339,   341,   128,   131,
     132,   326,   346,   176,   298,   317,   179,   180,   181,   182,
     183,   184,   185,   186,  1825,   153,   189,   190,  1829,   150,
    1831,   339,   338,  1765,   150,  1836,  2032,   155,     3,   189,
    1841,    59,   173,   297,   309,  2041,  1847,   132,  1849,   309,
     173,   173,   112,   175,   158,   179,   180,   181,   182,   183,
     184,   185,   186,   172,  1865,  1865,   190,  1868,   155,   152,
    1865,   334,   322,    60,   132,  1865,   297,   309,   309,   262,
    1865,  1882,   307,   322,   332,  1865,   333,    61,   299,   305,
    1865,   425,   262,   303,   262,  1865,   315,    64,   172,   433,
      41,    65,  1903,   132,   226,   227,   228,  1301,   207,   781,
    1253,   206,  1913,   445,  1915,   443,  1018,  1924,    35,   173,
    1046,  1311,   133,  1614,  2013,   247,  1991,   249,  1990,  1930,
    1931,  1932,  1933,   255,   256,   746,  1983,  1850,  2018,  1923,
    1646,  1754,  1637,  1754,   266,  2021,  1492,   269,  1777,  1776,
     444,  1331,   274,     8,   155,   176,   689,   279,   179,   180,
     181,   182,   183,   184,   185,   186,  1455,  1825,   189,   190,
    1280,  1828,  1897,  1450,  1975,   679,  1977,   677,  1390,   513,
     191,   192,   193,   194,   195,  1016,  1391,   852,   199,   200,
     201,   202,   203,   417,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,  1208,  2008,  1007,   927,
    1221,   639,   546,  1601,  1129,   886,   338,  2018,  2018,    34,
    2021,   641,   849,  2018,   904,  1718,   618,   908,  2018,   283,
     284,   285,   286,  2018,   557,   668,  1867,  1683,  2018,   511,
     638,   566,  1685,  2018,  1538,   579,   580,   581,  2018,   908,
     640,  1371,  1360,   587,   176,   589,  1363,   179,   180,   181,
     182,   183,   184,   185,   186,  1545,  1699,   189,   190,   603,
     604,   605,   588,  1800,  1879,  1887,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   619,   620,    -1,   299,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   631,   632,   633,
     634,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   642,   643,
     644,   645,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,    -1,    -1,    -1,    -1,    -1,   670,   671,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,
     109,    -1,    -1,   112,   113,    -1,   115,    -1,   117,   118,
     119,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,    -1,   162,   163,   164,    -1,    -1,    -1,    -1,
      -1,   170,   171,   172,    -1,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     874,    -1,   191,   192,   878,    -1,    -1,   196,   197,   198,
     884,    -1,    -1,    -1,   888,    -1,    -1,    -1,    -1,   208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,
      -1,    -1,   906,    -1,    -1,   909,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,   245,   246,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,   257,   943,
     944,    -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,
      -1,   270,    -1,   272,    -1,    -1,    -1,   276,   277,    -1,
      -1,   280,    -1,   967,   283,   284,   285,   286,    -1,    -1,
      -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,   297,   983,
      -1,   985,   301,   302,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,    -1,
      -1,    -1,    -1,   322,   323,  1009,    -1,    -1,    -1,    -1,
      -1,    -1,  1016,    -1,    -1,    -1,     5,     6,     7,    -1,
      -1,    -1,   341,    -1,   343,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    -1,    -1,    -1,    -1,  1129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,  1147,    -1,    -1,    -1,  1151,    -1,    -1,
      -1,    -1,  1156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1179,  1180,  1181,  1182,     5,
       6,     7,     8,     9,    10,  1189,    -1,    -1,    -1,    -1,
      -1,  1195,  1196,    -1,  1198,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,  1242,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
      -1,   117,   118,   119,   283,   284,   285,   286,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
      -1,   157,   158,   159,   160,    -1,   162,    -1,   164,    -1,
      -1,    -1,   276,    -1,   170,   171,   172,    -1,   174,   283,
     284,   285,   286,    -1,    -1,    -1,  1360,    -1,    -1,  1363,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1371,    -1,    -1,
      -1,    -1,    -1,    -1,  1378,    -1,    -1,  1381,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1390,  1391,  1392,  1393,
      -1,   217,   218,    -1,    -1,    -1,  1400,    -1,    -1,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,
      -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,
     276,   277,    -1,    -1,   280,    -1,    -1,   283,   284,   285,
     286,  1465,    64,    65,    66,    67,    -1,   293,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   317,    -1,    -1,    -1,    -1,   322,   323,    -1,  1503,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,  1545,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,   171,
     172,    -1,    -1,  1577,    -1,  1579,    -1,    -1,  1582,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1601,    -1,    -1,
      -1,  1605,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1614,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   236,   237,    -1,   239,    -1,    -1,
      -1,    -1,    -1,   133,    -1,    -1,    -1,   249,    -1,    -1,
      -1,    -1,    -1,   255,   256,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   271,
      -1,    -1,   274,    -1,    -1,    -1,    -1,  1681,  1682,  1683,
      -1,  1685,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   133,    -1,    -1,    -1,  1699,    -1,    -1,    -1,    -1,
      -1,   191,   192,   193,   194,   195,    -1,    -1,   310,   199,
     200,   201,   202,   203,  1718,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1746,    -1,    -1,    -1,    -1,    -1,  1752,   191,
     192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   201,
     202,   203,    -1,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,    -1,    -1,    -1,    -1,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
     283,   284,   285,   286,    38,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,
      -1,    85,    -1,  1867,    -1,    -1,  1870,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
     104,   105,    -1,    -1,  1888,   109,    -1,    -1,   112,   113,
      -1,   115,    -1,   117,   118,   119,   338,  1901,    -1,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,
     134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,   160,    -1,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,
     174,   175,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,   188,    -1,    -1,   191,   192,    -1,
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
      -1,    -1,    -1,   317,    -1,    -1,    -1,    -1,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   341,     3,   343,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,
     105,    -1,    -1,    -1,   109,    -1,    -1,   112,   113,    -1,
     115,    -1,   117,   118,   119,    -1,    -1,    -1,   123,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,    -1,   162,   163,   164,
      -1,    -1,    -1,    -1,    -1,   170,   171,   172,    -1,   174,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   317,    -1,    -1,    -1,    -1,   322,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   341,     3,   343,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,   105,
      -1,    -1,    -1,   109,    -1,    -1,   112,   113,    -1,   115,
      -1,   117,   118,   119,    -1,    -1,    -1,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,
     136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,    -1,   162,   163,   164,    -1,
      -1,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   191,   192,    -1,    -1,    -1,
     196,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,   205,
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
      -1,   317,    -1,    -1,    -1,    -1,   322,   323,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   341,     3,   343,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,   104,   105,    -1,
      -1,    -1,   109,    -1,    -1,   112,   113,    -1,   115,    -1,
     117,   118,   119,    -1,    -1,    -1,   123,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,   136,
     137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,    -1,   162,   163,   164,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,    -1,   174,   175,    -1,
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
     297,    -1,    -1,    -1,   301,   302,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     317,    -1,    -1,    -1,    -1,   322,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   341,     3,   343,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,   109,    -1,    -1,   112,   113,    -1,   115,    -1,   117,
     118,   119,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,   134,   135,   136,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,    -1,   162,   163,   164,    -1,    -1,    -1,
      -1,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,
      -1,    -1,    -1,    -1,   322,   323,    -1,    -1,    -1,    -1,
      -1,    -1,   330,    -1,    -1,    -1,    -1,    -1,    -1,   337,
      -1,    -1,    -1,    -1,     3,   343,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
     109,    -1,    -1,   112,   113,    -1,   115,    -1,   117,   118,
     119,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,    -1,   162,   163,   164,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,   173,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   191,   192,    -1,    -1,    -1,   196,   197,   198,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,   245,   246,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,
      -1,    -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,
      -1,   270,    -1,   272,    -1,    -1,    -1,   276,   277,    -1,
      -1,    -1,    -1,    -1,   283,   284,   285,   286,    -1,    -1,
      -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,   297,    -1,
      -1,    -1,   301,   302,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,    -1,
      -1,    -1,    -1,   322,   323,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   343,    22,    23,    -1,    -1,    26,
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
      -1,   188,    -1,    -1,   191,   192,    -1,    -1,    -1,   196,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
      -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
      -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,   245,   246,
      -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,
     257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,
     267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,   276,
     277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
     297,    -1,    -1,    -1,   301,   302,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     317,    -1,    -1,    -1,    -1,   322,   323,    -1,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,   343,    22,    23,    -1,
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
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
      -1,    -1,   317,    -1,    -1,    -1,    -1,   322,   323,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,   343,    22,
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
      -1,    -1,    -1,    -1,   317,    -1,    -1,    -1,    -1,   322,
     323,    -1,    -1,    -1,    -1,    -1,    -1,   330,    -1,    -1,
      -1,    -1,    -1,    -1,   337,    -1,    -1,    -1,    -1,     3,
     343,     5,     6,     7,     8,     9,    10,    11,    12,    13,
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
      -1,    -1,    -1,   317,    -1,    -1,    -1,    -1,   322,   323,
      -1,    -1,    -1,    -1,    -1,    -1,   330,    -1,    -1,    -1,
      -1,    -1,    -1,   337,    -1,    -1,    -1,    -1,     3,   343,
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
      -1,    -1,   297,   298,    -1,    -1,   301,   302,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   317,    -1,    -1,    -1,    -1,   322,   323,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,   343,    22,
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
     173,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   317,    -1,    -1,    -1,    -1,   322,
     323,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
     343,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
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
      -1,    -1,   133,   134,   135,   136,   137,    -1,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
      -1,   162,   163,   164,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   317,    -1,    -1,    -1,
      -1,   322,   323,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,   343,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
     109,    -1,    -1,   112,   113,    -1,   115,    -1,   117,   118,
     119,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,    -1,   162,   163,   164,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   191,   192,    -1,    -1,    -1,   196,   197,   198,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,   245,   246,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,
      -1,    -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,
      -1,   270,    -1,   272,    -1,    -1,    -1,   276,   277,    -1,
      -1,    -1,    -1,    -1,   283,   284,   285,   286,    -1,    -1,
      -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,   297,    -1,
      -1,    -1,   301,   302,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,    -1,
      -1,    -1,    -1,   322,   323,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   343,    22,    23,    -1,    -1,    26,
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
     247,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,
     257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,
     267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,   276,
     277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
     297,    -1,    -1,    -1,   301,   302,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     317,    -1,    -1,    -1,    -1,   322,   323,    -1,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,   343,    22,    23,    -1,
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
      -1,    -1,   297,   298,    -1,    -1,   301,   302,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   317,    -1,    -1,    -1,    -1,   322,   323,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,   343,    22,
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
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
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
      -1,    -1,    -1,    -1,   317,    -1,    -1,    -1,    -1,   322,
     323,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
     343,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
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
      -1,    -1,   133,   134,   135,   136,   137,    -1,   139,   140,
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
     301,   302,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   317,    -1,    -1,    22,
      23,   322,   323,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,    -1,   117,   118,   119,   133,    -1,    -1,
      -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,    -1,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,    -1,   157,   158,   159,   160,    -1,   162,
      -1,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,    -1,   191,   192,   193,   194,   195,
      -1,    -1,    -1,   199,   200,   201,   202,   203,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    -1,   248,    -1,    -1,    -1,    -1,
      -1,   254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,
      -1,   264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,
      -1,    -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,
     283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,
     293,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,   317,    -1,    -1,    -1,    -1,   322,
     323,    -1,   338,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   341,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,    -1,   117,   118,   119,   133,    -1,    -1,
      -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,    -1,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,    -1,   157,   158,   159,   160,    -1,   162,
      -1,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,   174,    -1,    -1,    -1,   191,   192,   193,   194,   195,
      -1,    -1,    -1,   199,   200,   201,   202,   203,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,   228,   229,    -1,    -1,    -1,
      -1,    -1,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    -1,   248,   249,    -1,    -1,    -1,
      -1,   254,   255,   256,   257,    -1,    -1,    -1,   261,    -1,
      -1,   264,   265,    -1,   267,    -1,    -1,   270,   271,   272,
     273,   274,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,
     283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,
     293,    -1,    -1,    -1,   297,    -1,    -1,   300,    -1,    -1,
     303,   304,   305,    -1,    -1,    -1,    -1,   310,     5,     6,
       7,     8,     9,    10,   317,    -1,    -1,    -1,    -1,   322,
     323,    -1,   338,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,
     117,   118,   119,   133,    -1,    -1,    -1,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,    -1,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,    -1,
     157,   158,   159,   160,    -1,   162,    -1,   164,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,   174,    -1,    -1,
      -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
     200,   201,   202,   203,    -1,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
      -1,   228,   229,    -1,    -1,    -1,    -1,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
      -1,   248,   249,    -1,    -1,    -1,    -1,   254,   255,   256,
     257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,
     267,    -1,    -1,   270,   271,   272,   273,   274,    -1,   276,
     277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
     297,    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
      -1,   308,    -1,   310,     5,     6,     7,     8,     9,    10,
     317,    -1,    -1,    -1,    -1,   322,   323,    -1,   338,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,    -1,   117,   118,   119,    -1,
     133,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,    -1,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,    -1,   157,   158,   159,   160,
      -1,   162,    -1,   164,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,   191,   192,
     193,   194,   195,    -1,    -1,    -1,   199,   200,   201,   202,
     203,    -1,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,   225,    -1,    -1,   228,   229,    -1,
      -1,    -1,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,    -1,   248,   249,    -1,
      -1,    -1,    -1,   254,   255,   256,   257,    -1,    -1,    -1,
     261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,
     271,   272,   273,   274,    -1,   276,   277,    -1,    -1,    -1,
      -1,    -1,   283,   284,   285,   286,   299,    -1,    -1,    -1,
      -1,    -1,   293,    -1,    -1,    -1,   297,    -1,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,   310,
       5,     6,     7,     8,     9,    10,   317,    -1,    -1,    -1,
      -1,   322,   323,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     115,    -1,   117,   118,   119,    -1,    -1,   133,    -1,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,    -1,   157,   158,   159,   160,    -1,   162,    -1,   164,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,   174,
      -1,    -1,    -1,    -1,    -1,   191,   192,   193,   194,   195,
      -1,    -1,    -1,   199,   200,   201,   202,   203,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
     225,    -1,    -1,   228,   229,    -1,    -1,    -1,    -1,    -1,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,    -1,   248,   249,    -1,    -1,    -1,    -1,   254,
     255,   256,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,
     265,    -1,   267,    -1,    -1,   270,   271,   272,   273,   274,
      -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,
     285,   286,   298,    -1,    -1,    -1,    -1,    -1,   293,    -1,
      -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,   303,    -1,
     305,    -1,    -1,    -1,    -1,   310,     5,     6,     7,     8,
       9,    10,   317,    -1,    -1,    -1,    -1,   322,   323,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,    -1,   117,   118,
     119,    -1,    -1,   133,    -1,   124,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,    -1,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,    -1,   155,    -1,   157,   158,
     159,   160,    -1,   162,    -1,   164,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,
      -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
     200,   201,   202,   203,    -1,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,   228,
     229,    -1,    -1,    -1,    -1,    -1,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,    -1,   248,
     249,    -1,    -1,    -1,    -1,   254,   255,   256,   257,    -1,
      -1,    -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,
      -1,   270,   271,   272,   273,   274,    -1,   276,   277,    -1,
      -1,    -1,    -1,    -1,   283,   284,   285,   286,   298,    -1,
      -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,   297,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
     309,   310,     5,     6,     7,     8,     9,    10,   317,    -1,
      -1,    -1,    -1,   322,   323,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,    -1,   117,   118,   119,   133,    -1,    -1,
      -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,    -1,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,    -1,   157,   158,   159,   160,    -1,   162,
      -1,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,   174,    -1,    -1,    -1,   191,   192,   193,   194,   195,
      -1,    -1,    -1,   199,   200,   201,   202,   203,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,   228,   229,    -1,    -1,    -1,
      -1,    -1,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   260,   248,   249,    -1,    -1,    -1,
      -1,   254,   255,   256,   257,    -1,    -1,    -1,   261,    -1,
      -1,   264,   265,    -1,   267,    -1,    -1,   270,   271,   272,
     273,   274,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,
     283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,
     293,    -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,    -1,    -1,    -1,   310,     5,     6,
       7,     8,     9,    10,   317,    -1,    -1,    -1,    -1,   322,
     323,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    91,    -1,   106,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,
     117,   118,   119,   133,    -1,    -1,    -1,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,    -1,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,    -1,
     157,   158,   159,   160,    -1,   162,    -1,   164,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,   174,    -1,    -1,
      -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
     200,   201,   202,   203,    -1,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
      -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
      -1,   248,    -1,    -1,    -1,    -1,    -1,   254,   255,   256,
     257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,
     267,    -1,    -1,   270,   271,   272,   273,    -1,    -1,   276,
     277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
     297,    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,
      -1,   308,    -1,   310,     5,     6,     7,     8,     9,    10,
     317,    -1,    -1,    -1,    -1,   322,   323,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,   111,    -1,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,    -1,   117,   118,   119,    -1,
     133,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,    -1,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,    -1,   157,   158,   159,   160,
     173,   162,    -1,   164,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,   191,   192,
     193,   194,   195,    -1,    -1,    -1,   199,   200,   201,   202,
     203,    -1,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,
      -1,    -1,    -1,    -1,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,    -1,   248,    -1,    -1,
      -1,    -1,    -1,   254,   255,   256,   257,    -1,    -1,    -1,
     261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,
     271,   272,   273,    -1,    -1,   276,   277,    -1,    -1,    -1,
      -1,    -1,   283,   284,   285,   286,    -1,    -1,    -1,    -1,
      -1,    -1,   293,    -1,    -1,    -1,   297,    -1,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,   309,   310,
      -1,    -1,    -1,    -1,    -1,    -1,   317,    -1,    -1,    -1,
      -1,   322,   323,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
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
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,   224,
      -1,    -1,    -1,    -1,    -1,   217,   218,   219,   220,   221,
     222,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,    -1,    -1,   257,    -1,    -1,    -1,   261,
      -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,    -1,
     272,    -1,    -1,    -1,   276,   277,    -1,    -1,    -1,    -1,
      -1,   283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,
      -1,   293,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   317,    -1,    -1,    -1,    -1,
     322,   323,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,    -1,   117,   118,   119,    -1,   133,    -1,
      -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,    -1,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,    -1,   157,   158,   159,   160,    -1,   162,
      -1,   164,    -1,    -1,    -1,    -1,    -1,   170,   183,    -1,
      -1,   174,    -1,    -1,    -1,    -1,   191,   192,   193,   194,
     195,    -1,    -1,    -1,   199,   200,   201,   202,   203,    -1,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    -1,   248,    -1,    -1,    -1,    -1,
      -1,   254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,
      -1,   264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,
      -1,    -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,
     283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,
     293,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,   317,    -1,    -1,    -1,    -1,   322,
     323,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
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
     216,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,   245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,
     264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,
      -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,
     284,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,   293,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   317,    -1,    -1,    -1,    -1,   322,   323,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     115,    -1,   117,   118,   119,    -1,   133,    -1,    -1,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,    -1,   157,   158,   159,   160,   173,   162,    -1,   164,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,   174,
      -1,    -1,    -1,    -1,   191,   192,   193,   194,   195,    -1,
      -1,    -1,   199,   200,   201,   202,   203,    -1,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,
      -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,
     265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,
      -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,
     285,   286,    -1,    -1,    -1,    -1,    -1,    -1,   293,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,   317,    -1,    -1,    -1,    -1,   322,   323,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     208,   209,   210,   211,   212,   213,   214,   215,   216,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,
      -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,
     276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,
     286,    -1,    -1,    -1,    -1,    -1,    -1,   293,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,   317,    -1,    -1,    -1,    -1,   322,   323,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,
     117,   118,   119,    -1,   133,    -1,    -1,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,    -1,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,    -1,
     157,   158,   159,   160,   173,   162,    -1,   164,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,   174,    -1,    -1,
      -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
     199,   200,   201,   202,   203,    -1,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
      -1,    -1,   229,   230,   231,   232,    -1,    -1,   235,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,   245,   246,
      -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,
     257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,
     267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,   276,
     277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,
      -1,    -1,    -1,    -1,    -1,    -1,   293,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
     317,    -1,    -1,    -1,    -1,   322,   323,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
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
     210,   211,   212,   213,   214,   215,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,   257,
      -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,   267,
      -1,    -1,   270,    -1,   272,    -1,    -1,    -1,   276,   277,
      -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,    -1,
      -1,    -1,    -1,    -1,    -1,   293,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   317,
      -1,    -1,    -1,    -1,   322,   323,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,    -1,   117,   118,
     119,    -1,   133,    -1,    -1,   124,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,    -1,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,    -1,   155,    -1,   157,   158,
     159,   160,   173,   162,    -1,   164,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,    -1,   174,    -1,    -1,    -1,    -1,
     191,   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,
     201,   202,   203,    -1,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,   245,   246,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,
      -1,    -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,
      -1,   270,    -1,   272,    -1,    -1,    -1,   276,   277,    -1,
      -1,    -1,    -1,    -1,   283,   284,   285,   286,    -1,    -1,
      -1,    -1,    -1,    -1,   293,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   317,    -1,
      -1,    -1,    -1,   322,   323,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,    -1,   117,   118,   119,
      -1,    -1,    -1,    -1,   124,   125,   133,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,    -1,    -1,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,    -1,   157,   158,   159,
     160,    -1,   162,    -1,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,   181,    -1,    -1,   191,   192,   193,   194,   195,    -1,
      -1,    -1,   199,   200,   201,   202,   203,    -1,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,   227,    -1,   229,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    -1,   248,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,    -1,
      -1,   261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,
     270,    -1,   272,    -1,    -1,    -1,   276,   277,    -1,    -1,
      -1,    -1,    -1,   283,   284,   285,   286,    -1,    -1,    -1,
      -1,    -1,    -1,   293,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,   317,    -1,    -1,
      -1,    -1,   322,   323,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,    -1,   117,   118,   119,    -1,
      -1,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,    -1,    -1,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,    -1,   157,   158,   159,   160,
      -1,   162,    -1,   164,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,   245,   246,    -1,   248,    -1,    -1,
      -1,    -1,    -1,   254,    -1,    -1,   257,    -1,    -1,    -1,
     261,    -1,    -1,   264,   265,    -1,   267,    -1,    -1,   270,
     271,   272,    -1,    -1,    -1,   276,   277,    -1,    -1,    -1,
      -1,    -1,   283,   284,   285,   286,    -1,    -1,    -1,    -1,
      -1,    -1,   293,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,   317,    -1,    -1,    -1,
      -1,   322,   323,    -1,    -1,    -1,    38,    -1,    -1,    41,
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
     172,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,
      -1,   293,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   317,    -1,    -1,    -1,    -1,
     322,   323,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,    -1,   117,   118,   119,    -1,    -1,    -1,
      -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,    -1,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,    -1,   157,   158,   159,   160,    -1,   162,
      -1,   164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    -1,   248,    -1,    -1,    -1,    -1,
      -1,   254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,
      -1,   264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,
      -1,    -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,
     283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,
     293,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,   317,    -1,    -1,    -1,    -1,   322,
     323,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
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
      -1,   225,    -1,   227,    -1,   229,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,   245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,
     264,   265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,
      -1,    -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,
     284,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,   293,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   317,    -1,    -1,    -1,    -1,   322,   323,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     115,    -1,   117,   118,   119,    -1,    -1,    -1,    -1,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,    -1,    -1,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,    -1,   157,   158,   159,   160,    -1,   162,    -1,   164,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,
      -1,    -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,
     265,    -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,
      -1,   276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,
     285,   286,    -1,    -1,    -1,    -1,    -1,    -1,   293,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,   317,    -1,    -1,    -1,    -1,   322,   323,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,
      -1,   267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,
     276,   277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,
     286,    -1,    -1,    -1,    -1,    -1,    -1,   293,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,   317,    -1,    -1,    -1,    -1,   322,   323,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,
     117,   118,   119,    -1,    -1,    -1,    -1,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,    -1,    -1,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,    -1,
     157,   158,   159,   160,    -1,   162,    -1,   164,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
      -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,   245,   246,
      -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,
     257,    -1,    -1,    -1,   261,    -1,    -1,   264,   265,    -1,
     267,    -1,    -1,   270,    -1,   272,    -1,    -1,    -1,   276,
     277,    -1,    -1,    -1,    -1,    -1,   283,   284,   285,   286,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     317,    -1,    -1,    -1,    -1,   322,   323
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    64,    65,    66,    67,    76,    77,    78,
      79,    85,   132,   171,   172,   228,   236,   237,   239,   241,
     242,   243,   244,   245,   246,   249,   255,   256,   271,   274,
     310,   345,   351,   352,   353,   354,   355,   357,   359,   360,
     369,   374,   386,   391,   392,   398,   443,   446,   454,   475,
     489,   493,   494,   495,   503,   518,   519,   520,   537,   541,
     542,   543,   546,   666,   132,   110,     5,     6,     7,     8,
       9,    10,    22,    23,    26,    38,    41,    52,    63,    79,
      82,    85,    91,    96,    97,    98,   104,   112,   115,   117,
     118,   119,   124,   125,   141,   142,   145,   147,   148,   149,
     150,   151,   152,   153,   155,   157,   158,   159,   160,   162,
     164,   170,   174,   217,   218,   225,   229,   235,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   248,   254,   257,
     261,   264,   265,   267,   270,   272,   276,   277,   283,   284,
     285,   286,   293,   317,   322,   323,   634,   660,   661,   188,
     248,   529,   259,    80,   500,   500,   660,    78,    86,   538,
     539,   660,    66,   546,    67,    68,    69,   605,   606,   607,
     660,   634,   348,   347,   349,   350,   346,     5,    11,   664,
     667,     5,     6,     7,     8,     9,    10,    64,    65,    66,
      67,   188,   246,   269,   310,   370,   377,   378,   379,   381,
     382,   383,   658,   659,   255,   258,   375,   376,    58,    86,
      55,   114,   276,    11,   172,   295,   438,   439,   511,   537,
     543,   649,   663,     0,    17,    55,    58,   102,   104,   114,
     164,   217,   218,   219,   220,   221,   222,   229,   230,   231,
     232,   257,   270,   276,   279,   281,   318,   399,   400,   403,
     404,   437,    55,   114,   164,   188,   229,   230,   231,   232,
     257,   270,   276,   281,   316,   318,   488,    55,    56,    57,
      63,   257,   270,   284,   631,   660,   217,   218,   276,   358,
     403,   435,   660,   132,   101,   167,   168,   169,   562,   132,
     634,   271,   339,     3,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    18,    19,    27,    28,    44,
      45,    46,    47,    48,    49,    50,    62,   105,   109,   113,
     123,   133,   134,   135,   136,   137,   139,   140,   143,   144,
     146,   156,   163,   172,   175,   191,   192,   196,   197,   198,
     205,   208,   283,   284,   285,   286,   297,   301,   302,   341,
     343,   525,   549,   560,   561,   569,   570,   571,   572,   574,
     576,   577,   579,   581,   583,   584,   585,   586,   587,   588,
     589,   590,   591,   604,   605,   608,   610,   611,   612,   614,
     615,   616,   617,   618,   631,   632,   633,   635,   636,   638,
     653,   656,   660,   665,   674,   675,   676,   677,   678,   692,
     699,   701,   704,   714,   715,   745,   634,   189,   501,   501,
     660,    87,    90,    96,   496,   497,   498,   338,   540,   543,
     172,   441,   442,   529,   173,   172,   339,   441,   355,   355,
     345,   345,   355,   172,   441,   441,   267,   441,   110,   259,
     278,   338,   278,   338,   262,   338,   263,   263,   377,   370,
      86,   496,   271,   660,   634,   634,   438,   546,   649,   259,
      27,   259,   295,   311,   217,   218,   660,   217,   218,   634,
     231,   276,   276,   276,   276,   634,   634,   634,   634,   660,
     225,   361,   660,   634,   634,   634,   316,   276,   660,   634,
     231,   164,   230,   231,   232,   634,   634,   634,   634,   660,
     634,   634,   634,   634,   634,    42,    43,   492,   225,   660,
     660,   293,   176,   176,   338,     5,     6,     7,    20,    24,
      25,    26,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    52,    53,    54,   283,   284,   285,   286,   338,   623,
     630,   651,   653,   654,   655,   656,   103,   188,   248,   547,
     547,   547,   294,   563,   282,   532,   442,   530,   531,   657,
     660,   660,   665,   665,   665,   172,   172,    22,   172,   609,
     609,   609,   609,   609,   172,   585,   172,   124,   660,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   280,   537,   546,   560,   570,   578,   605,   660,   570,
     172,   587,   587,   172,   172,   172,   587,   665,   172,   621,
     172,   622,   191,   192,   619,   298,   587,   643,   644,   172,
     172,   570,   582,   110,   259,   550,   551,   317,   613,   178,
     176,   179,   180,   181,   182,   183,   184,   185,   186,   189,
     190,   634,   133,   191,   192,   193,   194,   195,   199,   200,
     201,   202,   203,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   260,   328,   339,   338,   172,
     172,   172,   665,   665,   339,   172,   247,   280,   439,   442,
     521,    81,    82,   278,   502,    88,    89,    91,    97,   338,
     539,   435,   317,   549,   173,   526,   587,   639,   607,   660,
     296,   565,   132,   132,   132,   172,   173,   524,   526,   528,
     546,   268,   384,   385,   658,   658,   384,   379,   164,   276,
     380,   488,   634,   383,   111,   111,   110,   110,   496,   252,
     253,   401,   171,   251,   271,   387,   115,   116,   117,   118,
     119,   120,   121,   122,   125,   317,   394,   396,   397,   249,
     271,   274,   275,   173,   314,   665,   259,   634,   649,   295,
     171,    85,   317,   393,   395,   397,   634,   634,   634,   634,
     634,   234,   172,   172,   172,   171,   367,   362,   660,   247,
     363,   225,   172,   406,   407,   441,   441,   320,   321,   476,
     660,   634,   634,   231,   634,   634,   634,   492,   172,   490,
     490,   490,   492,   492,   492,   660,    58,   286,   633,   660,
     526,   435,   172,   172,    21,    22,   172,   172,   172,    38,
     172,   621,   622,   287,   288,   289,   290,   291,   292,   624,
     626,   628,   629,   660,   172,   172,   172,   172,   566,   567,
     587,   166,   548,   548,   548,   589,   648,   663,   295,   564,
     560,   176,   338,   551,   176,   339,   560,   637,   637,    23,
     173,   292,   624,   625,   111,   587,   588,   587,   671,   672,
     673,   671,   235,   154,   693,   719,   151,   153,   717,   235,
       3,   705,   588,   114,   716,   717,   671,   546,   172,   522,
     173,   173,   173,   173,   338,   339,   587,   587,   587,   664,
     171,   620,   664,   620,   665,   560,   298,   641,   642,   300,
     643,   645,   587,   526,   640,   338,   342,   172,   341,   533,
     552,   553,   554,   585,   605,   634,   660,   544,   545,   660,
     532,   660,   560,   177,   187,   188,   570,   580,   575,   587,
     575,   575,   575,   172,   172,    99,   100,   573,   573,   561,
     570,   580,   583,   587,   587,   587,   587,   587,   587,   587,
     587,   587,   587,   587,   587,   587,   587,   176,   587,   587,
     587,   587,   587,   587,   587,   587,   587,   109,   175,   172,
     205,   612,   173,   188,   205,   248,   587,   646,   660,   646,
       8,     9,    10,   205,   660,   280,   522,   521,    81,    78,
      87,    94,    95,   499,   664,   498,   173,   172,   173,   338,
      14,   589,   649,   240,   356,   173,   338,   171,   338,   372,
     171,   371,   634,   384,   384,   254,   401,   278,   270,   103,
     171,   648,   648,   648,   651,   396,   227,   276,   277,   389,
     390,    67,    87,   388,   390,   276,   390,    16,   509,   510,
     509,   634,   441,   311,   649,   401,   171,   651,   395,   172,
     406,   406,   406,   406,   235,   205,   473,   474,   660,   473,
     473,   258,    20,   265,   668,   669,   362,   181,   227,   409,
     410,   411,   413,   416,   424,   425,   436,   657,   660,    98,
     402,   317,   317,    64,    65,    67,   477,   262,   406,   490,
     634,   492,   492,   492,   173,   491,   651,   651,   647,   664,
     647,    23,   647,   647,   647,   664,    53,   652,   665,   620,
     620,   622,   621,   278,   647,   664,   647,   647,   647,   338,
     223,   224,   568,   103,   546,   546,   546,   589,   649,   565,
     585,   531,   532,   560,   660,   317,   338,   110,   634,   157,
     718,   338,   718,   718,   660,   680,   172,   587,   694,   695,
     696,   338,   588,   660,   702,   145,   706,   718,   671,   562,
     173,   523,   526,   527,   173,   338,   183,   184,   570,   338,
     183,   110,   338,   173,   284,   665,   173,   665,   629,   299,
     587,   641,   645,   587,   309,   338,   338,   173,   338,   570,
     172,   533,   554,   555,   338,    68,    69,    70,    72,    73,
      74,    75,   165,   534,   535,   317,   556,   660,   556,   556,
     339,   338,   550,   108,   557,   570,   106,   524,   524,   570,
     570,   585,   587,   109,   329,   592,   593,   646,   173,   646,
     173,   339,   338,   339,   660,    92,    93,    87,   540,   526,
     528,   258,   385,   110,   373,   255,   373,   373,   373,   665,
     254,   660,   660,   648,   585,   649,   660,   660,   660,    89,
      88,    89,   660,   634,   410,   109,   512,   312,   512,   110,
     110,   254,   649,   473,   262,   660,   173,   338,   651,   173,
     173,    56,    62,   368,   271,   660,   662,   670,   351,   352,
     364,   365,   366,   369,   374,   386,   391,   489,   634,   660,
     173,   338,   250,   266,   279,   433,   129,   130,   412,   651,
     171,   660,   438,   438,   319,   262,   634,   262,   405,   492,
     173,   338,   173,   173,   173,   173,   338,   173,   338,   173,
     338,   292,   624,   627,   173,   338,   173,   173,   173,   567,
     172,   651,   651,   587,   114,   153,   173,   671,   173,   173,
     338,   679,    82,   247,   587,   720,   721,   723,   724,   725,
     263,   338,   690,   317,   697,    83,   141,   700,   338,   703,
     103,   707,   727,   718,   173,   160,   728,   729,   718,   173,
     338,   172,   172,   172,   587,   587,   587,   587,   293,   526,
     299,   309,   587,   526,   526,   173,   546,   554,    74,   534,
      74,   554,   554,    74,    71,   660,   172,   660,   545,   103,
     107,   559,   665,   173,   173,   189,   189,   103,   173,   101,
     594,   173,   173,   205,   646,   660,   173,   263,   368,   263,
      16,   665,   492,   492,   492,   249,   271,   317,   481,   665,
     172,   516,   517,   665,   313,   516,   665,   173,     3,    66,
      79,    85,   234,   237,   273,   297,   303,   308,   357,   359,
     360,   369,   374,   386,   391,   447,   450,   452,   453,   454,
     458,   460,   466,   468,   469,   489,   493,   494,   542,   660,
     660,   233,   233,   660,   338,   366,   411,   660,   261,   261,
     442,   126,   131,   247,   414,   415,   418,   419,   421,   422,
     425,   264,     3,   171,   408,   171,   440,   435,   660,   172,
      76,   491,   650,   664,   664,   664,   622,   664,   558,   635,
     660,   173,   173,   173,   138,   587,   681,   687,   688,   689,
     719,   718,   247,   723,   173,   338,   317,   109,   147,   149,
     150,   691,   695,   718,   660,   698,   142,   142,   173,   588,
     718,   124,   148,   588,   708,   709,   710,   711,   712,   727,
     278,   173,   173,   527,   523,   524,   524,   338,   173,   111,
     173,   173,   338,   526,   173,   342,   554,    74,   554,    16,
     262,   536,   536,   554,   172,   662,   558,   560,   570,   570,
     558,   103,    84,   336,   595,   596,   173,   173,   325,   271,
     247,    98,   109,   175,   247,   665,   338,   517,    82,   515,
     338,   172,   506,   506,   235,   234,   529,   235,   455,   456,
     634,   276,   439,   459,   560,   298,   463,   464,   587,   560,
     307,   448,   305,   340,   651,   276,   472,   651,   472,   660,
     442,   442,   127,   420,   586,   418,   109,   175,   226,   266,
     269,   279,   432,   434,   172,    82,   170,   226,   327,   478,
     435,    64,    83,   249,   173,   173,   173,   173,   173,   338,
     339,   172,   338,   338,   690,   338,   173,   721,   660,   722,
     262,   262,   262,   262,   173,   173,   317,   726,   727,   338,
     109,   150,   713,   161,   173,   173,   173,   587,   587,   587,
     556,   554,   442,   560,   536,   662,   173,   566,   185,   330,
     337,   588,   597,   598,   599,   600,   254,   270,     3,   109,
     109,   420,   665,   173,   227,   665,   507,   508,   660,   509,
     509,   665,   235,   549,   444,   660,   172,   172,   560,   300,
     463,   465,   298,   461,   462,   299,   448,   450,   560,   172,
     234,   238,   447,   234,   238,   269,   317,   109,   172,   261,
     634,   417,   418,   170,   263,   324,   325,   479,   480,   111,
     483,   484,   173,    84,    84,   635,   660,   587,   682,   683,
     685,   687,   689,   681,   687,   109,    82,   109,   109,   109,
     660,   709,   262,   262,   173,    82,   159,   162,   730,   731,
     736,   173,   173,   173,   173,   598,   322,   333,   333,   331,
     603,   665,   660,   338,   173,   338,     3,   512,   512,   270,
     444,   339,   457,   587,   439,   299,   448,   309,   587,   461,
     465,   448,   450,   132,   306,   471,   657,   235,     5,   235,
       5,   634,   128,   560,   441,   173,   338,   276,   322,   482,
     276,   482,   480,   326,   298,   486,   173,   338,   317,   684,
     338,   153,   726,   150,   150,   155,   660,   737,     3,   732,
     733,    82,   152,   155,   738,   739,   741,   742,   189,    82,
     108,   330,   335,   665,   508,    59,   513,   513,   660,   660,
     173,   338,   173,   448,   450,   297,   299,   309,   300,   304,
     467,   132,   309,   448,   173,   338,   651,   444,     4,   445,
     665,   444,   445,   441,   172,   423,   173,   112,   431,   418,
     481,   481,   481,   481,   322,   323,   485,   560,   308,   357,
     359,   369,   374,   451,   452,   487,   493,   494,   542,   683,
     660,   686,   687,   158,   734,   734,   155,   660,   744,   733,
     743,   740,   741,   330,   337,   588,   601,   602,   334,   322,
      60,   514,   514,   587,   132,   448,   297,   448,   560,   309,
     309,   309,   657,   431,   393,    39,    40,    70,   430,   262,
     427,   428,   429,   660,   660,   660,   660,   307,   733,   735,
     322,   332,   333,    61,   515,   515,   299,   303,   305,   651,
     429,   173,    64,    65,   262,   428,   262,   427,   449,   315,
     504,   448,   470,   660,    42,    43,    82,   271,   426,   426,
     309,   451,   172,   467,    41,   109,   247,   132,   505,   649,
     173,   338,   649
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
#line 615 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 625 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 4:
#line 630 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 639 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 6:
#line 644 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 654 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 8:
#line 659 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 669 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 678 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 11:
#line 679 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 12:
#line 684 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 13:
#line 685 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym); YYACCEPT; }
    break;

  case 14:
#line 686 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 15:
#line 687 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 16:
#line 688 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 17:
#line 689 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYABORT; }
    break;

  case 30:
#line 716 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(2) - (5)].l));
		append_list(l, (yyvsp[(3) - (5)].l));
		append_symbol(l, (yyvsp[(4) - (5)].sym));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
    break;

  case 32:
#line 726 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 33:
#line 727 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 34:
#line 732 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[(2) - (2)].l)); }
    break;

  case 35:
#line 733 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 36:
#line 738 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(1) - (2)].l) );
		append_type(l, &(yyvsp[(2) - (2)].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 37:
#line 743 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l) );
		append_type(l, &(yyvsp[(4) - (4)].type) );
		(yyval.l) = append_symbol((yyvsp[(1) - (4)].l), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 38:
#line 751 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, (yyvsp[(2) - (4)].sval) );
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 39:
#line 756 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 40:
#line 764 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 41:
#line 772 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 42:
#line 780 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 43:
#line 788 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 44:
#line 794 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 45:
#line 803 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (6)].l));
		append_symbol(l, (yyvsp[(4) - (6)].sym));
		append_symbol(l, (yyvsp[(5) - (6)].sym));
		append_list(l, (yyvsp[(6) - (6)].l));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
    break;

  case 46:
#line 810 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_int(l, (yyvsp[(4) - (4)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
    break;

  case 47:
#line 818 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (1)].sval) );
	  append_string((yyval.l), NULL ); }
    break;

  case 48:
#line 822 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[(2) - (2)].sval) ); }
    break;

  case 49:
#line 826 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (3)].sval) );
	  append_string((yyval.l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 51:
#line 835 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 52:
#line 836 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[(4) - (4)].sval) ); }
    break;

  case 53:
#line 840 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 55:
#line 845 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 56:
#line 847 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 62:
#line 853 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 63:
#line 854 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 64:
#line 858 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 65:
#line 859 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_role; }
    break;

  case 66:
#line 864 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
    break;

  case 67:
#line 874 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
    break;

  case 68:
#line 883 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 69:
#line 885 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 70:
#line 889 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 71:
#line 890 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 72:
#line 894 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 73:
#line 895 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 74:
#line 900 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 75:
#line 901 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 76:
#line 906 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
    break;

  case 77:
#line 914 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
    break;

  case 78:
#line 923 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 79:
#line 924 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 80:
#line 928 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 81:
#line 929 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 82:
#line 934 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (1)].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
    break;

  case 83:
#line 938 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (3)].l));
	  append_symbol((yyval.l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 84:
#line 944 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(L(), (yyvsp[(1) - (1)].i_val)); }
    break;

  case 85:
#line 946 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(append_int(L(), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val)); }
    break;

  case 86:
#line 950 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
    break;

  case 87:
#line 951 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
    break;

  case 88:
#line 955 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(2) - (2)].l)); }
    break;

  case 89:
#line 956 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[(1) - (1)].l)); }
    break;

  case 90:
#line 957 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[(1) - (1)].l)); }
    break;

  case 91:
#line 968 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 92:
#line 969 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 94:
#line 974 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 95:
#line 976 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 96:
#line 980 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
    break;

  case 97:
#line 981 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
    break;

  case 98:
#line 982 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[(2) - (2)].l)); }
    break;

  case 99:
#line 983 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 100:
#line 984 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 101:
#line 985 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
    break;

  case 102:
#line 989 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 103:
#line 991 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 104:
#line 995 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 105:
#line 996 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 106:
#line 1004 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 107:
#line 1009 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, (yyvsp[(6) - (6)].l)));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 108:
#line 1014 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 109:
#line 1019 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 110:
#line 1024 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 111:
#line 1029 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 112:
#line 1034 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 113:
#line 1039 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (4)].sval));
	  append_list(l, (yyvsp[(4) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 114:
#line 1044 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
    break;

  case 115:
#line 1049 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1061 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (4)].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[(2) - (4)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 117:
#line 1067 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 118:
#line 1074 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (7)].sval));
				  append_string(l, (yyvsp[(7) - (7)].sval));
				  append_int(l, (yyvsp[(2) - (7)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 119:
#line 1084 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
    break;

  case 120:
#line 1089 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
    break;

  case 121:
#line 1093 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
    break;

  case 122:
#line 1097 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[(2) - (4)].sval)); }
    break;

  case 123:
#line 1099 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  if (!strlen((yyvsp[(5) - (5)].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 124:
#line 1107 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 125:
#line 1115 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
    break;

  case 126:
#line 1120 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
    break;

  case 127:
#line 1125 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 128:
#line 1132 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 129:
#line 1133 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 130:
#line 1137 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 131:
#line 1138 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 132:
#line 1139 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 138:
#line 1161 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
    break;

  case 139:
#line 1172 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (3)].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
    break;

  case 140:
#line 1189 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
    break;

  case 141:
#line 1198 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 142:
#line 1199 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 143:
#line 1203 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 144:
#line 1204 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 145:
#line 1208 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 146:
#line 1209 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 147:
#line 1210 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 148:
#line 1214 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 149:
#line 1215 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
    break;

  case 150:
#line 1216 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[(3) - (3)].l_val)));  }
    break;

  case 151:
#line 1217 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[(3) - (3)].sym)));  }
    break;

  case 152:
#line 1218 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 153:
#line 1222 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 154:
#line 1223 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 155:
#line 1224 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
    break;

  case 156:
#line 1225 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 157:
#line 1226 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
    break;

  case 158:
#line 1227 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 159:
#line 1228 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
    break;

  case 160:
#line 1229 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
    break;

  case 161:
#line 1237 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (9)].sval));
	  append_int(l, (yyvsp[(2) - (9)].i_val));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
    break;

  case 162:
#line 1246 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 163:
#line 1247 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ordered_idx; }
    break;

  case 164:
#line 1248 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imprints_idx; }
    break;

  case 165:
#line 1249 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 166:
#line 1270 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval));
	  append_int(l, (yyvsp[(3) - (3)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
    break;

  case 167:
#line 1275 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (10)].sval));
	  append_string(l, (yyvsp[(6) - (10)].sval));
	  append_string(l, (yyvsp[(8) - (10)].sval));
	  append_string(l, (yyvsp[(10) - (10)].sval));
	  append_int(l, (yyvsp[(4) - (10)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
    break;

  case 168:
#line 1285 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 169:
#line 1286 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 170:
#line 1287 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
    break;

  case 171:
#line 1291 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 172:
#line 1292 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 173:
#line 1297 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1308 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1318 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1328 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1341 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1351 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1365 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 180:
#line 1366 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 181:
#line 1367 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 182:
#line 1368 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 183:
#line 1369 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 184:
#line 1370 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 185:
#line 1374 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_COMMIT; }
    break;

  case 186:
#line 1375 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DELETE; }
    break;

  case 187:
#line 1376 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_PRESERVE; }
    break;

  case 188:
#line 1377 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DROP; }
    break;

  case 189:
#line 1381 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[(2) - (3)].l)); }
    break;

  case 190:
#line 1382 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[(1) - (1)].l)); }
    break;

  case 191:
#line 1390 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (4)].l));
			  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym)); 
			  append_int((yyval.l), (yyvsp[(4) - (4)].i_val)); }
    break;

  case 192:
#line 1396 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 193:
#line 1397 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 194:
#line 1398 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 195:
#line 1403 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 196:
#line 1405 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 202:
#line 1412 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 203:
#line 1413 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 204:
#line 1418 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
			dlist *l = L();
			append_string(l, (yyvsp[(1) - (3)].sval));
			append_type(l, &(yyvsp[(2) - (3)].type));
			append_list(l, (yyvsp[(3) - (3)].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 205:
#line 1426 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1478 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 208:
#line 1484 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 209:
#line 1486 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 210:
#line 1492 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (6)].sval) );
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
    break;

  case 211:
#line 1500 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 212:
#line 1502 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 216:
#line 1508 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 217:
#line 1512 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 218:
#line 1518 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 219:
#line 1526 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1555 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1592 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 222:
#line 1593 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 223:
#line 1600 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 224:
#line 1609 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 225:
#line 1610 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 226:
#line 1614 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 227:
#line 1615 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 228:
#line 1616 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 229:
#line 1617 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 230:
#line 1618 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 231:
#line 1622 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(3) - (3)].i_val) << 8); }
    break;

  case 232:
#line 1626 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 233:
#line 1630 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
    break;

  case 234:
#line 1631 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 235:
#line 1632 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 236:
#line 1633 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 237:
#line 1634 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 238:
#line 1638 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 239:
#line 1639 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 240:
#line 1640 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 241:
#line 1641 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 242:
#line 1645 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 243:
#line 1646 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 244:
#line 1650 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
    break;

  case 245:
#line 1651 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
    break;

  case 246:
#line 1652 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
    break;

  case 247:
#line 1653 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
    break;

  case 248:
#line 1656 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(2) - (5)].l) );
			  append_list(l, (yyvsp[(3) - (5)].l) );
			  append_int(l, (yyvsp[(4) - (5)].i_val) );
			  append_int(l, (yyvsp[(5) - (5)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 250:
#line 1669 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[(2) - (2)].l)); }
    break;

  case 251:
#line 1671 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[(3) - (3)].l)); }
    break;

  case 252:
#line 1675 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(5) - (8)].l) );
			  append_list(l, (yyvsp[(3) - (8)].l) );
			  append_list(l, (yyvsp[(6) - (8)].l) );
			  append_int(l, (yyvsp[(7) - (8)].i_val) );
			  append_int(l, (yyvsp[(8) - (8)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 253:
#line 1687 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 254:
#line 1692 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 255:
#line 1694 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 256:
#line 1698 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 257:
#line 1703 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1715 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 262:
#line 1724 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 263:
#line 1725 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 264:
#line 1729 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 266:
#line 1734 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 267:
#line 1739 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				append_list(l, (yyvsp[(3) - (6)].l));
				append_string(l, (yyvsp[(6) - (6)].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
    break;

  case 268:
#line 1746 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 271:
#line 1760 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1773 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1785 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1816 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1830 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1842 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1874 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1886 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1899 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[(1) - (1)].sym)); }
    break;

  case 280:
#line 1903 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(2) - (5)].l),(yyvsp[(3) - (5)].sym)); }
    break;

  case 281:
#line 1907 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(3) - (6)].l),(yyvsp[(4) - (6)].sym)); }
    break;

  case 282:
#line 1922 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 283:
#line 1924 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 284:
#line 1928 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 285:
#line 1930 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 312:
#line 1978 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 313:
#line 1982 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[(2) - (2)].sym));}
    break;

  case 314:
#line 1987 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L(); 
		  append_list( l, (yyvsp[(1) - (4)].l));
		  append_list( l, (yyvsp[(3) - (4)].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
    break;

  case 316:
#line 1998 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = L();}
    break;

  case 317:
#line 1999 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 318:
#line 2001 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 319:
#line 2006 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[(2) - (2)].sym)); }
    break;

  case 322:
#line 2013 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[(3) - (4)].sym)); }
    break;

  case 323:
#line 2018 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (6)].sym)),(yyvsp[(3) - (6)].l)),(yyvsp[(4) - (6)].l))); }
    break;

  case 324:
#line 2024 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[(2) - (5)].l)),(yyvsp[(3) - (5)].l))); }
    break;

  case 325:
#line 2032 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 326:
#line 2040 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 327:
#line 2042 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 328:
#line 2047 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 329:
#line 2055 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 330:
#line 2057 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 331:
#line 2061 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 332:
#line 2062 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 333:
#line 2072 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (7)].sym));
		  append_list(l, (yyvsp[(4) - (7)].l));
		  append_symbol(l, (yyvsp[(5) - (7)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
    break;

  case 334:
#line 2083 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 335:
#line 2085 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[(2) - (2)].l)); }
    break;

  case 336:
#line 2088 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  append_symbol(l, (yyvsp[(5) - (5)].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
    break;

  case 337:
#line 2102 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 2118 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 340:
#line 2123 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 342:
#line 2129 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[(1) - (2)].sval));
			  	  append_type((yyval.l), &(yyvsp[(2) - (2)].type));
				}
    break;

  case 343:
#line 2134 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
				  append_string((yyval.l), (yyvsp[(3) - (4)].sval));
			  	  append_type((yyval.l), &(yyvsp[(4) - (4)].type));
				}
    break;

  case 344:
#line 2142 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(3) - (4)].l)); }
    break;

  case 345:
#line 2144 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(1) - (1)].type))); }
    break;

  case 347:
#line 2149 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
    break;

  case 348:
#line 2153 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 349:
#line 2158 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *p = L();
			  append_string(p, (yyvsp[(3) - (4)].sval));
			  append_type(p, &(yyvsp[(4) - (4)].type));
			  (yyval.l) = append_list((yyvsp[(1) - (4)].l), p); }
    break;

  case 350:
#line 2163 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[(1) - (2)].sval));
			  append_type(p, &(yyvsp[(2) - (2)].type));
			  (yyval.l) = append_list(l, p); }
    break;

  case 351:
#line 2213 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 2225 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 353:
#line 2226 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 354:
#line 2230 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
    break;

  case 355:
#line 2231 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
    break;

  case 356:
#line 2232 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
    break;

  case 357:
#line 2233 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[(3) - (3)].l)); }
    break;

  case 358:
#line 2237 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 359:
#line 2238 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 360:
#line 2242 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 361:
#line 2244 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].l)); }
    break;

  case 362:
#line 2249 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 363:
#line 2250 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 364:
#line 2251 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 365:
#line 2252 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 370:
#line 2267 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[(1) - (3)].i_val));
	  append_symbol((yyval.l), (yyvsp[(2) - (3)].sym));
	  append_list((yyval.l), (yyvsp[(3) - (3)].l));
	}
    break;

  case 371:
#line 2274 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 372:
#line 2275 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 373:
#line 2279 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 374:
#line 2280 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 375:
#line 2284 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 376:
#line 2285 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 377:
#line 2290 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 378:
#line 2293 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 379:
#line 2298 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
    break;

  case 380:
#line 2304 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );	
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
    break;

  case 381:
#line 2310 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
    break;

  case 382:
#line 2316 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
    break;

  case 383:
#line 2325 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 384:
#line 2330 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = (yyvsp[(2) - (3)].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 385:
#line 2335 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 386:
#line 2343 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(6) - (6)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 387:
#line 2351 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 388:
#line 2359 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 389:
#line 2367 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
    break;

  case 390:
#line 2372 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
    break;

  case 391:
#line 2376 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 392:
#line 2377 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 393:
#line 2378 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[(3) - (3)].l) ); }
    break;

  case 394:
#line 2379 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, (yyvsp[(3) - (3)].l) ); }
    break;

  case 395:
#line 2383 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = NULL;}
    break;

  case 396:
#line 2384 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = (yyvsp[(2) - (3)].l);}
    break;

  case 397:
#line 2385 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = L(); }
    break;

  case 398:
#line 2389 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_type(l, &(yyvsp[(1) - (1)].type) );
				  (yyval.l)= l; }
    break;

  case 399:
#line 2392 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { append_type((yyvsp[(3) - (3)].l), &(yyvsp[(1) - (3)].type));
				  (yyval.l) = (yyvsp[(3) - (3)].l); }
    break;

  case 400:
#line 2397 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 401:
#line 2398 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 402:
#line 2399 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 409:
#line 2418 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	  (yyval.sym) = (yyvsp[(1) - (1)].sym);
	  m->type = Q_TRANS;					}
    break;

  case 410:
#line 2425 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[(3) - (3)].bval));  }
    break;

  case 411:
#line 2427 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[(2) - (2)].sval)); }
    break;

  case 412:
#line 2429 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[(3) - (3)].sval)); }
    break;

  case 413:
#line 2431 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[(3) - (4)].bval)), (yyvsp[(4) - (4)].sval) )); }
    break;

  case 414:
#line 2435 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 415:
#line 2437 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(4) - (4)].i_val)); }
    break;

  case 416:
#line 2439 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 417:
#line 2443 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; }
    break;

  case 419:
#line 2449 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 420:
#line 2451 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(1) - (3)].i_val) | (yyvsp[(3) - (3)].i_val)); }
    break;

  case 421:
#line 2456 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_readonly; }
    break;

  case 422:
#line 2457 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_writable; }
    break;

  case 423:
#line 2458 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_serializable; }
    break;

  case 424:
#line 2459 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; /* not supported */ }
    break;

  case 429:
#line 2470 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 430:
#line 2471 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 431:
#line 2475 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 432:
#line 2476 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 433:
#line 2477 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 434:
#line 2481 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 435:
#line 2482 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 436:
#line 2487 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 437:
#line 2501 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 438:
#line 2515 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 2525 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 440:
#line 2532 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 441:
#line 2543 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 442:
#line 2544 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 443:
#line 2549 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(L(), (yyvsp[(1) - (1)].l_val)); }
    break;

  case 444:
#line 2551 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l_val)); }
    break;

  case 445:
#line 2555 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 446:
#line 2556 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 447:
#line 2561 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(L(), (yyvsp[(1) - (1)].l_val)); }
    break;

  case 448:
#line 2563 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l_val)); }
    break;

  case 449:
#line 2567 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 450:
#line 2568 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 451:
#line 2572 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 452:
#line 2573 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 453:
#line 2578 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (1)].sval) );
			  (yyval.l) = l; }
    break;

  case 454:
#line 2582 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (2)].sval) );
			  append_string(l, (yyvsp[(2) - (2)].sval) );
			  (yyval.l) = l; }
    break;

  case 455:
#line 2590 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 456:
#line 2595 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 457:
#line 2600 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (5)].sval));
				  append_string(l, (yyvsp[(5) - (5)].sval));
				  (yyval.l) = l; }
    break;

  case 458:
#line 2605 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (7)].sval));
				  append_string(l, (yyvsp[(5) - (7)].sval));
				  append_string(l, sql2str((yyvsp[(7) - (7)].sval)));
				  (yyval.l) = l; }
    break;

  case 459:
#line 2613 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 460:
#line 2614 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 461:
#line 2618 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 462:
#line 2619 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (2)].l_val)), 0); }
    break;

  case 463:
#line 2620 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[(2) - (2)].l_val)); }
    break;

  case 464:
#line 2622 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(3) - (4)].l_val)); }
    break;

  case 465:
#line 2624 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(4) - (4)].l_val)); }
    break;

  case 466:
#line 2628 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 467:
#line 2629 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 468:
#line 2633 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 469:
#line 2634 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 470:
#line 2638 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 471:
#line 2639 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 472:
#line 2643 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 473:
#line 2644 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 474:
#line 2648 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 475:
#line 2649 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 476:
#line 2653 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 477:
#line 2655 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 478:
#line 2661 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
    break;

  case 479:
#line 2670 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
    break;

  case 480:
#line 2712 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 481:
#line 2720 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 482:
#line 2729 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 483:
#line 2731 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 484:
#line 2733 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(2) - (2)].l)); }
    break;

  case 486:
#line 2739 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(2) - (3)].l)); }
    break;

  case 487:
#line 2741 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (5)].l), (yyvsp[(4) - (5)].l)); }
    break;

  case 488:
#line 2745 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 489:
#line 2747 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 490:
#line 2751 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 491:
#line 2753 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 492:
#line 2758 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 497:
#line 2787 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 498:
#line 2788 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 499:
#line 2789 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 500:
#line 2793 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 501:
#line 2795 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 502:
#line 2800 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym) );
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 503:
#line 2805 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
    break;

  case 504:
#line 2812 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 505:
#line 2813 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 506:
#line 2820 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 507:
#line 2823 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
    break;

  case 508:
#line 2828 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
    break;

  case 509:
#line 2836 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 0);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 510:
#line 2844 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 1);
	  append_int(l, 0);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 511:
#line 2852 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[(2) - (5)].i_val));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 512:
#line 2860 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[(3) - (5)].i_val));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 513:
#line 2870 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 514:
#line 2871 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (2)].i_val); }
    break;

  case 515:
#line 2872 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (1)].i_val); }
    break;

  case 516:
#line 2876 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 517:
#line 2877 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 518:
#line 2878 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 519:
#line 2882 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 520:
#line 2884 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[(2) - (2)].l)); }
    break;

  case 522:
#line 2908 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (3)].l));
	  	append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
    break;

  case 523:
#line 2917 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 524:
#line 2918 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 525:
#line 2923 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[(1) - (6)].sval)));
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 529:
#line 2946 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (4)].bval), (yyvsp[(3) - (4)].l), NULL,
		(yyvsp[(4) - (4)].l)->h->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 530:
#line 2957 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (6)].bval), (yyvsp[(3) - (6)].l), (yyvsp[(5) - (6)].l),
		(yyvsp[(6) - (6)].l)->h->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 531:
#line 2968 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 532:
#line 2998 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 533:
#line 3000 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 535:
#line 3010 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
    break;

  case 536:
#line 3019 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
    break;

  case 537:
#line 3028 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
    break;

  case 538:
#line 3034 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 540:
#line 3039 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 541:
#line 3040 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 542:
#line 3041 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 543:
#line 3046 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 544:
#line 3048 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 545:
#line 3050 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(4) - (5)].l); }
    break;

  case 547:
#line 3060 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[(1) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(4) - (4)].sym)); }
    break;

  case 548:
#line 3068 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 549:
#line 3069 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[(2) - (2)].l)); }
    break;

  case 550:
#line 3073 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 551:
#line 3075 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 552:
#line 3079 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (1)].l));
		  	  	  append_symbol(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 553:
#line 3083 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (2)].l));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 554:
#line 3087 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 555:
#line 3091 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (1)].sym));
		  	  	  append_symbol(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 557:
#line 3100 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 558:
#line 3110 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
    break;

  case 559:
#line 3114 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym);
				  append_symbol((yyvsp[(1) - (1)].sym)->data.lval, NULL); }
    break;

  case 560:
#line 3124 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->caching = 0; }
    break;

  case 561:
#line 3126 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[(3) - (5)].sym));
		append_symbol(op, (yyvsp[(5) - (5)].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
    break;

  case 562:
#line 3137 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (5)].sval));
		  	  	  append_list(l, (yyvsp[(4) - (5)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 563:
#line 3142 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (2)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 564:
#line 3147 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (4)].sval));
		  	  	  append_list(l, (yyvsp[(3) - (4)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 565:
#line 3152 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (1)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 566:
#line 3159 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 567:
#line 3160 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) );}
    break;

  case 568:
#line 3164 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(1) - (1)].l))); }
    break;

  case 569:
#line 3167 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(3) - (3)].l))); }
    break;

  case 570:
#line 3172 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 571:
#line 3173 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 572:
#line 3179 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
    break;

  case 573:
#line 3183 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 574:
#line 3188 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
    break;

  case 575:
#line 3192 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 576:
#line 3196 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 577:
#line 3198 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l)); }
    break;

  case 578:
#line 3202 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 579:
#line 3203 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 580:
#line 3207 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 581:
#line 3211 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 582:
#line 3212 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 583:
#line 3216 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 584:
#line 3220 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 585:
#line 3221 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val)));
			}
    break;

  case 586:
#line 3225 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[(2) - (2)].sval),NULL)));
			}
    break;

  case 587:
#line 3229 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 588:
#line 3233 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 589:
#line 3235 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 590:
#line 3240 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  append_int(l, (yyvsp[(2) - (2)].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
    break;

  case 591:
#line 3248 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 592:
#line 3249 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 593:
#line 3250 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 603:
#line 3267 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 604:
#line 3283 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 605:
#line 3288 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, (yyvsp[(2) - (3)].sval));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 606:
#line 3295 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 607:
#line 3305 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
    break;

  case 608:
#line 3312 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
    break;

  case 609:
#line 3321 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 610:
#line 3322 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 611:
#line 3323 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 612:
#line 3328 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 613:
#line 3335 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 614:
#line 3342 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 615:
#line 3349 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 616:
#line 3359 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (1)].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
    break;

  case 617:
#line 3363 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 618:
#line 3380 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[(1) - (4)].sym) );}
    break;

  case 619:
#line 3381 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[(1) - (3)].sym) ); }
    break;

  case 620:
#line 3386 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 621:
#line 3392 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 622:
#line 3398 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 623:
#line 3403 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 624:
#line 3411 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 625:
#line 3413 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 626:
#line 3419 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, (yyvsp[(2) - (4)].sval));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 627:
#line 3426 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 628:
#line 3435 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 629:
#line 3436 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 630:
#line 3437 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 631:
#line 3441 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[(2) - (2)].sym) ); }
    break;

  case 632:
#line 3445 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 633:
#line 3446 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym));  }
    break;

  case 634:
#line 3450 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 635:
#line 3455 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(1) - (3)].l));
		  append_list(l, (yyvsp[(2) - (3)].l));
		  append_list(l, (yyvsp[(3) - (3)].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
    break;

  case 636:
#line 3463 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 637:
#line 3465 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 638:
#line 3467 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 640:
#line 3474 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 641:
#line 3481 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 642:
#line 3488 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 643:
#line 3495 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 644:
#line 3502 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 645:
#line 3509 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 646:
#line 3516 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
			  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 647:
#line 3523 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 648:
#line 3530 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 649:
#line 3537 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 650:
#line 3544 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 651:
#line 3551 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 652:
#line 3557 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 653:
#line 3564 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 654:
#line 3571 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 655:
#line 3578 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 656:
#line 3585 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 657:
#line 3592 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 658:
#line 3599 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  		  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 659:
#line 3606 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 660:
#line 3612 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 661:
#line 3619 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 662:
#line 3626 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 663:
#line 3633 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 664:
#line 3640 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 665:
#line 3642 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 666:
#line 3666 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 667:
#line 3670 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 670:
#line 3676 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
    break;

  case 671:
#line 3678 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
    break;

  case 673:
#line 3681 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[(1) - (1)].l)); }
    break;

  case 677:
#line 3685 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[(4) - (4)].l)); }
    break;

  case 685:
#line 3697 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
    break;

  case 686:
#line 3767 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[(1) - (5)].sym)), (yyvsp[(4) - (5)].l))); }
    break;

  case 687:
#line 3772 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[(1) - (3)].l) ); }
    break;

  case 689:
#line 3778 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[(1) - (3)].sym)), (yyvsp[(2) - (3)].sym)), (yyvsp[(3) - (3)].sym)); }
    break;

  case 690:
#line 3782 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 691:
#line 3784 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 692:
#line 3788 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 693:
#line 3790 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 694:
#line 3794 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 695:
#line 3796 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[(2) - (3)].l), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val))); }
    break;

  case 696:
#line 3800 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_ROWS; }
    break;

  case 697:
#line 3801 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_RANGE; }
    break;

  case 698:
#line 3805 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(1) - (1)].sym)), _symbol_create_int(SQL_FRAME, -1)); }
    break;

  case 699:
#line 3806 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 700:
#line 3810 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 701:
#line 3811 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 702:
#line 3812 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 703:
#line 3816 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 704:
#line 3821 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(2) - (4)].sym)), (yyvsp[(4) - (4)].sym)); }
    break;

  case 705:
#line 3825 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 706:
#line 3826 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 707:
#line 3827 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 708:
#line 3831 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 709:
#line 3835 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NONE; }
    break;

  case 710:
#line 3836 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
    break;

  case 711:
#line 3837 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_GROUP; }
    break;

  case 712:
#line 3838 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_TIES; }
    break;

  case 713:
#line 3839 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
    break;

  case 714:
#line 3843 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 715:
#line 3848 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 716:
#line 3852 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 717:
#line 3879 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 718:
#line 3880 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 719:
#line 3885 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 720:
#line 3886 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "left"); }
    break;

  case 721:
#line 3887 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "right"); }
    break;

  case 722:
#line 3888 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "insert"); }
    break;

  case 723:
#line 3893 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[(3) - (6)].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 724:
#line 3900 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 725:
#line 3905 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 726:
#line 3910 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 727:
#line 3915 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 728:
#line 3920 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 729:
#line 3927 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 730:
#line 3928 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 731:
#line 3933 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 732:
#line 3943 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 733:
#line 3953 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 734:
#line 3960 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 735:
#line 3967 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 736:
#line 3974 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 737:
#line 3981 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 738:
#line 3993 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 739:
#line 3995 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 740:
#line 4000 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 741:
#line 4005 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, (yyvsp[(1) - (3)].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 742:
#line 4010 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 743:
#line 4015 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
  		  append_string(l, (yyvsp[(2) - (2)].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
    break;

  case 744:
#line 4022 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 745:
#line 4023 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 746:
#line 4028 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 747:
#line 4049 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 748:
#line 4050 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 749:
#line 4055 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 750:
#line 4056 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 751:
#line 4061 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 752:
#line 4062 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 753:
#line 4069 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 754:
#line 4075 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 755:
#line 4081 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 756:
#line 4087 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 757:
#line 4093 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (4)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 758:
#line 4099 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 760:
#line 4109 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 761:
#line 4110 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = -1; }
    break;

  case 762:
#line 4111 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 763:
#line 4115 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 764:
#line 4116 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 765:
#line 4127 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 766:
#line 4129 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0+1; }
    break;

  case 767:
#line 4133 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 768:
#line 4135 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 6+1; }
    break;

  case 769:
#line 4139 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
    break;

  case 770:
#line 4141 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 771:
#line 4147 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 772:
#line 4155 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = iyear; }
    break;

  case 773:
#line 4156 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imonth; }
    break;

  case 774:
#line 4157 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = iday; }
    break;

  case 775:
#line 4158 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ihour; }
    break;

  case 776:
#line 4159 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imin; }
    break;

  case 778:
#line 4164 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = isec; }
    break;

  case 779:
#line 4169 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 780:
#line 4175 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (1)].i_val)), 0);  }
    break;

  case 781:
#line 4178 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 782:
#line 4184 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 783:
#line 4187 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 784:
#line 4193 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[(1) - (3)].l)), (yyvsp[(3) - (3)].l) ); }
    break;

  case 785:
#line 4196 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list( L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 786:
#line 4200 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 790:
#line 4226 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(1) - (1)].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
    break;

  case 791:
#line 4232 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 792:
#line 4297 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 793:
#line 4328 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int digits = _strlen((yyvsp[(1) - (1)].sval)), err = 0;
#ifdef HAVE_HGE
		  hge value, *p = &value;
		  int len = sizeof(hge);
		  const hge one = 1;
#else
		  lng value, *p = &value;
		  int len = sizeof(lng);
		  const lng one = 1;
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
		    int bits = digits2bits(digits), obits = bits;

		    for (;(one<<(bits-1)) > value; bits--)
			    ;
		   
 		    if (bits != obits && 
		       (bits == 8 || bits == 16 || bits == 32 || bits == 64))
				bits++;
		
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

  case 794:
#line 4389 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 795:
#line 4428 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 796:
#line 4445 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 797:
#line 4461 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 798:
#line 4477 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 800:
#line 4494 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 801:
#line 4511 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 802:
#line 4528 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 803:
#line 4545 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 804:
#line 4566 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
    break;

  case 805:
#line 4570 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
    break;

  case 806:
#line 4576 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 807:
#line 4621 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 808:
#line 4622 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (3)].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 809:
#line 4626 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (5)].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[(1) - (5)].sval)), 
						(yyvsp[(3) - (5)].sval)), 
					(yyvsp[(5) - (5)].sval))
				;}
    break;

  case 810:
#line 4637 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 811:
#line 4640 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 812:
#line 4645 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[(1) - (5)].sval)), (yyvsp[(3) - (5)].sval)), (yyvsp[(5) - (5)].sval));}
    break;

  case 813:
#line 4653 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 814:
#line 4659 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 816:
#line 4671 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[(3) - (6)].sym)), (yyvsp[(5) - (6)].sym))); }
    break;

  case 817:
#line 4676 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[(3) - (4)].l)); }
    break;

  case 818:
#line 4678 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (5)].sym)),(yyvsp[(3) - (5)].l)),(yyvsp[(4) - (5)].sym))); }
    break;

  case 819:
#line 4684 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[(2) - (4)].l)),(yyvsp[(3) - (4)].sym))); }
    break;

  case 820:
#line 4692 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 821:
#line 4694 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 822:
#line 4699 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (3)].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[(3) - (3)].sym));
			}
    break;

  case 823:
#line 4703 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 824:
#line 4709 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 825:
#line 4717 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 826:
#line 4719 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 827:
#line 4724 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 828:
#line 4732 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 829:
#line 4734 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 830:
#line 4738 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 831:
#line 4739 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 833:
#line 4749 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 834:
#line 4760 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 835:
#line 4770 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 836:
#line 4780 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 837:
#line 4791 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
    break;

  case 838:
#line 4793 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
    break;

  case 839:
#line 4797 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
    break;

  case 840:
#line 4799 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 841:
#line 4801 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 842:
#line 4803 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
    break;

  case 843:
#line 4811 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
    break;

  case 844:
#line 4813 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
    break;

  case 845:
#line 4821 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
    break;

  case 846:
#line 4822 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
    break;

  case 847:
#line 4823 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
    break;

  case 848:
#line 4824 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
    break;

  case 849:
#line 4825 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
    break;

  case 850:
#line 4827 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
    break;

  case 851:
#line 4829 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 852:
#line 4842 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 853:
#line 4859 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 854:
#line 4861 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 855:
#line 4875 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 856:
#line 4894 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 857:
#line 4895 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 858:
#line 4896 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
    break;

  case 861:
#line 4899 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 862:
#line 4901 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 863:
#line 4902 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 864:
#line 4904 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 865:
#line 4906 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 866:
#line 4917 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 867:
#line 4932 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 868:
#line 4945 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		sql_find_subtype(&(yyval.type), "geometry", 0, 0 );
	}
    break;

  case 869:
#line 4948 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 870:
#line 4963 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 871:
#line 4978 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		sql_find_subtype(&(yyval.type), "geometrya", 0, 0 );
	}
    break;

  case 872:
#line 4981 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 873:
#line 5001 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 874:
#line 5013 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 875:
#line 5029 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 876:
#line 5043 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 877:
#line 5044 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (2)].sval); }
    break;

  case 878:
#line 5048 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 879:
#line 5049 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 880:
#line 5050 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 881:
#line 5053 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 882:
#line 5054 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 885:
#line 5062 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 886:
#line 5063 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 887:
#line 5064 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 888:
#line 5065 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 889:
#line 5066 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 890:
#line 5067 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 891:
#line 5071 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 892:
#line 5072 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 893:
#line 5073 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 894:
#line 5074 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 895:
#line 5075 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 896:
#line 5076 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 897:
#line 5077 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 899:
#line 5082 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "large"); }
    break;

  case 900:
#line 5083 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "name"); }
    break;

  case 901:
#line 5084 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "object"); }
    break;

  case 902:
#line 5085 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "password"); }
    break;

  case 903:
#line 5086 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "path"); }
    break;

  case 904:
#line 5087 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "precision"); }
    break;

  case 905:
#line 5088 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
    break;

  case 906:
#line 5089 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "role"); }
    break;

  case 907:
#line 5090 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "size"); }
    break;

  case 908:
#line 5091 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "type"); }
    break;

  case 909:
#line 5092 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "release"); }
    break;

  case 910:
#line 5093 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "value"); }
    break;

  case 911:
#line 5094 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "zone"); }
    break;

  case 912:
#line 5096 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "action"); }
    break;

  case 913:
#line 5097 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "as"); }
    break;

  case 914:
#line 5098 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
    break;

  case 915:
#line 5099 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "column"); }
    break;

  case 916:
#line 5100 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
    break;

  case 917:
#line 5101 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
    break;

  case 918:
#line 5102 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "increment"); }
    break;

  case 919:
#line 5103 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
    break;

  case 920:
#line 5104 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
    break;

  case 921:
#line 5105 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "plan"); }
    break;

  case 922:
#line 5106 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "schema"); }
    break;

  case 923:
#line 5107 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "start"); }
    break;

  case 924:
#line 5108 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "statement"); }
    break;

  case 925:
#line 5109 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "table"); }
    break;

  case 926:
#line 5111 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cache"); }
    break;

  case 927:
#line 5112 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "data"); }
    break;

  case 928:
#line 5113 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
    break;

  case 929:
#line 5114 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "match"); }
    break;

  case 930:
#line 5115 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "options"); }
    break;

  case 931:
#line 5116 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "row"); }
    break;

  case 932:
#line 5117 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "key"); }
    break;

  case 933:
#line 5118 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "language"); }
    break;

  case 934:
#line 5119 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "level"); }
    break;

  case 935:
#line 5120 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "session"); }
    break;

  case 936:
#line 5121 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "date"); }
    break;

  case 937:
#line 5122 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "time"); }
    break;

  case 938:
#line 5123 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
    break;

  case 939:
#line 5124 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "interval"); }
    break;

  case 940:
#line 5125 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
    break;

  case 941:
#line 5127 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
    break;

  case 942:
#line 5128 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "execute"); }
    break;

  case 943:
#line 5129 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "explain"); }
    break;

  case 944:
#line 5130 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "debug"); }
    break;

  case 945:
#line 5131 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "trace"); }
    break;

  case 946:
#line 5132 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "text"); }
    break;

  case 947:
#line 5133 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
    break;

  case 948:
#line 5134 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "no"); }
    break;

  case 949:
#line 5136 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "strip"); }
    break;

  case 950:
#line 5137 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
    break;

  case 951:
#line 5138 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "passing"); }
    break;

  case 952:
#line 5139 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "nil"); }
    break;

  case 953:
#line 5140 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "ref"); }
    break;

  case 954:
#line 5141 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "absent"); }
    break;

  case 955:
#line 5142 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "empty"); }
    break;

  case 956:
#line 5143 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "document"); }
    break;

  case 957:
#line 5144 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "element"); }
    break;

  case 958:
#line 5145 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "content"); }
    break;

  case 959:
#line 5146 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
    break;

  case 960:
#line 5147 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "returning"); }
    break;

  case 961:
#line 5148 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "location"); }
    break;

  case 962:
#line 5149 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "id"); }
    break;

  case 963:
#line 5150 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "according"); }
    break;

  case 964:
#line 5151 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "uri"); }
    break;

  case 965:
#line 5152 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "filter"); }
    break;

  case 966:
#line 5153 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
    break;

  case 967:
#line 5154 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temp"); }
    break;

  case 968:
#line 5155 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
    break;

  case 969:
#line 5156 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
    break;

  case 970:
#line 5157 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "storage"); }
    break;

  case 971:
#line 5158 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
    break;

  case 972:
#line 5162 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 973:
#line 5164 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 974:
#line 5169 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 975:
#line 5192 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 976:
#line 5212 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 977:
#line 5245 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 978:
#line 5247 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { char *s = strconcat((yyvsp[(1) - (2)].sval),(yyvsp[(2) - (2)].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
    break;

  case 979:
#line 5255 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 980:
#line 5262 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (3)].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 981:
#line 5267 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (4)].i_val));
  	  append_list(l, (yyvsp[(3) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 982:
#line 5281 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 984:
#line 5286 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[(2) - (2)].l)); }
    break;

  case 987:
#line 5297 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 988:
#line 5299 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1000:
#line 5321 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
    break;

  case 1001:
#line 5329 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
    break;

  case 1002:
#line 5337 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
    break;

  case 1003:
#line 5347 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_list(l, (yyvsp[(5) - (7)].l));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
    break;

  case 1004:
#line 5357 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 1005:
#line 5359 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1006:
#line 5363 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1007:
#line 5367 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (6)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (6)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(6) - (6)].l)); }
    break;

  case 1008:
#line 5371 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1009:
#line 5375 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1010:
#line 5379 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1011:
#line 5383 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(2) - (2)].l)); }
    break;

  case 1013:
#line 5393 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1014:
#line 5397 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1015:
#line 5399 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1016:
#line 5409 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (2)].sval));
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1017:
#line 5416 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1018:
#line 5417 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1021:
#line 5430 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[(1) - (2)].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[(2) - (2)].i_val)); 	}
    break;

  case 1022:
#line 5437 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1023:
#line 5439 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1025:
#line 5447 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1026:
#line 5448 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 1027:
#line 5452 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1028:
#line 5453 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1029:
#line 5454 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1030:
#line 5455 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 1031:
#line 5456 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 1032:
#line 5463 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (7)].sym));
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_int(l, (yyvsp[(5) - (7)].i_val));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
    break;

  case 1033:
#line 5473 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1034:
#line 5474 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 1035:
#line 5479 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 1036:
#line 5481 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 1037:
#line 5486 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (2)].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[(2) - (2)].sval)); }
    break;

  case 1038:
#line 5491 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1039:
#line 5495 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1040:
#line 5496 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1041:
#line 5500 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1042:
#line 5507 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_int(l, (yyvsp[(3) - (6)].i_val) );
	  append_symbol(l, (yyvsp[(4) - (6)].sym));
	  append_int(l, (yyvsp[(5) - (6)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
    break;

  case 1043:
#line 5514 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1044:
#line 5515 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1045:
#line 5522 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_symbol(l, (yyvsp[(5) - (7)].sym));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
    break;

  case 1047:
#line 5534 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1048:
#line 5536 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1049:
#line 5547 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1064:
#line 5593 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
    break;

  case 1065:
#line 5604 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1067:
#line 5609 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1068:
#line 5613 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1069:
#line 5614 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1070:
#line 5618 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1071:
#line 5619 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1072:
#line 5620 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1073:
#line 5635 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1074:
#line 5639 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1075:
#line 5641 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1080:
#line 5664 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { char *s = strconcat("xmlns:", (yyvsp[(3) - (3)].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1081:
#line 5673 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1082:
#line 5677 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1112:
#line 5773 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 13737 "y.tab.c"
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


#line 5794 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"

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


