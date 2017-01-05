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
     LATERAL = 323,
     LEFT = 324,
     RIGHT = 325,
     FULL = 326,
     OUTER = 327,
     NATURAL = 328,
     CROSS = 329,
     JOIN = 330,
     INNER = 331,
     COMMIT = 332,
     ROLLBACK = 333,
     SAVEPOINT = 334,
     RELEASE = 335,
     WORK = 336,
     CHAIN = 337,
     NO = 338,
     PRESERVE = 339,
     ROWS = 340,
     START = 341,
     TRANSACTION = 342,
     READ = 343,
     WRITE = 344,
     ONLY = 345,
     ISOLATION = 346,
     LEVEL = 347,
     UNCOMMITTED = 348,
     COMMITTED = 349,
     sqlREPEATABLE = 350,
     SERIALIZABLE = 351,
     DIAGNOSTICS = 352,
     sqlSIZE = 353,
     STORAGE = 354,
     ASYMMETRIC = 355,
     SYMMETRIC = 356,
     ORDER = 357,
     ORDERED = 358,
     BY = 359,
     IMPRINTS = 360,
     EXISTS = 361,
     ESCAPE = 362,
     HAVING = 363,
     sqlGROUP = 364,
     sqlNULL = 365,
     FROM = 366,
     FOR = 367,
     MATCH = 368,
     EXTRACT = 369,
     SEQUENCE = 370,
     INCREMENT = 371,
     RESTART = 372,
     MAXVALUE = 373,
     MINVALUE = 374,
     CYCLE = 375,
     NOMAXVALUE = 376,
     NOMINVALUE = 377,
     NOCYCLE = 378,
     NEXT = 379,
     VALUE = 380,
     CACHE = 381,
     GENERATED = 382,
     ALWAYS = 383,
     IDENTITY = 384,
     SERIAL = 385,
     BIGSERIAL = 386,
     AUTO_INCREMENT = 387,
     SCOLON = 388,
     AT = 389,
     XMLCOMMENT = 390,
     XMLCONCAT = 391,
     XMLDOCUMENT = 392,
     XMLELEMENT = 393,
     XMLATTRIBUTES = 394,
     XMLFOREST = 395,
     XMLPARSE = 396,
     STRIP = 397,
     WHITESPACE = 398,
     XMLPI = 399,
     XMLQUERY = 400,
     PASSING = 401,
     XMLTEXT = 402,
     NIL = 403,
     REF = 404,
     ABSENT = 405,
     EMPTY = 406,
     DOCUMENT = 407,
     ELEMENT = 408,
     CONTENT = 409,
     XMLNAMESPACES = 410,
     NAMESPACE = 411,
     XMLVALIDATE = 412,
     RETURNING = 413,
     LOCATION = 414,
     ID = 415,
     ACCORDING = 416,
     XMLSCHEMA = 417,
     URI = 418,
     XMLAGG = 419,
     FILTER = 420,
     UNIONJOIN = 421,
     CORRESPONDING = 422,
     INTERSECT = 423,
     EXCEPT = 424,
     UNION = 425,
     DATA = 426,
     WITH = 427,
     FILTER_FUNC = 428,
     NOT = 429,
     SOME = 430,
     OR = 431,
     ILIKE = 432,
     NOT_ILIKE = 433,
     LIKE = 434,
     NOT_LIKE = 435,
     sqlIN = 436,
     NOT_IN = 437,
     BETWEEN = 438,
     NOT_BETWEEN = 439,
     ANY = 440,
     ALL = 441,
     AND = 442,
     COMPARISON = 443,
     SPLIT_PART = 444,
     POSITION = 445,
     SUBSTRING = 446,
     CONCATSTRING = 447,
     RIGHT_SHIFT_ASSIGN = 448,
     LEFT_SHIFT_ASSIGN = 449,
     RIGHT_SHIFT = 450,
     LEFT_SHIFT = 451,
     UMINUS = 452,
     GEOM_OVERLAP_OR_LEFT = 453,
     GEOM_OVERLAP_OR_BELOW = 454,
     GEOM_OVERLAP_OR_ABOVE = 455,
     GEOM_OVERLAP = 456,
     GEOM_MBR_EQUAL = 457,
     GEOM_DIST = 458,
     GEOM_ABOVE = 459,
     GEOM_BELOW = 460,
     GEOM_OVERLAP_OR_RIGHT = 461,
     TEMP = 462,
     TEMPORARY = 463,
     STREAM = 464,
     MERGE = 465,
     REMOTE = 466,
     REPLICA = 467,
     ASC = 468,
     DESC = 469,
     AUTHORIZATION = 470,
     CHECK = 471,
     CONSTRAINT = 472,
     CREATE = 473,
     TYPE = 474,
     PROCEDURE = 475,
     FUNCTION = 476,
     sqlLOADER = 477,
     AGGREGATE = 478,
     RETURNS = 479,
     EXTERNAL = 480,
     sqlNAME = 481,
     DECLARE = 482,
     CALL = 483,
     LANGUAGE = 484,
     ANALYZE = 485,
     MINMAX = 486,
     SQL_EXPLAIN = 487,
     SQL_PLAN = 488,
     SQL_DEBUG = 489,
     SQL_TRACE = 490,
     PREPARE = 491,
     EXECUTE = 492,
     DEFAULT = 493,
     DISTINCT = 494,
     DROP = 495,
     FOREIGN = 496,
     RENAME = 497,
     ENCRYPTED = 498,
     UNENCRYPTED = 499,
     PASSWORD = 500,
     GRANT = 501,
     REVOKE = 502,
     ROLE = 503,
     ADMIN = 504,
     INTO = 505,
     IS = 506,
     KEY = 507,
     ON = 508,
     OPTION = 509,
     OPTIONS = 510,
     PATH = 511,
     PRIMARY = 512,
     PRIVILEGES = 513,
     PUBLIC = 514,
     REFERENCES = 515,
     SCHEMA = 516,
     SET = 517,
     AUTO_COMMIT = 518,
     RETURN = 519,
     ALTER = 520,
     ADD = 521,
     TABLE = 522,
     COLUMN = 523,
     TO = 524,
     UNIQUE = 525,
     VALUES = 526,
     VIEW = 527,
     WHERE = 528,
     sqlDATE = 529,
     TIME = 530,
     TIMESTAMP = 531,
     INTERVAL = 532,
     YEAR = 533,
     MONTH = 534,
     DAY = 535,
     HOUR = 536,
     MINUTE = 537,
     SECOND = 538,
     ZONE = 539,
     LIMIT = 540,
     OFFSET = 541,
     SAMPLE = 542,
     CASE = 543,
     WHEN = 544,
     THEN = 545,
     ELSE = 546,
     NULLIF = 547,
     COALESCE = 548,
     IF = 549,
     ELSEIF = 550,
     WHILE = 551,
     DO = 552,
     ATOMIC = 553,
     BEGIN = 554,
     END = 555,
     COPY = 556,
     RECORDS = 557,
     DELIMITERS = 558,
     STDIN = 559,
     STDOUT = 560,
     FWF = 561,
     INDEX = 562,
     AS = 563,
     TRIGGER = 564,
     OF = 565,
     BEFORE = 566,
     AFTER = 567,
     ROW = 568,
     STATEMENT = 569,
     sqlNEW = 570,
     OLD = 571,
     EACH = 572,
     REFERENCING = 573,
     OVER = 574,
     PARTITION = 575,
     CURRENT = 576,
     EXCLUDE = 577,
     FOLLOWING = 578,
     PRECEDING = 579,
     OTHERS = 580,
     TIES = 581,
     RANGE = 582,
     UNBOUNDED = 583
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
#define LATERAL 323
#define LEFT 324
#define RIGHT 325
#define FULL 326
#define OUTER 327
#define NATURAL 328
#define CROSS 329
#define JOIN 330
#define INNER 331
#define COMMIT 332
#define ROLLBACK 333
#define SAVEPOINT 334
#define RELEASE 335
#define WORK 336
#define CHAIN 337
#define NO 338
#define PRESERVE 339
#define ROWS 340
#define START 341
#define TRANSACTION 342
#define READ 343
#define WRITE 344
#define ONLY 345
#define ISOLATION 346
#define LEVEL 347
#define UNCOMMITTED 348
#define COMMITTED 349
#define sqlREPEATABLE 350
#define SERIALIZABLE 351
#define DIAGNOSTICS 352
#define sqlSIZE 353
#define STORAGE 354
#define ASYMMETRIC 355
#define SYMMETRIC 356
#define ORDER 357
#define ORDERED 358
#define BY 359
#define IMPRINTS 360
#define EXISTS 361
#define ESCAPE 362
#define HAVING 363
#define sqlGROUP 364
#define sqlNULL 365
#define FROM 366
#define FOR 367
#define MATCH 368
#define EXTRACT 369
#define SEQUENCE 370
#define INCREMENT 371
#define RESTART 372
#define MAXVALUE 373
#define MINVALUE 374
#define CYCLE 375
#define NOMAXVALUE 376
#define NOMINVALUE 377
#define NOCYCLE 378
#define NEXT 379
#define VALUE 380
#define CACHE 381
#define GENERATED 382
#define ALWAYS 383
#define IDENTITY 384
#define SERIAL 385
#define BIGSERIAL 386
#define AUTO_INCREMENT 387
#define SCOLON 388
#define AT 389
#define XMLCOMMENT 390
#define XMLCONCAT 391
#define XMLDOCUMENT 392
#define XMLELEMENT 393
#define XMLATTRIBUTES 394
#define XMLFOREST 395
#define XMLPARSE 396
#define STRIP 397
#define WHITESPACE 398
#define XMLPI 399
#define XMLQUERY 400
#define PASSING 401
#define XMLTEXT 402
#define NIL 403
#define REF 404
#define ABSENT 405
#define EMPTY 406
#define DOCUMENT 407
#define ELEMENT 408
#define CONTENT 409
#define XMLNAMESPACES 410
#define NAMESPACE 411
#define XMLVALIDATE 412
#define RETURNING 413
#define LOCATION 414
#define ID 415
#define ACCORDING 416
#define XMLSCHEMA 417
#define URI 418
#define XMLAGG 419
#define FILTER 420
#define UNIONJOIN 421
#define CORRESPONDING 422
#define INTERSECT 423
#define EXCEPT 424
#define UNION 425
#define DATA 426
#define WITH 427
#define FILTER_FUNC 428
#define NOT 429
#define SOME 430
#define OR 431
#define ILIKE 432
#define NOT_ILIKE 433
#define LIKE 434
#define NOT_LIKE 435
#define sqlIN 436
#define NOT_IN 437
#define BETWEEN 438
#define NOT_BETWEEN 439
#define ANY 440
#define ALL 441
#define AND 442
#define COMPARISON 443
#define SPLIT_PART 444
#define POSITION 445
#define SUBSTRING 446
#define CONCATSTRING 447
#define RIGHT_SHIFT_ASSIGN 448
#define LEFT_SHIFT_ASSIGN 449
#define RIGHT_SHIFT 450
#define LEFT_SHIFT 451
#define UMINUS 452
#define GEOM_OVERLAP_OR_LEFT 453
#define GEOM_OVERLAP_OR_BELOW 454
#define GEOM_OVERLAP_OR_ABOVE 455
#define GEOM_OVERLAP 456
#define GEOM_MBR_EQUAL 457
#define GEOM_DIST 458
#define GEOM_ABOVE 459
#define GEOM_BELOW 460
#define GEOM_OVERLAP_OR_RIGHT 461
#define TEMP 462
#define TEMPORARY 463
#define STREAM 464
#define MERGE 465
#define REMOTE 466
#define REPLICA 467
#define ASC 468
#define DESC 469
#define AUTHORIZATION 470
#define CHECK 471
#define CONSTRAINT 472
#define CREATE 473
#define TYPE 474
#define PROCEDURE 475
#define FUNCTION 476
#define sqlLOADER 477
#define AGGREGATE 478
#define RETURNS 479
#define EXTERNAL 480
#define sqlNAME 481
#define DECLARE 482
#define CALL 483
#define LANGUAGE 484
#define ANALYZE 485
#define MINMAX 486
#define SQL_EXPLAIN 487
#define SQL_PLAN 488
#define SQL_DEBUG 489
#define SQL_TRACE 490
#define PREPARE 491
#define EXECUTE 492
#define DEFAULT 493
#define DISTINCT 494
#define DROP 495
#define FOREIGN 496
#define RENAME 497
#define ENCRYPTED 498
#define UNENCRYPTED 499
#define PASSWORD 500
#define GRANT 501
#define REVOKE 502
#define ROLE 503
#define ADMIN 504
#define INTO 505
#define IS 506
#define KEY 507
#define ON 508
#define OPTION 509
#define OPTIONS 510
#define PATH 511
#define PRIMARY 512
#define PRIVILEGES 513
#define PUBLIC 514
#define REFERENCES 515
#define SCHEMA 516
#define SET 517
#define AUTO_COMMIT 518
#define RETURN 519
#define ALTER 520
#define ADD 521
#define TABLE 522
#define COLUMN 523
#define TO 524
#define UNIQUE 525
#define VALUES 526
#define VIEW 527
#define WHERE 528
#define sqlDATE 529
#define TIME 530
#define TIMESTAMP 531
#define INTERVAL 532
#define YEAR 533
#define MONTH 534
#define DAY 535
#define HOUR 536
#define MINUTE 537
#define SECOND 538
#define ZONE 539
#define LIMIT 540
#define OFFSET 541
#define SAMPLE 542
#define CASE 543
#define WHEN 544
#define THEN 545
#define ELSE 546
#define NULLIF 547
#define COALESCE 548
#define IF 549
#define ELSEIF 550
#define WHILE 551
#define DO 552
#define ATOMIC 553
#define BEGIN 554
#define END 555
#define COPY 556
#define RECORDS 557
#define DELIMITERS 558
#define STDIN 559
#define STDOUT 560
#define FWF 561
#define INDEX 562
#define AS 563
#define TRIGGER 564
#define OF 565
#define BEFORE 566
#define AFTER 567
#define ROW 568
#define STATEMENT 569
#define sqlNEW 570
#define OLD 571
#define EACH 572
#define REFERENCING 573
#define OVER 574
#define PARTITION 575
#define CURRENT 576
#define EXCLUDE 577
#define FOLLOWING 578
#define PRECEDING 579
#define OTHERS 580
#define TIES 581
#define RANGE 582
#define UNBOUNDED 583




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
#line 860 "y.tab.c"
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
#line 879 "y.tab.c"

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
#define YYFINAL  224
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   16646

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  347
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  403
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1114
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2065

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   583

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   208,   194,     2,
     173,   174,   206,   192,   341,   193,   342,   207,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   343,     2,
       2,   177,     2,   346,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   344,     2,   345,   196,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   195,     2,   209,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   171,   172,   175,   176,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   210,   211,   212,   213,   214,   215,   216,
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
     337,   338,   339,   340
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
     563,   565,   566,   570,   575,   581,   586,   591,   596,   603,
     609,   611,   613,   616,   619,   622,   625,   626,   631,   636,
     640,   644,   646,   651,   652,   656,   659,   661,   665,   667,
     669,   671,   673,   675,   677,   679,   683,   686,   687,   689,
     691,   694,   701,   703,   707,   709,   711,   713,   716,   718,
     721,   727,   729,   730,   734,   737,   738,   741,   744,   746,
     748,   751,   754,   758,   762,   763,   765,   767,   770,   773,
     774,   776,   778,   780,   781,   784,   787,   789,   791,   794,
     800,   802,   805,   809,   818,   823,   825,   829,   832,   839,
     841,   845,   847,   849,   850,   854,   855,   857,   861,   868,
     872,   874,   876,   888,   898,   910,   921,   933,   945,   955,
     963,   973,   975,   981,   988,   989,   993,   994,   998,  1000,
    1002,  1004,  1006,  1008,  1010,  1012,  1014,  1016,  1018,  1020,
    1022,  1024,  1026,  1028,  1030,  1032,  1034,  1036,  1038,  1040,
    1042,  1044,  1046,  1048,  1050,  1053,  1056,  1061,  1063,  1064,
    1066,  1070,  1073,  1075,  1077,  1082,  1089,  1095,  1100,  1102,
    1105,  1110,  1112,  1115,  1116,  1119,  1127,  1128,  1131,  1137,
    1146,  1147,  1150,  1151,  1153,  1156,  1161,  1166,  1168,  1170,
    1172,  1173,  1178,  1181,  1191,  1193,  1195,  1197,  1199,  1201,
    1205,  1206,  1209,  1211,  1214,  1219,  1224,  1229,  1234,  1235,
    1237,  1238,  1240,  1244,  1245,  1249,  1251,  1253,  1254,  1257,
    1259,  1264,  1268,  1273,  1277,  1281,  1285,  1290,  1294,  1300,
    1307,  1313,  1319,  1325,  1330,  1335,  1339,  1343,  1347,  1351,
    1352,  1356,  1359,  1361,  1365,  1366,  1368,  1370,  1372,  1374,
    1376,  1378,  1380,  1382,  1384,  1388,  1391,  1395,  1400,  1404,
    1409,  1413,  1414,  1416,  1418,  1422,  1425,  1428,  1432,  1436,
    1439,  1442,  1445,  1447,  1449,  1450,  1453,  1457,  1458,  1459,
    1463,  1478,  1492,  1499,  1509,  1516,  1523,  1524,  1529,  1531,
    1535,  1536,  1540,  1542,  1546,  1548,  1551,  1552,  1556,  1562,
    1570,  1571,  1573,  1574,  1577,  1580,  1585,  1590,  1591,  1595,
    1596,  1598,  1599,  1602,  1603,  1606,  1608,  1612,  1614,  1618,
    1623,  1630,  1635,  1641,  1642,  1645,  1648,  1650,  1654,  1660,
    1662,  1666,  1668,  1672,  1674,  1676,  1678,  1680,  1682,  1683,
    1685,  1687,  1689,  1693,  1697,  1701,  1702,  1705,  1709,  1714,
    1719,  1725,  1731,  1732,  1734,  1737,  1738,  1740,  1742,  1744,
    1746,  1749,  1752,  1754,  1758,  1762,  1764,  1771,  1773,  1775,
    1777,  1782,  1789,  1795,  1797,  1801,  1803,  1809,  1815,  1821,
    1825,  1827,  1828,  1830,  1832,  1833,  1835,  1841,  1843,  1848,
    1849,  1852,  1854,  1858,  1861,  1864,  1868,  1871,  1875,  1877,
    1879,  1880,  1886,  1892,  1895,  1900,  1902,  1903,  1905,  1906,
    1910,  1912,  1916,  1917,  1920,  1924,  1926,  1930,  1932,  1933,
    1937,  1938,  1941,  1944,  1945,  1948,  1951,  1952,  1955,  1958,
    1961,  1963,  1967,  1970,  1971,  1973,  1975,  1977,  1979,  1981,
    1983,  1985,  1987,  1989,  1991,  1993,  1996,  1998,  2002,  2006,
    2013,  2020,  2021,  2023,  2025,  2029,  2033,  2037,  2041,  2043,
    2047,  2052,  2056,  2062,  2068,  2076,  2084,  2086,  2090,  2095,
    2100,  2102,  2104,  2106,  2109,  2111,  2115,  2119,  2123,  2127,
    2132,  2136,  2138,  2142,  2146,  2150,  2154,  2158,  2162,  2166,
    2170,  2174,  2178,  2182,  2186,  2190,  2194,  2198,  2202,  2206,
    2210,  2214,  2217,  2221,  2225,  2229,  2233,  2236,  2239,  2243,
    2245,  2247,  2249,  2251,  2253,  2255,  2257,  2259,  2261,  2263,
    2268,  2270,  2272,  2274,  2276,  2278,  2280,  2282,  2284,  2290,
    2294,  2296,  2300,  2301,  2305,  2306,  2310,  2311,  2315,  2317,
    2319,  2321,  2323,  2326,  2328,  2331,  2334,  2339,  2342,  2344,
    2347,  2350,  2351,  2355,  2358,  2361,  2365,  2368,  2372,  2377,
    2379,  2383,  2385,  2387,  2389,  2391,  2398,  2401,  2404,  2407,
    2410,  2413,  2414,  2417,  2426,  2435,  2442,  2449,  2456,  2460,
    2469,  2471,  2475,  2477,  2481,  2485,  2488,  2489,  2492,  2494,
    2496,  2500,  2502,  2506,  2508,  2512,  2517,  2524,  2530,  2536,
    2541,  2548,  2550,  2552,  2554,  2555,  2559,  2560,  2564,  2565,
    2569,  2570,  2572,  2576,  2580,  2582,  2584,  2586,  2588,  2590,
    2592,  2594,  2597,  2599,  2602,  2605,  2608,  2612,  2614,  2617,
    2619,  2621,  2623,  2625,  2627,  2629,  2631,  2633,  2635,  2638,
    2643,  2648,  2650,  2653,  2656,  2659,  2662,  2664,  2666,  2671,
    2673,  2677,  2683,  2685,  2689,  2695,  2702,  2709,  2711,  2718,
    2723,  2729,  2734,  2736,  2740,  2744,  2748,  2753,  2755,  2758,
    2763,  2765,  2768,  2769,  2772,  2774,  2776,  2778,  2780,  2782,
    2784,  2786,  2788,  2793,  2798,  2803,  2805,  2810,  2812,  2814,
    2816,  2818,  2820,  2822,  2827,  2834,  2836,  2841,  2848,  2850,
    2853,  2855,  2857,  2859,  2861,  2866,  2868,  2873,  2880,  2882,
    2887,  2889,  2894,  2901,  2903,  2905,  2907,  2909,  2911,  2913,
    2916,  2918,  2920,  2924,  2926,  2930,  2932,  2934,  2936,  2938,
    2940,  2942,  2944,  2946,  2948,  2950,  2952,  2954,  2956,  2958,
    2960,  2962,  2964,  2966,  2968,  2970,  2972,  2974,  2976,  2978,
    2980,  2982,  2984,  2986,  2988,  2990,  2992,  2994,  2996,  2998,
    3000,  3002,  3004,  3006,  3008,  3010,  3012,  3014,  3016,  3018,
    3020,  3022,  3024,  3026,  3028,  3030,  3032,  3034,  3036,  3038,
    3040,  3042,  3044,  3046,  3048,  3050,  3052,  3054,  3056,  3058,
    3060,  3062,  3064,  3066,  3068,  3070,  3072,  3074,  3076,  3078,
    3080,  3082,  3084,  3086,  3088,  3090,  3092,  3094,  3096,  3098,
    3100,  3102,  3104,  3106,  3108,  3110,  3114,  3116,  3118,  3120,
    3122,  3125,  3128,  3132,  3137,  3138,  3140,  3143,  3145,  3147,
    3149,  3153,  3155,  3157,  3159,  3161,  3163,  3165,  3167,  3169,
    3171,  3173,  3175,  3181,  3187,  3193,  3201,  3202,  3205,  3210,
    3217,  3222,  3225,  3230,  3233,  3235,  3240,  3242,  3246,  3249,
    3250,  3253,  3255,  3257,  3260,  3262,  3266,  3268,  3269,  3272,
    3276,  3280,  3284,  3288,  3293,  3301,  3302,  3305,  3307,  3311,
    3314,  3316,  3317,  3320,  3322,  3329,  3332,  3335,  3343,  3345,
    3346,  3349,  3358,  3360,  3361,  3365,  3367,  3369,  3373,  3375,
    3377,  3380,  3385,  3386,  3388,  3392,  3396,  3402,  3409,  3411,
    3413,  3415,  3417,  3418,  3421,  3424,  3429,  3431,  3435,  3437,
    3439,  3441,  3443,  3447,  3450,  3453,  3454,  3456,  3459,  3462,
    3463,  3465,  3471,  3473,  3475,  3479,  3483,  3485,  3487,  3488,
    3491,  3493,  3496,  3498,  3499,  3501,  3503,  3506,  3507,  3509,
    3512,  3515,  3518,  3520,  3522
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     348,     0,    -1,   358,   133,    -1,    -1,   248,   349,   358,
     133,    -1,    -1,   245,   350,   358,   133,    -1,    -1,   244,
     351,   358,   133,    -1,    -1,   246,   352,   348,    -1,    -1,
     247,   353,   348,    -1,   670,   133,    -1,    -1,   133,    -1,
       1,   133,    -1,    51,    -1,   230,    -1,   252,    -1,   274,
      -1,   239,    -1,   363,    -1,   372,    -1,   377,    -1,   394,
      -1,   492,    -1,   389,    -1,   360,    -1,   362,    -1,   242,
     638,   444,   569,   359,    -1,   457,    -1,    -1,   243,    -1,
     357,   361,    -1,   357,   406,    -1,   438,   655,    -1,   361,
     341,   438,   655,    -1,   356,   664,   177,   529,    -1,   356,
      63,   227,   664,    -1,   356,   273,   664,    -1,   356,   635,
     177,   664,    -1,   356,   260,   664,    -1,   356,   287,   296,
      58,    -1,   356,   287,   296,   637,    -1,   354,   273,   364,
     366,   672,   367,    -1,   355,   273,   638,   495,    -1,   664,
      -1,   227,   365,    -1,   664,   227,   365,    -1,   664,    -1,
      -1,   250,    20,   274,   664,    -1,    -1,   368,    -1,   369,
      -1,   368,   369,    -1,   372,    -1,   377,    -1,   394,    -1,
     492,    -1,   389,    -1,    -1,   172,   261,   371,    -1,    56,
      -1,    62,    -1,   258,   380,   281,   387,   374,   376,    -1,
     258,   373,   281,   387,   375,   376,    -1,   662,    -1,   373,
     341,   662,    -1,    -1,   172,   258,   266,    -1,    -1,   172,
     261,   266,    -1,    -1,   111,   371,    -1,   259,   378,   380,
     111,   387,   376,    -1,   259,   379,   373,   111,   387,   376,
      -1,    -1,   258,   266,   112,    -1,    -1,   261,   266,   112,
      -1,   381,    -1,   384,   265,   383,    -1,   382,    -1,   382,
     341,   382,    -1,   313,   111,    -1,   313,   262,    -1,   279,
     638,    -1,   638,    -1,   491,    -1,   189,   270,    -1,   189,
      -1,   385,    -1,   386,    -1,   385,   341,   386,    -1,    67,
      -1,    64,    -1,    65,   444,    -1,    66,   444,    -1,   272,
     444,    -1,   249,    -1,   388,    -1,   387,   341,   388,    -1,
     271,    -1,   662,    -1,   277,   279,   638,   278,   393,   413,
      -1,   277,   279,   638,   278,   279,   638,    -1,   277,   279,
     638,   277,   391,    -1,   277,   279,   638,   252,   392,    -1,
     277,   279,   638,   274,    88,    90,    -1,   277,   279,   638,
     274,    67,    90,    -1,   277,   279,   638,   274,    88,    89,
      -1,   277,    55,   664,   390,    -1,   277,    55,   664,   254,
     281,   664,    -1,   277,    55,   274,   404,   257,   669,    16,
     328,   257,   669,    -1,   172,   404,   257,   669,    -1,   274,
     273,   664,    -1,   172,   404,   257,   669,   274,   273,   664,
      -1,   393,   664,   274,   250,   423,    -1,   393,   664,   274,
     110,    -1,   393,   664,   274,   176,   110,    -1,   393,   664,
     252,   250,    -1,   393,   664,   274,    99,     3,    -1,   393,
     664,   274,    99,   110,    -1,   393,   664,   495,    -1,   229,
     664,   495,    -1,   279,   664,   495,    -1,   280,    -1,    -1,
     354,   403,    -1,   354,   406,    -1,   354,   440,    -1,   446,
      -1,   449,    -1,   401,    -1,   395,    -1,   478,    -1,   354,
     115,   638,   396,    -1,   355,   115,   638,    -1,   277,   115,
     638,   397,    -1,   398,    -1,   396,   398,    -1,   399,    -1,
     397,   399,    -1,   320,   655,    -1,    86,   172,   653,    -1,
     400,    -1,   320,   655,    -1,   117,    -1,   117,   172,   653,
      -1,   117,   172,   589,    -1,   400,    -1,   116,   104,   652,
      -1,   119,   652,    -1,   122,    -1,   118,   652,    -1,   121,
      -1,   126,   652,    -1,   120,    -1,   123,    -1,   354,   402,
     319,   664,   265,   638,   173,   438,   174,    -1,   282,    -1,
     103,    -1,   105,    -1,    -1,   260,   664,   370,    -1,    55,
     664,   172,   404,   257,   669,   238,   669,   273,   664,    -1,
      -1,   256,    -1,   255,    -1,    -1,    99,   664,     3,    -1,
     279,   638,   409,   405,    -1,   279,   638,   111,   234,   609,
      -1,   221,   279,   638,   409,    -1,   222,   279,   638,   409,
      -1,   224,   279,   638,   409,    -1,   223,   279,   638,   409,
     265,     3,    -1,   407,   279,   638,   409,   408,    -1,   220,
      -1,   219,    -1,    58,   220,    -1,    58,   219,    -1,    17,
     220,    -1,    17,   219,    -1,    -1,   265,    77,    64,    85,
      -1,   265,    77,    84,    85,    -1,   265,    77,   252,    -1,
     173,   412,   174,    -1,   410,    -1,   444,   320,   441,   411,
      -1,    -1,   172,    83,   171,    -1,   172,   171,    -1,   414,
      -1,   412,   341,   414,    -1,   416,    -1,   427,    -1,   413,
      -1,   419,    -1,   439,    -1,   130,    -1,   131,    -1,   661,
     655,   417,    -1,   661,   415,    -1,    -1,   418,    -1,   421,
      -1,   418,   421,    -1,   664,   172,   267,   173,   420,   174,
      -1,   421,    -1,   420,   341,   421,    -1,   422,    -1,   424,
      -1,   425,    -1,   250,   423,    -1,   590,    -1,   428,   435,
      -1,   127,   128,   320,   129,   426,    -1,   132,    -1,    -1,
     173,   396,   174,    -1,   428,   436,    -1,    -1,   229,   664,
      -1,    83,    41,    -1,    42,    -1,    43,    -1,   274,   110,
      -1,   274,   250,    -1,   265,    65,   429,    -1,   265,    64,
     429,    -1,    -1,   430,    -1,   431,    -1,   431,   430,    -1,
     430,   431,    -1,    -1,    71,    -1,    39,    -1,    40,    -1,
      -1,   113,   433,    -1,   176,   110,    -1,   110,    -1,   282,
      -1,   269,   264,    -1,   272,   638,   444,   434,   432,    -1,
     437,    -1,   282,   445,    -1,   269,   264,   445,    -1,   253,
     264,   445,   272,   638,   444,   434,   432,    -1,   228,   173,
     564,   174,    -1,   664,    -1,   438,   341,   664,    -1,   182,
     638,    -1,   284,   638,   444,   320,   441,   443,    -1,   442,
      -1,   173,   441,   174,    -1,   547,    -1,   541,    -1,    -1,
     172,   228,   266,    -1,    -1,   445,    -1,   173,   438,   174,
      -1,   354,   231,   638,   237,   238,   664,    -1,   664,   342,
     664,    -1,     4,    -1,   669,    -1,   354,   233,   638,   173,
     476,   174,   236,   475,   237,   238,   447,    -1,   354,   233,
     638,   173,   476,   174,   236,   475,   450,    -1,   354,   233,
     638,   173,   476,   174,   236,   475,   241,     5,   448,    -1,
     354,   165,   233,   638,   173,   476,   174,   237,   238,   447,
      -1,   354,   235,   638,   173,   476,   174,   236,   475,   237,
     238,   447,    -1,   354,   235,   638,   173,   476,   174,   236,
     475,   241,     5,   448,    -1,   354,   232,   638,   173,   476,
     174,   237,   238,   447,    -1,   354,   232,   638,   173,   476,
     174,   450,    -1,   354,   234,   638,   173,   476,   174,   241,
       5,   448,    -1,   453,    -1,   311,   451,   453,   133,   312,
      -1,   311,   310,   451,   453,   133,   312,    -1,    -1,   451,
     453,   133,    -1,    -1,   452,   454,   133,    -1,   497,    -1,
     496,    -1,   363,    -1,   372,    -1,   377,    -1,   394,    -1,
     492,    -1,   389,    -1,   360,    -1,   362,    -1,   455,    -1,
     546,    -1,   497,    -1,   496,    -1,   372,    -1,   377,    -1,
     360,    -1,   362,    -1,   455,    -1,   546,    -1,   457,    -1,
     456,    -1,   471,    -1,   469,    -1,   463,    -1,   461,    -1,
     240,   458,    -1,   240,   609,    -1,   459,   173,   460,   174,
      -1,   638,    -1,    -1,   591,    -1,   460,   341,   591,    -1,
     276,   462,    -1,   442,    -1,   564,    -1,   279,   173,   442,
     174,    -1,   300,   591,   465,   468,   312,   300,    -1,   300,
     467,   468,   312,   300,    -1,   301,   591,   302,   451,    -1,
     464,    -1,   465,   464,    -1,   301,   564,   302,   451,    -1,
     466,    -1,   467,   466,    -1,    -1,   303,   451,    -1,   306,
     564,   302,   451,   470,   312,   306,    -1,    -1,   303,   451,
      -1,   307,   564,   302,   451,   470,    -1,   472,   308,   564,
     309,   451,   312,   308,   473,    -1,    -1,   664,   343,    -1,
      -1,   664,    -1,   661,   655,    -1,   474,   341,   661,   655,
      -1,   279,   173,   474,   174,    -1,   655,    -1,   477,    -1,
     206,    -1,    -1,   477,   341,   664,   655,    -1,   664,   655,
      -1,   354,   321,   638,   479,   480,   265,   664,   481,   486,
      -1,   323,    -1,   324,    -1,    67,    -1,    64,    -1,    65,
      -1,    65,   322,   438,    -1,    -1,   330,   482,    -1,   483,
      -1,   482,   483,    -1,   328,   485,   484,   664,    -1,   327,
     485,   484,   664,    -1,   328,   279,   484,   664,    -1,   327,
     279,   484,   664,    -1,    -1,   320,    -1,    -1,   325,    -1,
     487,   489,   490,    -1,    -1,   112,   329,   488,    -1,   325,
      -1,   326,    -1,    -1,   301,   564,    -1,   454,    -1,   311,
     310,   452,   312,    -1,   233,   638,   493,    -1,   165,   233,
     638,   493,    -1,   235,   638,   493,    -1,   232,   638,   493,
      -1,   234,   638,   493,    -1,   355,   279,   638,   495,    -1,
     355,   491,   495,    -1,   355,   189,   233,   638,   495,    -1,
     355,   189,   165,   233,   638,   495,    -1,   355,   189,   235,
     638,   495,    -1,   355,   189,   232,   638,   495,    -1,   355,
     189,   234,   638,   495,    -1,   355,   284,   638,   495,    -1,
     355,   231,   638,   495,    -1,   355,   260,   664,    -1,   355,
      55,   664,    -1,   355,   319,   638,    -1,   355,   321,   638,
      -1,    -1,   173,   494,   174,    -1,   173,   174,    -1,   655,
      -1,   655,   341,   494,    -1,    -1,    43,    -1,    42,    -1,
     497,    -1,   496,    -1,   521,    -1,   523,    -1,   522,    -1,
     506,    -1,   498,    -1,    77,   503,   504,    -1,    79,   664,
      -1,    80,    79,   664,    -1,    78,   503,   504,   505,    -1,
      86,    87,   499,    -1,   274,    58,    87,   499,    -1,   274,
      87,   499,    -1,    -1,   500,    -1,   501,    -1,   500,   341,
     501,    -1,    88,    90,    -1,    88,    89,    -1,    91,    92,
     502,    -1,    97,    98,   668,    -1,    88,    93,    -1,    88,
      94,    -1,    95,    88,    -1,    96,    -1,    81,    -1,    -1,
     190,    82,    -1,   190,    83,    82,    -1,    -1,    -1,   281,
      79,   664,    -1,   313,   514,   262,   638,   444,   111,   519,
     509,   512,   515,   516,   517,   518,   507,    -1,   313,   514,
     262,   638,   444,   111,   316,   509,   512,   515,   516,   517,
     518,    -1,   313,   234,   262,   638,   111,   609,    -1,   313,
     514,    27,   262,   638,   444,   111,   519,   518,    -1,   313,
     441,   262,   669,   512,   515,    -1,   313,   441,   262,   317,
     512,   515,    -1,    -1,   318,   173,   508,   174,    -1,   653,
      -1,   508,   341,   653,    -1,    -1,   173,   510,   174,    -1,
     511,    -1,   510,   341,   511,    -1,   664,    -1,   664,     3,
      -1,    -1,   513,   315,   669,    -1,   513,   315,   669,   341,
     669,    -1,   513,   315,   669,   341,   669,   341,   669,    -1,
      -1,    16,    -1,    -1,   653,   314,    -1,   298,   653,    -1,
     653,   298,   653,   314,    -1,   653,   314,   298,   653,    -1,
      -1,   110,   484,   669,    -1,    -1,    59,    -1,    -1,    60,
      61,    -1,    -1,    83,   229,    -1,   520,    -1,   173,   520,
     174,    -1,   669,    -1,   520,   341,   669,    -1,    64,   111,
     638,   535,    -1,    65,   638,   274,   533,   555,   535,    -1,
      67,   262,   638,   524,    -1,    67,   262,   638,   445,   524,
      -1,    -1,   250,   283,    -1,   283,   525,    -1,   442,    -1,
     173,   526,   174,    -1,   525,   341,   173,   526,   174,    -1,
     530,    -1,   526,   341,   530,    -1,   531,    -1,   527,   341,
     531,    -1,   110,    -1,   591,    -1,   529,    -1,   529,    -1,
     550,    -1,    -1,   189,    -1,   251,    -1,   534,    -1,   533,
     341,   534,    -1,   661,   177,   564,    -1,   445,   177,   589,
      -1,    -1,   285,   564,    -1,   173,   536,   174,    -1,   557,
      74,    75,   557,    -1,   557,   166,   557,   540,    -1,   557,
     537,    75,   557,   540,    -1,   557,    73,   537,    75,   557,
      -1,    -1,    76,    -1,   539,   538,    -1,    -1,    72,    -1,
      69,    -1,    70,    -1,    71,    -1,   265,   564,    -1,    16,
     445,    -1,   541,    -1,   172,   542,   544,    -1,   542,   341,
     543,    -1,   543,    -1,   664,   444,   320,   173,   544,   174,
      -1,   547,    -1,   546,    -1,   547,    -1,    66,   532,   553,
     554,    -1,    66,   532,   553,   262,   548,   554,    -1,   550,
     566,   567,   568,   569,    -1,   549,    -1,   548,   341,   549,
      -1,   664,    -1,   550,   170,   551,   552,   550,    -1,   550,
     169,   551,   552,   550,    -1,   550,   168,   551,   552,   550,
      -1,   173,   550,   174,    -1,   545,    -1,    -1,   189,    -1,
     251,    -1,    -1,   167,    -1,   167,   104,   173,   562,   174,
      -1,   615,    -1,   555,   535,   561,   563,    -1,    -1,   111,
     556,    -1,   557,    -1,   556,   341,   557,    -1,   638,   560,
      -1,   609,   560,    -1,    68,   609,   560,    -1,   589,   559,
      -1,    68,   589,   559,    -1,   589,    -1,   536,    -1,    -1,
     344,   558,   550,   345,   559,    -1,   320,   664,   173,   666,
     174,    -1,   320,   664,    -1,   664,   173,   666,   174,    -1,
     664,    -1,    -1,   559,    -1,    -1,   109,   104,   562,    -1,
     639,    -1,   562,   341,   639,    -1,    -1,   108,   564,    -1,
     565,   179,   564,    -1,   565,    -1,   574,   190,   565,    -1,
     574,    -1,    -1,   102,   104,   570,    -1,    -1,   297,   652,
      -1,   297,   593,    -1,    -1,   298,   653,    -1,   298,   593,
      -1,    -1,   299,   653,    -1,   299,    14,    -1,   299,   593,
      -1,   571,    -1,   570,   341,   571,    -1,   591,   572,    -1,
      -1,   225,    -1,   226,    -1,   575,    -1,   576,    -1,   578,
      -1,   580,    -1,   581,    -1,   583,    -1,   585,    -1,   588,
      -1,   591,    -1,   176,   574,    -1,   573,    -1,   574,   191,
     574,    -1,   574,   177,   574,    -1,   574,   187,   577,   574,
     190,   574,    -1,   574,   186,   577,   574,   190,   574,    -1,
      -1,   100,    -1,   101,    -1,   574,   183,   579,    -1,   574,
     181,   579,    -1,   574,   182,   579,    -1,   574,   180,   579,
      -1,   591,    -1,   591,   107,   669,    -1,   591,   263,   176,
     110,    -1,   591,   263,   110,    -1,   574,   185,   173,   527,
     174,    -1,   574,   184,   173,   527,   174,    -1,   173,   582,
     174,   185,   173,   527,   174,    -1,   173,   582,   174,   184,
     173,   527,   174,    -1,   574,    -1,   582,   341,   574,    -1,
     574,   191,   584,   589,    -1,   574,   177,   584,   574,    -1,
     188,    -1,   178,    -1,   189,    -1,   106,   589,    -1,   574,
      -1,   586,   341,   574,    -1,   344,   586,   345,    -1,   587,
     638,   587,    -1,   173,   547,   174,    -1,   173,   283,   525,
     174,    -1,   173,   541,   174,    -1,   592,    -1,   591,   192,
     591,    -1,   591,   193,   591,    -1,   591,   206,   591,    -1,
     591,   207,   591,    -1,   591,   208,   591,    -1,   591,   196,
     591,    -1,   591,   194,   591,    -1,   591,   213,   591,    -1,
     591,   210,   591,    -1,   591,   218,   591,    -1,   591,   211,
     591,    -1,   591,   217,   591,    -1,   591,   212,   591,    -1,
     591,   216,   591,    -1,   591,   215,   591,    -1,   591,   134,
     591,    -1,   591,   195,   591,    -1,   591,   209,   591,    -1,
     591,   214,   591,    -1,   209,   591,    -1,   591,   204,   591,
      -1,   591,   203,   591,    -1,   591,   202,   591,    -1,   591,
     201,   591,    -1,   192,   591,    -1,   193,   591,    -1,   173,
     564,   174,    -1,   590,    -1,   589,    -1,   618,    -1,   635,
      -1,    62,    -1,   594,    -1,   639,    -1,   608,    -1,   622,
      -1,   609,    -1,   124,   125,   112,   638,    -1,   612,    -1,
     614,    -1,   642,    -1,   640,    -1,   678,    -1,   593,    -1,
     528,    -1,   346,    -1,   595,   331,   173,   596,   174,    -1,
     619,   173,   174,    -1,   622,    -1,   597,   598,   599,    -1,
      -1,   332,   104,   562,    -1,    -1,   102,   104,   570,    -1,
      -1,   600,   601,   607,    -1,    85,    -1,   339,    -1,   602,
      -1,   604,    -1,   340,   336,    -1,   603,    -1,   333,   325,
      -1,   592,   336,    -1,   186,   602,   190,   605,    -1,   340,
     335,    -1,   606,    -1,   333,   325,    -1,   592,   336,    -1,
      -1,   334,   333,   325,    -1,   334,   109,    -1,   334,   338,
      -1,   334,    83,   337,    -1,   134,   664,    -1,   610,   173,
     174,    -1,   610,   173,   643,   174,    -1,   611,    -1,   664,
     342,   611,    -1,   664,    -1,    69,    -1,    70,    -1,    67,
      -1,   114,   173,   629,   111,   591,   174,    -1,    46,   613,
      -1,    48,   613,    -1,    47,   613,    -1,    50,   613,    -1,
      49,   613,    -1,    -1,   173,   174,    -1,   199,   173,   591,
     111,   591,   112,   591,   174,    -1,   199,   173,   591,   341,
     591,   341,   591,   174,    -1,   199,   173,   591,   111,   591,
     174,    -1,   199,   173,   591,   341,   591,   174,    -1,   198,
     173,   591,   184,   591,   174,    -1,   591,   200,   591,    -1,
     197,   173,   591,   341,   591,   341,   591,   174,    -1,   616,
      -1,   615,   341,   616,    -1,   206,    -1,   664,   342,   206,
      -1,   609,   342,   206,    -1,   564,   617,    -1,    -1,   320,
     664,    -1,   636,    -1,    10,    -1,   664,   342,    10,    -1,
       8,    -1,   664,   342,     8,    -1,     9,    -1,   664,   342,
       9,    -1,   620,   173,   206,   174,    -1,   620,   173,   664,
     342,   206,   174,    -1,   620,   173,   251,   650,   174,    -1,
     620,   173,   189,   650,   174,    -1,   620,   173,   650,   174,
      -1,   621,   173,   650,   341,   650,   174,    -1,   749,    -1,
     192,    -1,   193,    -1,    -1,   172,   287,   296,    -1,    -1,
     173,   668,   174,    -1,    -1,   173,   668,   174,    -1,    -1,
     286,    -1,   287,   625,   624,    -1,   288,   626,   624,    -1,
     290,    -1,   291,    -1,   292,    -1,   293,    -1,   294,    -1,
     628,    -1,   295,    -1,   628,   625,    -1,   628,    -1,   295,
     626,    -1,   628,   625,    -1,   295,   626,    -1,   630,   281,
     631,    -1,   632,    -1,   289,   633,    -1,    55,    -1,    57,
      -1,    56,    -1,   669,    -1,    13,    -1,    12,    -1,    11,
      -1,    14,    -1,    15,    -1,   286,   669,    -1,   287,   625,
     624,   669,    -1,   288,   626,   624,   669,    -1,   637,    -1,
     660,   669,    -1,     6,   669,    -1,   657,   669,    -1,     5,
     669,    -1,    44,    -1,    45,    -1,   289,   623,   669,   633,
      -1,   664,    -1,   664,   342,   664,    -1,   664,   342,   664,
     342,   664,    -1,   664,    -1,   664,   342,   664,    -1,   664,
     342,   664,   342,   664,    -1,    18,   173,   641,   320,   655,
     174,    -1,    19,   173,   641,   341,   655,   174,    -1,   564,
      -1,   304,   173,   591,   341,   591,   174,    -1,   305,   173,
     644,   174,    -1,   300,   591,   646,   649,   312,    -1,   300,
     648,   649,   312,    -1,   529,    -1,   643,   341,   529,    -1,
     529,   341,   529,    -1,   644,   341,   529,    -1,   301,   591,
     302,   529,    -1,   645,    -1,   646,   645,    -1,   301,   564,
     302,   529,    -1,   647,    -1,   648,   647,    -1,    -1,   303,
     591,    -1,   591,    -1,   668,    -1,   667,    -1,   667,    -1,
     668,    -1,    20,    -1,   658,    -1,   659,    -1,    20,   173,
     651,   174,    -1,   658,   173,   651,   174,    -1,   659,   173,
     651,   174,    -1,   660,    -1,   660,   173,   651,   174,    -1,
      31,    -1,    32,    -1,    35,    -1,    33,    -1,    34,    -1,
      29,    -1,    29,   173,   651,   174,    -1,    29,   173,   651,
     341,   654,   174,    -1,    30,    -1,    30,   173,   651,   174,
      -1,    30,   173,   668,   341,   668,   174,    -1,    36,    -1,
      36,    38,    -1,    37,    -1,   627,    -1,   634,    -1,     6,
      -1,     6,   173,   651,   174,    -1,   657,    -1,   657,   173,
     651,   174,    -1,   657,   173,   668,   341,   668,   174,    -1,
       5,    -1,     5,   173,   651,   174,    -1,    52,    -1,    52,
     173,   656,   174,    -1,    52,   173,   656,   341,   668,   174,
      -1,    54,    -1,    53,    -1,    53,    -1,   669,    -1,     7,
      -1,    24,    -1,    20,    21,    -1,    25,    -1,    26,    -1,
      20,    22,    23,    -1,    28,    -1,    27,    22,    23,    -1,
     664,    -1,   663,    -1,     5,    -1,     6,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,     5,    -1,     6,    -1,
     175,    -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,
     665,    -1,    22,    -1,   238,    -1,    23,    -1,   257,    -1,
     268,    -1,    38,    -1,   270,    -1,   260,    -1,    98,    -1,
     231,    -1,    80,    -1,   125,    -1,   296,    -1,    41,    -1,
     320,    -1,   227,    -1,   280,    -1,   120,    -1,   251,    -1,
     116,    -1,   118,    -1,   119,    -1,   245,    -1,   273,    -1,
      86,    -1,   326,    -1,   279,    -1,   126,    -1,   171,    -1,
      97,    -1,   113,    -1,   267,    -1,   325,    -1,   264,    -1,
     241,    -1,    92,    -1,    63,    -1,   286,    -1,   287,    -1,
     288,    -1,   289,    -1,   105,    -1,   248,    -1,   249,    -1,
     244,    -1,   246,    -1,   247,    -1,    26,    -1,   275,    -1,
      83,    -1,   142,    -1,   143,    -1,   146,    -1,   148,    -1,
     149,    -1,   150,    -1,   151,    -1,   152,    -1,   153,    -1,
     154,    -1,   156,    -1,   158,    -1,   159,    -1,   160,    -1,
     161,    -1,   163,    -1,   165,    -1,   220,    -1,   219,    -1,
     242,    -1,   243,    -1,    99,    -1,    52,    -1,   664,    -1,
     666,   341,   664,    -1,    11,    -1,    11,    -1,     5,    -1,
       3,    -1,     3,   669,    -1,   249,   671,    -1,   668,   173,
     174,    -1,   668,   173,   527,   174,    -1,    -1,   673,    -1,
     268,   674,    -1,   666,    -1,   677,    -1,   675,    -1,   676,
     341,   675,    -1,   591,    -1,   679,    -1,   680,    -1,   681,
      -1,   682,    -1,   696,    -1,   703,    -1,   705,    -1,   708,
      -1,   718,    -1,   719,    -1,   135,   173,   592,   722,   174,
      -1,   136,   173,   676,   722,   174,    -1,   137,   173,   675,
     722,   174,    -1,   138,   173,   238,   684,   683,   722,   174,
      -1,    -1,   341,   723,    -1,   341,   723,   341,   685,    -1,
     341,   723,   341,   685,   341,   691,    -1,   341,   723,   341,
     691,    -1,   341,   685,    -1,   341,   685,   341,   691,    -1,
     341,   691,    -1,   664,    -1,   139,   173,   686,   174,    -1,
     687,    -1,   686,   341,   687,    -1,   689,   688,    -1,    -1,
     320,   690,    -1,   591,    -1,   664,    -1,   692,   694,    -1,
     693,    -1,   692,   341,   693,    -1,   591,    -1,    -1,   266,
     695,    -1,   110,   265,   110,    -1,   151,   265,   110,    -1,
     150,   265,   110,    -1,   148,   265,   110,    -1,   148,   265,
      83,   154,    -1,   140,   173,   697,   698,   694,   722,   174,
      -1,    -1,   723,   341,    -1,   699,    -1,   698,   341,   699,
      -1,   700,   701,    -1,   591,    -1,    -1,   320,   702,    -1,
     664,    -1,   141,   173,   721,   592,   704,   174,    -1,    84,
     143,    -1,   142,   143,    -1,   144,   173,   238,   706,   707,
     722,   174,    -1,   664,    -1,    -1,   341,   592,    -1,   145,
     173,   709,   710,   722,   716,   717,   174,    -1,     3,    -1,
      -1,   146,   711,   712,    -1,   731,    -1,   713,    -1,   712,
     341,   713,    -1,   714,    -1,   715,    -1,   592,   730,    -1,
     592,   320,   664,   730,    -1,    -1,   731,    -1,   110,   265,
     151,    -1,   151,   265,   151,    -1,   147,   173,   592,   722,
     174,    -1,   157,   173,   720,   675,   732,   174,    -1,   721,
      -1,   115,    -1,   152,    -1,   154,    -1,    -1,   158,   154,
      -1,   158,   115,    -1,   155,   173,   724,   174,    -1,   725,
      -1,   724,   341,   725,    -1,   728,    -1,   729,    -1,   664,
      -1,   591,    -1,   727,   320,   726,    -1,   250,   727,    -1,
      83,   250,    -1,    -1,   731,    -1,   104,   149,    -1,   104,
     125,    -1,    -1,   733,    -1,   161,   281,   162,   734,   742,
      -1,   735,    -1,   740,    -1,   163,   736,   738,    -1,    83,
     156,   738,    -1,   737,    -1,     3,    -1,    -1,   159,   739,
      -1,   737,    -1,   160,   741,    -1,   664,    -1,    -1,   743,
      -1,   745,    -1,   746,   744,    -1,    -1,   745,    -1,   153,
     748,    -1,    83,   156,    -1,   156,   747,    -1,   737,    -1,
     664,    -1,   164,   173,   675,   566,   722,   174,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   615,   615,   626,   626,   640,   640,   655,   655,   670,
     670,   680,   680,   686,   687,   688,   689,   690,   695,   698,
     701,   704,   708,   709,   710,   711,   712,   713,   714,   715,
     716,   723,   727,   728,   732,   734,   738,   743,   751,   756,
     764,   772,   780,   788,   794,   802,   810,   818,   822,   826,
     833,   836,   837,   841,   842,   846,   847,   851,   851,   851,
     851,   851,   854,   855,   859,   860,   864,   873,   884,   885,
     890,   891,   895,   896,   901,   902,   906,   914,   924,   925,
     929,   930,   934,   938,   945,   946,   951,   952,   956,   957,
     958,   969,   970,   971,   975,   976,   981,   982,   983,   984,
     985,   986,   990,   991,   996,   997,  1003,  1009,  1014,  1019,
    1024,  1029,  1034,  1039,  1044,  1049,  1062,  1068,  1074,  1084,
    1089,  1093,  1097,  1099,  1107,  1115,  1120,  1125,  1133,  1134,
    1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1161,  1172,
    1189,  1199,  1200,  1204,  1205,  1209,  1210,  1211,  1215,  1216,
    1217,  1218,  1219,  1223,  1224,  1225,  1226,  1227,  1228,  1229,
    1230,  1237,  1247,  1248,  1249,  1250,  1270,  1275,  1286,  1287,
    1288,  1292,  1293,  1297,  1308,  1315,  1325,  1335,  1348,  1358,
    1373,  1374,  1375,  1376,  1377,  1378,  1382,  1383,  1384,  1385,
    1389,  1390,  1394,  1404,  1405,  1406,  1410,  1412,  1416,  1416,
    1417,  1417,  1417,  1420,  1421,  1425,  1433,  1486,  1487,  1491,
    1493,  1498,  1507,  1509,  1513,  1513,  1513,  1516,  1520,  1524,
    1533,  1562,  1600,  1601,  1606,  1617,  1618,  1622,  1623,  1624,
    1625,  1626,  1630,  1634,  1638,  1639,  1640,  1641,  1642,  1646,
    1647,  1648,  1649,  1653,  1654,  1658,  1659,  1660,  1661,  1662,
    1672,  1676,  1678,  1680,  1695,  1699,  1701,  1706,  1710,  1722,
    1723,  1727,  1728,  1732,  1733,  1737,  1738,  1742,  1746,  1754,
    1759,  1760,  1765,  1778,  1791,  1825,  1838,  1851,  1886,  1898,
    1910,  1935,  1937,  1941,  1959,  1960,  1965,  1966,  1971,  1972,
    1973,  1974,  1975,  1976,  1977,  1978,  1979,  1980,  1981,  1982,
    1986,  1987,  1988,  1989,  1990,  1991,  1992,  1993,  1997,  1998,
    1999,  2000,  2001,  2002,  2015,  2019,  2023,  2032,  2035,  2036,
    2037,  2043,  2047,  2048,  2049,  2054,  2060,  2068,  2076,  2078,
    2083,  2091,  2093,  2098,  2099,  2106,  2120,  2121,  2123,  2134,
    2155,  2156,  2160,  2161,  2166,  2170,  2178,  2180,  2185,  2186,
    2190,  2194,  2199,  2248,  2262,  2263,  2267,  2268,  2269,  2270,
    2274,  2275,  2279,  2280,  2286,  2287,  2288,  2289,  2292,  2294,
    2297,  2299,  2303,  2311,  2312,  2316,  2317,  2321,  2322,  2326,
    2328,  2334,  2340,  2346,  2352,  2358,  2367,  2372,  2377,  2385,
    2393,  2401,  2409,  2417,  2422,  2427,  2428,  2429,  2430,  2434,
    2435,  2436,  2440,  2443,  2448,  2449,  2450,  2455,  2456,  2461,
    2462,  2463,  2464,  2468,  2475,  2477,  2479,  2481,  2485,  2487,
    2489,  2494,  2495,  2499,  2501,  2507,  2508,  2509,  2510,  2514,
    2515,  2516,  2517,  2521,  2522,  2526,  2527,  2528,  2532,  2533,
    2537,  2551,  2565,  2570,  2581,  2588,  2600,  2601,  2606,  2607,
    2613,  2614,  2618,  2619,  2623,  2627,  2636,  2640,  2645,  2650,
    2659,  2660,  2664,  2665,  2666,  2667,  2669,  2674,  2675,  2679,
    2680,  2684,  2685,  2689,  2690,  2694,  2695,  2699,  2700,  2705,
    2714,  2756,  2764,  2775,  2776,  2778,  2780,  2785,  2786,  2791,
    2792,  2797,  2798,  2803,  2820,  2824,  2828,  2829,  2833,  2834,
    2835,  2839,  2840,  2845,  2850,  2858,  2859,  2865,  2867,  2872,
    2880,  2888,  2899,  2900,  2901,  2905,  2906,  2910,  2911,  2912,
    2916,  2917,  2937,  2941,  2951,  2952,  2956,  2968,  2973,  2975,
    2979,  2990,  3001,  3032,  3033,  3038,  3042,  3051,  3060,  3068,
    3069,  3073,  3074,  3075,  3080,  3081,  3083,  3088,  3092,  3102,
    3103,  3107,  3108,  3113,  3117,  3123,  3129,  3139,  3151,  3156,
    3160,  3159,  3172,  3177,  3182,  3187,  3195,  3196,  3200,  3201,
    3205,  3207,  3213,  3214,  3219,  3224,  3228,  3233,  3237,  3238,
    3243,  3244,  3248,  3252,  3253,  3257,  3261,  3262,  3266,  3270,
    3274,  3275,  3280,  3289,  3290,  3291,  3295,  3296,  3297,  3298,
    3299,  3300,  3301,  3302,  3303,  3307,  3324,  3328,  3335,  3345,
    3352,  3362,  3363,  3364,  3368,  3375,  3382,  3389,  3399,  3403,
    3419,  3420,  3424,  3430,  3436,  3441,  3449,  3451,  3456,  3464,
    3474,  3475,  3476,  3480,  3484,  3485,  3489,  3493,  3502,  3503,
    3505,  3511,  3512,  3519,  3526,  3533,  3540,  3547,  3554,  3561,
    3568,  3575,  3582,  3589,  3595,  3602,  3609,  3616,  3623,  3630,
    3637,  3644,  3650,  3657,  3664,  3671,  3678,  3680,  3702,  3706,
    3707,  3711,  3712,  3714,  3716,  3717,  3718,  3719,  3720,  3721,
    3722,  3723,  3724,  3725,  3726,  3727,  3728,  3732,  3802,  3808,
    3809,  3813,  3818,  3819,  3824,  3825,  3830,  3831,  3836,  3837,
    3841,  3842,  3846,  3847,  3848,  3852,  3856,  3861,  3862,  3863,
    3867,  3871,  3872,  3873,  3874,  3875,  3879,  3883,  3887,  3915,
    3916,  3921,  3922,  3923,  3924,  3928,  3935,  3940,  3945,  3950,
    3955,  3963,  3964,  3968,  3978,  3988,  3995,  4002,  4009,  4016,
    4029,  4030,  4035,  4040,  4045,  4050,  4058,  4059,  4063,  4085,
    4086,  4091,  4092,  4097,  4098,  4104,  4110,  4116,  4122,  4128,
    4134,  4141,  4145,  4146,  4147,  4151,  4152,  4163,  4165,  4169,
    4171,  4175,  4176,  4182,  4191,  4192,  4193,  4194,  4195,  4199,
    4200,  4204,  4210,  4213,  4219,  4222,  4228,  4231,  4236,  4256,
    4257,  4258,  4262,  4268,  4332,  4363,  4426,  4465,  4482,  4498,
    4514,  4530,  4531,  4548,  4565,  4582,  4603,  4607,  4614,  4659,
    4660,  4664,  4675,  4678,  4682,  4690,  4696,  4704,  4708,  4713,
    4715,  4721,  4729,  4731,  4736,  4740,  4746,  4754,  4756,  4761,
    4769,  4771,  4776,  4777,  4781,  4786,  4797,  4808,  4818,  4828,
    4830,  4835,  4836,  4838,  4840,  4849,  4850,  4859,  4860,  4861,
    4862,  4863,  4865,  4866,  4879,  4897,  4898,  4912,  4932,  4933,
    4934,  4935,  4936,  4937,  4938,  4940,  4941,  4943,  4955,  4969,
    4983,  4990,  5005,  5020,  5027,  5047,  5059,  5074,  5089,  5090,
    5094,  5095,  5096,  5099,  5100,  5103,  5105,  5108,  5109,  5110,
    5111,  5112,  5113,  5117,  5118,  5119,  5120,  5121,  5122,  5123,
    5124,  5128,  5129,  5130,  5131,  5132,  5133,  5134,  5135,  5136,
    5137,  5138,  5139,  5140,  5142,  5143,  5144,  5145,  5146,  5147,
    5148,  5149,  5150,  5151,  5152,  5153,  5154,  5155,  5157,  5158,
    5159,  5160,  5161,  5162,  5163,  5164,  5165,  5166,  5167,  5168,
    5169,  5170,  5171,  5173,  5174,  5175,  5176,  5177,  5178,  5179,
    5180,  5182,  5183,  5184,  5185,  5186,  5187,  5188,  5189,  5190,
    5191,  5192,  5193,  5194,  5195,  5196,  5197,  5198,  5199,  5200,
    5201,  5202,  5203,  5204,  5208,  5209,  5214,  5237,  5258,  5290,
    5292,  5300,  5307,  5312,  5327,  5328,  5332,  5335,  5338,  5342,
    5344,  5349,  5353,  5354,  5355,  5356,  5357,  5358,  5359,  5360,
    5361,  5362,  5366,  5374,  5382,  5389,  5403,  5404,  5408,  5412,
    5416,  5420,  5424,  5428,  5435,  5439,  5443,  5444,  5454,  5462,
    5463,  5467,  5471,  5475,  5482,  5484,  5489,  5493,  5494,  5498,
    5499,  5500,  5501,  5502,  5506,  5519,  5520,  5524,  5526,  5531,
    5537,  5541,  5542,  5546,  5551,  5560,  5561,  5565,  5576,  5580,
    5581,  5586,  5596,  5599,  5601,  5605,  5609,  5610,  5614,  5615,
    5619,  5623,  5626,  5628,  5632,  5633,  5637,  5645,  5654,  5655,
    5659,  5660,  5664,  5665,  5666,  5681,  5685,  5686,  5696,  5697,
    5701,  5705,  5709,  5719,  5723,  5726,  5728,  5732,  5733,  5736,
    5738,  5742,  5747,  5748,  5752,  5753,  5757,  5761,  5764,  5766,
    5770,  5774,  5778,  5781,  5783,  5787,  5788,  5792,  5794,  5798,
    5802,  5803,  5807,  5811,  5815
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
  "INSERT", "LATERAL", "LEFT", "RIGHT", "FULL", "OUTER", "NATURAL",
  "CROSS", "JOIN", "INNER", "COMMIT", "ROLLBACK", "SAVEPOINT", "RELEASE",
  "WORK", "CHAIN", "NO", "PRESERVE", "ROWS", "START", "TRANSACTION",
  "READ", "WRITE", "ONLY", "ISOLATION", "LEVEL", "UNCOMMITTED",
  "COMMITTED", "sqlREPEATABLE", "SERIALIZABLE", "DIAGNOSTICS", "sqlSIZE",
  "STORAGE", "ASYMMETRIC", "SYMMETRIC", "ORDER", "ORDERED", "BY",
  "IMPRINTS", "EXISTS", "ESCAPE", "HAVING", "sqlGROUP", "sqlNULL", "FROM",
  "FOR", "MATCH", "EXTRACT", "SEQUENCE", "INCREMENT", "RESTART",
  "MAXVALUE", "MINVALUE", "CYCLE", "NOMAXVALUE", "NOMINVALUE", "NOCYCLE",
  "NEXT", "VALUE", "CACHE", "GENERATED", "ALWAYS", "IDENTITY", "SERIAL",
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
  "GEOM_MBR_EQUAL", "GEOM_DIST", "GEOM_ABOVE", "GEOM_BELOW",
  "GEOM_OVERLAP_OR_RIGHT", "TEMP", "TEMPORARY", "STREAM", "MERGE",
  "REMOTE", "REPLICA", "ASC", "DESC", "AUTHORIZATION", "CHECK",
  "CONSTRAINT", "CREATE", "TYPE", "PROCEDURE", "FUNCTION", "sqlLOADER",
  "AGGREGATE", "RETURNS", "EXTERNAL", "sqlNAME", "DECLARE", "CALL",
  "LANGUAGE", "ANALYZE", "MINMAX", "SQL_EXPLAIN", "SQL_PLAN", "SQL_DEBUG",
  "SQL_TRACE", "PREPARE", "EXECUTE", "DEFAULT", "DISTINCT", "DROP",
  "FOREIGN", "RENAME", "ENCRYPTED", "UNENCRYPTED", "PASSWORD", "GRANT",
  "REVOKE", "ROLE", "ADMIN", "INTO", "IS", "KEY", "ON", "OPTION",
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
  "join_type", "opt_outer", "outer_join_type", "join_spec", "with_query",
  "with_list", "with_list_element", "with_query_expression",
  "simple_select", "select_statement_single_row",
  "select_no_parens_orderby", "select_target_list", "target_specification",
  "select_no_parens", "set_distinct", "opt_corresponding", "selection",
  "table_exp", "opt_from_clause", "table_ref_commalist", "table_ref", "@6",
  "table_name", "opt_table_name", "opt_group_by_clause",
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
     425,   426,   427,    40,    41,   428,   429,    61,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,    43,    45,    38,   124,    94,   444,   445,   446,
     447,   448,   449,   450,   451,   452,    42,    47,    37,   126,
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
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,    44,    46,    58,    91,    93,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   347,   348,   349,   348,   350,   348,   351,   348,   352,
     348,   353,   348,   348,   348,   348,   348,   348,   354,   355,
     356,   357,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   359,   359,   360,   360,   361,   361,   362,   362,
     362,   362,   362,   362,   362,   363,   363,   364,   364,   364,
     365,   366,   366,   367,   367,   368,   368,   369,   369,   369,
     369,   369,   370,   370,   371,   371,   372,   372,   373,   373,
     374,   374,   375,   375,   376,   376,   377,   377,   378,   378,
     379,   379,   380,   380,   381,   381,   382,   382,   383,   383,
     383,   384,   384,   384,   385,   385,   386,   386,   386,   386,
     386,   386,   387,   387,   388,   388,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   390,   390,   390,   391,
     391,   391,   391,   391,   391,   392,   392,   392,   393,   393,
     394,   394,   394,   394,   394,   394,   394,   394,   395,   395,
     395,   396,   396,   397,   397,   398,   398,   398,   399,   399,
     399,   399,   399,   400,   400,   400,   400,   400,   400,   400,
     400,   401,   402,   402,   402,   402,   403,   403,   404,   404,
     404,   405,   405,   406,   406,   406,   406,   406,   406,   406,
     407,   407,   407,   407,   407,   407,   408,   408,   408,   408,
     409,   409,   410,   411,   411,   411,   412,   412,   413,   413,
     414,   414,   414,   415,   415,   416,   416,   417,   417,   418,
     418,   419,   420,   420,   421,   421,   421,   422,   423,   424,
     425,   425,   426,   426,   427,   428,   428,   429,   429,   429,
     429,   429,   430,   431,   432,   432,   432,   432,   432,   433,
     433,   433,   433,   434,   434,   435,   435,   435,   435,   435,
     435,   436,   436,   436,   437,   438,   438,   439,   440,   441,
     441,   442,   442,   443,   443,   444,   444,   445,   446,   447,
     448,   448,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   450,   450,   450,   451,   451,   452,   452,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     454,   454,   454,   454,   454,   454,   454,   454,   455,   455,
     455,   455,   455,   455,   456,   457,   458,   459,   460,   460,
     460,   461,   462,   462,   462,   463,   463,   464,   465,   465,
     466,   467,   467,   468,   468,   469,   470,   470,   470,   471,
     472,   472,   473,   473,   474,   474,   475,   475,   476,   476,
     476,   477,   477,   478,   479,   479,   480,   480,   480,   480,
     481,   481,   482,   482,   483,   483,   483,   483,   484,   484,
     485,   485,   486,   487,   487,   488,   488,   489,   489,   490,
     490,   491,   491,   491,   491,   491,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   493,
     493,   493,   494,   494,   495,   495,   495,   358,   358,   496,
     496,   496,   496,   497,   498,   498,   498,   498,   498,   498,
     498,   499,   499,   500,   500,   501,   501,   501,   501,   502,
     502,   502,   502,   503,   503,   504,   504,   504,   505,   505,
     506,   506,   506,   506,   506,   506,   507,   507,   508,   508,
     509,   509,   510,   510,   511,   511,   512,   512,   512,   512,
     513,   513,   514,   514,   514,   514,   514,   515,   515,   516,
     516,   517,   517,   518,   518,   519,   519,   520,   520,   521,
     522,   523,   523,   524,   524,   524,   524,   525,   525,   526,
     526,   527,   527,   528,   529,   530,   531,   531,   532,   532,
     532,   533,   533,   534,   534,   535,   535,   536,   536,   536,
     536,   536,   537,   537,   537,   538,   538,   539,   539,   539,
     540,   540,   358,   541,   542,   542,   543,   544,   358,   358,
     545,   546,   547,   548,   548,   549,   550,   550,   550,   550,
     550,   551,   551,   551,   552,   552,   552,   553,   554,   555,
     555,   556,   556,   557,   557,   557,   557,   557,   557,   557,
     558,   557,   559,   559,   559,   559,   560,   560,   561,   561,
     562,   562,   563,   563,   564,   564,   565,   565,   566,   566,
     567,   567,   567,   568,   568,   568,   569,   569,   569,   569,
     570,   570,   571,   572,   572,   572,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   574,   574,   575,   575,   576,
     576,   577,   577,   577,   578,   578,   578,   578,   579,   579,
     580,   580,   581,   581,   581,   581,   582,   582,   583,   583,
     584,   584,   584,   585,   586,   586,   587,   588,   589,   589,
     589,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   591,
     591,   592,   592,   592,   592,   592,   592,   592,   592,   592,
     592,   592,   592,   592,   592,   592,   592,   593,   594,   595,
     595,   596,   597,   597,   598,   598,   599,   599,   600,   600,
     601,   601,   602,   602,   602,   603,   604,   605,   605,   605,
     606,   607,   607,   607,   607,   607,   608,   609,   609,   610,
     610,   611,   611,   611,   611,   612,   612,   612,   612,   612,
     612,   613,   613,   614,   614,   614,   614,   614,   614,   614,
     615,   615,   616,   616,   616,   616,   617,   617,   618,   619,
     619,   620,   620,   621,   621,   622,   622,   622,   622,   622,
     622,   622,   623,   623,   623,   624,   624,   625,   625,   626,
     626,   627,   627,   627,   628,   628,   628,   628,   628,   629,
     629,   630,   631,   631,   632,   632,   633,   633,   634,   635,
     635,   635,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   637,   638,
     638,   638,   639,   639,   639,   640,   640,   641,   642,   642,
     642,   642,   643,   643,   644,   644,   645,   646,   646,   647,
     648,   648,   649,   649,   650,   651,   652,   653,   654,   655,
     655,   655,   655,   655,   655,   655,   655,   655,   655,   655,
     655,   655,   655,   655,   655,   655,   655,   655,   655,   655,
     655,   655,   655,   655,   655,   655,   655,   655,   655,   655,
     655,   655,   655,   655,   655,   656,   656,   657,   658,   658,
     659,   659,   659,   660,   660,   661,   662,   663,   663,   663,
     663,   663,   663,   664,   664,   664,   664,   664,   664,   664,
     664,   665,   665,   665,   665,   665,   665,   665,   665,   665,
     665,   665,   665,   665,   665,   665,   665,   665,   665,   665,
     665,   665,   665,   665,   665,   665,   665,   665,   665,   665,
     665,   665,   665,   665,   665,   665,   665,   665,   665,   665,
     665,   665,   665,   665,   665,   665,   665,   665,   665,   665,
     665,   665,   665,   665,   665,   665,   665,   665,   665,   665,
     665,   665,   665,   665,   665,   665,   665,   665,   665,   665,
     665,   665,   665,   665,   666,   666,   667,   668,   668,   669,
     669,   670,   671,   671,   672,   672,   673,   674,   675,   676,
     676,   677,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   679,   680,   681,   682,   683,   683,   683,   683,
     683,   683,   683,   683,   684,   685,   686,   686,   687,   688,
     688,   689,   690,   691,   692,   692,   693,   694,   694,   695,
     695,   695,   695,   695,   696,   697,   697,   698,   698,   699,
     700,   701,   701,   702,   703,   704,   704,   705,   706,   707,
     707,   708,   709,   710,   710,   711,   712,   712,   713,   713,
     714,   715,   716,   716,   717,   717,   718,   719,   720,   720,
     721,   721,   722,   722,   722,   723,   724,   724,   725,   725,
     726,   727,   728,   729,   729,   730,   730,   731,   731,   732,
     732,   733,   734,   734,   735,   735,   736,   737,   738,   738,
     739,   740,   741,   742,   742,   743,   743,   744,   744,   745,
     746,   746,   747,   748,   749
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
       1,     0,     3,     4,     5,     4,     4,     4,     6,     5,
       1,     1,     2,     2,     2,     2,     0,     4,     4,     3,
       3,     1,     4,     0,     3,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     0,     1,     1,
       2,     6,     1,     3,     1,     1,     1,     2,     1,     2,
       5,     1,     0,     3,     2,     0,     2,     2,     1,     1,
       2,     2,     3,     3,     0,     1,     1,     2,     2,     0,
       1,     1,     1,     0,     2,     2,     1,     1,     2,     5,
       1,     2,     3,     8,     4,     1,     3,     2,     6,     1,
       3,     1,     1,     0,     3,     0,     1,     3,     6,     3,
       1,     1,    11,     9,    11,    10,    11,    11,     9,     7,
       9,     1,     5,     6,     0,     3,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     4,     1,     0,     1,
       3,     2,     1,     1,     4,     6,     5,     4,     1,     2,
       4,     1,     2,     0,     2,     7,     0,     2,     5,     8,
       0,     2,     0,     1,     2,     4,     4,     1,     1,     1,
       0,     4,     2,     9,     1,     1,     1,     1,     1,     3,
       0,     2,     1,     2,     4,     4,     4,     4,     0,     1,
       0,     1,     3,     0,     3,     1,     1,     0,     2,     1,
       4,     3,     4,     3,     3,     3,     4,     3,     5,     6,
       5,     5,     5,     4,     4,     3,     3,     3,     3,     0,
       3,     2,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     3,     4,     3,     4,
       3,     0,     1,     1,     3,     2,     2,     3,     3,     2,
       2,     2,     1,     1,     0,     2,     3,     0,     0,     3,
      14,    13,     6,     9,     6,     6,     0,     4,     1,     3,
       0,     3,     1,     3,     1,     2,     0,     3,     5,     7,
       0,     1,     0,     2,     2,     4,     4,     0,     3,     0,
       1,     0,     2,     0,     2,     1,     3,     1,     3,     4,
       6,     4,     5,     0,     2,     2,     1,     3,     5,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     3,     3,     3,     0,     2,     3,     4,     4,
       5,     5,     0,     1,     2,     0,     1,     1,     1,     1,
       2,     2,     1,     3,     3,     1,     6,     1,     1,     1,
       4,     6,     5,     1,     3,     1,     5,     5,     5,     3,
       1,     0,     1,     1,     0,     1,     5,     1,     4,     0,
       2,     1,     3,     2,     2,     3,     2,     3,     1,     1,
       0,     5,     5,     2,     4,     1,     0,     1,     0,     3,
       1,     3,     0,     2,     3,     1,     3,     1,     0,     3,
       0,     2,     2,     0,     2,     2,     0,     2,     2,     2,
       1,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     3,     6,
       6,     0,     1,     1,     3,     3,     3,     3,     1,     3,
       4,     3,     5,     5,     7,     7,     1,     3,     4,     4,
       1,     1,     1,     2,     1,     3,     3,     3,     3,     4,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     2,     2,     3,     1,
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
       0,     0,    17,     0,     0,   498,     0,   434,   434,     0,
       0,     0,    15,     0,     0,    18,    21,     0,     0,     7,
       5,     9,    11,     3,     0,    19,     0,    78,    20,     0,
     462,     0,   165,     0,     0,     0,     0,    28,    29,    22,
      23,    24,    27,    25,   136,   135,   133,   134,    31,   137,
      26,   408,   407,   413,   412,   409,   411,   410,   522,   540,
     528,   529,   578,     0,    16,     0,   893,   894,   896,   897,
     898,   899,   901,   903,   948,   906,   914,   973,   937,   911,
     950,   925,   936,   930,   909,   972,   942,   931,   920,   921,
     922,   918,   912,   928,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   929,   895,   969,   968,   916,   910,   902,   935,   970,
     971,   945,   923,   946,   947,   943,   944,   919,   904,   908,
     934,   932,   905,   907,   924,   949,   927,   917,   938,   939,
     940,   941,   913,   915,   933,   926,     0,   809,   900,   499,
     500,     0,     0,   433,   437,   437,   415,     0,   421,     0,
     525,   265,   498,     0,   724,   722,   723,   315,     0,   719,
     721,   265,     0,     0,     0,     0,     0,   978,   977,     0,
     981,   887,   888,   889,   890,   891,   892,    97,   265,   265,
      96,    92,   101,   265,     0,     0,     0,    82,    84,     0,
      93,    94,    68,   886,     0,     0,     0,     0,     0,   421,
       0,     0,     0,   976,     0,     0,     0,     0,   259,     0,
     262,   261,     0,   837,     1,     0,     0,     0,   163,   164,
       0,     0,   181,   180,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   162,     0,     0,     0,
     130,   131,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   404,
     789,   791,   790,   937,   908,   924,   939,     0,     0,   969,
     968,   927,    34,    35,     0,   255,     2,     0,   541,   541,
     541,   580,    13,   505,     0,     0,   979,   893,   894,   896,
     897,   898,   899,   795,   794,   793,   796,   797,     0,     0,
       0,   883,   806,   807,   731,   731,   731,   731,   731,   673,
       0,   493,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   742,     0,   938,   939,   940,   941,     0,
       0,     0,     0,   687,   686,   549,   746,   575,   606,   577,
     596,   597,   598,   599,   600,   601,   602,     0,   603,   670,
     669,   604,   641,   685,   674,     0,   676,   678,   680,   681,
     547,   740,   671,     0,     0,     0,   677,   672,   748,   801,
     675,   683,   682,     0,     0,   812,   792,   684,   992,   993,
     994,   995,   996,   997,   998,   999,  1000,  1001,   761,   483,
       0,   414,   438,   416,     0,     0,     0,   418,   422,   423,
       0,   523,   527,     0,     0,   266,     0,   539,     0,     0,
     586,     0,     0,    10,    12,     0,     0,    98,    99,    91,
     100,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   421,   420,   168,     0,     0,     0,     0,
     578,     0,   464,     0,     0,     0,     0,   463,   185,   184,
       0,   183,   182,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,   916,    51,    47,   265,   265,
       0,     0,     0,   396,   139,     0,     0,     0,     0,     0,
       0,   404,   399,   399,   399,   399,   395,   404,   404,   404,
     397,   398,   406,   405,   387,     0,    42,    40,     0,     0,
       0,     0,   868,   863,   877,   839,   878,   880,   881,   852,
     855,   847,   848,   850,   851,   849,   858,   860,   870,   874,
     873,   771,   768,   770,     0,     0,   861,   862,    36,   865,
     840,   841,   845,     0,   542,   543,   544,   544,   544,     0,
     583,     0,   479,     0,   549,   501,     0,   885,   810,   980,
     805,   803,     0,     0,     0,     0,   726,   728,   727,   730,
     729,     0,   633,     0,     0,   716,     0,     0,     0,     0,
    1035,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   577,     0,   678,   812,   605,     0,   666,   667,
       0,     0,     0,   661,   798,     0,   766,     0,   766,   762,
     763,     0,     0,     0,   830,   832,     0,     0,   634,     0,
       0,     0,   530,   505,     0,   745,     0,     0,     0,     0,
       0,     0,     0,     0,   611,   611,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     804,   802,     0,     0,     0,     0,   486,   483,   481,   435,
       0,     0,   417,   426,   425,     0,     0,     0,   524,     0,
       0,   549,   717,   822,   494,     0,   720,   721,     0,    32,
       8,     6,     4,     0,   982,     0,   496,   491,   497,   104,
      72,   102,   105,    69,    70,    85,   967,   927,    83,    90,
      89,    95,    79,    81,     0,     0,   419,   170,   169,     0,
     168,     0,     0,   113,     0,   149,     0,     0,   159,   157,
     155,   160,     0,     0,   140,   143,   152,   129,     0,   129,
     129,   260,     0,   456,   456,     0,   265,     0,     0,   168,
       0,     0,   138,   141,   147,     0,   265,   265,   265,   265,
       0,   350,   350,   350,   350,     0,   166,    48,    50,     0,
     984,     0,     0,   225,   171,   191,     0,     0,   354,   355,
       0,     0,   265,   399,     0,   404,   404,   404,   404,   394,
       0,   384,   381,   385,   383,    46,   386,   393,    39,    43,
     764,    44,    41,    38,     0,     0,     0,   879,     0,     0,
       0,     0,   859,     0,   766,   766,   774,   775,   776,   777,
     778,   770,   768,     0,   787,   788,   256,     0,     0,     0,
       0,   579,   590,   593,   545,     0,     0,     0,   582,   581,
     836,     0,   586,   506,     0,     0,   505,     0,     0,   817,
       0,     0,   884,   732,   780,   779,     0,     0,     0,   641,
     991,   989,  1072,   988,  1072,     0,     0,     0,     0,  1070,
    1071,     0,     0,  1052,  1053,   641,  1069,     0,  1068,   578,
       0,     0,   640,   638,   668,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   827,
     832,     0,   831,     0,     0,     0,     0,     0,   636,     0,
       0,   560,   559,   550,   551,   558,   566,   566,   809,   549,
     533,   535,   568,   747,   574,   631,   630,   632,   608,     0,
     617,   618,   615,   616,   614,     0,     0,   612,   613,     0,
       0,   576,   607,     0,   637,   657,   642,   643,   648,   658,
     647,   738,   665,   664,   663,   662,   644,   645,   646,   659,
     650,   652,   654,   649,   660,   656,   655,   653,   651,   621,
       0,   692,   744,   741,   689,     0,     0,   919,   834,     0,
     812,     0,   897,   898,   899,   743,   813,   484,   485,   482,
     436,     0,     0,     0,   432,   427,   428,   424,   267,     0,
     718,     0,   588,   589,   587,    33,    30,   983,     0,     0,
       0,    74,     0,    74,    88,    74,    74,     0,     0,     0,
       0,     0,     0,   156,   154,   158,   148,   144,     0,     0,
     128,   109,     0,     0,     0,   108,     0,     0,   225,     0,
     461,   467,     0,   467,   265,     0,   465,   466,     0,     0,
     145,   142,   350,   175,   176,     0,   177,     0,   349,     0,
     348,     0,     0,     0,     0,     0,     0,     0,    53,   985,
      49,     0,     0,     0,     0,   200,   196,   198,   201,   199,
       0,   202,     0,   885,     0,   173,     0,     0,   357,   358,
     356,     0,     0,   186,   382,   404,   391,   388,   392,   390,
     401,     0,   402,    37,     0,   835,     0,   882,     0,     0,
       0,   835,   875,     0,   876,   772,   773,   785,   784,     0,
       0,   835,     0,     0,     0,     0,   594,   595,   592,     0,
     538,   537,   536,   585,   584,   532,   504,   502,   480,   503,
     811,     0,     0,     0,   679,     0,     0,     0,     0,     0,
    1014,  1006,     0,  1040,  1027,  1037,  1041,  1036,   641,  1048,
    1049,     0,  1072,     0,  1089,  1072,     0,   495,   489,   639,
       0,     0,     0,   627,     0,     0,     0,     0,   767,     0,
     799,   769,   800,   808,     0,     0,   828,     0,   833,   821,
       0,     0,   819,     0,   635,     0,   566,     0,   559,   512,
       0,     0,   517,   518,   519,   512,     0,   513,     0,     0,
     515,   915,   556,   565,   567,   554,   553,     0,     0,   531,
       0,   572,   629,     0,     0,     0,     0,     0,   628,   620,
       0,     0,   694,     0,   755,     0,   759,     0,     0,     0,
     439,   429,   430,   431,     0,   823,   492,     0,   103,     0,
      67,     0,    66,    76,    77,     0,     0,   114,   117,   153,
     151,   150,   404,   404,   404,   111,   112,   110,     0,   107,
     106,   442,   368,   445,     0,   444,     0,     0,     0,   146,
       0,     0,   268,   340,     0,   352,     0,     0,     0,    64,
      65,    63,     0,   974,   987,   986,   165,     0,    45,    54,
      55,    57,    58,    61,    59,    60,   174,   257,   226,   190,
     225,     0,     0,     0,   224,   203,   204,   206,   207,     0,
       0,   193,   263,     0,     0,     0,     0,   179,   389,   400,
       0,   869,   864,   842,   853,     0,   856,     0,   871,     0,
     770,   782,   786,   866,     0,   843,   844,   846,   591,     0,
       0,     0,     0,  1074,  1073,  1002,   990,  1003,  1004,     0,
    1072,   950,     0,  1081,     0,  1076,     0,  1078,  1079,     0,
       0,  1072,     0,  1039,     0,     0,     0,     0,  1072,     0,
       0,  1055,  1062,  1066,     0,     0,  1090,     0,   487,     0,
       0,     0,     0,     0,     0,     0,     0,   765,   829,     0,
     820,     0,   824,   825,   557,   555,   507,     0,   552,     0,
       0,   512,     0,   516,   514,   563,     0,   810,   534,     0,
       0,   548,   619,   623,   622,     0,     0,     0,   688,     0,
     696,   758,   757,     0,     0,   814,   526,    73,    75,    71,
       0,   116,   126,   127,   125,     0,     0,   369,     0,   457,
       0,     0,   450,   450,   475,   477,     0,     0,   178,   498,
     911,   925,     0,     0,     0,     0,     0,   284,   296,   297,
     290,   291,   292,   295,   293,   279,   281,   298,   309,   308,
     313,   312,   311,   310,     0,   294,   289,   288,   299,     0,
       0,     0,     0,     0,    52,     0,    56,   197,   885,     0,
       0,   251,     0,   221,     0,   205,   208,   209,   214,   215,
     216,     0,     0,   172,     0,   192,     0,   258,   359,   360,
       0,     0,   403,     0,   838,     0,     0,   783,     0,     0,
     570,   812,   815,   816,   725,     0,  1026,  1011,  1013,  1027,
    1024,  1007,     0,  1084,  1083,  1075,     0,     0,     0,     0,
       0,     0,  1028,  1038,     0,  1043,  1042,  1045,  1046,  1044,
     641,     0,  1088,  1087,   641,  1054,  1056,  1058,  1059,     0,
    1063,     0,  1067,  1114,   490,     0,     0,     0,     0,   737,
       0,   735,   736,     0,   826,   818,     0,     0,   508,     0,
       0,   509,   512,     0,     0,   569,   573,   610,   609,   693,
       0,   698,   699,   691,     0,   756,   760,     0,     0,   122,
       0,   120,     0,     0,   468,     0,   473,     0,     0,   456,
     456,     0,     0,     0,     0,     0,   314,     0,   317,   927,
     322,   321,   323,     0,   331,   333,     0,     0,   284,   340,
       0,   341,   351,     0,   340,   347,     0,     0,   975,     0,
     252,     0,   217,   669,   210,   246,     0,     0,     0,     0,
     247,   219,   250,   225,     0,   195,     0,     0,   373,     0,
       0,     0,   189,   854,   857,   872,   867,   546,     0,     0,
       0,     0,     0,  1023,     0,  1005,  1077,  1080,  1082,     0,
       0,     0,     0,  1034,  1047,     0,  1060,  1086,     0,     0,
       0,     0,     0,   488,   625,   624,     0,     0,     0,   561,
     511,   521,   520,   510,     0,   564,   695,     0,     0,     0,
     641,   711,   700,   703,   701,     0,     0,   123,   124,   121,
     119,   458,     0,   443,   476,     0,   452,   454,   467,   467,
     478,     0,     0,     0,   278,     0,   318,     0,     0,   284,
     332,     0,     0,   328,   333,   284,   340,     0,     0,     0,
       0,   935,   273,   270,   280,   271,     0,     0,     0,     0,
     245,     0,   248,   265,     0,   212,   194,   264,   370,   370,
     361,   362,     0,   353,   377,   161,   187,   188,   571,   813,
    1021,     0,  1016,  1019,  1012,  1025,  1008,  1010,  1029,     0,
    1032,  1031,  1030,  1085,  1057,     0,     0,  1051,     0,     0,
       0,  1103,  1092,  1093,   739,   733,   734,   562,     0,   704,
     702,   705,     0,   697,   115,   118,     0,   474,   451,     0,
     455,   469,   469,     0,   275,     0,     0,   319,     0,   284,
     334,     0,     0,   329,     0,   336,     0,   285,   284,     0,
       0,     0,     0,     0,     0,   265,   222,     0,   243,   211,
     225,   368,   371,   368,   368,   368,   363,     0,     0,   340,
    1015,     0,     0,  1018,     0,  1033,  1061,  1064,  1065,  1098,
    1102,  1101,  1097,  1098,  1096,     0,     0,     0,  1091,  1104,
    1105,  1107,     0,     0,   713,     0,   714,   459,   453,   470,
     471,   471,   167,   269,   316,     0,   324,   330,     0,   326,
     284,     0,   284,     0,     0,   285,   282,   340,   346,     0,
     344,   272,   274,   276,   277,   243,     0,   220,   254,   239,
     234,   213,     0,     0,     0,     0,   375,   376,   374,   378,
       0,   304,   305,   302,   303,   379,   306,   372,   301,   300,
     307,  1017,  1022,  1020,  1009,     0,  1095,  1094,  1110,  1113,
    1109,  1112,  1111,  1106,  1108,     0,     0,   641,   706,   708,
     715,   712,     0,   473,   473,   320,   285,   327,   325,   337,
       0,     0,   283,     0,     0,   234,     0,   241,   242,   240,
     244,     0,   235,   236,   249,   367,   365,   366,   364,   286,
    1100,  1099,   709,   707,   710,   472,   441,   446,   284,   335,
     342,   345,   253,   223,     0,     0,     0,   238,     0,   237,
     340,     0,   440,   336,   339,   343,   228,   229,     0,     0,
     233,   232,   380,     0,     0,   338,   227,   230,   231,   287,
       0,   448,   447,     0,   449
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,   176,   173,   172,   174,   175,    32,    33,    34,
      35,    36,  1026,  1488,   282,  1489,  1490,   486,   787,   790,
    1318,  1319,  1320,   786,  1311,  1491,   195,  1033,  1031,  1270,
    1492,   206,   207,   196,   197,   198,   728,   199,   200,   201,
     720,   721,  1493,   743,  1055,  1051,  1052,  1494,    44,   772,
     754,   773,   755,   774,    45,   249,   250,   739,  1105,   251,
     252,  1347,   794,   795,  1535,  1094,  1095,  1096,  1337,  1097,
    1525,  1526,  1098,  1794,  1527,  1528,  1672,  1529,  1530,  1947,
    1099,  1531,  2050,  2012,  2013,  2014,  2010,  1950,  1681,  1334,
    1682,   699,  1101,   253,   217,   218,  1537,   796,   425,    46,
    1764,  1784,    47,  1495,  1659,  2040,  1928,  1965,  1497,  1498,
    1499,  1646,  1647,  1856,  1500,  1651,  1501,  1773,  1774,  1654,
    1655,  1771,  1502,  1934,  1503,  1504,  2044,  1869,  1664,  1079,
    1080,    49,   800,  1111,  1688,  1800,  1801,  1468,  1883,  1803,
    1804,  1958,  1889,  1967,   269,  1505,   811,  1121,   514,  1506,
    1507,    53,   417,   418,   419,  1015,   154,   411,   692,    54,
    2042,  2060,  1639,  1755,  1756,  1061,  1062,   219,  1293,  1920,
    1993,  1753,  1473,  1474,    55,    56,    57,   688,   901,  1186,
     715,   354,   716,  1188,   717,   151,   564,   565,   562,   932,
    1229,  1434,  1230,  1611,   220,   159,   160,   421,    59,  1508,
     221,   939,   940,    62,   556,   855,   355,   632,   633,   933,
    1219,  1220,  1234,  1235,  1241,  1549,  1441,   356,   357,   291,
     560,   862,   709,   851,   852,  1148,   358,   359,   360,   361,
     959,   362,   950,   363,   364,   603,   365,   949,   366,   629,
     367,   368,   369,   370,   371,   372,   373,   374,   375,  1251,
    1252,  1450,  1623,  1624,  1741,  1742,  1743,  1744,  1988,  1989,
    1843,   376,   604,   168,   169,   378,   576,   379,   380,   381,
     635,   382,   383,   384,   385,   386,   621,   913,   616,   618,
     546,   842,   876,   843,  1362,   844,   845,   547,   387,   388,
     389,   937,   390,   391,   870,   392,   705,   926,   919,   920,
     624,   625,   923,   999,  1124,   859,   222,  1543,  1122,  1133,
     393,   550,   551,   394,  1102,   722,   203,   605,   148,  1314,
     223,  1125,   396,    63,   180,  1088,  1089,  1315,   881,   882,
     883,   397,   398,   399,   400,   401,  1380,  1171,  1557,  1811,
    1812,  1893,  1813,  1973,  1558,  1559,  1560,  1391,  1572,   402,
     887,  1174,  1175,  1176,  1393,  1576,   403,  1396,   404,  1180,
    1398,   405,   894,  1182,  1400,  1585,  1586,  1587,  1588,  1589,
    1721,   406,   407,   897,   891,  1166,   888,  1384,  1385,  1708,
    1386,  1387,  1388,  1716,  1717,  1405,  1406,  1831,  1832,  1903,
    1904,  1976,  2021,  1833,  1901,  1908,  1909,  1983,  1910,  1911,
    1982,  1980,   408
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1607
static const yytype_int16 yypact[] =
{
    1553,   -36, -1607,   242, 15736,   216,  -109,   385,   385, 15736,
     413,   356, -1607, 15736,    83, -1607, -1607, 13108, 15736, -1607,
   -1607, -1607, -1607, -1607,   130, -1607,   646,   138,   375,   322,
     382,   513,  1191,   573, 13400, 11648,   420, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607,   717,   458, -1607, 15736, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607,   302,   323, -1607, -1607,
   -1607,  4276, 15736, -1607,   512,   512, -1607, 15736,   886,    54,
   -1607,   532,   216,   730, -1607, -1607, -1607, -1607,   542, -1607,
     404,   532,  1430,  1430,  1553,  1553,  1430, -1607, -1607,   555,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,   532,   532,
   -1607,   495, -1607,   532,   321,  -204,   503, -1607,   446,   576,
     456, -1607, -1607, -1607,   666,   674,   388,  1099,   832,   886,
   14568, 15736, 15736, -1607,   595,   714,   959,   727, -1607,    48,
   -1607, -1607,   496, -1607, -1607,   670, 15736,   728, -1607, -1607,
   15736,   761, -1607, -1607,   725,   745,   775,   791, 15736, 15736,
   15736, 15736, 15736, 15736, 16028, 15736, -1607, 15736, 15736,   741,
   -1607, -1607,   810, -1607, 15736, 15736,   854,   682, 15736, 15736,
   15736, 15736, 15736, 15736, 15736, 15736, 15736, 15736, 15736,   773,
   -1607, -1607, -1607,   867, 15736, 15736,   806,   933,   940,   848,
     853, 15736,   793, -1607,  1170, -1607, -1607,  1041,   535,   535,
     535,   850, -1607,   864, 14860, 15736,  1155,  1155,  1155,  1159,
    1000,  1018,  1038, -1607, -1607, -1607, -1607, -1607,  1039,  1044,
    1147, -1607, -1607, -1607,  1045,  1045,  1045,  1045,  1045, -1607,
    1046, -1607,  1048,  1088, 15736,  1052,  1053,  1060,  1061,  1067,
    1068,  1069,  1070,  1071,  1074,  1075,  3250,  4618,  8569,  8569,
    1079,  1081,  1082, -1607,  8569,  1155,   373,   384,   152,  6619,
    1084,  1086,  4618, -1607, -1607,   374,   943,  1087, -1607,  2022,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, 15736, -1607, -1607,
   -1607,  2573, -1607, -1607, -1607,   934, -1607,   925, -1607, -1607,
     927, -1607, -1607,  1096,  1100,  1102,   941, -1607, -1607, -1607,
   -1607, -1607, -1607,  1155,  1155,   -63, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,   358,
     902, -1607,   995, -1607,   928,  1185,  1184, -1607,   942, -1607,
   15736, -1607, -1607, 15736,   964, -1607,  4276, -1607,  6944, 13108,
     993,  1162,  1164, -1607, -1607,  1165,  4960, -1607, -1607, -1607,
   -1607, -1607, -1607,   107,  1099,   107,   986, 11940,   436,  1188,
    1189,  1197,    41,   886, -1607,   785,   443,   632,   596,  1136,
     786, 15736, -1607,    52,  1050, 15736,   959,  1015, -1607, -1607,
    1142, -1607, -1607,   621, 15736, 15736, 15736, 15736, 15736,  1078,
    1143,  1148,  1150,  1152,  1166, 15736,  1072,  1117,   618,   532,
     722, 15736, 15736, -1607, -1607, 15736,  1112, 15736, 15736, 15736,
   15736,   773,  1154,  1154,  1154,  1154, -1607,   773,   773,   773,
   -1607, -1607, -1607, -1607, -1607, 15736, -1607, -1607,    31, 15736,
    8569, 15736,  1174,  1175, -1607,   541, -1607, -1607, -1607,  1177,
    1179, -1607, -1607, -1607, -1607, -1607,  1315, -1607,  1181, -1607,
   -1607, -1607,  1182,  1187,   996, 15736, -1607, -1607, -1607,  1190,
    1192,  1193,  1194,  8569, -1607, -1607,  1203,  1203,  1203,    42,
    1059,  4618, -1607,  1198,    59, -1607,  1199, -1607,  1029, -1607,
   -1607, -1607,  4618,  4618,  1351,  1204, -1607, -1607, -1607, -1607,
   -1607,   243, -1607,  1040,  1278, -1607,  8569,  8569,  8569,  1169,
    1247,   -12,  1178,  1400,  8569,   751,  8569,  3250,  1231,  1235,
    1243,  1245,   781,   -50, -1607,   -35,  2337,  3250,  1800,  1800,
    8569,  8569,  8569,  1357, -1607,   130,  1248,   130,  1248, -1607,
   -1607,  1155,  4618,  9152, -1607,   527,  8569,  8569,  2337,   592,
    8870, 15736, -1607,   864, 15736, -1607,  4618,  3592,  8569,  8569,
    8569,  8569,  1254,  1255,   949,   949,  4618,  3592,  1090,  8569,
    8569,  8569,  8569,  8569,  8569,  8569,  8569,  8569,  8569,  8569,
    8569,  8569,  8569,  8569,  8569,  8569,  8569,  8569,  8569,  8569,
    8569,  8569,  8569,   351,  1257,  1226,  4276,  1259,  5285,  8569,
   -1607, -1607, 12232, 13984,  1153,  1231, -1607,   360, -1607, -1607,
    1355,  1368, -1607, -1607, -1607,   843,   130,   886, -1607,   -41,
    1272,  1338, -1607, -1607, 12219,   -17, -1607, -1607,    43,  1207,
   -1607, -1607, -1607,  3250, -1607,   110, -1607, -1607,   930, -1607,
      73, -1607, -1607, -1607,   218, -1607,   854, 15736, -1607, -1607,
   -1607, -1607, -1607, -1607,   107,   107, -1607, -1607, -1607,  1195,
     785,  1172,  1196, -1607,  1350,  1288,   959,   959, -1607, -1607,
   -1607, -1607,   959,  2885,   632, -1607, -1607,   477,   368,  1186,
     798, -1607,  1352,    46,    46, 15736,   532,  1151,   959,   785,
    1289,  2885,   621, -1607, -1607,  1294,  1298,  1298,  1298,  1298,
    1224, 15152, 15152, 15152, 15152,  1211, -1607, -1607, -1607,  1454,
    1208, 15736,  1244, 14276,  1378, -1607,  1160,  1163, -1607, -1607,
    1002,  1214,  1298,  1154, 15736,   773,   773,   773,   773, -1607,
    2647, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
     892, -1607, -1607, -1607,  1170,   130,   130, -1607,  1461,   130,
     130,   130, -1607,   115,  1248,  1248, -1607, -1607, -1607, -1607,
   -1607,  1187,  1182,  1205, -1607, -1607, -1607,   130,   130,   130,
     130,  1144, -1607, 10386,  1384,    83,    83,    83, -1607, -1607,
   -1607,    42,   993, -1607,  1046, 14860,   864,  4618, 15736, -1607,
    1173,  1161, -1607, -1607, -1607, -1607,  1379, 15736, 12219,   680,
   12219, -1607,   -49, -1607,  1342, 15736,  1328,  8569,  1176, -1607,
   -1607,  8569, 15736, -1607,  1358,   680, -1607,  8569, -1607,  1401,
    8569,   131, -1607, -1607, -1607,   929,  4618, 13692,  2792, 10696,
     819,  1331,  1228,  1155,  1339,  1155,   996,  1216,  8569, -1607,
     580,  8569, -1607,  1209,  2891,  1200,   253,  4618, -1607, 12524,
    2475, -1607, -1607,  1201,   703, 16320, 16320, 16320,   237,    60,
   -1607, -1607,  1410, -1607, -1607, -1607, -1607, -1607,   998,  4618,
   -1607,  9768, -1607, -1607, -1607,  7269,  7269, -1607, -1607,  4618,
    4618, -1607, -1607,  1046, -1607, 12219,  1800,  1800,  1800,  1800,
    1800,  1800,  1800,  1800,  1800,  1800,  1171,  1171,  1183,  1357,
     709,   709,   709,   709,  1386,  1386,  1386,  1386,  1386, -1607,
    1418,  1212, -1607, -1607, -1607,  8569,  1356,  8569, 12219,  1359,
     248,  1206,  1375,  1376,  1377, -1607,   250, -1607,  1210, -1607,
   -1607, 15736,  1036,  1441, -1607, -1607, -1607, -1607, -1607,    83,
   -1607,  8569, -1607, -1607, -1607, -1607, -1607, -1607,  7269,  1271,
     107,  1445,  1300,  1445, -1607,   117,   117,  1155,  1295, 15736,
   15736,   959,   261, -1607, -1607, -1607, -1607, -1607, 15736, 15736,
   -1607, -1607, 15736,  1469,  1049, -1607, 15736, 15736, 15444, 13108,
   -1607,  1450,  1246,  1450,   532,  1451, -1607, -1607,  1307,   959,
   -1607, -1607, 15152, -1607, -1607,  1311, -1607, 15736, -1607,  1391,
    1236,  2885,  1404,  1405,  1406,   713,  1309, 15736,   739, -1607,
   -1607, 13108, 15736, 15736,   268, -1607, -1607, -1607, -1607, -1607,
     549, -1607,  1951,   -38, 15736, -1607,   595,   595, -1607,  1262,
   -1607,  1316, 15736,  1324, -1607,   773, -1607, -1607, -1607, -1607,
   -1607,  1416,  1250, -1607,  1419, -1607,  1420, -1607,  1421,   270,
    1422,  1251, -1607,   271, -1607, -1607, -1607, -1607,  1326,  1149,
    1434,  1268,  1437,  1439,  1440,  8569, -1607, -1607, -1607,  1442,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607,  2885,  2885,  8569, -1607,   606,  1448,  8569,  1449,  1453,
   -1607,  1275,  7594, 12219,   145, -1607,  1305, -1607,    82, -1607,
    1287,  1525,  1342,  1460,  1474,  1342,   291, -1607, -1607, -1607,
    1463,  1465,  1467,  2337,  8569,  8569,  8569,  8569, -1607,  1345,
   -1607, -1607, -1607, -1607,  8569,  3033, -1607,  1330, 12219, -1607,
    8569,  8569, -1607,  8569,  2337, 16320, 16320,  2475,  1472,  1094,
      83,  8870, -1607, -1607, -1607,   932,  1572, -1607,  8870,  1573,
    1577, 15736, -1607,  1480, -1607, -1607, -1607, 13108, 15736, -1607,
    1550,  1547,   998,  1155,   331,   335,  2128,  2309, -1607, -1607,
    1552,  1483,  1557,  1487, -1607,  1488, -1607, 12816,  8569, 15736,
   -1607, -1607, -1607, -1607,  1491, -1607, -1607,  1402, -1607,   713,
   -1607,  1407, -1607, -1607, -1607,  1650,  1155, -1607, -1607, -1607,
   -1607, -1607,   773,   773,   773, -1607, -1607, -1607,  -120, -1607,
   -1607, -1607,  1347, -1607,  1155, -1607,  1560,    63,  1155, -1607,
    1500,  1672, -1607,  9472, 15736, -1607,  1443,  1435,  1444, -1607,
   -1607, -1607, 15736, -1607,  1336, -1607,  1303,  1366, -1607,   739,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   14276,  1417,  1426,   532, -1607, -1607, -1607, -1607,   868,  1424,
    1681,  1520,  1521, 15736, 15736,  1522,  1617, -1607, -1607, -1607,
    2885, -1607, -1607, -1607, -1607,   130, -1607,   130, -1607,   130,
    1187, -1607, -1607, -1607,   130, -1607, -1607, -1607, -1607, 15736,
    1526,  1528, 11005, -1607, -1607, -1607, -1607, -1607, -1607,  5610,
    1342,  1455,  8569, 12219,   338, -1607,  1383, -1607, -1607,   437,
    8569,  1342, 15736, -1607,  1556,  1563,  1534,  8569,  1342,   702,
    8569, -1607,  1525, -1607,  1428,  1537, -1607,  1538, -1607,  8569,
    8569,  7269,  7269,  2985, 11314, 10078,  2749, -1607, -1607,  8569,
   -1607, 11636, -1607, -1607, -1607, -1607, -1607,   -43,   703,  1640,
    8870,    89,  8870, -1607, -1607,  1548, 15736,   256, -1607, 15736,
    4618, -1607, -1607, -1607, -1607,  4618,  4618, 15736, -1607,  1616,
     -13, -1607, -1607,  1549,  1555, -1607, -1607, -1607, -1607, -1607,
    1396,  1456, -1607, -1607, -1607,  1477,   590, -1607,  1155,  1390,
     104,  1155,  1559,  1559,  1393, -1607,  1497,  1499, -1607,   216,
     413,   356,  1501, 13108,  3934,  7919,  4618,  1427, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607,  1432, -1607, -1607, -1607, -1607,  1395,
    2885,  2843,  1737,  2843, -1607, 15736, -1607, -1607,  1574,   532,
     532, -1607,  1619, -1607,  8569, -1607,   868, -1607, -1607, -1607,
   -1607,   353,  1575, -1607,   366, -1607,  1523, -1607,  1408,  1429,
   15736,   334, -1607,  1576, -1607,  1578,  1580, -1607,  1582,   345,
   -1607,  1415, -1607, -1607, -1607,  1585, 12219,  1423, -1607,   241,
   -1607,  1425,  1589, -1607, -1607, -1607,  7594, 15736,  1502,  1503,
    1504,  1505, -1607, -1607,  1591, -1607, -1607, -1607, -1607, -1607,
     719,  1597, -1607, -1607,   299,  1431, -1607, -1607, -1607,   608,
   -1607,  1611, -1607, -1607, -1607,   350,   362,   386,  8569, -1607,
    8569, -1607, -1607,  8569, -1607, -1607, 16320,  8870, -1607,   532,
    4618, -1607,    89, 15736,   393,  1433, -1607,  1588,  1588,  1433,
    8569, -1607, -1607, -1607,  2131, -1607, -1607,  1519,  1507, -1607,
     538, -1607,  1667,  8569, -1607,  1155,  1698,   394, 15736,    46,
      46,  1155,  1155,  1544,  4276, 15736, -1607,  1615, -1607,  1621,
   -1607, -1607, -1607,  4618, -1607,   672,  9461,  1482, -1607, 10708,
    4618, -1607, -1607,  1630,  9781, -1607,  1138,   708, -1607,  1517,
   -1607,  1470, -1607,  1586, -1607, -1607,  1694,  1633,  1543, 15736,
   -1607, -1607, -1607,   567,  1637, -1607,  1551,   816,  1697,   444,
    1725,  1728, -1607, -1607, -1607, -1607, -1607, -1607, 15736, 15736,
    8569,  8569,  8569, -1607,  8244, -1607, -1607, -1607, -1607,  1708,
     740,  1709,  1711, -1607, -1607, 15736, -1607, -1607,  8569,  1558,
    1561,  1648,   712, -1607, -1607, -1607, 11928, 12512, 13096, -1607,
   -1607, -1607, -1607, -1607,   447, -1607,  1144,  5935,  1506,  1489,
    1493,  1490, -1607, -1607, -1607,  1155, 15736, -1607, -1607, -1607,
   -1607,  1492,  1603, -1607, -1607,   452, -1607,  1831,  1450,  1450,
   -1607,  1562, 15736,  1579, -1607,  1495,  8569,   653,  1540, -1607,
   -1607,  1527,  8569, -1607,   706, -1607, 10708,  1707,  1541, 15736,
    1605,  1841, -1607, -1607, -1607, -1607,  1609,  1844, 15736,  1722,
   -1607,  4618, -1607,   532,   457, -1607, -1607, -1607,  -158,   411,
     816, -1607,  1524, -1607,  1566, -1607, -1607, -1607, -1607,  1515,
   12219,   468, -1607,  1554, -1607, -1607,  1530, -1607, -1607,  1706,
   -1607, -1607, -1607,  1525, -1607,  1710,  1718, -1607,  1717, 15736,
    1873,   387, -1607, -1607, -1607, -1607, -1607, -1607,  1687, -1607,
   -1607, -1607,    13, -1607, -1607, -1607,  1155, -1607, -1607, 15736,
   -1607,  1819,  1819, 15736, -1607, 15736,   470, 12219,  1705, -1607,
   10090,  1581,  8858, -1607,  1568,  9163,  1749,  1583, -1607,   471,
    2885, 15736,  1138, 15736,  1138,   532,  1712,  1713,  1771, -1607,
     567,  1347, -1607,  1347,  1347,  1347, -1607,   826,  4618, 11017,
   -1607,  8569, 15736, -1607,  8569, -1607, -1607, -1607, -1607,  1727,
   -1607, -1607, -1607,  1727, -1607,  1734, 15736,  1873, -1607, -1607,
   -1607,  1739,  6277,  1564, -1607,  1571, -1607, -1607, -1607, -1607,
    1833,  1833, -1607, -1607, -1607,  8569, -1607, 10090,  1764, -1607,
   -1607,  1598, -1607,  4618,  1590,  1594, -1607, 10399, -1607, 15736,
   -1607, -1607, -1607, -1607, -1607,  1771,   621, -1607, -1607,    90,
    1635, -1607, 15736, 15736, 15736, 15736, -1607, -1607, -1607, -1607,
    1593, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607,  1873, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607,  1587,  1595,  1584, -1607, -1607,
   -1607, -1607,  1846,  1698,  1698, 12219, -1607, 10090, -1607, 10090,
    1606,  1604, -1607,  1607,  2885,  1635,   548, -1607, -1607, -1607,
   -1607,  1089,  1646,  1651, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607,  1599, -1607, -1607,
   15736, -1607, -1607, -1607,   364,   364,  1849, -1607,  1853, -1607,
   11326,  1750, -1607,  9163, -1607, -1607, -1607, -1607,  1881,   448,
   -1607, -1607, -1607,  1791,   959, -1607, -1607, -1607, -1607, -1607,
     473, -1607, -1607,   959, -1607
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1607,   982, -1607, -1607, -1607, -1607, -1607,  -994,  -988, -1607,
   -1607,   820, -1607,    10, -1607,    15,   306, -1607,  1134, -1607,
   -1607, -1607,   609, -1607,   660,     0,  1724, -1607, -1607,  -177,
       5, -1607, -1607,  1726, -1607,  1494, -1607, -1607, -1607,  1485,
    -386,   905,    40, -1607, -1607, -1607,   412,    45, -1607,    -9,
   -1607,  -761,  1215,  -390, -1607, -1607, -1607,   -24, -1607,  1904,
   -1607, -1607,   203, -1607, -1607, -1607,   883,   612, -1607, -1607,
   -1607, -1607, -1607, -1607, -1476, -1607,   310, -1607, -1607, -1607,
   -1607,  -750,   -91,   -68,   -66,   -57, -1607,    14, -1607, -1607,
   -1607,   -34, -1607, -1607,  -186,  -405, -1607,  -142,  -281, -1607,
   -1148,  -799, -1607,   286, -1494, -1607, -1251,   -85, -1394, -1607,
     430, -1607, -1607, -1607, -1607, -1607, -1607,   186, -1607,   307,
   -1607,   187, -1607,   -80, -1607, -1607, -1607, -1607,   451,  -714,
   -1607, -1607, -1607, -1607, -1607, -1607,   165,  -974,   167, -1607,
   -1607, -1607, -1607, -1607,  1542,    58,  -423,   620,  -422,    20,
      25, -1607,  -110, -1607,  1276, -1607,  1960,  1817, -1607, -1607,
   -1607, -1607,   501, -1607,   141,  -743, -1607, -1607, -1027,   139,
      71,  -806,   523,   524, -1607, -1607, -1607,  1310,  1314,   584,
    -895, -1607,  -139,   593,   973,  -153, -1607,  1156,  -549,  -865,
     794, -1607, -1607,   408,   123, -1607,  1602,  1004, -1607,    30,
      76, -1607,   787,    87,   903,   652,  -412,  1085,  1462, -1607,
    -608, -1607,  -897,  -866, -1607,  -584, -1607,  -205,  1381,  1129,
   -1607, -1607,  1168,   416,   887, -1607, -1607,  -310, -1607, -1607,
    1392, -1607,   480, -1607, -1607, -1607, -1607,  1397, -1607, -1607,
    1398, -1607,  -271, -1355,  1447,  -563,  -486, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607,   294, -1607, -1607, -1607, -1607,
   -1607, -1607,    57, -1607,  -392, -1607,   808, -1607, -1607,  1362,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607,  -395,  -479,  -511,
   -1607,  -544, -1607, -1607, -1607, -1607,  1131, -1607,  2014, -1607,
    1531,    74, -1328, -1607,  1478, -1607, -1607, -1607,  1132, -1607,
    1436, -1607,  1133,  -635,   233,  -644,  -198, -1607,  -260, -1607,
    -282, -1607, -1607,  -249,  -287,    62, -1607,    -1, -1607, -1330,
    -476,   -18,    75, -1607, -1607, -1607, -1607, -1607,  -540, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607, -1607, -1607,   352, -1607,
     163, -1607, -1607, -1607, -1606, -1607,   361,   505, -1607, -1607,
   -1607, -1607,   676, -1607, -1607, -1607, -1607, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607, -1607, -1607,   344, -1607, -1607, -1607,
   -1607, -1607, -1607, -1607,  1473,  -791,   688, -1607,   506, -1607,
     687, -1607, -1607,   252, -1091, -1607, -1607, -1607, -1607, -1607,
   -1212,   168, -1607, -1607, -1607, -1607, -1607, -1607,   166, -1607,
   -1607, -1607, -1607
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1086
static const yytype_int16 yytable[] =
{
      40,   284,   549,   147,   686,    41,   179,   566,   156,   426,
      37,  1071,   161,   563,   701,    38,   170,   147,   462,   424,
      51,  1063,   934,   879,   548,    52,   602,   606,   459,   430,
      60,   895,   835,   278,   285,   552,  1295,   706,  1232,   875,
      42,  1550,   628,  1100,  1001,    43,   437,   438,   884,   582,
    1674,   440,  1496,   213,   213,   296,   899,  1022,    50,   724,
    1244,  1245,  1060,   834,   147,  1218,   296,   756,  1082,  1083,
    1084,  1236,  1621,   858,   167,   464,    61,   443,   146,   809,
     812,   813,   814,   860,   942,   815,   816,   817,   202,   819,
    1401,  1168,   171,  1169,  1316,  1814,  1913,    64,  1817,   454,
    1317,   163,  1043,  1044,  1183,  1609,  1614,   296,  1045,  1165,
    -721,  1550,   181,   182,   183,   184,   185,   186,   296,  1550,
     162,  1881,  1914,    58,   905,   288,   289,   290,   687,  2007,
    2008,   601,  1465,  1018,  1339,   177,  -255,   444,  -721,   293,
     889,   178,   890,   -80,   -80,   -80,   -80,   -80,   -80,   162,
     395,   147,   735,   152,  1466,  -764,   413,  1020,  1222,  1223,
    1224,  2009,  1225,  1226,  1776,  1227,  1394,  1882,  1132,  1673,
     630,   630,    40,    40,    40,    40,    40,    41,    41,    41,
      41,    41,    37,    37,    37,    37,    37,    38,    38,    38,
      38,    38,    51,    51,    51,    51,    51,    52,    52,    52,
      52,    52,    60,    60,    60,    60,    60,  1795,   377,   456,
     147,   147,    42,    42,    42,    42,    42,    43,    43,    43,
      43,    43,  1023,   915,  1395,   470,   409,    14,  1269,   147,
      50,    50,    50,    50,    50,   422,  1471,   147,   147,   147,
     147,   147,   484,   487,   147,  1029,   147,   147,    61,    61,
      61,    61,    61,   493,   147,  1228,    14,   147,   147,   147,
     147,   147,   506,   147,   147,   147,   147,   147,   767,   202,
     860,   860,   213,   516,   517,  1860,   860,  1471,  1673,   682,
     147,  1865,   686,  1734,  1027,   457,   458,   602,  1974,   703,
     706,   906,  1167,   567,   568,    58,    58,    58,    58,    58,
     545,   460,  1606,  -255,   473,  1189,    39,   907,  1100,   162,
     465,  1590,   479,   480,   481,   482,   483,  1158,  1424,   488,
     820,   489,   490,   585,  1021,  1316,  1622,   948,  1178,   494,
    1137,  1317,   501,   502,   503,   504,   505,   962,   507,   508,
     509,   510,   511,   736,   619,   620,  1915,   797,  1035,  1036,
    1425,  1916,  1218,    65,  1610,   488,   863,  1184,  1300,   935,
    1253,  -460,  1255,  1138,   756,  1927,   147,   869,   869,   763,
    1808,   569,   570,   571,  1937,  1153,  -768,   210,   719,  1472,
    1114,   823,   444,  1116,  1117,  1118,  1119,  -770,   353,   353,
    1032,  1402,   601,   213,  1407,   420,   204,  1279,  1690,   205,
     865,  1238,   601,  1399,  1951,   149,  2046,  2047,  1777, -1085,
    -721,  1389,   600,  1496,  1030,    13,    14,   917,  1691,   161,
     614,  -721,   285,  -721,   162,   395,   162,  1212,   707,  -721,
      48,   944,   441,   208,   581,  1053,  1997,   211,  1999,  1135,
    1136,   648,  1329,   158,  1354,  1358,   147,  2048,   162,  1684,
   -1085,  1028,   187,   188,   189,   190,  1054, -1085,  1030,   599,
     147,   989,   209,  1675,   147,  1408,   153,   150,   680,   681,
    1905,   549,  1190,   147,   147,   147,   147,   147,    39,    39,
      39,    39,    39,   377,   788,   630,  1390,   824,   925,   549,
     801,   147,   157,  1046,   147,  1966,   147,   147,   147,   147,
     187,   188,   189,   190,   552,  1443,   723,  1389,   601,  1444,
    1024,  1070,  1565,   224,   818,   706,  1596,  1597,   822,  1697,
     285,   730,   552,   718,  1723,  1866,   598,   990,   549,  1676,
      13,   683,    13,    14,  2043,   762,  1724,  1685,   764,   766,
    1906,  1747,   549,  1907,   846,  -768,   615,  1568,   775,   776,
     777,   778,   779,   286,    13,   214,  -770,   617,  2057,  1030,
    1725,   552,   827,   828,  1123,   860,   802,  1735,  1754,   803,
    1067,   805,   806,   807,   808,   552,   294,   191,   566,  1237,
    1100,  1677,  1702,   442,   563,  1569,  1692,  1570,  1571,  1562,
    1257,   292,  1259,  1156,  1213,  1361,  1193,   911,   868,   914,
    1574,   212,    48,    48,    48,    48,    48,  1581,   684,  1330,
     684,  1355,  1359,  1428,  1854,   740,   215,  1214,  1805,  1715,
    1431,  1837,  1678,  1454,  1065,  1679,  1848,  1376,   254,   938,
     941,  1879,  1409,   943,   770,  1680,   631,   192,  2049,  1242,
   -1085,   685,  1890,   685,  1924,  1938,  1966,  2062,  1748,  1246,
    1247,   181,   182,   183,   184,   185,   186,   600,  1215,   935,
     193,   162,  1159,  1154,   744,   295,   746,   747,   748,   749,
     750,   751,  1028,   600,   752,   395,  1028,  1000,  1016,  1566,
     216,  1006,   285,   600,   460,   192,  1698,   936,   255,  1630,
    1884,  1409,  1248,  1348,  1522,  1981,   916,   741,  2058,  1523,
    1631,   194,   410,  1028,   599,   423,  1048,   770,   193,  1729,
     187,   188,   189,   190,   829,   428,  1038,   742,  1719,   162,
     599,  1373,  2033,  1941,   554,  1943,   147,  1028,   436,   792,
     599,  1851,  1852,   377,  1515,  1641,  1882,   744,   256,   746,
     747,   748,   749,   750,   751,  1068,   429,   752,   744,   745,
     746,   747,   748,   749,   750,   751,  1049,  1050,   752,  1720,
    1374,  1187,   257,  2020,   147,   439,  1632,    13,   214,  1309,
     163,  1280,  1222,  1223,  1224,  1310,  1225,  1226,  -512,  1227,
    1081,  1081,  1081,  1081,   445,   545,   555,   446,  1515,   600,
     788,   793,  1103,  1849,   466,  1828,  1093,   448,  1880,   549,
     460,  1034,  1331,   147,   258,   259,   260,   261,   262,  1891,
     467,  1925,  1939,  1131,  2063,   512,   513,  1524,  1332,   287,
     549,  1305,  1608,  1819,  1612,    13,    14,  1582,   622,  1141,
     921,  1333,   552,   263,  1580,   191,   599,  1584,  1165,  1064,
    1633,   447,  1338,   649,  1281,   706,   264,   496,   757,  1547,
    1820,  1583,   265,   552, -1072,  1615,  1272,   266,  1273,  1274,
    1462,  1463,  1464,  1619,   567,   706,   896,  1160,   771,  1228,
     758,  1299,  1829,   759,   760,  1830,   147, -1050,  1115,   549,
     549,   918,  1265,   921,  1170,   288,   289,   290,   287,   468,
     469,  1179,   267, -1050,   268,   192,  1758,  1759,   288,   289,
     290,  1370,  1371,   889,   427,   890,  1006,  1952,  1134,  1953,
    1954,  1955,   552,   552,   497,   498,   499,   500,   193,   453,
    1341,  1342,  1296,   668,   669,   670,   671,   672,   170,   938,
    1196,  1012,   449,   927,  1233,  1233,  1233,   928,  1013,  1014,
     450,   771,  1150,  1151,  1152,  1786,   935,   471,   472,  1787,
     935,  1164,   753,   649,   288,   289,   290,   935,   637,   194,
     427,   638,   639,   640,   641,   642,   643,   644,   645,    15,
     213,   646,   647,  1653,   414,  1769,   461,   415,  -225,  1073,
    1074,  1075,  1076,   416,   689,   690,  1216,   936,  1200,   463,
    1202,    25,   431,   432,   474,  1522,   435,    26,    27,  1730,
    1523,  1222,  1223,  1224,   475,  1113,   600,  1772,  1227,  1769,
    1260,   650,   651,   652,   653,   654,    29,   693,   694,   655,
     656,   657,   658,   659,   476,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,  1277,  1278,
     737,   738,   718,   718,  -225,   798,   799,  1282,  1283,   957,
     958,  1284,  1521,   599,   477,  1288,   147,   567,   170,  1126,
     491,  1740,  1128,  1129,  1130,  1418,  1108,  1109,   549,  1110,
     478,  1081,  1422,  1942,  1423,  1944,  1302,  1057,  1050,  1650,
    1140,  1142,  1143,  1144,   619,   620,  1313,   495,  1321,   492,
     170,   147,  1328,  1322,   515,   422,  -225,  1093,   288,   289,
     290,   552,   518,  1340,   181,   182,   183,   184,   185,   186,
     519,   147,  1275,  1191,  1192,   718,  1291,   520,  1524,   952,
     953,   954,  -626,   577,   578,   579,   580,  -181,  1323,  1261,
    1262,  1289,  -180,  1324,   521,  1617,  1618,  -225,  1286,  1287,
    -225,   296,  1783,  1798,  1799,   553,  1325,   559,  1326,   561,
    -225,  1956,  1957,  2034,  2035,  1584,   433,   434,   296,   935,
    1197,   935,  -877,  1222,  1223,  1224,  1327,  1225,  1226,   574,
    1227,  1056,  1058,  -751,  1740,   522,   523,   524,   638,   639,
     640,   641,   642,   643,   644,   645,  1345,  2026,  2027,   647,
     525,  -753,   557,   558,   526,   527,   528,   310,   311,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   225,   856,
     857,  -749,   572,   584,  1233,  1233,   938,   573,   575,   581,
     938,   583,   538,   539,   540,   586,   587,   938,   549,   549,
    1435,   549,  1763,   588,   589,  1616,  1437,   941,  1669,  1670,
     590,   591,   592,   593,   594,  1071,   226,   595,   596,   227,
    1662,  1665,   610,  1665,   611,   612,  1006,   626,  1455,   627,
    1228,   552,   552,   634,   552,   674,   636,   675,   676,   677,
    1187,  1187,  -690,   678,   936,   679,   691,   695,   936,  1652,
    1604,  1657,   696,   697,   700,   936,   836,   837,   838,   839,
     840,   841,   708,   600,   228,   710,   229,   711,   712,   194,
     732,   733,  1509,  1510,   460,   649,   230,  1427,   734,  1538,
     761,  1514,   765,   768,   769,   780,   781,   649,  1442,  1321,
     225,   782,   789,   783,  1322,   784,  1644,   810,  1731,  1518,
     836,   837,   838,   839,   840,   874,   935,  1544,   785,  1545,
     599,  1546,   285,  1539,   791,   804,  1548,   825,   826,  1987,
     830,  1461,   831,   832,   833,   615,   231,   861,   226,  1323,
     617,   227,  1858,   847,  1324,   848,   849,   850,  1551,  1469,
     854,   868,  1475,  1476,   872,   864,   867,  1325,   873,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
     877,  1575,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   886,   893,   900,  1732,   228,   885,   229,   902,
     232,   233,   234,   235,   236,   237,   892,   903,   230,   904,
     912,   254,   238,   239,   240,   241,   242,   955,   956,   938,
     991,   938,   992,   994,   352,  1313,  1007,  1010,  1551,   836,
     837,   838,   839,   840,  1360,  1019,  1551,  1011,  1768,   630,
    1025,   243,  1037,  1039,  1041,  1778,   541,   542,   543,   544,
    1042,  1069,  1077,  1059,   244,  1066,  1050,  1072,   231,  1040,
     245,   793,  1085,   246,  1086,   247,  1087,  1104,  1091,  1112,
    1106,   255,   938,  1107,  1127,  1145,  1139,   936,  1149,   936,
    1163,   649,  1870,  1161,     3,     4,     5,     6,   718,   718,
    1165,  1172,  1162,   287,  1181,  1198,  1689,     7,     8,     9,
      10,   545,   248,  1201,  1668,  1199,    11,  1177,  1204,  1240,
     649,  1209,   232,   233,   234,   235,   236,   237,  1249,  1263,
    1254,   256,  1267,  1256,   238,   239,   240,   241,   242,   285,
     167,  1211,  1221,  1634,  1250,  1475,  1475,  1258,  -752,  -754,
    -750,  1190,  1276,   -14,     1,   257,  1269,  1648,  1271,  1285,
    1292,  1294,  1297,   243,  1298,  1303,  1707,   664,   665,   666,
     667,   668,   669,   670,   671,   672,  1301,  1304,  1306,  1307,
    1308,  1344,   245,  1312,  1343,   246,  1877,   247,   549,  1346,
    1349,  1350,  1357,  1351,  1352,  1353,  1356,   258,   259,   260,
     261,   262,    13,    14,     2,  1233,   938,  -781,  1363,  1364,
    1940,  1365,  1313,  1366,  1367,  1369,  1379,     3,     4,     5,
       6,   552,  1375,  1377,   248,  1392,   263,  1378,  1397,  1399,
       7,     8,     9,    10,  1403,  1404,  1410,  1757,  1411,    11,
    1412,  1417,  1420,   395,  1765,   265,  1426,  1430,  1432,  1433,
     266,  1878,  2004,  1436,  1439,  1440,  1447,  1448,  1509,  1449,
      15,  1451,  1452,  1509,   936,  1456,  1460,  1467,  1457,    16,
      17,  1470,    18,  1459,  1477,  1478,  1512,  1515,   147,  1511,
    1513,  1519,    25,  1959,  1533,   267,    12,   268,    26,    27,
    1520,  1532,  1534,  1536,  1541,  1540,  -218,  1551,  1809,  1577,
    1552,   377,  1553,  1567,    28,  1563,  1578,    29,  1579,  1591,
    1751,  1592,  1593,  -218,  1823,  1607,  1760,  1761,  -218,  -218,
    1620,  1613,   549,  1625,  1627,    13,    14,  1629,  2000,  1626,
    1628,  1635,  1638,  1945,  1641,  1642,  1643,  1658,  1661,  1645,
    1660,  1785,  1666,    30,  2031,  1845,  1339,  1671,  1683,   545,
    1693,  1686,  1694,  1793,  1695,   552,  1696,  1699,  1700,  1687,
    -218,  1765,  -218,  1705,  1701,  1713,  1704,  1709,  1710,  1711,
    1712,  1714,  1718,  1722,  1698,  1509,  1745,  1749,   567,   647,
    1746,  1752,  1762,    15,  1775,   608,   609,   147,  1766,  1788,
    1789,   613,    16,    17,  1767,    18,   623,    19,    20,    21,
      22,    23,    24,  1779,  1790,    25,  1791,  1792,  1796,  1802,
    1806,    26,    27,  1807,  -218,  -218,  -218,  1797,  1818,  1821,
    1844,  1822,  1827,  1825,  1842,  1840,  1826,    28,  1900,  1841,
      29,  1839,  1847,  1846,  1850,  1853,  -218,  1855,  -218,  1861,
    1867,   631,  1859,  1871,  -218,  -218,  1872,  1873,  1757,  1874,
    1868,  1876,  1922,  1887,  1923,  -218,  2061,  1259,  -218,  1509,
    1895,  1897,  1875,  -218,  1509,  2064,    30,  1888,  -218,  1898,
    1765,  1894,  1765,  1899,  1892,   704,  1902,  1912,  1919,  1926,
    1931,  1929,  1935,   704,  1949,  1946,  1975,  1948,  1509,  1963,
    1978,  1972,  1906,  1992,  1964,  1936,  1991,  1996,  1998,  1961,
    2011,  1990,  2001,  2019,  1962,  1979,  2002,  2025,  2028,  1968,
    2029,  2036,  2022,  2034,  1969,  2030,  2038,  2041,  2035,  1970,
    2024,  1917,  2056,  2054,  2059,  1090,  1509,  -218,  1516,  1458,
    2023,   452,   451,   731,   649,  1268,  1509,  2006,   567,   283,
     725,  1290,  1517,  1750,  2051,  2039,  2037,  1785,  2032,  1785,
    1782,  2015,  2016,  2017,  2018,  2053,   522,   523,   524,  2005,
    1863,  1864,  1770,  2055,  1667,  1886,  1885,   704,   155,  1047,
    1542,   525,   412,  1017,  1640,   526,   527,   528,   310,   311,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   729,
    1918,  1921,  1994,  1636,  1595,  1637,  1509,  1009,  1509,  1008,
     853,  1266,  1594,   538,   539,   540,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,  1429,
    1733,  1157,   698,  1264,  1239,  1438,   866,   961,  1185,  2045,
    1155,  1838,  1368,   878,   880,   880,  1736,   960,   993,  1509,
    1963,   878,  1509,   880,   963,  1964,   964,  1203,   277,   821,
    1961,   871,  1206,  1207,  1971,  1962,  1816,   908,   909,   910,
    1968,   922,  1824,  1815,  1703,  1969,  1573,  1561,   898,  1564,
    1970,  1977,  1706,   924,   704,  1896,     0,  1984,     0,     0,
       0,  1335,  1336,     0,     0,   951,   951,   951,   951,     0,
       0,     0,     0,     0,     0,     0,   965,   966,   967,   968,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,   982,   983,   984,   985,   986,   987,   988,
       0,     0,     0,     0,     0,   998,   998,     0,     0,     0,
       0,     0,     0,     0,   296,     0,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,     0,     0,   308,
     309,     0,     0,    72,    73,     0,     0,    74,   310,   311,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,    76,     0,     0,   312,   313,   314,   315,   316,
     317,   318,     0,    77,     0,     0,   270,   271,   272,     0,
       0,     0,     0,   319,    78,     0,     0,     0,   164,   637,
     165,   166,   638,   639,   640,   641,   642,   643,   644,   645,
       0,    79,   646,   647,    80,     0,     0,    81,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,     0,     0,     0,     0,     0,    86,   541,   542,   543,
     544,   321,     0,     0,    87,   322,     0,    88,     0,    89,
      90,    91,     0,     0,     0,   323,    92,    93,     0,     0,
       0,     0,     0,     0,     0,   324,   325,   326,   327,   328,
       0,   329,   330,    94,    95,   331,   332,    96,   333,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   334,   105,
     106,   107,   108,     0,   109,   335,   110,     0,     0,     0,
       0,     0,   111,     0,   607,   637,   112,     0,   638,   639,
     640,   641,   642,   643,   644,   645,     0,  1737,  1445,   647,
       0,     0,     0,   338,   339,     0,     0,     0,   340,   341,
     342,     0,     0,     0,  1173,     0,     0,     0,   878,     0,
     344,     0,     0,     0,   880,     0,     0,   704,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,  1205,     0,     0,  1208,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   128,     0,
       0,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,   704,   704,   134,     0,   135,     0,     0,     0,
     136,   137,     0,     0,     0,     0,     0,   345,   346,   347,
     348,     0,     0,     0,     0,     0,     0,   142,     0,     0,
       0,   349,     0,     0,     0,   350,   351,     0,     0,     0,
       0,     0,   998,     0,   998,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,   144,   145,     0,     0,
       0,     0,     0,     0,  1738,     0,     0,     0,   704,     0,
       0,  1739,     0,     0,     0,   704,     0,   353,     0,     0,
      66,    67,    68,    69,    70,    71,   637,     0,     0,   638,
     639,   640,   641,   642,   643,   644,   645,    72,    73,  1446,
     647,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,   637,     0,    76,   638,   639,   640,
     641,   642,   643,   644,   645,     0,     0,    77,   647,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,   162,   164,   929,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,    80,     0,
       0,    81,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,    88,   853,    89,    90,    91,     0,     0,     0,     0,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
    1372,     0,     0,     0,   880,     0,     0,    94,    95,  1383,
       0,    96,     0,    97,    98,    99,   100,   101,   102,   103,
       0,   104,     0,   105,   106,   107,   108,     0,   109,     0,
     110,  1413,  1414,  1415,  1416,     0,   111,    13,  1217,     0,
     112,   704,   522,   523,   524,     0,     0,  1421,   704,     0,
     704,     0,     0,     0,     0,     0,     0,   525,     0,     0,
       0,   526,   527,   528,   310,   311,   529,   530,   531,   532,
     533,   534,   535,   536,   537,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,   538,
     539,   540,   115,     0,     0,   998,   116,   649,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,     0,     0,     0,
       0,     0,   128,     0,     0,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,     0,
     135,     0,     0,     0,   136,   137,     0,     0,   598,     0,
       0,   138,   139,   140,   141,   650,   651,   652,   653,   654,
       0,   142,     0,   655,   656,   657,   658,   659,     0,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,     0,     0,     0,   143,     0,     0,     0,     0,
     144,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   931,
       0,  1120,     0,     0,     0,     0,  1556,     0,     0,  1383,
       0,     0,     0,     0,     0,     0,   673,  1173,     0,     0,
       0,     0,     0,     0,   878,     0,     0,   878,   522,   523,
     524,     0,     0,     0,     0,     0,   704,   704,   704,   704,
       0,     0,     0,   525,     0,     0,   704,   526,   527,   528,
     310,   311,   529,   530,   531,   532,   533,   534,   535,   536,
     537,     0,     0,   649,     0,     0,     0,     0,     0,     0,
     522,   523,   524,     0,     0,   538,   539,   540,     0,     0,
       0,     0,     0,     0,     0,   525,     0,     0,     0,   526,
     527,   528,   310,   311,   529,   530,   531,   532,   533,   534,
     535,   536,   537,  1602,     0,     0,   649,     0,     0,     0,
       0,     0,  1656,   541,   542,   543,   544,   538,   539,   540,
       0,   650,   651,   652,   653,   654,     0,     0,     0,   655,
     656,   657,   658,   659,     0,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,     0,     0,
       0,   878,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   650,   651,   652,   653,   654,     0,
       0,     0,   655,   656,   657,   658,   659,     0,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,     0,     0,  1383,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   649,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1726,     0,  1727,     0,     0,
    1728,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   853,     0,     0,
       0,   878,     0,     0,     0,     0,     0,     0,     0,     0,
     878,     0,     0,   650,   651,   652,   653,   654,     0,     0,
    1603,   655,   656,   657,   658,   659,     0,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   649,
       0,     0,  1663,     0,     0,     0,     0,     0,     0,   541,
     542,   543,   544,  1194,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1810,  1556,  1556,
       0,  1556,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   878,     0,   649,     0,     0,
       0,   541,   542,   543,   544,     0,     0,   650,   651,   652,
     653,   654,     0,     0,   878,   655,   656,   657,   658,   659,
       0,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1857,     0,     0,     0,     0,     0,  1862,
       0,     0,     0,     0,     0,   650,   651,   652,   653,   654,
       0,     0,  1210,   655,   656,   657,   658,   659,     0,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,     0,   296,     0,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,     0,     0,   308,   309,
       0,     0,    72,    73,     0,     0,    74,   310,   311,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,     0,     0,   312,   313,   314,   315,   316,   317,
     318,     0,    77,     0,     0,   270,   271,   272,     0,     0,
       0,     0,   319,    78,     0,     0,   162,   164,     0,   165,
     166,     0,     0,     0,     0,     0,  1598,     0,     0,     0,
      79,     0,     0,    80,     0,  1419,    81,     0,  1810,     0,
       0,  1556,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,   320,     0,     0,   878,
     321,     0,     0,    87,   322,     0,    88,     0,    89,    90,
      91,     0,  1995,     0,   323,    92,    93,     0,     0,     0,
       0,     0,     0,     0,   324,   325,   326,   327,   328,     0,
     329,   330,    94,    95,   331,   332,    96,   333,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   334,   105,   106,
     107,   108,     0,   109,   335,   110,     0,     0,     0,     0,
       0,   111,    13,   597,     0,   112,   337,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,   339,     0,     0,     0,   340,   341,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   344,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   136,
     137,     0,     0,   598,     0,     0,   345,   346,   347,   348,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
     349,     0,     0,     0,   350,   351,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,     0,   144,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   352,   296,   353,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,     0,     0,
     308,   309,     0,     0,    72,    73,     0,     0,    74,   310,
     311,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,    76,     0,     0,   312,   313,   314,   315,
     316,   317,   318,     0,    77,     0,     0,   270,   271,   272,
       0,     0,     0,     0,   319,    78,     0,     0,     0,   164,
       0,   165,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,    80,     0,     0,    81,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,   320,     0,
       0,     0,   321,     0,     0,    87,   322,     0,    88,     0,
      89,    90,    91,     0,     0,     0,   323,    92,    93,     0,
       0,     0,     0,     0,     0,     0,   324,   325,   326,   327,
     328,     0,   329,   330,    94,    95,   331,   332,    96,   333,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   334,
     105,   106,   107,   108,     0,   109,   335,   110,     0,     0,
       0,     0,     0,   111,     0,   336,     0,   112,   337,     0,
     945,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     946,   947,     0,     0,   338,   339,     0,     0,     0,   340,
     341,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   344,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   127,     0,     0,     0,     0,     0,   128,
       0,     0,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,     0,   135,     0,     0,
       0,   136,   137,     0,     0,     0,     0,     0,   345,   346,
     347,   348,     0,     0,     0,     0,     0,     0,   142,     0,
       0,     0,   349,     0,     0,     0,   350,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,     0,   144,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,   296,   353,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
       0,     0,   308,   309,     0,     0,    72,    73,     0,     0,
      74,   310,   311,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,   312,   313,
     314,   315,   316,   317,   318,     0,    77,     0,     0,   270,
     271,   272,     0,     0,     0,     0,   319,    78,     0,     0,
     162,   164,     0,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
     320,     0,     0,     0,   321,     0,     0,    87,   322,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   323,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   324,   325,
     326,   327,   328,     0,   329,   330,    94,    95,   331,   332,
      96,   333,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   334,   105,   106,   107,   108,     0,   109,   335,   110,
       0,     0,     0,     0,     0,   111,    13,   597,     0,   112,
     337,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,   339,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   344,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,     0,   135,
       0,     0,     0,  1649,   137,     0,     0,     0,     0,     0,
     345,   346,   347,   348,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,   349,     0,     0,     0,   350,   351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   144,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   352,   296,
     353,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,     0,     0,   308,   309,     0,     0,    72,    73,
       0,     0,    74,   310,   311,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,    76,     0,     0,
     312,   313,   314,   315,   316,   317,   318,     0,    77,     0,
       0,   270,   271,   272,     0,     0,     0,     0,   319,    78,
       0,     0,     0,   164,     0,   165,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,    80,
       0,     0,    81,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    83,    84,    85,     0,     0,     0,     0,
       0,    86,   320,     0,     0,     0,   321,     0,     0,    87,
     322,     0,    88,     0,    89,    90,    91,     0,     0,     0,
     323,    92,    93,     0,     0,     0,     0,     0,     0,     0,
     324,   325,   326,   327,   328,     0,   329,   330,    94,    95,
     331,   332,    96,   333,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   334,   105,   106,   107,   108,     0,   109,
     335,   110,     0,     0,     0,     0,     0,   111,     0,   336,
       0,   112,   337,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   338,   339,
       0,     0,     0,   340,   341,   342,     0,     0,     0,     0,
       0,     0,   343,     0,     0,   344,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     0,   127,     0,     0,
       0,     0,     0,   128,     0,     0,   129,     0,     0,     0,
     130,     0,     0,   131,   132,     0,   133,     0,     0,   134,
       0,   135,     0,     0,     0,   136,   137,     0,     0,     0,
       0,     0,   345,   346,   347,   348,     0,     0,     0,     0,
       0,     0,   142,     0,     0,     0,   349,     0,     0,     0,
     350,   351,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     352,   296,   353,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,     0,     0,   308,   309,     0,     0,
      72,    73,     0,     0,    74,   310,   311,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
       0,     0,   312,   313,   314,   315,   316,   317,   318,     0,
      77,     0,     0,   270,   271,   272,     0,     0,     0,     0,
     319,    78,     0,     0,     0,   164,     0,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,    80,     0,     0,    81,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    86,   320,     0,     0,     0,   321,     0,
       0,    87,   322,     0,    88,     0,    89,    90,    91,     0,
       0,     0,   323,    92,    93,     0,     0,     0,     0,     0,
       0,     0,   324,   325,   326,   327,   328,     0,   329,   330,
      94,    95,   331,   332,    96,   333,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   334,   105,   106,   107,   108,
       0,   109,   335,   110,     0,     0,     0,     0,     0,   111,
       0,   336,     0,   112,   337,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     338,   339,     0,     0,     0,   340,   341,   342,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   344,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,   127,
       0,     0,     0,     0,     0,   128,     0,     0,   129,     0,
       0,     0,   130,     0,     0,   131,   132,     0,   133,     0,
       0,   134,     0,   135,     0,     0,     0,   136,   137,     0,
       0,     0,     0,     0,   345,   346,   347,   348,     0,     0,
       0,     0,     0,     0,   142,     0,     0,     0,   349,     0,
       0,     0,   350,   351,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   144,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,   296,   353,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,     0,     0,   308,   309,
       0,     0,    72,    73,     0,     0,    74,   310,   311,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,     0,     0,   312,   313,   314,   315,   316,   317,
     318,     0,    77,     0,     0,   270,   271,   272,     0,     0,
       0,     0,   319,    78,     0,     0,   162,   164,     0,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
     321,     0,     0,    87,   322,     0,    88,     0,    89,    90,
      91,     0,     0,     0,   323,    92,    93,     0,     0,     0,
       0,     0,     0,     0,   324,   325,   326,   327,   328,     0,
     329,   330,    94,    95,   331,   332,    96,   333,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   334,   105,   106,
     107,   108,     0,   109,   335,   110,     0,     0,     0,     0,
       0,   111,     0,   713,   714,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,   339,     0,     0,     0,   340,   341,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   344,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   345,   346,   347,   348,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
     349,     0,     0,     0,   350,   351,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,     0,   144,   145,     0,   296,     0,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,     0,     0,   308,   309,     0,   353,    72,    73,     0,
       0,    74,   310,   311,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,     0,     0,   312,
     313,   314,   315,   316,   317,   318,     0,    77,     0,     0,
     270,   271,   272,     0,     0,     0,     0,   319,    78,     0,
       0,     0,   164,     0,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,    80,     0,
       0,    81,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,   321,     0,     0,    87,   322,
       0,    88,     0,    89,    90,    91,     0,     0,     0,   323,
      92,    93,     0,     0,     0,     0,     0,     0,     0,   324,
     325,   326,   327,   328,     0,   329,   330,    94,    95,   331,
     332,    96,   333,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   334,   105,   106,   107,   108,     0,   109,   335,
     110,     0,     0,     0,     0,     0,   111,     0,   607,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   995,     0,     0,   338,   339,     0,
       0,     0,   340,   341,   342,     0,     0,     0,     0,     0,
       0,   996,     0,     0,   344,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   997,     0,     0,     0,
       0,     0,   128,     0,     0,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,     0,
     135,     0,     0,     0,   136,   137,     0,     0,     0,     0,
       0,   345,   346,   347,   348,     0,     0,     0,     0,     0,
       0,   142,     0,     0,     0,   349,     0,     0,     0,   350,
     351,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
     144,   145,     0,   296,     0,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,     0,     0,   308,   309,
       0,   353,    72,    73,     0,     0,    74,   310,   311,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,     0,     0,   312,   313,   314,   315,   316,   317,
     318,     0,    77,     0,     0,   270,   271,   272,     0,     0,
       0,     0,   319,    78,     0,     0,     0,   164,     0,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
     321,     0,     0,    87,   322,     0,    88,     0,    89,    90,
      91,     0,     0,     0,   323,    92,    93,     0,     0,     0,
       0,     0,     0,     0,   324,   325,   326,   327,   328,  1555,
     329,   330,    94,    95,   331,   332,    96,   333,    97,    98,
      99,   100,   101,   102,   103,   886,   104,   334,   105,   106,
     107,   108,     0,   109,   335,   110,     0,     0,     0,     0,
       0,   111,     0,   607,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,   339,     0,     0,     0,   340,   341,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   344,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   345,   346,   347,   348,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
     349,     0,     0,     0,   350,   351,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,     0,   144,   145,     0,   296,     0,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,     0,     0,   308,   309,     0,   353,    72,    73,     0,
       0,    74,   310,   311,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,     0,     0,   312,
     313,   314,   315,   316,   317,   318,     0,    77,     0,     0,
     270,   271,   272,     0,     0,     0,     0,   319,    78,     0,
       0,     0,   164,     0,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,    80,     0,
       0,    81,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,   321,     0,     0,    87,   322,
       0,    88,     0,    89,    90,    91,     0,     0,     0,   323,
      92,    93,     0,     0,     0,     0,     0,     0,     0,   324,
     325,   326,   327,   328,     0,   329,   330,    94,    95,   331,
     332,    96,   333,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   334,   105,   106,   107,   108,     0,   109,   335,
     110,     0,     0,     0,     0,     0,   111,     0,   607,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   338,   339,     0,
       0,     0,   340,   341,   342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   344,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,     0,     0,     0,
       0,     0,   128,     0,     0,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,     0,
     135,     0,     0,     0,   136,   137,     0,     0,     0,     0,
       0,   345,   346,   347,   348,     0,     0,     0,     0,     0,
       0,   142,     0,     0,     0,   349,     0,     0,     0,   350,
     351,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
     144,   145,     0,     0,     0,     0,     0,     0,  1738,     0,
       0,     0,     0,     0,     0,  1739,     0,     0,     0,     0,
     296,   353,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,     0,     0,   308,   309,     0,     0,    72,
      73,     0,     0,    74,   310,   311,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,    76,     0,
       0,   312,   313,   314,   315,   316,   317,   318,     0,    77,
       0,     0,   270,   271,   272,     0,     0,     0,     0,   319,
      78,     0,     0,     0,   164,     0,   165,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
      80,     0,     0,    81,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,   321,     0,     0,
      87,   322,     0,    88,     0,    89,    90,    91,     0,     0,
       0,   323,    92,    93,     0,     0,     0,     0,     0,     0,
       0,   324,   325,   326,   327,   328,     0,   329,   330,    94,
      95,   331,   332,    96,   333,    97,    98,    99,   100,   101,
     102,   103,     0,   104,   334,   105,   106,   107,   108,     0,
     109,   335,   110,     0,     0,     0,     0,     0,   111,     0,
     607,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   338,
     339,     0,     0,     0,   340,   341,   342,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   344,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   116,     0,
       0,     0,     0,     0,     0,   117,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,     0,
       0,     0,     0,     0,   128,     0,     0,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,     0,   135,     0,     0,     0,   136,   137,     0,     0,
       0,     0,     0,   345,   346,   347,   348,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,   349,     0,     0,
       0,   350,   351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,     0,   144,   145,     0,     0,     0,     0,     0,     0,
    1985,     0,     0,     0,     0,     0,     0,  1986,     0,     0,
       0,     0,   296,   353,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,     0,     0,   308,   309,     0,
       0,    72,    73,     0,     0,    74,   310,   311,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
      76,     0,     0,   312,   313,   314,   315,   316,   317,   318,
       0,    77,     0,     0,   270,   271,   272,     0,     0,     0,
       0,   319,    78,     0,     0,     0,   164,     0,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,   321,
       0,     0,    87,   322,     0,    88,     0,    89,    90,    91,
       0,     0,     0,   323,    92,    93,     0,     0,     0,     0,
       0,     0,     0,   324,   325,   326,   327,   328,     0,   329,
     330,    94,    95,   331,   332,    96,   333,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   334,   105,   106,   107,
     108,     0,   109,   335,   110,     0,     0,     0,     0,     0,
     111,     0,   607,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,   339,     0,     0,     0,   340,   341,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,     0,   136,   137,
       0,     0,     0,     0,     0,   345,   346,   347,   348,     0,
       0,     0,     0,     0,     0,   142,     0,     0,     0,   349,
     622,     0,     0,   350,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,   144,   145,     0,   296,     0,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
       0,     0,   308,   309,     0,   353,    72,    73,     0,     0,
      74,   310,   311,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,   312,   313,
     314,   315,   316,   317,   318,     0,    77,     0,     0,   270,
     271,   272,     0,     0,     0,     0,   319,    78,     0,     0,
       0,   164,     0,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,   321,     0,     0,    87,   322,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   323,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   324,   325,
     326,   327,   328,     0,   329,   330,    94,    95,   331,   332,
      96,   333,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   334,   105,   106,   107,   108,     0,   109,   335,   110,
       0,     0,     0,     0,     0,   111,     0,   607,   702,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,   339,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   344,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,     0,   135,
       0,     0,     0,   136,   137,     0,     0,     0,     0,     0,
     345,   346,   347,   348,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,   349,     0,     0,     0,   350,   351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   144,
     145,     0,   296,     0,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,     0,     0,   308,   309,     0,
     353,    72,    73,     0,     0,    74,   310,   311,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
      76,     0,     0,   312,   313,   314,   315,   316,   317,   318,
       0,    77,     0,     0,   270,   271,   272,     0,     0,     0,
       0,   319,    78,     0,     0,   162,   164,     0,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,   321,
       0,     0,    87,   322,     0,    88,     0,    89,    90,    91,
       0,     0,     0,   323,    92,    93,     0,     0,     0,     0,
       0,     0,     0,   324,   325,   326,   327,   328,     0,   329,
     330,    94,    95,   331,   332,    96,   333,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   334,   105,   106,   107,
     108,     0,   109,   335,   110,     0,     0,     0,     0,     0,
     111,     0,   713,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,   339,     0,     0,     0,   340,   341,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,     0,   136,   137,
       0,     0,     0,     0,     0,   345,   346,   347,   348,     0,
       0,     0,     0,     0,     0,   142,     0,     0,     0,   349,
       0,     0,     0,   350,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,   144,   145,     0,   296,     0,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
       0,     0,   308,   309,     0,   353,    72,    73,     0,     0,
      74,   310,   311,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,   312,   313,
     314,   315,   316,   317,   318,     0,    77,     0,     0,   270,
     271,   272,     0,     0,     0,     0,   319,    78,     0,     0,
       0,   164,     0,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,  1381,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,   321,     0,     0,    87,   322,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   323,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   324,   325,
     326,   327,   328,     0,   329,   330,    94,    95,   331,   332,
      96,   333,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   334,   105,   106,   107,   108,     0,   109,   335,   110,
       0,     0,     0,     0,     0,   111,     0,   607,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,   339,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   344,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,  1382,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,     0,   135,
       0,     0,     0,   136,   137,     0,     0,     0,     0,     0,
     345,   346,   347,   348,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,   349,     0,     0,     0,   350,   351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   144,
     145,     0,   296,     0,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,     0,     0,   308,   309,     0,
     353,    72,    73,     0,     0,    74,   310,   311,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
      76,     0,     0,   312,   313,   314,   315,   316,   317,   318,
       0,    77,     0,     0,   270,   271,   272,     0,     0,     0,
       0,   319,    78,     0,     0,     0,   164,     0,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,   321,
       0,     0,    87,   322,     0,    88,     0,    89,    90,    91,
       0,     0,     0,   323,    92,    93,     0,     0,     0,     0,
       0,     0,     0,   324,   325,   326,   327,   328,     0,   329,
     330,    94,    95,   331,   332,    96,   333,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   334,   105,   106,   107,
     108,     0,   109,   335,   110,     0,     0,     0,     0,     0,
     111,     0,   607,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,   339,     0,     0,     0,   340,   341,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,     0,   136,   137,
       0,     0,     0,     0,     0,   345,   346,   347,   348,     0,
       0,     0,     0,     0,     0,   142,     0,     0,     0,   349,
    1653,     0,     0,   350,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,   144,   145,     0,   296,     0,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
       0,     0,   308,   309,     0,   353,    72,    73,     0,     0,
      74,   310,   311,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,   312,   313,
     314,   315,   316,   317,   318,     0,    77,     0,     0,   270,
     271,   272,     0,     0,     0,     0,   319,    78,     0,     0,
       0,   164,     0,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,   321,     0,     0,    87,   322,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   323,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   324,   325,
     326,   327,   328,  1555,   329,   330,    94,    95,   331,   332,
      96,   333,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   334,   105,   106,   107,   108,     0,   109,   335,   110,
       0,     0,     0,     0,     0,   111,     0,   607,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,   339,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   344,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,     0,   135,
       0,     0,     0,   136,   137,     0,     0,     0,     0,     0,
     345,   346,   347,   348,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,   349,     0,     0,     0,   350,   351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   144,
     145,     0,   296,     0,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,     0,     0,   308,   309,     0,
     353,    72,    73,     0,     0,    74,   310,   311,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
      76,     0,     0,   312,   313,   314,   315,   316,   317,   318,
       0,    77,     0,     0,   270,   271,   272,     0,     0,     0,
       0,   319,    78,     0,     0,     0,   164,     0,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,   321,
       0,     0,    87,   322,     0,    88,     0,    89,    90,    91,
       0,     0,     0,   323,    92,    93,     0,     0,     0,     0,
       0,     0,     0,   324,   325,   326,   327,   328,     0,   329,
     330,    94,    95,   331,   332,    96,   333,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   334,   105,   106,   107,
     108,     0,   109,   335,   110,     0,     0,     0,     0,     0,
     111,     0,   607,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,   339,     0,     0,     0,   340,   341,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,     0,   136,   137,
       0,     0,     0,     0,     0,   345,   346,   347,   348,     0,
       0,     0,     0,     0,     0,   142,     0,     0,     0,   349,
       0,     0,     0,   350,   351,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,    72,    73,   144,   145,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,     0,     0,     0,   353,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,   164,   929,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,     0,   649,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,     0,   109,     0,   110,     0,     0,     0,     0,
       0,   111,     0,   930,     0,   112,     0,     0,     0,     0,
     650,   651,   652,   653,   654,     0,     0,     0,   655,   656,
     657,   658,   659,     0,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   138,   139,   140,   141,
    1930,     0,     0,     0,     0,     0,   142,     0,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,     0,     0,    74,
     143,     0,     0,     0,     0,   144,   145,     0,     0,     0,
       0,    75,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   931,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     3,     4,  1479,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1480,     0,     0,    80,     0,     0,  1481,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,    88,
       0,    89,    90,    91,     0,     0,   649,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,     0,     0,   650,   651,   652,   653,   654,     0,
       0,     0,   655,   656,   657,   658,   659,     0,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,    15,   116,     0,     0,     0,     0,     0,
       0,   117,    16,  1483,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,    25,     0,     0,     0,     0,
     128,    26,    27,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,    28,   135,  1484,
      29,     0,   136,   137,     0,     0,     0,     0,     0,   138,
     139,   140,   141,   918,     0,     0,     0,     0,     0,   142,
       0,     0,     0,  1485,     0,     0,  1932,     0,     0,  1486,
    1933,  -340,     0,     0,     0,     0,    30,    66,    67,    68,
      69,    70,    71,   143,     0,     0,     0,     0,   144,   145,
       0,     0,     0,     0,    72,    73,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     3,     4,  1479,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,  1480,     0,     0,    80,     0,     0,  1481,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,     0,     0,   649,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,     0,   109,     0,   110,     0,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
       0,     0,     0,   650,   651,   652,   653,   654,     0,     0,
       0,   655,   656,   657,   658,   659,     0,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,    15,   116,     0,     0,     0,     0,     0,  1482,
     117,    16,  1483,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   127,    25,     0,     0,     0,     0,   128,
      26,    27,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,    28,   135,  1484,    29,
       0,   136,   137,     0,     0,     0,     0,     0,   138,   139,
     140,   141,  1772,     0,     0,     0,     0,     0,   142,     0,
       0,     0,  1485,     0,     0,     0,     0,     0,  1486,     0,
       0,     0,     0,  1487,     0,    30,    66,    67,    68,    69,
      70,    71,   143,     0,     0,     0,     0,   144,   145,     0,
       0,     0,     0,    72,    73,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     3,     4,  1479,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,  1480,     0,     0,    80,     0,     0,  1481,     0,     0,
       0,     0,     0,    82,     0,  1243,     0,     0,    83,    84,
      85,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    88,     0,    89,
      90,    91,   649,     0,     0,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,     0,   105,
     106,   107,   108,     0,   109,     0,   110,     0,     0,     0,
       0,     0,   111,     0,     0,     0,   112,     0,     0,     0,
     650,   651,   652,   653,   654,     0,     0,     0,   655,   656,
     657,   658,   659,     0,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,    15,   116,     0,     0,     0,     0,     0,  1780,   117,
      16,  1483,  1781,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,    25,     0,     0,     0,     0,   128,    26,
      27,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   134,    28,   135,  1484,    29,     0,
     136,   137,     0,     0,     0,     0,     0,   138,   139,   140,
     141,     0,     0,     0,     0,     0,     0,   142,     0,     0,
       0,  1485,     0,     0,     0,     0,     0,  1486,     0,     0,
       0,     0,  1487,     0,    30,    66,    67,    68,    69,    70,
      71,   143,     0,     0,     0,     0,   144,   145,     0,     0,
       0,     0,    72,    73,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     3,     4,  1479,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    1480,     0,     0,    80,     0,     0,  1481,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
    1600,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,     0,   649,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,  1601,   109,     0,   110,     0,     0,     0,     0,
       0,   111,     0,     0,     0,   112,     0,     0,     0,     0,
     650,   651,   652,   653,   654,     0,     0,     0,   655,   656,
     657,   658,   659,     0,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
      15,   116,     0,     0,     0,     0,     0,     0,   117,    16,
    1483,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,    25,     0,     0,     0,     0,   128,    26,    27,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,    28,   135,  1484,    29,     0,   136,
     137,     0,     0,     0,     0,     0,   138,   139,   140,   141,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
    1485,     0,     0,     0,     0,     0,  1486,     0,  -340,     0,
       0,     0,     0,    30,    66,    67,    68,    69,    70,    71,
     143,     0,     0,     0,     0,   144,   145,     0,     0,     0,
       0,    72,    73,     0,     0,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     3,     4,  1479,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,  1480,
       0,     0,    80,     0,     0,  1481,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,     0,    89,    90,    91,
     649,     0,     0,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,     0,   109,     0,   110,     0,     0,     0,     0,     0,
     111,     0,     0,     0,   112,     0,     0,     0,   650,   651,
     652,   653,   654,     0,     0,     0,   655,   656,   657,   658,
     659,     0,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,     0,     0,     0,     0,     0,
       0,  1146,  1147,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,    15,
     116,     0,     0,     0,     0,     0,     0,   117,    16,  1483,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,    25,     0,     0,     0,     0,   128,    26,    27,   129,
       0,     0,     0,   130,     0,     0,   131,   132,     0,   133,
       0,     0,   134,    28,   135,  1484,    29,     0,   136,   137,
       0,     0,     0,     0,     0,   138,   139,   140,   141,     0,
       0,     0,     0,     0,     0,   142,     0,     0,     0,  1485,
       0,     0,     0,     0,     0,  1486,     0,     0,     0,     0,
       0,  2003,    30,    66,    67,    68,    69,    70,    71,   143,
       0,     0,     0,     0,   144,   145,     0,     0,     0,     0,
      72,    73,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     3,     4,  1479,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,  1480,     0,
       0,    80,     0,     0,  1481,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
     649,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,     0,     0,     0,     0,     0,   111,
    1195,     0,     0,   112,     0,     0,     0,     0,   650,   651,
     652,   653,   654,     0,     0,     0,   655,   656,   657,   658,
     659,     0,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,    15,   116,
       0,     0,     0,     0,     0,     0,   117,    16,  1483,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,   127,
      25,     0,     0,     0,     0,   128,    26,    27,   129,     0,
       0,     0,   130,     0,     0,   131,   132,     0,   133,     0,
       0,   134,    28,   135,  1484,    29,     0,   136,   137,     0,
       0,     0,     0,     0,   138,   139,   140,   141,     0,     0,
       0,     0,     0,     0,   142,     0,     0,     0,  1485,     0,
       0,     0,     0,     0,  1486,     0,     0,     0,     0,     0,
       0,    30,    66,    67,    68,    69,    70,    71,   143,     0,
       0,     0,     0,   144,   145,     0,     0,     0,     0,    72,
      73,     0,     0,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     3,     4,  1479,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,  1480,     0,     0,
      80,     0,     0,  1481,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,    88,     0,    89,    90,    91,     0,   649,
       0,     0,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,    96,     0,    97,    98,    99,   100,   101,
     102,   103,     0,   104,     0,   105,   106,   107,   108,  1554,
     109,     0,   110,     0,     0,     0,     0,     0,   111,     0,
       0,     0,   112,     0,     0,     0,     0,   650,   651,   652,
     653,   654,     0,     0,     0,   655,   656,   657,   658,   659,
       0,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   116,     0,
       0,     0,     0,     0,     0,   117,    16,  1483,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,     0,
       0,     0,     0,     0,   128,    26,    27,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,    28,   135,  1484,     0,     0,   136,   137,     0,     0,
       0,     0,     0,   138,   139,   140,   141,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,  1485,     0,     0,
       0,     0,     0,  1486,     0,     0,     0,     0,  1960,     0,
      30,    66,    67,    68,    69,    70,    71,   143,     0,     0,
       0,     0,   144,   145,     0,     0,     0,     0,    72,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       3,     4,  1479,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,  1480,     0,     0,    80,
       0,     0,  1481,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    83,    84,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,    89,    90,    91,     0,   649,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,  1599,   109,
       0,   110,     0,     0,     0,     0,     0,   111,     0,     0,
       0,   112,     0,     0,     0,     0,   650,   651,   652,   653,
     654,     0,     0,     0,   655,   656,   657,   658,   659,     0,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,   117,    16,  1483,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     0,   127,     0,     0,
       0,     0,     0,   128,    26,    27,   129,     0,     0,     0,
     130,     0,     0,   131,   132,     0,   133,     0,     0,   134,
      28,   135,  1484,     0,     0,   136,   137,     0,     0,     0,
       0,     0,   138,   139,   140,   141,     0,     0,     0,     0,
       0,     0,   142,     0,     0,     0,  1485,     0,     0,     0,
       0,     0,  1486,     0,     0,     0,     0,     0,  2052,    30,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,   144,   145,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,   225,     0,     0,     0,     0,
      72,    73,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,   227,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,    80,     0,     0,    81,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
     649,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
    1605,   109,     0,   110,     0,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     0,     0,     0,     0,   650,   651,
     652,   653,   654,     0,     0,     0,   655,   656,   657,   658,
     659,     0,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   279,   280,   234,
     235,   236,   237,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,   127,
       0,     0,     0,     0,     0,   128,     0,     0,   129,     0,
       0,     0,   130,     0,     0,   131,   132,     0,   133,     0,
       0,   134,     0,   135,     0,     0,     0,   281,   137,     0,
       0,     0,     0,     0,   138,   139,   140,   141,     0,     0,
       0,     0,     0,     0,   142,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,     0,     0,    74,     0,   143,     0,
       0,     0,     0,   144,   145,     0,     0,     0,    75,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,     0,   649,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,  1834,   109,     0,   726,     0,     0,     0,     0,
       0,   111,     0,     0,     0,   112,     0,     0,     0,     0,
     650,   651,   652,   653,   654,     0,     0,     0,   655,   656,
     657,   658,   659,     0,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,   259,   260,   261,   262,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   727,
     137,     0,     0,     0,     0,     0,   138,   139,   140,   141,
       0,     0,     0,     0,     0,     0,   142,    66,    67,    68,
    1002,  1003,  1004,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,     0,     0,    74,     0,
     143,     0,     0,     0,     0,   144,   145,     0,     0,     0,
      75,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,   164,
       0,   165,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,    80,     0,     0,    81,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,   649,     0,     0,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,     0,   109,     0,   110,     0,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
       0,   650,   651,   652,   653,   654,     0,     0,     0,   655,
     656,   657,   658,   659,     0,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,  1005,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,     0,
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
       0,   164,     0,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,    89,    90,    91,     0,   649,     0,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,  1835,   109,     0,   110,
       0,     0,     0,     0,     0,   111,     0,   581,     0,   112,
       0,     0,     0,     0,   650,   651,   652,   653,   654,     0,
       0,     0,   655,   656,   657,   658,   659,     0,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,     0,   135,
       0,     0,     0,   136,   137,     0,     0,     0,     0,     0,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
     142,    66,    67,    68,  1002,  1003,  1004,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
       0,     0,    74,     0,   143,     0,     0,     0,     0,   144,
     145,     0,     0,     0,    75,     0,     0,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,   164,     0,   165,   166,     0,     0,     0,
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
       0,     0,  1453,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     0,   127,     0,     0,
       0,     0,     0,   128,     0,     0,   129,     0,     0,     0,
     130,     0,     0,   131,   132,     0,   133,     0,     0,   134,
       0,   135,     0,     0,     0,   136,   137,     0,     0,     0,
       0,     0,   138,   139,   140,   141,     0,     0,     0,     0,
       0,     0,   142,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,     0,     0,    74,     0,   143,     0,     0,     0,
       0,   144,   145,     0,     0,     0,    75,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,   164,     0,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,    80,     0,     0,    81,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
     649,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
    1836,   109,     0,   110,     0,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     0,     0,     0,     0,   650,   651,
     652,   653,   654,     0,     0,     0,   655,   656,   657,   658,
     659,     0,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
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
       0,     0,    77,     0,     0,   270,   271,   272,     0,     0,
       0,     0,     0,   273,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     274,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   275,     0,   135,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   138,   276,   140,   141,
       0,     0,     0,     0,     0,     0,   142,    66,    67,    68,
    1002,  1003,  1004,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,     0,     0,    74,     0,
     143,     0,     0,     0,     0,   144,   145,     0,     0,     0,
      75,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,   164,
       0,   165,   166,     0,     0,     0,     0,     0,     0,     0,
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
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,     0,
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
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,    89,    90,    91,     0,     0,     0,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,     0,   109,     0,   110,
       0,     0,     0,     0,     0,   111,     0,    14,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
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
       0,   112,     0,     0,     0,     0,     0,     0,  1092,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,  1093,     0,   116,     0,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     0,   127,     0,     0,
       0,     0,     0,   128,     0,     0,   129,     0,     0,     0,
     130,     0,     0,   131,   132,     0,   133,     0,     0,   134,
       0,   135,     0,     0,     0,   136,   137,     0,     0,     0,
       0,     0,   138,   139,   140,   141,     0,     0,     0,     0,
       0,     0,   142,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,     0,     0,    74,     0,   143,     0,     0,     0,
       0,   144,   145,     0,     0,     0,    75,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,   127,
       0,     0,     0,     0,     0,   128,     0,     0,   129,     0,
       0,     0,   130,     0,     0,   131,   132,     0,   133,     0,
       0,   134,   455,   135,     0,     0,     0,   136,   137,     0,
       0,     0,     0,     0,   138,   139,   140,   141,     0,     0,
       0,     0,     0,     0,   142,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,     0,     0,    74,     0,   143,     0,
       0,     0,     0,   144,   145,     0,     0,     0,    75,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,     0,     0,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,     0,   109,     0,   110,     0,     0,     0,     0,
       0,   111,     0,   423,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   138,   139,   140,   141,
       0,     0,     0,     0,     0,     0,   142,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,     0,     0,    74,     0,
     143,     0,     0,     0,     0,   144,   145,     0,     0,     0,
      75,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,  1078,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,  1093,     0,   116,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     0,   127,     0,     0,
       0,     0,     0,   128,     0,     0,   129,     0,     0,     0,
     130,     0,     0,   131,   132,     0,   133,     0,     0,   134,
       0,   135,     0,     0,     0,   136,   137,     0,     0,     0,
       0,     0,   138,   139,   140,   141,     0,     0,     0,     0,
       0,     0,   142,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,     0,     0,    74,     0,   143,     0,     0,     0,
       0,   144,   145,     0,     0,     0,    75,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   485,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   138,   139,   140,   141,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1231,     0,     0,     0,     0,   144,   145
};

static const yytype_int16 yycheck[] =
{
       0,    35,   284,     4,   409,     0,    24,   294,     9,   162,
       0,   772,    13,   294,   426,     0,    17,    18,   216,   161,
       0,   764,   630,   586,   284,     0,   336,   337,   214,   171,
       0,   594,   543,    34,    35,   284,  1063,   429,   935,   583,
       0,  1369,   352,   793,   679,     0,   188,   189,   588,   320,
    1526,   193,  1303,    11,    11,     3,   596,    14,     0,   445,
     955,   956,    16,   542,    65,   930,     3,   457,   782,   783,
     784,   937,    85,   559,    17,    27,     0,   281,     4,   501,
     503,   504,   505,   559,   633,   507,   508,   509,    26,    58,
    1181,   882,    18,   884,  1088,  1701,    83,   133,  1704,   209,
    1088,    14,   746,   747,   895,    16,  1436,     3,   752,   158,
     173,  1439,     5,     6,     7,     8,     9,    10,     3,  1447,
      66,   279,   109,     0,   174,   168,   169,   170,   409,    39,
      40,   336,   252,   174,   172,     5,   174,   341,   173,    65,
     152,    11,   154,     5,     6,     7,     8,     9,    10,    66,
     151,   152,   111,   262,   274,     3,   157,   174,    69,    70,
      71,    71,    73,    74,  1658,    76,    84,   325,    53,  1524,
     111,   111,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,  1683,   151,   210,
     211,   212,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   708,   618,   142,   226,   152,   173,   111,   230,
     172,   173,   174,   175,   176,   159,   173,   238,   239,   240,
     241,   242,   243,   244,   245,   172,   247,   248,   172,   173,
     174,   175,   176,   254,   255,   166,   173,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   466,   207,
     746,   747,    11,   274,   275,  1769,   752,   173,  1633,   342,
     281,  1775,   687,  1613,   174,   211,   212,   597,  1894,   428,
     682,   341,   341,   294,   295,   172,   173,   174,   175,   176,
     341,   214,   345,   341,   230,   174,     0,   342,  1058,    66,
     262,  1402,   238,   239,   240,   241,   242,   866,  1215,   245,
     289,   247,   248,   324,   341,  1319,   339,   637,   891,   255,
     841,  1319,   258,   259,   260,   261,   262,   647,   264,   265,
     266,   267,   268,   453,   192,   193,   333,   489,   734,   735,
    1216,   338,  1217,   111,   265,   281,   561,   897,  1072,   630,
     995,   315,   997,   842,   754,  1859,   367,   572,   573,   317,
    1698,   296,   297,   298,  1868,   861,     3,    55,   271,   316,
     803,   520,   341,   805,   806,   807,   808,     3,   346,   346,
     172,  1182,   597,    11,  1185,   341,   258,  1041,    64,   261,
     341,   341,   607,   104,  1880,   189,    42,    43,  1659,   110,
     173,   266,   336,  1664,   341,   172,   173,   622,    84,   420,
     345,   173,   423,   173,    66,   426,    66,   174,   429,   173,
       0,   636,   111,    58,   173,    67,  1930,   115,  1932,   834,
     835,   367,   174,    87,   174,   174,   447,    83,    66,    83,
     151,   341,    64,    65,    66,    67,    88,   158,   341,   336,
     461,   110,    87,   110,   465,   174,    81,   251,   393,   394,
      83,   753,   341,   474,   475,   476,   477,   478,   172,   173,
     174,   175,   176,   426,   485,   111,   341,   521,   627,   771,
     491,   492,    79,   753,   495,  1889,   497,   498,   499,   500,
      64,    65,    66,    67,   753,   174,   444,   266,   713,   174,
     708,   771,   174,     0,   515,   907,  1411,  1412,   519,   174,
     521,   447,   771,   436,   174,  1776,   283,   176,   810,   176,
     172,   173,   172,   173,  2028,   461,   174,   171,   463,   465,
     153,     3,   824,   156,   545,   172,   173,   110,   474,   475,
     476,   477,   478,   133,   172,   173,   172,   173,   110,   341,
     174,   810,    21,    22,   824,  1041,   492,   174,   174,   495,
     768,   497,   498,   499,   500,   824,   274,   189,   865,   342,
    1330,   228,   341,   262,   865,   148,   252,   150,   151,  1380,
     342,   133,   342,   864,   341,  1139,   906,   615,   342,   617,
    1391,   279,   172,   173,   174,   175,   176,  1398,   250,   341,
     250,   341,   341,  1221,  1762,   172,   234,   927,   174,   320,
    1228,   174,   269,  1258,   766,   272,   174,  1167,    55,   630,
     631,   174,   341,   634,    86,   282,   262,   249,   274,   949,
     341,   283,   174,   283,   174,   174,  2040,   174,   110,   959,
     960,     5,     6,     7,     8,     9,    10,   581,   929,   930,
     272,    66,   867,   861,   116,   342,   118,   119,   120,   121,
     122,   123,   341,   597,   126,   676,   341,   678,   696,   341,
     298,   682,   683,   607,   597,   249,   341,   630,   115,    99,
     279,   341,   963,  1115,   127,  1907,   621,   254,   250,   132,
     110,   313,   190,   341,   581,   173,   229,    86,   272,  1606,
      64,    65,    66,    67,   173,   173,   740,   274,   110,    66,
     597,   115,   174,  1871,   189,  1873,   727,   341,   173,   111,
     607,  1758,  1759,   676,   341,   341,   325,   116,   165,   118,
     119,   120,   121,   122,   123,   769,   342,   126,   116,   117,
     118,   119,   120,   121,   122,   123,   279,   280,   126,   151,
     154,   900,   189,  1975,   765,   270,   176,   172,   173,    56,
     683,  1042,    69,    70,    71,    62,    73,    74,    75,    76,
     781,   782,   783,   784,   281,   341,   251,   341,   341,   713,
     791,   173,   793,   341,   298,    83,   229,   341,   341,  1081,
     713,   727,   253,   804,   231,   232,   233,   234,   235,   341,
     314,   341,   341,   831,   341,    42,    43,   250,   269,   102,
    1102,  1081,  1430,    83,  1432,   172,   173,   125,   301,   847,
     303,   282,  1081,   260,  1397,   189,   713,  1400,   158,   765,
     250,   265,  1102,   134,  1042,  1237,   273,   165,   252,  1360,
     110,   149,   279,  1102,   174,  1439,  1033,   284,  1035,  1036,
    1282,  1283,  1284,  1447,   865,  1257,   115,   868,   320,   166,
     274,  1069,   160,   277,   278,   163,   877,   158,   804,  1161,
    1162,   301,  1021,   303,   885,   168,   169,   170,   102,   219,
     220,   892,   319,   174,   321,   249,  1639,  1640,   168,   169,
     170,  1161,  1162,   152,   174,   154,   907,  1881,   833,  1883,
    1884,  1885,  1161,  1162,   232,   233,   234,   235,   272,    87,
    1106,  1107,  1064,   214,   215,   216,   217,   218,   929,   930,
     111,    88,   266,   341,   935,   936,   937,   345,    95,    96,
     266,   320,   855,   856,   857,   237,  1217,   219,   220,   241,
    1221,   877,   320,   134,   168,   169,   170,  1228,   177,   313,
     174,   180,   181,   182,   183,   184,   185,   186,   187,   230,
      11,   190,   191,   301,    88,   303,   262,    91,   110,   776,
     777,   778,   779,    97,    82,    83,   929,   930,   913,   262,
     915,   252,   172,   173,   233,   127,   176,   258,   259,  1607,
     132,    69,    70,    71,   279,   802,   930,   301,    76,   303,
    1011,   192,   193,   194,   195,   196,   277,    89,    90,   200,
     201,   202,   203,   204,   279,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,  1039,  1040,
     255,   256,   955,   956,   176,   323,   324,  1048,  1049,   100,
     101,  1052,  1333,   930,   279,  1056,  1057,  1058,  1059,   826,
     319,  1624,   829,   830,   831,  1204,    64,    65,  1350,    67,
     279,  1072,  1211,  1872,  1213,  1874,  1077,   279,   280,  1484,
     847,   848,   849,   850,   192,   193,  1087,   233,  1088,   279,
    1091,  1092,  1093,  1088,   227,  1019,   228,   229,   168,   169,
     170,  1350,   296,  1104,     5,     6,     7,     8,     9,    10,
     177,  1112,  1037,   184,   185,  1028,  1059,   177,   250,   639,
     640,   641,   341,   315,   316,   317,   318,   279,  1088,    93,
      94,  1057,   279,  1088,   341,  1445,  1446,   269,    89,    90,
     272,     3,     4,   327,   328,   104,  1088,   297,  1091,   285,
     282,   325,   326,    64,    65,  1718,   174,   175,     3,  1430,
     341,  1432,     3,    69,    70,    71,  1092,    73,    74,    22,
      76,   759,   760,   173,  1737,     5,     6,     7,   180,   181,
     182,   183,   184,   185,   186,   187,  1112,  1993,  1994,   191,
      20,   173,   289,   290,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    17,   557,
     558,   173,   173,   125,  1215,  1216,  1217,   173,   173,   173,
    1221,   173,    52,    53,    54,   173,   173,  1228,  1510,  1511,
    1231,  1513,  1644,   173,   173,  1440,  1237,  1238,  1519,  1520,
     173,   173,   173,   173,   173,  2006,    55,   173,   173,    58,
    1510,  1511,   173,  1513,   173,   173,  1257,   173,  1259,   173,
     166,  1510,  1511,   320,  1513,   331,   179,   342,   341,   173,
    1409,  1410,   331,   173,  1217,   173,   281,    92,  1221,  1484,
    1419,  1486,    98,   341,   320,  1228,   290,   291,   292,   293,
     294,   295,   299,  1217,   103,   133,   105,   133,   133,   313,
     112,   112,  1303,  1304,  1217,   134,   115,  1220,   111,  1343,
     174,  1312,   262,   298,   172,   237,   173,   134,  1243,  1319,
      17,   173,   250,   173,  1319,   173,  1479,   173,  1609,  1330,
     290,   291,   292,   293,   294,   295,  1607,  1355,   172,  1357,
    1217,  1359,  1343,  1344,   227,   233,  1364,   173,   173,  1912,
     173,  1276,   173,    38,   173,   173,   165,   298,    55,  1319,
     173,    58,  1767,   173,  1319,   173,   173,   173,  1369,  1294,
     167,   342,  1297,  1298,    23,   177,   177,  1319,   174,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     112,  1392,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   155,     3,   173,  1610,   103,   238,   105,   174,
     219,   220,   221,   222,   223,   224,   238,   174,   115,   174,
     172,    55,   231,   232,   233,   234,   235,   173,   173,  1430,
     173,  1432,   206,   174,   344,  1436,   283,    82,  1439,   290,
     291,   292,   293,   294,   295,   173,  1447,    79,  1653,   111,
     243,   260,   257,   281,   104,  1660,   286,   287,   288,   289,
     172,   172,   238,   111,   273,   314,   280,   173,   165,   273,
     279,   173,   261,   282,    20,   284,   268,    99,   234,   265,
     320,   115,  1483,   320,    23,   341,   281,  1430,   104,  1432,
     111,   134,  1779,   320,    64,    65,    66,    67,  1411,  1412,
     158,   173,   341,   102,   146,   174,  1540,    77,    78,    79,
      80,   341,   321,   174,  1515,   287,    86,   341,   302,   109,
     134,   312,   219,   220,   221,   222,   223,   224,   110,    88,
     174,   165,   261,   174,   231,   232,   233,   234,   235,  1540,
    1483,   341,   341,  1468,   332,  1470,  1471,   341,   173,   173,
     173,   341,   257,     0,     1,   189,   111,  1483,   258,    90,
     110,   315,   111,   260,   257,   174,  1567,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   265,   341,   174,   174,
     174,   265,   279,   274,   322,   282,  1791,   284,  1870,   265,
     174,   341,   341,   174,   174,   174,   174,   231,   232,   233,
     234,   235,   172,   173,    51,  1606,  1607,   281,   174,   341,
    1870,   174,  1613,   174,   174,   173,   341,    64,    65,    66,
      67,  1870,   174,   174,   321,   320,   260,   174,   341,   104,
      77,    78,    79,    80,   174,   161,   173,  1638,   173,    86,
     173,   296,   312,  1644,  1645,   279,   174,    75,    75,    72,
     284,  1793,  1939,   173,   104,   108,   104,   174,  1659,   102,
     230,   174,   174,  1664,  1607,   174,    16,   320,   266,   239,
     240,   111,   242,   266,   174,     3,   241,   341,  1679,   236,
     236,   264,   252,  1888,     3,   319,   133,   321,   258,   259,
     264,   267,   172,   172,    77,   173,   110,  1698,  1699,   143,
     174,  1644,   174,   320,   274,   250,   143,   277,   174,   281,
    1635,   174,   174,   127,  1715,    75,  1641,  1642,   132,   133,
     104,   173,  2004,   174,   328,   172,   173,   250,  1933,   174,
     274,   341,   173,  1875,   341,   238,   237,   310,   343,   238,
     308,  1666,     5,   313,  2004,  1746,   172,   128,   173,   341,
     174,   228,   174,  1679,   174,  2004,   174,   342,   173,   330,
     174,  1762,   176,   174,   341,   174,   341,   265,   265,   265,
     265,   174,   341,   162,   341,  1776,   257,   110,  1779,   191,
     273,    83,   238,   230,   302,   338,   339,  1788,   173,   272,
     320,   344,   239,   240,   173,   242,   349,   244,   245,   246,
     247,   248,   249,   173,   110,   252,   173,   264,   171,   112,
      85,   258,   259,    85,   228,   229,   230,   266,   110,   110,
    1745,   110,   174,   265,   334,   336,   265,   274,  1829,   336,
     277,   325,   229,   341,     3,   273,   250,   342,   252,   312,
     133,   262,   302,   238,   258,   259,     5,   238,  1849,     5,
     309,   129,  1853,   329,  1855,   269,  2054,   342,   272,  1860,
     154,   151,  1788,   277,  1865,  2063,   313,   301,   282,   151,
    1871,   341,  1873,   156,   320,   428,     3,   190,    59,   174,
     312,   300,   133,   436,   113,   173,   159,   174,  1889,  1889,
     156,  1892,   153,    60,  1889,   312,   325,   133,   300,  1889,
     265,   337,   312,   310,  1889,  1906,   312,    61,   302,  1889,
     306,   265,   325,    64,  1889,   308,   265,   318,    65,  1889,
     336,  1846,    41,   173,   133,   791,  1927,   341,  1319,  1269,
     335,   207,   206,   448,   134,  1030,  1937,  1946,  1939,    35,
     446,  1058,  1330,  1633,  2035,  2013,  2012,  1872,  2005,  1874,
    1664,  1952,  1953,  1954,  1955,  2040,     5,     6,     7,  1945,
    1774,  1774,  1655,  2043,  1513,  1800,  1799,   520,     8,   754,
    1350,    20,   155,   697,  1473,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,   447,
    1849,  1852,  1921,  1470,  1410,  1471,  1997,   687,  1999,   685,
     553,  1028,  1409,    52,    53,    54,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,  1225,
    1612,   865,   420,  1019,   939,  1238,   564,   646,   899,  2030,
     862,  1737,  1145,   586,   587,   588,  1620,   645,   676,  2040,
    2040,   594,  2043,   596,   647,  2040,   648,   916,    34,   518,
    2040,   573,   920,   920,  1891,  2040,  1704,   610,   611,   612,
    2040,   625,  1718,  1702,  1559,  2040,  1390,  1379,   595,  1382,
    2040,  1903,  1566,   626,   627,  1823,    -1,  1911,    -1,    -1,
      -1,   130,   131,    -1,    -1,   638,   639,   640,   641,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
      -1,    -1,    -1,    -1,    -1,   678,   679,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,   177,
      69,    70,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,    80,   190,   191,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,   286,   287,   288,
     289,   110,    -1,    -1,   113,   114,    -1,   116,    -1,   118,
     119,   120,    -1,    -1,    -1,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,    -1,   163,   164,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,   173,   177,   175,    -1,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   186,   190,   191,
      -1,    -1,    -1,   192,   193,    -1,    -1,    -1,   197,   198,
     199,    -1,    -1,    -1,   887,    -1,    -1,    -1,   891,    -1,
     209,    -1,    -1,    -1,   897,    -1,    -1,   900,    -1,    -1,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,   231,    -1,    -1,   918,    -1,    -1,   921,   238,
      -1,    -1,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
      -1,   270,   955,   956,   273,    -1,   275,    -1,    -1,    -1,
     279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,
     289,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
      -1,   300,    -1,    -1,    -1,   304,   305,    -1,    -1,    -1,
      -1,    -1,   995,    -1,   997,    -1,    -1,    -1,    -1,    -1,
      -1,   320,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,
      -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,  1021,    -1,
      -1,   340,    -1,    -1,    -1,  1028,    -1,   346,    -1,    -1,
       5,     6,     7,     8,     9,    10,   177,    -1,    -1,   180,
     181,   182,   183,   184,   185,   186,   187,    22,    23,   190,
     191,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,   177,    -1,    41,   180,   181,   182,
     183,   184,   185,   186,   187,    -1,    -1,    52,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,  1145,   118,   119,   120,    -1,    -1,    -1,    -1,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1163,    -1,    -1,    -1,  1167,    -1,    -1,   142,   143,  1172,
      -1,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,    -1,   158,   159,   160,   161,    -1,   163,    -1,
     165,  1194,  1195,  1196,  1197,    -1,   171,   172,   173,    -1,
     175,  1204,     5,     6,     7,    -1,    -1,  1210,  1211,    -1,
    1213,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    52,
      53,    54,   227,    -1,    -1,  1258,   231,   134,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,
      -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,   279,   280,    -1,    -1,   283,    -1,
      -1,   286,   287,   288,   289,   192,   193,   194,   195,   196,
      -1,   296,    -1,   200,   201,   202,   203,   204,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,
      -1,   174,    -1,    -1,    -1,    -1,  1379,    -1,    -1,  1382,
      -1,    -1,    -1,    -1,    -1,    -1,   263,  1390,    -1,    -1,
      -1,    -1,    -1,    -1,  1397,    -1,    -1,  1400,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,  1409,  1410,  1411,  1412,
      -1,    -1,    -1,    20,    -1,    -1,  1419,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,   174,    -1,    -1,   134,    -1,    -1,    -1,
      -1,    -1,  1485,   286,   287,   288,   289,    52,    53,    54,
      -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    -1,    -1,
      -1,  1524,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,
      -1,    -1,   200,   201,   202,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    -1,    -1,  1566,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1598,    -1,  1600,    -1,    -1,
    1603,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1620,    -1,    -1,
      -1,  1624,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1633,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
     341,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
      -1,    -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,   341,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1700,  1701,  1702,
      -1,  1704,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1718,    -1,   134,    -1,    -1,
      -1,   286,   287,   288,   289,    -1,    -1,   192,   193,   194,
     195,   196,    -1,    -1,  1737,   200,   201,   202,   203,   204,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1766,    -1,    -1,    -1,    -1,    -1,  1772,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,
      -1,    -1,   341,   200,   201,   202,   203,   204,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,   302,    86,    -1,  1891,    -1,
      -1,  1894,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,    -1,  1912,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,   118,   119,
     120,    -1,  1925,    -1,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,
      -1,   171,   172,   173,    -1,   175,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,    -1,    -1,    -1,   197,   198,   199,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,
     280,    -1,    -1,   283,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,
     300,    -1,    -1,    -1,   304,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     320,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   344,     3,   346,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,
     118,   119,   120,    -1,    -1,    -1,   124,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,    -1,   163,   164,   165,    -1,    -1,
      -1,    -1,    -1,   171,    -1,   173,    -1,   175,   176,    -1,
     178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     188,   189,    -1,    -1,   192,   193,    -1,    -1,    -1,   197,
     198,   199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,
      -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,
     268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,
      -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,
      -1,    -1,   300,    -1,    -1,    -1,   304,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   320,    -1,    -1,    -1,    -1,   325,   326,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   344,     3,   346,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,    -1,   163,   164,   165,
      -1,    -1,    -1,    -1,    -1,   171,   172,   173,    -1,   175,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,
      -1,   197,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,   300,    -1,    -1,    -1,   304,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,   325,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,     3,
     346,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
     114,    -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,    -1,   163,
     164,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
      -1,   175,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
      -1,    -1,    -1,   197,   198,   199,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,   209,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,    -1,
      -1,    -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,
     264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,
      -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,
      -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,
      -1,    -1,   296,    -1,    -1,    -1,   300,    -1,    -1,    -1,
     304,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,
      -1,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     344,     3,   346,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,   114,    -1,   116,    -1,   118,   119,   120,    -1,
      -1,    -1,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,   173,    -1,   175,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,    -1,    -1,    -1,   197,   198,   199,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,    -1,
      -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,
      -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,    -1,
      -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,
      -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,    -1,
      -1,    -1,   304,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,
      -1,    -1,    -1,   325,   326,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   344,     3,   346,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,   118,   119,
     120,    -1,    -1,    -1,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,
      -1,   171,    -1,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,    -1,    -1,    -1,   197,   198,   199,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,
     300,    -1,    -1,    -1,   304,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     320,    -1,    -1,    -1,    -1,   325,   326,    -1,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,   346,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,
      -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,    -1,   163,   164,
     165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,    -1,    -1,   192,   193,    -1,
      -1,    -1,   197,   198,   199,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,
      -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,
      -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,    -1,    -1,   300,    -1,    -1,    -1,   304,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,
     325,   326,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,   346,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,   118,   119,
     120,    -1,    -1,    -1,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,
      -1,   171,    -1,   173,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,    -1,    -1,    -1,   197,   198,   199,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,
     300,    -1,    -1,    -1,   304,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     320,    -1,    -1,    -1,    -1,   325,   326,    -1,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,   346,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,
      -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,    -1,   163,   164,
     165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,
      -1,    -1,   197,   198,   199,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,
      -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,
      -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,    -1,    -1,   300,    -1,    -1,    -1,   304,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,
     325,   326,    -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,
      -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,
       3,   346,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,
      23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,   110,    -1,    -1,
     113,   114,    -1,   116,    -1,   118,   119,   120,    -1,    -1,
      -1,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,    -1,
     163,   164,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,
     173,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,    -1,    -1,    -1,   197,   198,   199,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,
      -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
      -1,    -1,    -1,    -1,   257,    -1,    -1,   260,    -1,    -1,
      -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,
     273,    -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,
      -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,
      -1,    -1,    -1,   296,    -1,    -1,    -1,   300,    -1,    -1,
      -1,   304,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,
      -1,    -1,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,
     333,    -1,    -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,
      -1,    -1,     3,   346,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,   114,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,   124,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,    -1,    -1,    -1,   197,   198,   199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,
      -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,
      -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,
      -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,
     301,    -1,    -1,   304,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
      -1,    -1,    -1,    -1,   325,   326,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,   346,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,    -1,   163,   164,   165,
      -1,    -1,    -1,    -1,    -1,   171,    -1,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,
      -1,   197,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,   300,    -1,    -1,    -1,   304,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,   325,
     326,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
     346,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,   114,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,   124,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,    -1,    -1,    -1,   197,   198,   199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,
      -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,
      -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,
      -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,
      -1,    -1,    -1,   304,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
      -1,    -1,    -1,    -1,   325,   326,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,   346,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,    -1,   163,   164,   165,
      -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,
      -1,   197,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,   300,    -1,    -1,    -1,   304,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,   325,
     326,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
     346,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,   114,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,   124,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,    -1,    -1,    -1,   197,   198,   199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,
      -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,
      -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,
      -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,
     301,    -1,    -1,   304,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
      -1,    -1,    -1,    -1,   325,   326,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,   346,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,    -1,   163,   164,   165,
      -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,
      -1,   197,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,   300,    -1,    -1,    -1,   304,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,   325,
     326,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
     346,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,   114,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,   124,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,    -1,    -1,    -1,   197,   198,   199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,
      -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,
      -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,
      -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,
      -1,    -1,    -1,   304,   305,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
      -1,    -1,    22,    23,   325,   326,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,
     120,    -1,   134,    -1,    -1,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,    -1,   158,   159,
     160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,   171,    -1,   173,    -1,   175,    -1,    -1,    -1,    -1,
     192,   193,   194,   195,   196,    -1,    -1,    -1,   200,   201,
     202,   203,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
     302,    -1,    -1,    -1,    -1,    -1,   296,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
     320,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   344,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,   118,   119,   120,    -1,    -1,   134,    -1,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
      -1,   158,   159,   160,   161,    -1,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,
      -1,    -1,   200,   201,   202,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,   230,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,   252,    -1,    -1,    -1,    -1,
     257,   258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,   274,   275,   276,
     277,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,   301,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,    -1,    -1,   303,    -1,    -1,   306,
     307,   308,    -1,    -1,    -1,    -1,   313,     5,     6,     7,
       8,     9,    10,   320,    -1,    -1,    -1,    -1,   325,   326,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,
     118,   119,   120,    -1,    -1,   134,    -1,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,    -1,
     158,   159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
      -1,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      -1,    -1,   230,   231,    -1,    -1,    -1,    -1,    -1,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,   252,    -1,    -1,    -1,    -1,   257,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,
     268,    -1,   270,    -1,    -1,   273,   274,   275,   276,   277,
      -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,   289,   301,    -1,    -1,    -1,    -1,    -1,   296,    -1,
      -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,   306,    -1,
      -1,    -1,    -1,   311,    -1,   313,     5,     6,     7,     8,
       9,    10,   320,    -1,    -1,    -1,    -1,   325,   326,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,   107,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,
     119,   120,   134,    -1,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,    -1,   158,
     159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    -1,    -1,   175,    -1,    -1,    -1,
     192,   193,   194,   195,   196,    -1,    -1,    -1,   200,   201,
     202,   203,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,   230,   231,    -1,    -1,    -1,    -1,    -1,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,   252,    -1,    -1,    -1,    -1,   257,   258,
     259,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
      -1,   270,    -1,    -1,   273,   274,   275,   276,   277,    -1,
     279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,
     289,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
      -1,   300,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,
      -1,    -1,   311,    -1,   313,     5,     6,     7,     8,     9,
      10,   320,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
     112,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,
     120,    -1,   134,    -1,    -1,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,    -1,   158,   159,
     160,   161,   174,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,   171,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,
     192,   193,   194,   195,   196,    -1,    -1,    -1,   200,   201,
     202,   203,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
     230,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,   252,    -1,    -1,    -1,    -1,   257,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,   274,   275,   276,   277,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,
     300,    -1,    -1,    -1,    -1,    -1,   306,    -1,   308,    -1,
      -1,    -1,    -1,   313,     5,     6,     7,     8,     9,    10,
     320,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,
     134,    -1,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,    -1,   158,   159,   160,
     161,    -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,   175,    -1,    -1,    -1,   192,   193,
     194,   195,   196,    -1,    -1,    -1,   200,   201,   202,   203,
     204,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,   225,   226,    -1,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,   230,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,   252,    -1,    -1,    -1,    -1,   257,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,
      -1,    -1,   273,   274,   275,   276,   277,    -1,   279,   280,
      -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,
      -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,
      -1,   312,   313,     5,     6,     7,     8,     9,    10,   320,
      -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,    -1,
     134,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,    -1,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,    -1,   158,   159,   160,   161,
      -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,
     184,    -1,    -1,   175,    -1,    -1,    -1,    -1,   192,   193,
     194,   195,   196,    -1,    -1,    -1,   200,   201,   202,   203,
     204,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,   230,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
     252,    -1,    -1,    -1,    -1,   257,   258,   259,   260,    -1,
      -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,
      -1,   273,   274,   275,   276,   277,    -1,   279,   280,    -1,
      -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,
      -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,    -1,
      -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,    -1,
      -1,   313,     5,     6,     7,     8,     9,    10,   320,    -1,
      -1,    -1,    -1,   325,   326,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,    -1,   118,   119,   120,    -1,   134,
      -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,    -1,   146,    -1,   148,   149,   150,   151,   152,
     153,   154,    -1,   156,    -1,   158,   159,   160,   161,   174,
     163,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,
      -1,    -1,   175,    -1,    -1,    -1,    -1,   192,   193,   194,
     195,   196,    -1,    -1,    -1,   200,   201,   202,   203,   204,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,
      -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
      -1,    -1,    -1,    -1,   257,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,
     273,   274,   275,   276,    -1,    -1,   279,   280,    -1,    -1,
      -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,
      -1,    -1,    -1,   296,    -1,    -1,    -1,   300,    -1,    -1,
      -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,   311,    -1,
     313,     5,     6,     7,     8,     9,    10,   320,    -1,    -1,
      -1,    -1,   325,   326,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,    -1,   118,   119,   120,    -1,   134,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,    -1,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,    -1,   158,   159,   160,   161,   174,   163,
      -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,
      -1,   175,    -1,    -1,    -1,    -1,   192,   193,   194,   195,
     196,    -1,    -1,    -1,   200,   201,   202,   203,   204,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,    -1,
      -1,    -1,    -1,   257,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,
     274,   275,   276,    -1,    -1,   279,   280,    -1,    -1,    -1,
      -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,
      -1,    -1,   296,    -1,    -1,    -1,   300,    -1,    -1,    -1,
      -1,    -1,   306,    -1,    -1,    -1,    -1,    -1,   312,   313,
      -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,
      -1,   325,   326,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,    -1,
     134,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,    -1,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,    -1,   158,   159,   160,   161,
     174,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,   192,   193,
     194,   195,   196,    -1,    -1,    -1,   200,   201,   202,   203,
     204,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,   221,
     222,   223,   224,    -1,    -1,   227,    -1,    -1,    -1,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,    -1,
      -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,
      -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,    -1,
      -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,
      -1,    -1,    -1,    -1,   296,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   320,    -1,
      -1,    -1,    -1,   325,   326,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,
     120,    -1,   134,    -1,    -1,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,    -1,   158,   159,
     160,   161,   174,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,   171,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,
     192,   193,   194,   195,   196,    -1,    -1,    -1,   200,   201,
     202,   203,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,   231,   232,   233,   234,   235,    -1,    -1,   238,    -1,
      -1,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
     320,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,
     118,   119,   120,   134,    -1,    -1,    -1,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,    -1,
     158,   159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,    -1,
      -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,
      -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,
     268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,
      -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,   320,    -1,    -1,    -1,    -1,   325,   326,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,   118,   119,   120,    -1,   134,    -1,    -1,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,    -1,   158,   159,   160,   161,   174,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,   175,
      -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,
      -1,    -1,   200,   201,   202,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,   320,    -1,    -1,    -1,    -1,   325,
     326,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,    -1,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,    -1,   158,   159,   160,   161,    -1,   163,
      -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,
      -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,    -1,
      -1,    -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,
     264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,
      -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,
      -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,
      -1,    -1,   296,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,   320,    -1,    -1,    -1,
      -1,   325,   326,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,    -1,
     134,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,    -1,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,    -1,   158,   159,   160,   161,
     174,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,   192,   193,
     194,   195,   196,    -1,    -1,    -1,   200,   201,   202,   203,
     204,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,    -1,
      -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,
      -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,    -1,
      -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,
      -1,    -1,    -1,    -1,   296,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   320,    -1,
      -1,    -1,    -1,   325,   326,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,
     120,    -1,    -1,    -1,    -1,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,    -1,   158,   159,
     160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,   171,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
     320,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,
     118,   119,   120,    -1,    -1,    -1,    -1,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,    -1,
     158,   159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,
      -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,
     268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,
      -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,   320,    -1,    -1,    -1,    -1,   325,   326,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,    -1,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,    -1,   158,   159,   160,   161,    -1,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,   320,    -1,    -1,    -1,    -1,   325,
     326,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,    -1,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,    -1,   158,   159,   160,   161,    -1,   163,
      -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,
      -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,   229,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,    -1,
      -1,    -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,
     264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,
      -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,
      -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,
      -1,    -1,   296,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,   320,    -1,    -1,    -1,
      -1,   325,   326,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,    -1,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,    -1,   158,   159,   160,   161,
      -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,    -1,
      -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,
      -1,   273,   274,   275,    -1,    -1,    -1,   279,   280,    -1,
      -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,
      -1,    -1,    -1,    -1,   296,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   320,    -1,
      -1,    -1,    -1,   325,   326,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,
     120,    -1,    -1,    -1,    -1,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,    -1,   158,   159,
     160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,   171,    -1,   173,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
     320,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,
     118,   119,   120,    -1,    -1,    -1,    -1,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,    -1,
     158,   159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,
      -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,
     268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,
      -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,   320,    -1,    -1,    -1,    -1,   325,   326,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,    -1,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,    -1,   158,   159,   160,   161,    -1,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,   229,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,   320,    -1,    -1,    -1,    -1,   325,
     326,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,    -1,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,    -1,   158,   159,   160,   161,    -1,   163,
      -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,
      -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,    -1,
      -1,    -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,
     264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,
      -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,
      -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,
      -1,    -1,   296,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,   320,    -1,    -1,    -1,
      -1,   325,   326,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,    -1,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,    -1,   158,   159,   160,   161,
      -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
      -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,    -1,
      -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,
      -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,    -1,
      -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,
      -1,    -1,    -1,    -1,   296,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   320,    -1,
      -1,    -1,    -1,   325,   326,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,
     120,    -1,    -1,    -1,    -1,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,    -1,   158,   159,
     160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,   171,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     320,    -1,    -1,    -1,    -1,   325,   326
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    64,    65,    66,    67,    77,    78,    79,
      80,    86,   133,   172,   173,   230,   239,   240,   242,   244,
     245,   246,   247,   248,   249,   252,   258,   259,   274,   277,
     313,   348,   354,   355,   356,   357,   358,   360,   362,   363,
     372,   377,   389,   394,   395,   401,   446,   449,   457,   478,
     492,   496,   497,   498,   506,   521,   522,   523,   541,   545,
     546,   547,   550,   670,   133,   111,     5,     6,     7,     8,
       9,    10,    22,    23,    26,    38,    41,    52,    63,    80,
      83,    86,    92,    97,    98,    99,   105,   113,   116,   118,
     119,   120,   125,   126,   142,   143,   146,   148,   149,   150,
     151,   152,   153,   154,   156,   158,   159,   160,   161,   163,
     165,   171,   175,   219,   220,   227,   231,   238,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   251,   257,   260,
     264,   267,   268,   270,   273,   275,   279,   280,   286,   287,
     288,   289,   296,   320,   325,   326,   638,   664,   665,   189,
     251,   532,   262,    81,   503,   503,   664,    79,    87,   542,
     543,   664,    66,   550,    67,    69,    70,   609,   610,   611,
     664,   638,   351,   350,   352,   353,   349,     5,    11,   668,
     671,     5,     6,     7,     8,     9,    10,    64,    65,    66,
      67,   189,   249,   272,   313,   373,   380,   381,   382,   384,
     385,   386,   662,   663,   258,   261,   378,   379,    58,    87,
      55,   115,   279,    11,   173,   234,   298,   441,   442,   514,
     541,   547,   653,   667,     0,    17,    55,    58,   103,   105,
     115,   165,   219,   220,   221,   222,   223,   224,   231,   232,
     233,   234,   235,   260,   273,   279,   282,   284,   321,   402,
     403,   406,   407,   440,    55,   115,   165,   189,   231,   232,
     233,   234,   235,   260,   273,   279,   284,   319,   321,   491,
      55,    56,    57,    63,   260,   273,   287,   635,   664,   219,
     220,   279,   361,   406,   438,   664,   133,   102,   168,   169,
     170,   566,   133,   638,   274,   342,     3,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    18,    19,
      27,    28,    44,    45,    46,    47,    48,    49,    50,    62,
     106,   110,   114,   124,   134,   135,   136,   137,   138,   140,
     141,   144,   145,   147,   157,   164,   173,   176,   192,   193,
     197,   198,   199,   206,   209,   286,   287,   288,   289,   300,
     304,   305,   344,   346,   528,   553,   564,   565,   573,   574,
     575,   576,   578,   580,   581,   583,   585,   587,   588,   589,
     590,   591,   592,   593,   594,   595,   608,   609,   612,   614,
     615,   616,   618,   619,   620,   621,   622,   635,   636,   637,
     639,   640,   642,   657,   660,   664,   669,   678,   679,   680,
     681,   682,   696,   703,   705,   708,   718,   719,   749,   638,
     190,   504,   504,   664,    88,    91,    97,   499,   500,   501,
     341,   544,   547,   173,   444,   445,   532,   174,   173,   342,
     444,   358,   358,   348,   348,   358,   173,   444,   444,   270,
     444,   111,   262,   281,   341,   281,   341,   265,   341,   266,
     266,   380,   373,    87,   499,   274,   664,   638,   638,   441,
     550,   262,   653,   262,    27,   262,   298,   314,   219,   220,
     664,   219,   220,   638,   233,   279,   279,   279,   279,   638,
     638,   638,   638,   638,   664,   227,   364,   664,   638,   638,
     638,   319,   279,   664,   638,   233,   165,   232,   233,   234,
     235,   638,   638,   638,   638,   638,   664,   638,   638,   638,
     638,   638,    42,    43,   495,   227,   664,   664,   296,   177,
     177,   341,     5,     6,     7,    20,    24,    25,    26,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    52,    53,
      54,   286,   287,   288,   289,   341,   627,   634,   655,   657,
     658,   659,   660,   104,   189,   251,   551,   551,   551,   297,
     567,   285,   535,   445,   533,   534,   661,   664,   664,   669,
     669,   669,   173,   173,    22,   173,   613,   613,   613,   613,
     613,   173,   589,   173,   125,   664,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   283,   541,
     547,   564,   574,   582,   609,   664,   574,   173,   591,   591,
     173,   173,   173,   591,   669,   173,   625,   173,   626,   192,
     193,   623,   301,   591,   647,   648,   173,   173,   574,   586,
     111,   262,   554,   555,   320,   617,   179,   177,   180,   181,
     182,   183,   184,   185,   186,   187,   190,   191,   638,   134,
     192,   193,   194,   195,   196,   200,   201,   202,   203,   204,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   263,   331,   342,   341,   173,   173,   173,
     669,   669,   342,   173,   250,   283,   442,   445,   524,    82,
      83,   281,   505,    89,    90,    92,    98,   341,   543,   438,
     320,   553,   174,   529,   591,   643,   611,   664,   299,   569,
     133,   133,   133,   173,   174,   527,   529,   531,   550,   271,
     387,   388,   662,   662,   387,   382,   165,   279,   383,   491,
     638,   386,   112,   112,   111,   111,   499,   255,   256,   404,
     172,   254,   274,   390,   116,   117,   118,   119,   120,   121,
     122,   123,   126,   320,   397,   399,   400,   252,   274,   277,
     278,   174,   638,   317,   669,   262,   638,   653,   298,   172,
      86,   320,   396,   398,   400,   638,   638,   638,   638,   638,
     237,   173,   173,   173,   173,   172,   370,   365,   664,   250,
     366,   227,   111,   173,   409,   410,   444,   444,   323,   324,
     479,   664,   638,   638,   233,   638,   638,   638,   638,   495,
     173,   493,   493,   493,   493,   495,   495,   495,   664,    58,
     289,   637,   664,   529,   438,   173,   173,    21,    22,   173,
     173,   173,    38,   173,   625,   626,   290,   291,   292,   293,
     294,   295,   628,   630,   632,   633,   664,   173,   173,   173,
     173,   570,   571,   591,   167,   552,   552,   552,   593,   652,
     667,   298,   568,   564,   177,   341,   555,   177,   342,   564,
     641,   641,    23,   174,   295,   628,   629,   112,   591,   592,
     591,   675,   676,   677,   675,   238,   155,   697,   723,   152,
     154,   721,   238,     3,   709,   592,   115,   720,   721,   675,
     173,   525,   174,   174,   174,   174,   341,   342,   591,   591,
     591,   668,   172,   624,   668,   624,   669,   564,   301,   645,
     646,   303,   647,   649,   591,   529,   644,   341,   345,    68,
     173,   344,   536,   556,   557,   589,   609,   638,   664,   548,
     549,   664,   535,   664,   564,   178,   188,   189,   574,   584,
     579,   591,   579,   579,   579,   173,   173,   100,   101,   577,
     577,   565,   574,   584,   587,   591,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   591,   110,
     176,   173,   206,   616,   174,   189,   206,   251,   591,   650,
     664,   650,     8,     9,    10,   206,   664,   283,   525,   524,
      82,    79,    88,    95,    96,   502,   668,   501,   174,   173,
     174,   341,    14,   593,   653,   243,   359,   174,   341,   172,
     341,   375,   172,   374,   638,   387,   387,   257,   404,   281,
     273,   104,   172,   652,   652,   652,   655,   399,   229,   279,
     280,   392,   393,    67,    88,   391,   393,   279,   393,   111,
      16,   512,   513,   512,   638,   444,   314,   653,   404,   172,
     655,   398,   173,   409,   409,   409,   409,   238,   206,   476,
     477,   664,   476,   476,   476,   261,    20,   268,   672,   673,
     365,   234,   182,   229,   412,   413,   414,   416,   419,   427,
     428,   439,   661,   664,    99,   405,   320,   320,    64,    65,
      67,   480,   265,   409,   493,   638,   495,   495,   495,   495,
     174,   494,   655,   655,   651,   668,   651,    23,   651,   651,
     651,   668,    53,   656,   669,   624,   624,   626,   625,   281,
     651,   668,   651,   651,   651,   341,   225,   226,   572,   104,
     550,   550,   550,   593,   653,   569,   589,   534,   535,   564,
     664,   320,   341,   111,   638,   158,   722,   341,   722,   722,
     664,   684,   173,   591,   698,   699,   700,   341,   592,   664,
     706,   146,   710,   722,   675,   566,   526,   529,   530,   174,
     341,   184,   185,   574,   341,   184,   111,   341,   174,   287,
     669,   174,   669,   633,   302,   591,   645,   649,   591,   312,
     341,   341,   174,   341,   574,   589,   609,   173,   536,   557,
     558,   341,    69,    70,    71,    73,    74,    76,   166,   537,
     539,   320,   559,   664,   559,   560,   560,   342,   341,   554,
     109,   561,   574,   107,   527,   527,   574,   574,   589,   110,
     332,   596,   597,   650,   174,   650,   174,   342,   341,   342,
     664,    93,    94,    88,   544,   529,   531,   261,   388,   111,
     376,   258,   376,   376,   376,   669,   257,   664,   664,   652,
     589,   653,   664,   664,   664,    90,    89,    90,   664,   638,
     413,   609,   110,   515,   315,   515,   444,   111,   257,   653,
     476,   265,   664,   174,   341,   655,   174,   174,   174,    56,
      62,   371,   274,   664,   666,   674,   354,   355,   367,   368,
     369,   372,   377,   389,   394,   492,   609,   638,   664,   174,
     341,   253,   269,   282,   436,   130,   131,   415,   655,   172,
     664,   441,   441,   322,   265,   638,   265,   408,   495,   174,
     341,   174,   174,   174,   174,   341,   174,   341,   174,   341,
     295,   628,   631,   174,   341,   174,   174,   174,   571,   173,
     655,   655,   591,   115,   154,   174,   675,   174,   174,   341,
     683,    83,   250,   591,   724,   725,   727,   728,   729,   266,
     341,   694,   320,   701,    84,   142,   704,   341,   707,   104,
     711,   731,   722,   174,   161,   732,   733,   722,   174,   341,
     173,   173,   173,   591,   591,   591,   591,   296,   529,   302,
     312,   591,   529,   529,   559,   560,   174,   550,   557,   537,
      75,   557,    75,    72,   538,   664,   173,   664,   549,   104,
     108,   563,   669,   174,   174,   190,   190,   104,   174,   102,
     598,   174,   174,   206,   650,   664,   174,   266,   371,   266,
      16,   669,   495,   495,   495,   252,   274,   320,   484,   669,
     111,   173,   316,   519,   520,   669,   669,   174,     3,    66,
      80,    86,   237,   240,   276,   300,   306,   311,   360,   362,
     363,   372,   377,   389,   394,   450,   453,   455,   456,   457,
     461,   463,   469,   471,   472,   492,   496,   497,   546,   664,
     664,   236,   241,   236,   664,   341,   369,   414,   664,   264,
     264,   445,   127,   132,   250,   417,   418,   421,   422,   424,
     425,   428,   267,     3,   172,   411,   172,   443,   438,   664,
     173,    77,   494,   654,   668,   668,   668,   626,   668,   562,
     639,   664,   174,   174,   174,   139,   591,   685,   691,   692,
     693,   723,   722,   250,   727,   174,   341,   320,   110,   148,
     150,   151,   695,   699,   722,   664,   702,   143,   143,   174,
     592,   722,   125,   149,   592,   712,   713,   714,   715,   716,
     731,   281,   174,   174,   530,   526,   527,   527,   341,   174,
     112,   174,   174,   341,   529,   174,   345,    75,   557,    16,
     265,   540,   557,   173,   666,   562,   564,   574,   574,   562,
     104,    85,   339,   599,   600,   174,   174,   328,   274,   250,
      99,   110,   176,   250,   669,   341,   519,   520,   173,   509,
     509,   341,   238,   237,   532,   238,   458,   459,   638,   279,
     442,   462,   564,   301,   466,   467,   591,   564,   310,   451,
     308,   343,   655,   279,   475,   655,     5,   475,   664,   445,
     445,   128,   423,   590,   421,   110,   176,   228,   269,   272,
     282,   435,   437,   173,    83,   171,   228,   330,   481,   438,
      64,    84,   252,   174,   174,   174,   174,   174,   341,   342,
     173,   341,   341,   694,   341,   174,   725,   664,   726,   265,
     265,   265,   265,   174,   174,   320,   730,   731,   341,   110,
     151,   717,   162,   174,   174,   174,   591,   591,   591,   559,
     557,   445,   564,   540,   666,   174,   570,   186,   333,   340,
     592,   601,   602,   603,   604,   257,   273,     3,   110,   110,
     423,   669,    83,   518,   174,   510,   511,   664,   512,   512,
     669,   669,   238,   553,   447,   664,   173,   173,   564,   303,
     466,   468,   301,   464,   465,   302,   451,   453,   564,   173,
     237,   241,   450,     4,   448,   669,   237,   241,   272,   320,
     110,   173,   264,   638,   420,   421,   171,   266,   327,   328,
     482,   483,   112,   486,   487,   174,    85,    85,   639,   664,
     591,   686,   687,   689,   691,   693,   685,   691,   110,    83,
     110,   110,   110,   664,   713,   265,   265,   174,    83,   160,
     163,   734,   735,   740,   174,   174,   174,   174,   602,   325,
     336,   336,   334,   607,   669,   664,   341,   229,   174,   341,
       3,   515,   515,   273,   447,   342,   460,   591,   442,   302,
     451,   312,   591,   464,   468,   451,   453,   133,   309,   474,
     661,   238,     5,   238,     5,   638,   129,   564,   444,   174,
     341,   279,   325,   485,   279,   485,   483,   329,   301,   489,
     174,   341,   320,   688,   341,   154,   730,   151,   151,   156,
     664,   741,     3,   736,   737,    83,   153,   156,   742,   743,
     745,   746,   190,    83,   109,   333,   338,   669,   511,    59,
     516,   516,   664,   664,   174,   341,   174,   451,   453,   300,
     302,   312,   303,   307,   470,   133,   312,   451,   174,   341,
     655,   447,   448,   447,   448,   444,   173,   426,   174,   113,
     434,   421,   484,   484,   484,   484,   325,   326,   488,   564,
     311,   360,   362,   372,   377,   454,   455,   490,   496,   497,
     546,   687,   664,   690,   691,   159,   738,   738,   156,   664,
     748,   737,   747,   744,   745,   333,   340,   592,   605,   606,
     337,   325,    60,   517,   517,   591,   133,   451,   300,   451,
     564,   312,   312,   312,   661,   434,   396,    39,    40,    71,
     433,   265,   430,   431,   432,   664,   664,   664,   664,   310,
     737,   739,   325,   335,   336,    61,   518,   518,   302,   306,
     308,   655,   432,   174,    64,    65,   265,   431,   265,   430,
     452,   318,   507,   451,   473,   664,    42,    43,    83,   274,
     429,   429,   312,   454,   173,   470,    41,   110,   250,   133,
     508,   653,   174,   341,   653
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
#line 616 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 626 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 4:
#line 631 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 640 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 6:
#line 645 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 655 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 8:
#line 660 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 670 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 679 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 11:
#line 680 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 12:
#line 685 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 13:
#line 686 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym); YYACCEPT; }
    break;

  case 14:
#line 687 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 15:
#line 688 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 16:
#line 689 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 17:
#line 690 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYABORT; }
    break;

  case 30:
#line 717 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(2) - (5)].l));
		append_list(l, (yyvsp[(3) - (5)].l));
		append_symbol(l, (yyvsp[(4) - (5)].sym));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
    break;

  case 32:
#line 727 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 33:
#line 728 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 34:
#line 733 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[(2) - (2)].l)); }
    break;

  case 35:
#line 734 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 36:
#line 739 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(1) - (2)].l) );
		append_type(l, &(yyvsp[(2) - (2)].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 37:
#line 744 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l) );
		append_type(l, &(yyvsp[(4) - (4)].type) );
		(yyval.l) = append_symbol((yyvsp[(1) - (4)].l), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 38:
#line 752 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, (yyvsp[(2) - (4)].sval) );
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 39:
#line 757 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 40:
#line 765 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 41:
#line 773 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 42:
#line 781 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 43:
#line 789 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 44:
#line 795 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 45:
#line 804 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (6)].l));
		append_symbol(l, (yyvsp[(4) - (6)].sym));
		append_symbol(l, (yyvsp[(5) - (6)].sym));
		append_list(l, (yyvsp[(6) - (6)].l));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
    break;

  case 46:
#line 811 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_int(l, (yyvsp[(4) - (4)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
    break;

  case 47:
#line 819 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (1)].sval) );
	  append_string((yyval.l), NULL ); }
    break;

  case 48:
#line 823 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[(2) - (2)].sval) ); }
    break;

  case 49:
#line 827 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (3)].sval) );
	  append_string((yyval.l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 51:
#line 836 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 52:
#line 837 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[(4) - (4)].sval) ); }
    break;

  case 53:
#line 841 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 55:
#line 846 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 56:
#line 848 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 62:
#line 854 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 63:
#line 855 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 64:
#line 859 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 65:
#line 860 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_role; }
    break;

  case 66:
#line 865 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
    break;

  case 67:
#line 875 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
    break;

  case 68:
#line 884 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 69:
#line 886 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 70:
#line 890 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 71:
#line 891 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 72:
#line 895 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 73:
#line 896 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 74:
#line 901 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 75:
#line 902 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 76:
#line 907 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
    break;

  case 77:
#line 915 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
    break;

  case 78:
#line 924 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 79:
#line 925 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 80:
#line 929 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 81:
#line 930 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 82:
#line 935 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (1)].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
    break;

  case 83:
#line 939 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (3)].l));
	  append_symbol((yyval.l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 84:
#line 945 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(L(), (yyvsp[(1) - (1)].i_val)); }
    break;

  case 85:
#line 947 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(append_int(L(), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val)); }
    break;

  case 86:
#line 951 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
    break;

  case 87:
#line 952 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
    break;

  case 88:
#line 956 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(2) - (2)].l)); }
    break;

  case 89:
#line 957 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[(1) - (1)].l)); }
    break;

  case 90:
#line 958 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[(1) - (1)].l)); }
    break;

  case 91:
#line 969 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 92:
#line 970 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 94:
#line 975 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 95:
#line 977 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 96:
#line 981 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
    break;

  case 97:
#line 982 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
    break;

  case 98:
#line 983 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[(2) - (2)].l)); }
    break;

  case 99:
#line 984 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 100:
#line 985 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 101:
#line 986 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
    break;

  case 102:
#line 990 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 103:
#line 992 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 104:
#line 996 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 105:
#line 997 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 106:
#line 1005 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 107:
#line 1010 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, (yyvsp[(6) - (6)].l)));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 108:
#line 1015 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 109:
#line 1020 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 110:
#line 1025 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 111:
#line 1030 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 112:
#line 1035 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 113:
#line 1040 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (4)].sval));
	  append_list(l, (yyvsp[(4) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 114:
#line 1045 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
    break;

  case 115:
#line 1050 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1062 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (4)].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[(2) - (4)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 117:
#line 1068 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 118:
#line 1075 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (7)].sval));
				  append_string(l, (yyvsp[(7) - (7)].sval));
				  append_int(l, (yyvsp[(2) - (7)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 119:
#line 1085 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
    break;

  case 120:
#line 1090 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
    break;

  case 121:
#line 1094 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
    break;

  case 122:
#line 1098 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[(2) - (4)].sval)); }
    break;

  case 123:
#line 1100 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  if (!strlen((yyvsp[(5) - (5)].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 124:
#line 1108 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 125:
#line 1116 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
    break;

  case 126:
#line 1121 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
    break;

  case 127:
#line 1126 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 128:
#line 1133 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 129:
#line 1134 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 130:
#line 1138 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 131:
#line 1139 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 132:
#line 1140 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 138:
#line 1162 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
    break;

  case 139:
#line 1173 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (3)].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
    break;

  case 140:
#line 1190 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
    break;

  case 141:
#line 1199 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 142:
#line 1200 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 143:
#line 1204 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 144:
#line 1205 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 145:
#line 1209 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 146:
#line 1210 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 147:
#line 1211 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 148:
#line 1215 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 149:
#line 1216 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
    break;

  case 150:
#line 1217 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[(3) - (3)].l_val)));  }
    break;

  case 151:
#line 1218 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[(3) - (3)].sym)));  }
    break;

  case 152:
#line 1219 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 153:
#line 1223 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 154:
#line 1224 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 155:
#line 1225 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
    break;

  case 156:
#line 1226 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 157:
#line 1227 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
    break;

  case 158:
#line 1228 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 159:
#line 1229 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
    break;

  case 160:
#line 1230 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
    break;

  case 161:
#line 1238 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (9)].sval));
	  append_int(l, (yyvsp[(2) - (9)].i_val));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
    break;

  case 162:
#line 1247 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 163:
#line 1248 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ordered_idx; }
    break;

  case 164:
#line 1249 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imprints_idx; }
    break;

  case 165:
#line 1250 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 166:
#line 1271 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval));
	  append_int(l, (yyvsp[(3) - (3)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
    break;

  case 167:
#line 1276 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (10)].sval));
	  append_string(l, (yyvsp[(6) - (10)].sval));
	  append_string(l, (yyvsp[(8) - (10)].sval));
	  append_string(l, (yyvsp[(10) - (10)].sval));
	  append_int(l, (yyvsp[(4) - (10)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
    break;

  case 168:
#line 1286 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 169:
#line 1287 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 170:
#line 1288 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
    break;

  case 171:
#line 1292 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 172:
#line 1293 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 173:
#line 1298 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 1309 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
      dlist *l = L();
      append_list(l, (yyvsp[(2) - (5)].l));
      append_symbol(l, (yyvsp[(5) - (5)].sym));
      (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE_LOADER, l);
    }
    break;

  case 175:
#line 1316 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_STREAM;
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
    { int commit_action = CA_COMMIT, tpe = SQL_MERGE_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 177:
#line 1336 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_REPLICA_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 178:
#line 1349 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_REMOTE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(4) - (6)].sym));
	  append_int(l, commit_action);
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 179:
#line 1359 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 180:
#line 1373 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 181:
#line 1374 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 182:
#line 1375 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 183:
#line 1376 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 184:
#line 1377 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 185:
#line 1378 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 186:
#line 1382 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_COMMIT; }
    break;

  case 187:
#line 1383 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DELETE; }
    break;

  case 188:
#line 1384 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_PRESERVE; }
    break;

  case 189:
#line 1385 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DROP; }
    break;

  case 190:
#line 1389 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[(2) - (3)].l)); }
    break;

  case 191:
#line 1390 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[(1) - (1)].l)); }
    break;

  case 192:
#line 1398 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (4)].l));
			  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym)); 
			  append_int((yyval.l), (yyvsp[(4) - (4)].i_val)); }
    break;

  case 193:
#line 1404 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 194:
#line 1405 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 195:
#line 1406 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 196:
#line 1411 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 197:
#line 1413 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 203:
#line 1420 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 204:
#line 1421 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 205:
#line 1426 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
			dlist *l = L();
			append_string(l, (yyvsp[(1) - (3)].sval));
			append_type(l, &(yyvsp[(2) - (3)].type));
			append_list(l, (yyvsp[(3) - (3)].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 206:
#line 1434 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 207:
#line 1486 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 209:
#line 1492 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 210:
#line 1494 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 211:
#line 1500 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (6)].sval) );
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
    break;

  case 212:
#line 1508 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 213:
#line 1510 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 217:
#line 1516 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 218:
#line 1520 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 219:
#line 1526 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 220:
#line 1534 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 221:
#line 1563 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 222:
#line 1600 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 223:
#line 1601 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 224:
#line 1608 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 225:
#line 1617 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 226:
#line 1618 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 227:
#line 1622 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 228:
#line 1623 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 229:
#line 1624 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 230:
#line 1625 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 231:
#line 1626 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 232:
#line 1630 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(3) - (3)].i_val) << 8); }
    break;

  case 233:
#line 1634 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 234:
#line 1638 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
    break;

  case 235:
#line 1639 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 236:
#line 1640 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 237:
#line 1641 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 238:
#line 1642 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 239:
#line 1646 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 240:
#line 1647 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 241:
#line 1648 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 242:
#line 1649 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 243:
#line 1653 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 244:
#line 1654 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 245:
#line 1658 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
    break;

  case 246:
#line 1659 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
    break;

  case 247:
#line 1660 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
    break;

  case 248:
#line 1661 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
    break;

  case 249:
#line 1664 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(2) - (5)].l) );
			  append_list(l, (yyvsp[(3) - (5)].l) );
			  append_int(l, (yyvsp[(4) - (5)].i_val) );
			  append_int(l, (yyvsp[(5) - (5)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 251:
#line 1677 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[(2) - (2)].l)); }
    break;

  case 252:
#line 1679 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[(3) - (3)].l)); }
    break;

  case 253:
#line 1683 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(5) - (8)].l) );
			  append_list(l, (yyvsp[(3) - (8)].l) );
			  append_list(l, (yyvsp[(6) - (8)].l) );
			  append_int(l, (yyvsp[(7) - (8)].i_val) );
			  append_int(l, (yyvsp[(8) - (8)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 254:
#line 1695 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 255:
#line 1700 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 256:
#line 1702 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 257:
#line 1706 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 258:
#line 1711 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_int(l, (yyvsp[(6) - (6)].bval));
	  append_int(l, TRUE);	/* persistent view */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 260:
#line 1723 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 263:
#line 1732 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 264:
#line 1733 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 265:
#line 1737 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 267:
#line 1742 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 268:
#line 1747 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				append_list(l, (yyvsp[(3) - (6)].l));
				append_string(l, (yyvsp[(6) - (6)].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
    break;

  case 269:
#line 1754 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 272:
#line 1769 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 273:
#line 1782 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 274:
#line 1794 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
			else {
				char *msg = sql_message("Language name R, C, P(ython), PYTHON_MAP or J(avascript):expected, received '%c'", l);
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

  case 275:
#line 1828 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 276:
#line 1842 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 277:
#line 1854 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
			else {
				char *msg = sql_message("Language name R, C, P(ython), PYTHON_MAP or J(avascript):expected, received '%c'", l);
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

  case 278:
#line 1889 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 279:
#line 1901 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 280:
#line 1912 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(8) - (9)].sval);
			/* other languages here if we ever get to it */
			if (l == 'P' || l == 'p')
            {
                lang = FUNC_LANG_PY;
            }
			else
				yyerror(m, sql_message("Language name P(ython) expected, received '%c'", l));

			append_list(f, (yyvsp[(3) - (9)].l));
			append_list(f, (yyvsp[(5) - (9)].l));
			append_symbol(f, NULL);
			append_list(f, NULL); 
			append_list(f, append_string(L(), (yyvsp[(9) - (9)].sval)));
			append_int(f, F_LOADER);
			append_int(f, lang);
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 281:
#line 1936 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[(1) - (1)].sym)); }
    break;

  case 282:
#line 1940 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(2) - (5)].l),(yyvsp[(3) - (5)].sym)); }
    break;

  case 283:
#line 1944 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(3) - (6)].l),(yyvsp[(4) - (6)].sym)); }
    break;

  case 284:
#line 1959 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 285:
#line 1961 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 286:
#line 1965 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 287:
#line 1967 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 314:
#line 2015 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 315:
#line 2019 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[(2) - (2)].sym));}
    break;

  case 316:
#line 2024 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L(); 
		  append_list( l, (yyvsp[(1) - (4)].l));
		  append_list( l, (yyvsp[(3) - (4)].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
    break;

  case 318:
#line 2035 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = L();}
    break;

  case 319:
#line 2036 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 320:
#line 2038 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 321:
#line 2043 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[(2) - (2)].sym)); }
    break;

  case 324:
#line 2050 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[(3) - (4)].sym)); }
    break;

  case 325:
#line 2055 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (6)].sym)),(yyvsp[(3) - (6)].l)),(yyvsp[(4) - (6)].l))); }
    break;

  case 326:
#line 2061 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[(2) - (5)].l)),(yyvsp[(3) - (5)].l))); }
    break;

  case 327:
#line 2069 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 328:
#line 2077 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 329:
#line 2079 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 330:
#line 2084 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 331:
#line 2092 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 332:
#line 2094 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 333:
#line 2098 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 334:
#line 2099 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 335:
#line 2109 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (7)].sym));
		  append_list(l, (yyvsp[(4) - (7)].l));
		  append_symbol(l, (yyvsp[(5) - (7)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
    break;

  case 336:
#line 2120 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 337:
#line 2122 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[(2) - (2)].l)); }
    break;

  case 338:
#line 2125 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  append_symbol(l, (yyvsp[(5) - (5)].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
    break;

  case 339:
#line 2139 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 340:
#line 2155 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 342:
#line 2160 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 344:
#line 2166 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[(1) - (2)].sval));
			  	  append_type((yyval.l), &(yyvsp[(2) - (2)].type));
				}
    break;

  case 345:
#line 2171 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
				  append_string((yyval.l), (yyvsp[(3) - (4)].sval));
			  	  append_type((yyval.l), &(yyvsp[(4) - (4)].type));
				}
    break;

  case 346:
#line 2179 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(3) - (4)].l)); }
    break;

  case 347:
#line 2181 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(1) - (1)].type))); }
    break;

  case 349:
#line 2186 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
    break;

  case 350:
#line 2190 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 351:
#line 2195 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *p = L();
			  append_string(p, (yyvsp[(3) - (4)].sval));
			  append_type(p, &(yyvsp[(4) - (4)].type));
			  (yyval.l) = append_list((yyvsp[(1) - (4)].l), p); }
    break;

  case 352:
#line 2200 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[(1) - (2)].sval));
			  append_type(p, &(yyvsp[(2) - (2)].type));
			  (yyval.l) = append_list(l, p); }
    break;

  case 353:
#line 2250 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 354:
#line 2262 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 355:
#line 2263 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 356:
#line 2267 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
    break;

  case 357:
#line 2268 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
    break;

  case 358:
#line 2269 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
    break;

  case 359:
#line 2270 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[(3) - (3)].l)); }
    break;

  case 360:
#line 2274 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 361:
#line 2275 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 362:
#line 2279 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 363:
#line 2281 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].l)); }
    break;

  case 364:
#line 2286 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 365:
#line 2287 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 366:
#line 2288 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 367:
#line 2289 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 372:
#line 2304 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[(1) - (3)].i_val));
	  append_symbol((yyval.l), (yyvsp[(2) - (3)].sym));
	  append_list((yyval.l), (yyvsp[(3) - (3)].l));
	}
    break;

  case 373:
#line 2311 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 374:
#line 2312 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 375:
#line 2316 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 376:
#line 2317 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 377:
#line 2321 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 378:
#line 2322 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 379:
#line 2327 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 380:
#line 2330 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 381:
#line 2335 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
    break;

  case 382:
#line 2341 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );	
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
    break;

  case 383:
#line 2347 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
    break;

  case 384:
#line 2353 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
    break;

  case 385:
#line 2359 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_LOADER );
	  (yyval.l) = l; }
    break;

  case 386:
#line 2368 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 387:
#line 2373 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = (yyvsp[(2) - (3)].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 388:
#line 2378 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 389:
#line 2386 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(6) - (6)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 390:
#line 2394 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 391:
#line 2402 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 392:
#line 2410 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_LOADER );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 393:
#line 2418 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
    break;

  case 394:
#line 2423 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
    break;

  case 395:
#line 2427 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 396:
#line 2428 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 397:
#line 2429 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[(3) - (3)].l) ); }
    break;

  case 398:
#line 2430 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, (yyvsp[(3) - (3)].l) ); }
    break;

  case 399:
#line 2434 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = NULL;}
    break;

  case 400:
#line 2435 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = (yyvsp[(2) - (3)].l);}
    break;

  case 401:
#line 2436 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = L(); }
    break;

  case 402:
#line 2440 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_type(l, &(yyvsp[(1) - (1)].type) );
				  (yyval.l)= l; }
    break;

  case 403:
#line 2443 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { append_type((yyvsp[(3) - (3)].l), &(yyvsp[(1) - (3)].type));
				  (yyval.l) = (yyvsp[(3) - (3)].l); }
    break;

  case 404:
#line 2448 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 405:
#line 2449 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 406:
#line 2450 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 413:
#line 2469 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	  (yyval.sym) = (yyvsp[(1) - (1)].sym);
	  m->type = Q_TRANS;					}
    break;

  case 414:
#line 2476 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[(3) - (3)].bval));  }
    break;

  case 415:
#line 2478 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[(2) - (2)].sval)); }
    break;

  case 416:
#line 2480 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[(3) - (3)].sval)); }
    break;

  case 417:
#line 2482 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[(3) - (4)].bval)), (yyvsp[(4) - (4)].sval) )); }
    break;

  case 418:
#line 2486 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 419:
#line 2488 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(4) - (4)].i_val)); }
    break;

  case 420:
#line 2490 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 421:
#line 2494 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; }
    break;

  case 423:
#line 2500 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 424:
#line 2502 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(1) - (3)].i_val) | (yyvsp[(3) - (3)].i_val)); }
    break;

  case 425:
#line 2507 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_readonly; }
    break;

  case 426:
#line 2508 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_writable; }
    break;

  case 427:
#line 2509 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_serializable; }
    break;

  case 428:
#line 2510 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; /* not supported */ }
    break;

  case 433:
#line 2521 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 434:
#line 2522 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 435:
#line 2526 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 436:
#line 2527 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 437:
#line 2528 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 438:
#line 2532 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 439:
#line 2533 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 440:
#line 2538 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 441:
#line 2552 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 442:
#line 2566 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_COPYLOADER, l ); }
    break;

  case 443:
#line 2571 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  if ((yyvsp[(2) - (9)].l) != NULL) {
	  	yyerror(m, "COPY INTO: cannot pass number of records when using binary COPY INTO");
		YYABORT;
	  }
	  append_list(l, (yyvsp[(5) - (9)].l));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  append_int(l, (yyvsp[(9) - (9)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_BINCOPYFROM, l ); }
    break;

  case 444:
#line 2582 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 445:
#line 2589 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 446:
#line 2600 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 447:
#line 2601 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 448:
#line 2606 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(L(), (yyvsp[(1) - (1)].l_val)); }
    break;

  case 449:
#line 2608 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l_val)); }
    break;

  case 450:
#line 2613 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 451:
#line 2614 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 452:
#line 2618 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 453:
#line 2619 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 454:
#line 2624 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (1)].sval) );
			  (yyval.l) = l; }
    break;

  case 455:
#line 2628 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (2)].sval) );
			  append_string(l, (yyvsp[(2) - (2)].sval) );
			  (yyval.l) = l; }
    break;

  case 456:
#line 2636 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 457:
#line 2641 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 458:
#line 2646 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (5)].sval));
				  append_string(l, (yyvsp[(5) - (5)].sval));
				  (yyval.l) = l; }
    break;

  case 459:
#line 2651 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (7)].sval));
				  append_string(l, (yyvsp[(5) - (7)].sval));
				  append_string(l, sql2str((yyvsp[(7) - (7)].sval)));
				  (yyval.l) = l; }
    break;

  case 460:
#line 2659 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 461:
#line 2660 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 462:
#line 2664 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 463:
#line 2665 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (2)].l_val)), 0); }
    break;

  case 464:
#line 2666 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[(2) - (2)].l_val)); }
    break;

  case 465:
#line 2668 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(3) - (4)].l_val)); }
    break;

  case 466:
#line 2670 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(4) - (4)].l_val)); }
    break;

  case 467:
#line 2674 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 468:
#line 2675 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 469:
#line 2679 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 470:
#line 2680 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 471:
#line 2684 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 472:
#line 2685 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 473:
#line 2689 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 474:
#line 2690 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 475:
#line 2694 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 476:
#line 2695 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 477:
#line 2699 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 478:
#line 2701 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 479:
#line 2707 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
    break;

  case 480:
#line 2716 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
    break;

  case 481:
#line 2758 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 482:
#line 2766 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 483:
#line 2775 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 484:
#line 2777 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 485:
#line 2779 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(2) - (2)].l)); }
    break;

  case 487:
#line 2785 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(2) - (3)].l)); }
    break;

  case 488:
#line 2787 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (5)].l), (yyvsp[(4) - (5)].l)); }
    break;

  case 489:
#line 2791 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 490:
#line 2793 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 491:
#line 2797 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 492:
#line 2799 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 493:
#line 2804 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 498:
#line 2833 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 499:
#line 2834 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 500:
#line 2835 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 501:
#line 2839 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 502:
#line 2841 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 503:
#line 2846 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym) );
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 504:
#line 2851 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
    break;

  case 505:
#line 2858 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 506:
#line 2859 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 507:
#line 2866 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 508:
#line 2868 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
    break;

  case 509:
#line 2873 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
    break;

  case 510:
#line 2881 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[(2) - (5)].i_val));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 511:
#line 2889 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[(3) - (5)].i_val));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 512:
#line 2899 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 513:
#line 2900 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 514:
#line 2901 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (2)].i_val); }
    break;

  case 515:
#line 2905 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 516:
#line 2906 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 517:
#line 2910 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 518:
#line 2911 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 519:
#line 2912 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 520:
#line 2916 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 521:
#line 2918 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[(2) - (2)].l)); }
    break;

  case 523:
#line 2942 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (3)].l));
	  	append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
    break;

  case 524:
#line 2951 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 525:
#line 2952 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 526:
#line 2957 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[(1) - (6)].sval)));
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 530:
#line 2980 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (4)].bval), (yyvsp[(3) - (4)].l), NULL,
		(yyvsp[(4) - (4)].l)->h->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 531:
#line 2991 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (6)].bval), (yyvsp[(3) - (6)].l), (yyvsp[(5) - (6)].l),
		(yyvsp[(6) - (6)].l)->h->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 532:
#line 3002 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 533:
#line 3032 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 534:
#line 3034 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 536:
#line 3044 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
    break;

  case 537:
#line 3053 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
    break;

  case 538:
#line 3062 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
    break;

  case 539:
#line 3068 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 541:
#line 3073 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 542:
#line 3074 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 543:
#line 3075 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 544:
#line 3080 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 545:
#line 3082 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 546:
#line 3084 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(4) - (5)].l); }
    break;

  case 548:
#line 3094 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[(1) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(4) - (4)].sym)); }
    break;

  case 549:
#line 3102 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 550:
#line 3103 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[(2) - (2)].l)); }
    break;

  case 551:
#line 3107 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 552:
#line 3109 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 553:
#line 3113 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (2)].l));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 554:
#line 3118 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  	  	  append_int(l, 0);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 555:
#line 3124 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(2) - (3)].sym));
		  	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  	  append_int(l, 1);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 556:
#line 3130 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 557:
#line 3140 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
				  (yyval.sym) = (yyvsp[(2) - (3)].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[(2) - (3)].sym);
				  	sn->name = (yyvsp[(3) - (3)].sym);
					sn->lateral = 1;
				  } else {
				  	append_symbol((yyvsp[(2) - (3)].sym)->data.lval, (yyvsp[(3) - (3)].sym));
	  				append_int((yyvsp[(2) - (3)].sym)->data.lval, 1);
				  }
				}
    break;

  case 558:
#line 3152 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
    break;

  case 559:
#line 3156 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym);
				  append_symbol((yyvsp[(1) - (1)].sym)->data.lval, NULL); }
    break;

  case 560:
#line 3160 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->caching = 0; }
    break;

  case 561:
#line 3162 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[(3) - (5)].sym));
		append_symbol(op, (yyvsp[(5) - (5)].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
    break;

  case 562:
#line 3173 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (5)].sval));
		  	  	  append_list(l, (yyvsp[(4) - (5)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 563:
#line 3178 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (2)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 564:
#line 3183 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (4)].sval));
		  	  	  append_list(l, (yyvsp[(3) - (4)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 565:
#line 3188 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (1)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 566:
#line 3195 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 567:
#line 3196 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 568:
#line 3200 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 569:
#line 3201 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) );}
    break;

  case 570:
#line 3205 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(1) - (1)].l))); }
    break;

  case 571:
#line 3208 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(3) - (3)].l))); }
    break;

  case 572:
#line 3213 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 573:
#line 3214 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 574:
#line 3220 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
    break;

  case 575:
#line 3224 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 576:
#line 3229 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
    break;

  case 577:
#line 3233 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 578:
#line 3237 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 579:
#line 3239 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l)); }
    break;

  case 580:
#line 3243 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 581:
#line 3244 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 582:
#line 3248 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 583:
#line 3252 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 584:
#line 3253 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 585:
#line 3257 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 586:
#line 3261 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 587:
#line 3262 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val)));
			}
    break;

  case 588:
#line 3266 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[(2) - (2)].sval),NULL)));
			}
    break;

  case 589:
#line 3270 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 590:
#line 3274 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 591:
#line 3276 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 592:
#line 3281 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  append_int(l, (yyvsp[(2) - (2)].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
    break;

  case 593:
#line 3289 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 594:
#line 3290 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 595:
#line 3291 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 605:
#line 3308 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 606:
#line 3324 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 607:
#line 3329 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, (yyvsp[(2) - (3)].sval));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 608:
#line 3336 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 609:
#line 3346 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
    break;

  case 610:
#line 3353 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
    break;

  case 611:
#line 3362 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 612:
#line 3363 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 613:
#line 3364 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 614:
#line 3369 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 615:
#line 3376 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 616:
#line 3383 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 617:
#line 3390 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 618:
#line 3400 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (1)].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
    break;

  case 619:
#line 3404 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 620:
#line 3419 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[(1) - (4)].sym) );}
    break;

  case 621:
#line 3420 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[(1) - (3)].sym) ); }
    break;

  case 622:
#line 3425 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 623:
#line 3431 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 624:
#line 3437 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 625:
#line 3442 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 626:
#line 3450 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 627:
#line 3452 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 628:
#line 3458 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, (yyvsp[(2) - (4)].sval));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 629:
#line 3465 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 630:
#line 3474 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 631:
#line 3475 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 632:
#line 3476 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 633:
#line 3480 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[(2) - (2)].sym) ); }
    break;

  case 634:
#line 3484 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 635:
#line 3485 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym));  }
    break;

  case 636:
#line 3489 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 637:
#line 3494 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(1) - (3)].l));
		  append_list(l, (yyvsp[(2) - (3)].l));
		  append_list(l, (yyvsp[(3) - (3)].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
    break;

  case 638:
#line 3502 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 639:
#line 3504 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 640:
#line 3506 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 642:
#line 3513 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 643:
#line 3520 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 644:
#line 3527 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 645:
#line 3534 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 646:
#line 3541 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 647:
#line 3548 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 648:
#line 3555 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
			  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 649:
#line 3562 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 650:
#line 3569 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 651:
#line 3576 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 652:
#line 3583 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 653:
#line 3590 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 654:
#line 3596 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 655:
#line 3603 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 656:
#line 3610 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 657:
#line 3617 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 658:
#line 3624 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 659:
#line 3631 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 660:
#line 3638 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 661:
#line 3645 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 662:
#line 3651 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 663:
#line 3658 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 664:
#line 3665 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 665:
#line 3672 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 666:
#line 3679 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 667:
#line 3681 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 668:
#line 3702 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 669:
#line 3706 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 672:
#line 3712 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
    break;

  case 673:
#line 3714 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
    break;

  case 675:
#line 3717 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[(1) - (1)].l)); }
    break;

  case 679:
#line 3721 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[(4) - (4)].l)); }
    break;

  case 687:
#line 3733 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
    break;

  case 688:
#line 3803 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[(1) - (5)].sym)), (yyvsp[(4) - (5)].l))); }
    break;

  case 689:
#line 3808 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[(1) - (3)].l) ); }
    break;

  case 691:
#line 3814 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[(1) - (3)].sym)), (yyvsp[(2) - (3)].sym)), (yyvsp[(3) - (3)].sym)); }
    break;

  case 692:
#line 3818 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 693:
#line 3820 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 694:
#line 3824 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 695:
#line 3826 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 696:
#line 3830 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 697:
#line 3832 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[(2) - (3)].l), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val))); }
    break;

  case 698:
#line 3836 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_ROWS; }
    break;

  case 699:
#line 3837 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_RANGE; }
    break;

  case 700:
#line 3841 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(1) - (1)].sym)), _symbol_create_int(SQL_FRAME, -1)); }
    break;

  case 701:
#line 3842 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 702:
#line 3846 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 703:
#line 3847 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 704:
#line 3848 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 705:
#line 3852 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 706:
#line 3857 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(2) - (4)].sym)), (yyvsp[(4) - (4)].sym)); }
    break;

  case 707:
#line 3861 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 708:
#line 3862 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 709:
#line 3863 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 710:
#line 3867 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 711:
#line 3871 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NONE; }
    break;

  case 712:
#line 3872 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
    break;

  case 713:
#line 3873 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_GROUP; }
    break;

  case 714:
#line 3874 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_TIES; }
    break;

  case 715:
#line 3875 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
    break;

  case 716:
#line 3879 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 717:
#line 3884 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 718:
#line 3888 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 719:
#line 3915 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 720:
#line 3916 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 721:
#line 3921 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 722:
#line 3922 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "left"); }
    break;

  case 723:
#line 3923 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "right"); }
    break;

  case 724:
#line 3924 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "insert"); }
    break;

  case 725:
#line 3929 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[(3) - (6)].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 726:
#line 3936 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 727:
#line 3941 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 728:
#line 3946 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 729:
#line 3951 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 730:
#line 3956 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 731:
#line 3963 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 732:
#line 3964 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 733:
#line 3969 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 734:
#line 3979 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 735:
#line 3989 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 736:
#line 3996 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 737:
#line 4003 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 738:
#line 4010 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 739:
#line 4017 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 740:
#line 4029 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 741:
#line 4031 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 742:
#line 4036 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 743:
#line 4041 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, (yyvsp[(1) - (3)].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 744:
#line 4046 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 745:
#line 4051 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
  		  append_string(l, (yyvsp[(2) - (2)].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
    break;

  case 746:
#line 4058 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 747:
#line 4059 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 748:
#line 4064 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 749:
#line 4085 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 750:
#line 4086 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 751:
#line 4091 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 752:
#line 4092 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 753:
#line 4097 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 754:
#line 4098 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 755:
#line 4105 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 756:
#line 4111 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 757:
#line 4117 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 758:
#line 4123 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 759:
#line 4129 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (4)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 760:
#line 4135 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 762:
#line 4145 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 763:
#line 4146 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = -1; }
    break;

  case 764:
#line 4147 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 765:
#line 4151 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 766:
#line 4152 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 767:
#line 4163 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 768:
#line 4165 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0+1; }
    break;

  case 769:
#line 4169 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 770:
#line 4171 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 6+1; }
    break;

  case 771:
#line 4175 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
    break;

  case 772:
#line 4177 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 773:
#line 4183 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 774:
#line 4191 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = iyear; }
    break;

  case 775:
#line 4192 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imonth; }
    break;

  case 776:
#line 4193 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = iday; }
    break;

  case 777:
#line 4194 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ihour; }
    break;

  case 778:
#line 4195 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imin; }
    break;

  case 780:
#line 4200 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = isec; }
    break;

  case 781:
#line 4205 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 782:
#line 4211 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (1)].i_val)), 0);  }
    break;

  case 783:
#line 4214 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 784:
#line 4220 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 785:
#line 4223 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 786:
#line 4229 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[(1) - (3)].l)), (yyvsp[(3) - (3)].l) ); }
    break;

  case 787:
#line 4232 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list( L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 788:
#line 4236 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 792:
#line 4262 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(1) - (1)].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
    break;

  case 793:
#line 4268 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 794:
#line 4333 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 795:
#line 4364 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

		    while (bits > 0 &&
			   (bits == sizeof(value) * 8 ||
			    (one << (bits - 1)) > value))
			  bits--;

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

  case 796:
#line 4427 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 797:
#line 4466 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 798:
#line 4483 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 799:
#line 4499 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 800:
#line 4515 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 802:
#line 4532 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 803:
#line 4549 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 804:
#line 4566 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 805:
#line 4583 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 806:
#line 4604 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
    break;

  case 807:
#line 4608 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
    break;

  case 808:
#line 4614 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 809:
#line 4659 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 810:
#line 4660 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (3)].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 811:
#line 4664 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (5)].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[(1) - (5)].sval)), 
						(yyvsp[(3) - (5)].sval)), 
					(yyvsp[(5) - (5)].sval))
				;}
    break;

  case 812:
#line 4675 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 813:
#line 4678 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 814:
#line 4683 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[(1) - (5)].sval)), (yyvsp[(3) - (5)].sval)), (yyvsp[(5) - (5)].sval));}
    break;

  case 815:
#line 4691 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 816:
#line 4697 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 818:
#line 4709 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[(3) - (6)].sym)), (yyvsp[(5) - (6)].sym))); }
    break;

  case 819:
#line 4714 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[(3) - (4)].l)); }
    break;

  case 820:
#line 4716 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (5)].sym)),(yyvsp[(3) - (5)].l)),(yyvsp[(4) - (5)].sym))); }
    break;

  case 821:
#line 4722 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[(2) - (4)].l)),(yyvsp[(3) - (4)].sym))); }
    break;

  case 822:
#line 4730 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 823:
#line 4732 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 824:
#line 4737 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (3)].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[(3) - (3)].sym));
			}
    break;

  case 825:
#line 4741 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 826:
#line 4747 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 827:
#line 4755 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 828:
#line 4757 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 829:
#line 4762 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 830:
#line 4770 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 831:
#line 4772 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 832:
#line 4776 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 833:
#line 4777 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 835:
#line 4787 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 836:
#line 4798 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 837:
#line 4808 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 838:
#line 4818 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 839:
#line 4829 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
    break;

  case 840:
#line 4831 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
    break;

  case 841:
#line 4835 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
    break;

  case 842:
#line 4837 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 843:
#line 4839 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 844:
#line 4841 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
    break;

  case 845:
#line 4849 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
    break;

  case 846:
#line 4851 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
    break;

  case 847:
#line 4859 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
    break;

  case 848:
#line 4860 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
    break;

  case 849:
#line 4861 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
    break;

  case 850:
#line 4862 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
    break;

  case 851:
#line 4863 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
    break;

  case 852:
#line 4865 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
    break;

  case 853:
#line 4867 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 854:
#line 4880 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 855:
#line 4897 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 856:
#line 4899 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 857:
#line 4913 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 858:
#line 4932 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 859:
#line 4933 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 860:
#line 4934 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
    break;

  case 863:
#line 4937 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 864:
#line 4939 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 865:
#line 4940 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 866:
#line 4942 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 867:
#line 4944 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 868:
#line 4955 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 869:
#line 4970 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 870:
#line 4983 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometry", 0, 0 )) {
			yyerror(m, "\b22000!type (geometry) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 871:
#line 4990 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 872:
#line 5005 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 873:
#line 5020 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometrya", 0, 0 )) {
			yyerror(m, "\b22000!type (geometrya) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 874:
#line 5027 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 875:
#line 5047 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 876:
#line 5059 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 877:
#line 5075 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 878:
#line 5089 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 879:
#line 5090 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (2)].sval); }
    break;

  case 880:
#line 5094 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 881:
#line 5095 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 882:
#line 5096 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 883:
#line 5099 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 884:
#line 5100 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 887:
#line 5108 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 888:
#line 5109 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 889:
#line 5110 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 890:
#line 5111 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 891:
#line 5112 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 892:
#line 5113 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 893:
#line 5117 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 894:
#line 5118 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 895:
#line 5119 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 896:
#line 5120 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 897:
#line 5121 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 898:
#line 5122 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 899:
#line 5123 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 901:
#line 5128 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "large"); }
    break;

  case 902:
#line 5129 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "name"); }
    break;

  case 903:
#line 5130 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "object"); }
    break;

  case 904:
#line 5131 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "password"); }
    break;

  case 905:
#line 5132 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "path"); }
    break;

  case 906:
#line 5133 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "precision"); }
    break;

  case 907:
#line 5134 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
    break;

  case 908:
#line 5135 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "role"); }
    break;

  case 909:
#line 5136 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "size"); }
    break;

  case 910:
#line 5137 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "type"); }
    break;

  case 911:
#line 5138 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "release"); }
    break;

  case 912:
#line 5139 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "value"); }
    break;

  case 913:
#line 5140 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "zone"); }
    break;

  case 914:
#line 5142 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "action"); }
    break;

  case 915:
#line 5143 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "as"); }
    break;

  case 916:
#line 5144 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
    break;

  case 917:
#line 5145 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "column"); }
    break;

  case 918:
#line 5146 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
    break;

  case 919:
#line 5147 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
    break;

  case 920:
#line 5148 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "increment"); }
    break;

  case 921:
#line 5149 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
    break;

  case 922:
#line 5150 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
    break;

  case 923:
#line 5151 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "plan"); }
    break;

  case 924:
#line 5152 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "schema"); }
    break;

  case 925:
#line 5153 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "start"); }
    break;

  case 926:
#line 5154 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "statement"); }
    break;

  case 927:
#line 5155 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "table"); }
    break;

  case 928:
#line 5157 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cache"); }
    break;

  case 929:
#line 5158 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "data"); }
    break;

  case 930:
#line 5159 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
    break;

  case 931:
#line 5160 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "match"); }
    break;

  case 932:
#line 5161 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "options"); }
    break;

  case 933:
#line 5162 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "row"); }
    break;

  case 934:
#line 5163 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "key"); }
    break;

  case 935:
#line 5164 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "language"); }
    break;

  case 936:
#line 5165 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "level"); }
    break;

  case 937:
#line 5166 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "session"); }
    break;

  case 938:
#line 5167 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "date"); }
    break;

  case 939:
#line 5168 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "time"); }
    break;

  case 940:
#line 5169 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
    break;

  case 941:
#line 5170 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "interval"); }
    break;

  case 942:
#line 5171 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
    break;

  case 943:
#line 5173 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
    break;

  case 944:
#line 5174 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "execute"); }
    break;

  case 945:
#line 5175 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "explain"); }
    break;

  case 946:
#line 5176 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "debug"); }
    break;

  case 947:
#line 5177 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "trace"); }
    break;

  case 948:
#line 5178 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "text"); }
    break;

  case 949:
#line 5179 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
    break;

  case 950:
#line 5180 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "no"); }
    break;

  case 951:
#line 5182 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "strip"); }
    break;

  case 952:
#line 5183 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
    break;

  case 953:
#line 5184 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "passing"); }
    break;

  case 954:
#line 5185 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "nil"); }
    break;

  case 955:
#line 5186 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "ref"); }
    break;

  case 956:
#line 5187 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "absent"); }
    break;

  case 957:
#line 5188 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "empty"); }
    break;

  case 958:
#line 5189 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "document"); }
    break;

  case 959:
#line 5190 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "element"); }
    break;

  case 960:
#line 5191 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "content"); }
    break;

  case 961:
#line 5192 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
    break;

  case 962:
#line 5193 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "returning"); }
    break;

  case 963:
#line 5194 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "location"); }
    break;

  case 964:
#line 5195 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "id"); }
    break;

  case 965:
#line 5196 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "according"); }
    break;

  case 966:
#line 5197 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "uri"); }
    break;

  case 967:
#line 5198 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "filter"); }
    break;

  case 968:
#line 5199 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
    break;

  case 969:
#line 5200 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temp"); }
    break;

  case 970:
#line 5201 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
    break;

  case 971:
#line 5202 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
    break;

  case 972:
#line 5203 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "storage"); }
    break;

  case 973:
#line 5204 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
    break;

  case 974:
#line 5208 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 975:
#line 5210 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 976:
#line 5215 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 977:
#line 5238 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 978:
#line 5258 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 979:
#line 5291 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 980:
#line 5293 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { char *s = strconcat((yyvsp[(1) - (2)].sval),(yyvsp[(2) - (2)].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
    break;

  case 981:
#line 5301 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 982:
#line 5308 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (3)].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 983:
#line 5313 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (4)].i_val));
  	  append_list(l, (yyvsp[(3) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 984:
#line 5327 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 986:
#line 5332 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[(2) - (2)].l)); }
    break;

  case 989:
#line 5343 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 990:
#line 5345 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1002:
#line 5367 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
    break;

  case 1003:
#line 5375 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
    break;

  case 1004:
#line 5383 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
    break;

  case 1005:
#line 5393 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_list(l, (yyvsp[(5) - (7)].l));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
    break;

  case 1006:
#line 5403 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 1007:
#line 5405 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1008:
#line 5409 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1009:
#line 5413 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (6)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (6)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(6) - (6)].l)); }
    break;

  case 1010:
#line 5417 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1011:
#line 5421 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1012:
#line 5425 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1013:
#line 5429 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(2) - (2)].l)); }
    break;

  case 1015:
#line 5439 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1016:
#line 5443 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1017:
#line 5445 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1018:
#line 5455 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (2)].sval));
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1019:
#line 5462 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1020:
#line 5463 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1023:
#line 5476 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[(1) - (2)].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[(2) - (2)].i_val)); 	}
    break;

  case 1024:
#line 5483 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1025:
#line 5485 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1027:
#line 5493 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1028:
#line 5494 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 1029:
#line 5498 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1030:
#line 5499 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1031:
#line 5500 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1032:
#line 5501 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 1033:
#line 5502 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 1034:
#line 5509 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (7)].sym));
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_int(l, (yyvsp[(5) - (7)].i_val));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
    break;

  case 1035:
#line 5519 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1036:
#line 5520 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 1037:
#line 5525 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 1038:
#line 5527 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 1039:
#line 5532 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (2)].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[(2) - (2)].sval)); }
    break;

  case 1040:
#line 5537 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1041:
#line 5541 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1042:
#line 5542 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1043:
#line 5546 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1044:
#line 5553 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_int(l, (yyvsp[(3) - (6)].i_val) );
	  append_symbol(l, (yyvsp[(4) - (6)].sym));
	  append_int(l, (yyvsp[(5) - (6)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
    break;

  case 1045:
#line 5560 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1046:
#line 5561 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1047:
#line 5568 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_symbol(l, (yyvsp[(5) - (7)].sym));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
    break;

  case 1049:
#line 5580 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1050:
#line 5582 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1051:
#line 5593 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1066:
#line 5639 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
    break;

  case 1067:
#line 5650 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1069:
#line 5655 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1070:
#line 5659 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1071:
#line 5660 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1072:
#line 5664 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1073:
#line 5665 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1074:
#line 5666 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1075:
#line 5681 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1076:
#line 5685 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1077:
#line 5687 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1082:
#line 5710 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { char *s = strconcat("xmlns:", (yyvsp[(3) - (3)].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1083:
#line 5719 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1084:
#line 5723 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1114:
#line 5819 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 13832 "y.tab.c"
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


#line 5840 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"

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


