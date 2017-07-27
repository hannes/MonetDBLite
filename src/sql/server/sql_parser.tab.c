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
     REPLACE = 563,
     AS = 564,
     TRIGGER = 565,
     OF = 566,
     BEFORE = 567,
     AFTER = 568,
     ROW = 569,
     STATEMENT = 570,
     sqlNEW = 571,
     OLD = 572,
     EACH = 573,
     REFERENCING = 574,
     OVER = 575,
     PARTITION = 576,
     CURRENT = 577,
     EXCLUDE = 578,
     FOLLOWING = 579,
     PRECEDING = 580,
     OTHERS = 581,
     TIES = 582,
     RANGE = 583,
     UNBOUNDED = 584
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
#define REPLACE 563
#define AS 564
#define TRIGGER 565
#define OF 566
#define BEFORE 567
#define AFTER 568
#define ROW 569
#define STATEMENT 570
#define sqlNEW 571
#define OLD 572
#define EACH 573
#define REFERENCING 574
#define OVER 575
#define PARTITION 576
#define CURRENT 577
#define EXCLUDE 578
#define FOLLOWING 579
#define PRECEDING 580
#define OTHERS 581
#define TIES 582
#define RANGE 583
#define UNBOUNDED 584




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
#line 862 "y.tab.c"
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
#line 881 "y.tab.c"

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
#define YYFINAL  227
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   16882

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  348
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  407
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2095

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   584

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   208,   194,     2,
     173,   174,   206,   192,   342,   193,   343,   207,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   344,     2,
       2,   177,     2,   347,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   345,     2,   346,   196,     2,     2,     2,     2,     2,
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
     337,   338,   339,   340,   341
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    12,    13,    18,    19,    24,
      25,    29,    30,    34,    37,    38,    40,    43,    45,    47,
      49,    53,    54,    57,    58,    62,    64,    66,    68,    70,
      72,    74,    76,    78,    80,    82,    84,    90,    92,    93,
      95,    98,   101,   104,   109,   114,   119,   124,   128,   133,
     137,   142,   147,   155,   161,   163,   166,   170,   172,   173,
     178,   179,   181,   183,   186,   188,   190,   192,   194,   196,
     197,   201,   203,   205,   212,   219,   221,   225,   226,   230,
     231,   235,   236,   239,   246,   253,   254,   258,   259,   263,
     265,   269,   271,   275,   278,   281,   284,   286,   288,   291,
     293,   295,   297,   301,   303,   305,   308,   311,   314,   316,
     318,   322,   324,   326,   333,   340,   346,   352,   359,   366,
     373,   378,   385,   396,   401,   405,   413,   419,   424,   430,
     435,   441,   447,   451,   455,   459,   461,   462,   465,   468,
     471,   473,   475,   477,   479,   481,   486,   490,   495,   497,
     500,   502,   505,   508,   512,   514,   517,   519,   523,   527,
     529,   533,   536,   538,   541,   543,   546,   548,   550,   560,
     562,   564,   566,   567,   571,   582,   583,   585,   587,   588,
     592,   598,   605,   611,   617,   623,   631,   638,   640,   642,
     645,   648,   651,   654,   655,   660,   665,   669,   673,   675,
     680,   681,   685,   688,   690,   694,   696,   698,   700,   702,
     704,   706,   708,   712,   715,   716,   718,   720,   723,   730,
     732,   736,   738,   740,   742,   745,   747,   750,   756,   758,
     759,   763,   766,   767,   770,   773,   775,   777,   780,   783,
     787,   791,   792,   794,   796,   799,   802,   803,   805,   807,
     809,   810,   813,   816,   818,   820,   823,   829,   831,   834,
     838,   847,   852,   854,   858,   861,   868,   870,   874,   876,
     878,   879,   883,   884,   886,   890,   897,   901,   903,   905,
     917,   927,   939,   950,   962,   974,   984,   992,  1002,  1004,
    1010,  1017,  1018,  1022,  1023,  1027,  1029,  1031,  1033,  1035,
    1037,  1039,  1041,  1043,  1045,  1047,  1049,  1051,  1053,  1055,
    1057,  1059,  1061,  1063,  1065,  1067,  1069,  1071,  1073,  1075,
    1077,  1079,  1082,  1085,  1090,  1092,  1093,  1095,  1099,  1102,
    1104,  1106,  1111,  1118,  1124,  1129,  1131,  1134,  1139,  1141,
    1144,  1145,  1148,  1156,  1157,  1160,  1166,  1175,  1176,  1179,
    1180,  1182,  1185,  1190,  1195,  1197,  1199,  1201,  1202,  1207,
    1210,  1220,  1222,  1224,  1226,  1228,  1230,  1234,  1235,  1238,
    1240,  1243,  1248,  1253,  1258,  1263,  1264,  1266,  1267,  1269,
    1273,  1274,  1278,  1280,  1282,  1283,  1288,  1290,  1295,  1299,
    1304,  1308,  1312,  1316,  1322,  1326,  1332,  1339,  1345,  1351,
    1357,  1363,  1368,  1372,  1376,  1380,  1384,  1385,  1389,  1392,
    1394,  1398,  1399,  1401,  1403,  1405,  1407,  1409,  1411,  1413,
    1415,  1417,  1421,  1424,  1428,  1433,  1437,  1442,  1446,  1447,
    1449,  1451,  1455,  1458,  1461,  1465,  1469,  1472,  1475,  1478,
    1480,  1482,  1483,  1486,  1490,  1491,  1492,  1496,  1511,  1525,
    1532,  1542,  1549,  1556,  1557,  1562,  1564,  1568,  1569,  1573,
    1575,  1579,  1581,  1584,  1585,  1589,  1595,  1603,  1604,  1606,
    1607,  1610,  1613,  1618,  1623,  1624,  1628,  1629,  1631,  1632,
    1635,  1636,  1639,  1641,  1645,  1647,  1651,  1656,  1663,  1668,
    1674,  1675,  1678,  1681,  1683,  1687,  1693,  1695,  1699,  1701,
    1705,  1707,  1709,  1711,  1713,  1715,  1716,  1718,  1720,  1722,
    1726,  1730,  1734,  1735,  1738,  1742,  1747,  1752,  1758,  1764,
    1765,  1767,  1770,  1771,  1773,  1775,  1777,  1779,  1782,  1785,
    1787,  1791,  1795,  1797,  1802,  1804,  1806,  1808,  1813,  1820,
    1826,  1828,  1832,  1834,  1840,  1846,  1852,  1856,  1858,  1859,
    1861,  1863,  1864,  1866,  1872,  1874,  1879,  1880,  1883,  1885,
    1889,  1892,  1895,  1899,  1902,  1906,  1908,  1910,  1911,  1917,
    1923,  1926,  1931,  1933,  1934,  1936,  1937,  1941,  1943,  1947,
    1948,  1951,  1955,  1957,  1961,  1963,  1964,  1968,  1969,  1972,
    1975,  1976,  1979,  1982,  1983,  1986,  1989,  1992,  1994,  1998,
    2001,  2002,  2004,  2006,  2008,  2010,  2012,  2014,  2016,  2018,
    2020,  2022,  2024,  2027,  2029,  2033,  2037,  2044,  2051,  2052,
    2054,  2056,  2060,  2064,  2068,  2072,  2074,  2078,  2083,  2087,
    2093,  2099,  2107,  2115,  2117,  2121,  2126,  2131,  2133,  2135,
    2137,  2140,  2142,  2146,  2150,  2154,  2158,  2163,  2167,  2171,
    2176,  2180,  2182,  2186,  2190,  2194,  2198,  2202,  2206,  2210,
    2214,  2218,  2222,  2226,  2230,  2234,  2238,  2242,  2246,  2250,
    2254,  2258,  2261,  2265,  2269,  2273,  2277,  2280,  2283,  2287,
    2289,  2291,  2293,  2295,  2297,  2299,  2301,  2303,  2305,  2307,
    2312,  2314,  2316,  2318,  2320,  2322,  2324,  2326,  2328,  2334,
    2338,  2340,  2344,  2345,  2349,  2350,  2354,  2355,  2359,  2361,
    2363,  2365,  2367,  2370,  2372,  2375,  2378,  2383,  2386,  2388,
    2391,  2394,  2395,  2399,  2402,  2405,  2409,  2412,  2416,  2421,
    2423,  2427,  2429,  2431,  2433,  2435,  2442,  2445,  2448,  2451,
    2454,  2457,  2458,  2461,  2470,  2479,  2486,  2493,  2500,  2504,
    2513,  2515,  2519,  2521,  2525,  2529,  2532,  2533,  2536,  2538,
    2540,  2544,  2546,  2550,  2552,  2556,  2561,  2568,  2574,  2580,
    2585,  2592,  2594,  2596,  2598,  2599,  2603,  2604,  2608,  2609,
    2613,  2614,  2616,  2620,  2624,  2626,  2628,  2630,  2632,  2634,
    2636,  2638,  2641,  2643,  2646,  2649,  2652,  2656,  2658,  2661,
    2663,  2665,  2667,  2669,  2671,  2673,  2675,  2677,  2679,  2682,
    2687,  2692,  2694,  2697,  2700,  2703,  2706,  2708,  2710,  2715,
    2717,  2721,  2727,  2729,  2733,  2739,  2746,  2753,  2755,  2762,
    2767,  2773,  2778,  2780,  2784,  2788,  2792,  2797,  2799,  2802,
    2807,  2809,  2812,  2813,  2816,  2818,  2820,  2822,  2824,  2826,
    2828,  2830,  2832,  2837,  2842,  2847,  2849,  2854,  2856,  2858,
    2860,  2862,  2864,  2866,  2871,  2878,  2880,  2885,  2892,  2894,
    2897,  2899,  2901,  2903,  2905,  2910,  2912,  2917,  2924,  2926,
    2931,  2933,  2938,  2945,  2947,  2949,  2951,  2953,  2955,  2957,
    2960,  2962,  2964,  2968,  2970,  2974,  2976,  2978,  2980,  2982,
    2984,  2986,  2988,  2990,  2992,  2994,  2996,  2998,  3000,  3002,
    3004,  3006,  3008,  3010,  3012,  3014,  3016,  3018,  3020,  3022,
    3024,  3026,  3028,  3030,  3032,  3034,  3036,  3038,  3040,  3042,
    3044,  3046,  3048,  3050,  3052,  3054,  3056,  3058,  3060,  3062,
    3064,  3066,  3068,  3070,  3072,  3074,  3076,  3078,  3080,  3082,
    3084,  3086,  3088,  3090,  3092,  3094,  3096,  3098,  3100,  3102,
    3104,  3106,  3108,  3110,  3112,  3114,  3116,  3118,  3120,  3122,
    3124,  3126,  3128,  3130,  3132,  3134,  3136,  3138,  3140,  3142,
    3144,  3146,  3148,  3150,  3152,  3154,  3156,  3160,  3162,  3164,
    3166,  3168,  3171,  3174,  3178,  3183,  3184,  3186,  3189,  3191,
    3193,  3195,  3199,  3201,  3203,  3205,  3207,  3209,  3211,  3213,
    3215,  3217,  3219,  3221,  3227,  3233,  3239,  3247,  3248,  3251,
    3256,  3263,  3268,  3271,  3276,  3279,  3281,  3286,  3288,  3292,
    3295,  3296,  3299,  3301,  3303,  3306,  3308,  3312,  3314,  3315,
    3318,  3322,  3326,  3330,  3334,  3339,  3347,  3348,  3351,  3353,
    3357,  3360,  3362,  3363,  3366,  3368,  3375,  3378,  3381,  3389,
    3391,  3392,  3395,  3404,  3406,  3407,  3411,  3413,  3415,  3419,
    3421,  3423,  3426,  3431,  3432,  3434,  3438,  3442,  3448,  3455,
    3457,  3459,  3461,  3463,  3464,  3467,  3470,  3475,  3477,  3481,
    3483,  3485,  3487,  3489,  3493,  3496,  3499,  3500,  3502,  3505,
    3508,  3509,  3511,  3517,  3519,  3521,  3525,  3529,  3531,  3533,
    3534,  3537,  3539,  3542,  3544,  3545,  3547,  3549,  3552,  3553,
    3555,  3558,  3561,  3564,  3566,  3568
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     349,     0,    -1,   362,   133,    -1,    -1,   248,   350,   362,
     133,    -1,    -1,   245,   351,   362,   133,    -1,    -1,   244,
     352,   362,   133,    -1,    -1,   246,   353,   349,    -1,    -1,
     247,   354,   349,    -1,   675,   133,    -1,    -1,   133,    -1,
       1,   133,    -1,    51,    -1,   230,    -1,   355,    -1,   230,
     179,   320,    -1,    -1,   306,   106,    -1,    -1,   306,   176,
     106,    -1,   252,    -1,   274,    -1,   239,    -1,   367,    -1,
     376,    -1,   381,    -1,   398,    -1,   496,    -1,   393,    -1,
     364,    -1,   366,    -1,   242,   643,   448,   573,   363,    -1,
     461,    -1,    -1,   243,    -1,   361,   365,    -1,   361,   410,
      -1,   442,   660,    -1,   365,   342,   442,   660,    -1,   360,
     669,   177,   568,    -1,   360,   449,   177,   594,    -1,   360,
      63,   227,   669,    -1,   360,   273,   669,    -1,   360,   640,
     177,   669,    -1,   360,   260,   669,    -1,   360,   287,   296,
      58,    -1,   360,   287,   296,   642,    -1,   355,   273,   358,
     368,   370,   677,   371,    -1,   359,   273,   357,   643,   499,
      -1,   669,    -1,   227,   369,    -1,   669,   227,   369,    -1,
     669,    -1,    -1,   250,    20,   274,   669,    -1,    -1,   372,
      -1,   373,    -1,   372,   373,    -1,   376,    -1,   381,    -1,
     398,    -1,   496,    -1,   393,    -1,    -1,   172,   261,   375,
      -1,    56,    -1,    62,    -1,   258,   384,   281,   391,   378,
     380,    -1,   258,   377,   281,   391,   379,   380,    -1,   667,
      -1,   377,   342,   667,    -1,    -1,   172,   258,   266,    -1,
      -1,   172,   261,   266,    -1,    -1,   111,   375,    -1,   259,
     382,   384,   111,   391,   380,    -1,   259,   383,   377,   111,
     391,   380,    -1,    -1,   258,   266,   112,    -1,    -1,   261,
     266,   112,    -1,   385,    -1,   388,   265,   387,    -1,   386,
      -1,   386,   342,   386,    -1,   313,   111,    -1,   313,   262,
      -1,   279,   643,    -1,   643,    -1,   495,    -1,   189,   270,
      -1,   189,    -1,   389,    -1,   390,    -1,   389,   342,   390,
      -1,    67,    -1,    64,    -1,    65,   448,    -1,    66,   448,
      -1,   272,   448,    -1,   249,    -1,   392,    -1,   391,   342,
     392,    -1,   271,    -1,   667,    -1,   277,   279,   643,   278,
     397,   417,    -1,   277,   279,   643,   278,   279,   643,    -1,
     277,   279,   643,   277,   395,    -1,   277,   279,   643,   252,
     396,    -1,   277,   279,   643,   274,    88,    90,    -1,   277,
     279,   643,   274,    67,    90,    -1,   277,   279,   643,   274,
      88,    89,    -1,   277,    55,   669,   394,    -1,   277,    55,
     669,   254,   281,   669,    -1,   277,    55,   274,   408,   257,
     674,    16,   329,   257,   674,    -1,   172,   408,   257,   674,
      -1,   274,   273,   669,    -1,   172,   408,   257,   674,   274,
     273,   669,    -1,   397,   669,   274,   250,   427,    -1,   397,
     669,   274,   110,    -1,   397,   669,   274,   176,   110,    -1,
     397,   669,   252,   250,    -1,   397,   669,   274,    99,     3,
      -1,   397,   669,   274,    99,   110,    -1,   397,   669,   499,
      -1,   229,   669,   499,    -1,   279,   669,   499,    -1,   280,
      -1,    -1,   355,   407,    -1,   355,   410,    -1,   355,   444,
      -1,   450,    -1,   453,    -1,   405,    -1,   399,    -1,   482,
      -1,   355,   115,   643,   400,    -1,   359,   115,   643,    -1,
     277,   115,   643,   401,    -1,   402,    -1,   400,   402,    -1,
     403,    -1,   401,   403,    -1,   321,   660,    -1,    86,   172,
     658,    -1,   404,    -1,   321,   660,    -1,   117,    -1,   117,
     172,   658,    -1,   117,   172,   594,    -1,   404,    -1,   116,
     104,   657,    -1,   119,   657,    -1,   122,    -1,   118,   657,
      -1,   121,    -1,   126,   657,    -1,   120,    -1,   123,    -1,
     355,   406,   319,   669,   265,   643,   173,   442,   174,    -1,
     282,    -1,   103,    -1,   105,    -1,    -1,   260,   669,   374,
      -1,    55,   669,   172,   408,   257,   674,   238,   674,   273,
     669,    -1,    -1,   256,    -1,   255,    -1,    -1,    99,   669,
       3,    -1,   279,   358,   643,   413,   409,    -1,   279,   358,
     643,   111,   234,   614,    -1,   221,   279,   358,   643,   413,
      -1,   222,   279,   358,   643,   413,    -1,   224,   279,   358,
     643,   413,    -1,   223,   279,   358,   643,   413,   265,     3,
      -1,   411,   279,   358,   643,   413,   412,    -1,   220,    -1,
     219,    -1,    58,   220,    -1,    58,   219,    -1,    17,   220,
      -1,    17,   219,    -1,    -1,   265,    77,    64,    85,    -1,
     265,    77,    84,    85,    -1,   265,    77,   252,    -1,   173,
     416,   174,    -1,   414,    -1,   448,   321,   445,   415,    -1,
      -1,   172,    83,   171,    -1,   172,   171,    -1,   418,    -1,
     416,   342,   418,    -1,   420,    -1,   431,    -1,   417,    -1,
     423,    -1,   443,    -1,   130,    -1,   131,    -1,   666,   660,
     421,    -1,   666,   419,    -1,    -1,   422,    -1,   425,    -1,
     422,   425,    -1,   669,   172,   267,   173,   424,   174,    -1,
     425,    -1,   424,   342,   425,    -1,   426,    -1,   428,    -1,
     429,    -1,   250,   427,    -1,   595,    -1,   432,   439,    -1,
     127,   128,   321,   129,   430,    -1,   132,    -1,    -1,   173,
     400,   174,    -1,   432,   440,    -1,    -1,   229,   669,    -1,
      83,    41,    -1,    42,    -1,    43,    -1,   274,   110,    -1,
     274,   250,    -1,   265,    65,   433,    -1,   265,    64,   433,
      -1,    -1,   434,    -1,   435,    -1,   435,   434,    -1,   434,
     435,    -1,    -1,    71,    -1,    39,    -1,    40,    -1,    -1,
     113,   437,    -1,   176,   110,    -1,   110,    -1,   282,    -1,
     269,   264,    -1,   272,   643,   448,   438,   436,    -1,   441,
      -1,   282,   449,    -1,   269,   264,   449,    -1,   253,   264,
     449,   272,   643,   448,   438,   436,    -1,   228,   173,   568,
     174,    -1,   669,    -1,   442,   342,   669,    -1,   182,   643,
      -1,   284,   643,   448,   321,   445,   447,    -1,   446,    -1,
     173,   445,   174,    -1,   551,    -1,   545,    -1,    -1,   172,
     228,   266,    -1,    -1,   449,    -1,   173,   442,   174,    -1,
     355,   231,   643,   237,   238,   669,    -1,   669,   343,   669,
      -1,     4,    -1,   674,    -1,   356,   233,   643,   173,   480,
     174,   236,   479,   237,   238,   451,    -1,   356,   233,   643,
     173,   480,   174,   236,   479,   454,    -1,   356,   233,   643,
     173,   480,   174,   236,   479,   241,     5,   452,    -1,   356,
     165,   233,   643,   173,   480,   174,   237,   238,   451,    -1,
     356,   235,   643,   173,   480,   174,   236,   479,   237,   238,
     451,    -1,   356,   235,   643,   173,   480,   174,   236,   479,
     241,     5,   452,    -1,   356,   232,   643,   173,   480,   174,
     237,   238,   451,    -1,   356,   232,   643,   173,   480,   174,
     454,    -1,   356,   234,   643,   173,   480,   174,   241,     5,
     452,    -1,   457,    -1,   311,   455,   457,   133,   312,    -1,
     311,   310,   455,   457,   133,   312,    -1,    -1,   455,   457,
     133,    -1,    -1,   456,   458,   133,    -1,   501,    -1,   500,
      -1,   367,    -1,   376,    -1,   381,    -1,   398,    -1,   496,
      -1,   393,    -1,   364,    -1,   366,    -1,   459,    -1,   550,
      -1,   501,    -1,   500,    -1,   376,    -1,   381,    -1,   364,
      -1,   366,    -1,   459,    -1,   550,    -1,   461,    -1,   460,
      -1,   475,    -1,   473,    -1,   467,    -1,   465,    -1,   240,
     462,    -1,   240,   614,    -1,   463,   173,   464,   174,    -1,
     643,    -1,    -1,   596,    -1,   464,   342,   596,    -1,   276,
     466,    -1,   446,    -1,   568,    -1,   279,   173,   446,   174,
      -1,   300,   596,   469,   472,   312,   300,    -1,   300,   471,
     472,   312,   300,    -1,   301,   596,   302,   455,    -1,   468,
      -1,   469,   468,    -1,   301,   568,   302,   455,    -1,   470,
      -1,   471,   470,    -1,    -1,   303,   455,    -1,   306,   568,
     302,   455,   474,   312,   306,    -1,    -1,   303,   455,    -1,
     307,   568,   302,   455,   474,    -1,   476,   308,   568,   309,
     455,   312,   308,   477,    -1,    -1,   669,   344,    -1,    -1,
     669,    -1,   666,   660,    -1,   478,   342,   666,   660,    -1,
     279,   173,   478,   174,    -1,   660,    -1,   481,    -1,   206,
      -1,    -1,   481,   342,   669,   660,    -1,   669,   660,    -1,
     355,   322,   643,   483,   484,   265,   643,   485,   490,    -1,
     324,    -1,   325,    -1,    67,    -1,    64,    -1,    65,    -1,
      65,   323,   442,    -1,    -1,   331,   486,    -1,   487,    -1,
     486,   487,    -1,   329,   489,   488,   669,    -1,   328,   489,
     488,   669,    -1,   329,   279,   488,   669,    -1,   328,   279,
     488,   669,    -1,    -1,   321,    -1,    -1,   326,    -1,   491,
     493,   494,    -1,    -1,   112,   330,   492,    -1,   326,    -1,
     327,    -1,    -1,   301,   173,   568,   174,    -1,   458,    -1,
     311,   310,   456,   312,    -1,   233,   643,   497,    -1,   165,
     233,   643,   497,    -1,   235,   643,   497,    -1,   232,   643,
     497,    -1,   234,   643,   497,    -1,   359,   279,   357,   643,
     499,    -1,   359,   495,   499,    -1,   359,   189,   233,   643,
     499,    -1,   359,   189,   165,   233,   643,   499,    -1,   359,
     189,   235,   643,   499,    -1,   359,   189,   232,   643,   499,
      -1,   359,   189,   234,   643,   499,    -1,   359,   284,   357,
     643,   499,    -1,   359,   231,   643,   499,    -1,   359,   260,
     669,    -1,   359,    55,   669,    -1,   359,   319,   643,    -1,
     359,   322,   643,    -1,    -1,   173,   498,   174,    -1,   173,
     174,    -1,   660,    -1,   660,   342,   498,    -1,    -1,    43,
      -1,    42,    -1,   501,    -1,   500,    -1,   525,    -1,   527,
      -1,   526,    -1,   510,    -1,   502,    -1,    77,   507,   508,
      -1,    79,   669,    -1,    80,    79,   669,    -1,    78,   507,
     508,   509,    -1,    86,    87,   503,    -1,   274,    58,    87,
     503,    -1,   274,    87,   503,    -1,    -1,   504,    -1,   505,
      -1,   504,   342,   505,    -1,    88,    90,    -1,    88,    89,
      -1,    91,    92,   506,    -1,    97,    98,   673,    -1,    88,
      93,    -1,    88,    94,    -1,    95,    88,    -1,    96,    -1,
      81,    -1,    -1,   190,    82,    -1,   190,    83,    82,    -1,
      -1,    -1,   281,    79,   669,    -1,   313,   518,   262,   643,
     448,   111,   523,   513,   516,   519,   520,   521,   522,   511,
      -1,   313,   518,   262,   643,   448,   111,   316,   513,   516,
     519,   520,   521,   522,    -1,   313,   234,   262,   643,   111,
     614,    -1,   313,   518,    27,   262,   643,   448,   111,   523,
     522,    -1,   313,   445,   262,   674,   516,   519,    -1,   313,
     445,   262,   317,   516,   519,    -1,    -1,   318,   173,   512,
     174,    -1,   658,    -1,   512,   342,   658,    -1,    -1,   173,
     514,   174,    -1,   515,    -1,   514,   342,   515,    -1,   669,
      -1,   669,     3,    -1,    -1,   517,   315,   674,    -1,   517,
     315,   674,   342,   674,    -1,   517,   315,   674,   342,   674,
     342,   674,    -1,    -1,    16,    -1,    -1,   658,   314,    -1,
     298,   658,    -1,   658,   298,   658,   314,    -1,   658,   314,
     298,   658,    -1,    -1,   110,   488,   674,    -1,    -1,    59,
      -1,    -1,    60,    61,    -1,    -1,    83,   229,    -1,   524,
      -1,   173,   524,   174,    -1,   674,    -1,   524,   342,   674,
      -1,    64,   111,   643,   539,    -1,    65,   643,   274,   537,
     559,   539,    -1,    67,   262,   643,   528,    -1,    67,   262,
     643,   449,   528,    -1,    -1,   250,   283,    -1,   283,   529,
      -1,   446,    -1,   173,   530,   174,    -1,   529,   342,   173,
     530,   174,    -1,   534,    -1,   530,   342,   534,    -1,   535,
      -1,   531,   342,   535,    -1,   110,    -1,   596,    -1,   533,
      -1,   533,    -1,   554,    -1,    -1,   189,    -1,   251,    -1,
     538,    -1,   537,   342,   538,    -1,   666,   177,   568,    -1,
     449,   177,   594,    -1,    -1,   285,   568,    -1,   173,   540,
     174,    -1,   561,    74,    75,   561,    -1,   561,   166,   561,
     544,    -1,   561,   541,    75,   561,   544,    -1,   561,    73,
     541,    75,   561,    -1,    -1,    76,    -1,   543,   542,    -1,
      -1,    72,    -1,    69,    -1,    70,    -1,    71,    -1,   265,
     568,    -1,    16,   449,    -1,   545,    -1,   172,   546,   548,
      -1,   546,   342,   547,    -1,   547,    -1,   669,   448,   321,
     593,    -1,   551,    -1,   550,    -1,   551,    -1,    66,   536,
     557,   558,    -1,    66,   536,   557,   262,   552,   558,    -1,
     554,   570,   571,   572,   573,    -1,   553,    -1,   552,   342,
     553,    -1,   669,    -1,   554,   170,   555,   556,   554,    -1,
     554,   169,   555,   556,   554,    -1,   554,   168,   555,   556,
     554,    -1,   173,   554,   174,    -1,   549,    -1,    -1,   189,
      -1,   251,    -1,    -1,   167,    -1,   167,   104,   173,   566,
     174,    -1,   620,    -1,   559,   539,   565,   567,    -1,    -1,
     111,   560,    -1,   561,    -1,   560,   342,   561,    -1,   643,
     564,    -1,   614,   564,    -1,    68,   614,   564,    -1,   593,
     563,    -1,    68,   594,   563,    -1,   593,    -1,   540,    -1,
      -1,   345,   562,   554,   346,   563,    -1,   321,   669,   173,
     671,   174,    -1,   321,   669,    -1,   669,   173,   671,   174,
      -1,   669,    -1,    -1,   563,    -1,    -1,   109,   104,   566,
      -1,   644,    -1,   566,   342,   644,    -1,    -1,   108,   568,
      -1,   568,   179,   569,    -1,   569,    -1,   569,   190,   578,
      -1,   578,    -1,    -1,   102,   104,   574,    -1,    -1,   297,
     657,    -1,   297,   598,    -1,    -1,   298,   658,    -1,   298,
     598,    -1,    -1,   299,   658,    -1,   299,    14,    -1,   299,
     598,    -1,   575,    -1,   574,   342,   575,    -1,   596,   576,
      -1,    -1,   225,    -1,   226,    -1,   579,    -1,   580,    -1,
     582,    -1,   584,    -1,   585,    -1,   587,    -1,   589,    -1,
     592,    -1,   596,    -1,   176,   578,    -1,   577,    -1,   578,
     191,   578,    -1,   578,   177,   578,    -1,   578,   187,   581,
     578,   190,   578,    -1,   578,   186,   581,   578,   190,   578,
      -1,    -1,   100,    -1,   101,    -1,   578,   183,   583,    -1,
     578,   181,   583,    -1,   578,   182,   583,    -1,   578,   180,
     583,    -1,   596,    -1,   596,   107,   674,    -1,   596,   263,
     176,   110,    -1,   596,   263,   110,    -1,   578,   185,   173,
     531,   174,    -1,   578,   184,   173,   531,   174,    -1,   173,
     586,   174,   185,   173,   531,   174,    -1,   173,   586,   174,
     184,   173,   531,   174,    -1,   578,    -1,   586,   342,   578,
      -1,   578,   191,   588,   594,    -1,   578,   177,   588,   578,
      -1,   188,    -1,   178,    -1,   189,    -1,   106,   594,    -1,
     578,    -1,   590,   342,   578,    -1,   345,   590,   346,    -1,
     591,   643,   591,    -1,   173,   551,   174,    -1,   173,   283,
     529,   174,    -1,   173,   545,   174,    -1,   173,   551,   174,
      -1,   173,   283,   529,   174,    -1,   173,   545,   174,    -1,
     597,    -1,   596,   192,   596,    -1,   596,   193,   596,    -1,
     596,   206,   596,    -1,   596,   207,   596,    -1,   596,   208,
     596,    -1,   596,   196,   596,    -1,   596,   194,   596,    -1,
     596,   213,   596,    -1,   596,   210,   596,    -1,   596,   218,
     596,    -1,   596,   211,   596,    -1,   596,   217,   596,    -1,
     596,   212,   596,    -1,   596,   216,   596,    -1,   596,   215,
     596,    -1,   596,   134,   596,    -1,   596,   195,   596,    -1,
     596,   209,   596,    -1,   596,   214,   596,    -1,   209,   596,
      -1,   596,   204,   596,    -1,   596,   203,   596,    -1,   596,
     202,   596,    -1,   596,   201,   596,    -1,   192,   596,    -1,
     193,   596,    -1,   173,   568,   174,    -1,   595,    -1,   594,
      -1,   623,    -1,   640,    -1,    62,    -1,   599,    -1,   644,
      -1,   613,    -1,   627,    -1,   614,    -1,   124,   125,   112,
     643,    -1,   617,    -1,   619,    -1,   647,    -1,   645,    -1,
     683,    -1,   598,    -1,   532,    -1,   347,    -1,   600,   332,
     173,   601,   174,    -1,   624,   173,   174,    -1,   627,    -1,
     602,   603,   604,    -1,    -1,   333,   104,   566,    -1,    -1,
     102,   104,   574,    -1,    -1,   605,   606,   612,    -1,    85,
      -1,   340,    -1,   607,    -1,   609,    -1,   341,   337,    -1,
     608,    -1,   334,   326,    -1,   597,   337,    -1,   186,   607,
     190,   610,    -1,   341,   336,    -1,   611,    -1,   334,   326,
      -1,   597,   337,    -1,    -1,   335,   334,   326,    -1,   335,
     109,    -1,   335,   339,    -1,   335,    83,   338,    -1,   134,
     669,    -1,   615,   173,   174,    -1,   615,   173,   648,   174,
      -1,   616,    -1,   669,   343,   616,    -1,   669,    -1,    69,
      -1,    70,    -1,    67,    -1,   114,   173,   634,   111,   596,
     174,    -1,    46,   618,    -1,    48,   618,    -1,    47,   618,
      -1,    50,   618,    -1,    49,   618,    -1,    -1,   173,   174,
      -1,   199,   173,   596,   111,   596,   112,   596,   174,    -1,
     199,   173,   596,   342,   596,   342,   596,   174,    -1,   199,
     173,   596,   111,   596,   174,    -1,   199,   173,   596,   342,
     596,   174,    -1,   198,   173,   596,   184,   596,   174,    -1,
     596,   200,   596,    -1,   197,   173,   596,   342,   596,   342,
     596,   174,    -1,   621,    -1,   620,   342,   621,    -1,   206,
      -1,   669,   343,   206,    -1,   614,   343,   206,    -1,   568,
     622,    -1,    -1,   321,   669,    -1,   641,    -1,    10,    -1,
     669,   343,    10,    -1,     8,    -1,   669,   343,     8,    -1,
       9,    -1,   669,   343,     9,    -1,   625,   173,   206,   174,
      -1,   625,   173,   669,   343,   206,   174,    -1,   625,   173,
     251,   655,   174,    -1,   625,   173,   189,   655,   174,    -1,
     625,   173,   655,   174,    -1,   626,   173,   655,   342,   655,
     174,    -1,   754,    -1,   192,    -1,   193,    -1,    -1,   172,
     287,   296,    -1,    -1,   173,   673,   174,    -1,    -1,   173,
     673,   174,    -1,    -1,   286,    -1,   287,   630,   629,    -1,
     288,   631,   629,    -1,   290,    -1,   291,    -1,   292,    -1,
     293,    -1,   294,    -1,   633,    -1,   295,    -1,   633,   630,
      -1,   633,    -1,   295,   631,    -1,   633,   630,    -1,   295,
     631,    -1,   635,   281,   636,    -1,   637,    -1,   289,   638,
      -1,    55,    -1,    57,    -1,    56,    -1,   674,    -1,    13,
      -1,    12,    -1,    11,    -1,    14,    -1,    15,    -1,   286,
     674,    -1,   287,   630,   629,   674,    -1,   288,   631,   629,
     674,    -1,   642,    -1,   665,   674,    -1,     6,   674,    -1,
     662,   674,    -1,     5,   674,    -1,    44,    -1,    45,    -1,
     289,   628,   674,   638,    -1,   669,    -1,   669,   343,   669,
      -1,   669,   343,   669,   343,   669,    -1,   669,    -1,   669,
     343,   669,    -1,   669,   343,   669,   343,   669,    -1,    18,
     173,   646,   321,   660,   174,    -1,    19,   173,   646,   342,
     660,   174,    -1,   568,    -1,   304,   173,   596,   342,   596,
     174,    -1,   305,   173,   649,   174,    -1,   300,   596,   651,
     654,   312,    -1,   300,   653,   654,   312,    -1,   533,    -1,
     648,   342,   533,    -1,   533,   342,   533,    -1,   649,   342,
     533,    -1,   301,   596,   302,   533,    -1,   650,    -1,   651,
     650,    -1,   301,   568,   302,   533,    -1,   652,    -1,   653,
     652,    -1,    -1,   303,   596,    -1,   596,    -1,   673,    -1,
     672,    -1,   672,    -1,   673,    -1,    20,    -1,   663,    -1,
     664,    -1,    20,   173,   656,   174,    -1,   663,   173,   656,
     174,    -1,   664,   173,   656,   174,    -1,   665,    -1,   665,
     173,   656,   174,    -1,    31,    -1,    32,    -1,    35,    -1,
      33,    -1,    34,    -1,    29,    -1,    29,   173,   656,   174,
      -1,    29,   173,   656,   342,   659,   174,    -1,    30,    -1,
      30,   173,   656,   174,    -1,    30,   173,   673,   342,   673,
     174,    -1,    36,    -1,    36,    38,    -1,    37,    -1,   632,
      -1,   639,    -1,     6,    -1,     6,   173,   656,   174,    -1,
     662,    -1,   662,   173,   656,   174,    -1,   662,   173,   673,
     342,   673,   174,    -1,     5,    -1,     5,   173,   656,   174,
      -1,    52,    -1,    52,   173,   661,   174,    -1,    52,   173,
     661,   342,   673,   174,    -1,    54,    -1,    53,    -1,    53,
      -1,   674,    -1,     7,    -1,    24,    -1,    20,    21,    -1,
      25,    -1,    26,    -1,    20,    22,    23,    -1,    28,    -1,
      27,    22,    23,    -1,   669,    -1,   668,    -1,     5,    -1,
       6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,
       5,    -1,     6,    -1,   175,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,   670,    -1,    22,    -1,   238,    -1,
      23,    -1,   257,    -1,   268,    -1,    38,    -1,   270,    -1,
     260,    -1,    98,    -1,   231,    -1,    80,    -1,   125,    -1,
     296,    -1,    41,    -1,   321,    -1,   227,    -1,   280,    -1,
     120,    -1,   251,    -1,   116,    -1,   118,    -1,   119,    -1,
     245,    -1,   273,    -1,    86,    -1,   327,    -1,   279,    -1,
     126,    -1,   171,    -1,    97,    -1,   113,    -1,   267,    -1,
     326,    -1,   264,    -1,   241,    -1,    92,    -1,    63,    -1,
     286,    -1,   287,    -1,   288,    -1,   289,    -1,   105,    -1,
     248,    -1,   249,    -1,   244,    -1,   246,    -1,   247,    -1,
      26,    -1,   275,    -1,    83,    -1,   142,    -1,   143,    -1,
     146,    -1,   148,    -1,   149,    -1,   150,    -1,   151,    -1,
     152,    -1,   153,    -1,   154,    -1,   156,    -1,   158,    -1,
     159,    -1,   160,    -1,   161,    -1,   163,    -1,   165,    -1,
     220,    -1,   219,    -1,   242,    -1,   243,    -1,    99,    -1,
      52,    -1,   320,    -1,   669,    -1,   671,   342,   669,    -1,
      11,    -1,    11,    -1,     5,    -1,     3,    -1,     3,   674,
      -1,   249,   676,    -1,   673,   173,   174,    -1,   673,   173,
     531,   174,    -1,    -1,   678,    -1,   268,   679,    -1,   671,
      -1,   682,    -1,   680,    -1,   681,   342,   680,    -1,   596,
      -1,   684,    -1,   685,    -1,   686,    -1,   687,    -1,   701,
      -1,   708,    -1,   710,    -1,   713,    -1,   723,    -1,   724,
      -1,   135,   173,   597,   727,   174,    -1,   136,   173,   681,
     727,   174,    -1,   137,   173,   680,   727,   174,    -1,   138,
     173,   238,   689,   688,   727,   174,    -1,    -1,   342,   728,
      -1,   342,   728,   342,   690,    -1,   342,   728,   342,   690,
     342,   696,    -1,   342,   728,   342,   696,    -1,   342,   690,
      -1,   342,   690,   342,   696,    -1,   342,   696,    -1,   669,
      -1,   139,   173,   691,   174,    -1,   692,    -1,   691,   342,
     692,    -1,   694,   693,    -1,    -1,   321,   695,    -1,   596,
      -1,   669,    -1,   697,   699,    -1,   698,    -1,   697,   342,
     698,    -1,   596,    -1,    -1,   266,   700,    -1,   110,   265,
     110,    -1,   151,   265,   110,    -1,   150,   265,   110,    -1,
     148,   265,   110,    -1,   148,   265,    83,   154,    -1,   140,
     173,   702,   703,   699,   727,   174,    -1,    -1,   728,   342,
      -1,   704,    -1,   703,   342,   704,    -1,   705,   706,    -1,
     596,    -1,    -1,   321,   707,    -1,   669,    -1,   141,   173,
     726,   597,   709,   174,    -1,    84,   143,    -1,   142,   143,
      -1,   144,   173,   238,   711,   712,   727,   174,    -1,   669,
      -1,    -1,   342,   597,    -1,   145,   173,   714,   715,   727,
     721,   722,   174,    -1,     3,    -1,    -1,   146,   716,   717,
      -1,   736,    -1,   718,    -1,   717,   342,   718,    -1,   719,
      -1,   720,    -1,   597,   735,    -1,   597,   321,   669,   735,
      -1,    -1,   736,    -1,   110,   265,   151,    -1,   151,   265,
     151,    -1,   147,   173,   597,   727,   174,    -1,   157,   173,
     725,   680,   737,   174,    -1,   726,    -1,   115,    -1,   152,
      -1,   154,    -1,    -1,   158,   154,    -1,   158,   115,    -1,
     155,   173,   729,   174,    -1,   730,    -1,   729,   342,   730,
      -1,   733,    -1,   734,    -1,   669,    -1,   596,    -1,   732,
     321,   731,    -1,   250,   732,    -1,    83,   250,    -1,    -1,
     736,    -1,   104,   149,    -1,   104,   125,    -1,    -1,   738,
      -1,   161,   281,   162,   739,   747,    -1,   740,    -1,   745,
      -1,   163,   741,   743,    -1,    83,   156,   743,    -1,   742,
      -1,     3,    -1,    -1,   159,   744,    -1,   742,    -1,   160,
     746,    -1,   669,    -1,    -1,   748,    -1,   750,    -1,   751,
     749,    -1,    -1,   750,    -1,   153,   753,    -1,    83,   156,
      -1,   156,   752,    -1,   742,    -1,   669,    -1,   164,   173,
     680,   570,   727,   174,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   619,   619,   630,   630,   644,   644,   659,   659,   674,
     674,   684,   684,   690,   691,   692,   693,   694,   699,   702,
     703,   707,   708,   711,   712,   716,   719,   722,   726,   727,
     728,   729,   730,   731,   732,   733,   734,   741,   745,   746,
     750,   752,   756,   761,   770,   775,   780,   788,   796,   804,
     812,   818,   826,   835,   844,   848,   852,   859,   862,   863,
     867,   868,   872,   873,   877,   877,   877,   877,   877,   880,
     881,   885,   886,   890,   899,   910,   911,   916,   917,   921,
     922,   927,   928,   932,   940,   950,   951,   955,   956,   960,
     964,   971,   972,   977,   978,   982,   983,   984,   995,   996,
     997,  1001,  1002,  1007,  1008,  1009,  1010,  1011,  1012,  1016,
    1017,  1022,  1023,  1029,  1035,  1040,  1045,  1050,  1055,  1060,
    1065,  1070,  1075,  1088,  1094,  1100,  1110,  1115,  1119,  1123,
    1125,  1133,  1141,  1146,  1151,  1160,  1161,  1165,  1166,  1167,
    1168,  1169,  1170,  1171,  1172,  1188,  1199,  1216,  1226,  1227,
    1231,  1232,  1236,  1237,  1238,  1242,  1243,  1244,  1245,  1246,
    1250,  1251,  1252,  1253,  1254,  1255,  1256,  1257,  1264,  1274,
    1275,  1276,  1277,  1297,  1302,  1313,  1314,  1315,  1319,  1320,
    1324,  1336,  1343,  1354,  1365,  1379,  1390,  1406,  1407,  1408,
    1409,  1410,  1411,  1415,  1416,  1417,  1418,  1422,  1423,  1427,
    1437,  1438,  1439,  1443,  1445,  1449,  1449,  1450,  1450,  1450,
    1453,  1454,  1458,  1466,  1519,  1520,  1524,  1526,  1531,  1540,
    1542,  1546,  1546,  1546,  1549,  1553,  1557,  1566,  1595,  1633,
    1634,  1639,  1650,  1651,  1655,  1656,  1657,  1658,  1659,  1663,
    1667,  1671,  1672,  1673,  1674,  1675,  1679,  1680,  1681,  1682,
    1686,  1687,  1691,  1692,  1693,  1694,  1695,  1705,  1709,  1711,
    1713,  1728,  1732,  1734,  1739,  1743,  1755,  1756,  1760,  1761,
    1765,  1766,  1770,  1771,  1775,  1779,  1787,  1792,  1793,  1798,
    1812,  1826,  1872,  1886,  1900,  1946,  1959,  1972,  1998,  2000,
    2004,  2022,  2023,  2028,  2029,  2034,  2035,  2036,  2037,  2038,
    2039,  2040,  2041,  2042,  2043,  2044,  2045,  2049,  2050,  2051,
    2052,  2053,  2054,  2055,  2056,  2060,  2061,  2062,  2063,  2064,
    2065,  2078,  2082,  2086,  2095,  2098,  2099,  2100,  2106,  2110,
    2111,  2112,  2117,  2123,  2131,  2139,  2141,  2146,  2154,  2156,
    2161,  2162,  2169,  2183,  2184,  2186,  2197,  2218,  2219,  2223,
    2224,  2229,  2233,  2241,  2243,  2248,  2249,  2253,  2257,  2262,
    2311,  2325,  2326,  2331,  2332,  2333,  2334,  2338,  2339,  2343,
    2344,  2350,  2351,  2352,  2353,  2356,  2358,  2361,  2363,  2367,
    2375,  2376,  2380,  2381,  2385,  2386,  2390,  2392,  2398,  2404,
    2410,  2416,  2422,  2431,  2437,  2442,  2450,  2458,  2466,  2474,
    2482,  2488,  2493,  2494,  2495,  2496,  2500,  2501,  2502,  2506,
    2509,  2514,  2515,  2516,  2521,  2522,  2527,  2528,  2529,  2530,
    2534,  2541,  2543,  2545,  2547,  2551,  2553,  2555,  2560,  2561,
    2565,  2567,  2573,  2574,  2575,  2576,  2580,  2581,  2582,  2583,
    2587,  2588,  2592,  2593,  2594,  2598,  2599,  2603,  2617,  2631,
    2636,  2647,  2654,  2666,  2667,  2672,  2673,  2679,  2680,  2684,
    2685,  2689,  2693,  2702,  2706,  2711,  2716,  2725,  2726,  2730,
    2731,  2732,  2733,  2735,  2740,  2741,  2745,  2746,  2750,  2751,
    2755,  2756,  2760,  2761,  2765,  2766,  2771,  2780,  2822,  2830,
    2841,  2842,  2844,  2846,  2851,  2852,  2857,  2858,  2863,  2864,
    2869,  2886,  2890,  2894,  2895,  2899,  2900,  2901,  2905,  2906,
    2911,  2916,  2924,  2925,  2931,  2933,  2938,  2946,  2954,  2965,
    2966,  2967,  2971,  2972,  2976,  2977,  2978,  2982,  2983,  3003,
    3007,  3017,  3018,  3022,  3034,  3039,  3041,  3045,  3056,  3067,
    3098,  3099,  3104,  3108,  3117,  3126,  3134,  3135,  3139,  3140,
    3141,  3146,  3147,  3149,  3154,  3158,  3168,  3169,  3173,  3174,
    3179,  3183,  3189,  3195,  3205,  3217,  3222,  3226,  3225,  3238,
    3243,  3248,  3253,  3261,  3262,  3266,  3267,  3271,  3273,  3279,
    3280,  3285,  3290,  3294,  3299,  3303,  3304,  3309,  3310,  3314,
    3318,  3319,  3323,  3327,  3328,  3332,  3336,  3340,  3341,  3346,
    3355,  3356,  3357,  3361,  3362,  3363,  3364,  3365,  3366,  3367,
    3368,  3369,  3373,  3390,  3394,  3401,  3411,  3418,  3428,  3429,
    3430,  3434,  3441,  3448,  3455,  3465,  3469,  3485,  3486,  3490,
    3496,  3502,  3507,  3515,  3517,  3522,  3530,  3540,  3541,  3542,
    3546,  3550,  3551,  3555,  3559,  3569,  3570,  3572,  3577,  3578,
    3580,  3586,  3587,  3594,  3601,  3608,  3615,  3622,  3629,  3636,
    3643,  3650,  3657,  3664,  3670,  3677,  3684,  3691,  3698,  3705,
    3712,  3719,  3725,  3732,  3739,  3746,  3753,  3755,  3777,  3781,
    3782,  3786,  3787,  3789,  3791,  3792,  3793,  3794,  3795,  3796,
    3797,  3798,  3799,  3800,  3801,  3802,  3803,  3807,  3877,  3883,
    3884,  3888,  3893,  3894,  3899,  3900,  3905,  3906,  3911,  3912,
    3916,  3917,  3921,  3922,  3923,  3927,  3931,  3936,  3937,  3938,
    3942,  3946,  3947,  3948,  3949,  3950,  3954,  3958,  3962,  3990,
    3991,  3996,  3997,  3998,  3999,  4003,  4010,  4015,  4020,  4025,
    4030,  4038,  4039,  4043,  4053,  4063,  4070,  4077,  4084,  4091,
    4104,  4105,  4110,  4115,  4120,  4125,  4133,  4134,  4138,  4160,
    4161,  4166,  4167,  4172,  4173,  4179,  4185,  4191,  4197,  4203,
    4209,  4216,  4220,  4221,  4222,  4226,  4227,  4238,  4240,  4244,
    4246,  4250,  4251,  4257,  4266,  4267,  4268,  4269,  4270,  4274,
    4275,  4279,  4285,  4288,  4294,  4297,  4303,  4306,  4311,  4331,
    4332,  4333,  4337,  4343,  4407,  4438,  4501,  4540,  4557,  4573,
    4589,  4605,  4606,  4623,  4640,  4657,  4678,  4682,  4689,  4734,
    4735,  4739,  4750,  4753,  4757,  4765,  4771,  4779,  4783,  4788,
    4790,  4796,  4804,  4806,  4811,  4815,  4821,  4829,  4831,  4836,
    4844,  4846,  4851,  4852,  4856,  4861,  4872,  4883,  4893,  4903,
    4905,  4910,  4911,  4913,  4915,  4924,  4925,  4934,  4935,  4936,
    4937,  4938,  4940,  4941,  4954,  4972,  4973,  4987,  5007,  5008,
    5009,  5010,  5011,  5012,  5013,  5015,  5016,  5018,  5030,  5044,
    5058,  5065,  5080,  5095,  5102,  5128,  5145,  5165,  5180,  5181,
    5185,  5186,  5187,  5190,  5191,  5194,  5196,  5199,  5200,  5201,
    5202,  5203,  5204,  5208,  5209,  5210,  5211,  5212,  5213,  5214,
    5215,  5219,  5220,  5221,  5222,  5223,  5224,  5225,  5226,  5227,
    5228,  5229,  5230,  5231,  5233,  5234,  5235,  5236,  5237,  5238,
    5239,  5240,  5241,  5242,  5243,  5244,  5245,  5246,  5248,  5249,
    5250,  5251,  5252,  5253,  5254,  5255,  5256,  5257,  5258,  5259,
    5260,  5261,  5262,  5264,  5265,  5266,  5267,  5268,  5269,  5270,
    5271,  5273,  5274,  5275,  5276,  5277,  5278,  5279,  5280,  5281,
    5282,  5283,  5284,  5285,  5286,  5287,  5288,  5289,  5290,  5291,
    5292,  5293,  5294,  5295,  5296,  5300,  5301,  5306,  5329,  5350,
    5382,  5384,  5392,  5399,  5404,  5419,  5420,  5424,  5427,  5430,
    5434,  5436,  5441,  5445,  5446,  5447,  5448,  5449,  5450,  5451,
    5452,  5453,  5454,  5458,  5466,  5474,  5481,  5495,  5496,  5500,
    5504,  5508,  5512,  5516,  5520,  5527,  5531,  5535,  5536,  5546,
    5554,  5555,  5559,  5563,  5567,  5574,  5576,  5581,  5585,  5586,
    5590,  5591,  5592,  5593,  5594,  5598,  5611,  5612,  5616,  5618,
    5623,  5629,  5633,  5634,  5638,  5643,  5652,  5653,  5657,  5668,
    5672,  5673,  5678,  5688,  5691,  5693,  5697,  5701,  5702,  5706,
    5707,  5711,  5715,  5718,  5720,  5724,  5725,  5729,  5737,  5746,
    5747,  5751,  5752,  5756,  5757,  5758,  5773,  5777,  5778,  5788,
    5789,  5793,  5797,  5801,  5811,  5815,  5818,  5820,  5824,  5825,
    5828,  5830,  5834,  5839,  5840,  5844,  5845,  5849,  5853,  5856,
    5858,  5862,  5866,  5870,  5873,  5875,  5879,  5880,  5884,  5886,
    5890,  5894,  5895,  5899,  5903,  5907
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
  "FWF", "INDEX", "REPLACE", "AS", "TRIGGER", "OF", "BEFORE", "AFTER",
  "ROW", "STATEMENT", "sqlNEW", "OLD", "EACH", "REFERENCING", "OVER",
  "PARTITION", "CURRENT", "EXCLUDE", "FOLLOWING", "PRECEDING", "OTHERS",
  "TIES", "RANGE", "UNBOUNDED", "','", "'.'", "':'", "'['", "']'", "'?'",
  "$accept", "sqlstmt", "@1", "@2", "@3", "@4", "@5", "create",
  "create_or_replace", "if_exists", "if_not_exists", "drop", "set",
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
  "subquery_with_orderby", "subquery", "simple_scalar_exp", "scalar_exp",
  "value_exp", "param", "window_function", "window_function_type",
  "window_specification", "window_partition_clause", "window_order_clause",
  "window_frame_clause", "window_frame_units", "window_frame_extent",
  "window_frame_start", "window_frame_preceding", "window_frame_between",
  "window_frame_end", "window_frame_following", "window_frame_exclusion",
  "var_ref", "func_ref", "qfunc", "func_ident", "datetime_funcs",
  "opt_brackets", "string_funcs", "column_exp_commalist", "column_exp",
  "opt_alias_name", "atom", "qrank", "qaggr", "qaggr2", "aggr_ref",
  "opt_sign", "tz", "time_precision", "timestamp_precision",
  "datetime_type", "non_second_datetime_field", "datetime_field",
  "start_field", "end_field", "single_datetime_field",
  "interval_qualifier", "interval_type", "user", "literal",
  "interval_expression", "qname", "column_ref", "cast_exp", "cast_value",
  "case_exp", "scalar_exp_list", "case_scalar_exp_list", "when_value",
  "when_value_list", "when_search", "when_search_list", "case_opt_else",
  "case_scalar_exp", "nonzero", "nonzerolng", "poslng", "posint",
  "data_type", "subgeometry_type", "type_alias", "varchar", "clob", "blob",
  "column", "authid", "restricted_ident", "ident", "non_reserved_word",
  "name_commalist", "lngval", "intval", "string", "exec", "exec_ref",
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
     583,   584,    44,    46,    58,    91,    93,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   348,   349,   350,   349,   351,   349,   352,   349,   353,
     349,   354,   349,   349,   349,   349,   349,   349,   355,   356,
     356,   357,   357,   358,   358,   359,   360,   361,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   363,   363,
     364,   364,   365,   365,   366,   366,   366,   366,   366,   366,
     366,   366,   367,   367,   368,   368,   368,   369,   370,   370,
     371,   371,   372,   372,   373,   373,   373,   373,   373,   374,
     374,   375,   375,   376,   376,   377,   377,   378,   378,   379,
     379,   380,   380,   381,   381,   382,   382,   383,   383,   384,
     384,   385,   385,   386,   386,   387,   387,   387,   388,   388,
     388,   389,   389,   390,   390,   390,   390,   390,   390,   391,
     391,   392,   392,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   394,   394,   394,   395,   395,   395,   395,
     395,   395,   396,   396,   396,   397,   397,   398,   398,   398,
     398,   398,   398,   398,   398,   399,   399,   399,   400,   400,
     401,   401,   402,   402,   402,   403,   403,   403,   403,   403,
     404,   404,   404,   404,   404,   404,   404,   404,   405,   406,
     406,   406,   406,   407,   407,   408,   408,   408,   409,   409,
     410,   410,   410,   410,   410,   410,   410,   411,   411,   411,
     411,   411,   411,   412,   412,   412,   412,   413,   413,   414,
     415,   415,   415,   416,   416,   417,   417,   418,   418,   418,
     419,   419,   420,   420,   421,   421,   422,   422,   423,   424,
     424,   425,   425,   425,   426,   427,   428,   429,   429,   430,
     430,   431,   432,   432,   433,   433,   433,   433,   433,   434,
     435,   436,   436,   436,   436,   436,   437,   437,   437,   437,
     438,   438,   439,   439,   439,   439,   439,   439,   440,   440,
     440,   441,   442,   442,   443,   444,   445,   445,   446,   446,
     447,   447,   448,   448,   449,   450,   451,   452,   452,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   454,   454,
     454,   455,   455,   456,   456,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   458,   458,   458,
     458,   458,   458,   458,   458,   459,   459,   459,   459,   459,
     459,   460,   461,   462,   463,   464,   464,   464,   465,   466,
     466,   466,   467,   467,   468,   469,   469,   470,   471,   471,
     472,   472,   473,   474,   474,   474,   475,   476,   476,   477,
     477,   478,   478,   479,   479,   480,   480,   480,   481,   481,
     482,   483,   483,   484,   484,   484,   484,   485,   485,   486,
     486,   487,   487,   487,   487,   488,   488,   489,   489,   490,
     491,   491,   492,   492,   493,   493,   494,   494,   495,   495,
     495,   495,   495,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   497,   497,   497,   498,
     498,   499,   499,   499,   362,   362,   500,   500,   500,   500,
     501,   502,   502,   502,   502,   502,   502,   502,   503,   503,
     504,   504,   505,   505,   505,   505,   506,   506,   506,   506,
     507,   507,   508,   508,   508,   509,   509,   510,   510,   510,
     510,   510,   510,   511,   511,   512,   512,   513,   513,   514,
     514,   515,   515,   516,   516,   516,   516,   517,   517,   518,
     518,   518,   518,   518,   519,   519,   520,   520,   521,   521,
     522,   522,   523,   523,   524,   524,   525,   526,   527,   527,
     528,   528,   528,   528,   529,   529,   530,   530,   531,   531,
     532,   533,   534,   535,   535,   536,   536,   536,   537,   537,
     538,   538,   539,   539,   540,   540,   540,   540,   540,   541,
     541,   541,   542,   542,   543,   543,   543,   544,   544,   362,
     545,   546,   546,   547,   548,   362,   362,   549,   550,   551,
     552,   552,   553,   554,   554,   554,   554,   554,   555,   555,
     555,   556,   556,   556,   557,   558,   559,   559,   560,   560,
     561,   561,   561,   561,   561,   561,   561,   562,   561,   563,
     563,   563,   563,   564,   564,   565,   565,   566,   566,   567,
     567,   568,   568,   569,   569,   570,   570,   571,   571,   571,
     572,   572,   572,   573,   573,   573,   573,   574,   574,   575,
     576,   576,   576,   577,   577,   577,   577,   577,   577,   577,
     577,   577,   578,   578,   579,   579,   580,   580,   581,   581,
     581,   582,   582,   582,   582,   583,   583,   584,   584,   585,
     585,   585,   585,   586,   586,   587,   587,   588,   588,   588,
     589,   590,   590,   591,   592,   593,   593,   593,   594,   594,
     594,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   596,
     596,   597,   597,   597,   597,   597,   597,   597,   597,   597,
     597,   597,   597,   597,   597,   597,   597,   598,   599,   600,
     600,   601,   602,   602,   603,   603,   604,   604,   605,   605,
     606,   606,   607,   607,   607,   608,   609,   610,   610,   610,
     611,   612,   612,   612,   612,   612,   613,   614,   614,   615,
     615,   616,   616,   616,   616,   617,   617,   617,   617,   617,
     617,   618,   618,   619,   619,   619,   619,   619,   619,   619,
     620,   620,   621,   621,   621,   621,   622,   622,   623,   624,
     624,   625,   625,   626,   626,   627,   627,   627,   627,   627,
     627,   627,   628,   628,   628,   629,   629,   630,   630,   631,
     631,   632,   632,   632,   633,   633,   633,   633,   633,   634,
     634,   635,   636,   636,   637,   637,   638,   638,   639,   640,
     640,   640,   641,   641,   641,   641,   641,   641,   641,   641,
     641,   641,   641,   641,   641,   641,   641,   641,   642,   643,
     643,   643,   644,   644,   644,   645,   645,   646,   647,   647,
     647,   647,   648,   648,   649,   649,   650,   651,   651,   652,
     653,   653,   654,   654,   655,   656,   657,   658,   659,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   661,   661,   662,   663,   663,
     664,   664,   664,   665,   665,   666,   667,   668,   668,   668,
     668,   668,   668,   669,   669,   669,   669,   669,   669,   669,
     669,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   671,   671,   672,   673,   673,
     674,   674,   675,   676,   676,   677,   677,   678,   679,   680,
     681,   681,   682,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   684,   685,   686,   687,   688,   688,   688,
     688,   688,   688,   688,   688,   689,   690,   691,   691,   692,
     693,   693,   694,   695,   696,   697,   697,   698,   699,   699,
     700,   700,   700,   700,   700,   701,   702,   702,   703,   703,
     704,   705,   706,   706,   707,   708,   709,   709,   710,   711,
     712,   712,   713,   714,   715,   715,   716,   717,   717,   718,
     718,   719,   720,   721,   721,   722,   722,   723,   724,   725,
     725,   726,   726,   727,   727,   727,   728,   729,   729,   730,
     730,   731,   732,   733,   734,   734,   735,   735,   736,   736,
     737,   737,   738,   739,   739,   740,   740,   741,   742,   743,
     743,   744,   745,   746,   747,   747,   748,   748,   749,   749,
     750,   751,   751,   752,   753,   754
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     4,     0,     4,     0,     4,     0,
       3,     0,     3,     2,     0,     1,     2,     1,     1,     1,
       3,     0,     2,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     1,     0,     1,
       2,     2,     2,     4,     4,     4,     4,     3,     4,     3,
       4,     4,     7,     5,     1,     2,     3,     1,     0,     4,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     0,
       3,     1,     1,     6,     6,     1,     3,     0,     3,     0,
       3,     0,     2,     6,     6,     0,     3,     0,     3,     1,
       3,     1,     3,     2,     2,     2,     1,     1,     2,     1,
       1,     1,     3,     1,     1,     2,     2,     2,     1,     1,
       3,     1,     1,     6,     6,     5,     5,     6,     6,     6,
       4,     6,    10,     4,     3,     7,     5,     4,     5,     4,
       5,     5,     3,     3,     3,     1,     0,     2,     2,     2,
       1,     1,     1,     1,     1,     4,     3,     4,     1,     2,
       1,     2,     2,     3,     1,     2,     1,     3,     3,     1,
       3,     2,     1,     2,     1,     2,     1,     1,     9,     1,
       1,     1,     0,     3,    10,     0,     1,     1,     0,     3,
       5,     6,     5,     5,     5,     7,     6,     1,     1,     2,
       2,     2,     2,     0,     4,     4,     3,     3,     1,     4,
       0,     3,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     0,     1,     1,     2,     6,     1,
       3,     1,     1,     1,     2,     1,     2,     5,     1,     0,
       3,     2,     0,     2,     2,     1,     1,     2,     2,     3,
       3,     0,     1,     1,     2,     2,     0,     1,     1,     1,
       0,     2,     2,     1,     1,     2,     5,     1,     2,     3,
       8,     4,     1,     3,     2,     6,     1,     3,     1,     1,
       0,     3,     0,     1,     3,     6,     3,     1,     1,    11,
       9,    11,    10,    11,    11,     9,     7,     9,     1,     5,
       6,     0,     3,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     1,     0,     1,     3,     2,     1,
       1,     4,     6,     5,     4,     1,     2,     4,     1,     2,
       0,     2,     7,     0,     2,     5,     8,     0,     2,     0,
       1,     2,     4,     4,     1,     1,     1,     0,     4,     2,
       9,     1,     1,     1,     1,     1,     3,     0,     2,     1,
       2,     4,     4,     4,     4,     0,     1,     0,     1,     3,
       0,     3,     1,     1,     0,     4,     1,     4,     3,     4,
       3,     3,     3,     5,     3,     5,     6,     5,     5,     5,
       5,     4,     3,     3,     3,     3,     0,     3,     2,     1,
       3,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     4,     3,     4,     3,     0,     1,
       1,     3,     2,     2,     3,     3,     2,     2,     2,     1,
       1,     0,     2,     3,     0,     0,     3,    14,    13,     6,
       9,     6,     6,     0,     4,     1,     3,     0,     3,     1,
       3,     1,     2,     0,     3,     5,     7,     0,     1,     0,
       2,     2,     4,     4,     0,     3,     0,     1,     0,     2,
       0,     2,     1,     3,     1,     3,     4,     6,     4,     5,
       0,     2,     2,     1,     3,     5,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     3,
       3,     3,     0,     2,     3,     4,     4,     5,     5,     0,
       1,     2,     0,     1,     1,     1,     1,     2,     2,     1,
       3,     3,     1,     4,     1,     1,     1,     4,     6,     5,
       1,     3,     1,     5,     5,     5,     3,     1,     0,     1,
       1,     0,     1,     5,     1,     4,     0,     2,     1,     3,
       2,     2,     3,     2,     3,     1,     1,     0,     5,     5,
       2,     4,     1,     0,     1,     0,     3,     1,     3,     0,
       2,     3,     1,     3,     1,     0,     3,     0,     2,     2,
       0,     2,     2,     0,     2,     2,     2,     1,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     3,     6,     6,     0,     1,
       1,     3,     3,     3,     3,     1,     3,     4,     3,     5,
       5,     7,     7,     1,     3,     4,     4,     1,     1,     1,
       2,     1,     3,     3,     3,     3,     4,     3,     3,     4,
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
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     2,     2,     3,     4,     0,     1,     2,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     5,     5,     7,     0,     2,     4,
       6,     4,     2,     4,     2,     1,     4,     1,     3,     2,
       0,     2,     1,     1,     2,     1,     3,     1,     0,     2,
       3,     3,     3,     3,     4,     7,     0,     2,     1,     3,
       2,     1,     0,     2,     1,     6,     2,     2,     7,     1,
       0,     2,     8,     1,     0,     3,     1,     1,     3,     1,
       1,     2,     4,     0,     1,     3,     3,     5,     6,     1,
       1,     1,     1,     0,     2,     2,     4,     1,     3,     1,
       1,     1,     1,     3,     2,     2,     0,     1,     2,     2,
       0,     1,     5,     1,     1,     3,     3,     1,     1,     0,
       2,     1,     2,     1,     0,     1,     1,     2,     0,     1,
       2,     2,     2,     1,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    17,     0,     0,   505,     0,   441,   441,     0,
       0,     0,    15,     0,     0,    18,    27,     0,     0,     7,
       5,     9,    11,     3,     0,    25,     0,    85,    26,     0,
     469,     0,    19,     0,     0,     0,     0,     0,    34,    35,
      28,    29,    30,    33,    31,   143,   142,   140,   141,    37,
     144,    32,   415,   414,   420,   419,   416,   418,   417,   529,
     547,   535,   536,   585,     0,    16,     0,   903,   904,   906,
     907,   908,   909,   911,   913,   958,   916,   924,   983,   947,
     921,   960,   935,   946,   940,   919,   982,   952,   941,   930,
     931,   932,   928,   922,   938,   961,   962,   963,   964,   965,
     966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   939,   905,   979,   978,   926,   920,   912,   945,
     980,   981,   955,   933,   956,   957,   953,   954,   929,   914,
     918,   944,   942,   915,   917,   934,   959,   937,   927,   948,
     949,   950,   951,   923,   984,   925,   943,   936,     0,   819,
     910,   506,   507,     0,     0,   440,   444,   444,   422,     0,
     428,     0,   532,   272,   505,     0,     0,   734,   732,   733,
     322,     0,   729,   731,   272,     0,     0,     0,     0,     0,
     989,   988,     0,   992,   897,   898,   899,   900,   901,   902,
     104,   272,   272,   103,    99,   108,   272,     0,     0,     0,
      89,    91,     0,   100,   101,    75,   896,     0,     0,     0,
       0,     0,   428,     0,     0,     0,   987,     0,     0,     0,
       0,   266,     0,   269,   268,     0,   847,     1,     0,     0,
       0,   170,   171,     0,   188,   187,     0,     0,     0,     0,
       0,     0,    23,    23,   169,     0,     0,     0,   137,   138,
       0,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    21,    21,
       0,     0,   411,   799,   801,   800,   947,     0,   918,   934,
     949,     0,     0,     0,   979,   978,    23,    40,    41,     0,
     262,     2,     0,   548,   548,   548,   587,    13,   512,     0,
       0,   990,   903,   904,   906,   907,   908,   909,   805,   804,
     803,   806,   807,     0,     0,     0,   893,   816,   817,   741,
     741,   741,   741,   741,   683,     0,   500,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   752,     0,
     948,   949,   950,   951,     0,     0,     0,     0,   697,   696,
     556,   756,   582,   613,   584,   603,   604,   605,   606,   607,
     608,   609,     0,   610,   680,   679,   611,   651,   695,   684,
       0,   686,   688,   690,   691,   554,   750,   681,     0,     0,
       0,   687,   682,   758,   811,   685,   693,   692,     0,     0,
     822,   802,   694,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,  1011,  1012,   771,   490,     0,   421,   445,   423,     0,
       0,     0,   425,   429,   430,     0,   530,   534,     0,   273,
       0,   546,    20,     0,     0,   593,     0,     0,    10,    12,
       0,     0,   105,   106,    98,   107,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   428,   427,
     175,     0,     0,     0,     0,   585,     0,   471,     0,     0,
       0,     0,   470,   192,   191,     0,   190,   189,     0,    23,
      23,    23,    23,     0,    69,     0,     0,     0,   272,     0,
       0,    23,     0,     0,     0,     0,     0,   403,   146,     0,
       0,     0,     0,     0,     0,   411,   406,   406,   406,   406,
     402,     0,     0,     0,     0,   404,   405,   413,   412,   394,
       0,     0,    49,    47,     0,     0,     0,     0,     0,   878,
     873,   887,   849,   888,   890,   891,   862,   865,   857,   858,
     860,   861,   859,   868,   870,   880,   884,   883,   781,   778,
     780,     0,     0,   871,   872,    42,   875,   850,   851,   855,
       0,   549,   550,   551,   551,   551,     0,   590,     0,   486,
       0,   556,   508,     0,   895,   820,   991,   815,   813,     0,
       0,     0,     0,   736,   738,   737,   740,   739,     0,   640,
       0,     0,   726,     0,     0,     0,     0,  1046,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   584,
       0,   688,   822,   612,     0,   676,   677,     0,     0,     0,
     671,   808,     0,   776,     0,   776,   772,   773,     0,     0,
       0,   840,   842,     0,     0,   641,     0,     0,     0,   537,
     512,     0,     0,   755,     0,     0,     0,     0,     0,     0,
       0,     0,   618,   618,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   814,   812,     0,
       0,     0,     0,   493,   490,   488,   442,     0,     0,   424,
     433,   432,     0,     0,     0,   531,     0,   556,   727,   832,
     501,     0,   730,   731,     0,    38,     8,     6,     4,     0,
     993,     0,   503,   498,   504,   111,    79,   109,   112,    76,
      77,    92,   977,   937,    90,    97,    96,   102,    86,    88,
       0,     0,   426,   177,   176,     0,   175,     0,     0,   120,
       0,   156,     0,     0,   166,   164,   162,   167,     0,     0,
     147,   150,   159,   136,     0,   136,   136,   267,     0,   463,
     463,     0,   272,     0,     0,   175,     0,     0,   145,   148,
     154,     0,     0,     0,     0,     0,     0,   173,     0,   926,
      58,    54,   272,     0,   361,   362,     0,     0,     0,     0,
     357,   357,   357,   357,   406,     0,   411,   411,   411,   411,
     401,     0,   391,   388,   392,   390,    22,   411,   411,   411,
      46,   274,    50,   774,    51,    45,    48,    44,     0,     0,
       0,   889,     0,     0,     0,     0,   869,     0,   776,   776,
     784,   785,   786,   787,   788,   780,   778,     0,   797,   798,
     263,     0,     0,     0,     0,   586,   597,   600,   552,     0,
       0,     0,   589,   588,   846,     0,   593,   513,     0,     0,
     512,     0,     0,   827,     0,     0,   894,   742,   790,   789,
       0,     0,     0,   651,  1002,  1000,  1083,   999,  1083,     0,
       0,     0,     0,  1081,  1082,     0,     0,  1063,  1064,   651,
    1080,     0,  1079,   585,     0,     0,   650,   648,   678,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   837,   842,     0,   841,     0,     0,     0,
       0,     0,   643,     0,     0,   567,   566,   557,   558,   565,
     573,   573,   819,   556,   540,   542,   575,   581,   757,   583,
     638,   637,   639,   615,     0,   624,   625,   622,   623,   621,
       0,     0,   619,   620,     0,     0,   614,     0,   644,   667,
     652,   653,   658,   668,   657,   748,   675,   674,   673,   672,
     654,   655,   656,   669,   660,   662,   664,   659,   670,   666,
     665,   663,   661,   628,     0,   702,   754,   751,   699,     0,
       0,   929,   844,     0,   822,     0,   907,   908,   909,   753,
     823,   491,   492,   489,   443,     0,     0,     0,   439,   434,
     435,   431,     0,   533,   728,     0,   595,   596,   594,    39,
      36,   994,     0,     0,     0,    81,     0,    81,    95,    81,
      81,     0,     0,     0,     0,     0,     0,   163,   161,   165,
     155,   151,     0,     0,   135,   116,     0,     0,     0,   115,
       0,     0,   232,     0,   468,   474,     0,   474,   272,     0,
     472,   473,     0,     0,   152,   149,   272,   272,   272,   272,
       0,     0,    24,    55,    57,     0,   995,     0,     0,   232,
     178,   198,     0,     0,   364,   365,   363,     0,     0,   272,
     357,   356,     0,   355,     0,     0,     0,     0,   389,   411,
     398,   395,   399,   397,   408,     0,   409,    53,   393,   400,
      43,     0,   845,     0,   892,     0,     0,     0,   845,   885,
       0,   886,   782,   783,   795,   794,     0,     0,   845,     0,
       0,     0,     0,   601,   602,   599,     0,   545,   544,   543,
     592,   591,   539,   511,   509,   487,   510,   821,     0,     0,
       0,   689,     0,     0,     0,     0,     0,  1025,  1017,     0,
    1051,  1038,  1048,  1052,  1047,   651,  1059,  1060,     0,  1083,
       0,  1100,  1083,     0,   502,   496,   649,     0,     0,     0,
     634,     0,     0,     0,     0,   777,     0,   809,   779,   810,
     818,     0,     0,   838,     0,   843,   831,     0,     0,   829,
       0,   642,     0,   573,     0,     0,   566,     0,     0,   519,
       0,     0,   524,   525,   526,   519,     0,   520,     0,     0,
     522,   925,   563,   572,   574,   561,   560,     0,     0,   538,
       0,   579,   636,     0,     0,     0,     0,     0,   635,   627,
       0,     0,   704,     0,   765,     0,   769,     0,     0,     0,
     446,   436,   437,   438,   833,   499,     0,   110,     0,    74,
       0,    73,    83,    84,     0,     0,   121,   124,   160,   158,
     157,   411,   411,   411,   118,   119,   117,     0,   114,     0,
     113,   205,   206,     0,     0,   449,   375,   452,     0,   451,
       0,     0,     0,   153,   182,   183,     0,   184,   275,    71,
      72,    70,     0,     0,    60,   996,    56,     0,     0,     0,
     207,   203,   208,   209,   895,     0,   180,     0,   270,     0,
       0,     0,   193,     0,   347,     0,   359,     0,     0,     0,
     396,   407,     0,   879,   874,   852,   863,     0,   866,     0,
     881,     0,   780,   792,   796,   876,     0,   853,   854,   856,
     598,     0,     0,     0,     0,  1085,  1084,  1013,  1001,  1014,
    1015,     0,  1083,   960,     0,  1092,     0,  1087,     0,  1089,
    1090,     0,     0,  1083,     0,  1050,     0,     0,     0,     0,
    1083,     0,     0,  1066,  1073,  1077,     0,     0,  1101,     0,
     494,     0,     0,     0,     0,     0,     0,     0,     0,   775,
     839,     0,   830,     0,   834,   835,   564,   562,     0,   514,
     647,   645,     0,   559,     0,     0,   519,     0,   523,   521,
     570,     0,   820,   541,     0,     0,   555,   626,   630,   629,
       0,     0,     0,   698,     0,   706,   768,   767,     0,     0,
     824,    80,    82,    78,     0,   123,   133,   134,   132,     0,
       0,   233,     0,     0,     0,   231,   210,   211,   213,   214,
     376,     0,   464,     0,     0,   457,   457,   482,   484,     0,
       0,     0,   985,   998,   997,    19,     0,    52,    61,    62,
      64,    65,    68,    66,    67,   181,   264,   197,   232,     0,
       0,   200,     0,   265,   366,   367,     0,     0,   186,     0,
     505,   921,   935,     0,     0,     0,     0,     0,   291,   303,
     304,   297,   298,   299,   302,   300,   286,   288,   305,   316,
     315,   320,   319,   318,   317,     0,   301,   296,   295,   306,
       0,     0,     0,     0,     0,   410,     0,   848,     0,     0,
     793,     0,     0,   577,   822,   825,   826,   735,     0,  1037,
    1022,  1024,  1038,  1035,  1018,     0,  1095,  1094,  1086,     0,
       0,     0,     0,     0,     0,  1039,  1049,     0,  1054,  1053,
    1056,  1057,  1055,   651,     0,  1099,  1098,   651,  1065,  1067,
    1069,  1070,     0,  1074,     0,  1078,  1125,   497,     0,     0,
       0,     0,   747,     0,   745,   746,     0,   836,   828,   646,
       0,     0,   515,     0,     0,   516,   519,     0,     0,   576,
     580,   617,   616,   703,     0,   708,   709,   701,     0,   766,
     770,     0,     0,   129,     0,   127,     0,     0,     0,     0,
     258,     0,   228,     0,   212,   215,   216,   221,   222,   223,
       0,   475,     0,   480,     0,     0,   463,   463,     0,     0,
     185,    59,     0,    63,   204,   895,     0,   179,     0,   199,
       0,     0,   380,     0,     0,     0,     0,     0,   321,     0,
     324,   937,   329,   328,   330,     0,   338,   340,     0,     0,
     291,   347,     0,   348,   358,     0,   347,   354,     0,     0,
     864,   867,   882,   877,   553,     0,     0,     0,     0,     0,
    1034,     0,  1016,  1088,  1091,  1093,     0,     0,     0,     0,
    1045,  1058,     0,  1071,  1097,     0,     0,     0,     0,     0,
     495,   632,   631,     0,     0,     0,   568,   518,   528,   527,
     517,     0,   571,   705,     0,     0,     0,   651,   721,   710,
     713,   711,     0,     0,   130,   131,   128,   126,   679,     0,
     259,     0,   224,   217,   253,     0,     0,     0,     0,   254,
     226,   257,   465,     0,   450,   483,     0,   459,   461,   474,
     474,   485,     0,   986,   232,     0,   202,   271,   377,   377,
     368,   369,     0,   360,   384,   168,     0,     0,   196,     0,
       0,   285,     0,   325,     0,     0,   291,   339,     0,     0,
     335,   340,   291,   347,     0,     0,     0,     0,   945,   280,
     277,   287,   278,     0,     0,   578,   823,  1032,     0,  1027,
    1030,  1023,  1036,  1019,  1021,  1040,     0,  1043,  1042,  1041,
    1096,  1068,     0,     0,  1062,     0,     0,     0,  1114,  1103,
    1104,   749,   743,   744,   569,     0,   714,   712,   715,     0,
     707,   122,   125,     0,     0,   252,     0,   255,   272,     0,
     481,   458,     0,   462,   476,   476,     0,     0,   219,   201,
     375,   378,   375,   375,   375,   370,     0,     0,   347,   194,
     195,   282,     0,     0,   326,     0,   291,   341,     0,     0,
     336,     0,   343,     0,   292,   291,     0,     0,     0,     0,
       0,     0,  1026,     0,     0,  1029,     0,  1044,  1072,  1075,
    1076,  1109,  1113,  1112,  1108,  1109,  1107,     0,     0,     0,
    1102,  1115,  1116,  1118,     0,     0,   723,     0,   724,   272,
     229,     0,   250,   466,   460,   477,   478,   478,   174,   218,
     232,     0,     0,     0,     0,   382,   383,   381,     0,     0,
     311,   312,   309,   310,   386,   313,   379,   308,   307,   314,
     276,   323,     0,   331,   337,     0,   333,   291,     0,   291,
       0,     0,   292,   289,   347,   353,     0,   351,   279,   281,
     283,   284,  1028,  1033,  1031,  1020,     0,  1106,  1105,  1121,
    1124,  1120,  1123,  1122,  1117,  1119,     0,     0,   651,   716,
     718,   725,   722,   250,     0,   227,   261,   246,   241,     0,
     480,   480,   220,   374,   372,   373,   371,     0,   293,   327,
     292,   334,   332,   344,     0,     0,   290,     0,     0,  1111,
    1110,   719,   717,   720,   241,     0,   248,   249,   247,   251,
       0,   242,   243,   256,   479,   448,   453,   385,   347,   291,
     342,   349,   352,   260,   230,     0,     0,     0,   245,     0,
     244,     0,   447,   387,     0,   343,   346,   350,   235,   236,
       0,     0,   240,   239,     0,   294,   345,   234,   237,   238,
       0,   455,   454,     0,   456
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,   179,   176,   175,   177,   178,    32,    33,   512,
     487,    34,    35,    36,    37,  1030,  1519,   287,  1520,  1521,
     790,  1083,  1086,  1487,  1488,  1489,   787,  1311,  1522,   198,
    1037,  1035,  1269,  1523,   209,   210,   199,   200,   201,   734,
     202,   203,   204,   726,   727,  1524,   749,  1059,  1055,  1056,
    1525,    45,   778,   760,   779,   761,   780,    46,   247,   248,
     745,  1326,   249,   250,  1508,  1090,  1091,  1669,  1319,  1320,
    1321,  1468,  1291,  1644,  1645,  1322,  1877,  1646,  1647,  1757,
    1648,  1649,  2015,  1292,  1650,  2082,  2051,  2052,  2053,  2049,
    2018,  1770,  1465,  1771,   521,  1323,   251,   220,   221,  1503,
    1092,   429,    47,  1801,  1821,    48,  1526,  1691,  2058,  1975,
    1964,  1528,  1529,  1530,  1678,  1679,  1893,  1531,  1683,  1532,
    1810,  1811,  1686,  1687,  1808,  1533,  1981,  1534,  1535,  2076,
    1906,  1696,  1102,  1103,    50,   796,  1097,  1672,  1790,  1791,
    1471,  1882,  1793,  1794,  1957,  1888,  1966,   272,  1536,   812,
    1115,   519,  1537,  1538,    54,   422,   423,   424,  1019,   156,
     416,   699,    55,  2072,  2090,  1656,  1776,  1777,  1065,  1066,
     222,  1297,  1946,  2020,  1774,  1476,  1477,    56,    57,    58,
     695,   905,  1183,   721,   359,   722,  1185,   723,   153,   571,
     572,   569,   936,  1229,  1429,  1230,  1615,   223,   161,   162,
     426,    60,  1539,   224,   943,   944,    63,   563,   859,   360,
     639,   640,   937,  1219,  1220,  1234,  1235,  1241,  1552,  1436,
     361,   362,   296,   567,   866,   715,   855,   856,  1145,   363,
     364,   365,   366,   964,   367,   955,   368,   369,   610,   370,
     954,   371,   636,   372,   373,   939,   374,   375,   376,   377,
     378,   379,   380,  1251,  1252,  1445,  1627,  1628,  1748,  1749,
    1750,  1751,  2009,  2010,  1860,   381,   611,   171,   172,   383,
     583,   384,   385,   386,   643,   387,   388,   389,   390,   391,
     628,   917,   623,   625,   553,   846,   880,   847,  1354,   848,
     849,   554,   392,   393,   394,   941,   395,   396,   874,   397,
     711,   930,   923,   924,   631,   632,   927,  1003,  1121,   863,
     225,  1546,  1116,  1130,   398,   557,   558,   399,  1294,   728,
     206,   612,   150,  1483,   226,  1122,   401,    64,   183,  1314,
    1315,  1484,   885,   886,   887,   402,   403,   404,   405,   406,
    1372,  1168,  1560,  1828,  1829,  1915,  1830,  1994,  1561,  1562,
    1563,  1383,  1575,   407,   891,  1171,  1172,  1173,  1385,  1579,
     408,  1388,   409,  1177,  1390,   410,   898,  1179,  1392,  1588,
    1589,  1590,  1591,  1592,  1728,   411,   412,   901,   895,  1163,
     892,  1376,  1377,  1715,  1378,  1379,  1380,  1723,  1724,  1397,
    1398,  1848,  1849,  1925,  1926,  1997,  2040,  1850,  1923,  1930,
    1931,  2004,  1932,  1933,  2003,  2001,   413
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1823
static const yytype_int16 yypact[] =
{
    1498,    -3, -1823,    70, 15971,   242,   -27,   184,   184, 15971,
     336,   338, -1823, 15971,   348,   371, -1823, 13635, 15971, -1823,
   -1823, -1823, -1823, -1823,   717, -1823,   695,   136,    64,   200,
     281,   517,   728,   890,  1251, 12175, 11883,   460, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823, -1823,   690,   490, -1823, 15971, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,   287,   313,
   -1823, -1823, -1823,  3869, 15971, -1823,   475,   475, -1823, 15971,
     684,    -9, -1823,   521,   242,   825,   404, -1823, -1823, -1823,
   -1823,   554, -1823,   457,   521,  1563,  1563,  1498,  1498,  1563,
   -1823, -1823,   577, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823,   521,   521, -1823,   504, -1823,   521,   409,   193,   527,
   -1823,   505,   623,   551, -1823, -1823, -1823,   634,   638,   375,
    1206,   826,   684, 14803, 15971, 15971, -1823,   543,   660,   942,
     699, -1823,    61, -1823, -1823,  -167, -1823, -1823,   -54, 15971,
     606, -1823, -1823, 15971, -1823, -1823,   689,   721,   742,   755,
   15971, 15971,   723,   723, -1823, 15971, 15971,   727, -1823, -1823,
     782, -1823,   836, 15971, 15971, 15971, 15971, 15971, 15971,   841,
     965, 15971, 15971, 15971, 15971, 15971, 15971,   780,   780,   780,
   15971, 15971,   810, -1823, -1823, -1823,   861, 15971, 15971, 15971,
     795,   923,   927,   929,   842,   848,  1083,   767, -1823,   950,
   -1823, -1823,  1043,   260,   260,   260,   883, -1823,   905, 15095,
   15971,  1204,  1204,  1204,  1217,  1058,  1067,  1069, -1823, -1823,
   -1823, -1823, -1823,  1079,  1085,  1249, -1823, -1823, -1823,  1114,
    1114,  1114,  1114,  1114, -1823,  1120, -1823,  1127,  1159, 15971,
    1132,  1137,  1138,  1139,  1143,  1145,  1146,  1147,  1154,  1155,
    1156,  2163,  4212,  8518,  8518,  1162,  1163,  1164, -1823,  8518,
    1204,   369,   373,   283,  6562,  1165,  1166,  4212, -1823, -1823,
     422,   -81,  1142, -1823,  1605, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823, 15971, -1823, -1823, -1823,  9099, -1823, -1823, -1823,
    1009, -1823,   999, -1823, -1823,  1001, -1823, -1823,  1171,  1172,
    1174,  1021, -1823, -1823, -1823, -1823, -1823, -1823,  1204,  1204,
     -65, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823,   251,  1015, -1823,  1073, -1823,   843,
    1264,  1260, -1823,  1019, -1823, 15971, -1823, -1823,  1038, -1823,
    3869, -1823, -1823,  6888, 13635,  1063,  1230,  1231, -1823, -1823,
    1232,  4898, -1823, -1823, -1823, -1823, -1823, -1823,   128,  1206,
     128,  1054, 12467,   368,  1256,  1265,  1267,   -30,   684, -1823,
     897,   438,  1039,   665,  1202,   746, 15971, -1823,    45,  1121,
   15971,   942,  1086, -1823, -1823,  1215, -1823, -1823,   805,   723,
     723,   723,   723,  1160,  1220,  1224, 16263, 15971,   521,   839,
   15971,   723, 15971,  1225,  1229,  1233,  1244, -1823, -1823, 15971,
    1168, 15971, 15971, 15971, 15971,   810,  1247,  1247,  1247,  1247,
   -1823,  1287, 15971, 15971, 15971, -1823, -1823, -1823, -1823, -1823,
   15971,   228, -1823, -1823,    60,  1120, 15971,  4212, 15971,  1253,
    1258, -1823,   609, -1823, -1823, -1823,  1262,  1263, -1823, -1823,
   -1823, -1823, -1823,  1358, -1823,  1266, -1823, -1823, -1823,  1269,
    1270,   955, 15971, -1823, -1823, -1823,  1271,  1273,  1274,  1275,
    8518, -1823, -1823,  1237,  1237,  1237,    32,  1126,  4212, -1823,
    1272,    17, -1823,  1276, -1823,  1090, -1823, -1823, -1823,  4212,
    4212,  1414,  1280, -1823, -1823, -1823, -1823, -1823,    16, -1823,
    1080,  1338, -1823,  8518,  8518,  8518,  1226,  1300,   745,  1227,
    1463,  8518,   602,  8518,  2163,  1294,  1295,  1296,   -18,   992,
     262, -1823,   197,  1605,  2163,  1640,  1640,  8518,  8518,  8518,
     928, -1823,   717,  1299,   717,  1299, -1823, -1823,  1204,  4212,
    2961, -1823,   657,  8518,  8518,  1605,   496,  9112, 15971, -1823,
     905,  4212, 15971, -1823,  4212,  3183,  8518,  8518,  8518,  8518,
    1301,  1302,  1081,  1081,  3183,  1131,  8518,  8518,  8518,  8518,
    8518,  8518,  8518,  8518,  8518,  8518,  8518,  8518,  8518,  8518,
    8518,  8518,  8518,  8518,  8518,  8518,  8518,  8518,  8518,  8518,
     502,  1305,  1281,  3869,  1306,  5224,  8518, -1823, -1823, 12759,
   14219,  1196,  1294, -1823,   299, -1823, -1823,  1399,  1409, -1823,
   -1823, -1823,   850,   717,   684, -1823,  1317,  1382, -1823, -1823,
   12454,   269, -1823, -1823,    30,  1254, -1823, -1823, -1823,  2163,
   -1823,   272, -1823, -1823,   963, -1823,   220, -1823, -1823, -1823,
     247, -1823,   841, 15971, -1823, -1823, -1823, -1823, -1823, -1823,
     128,   128, -1823, -1823, -1823,  1243,   897,  1235,  1236, -1823,
    1397,  1331,   942,   942, -1823, -1823, -1823, -1823,   942,  2572,
    1039, -1823, -1823,  -127,   677,  1234,   906, -1823,  1393,    38,
      38, 15971,   521,  1194,   942,   897,  1340,  2572,   805, -1823,
   -1823, 15971, 15971, 15971, 15971,  1279,  1252, -1823,  1412, 15971,
    1277,  1292,   395,  1205, -1823, -1823,  1028,  1268, 15971,  1350,
   15387, 15387, 15387, 15387,  1247, 15971,   810,   810,   810,   810,
   -1823,  2522, -1823, -1823, -1823, -1823, -1823,   810,   810,   810,
   -1823, -1823, -1823,   995, -1823, -1823, -1823,  1346,   950,   717,
     717, -1823,  1505,   717,   717,   717, -1823,   680,  1299,  1299,
   -1823, -1823, -1823, -1823, -1823,  1270,  1269,  1248, -1823, -1823,
   -1823,   717,   717,   717,   717,  1189, -1823, 10009,  1428,   348,
     348,   348, -1823, -1823, -1823,    32,  1063,  1346,  1120, 15095,
     905,  4212, 15971,  1346,  1213,  1195, -1823, -1823, -1823, -1823,
    1425, 15971, 12454,   579, 12454, -1823,    49, -1823,  1380, 15971,
    1366,  8518,  1198, -1823, -1823,  8518, 15971, -1823,  1395,   579,
   -1823,  8518, -1823,  1440,  8518,   273, -1823, -1823, -1823,  1017,
    4212, 13927,  2705, 10319,  2549,  1370,  1259,  1204,  1371,  1204,
     955,   250,  8518, -1823,   750,  8518, -1823,  1238,  2734,  1210,
     290,  4212, -1823, 13051,  8820, -1823, -1823,  1211,   962, 16555,
   16555, 16555,   278,    46, -1823, -1823,  1438,  1142, -1823,  1605,
   -1823, -1823, -1823,  1417,  4212, -1823,  9391, -1823, -1823, -1823,
    7214,  7214, -1823, -1823,  4212,  4212, -1823,  1120, -1823, 12454,
    1640,  1640,  1640,  1640,  1640,  1640,  1640,  1640,  1640,  1640,
    1050,  1050,  1050,   928,   800,   800,   800,   800,  1420,  1420,
    1420,  1420,  1420, -1823,  1441,  1239, -1823, -1823, -1823,  8518,
    1374,  8518, 12454,  1381,   286,  1240,  1394,  1396,  1398, -1823,
     305, -1823,  1241, -1823, -1823, 15971,  1111,  1480, -1823, -1823,
   -1823, -1823,   255, -1823, -1823,  8518, -1823, -1823, -1823, -1823,
   -1823, -1823,  7214,  1313,   128,  1468,  1322,  1468, -1823,    47,
      47,  1204,  1328, 15971, 15971,   942,   390, -1823, -1823, -1823,
   -1823, -1823, 15971, 15971, -1823, -1823, 15971,  1499,  1129, -1823,
   15971, 15971, 15679, 13635, -1823,  1478,  1278,  1478,   521,  1479,
   -1823, -1823,  1334,   942, -1823, -1823,  1419,  1419,  1419,  1419,
   15971,   753, -1823, -1823, -1823,  1575,  1341, 15971,  1362, 14511,
    1512, -1823,  1291,   543, -1823,  1293, -1823,  1349, 15971,  1419,
   15387, -1823,  1443,  1282,  2572,  1447,  1448,  1449, -1823,   810,
   -1823, -1823, -1823, -1823, -1823,  1451,  1284, -1823, -1823, -1823,
   -1823,  1458, -1823,  1459, -1823,  1460,   303,  1462,  1304, -1823,
     315, -1823, -1823, -1823, -1823,  1357,  1167,  1470,  1308,  1473,
    1481,  1482,  8518, -1823, -1823, -1823,  1442, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823,  1346, -1823,  2572,  2572,
    8518, -1823,   578,  1483,  8518,  1485,  1486, -1823,  1310,  7540,
   12454,  -160, -1823,  1332, -1823,   507, -1823,  1312,  1557,  1380,
    1488,  1502,  1380,   330, -1823, -1823, -1823,  1491,  1492,  1493,
    1605,  8518,  8518,  8518,  8518, -1823,  1372, -1823, -1823, -1823,
   -1823,  8518,  2819, -1823,  1363, 12454, -1823,  8518,  8518, -1823,
    8518,  1605, 16555, 16555,  8820,  1294,  1495,  1500,  1503,   832,
     348,  9112, -1823, -1823, -1823,   921,  1601, -1823,  9112,  1603,
    1608, 15971, -1823,  1509, -1823, -1823, -1823, 13635, 15971, -1823,
    1580,  1577,  1417,  1204,   340,   353,  1228,  1540, -1823, -1823,
    1582,  1514,  1587,  1517, -1823,  1519, -1823, 13343,  8518, 15971,
   -1823, -1823, -1823, -1823, -1823, -1823,  1429, -1823,   753, -1823,
    1430, -1823, -1823, -1823,  1678,  1204, -1823, -1823, -1823, -1823,
   -1823,   810,   810,   810, -1823, -1823, -1823,   244, -1823, 15971,
   -1823, -1823, -1823,   520,  2487, -1823,  1376, -1823,  1204, -1823,
    1588,    50,  1204, -1823, -1823, -1823,  1433, -1823, -1823, -1823,
   -1823, -1823,  1426, 15971,   489, -1823, -1823, 13635, 15971,   354,
   -1823, -1823, -1823, -1823,   212, 15971, -1823,   543,  1531, 15971,
   15971,  1532,  1439,  1533,  9713, 15971, -1823,  1472,  1465,  1475,
   -1823, -1823,  2572, -1823, -1823, -1823, -1823,   717, -1823,   717,
   -1823,   717,  1270, -1823, -1823, -1823,   717, -1823, -1823, -1823,
   -1823, 15971,  1535,  1536, 10628, -1823, -1823, -1823, -1823, -1823,
   -1823,  5550,  1380,  1466,  8518, 12454,   355, -1823,  1392, -1823,
   -1823,   725,  8518,  1380, 15971, -1823,  1572,  1576,  1558,  8518,
    1380,   398,  8518, -1823,  1557, -1823,  1452,  1560, -1823,  1565,
   -1823,  8518,  8518,  7214,  7214,  2791, 10937,  9701,  2620, -1823,
   -1823,  8518, -1823, 11239, -1823, -1823, -1823, -1823,   357, -1823,
   -1823, -1823,   300,   962,  1666,  9112,   387,  9112, -1823, -1823,
    1579, 15971,   307, -1823, 15971,  4212, -1823, -1823, -1823, -1823,
    4212,  4212, 15971, -1823,  1644,   -10, -1823, -1823,  1581,  1584,
   -1823, -1823, -1823, -1823,  1424,  1487, -1823, -1823, -1823,  1504,
     563, -1823,  1496,  1501,   521, -1823, -1823, -1823, -1823,  1223,
   -1823,  1204,  1421,   478,  1204,  1586,  1586,  1427, -1823,  1524,
    1764, 15971, -1823,  1431, -1823,   972,  1326, -1823,   489, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, 14511,  1510,
    1765,  1598,  1543, -1823,  1434,  1450, 15971,  1701, -1823,  1542,
     242,   336,   338,  1546, 13635,  3526,  7866,  4212,  1484, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823,  1489, -1823, -1823, -1823, -1823,
    1436,  2572,  1978,  1794,  1978, -1823,  1626, -1823,  1627,  1630,
   -1823,  1632,   381, -1823,  1464, -1823, -1823, -1823,  1635, 12454,
    1471, -1823,   -94, -1823,  1477,  1636, -1823, -1823, -1823,  7540,
   15971,  1549,  1551,  1555,  1559, -1823, -1823,  1651, -1823, -1823,
   -1823, -1823, -1823,   629,  1652, -1823, -1823,   334,  1490, -1823,
   -1823, -1823,    19, -1823,  1665, -1823, -1823, -1823,   384,   407,
     416,  8518, -1823,  8518, -1823, -1823,  8518, -1823, -1823, -1823,
   16555,  9112, -1823,   521,  4212, -1823,   387, 15971,   426,  1494,
    1346,  1638,  1638,  1494,  8518, -1823, -1823, -1823,  4555, -1823,
   -1823,  1573,  1561, -1823,   533, -1823,  1721,  8518,   521,   521,
   -1823,  1705, -1823,  8518, -1823,  1223, -1823, -1823, -1823, -1823,
     449, -1823,  1204,  1752,   428, 15971,    38,    38,  1204,  1204,
   -1823, -1823, 15971, -1823, -1823,  1667,  1670, -1823,     4, -1823,
    1578,   894,  1726,   429,   144,  1622,  3869, 15971, -1823,  1688,
   -1823,  1689, -1823, -1823,  1346,  4212, -1823,   764,  8809,   276,
   -1823, 10949,  4212, -1823, -1823,  1690, 10022, -1823,  1222,   642,
   -1823, -1823, -1823, -1823, -1823, 15971, 15971,  8518,  8518,  8518,
   -1823,  8192, -1823, -1823, -1823, -1823,  1754,    57,  1755,  1756,
   -1823, -1823, 15971, -1823, -1823,  8518,  1602,  1604,  1696,   628,
   -1823, -1823, -1823, 11548, 11871, 12163, -1823, -1823, -1823,  1346,
   -1823,   434, -1823,  1189,  5876,  1545,  1537,  1538,  1544, -1823,
   -1823, -1823,  1204, 15971, -1823, -1823, -1823, -1823,  2457,  1606,
   -1823,  1552, -1823, -1823, -1823,  1770,  1708,  1618, 15971, -1823,
   -1823, -1823,  1541,  1656, -1823, -1823,   448, -1823,  1884,  1478,
    1478, -1823,  1617, -1823,   611,  1720, -1823, -1823,  -155,   431,
     894, -1823,  1562, -1823,  1593, -1823,  1810,  1812, -1823, 15971,
    1637, -1823,  1566,  8518,   562,   351, -1823, -1823,  1589,  8518,
   -1823,   781, -1823, 10949,  1767,   -70, 15971,  1664,  1900, -1823,
   -1823, -1823, -1823,  1673,  1907, -1823,  1571, 12454,   453, -1823,
    1595, -1823, -1823,  1585, -1823, -1823,  1763, -1823, -1823, -1823,
    1557, -1823,  1768,  1769, -1823,  1762, 15971,  1918,   553, -1823,
   -1823, -1823, -1823, -1823, -1823,  1732, -1823, -1823, -1823,    18,
   -1823, -1823, -1823, 15971,  1797, -1823,  4212, -1823,   521,  1204,
   -1823, -1823, 15971, -1823,  1864,  1864, 15971,   463, -1823, -1823,
    1376, -1823,  1376,  1376,  1376, -1823,   903,  1758, 11251, -1823,
   -1823, -1823, 15971,   465, 12454,  1759, -1823, 10331,  1628,  2934,
   -1823,  1620,  9404,  1796,  1623, -1823,   485,  2572, 15971,  1222,
   15971,  1222, -1823,  8518, 15971, -1823,  8518, -1823, -1823, -1823,
   -1823,  1775, -1823, -1823, -1823,  1775, -1823,  1781, 15971,  1918,
   -1823, -1823, -1823,  1785,  6219,  1607, -1823,  1613, -1823,   521,
    1771,   590,  1827, -1823, -1823, -1823,  1881,  1881, -1823, -1823,
     611, 15971, 15971, 15971, 15971, -1823, -1823, -1823,  4212,  1633,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823,  8518, -1823, 10331,  1809, -1823, -1823,  1646, -1823,
    4212,  1639,  1641, -1823, 10640, -1823, 15971, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823,  1918, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823,  1629,  1616,  1619, -1823,
   -1823, -1823, -1823,  1827,   805, -1823, -1823,   823,  1692,  1893,
    1752,  1752, -1823, -1823, -1823, -1823, -1823,   667, -1823, 12454,
   -1823, 10331, -1823, 10331,   378,  1653, -1823,  1650,  2572, -1823,
   -1823, -1823, -1823, -1823,  1692,   698, -1823, -1823, -1823, -1823,
    1209,  1695,  1697, -1823, -1823, -1823,  1643, -1823, 11560, -1823,
   -1823, 15971, -1823, -1823, -1823,    71,    71,  1899, -1823,  1901,
   -1823,  1791, -1823, -1823,  1832,  9404, -1823, -1823, -1823, -1823,
    1926,     6, -1823, -1823,   942, -1823, -1823, -1823, -1823, -1823,
     486, -1823, -1823,   942, -1823
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1823,  1098, -1823, -1823, -1823, -1823, -1823, -1191, -1823,  1010,
     -69, -1108, -1823, -1823,   830, -1823,    15, -1823,    20,   420,
   -1823,   881, -1823, -1823, -1823,   481, -1823,   703,     1,  1766,
   -1823, -1823,  -170,     8, -1823, -1823,  1772, -1823,  1521, -1823,
   -1823, -1823,  1520,  -358,   940,    55, -1823, -1823, -1823,   524,
      68, -1823,   -39, -1823,  -768,  1218,  -397, -1823, -1823, -1823,
    -627, -1823,  1941, -1823, -1823,   204, -1823, -1823, -1823,   917,
     488, -1823, -1823, -1823, -1823, -1823, -1823, -1579, -1823,   344,
   -1823, -1823, -1823, -1823, -1033,   -78,   -63,   -61,   -53, -1823,
     -21, -1823, -1823, -1823,   -34, -1823, -1823,  -198,  -410, -1823,
    -156,   -19, -1823, -1684,  -883, -1823,   297, -1527, -1823, -1287,
     -64, -1404, -1823,   491, -1823, -1823, -1823, -1823, -1823, -1823,
     185, -1823,   308, -1823,   186, -1823,   -76, -1823, -1823, -1823,
   -1823,   456,  -742, -1823, -1823, -1823, -1823, -1823, -1823,   211,
    -911,   227, -1823, -1823, -1823, -1823, -1823,  1567,    93,  -423,
     675,  -401,    25,    37, -1823,  -134, -1823,  1314, -1823,  2012,
    1865, -1823, -1823, -1823, -1823,   545, -1823,   151,  -747, -1823,
   -1823, -1028,   149,    78,  -724,   555,   552, -1823, -1823, -1823,
    1339,  -664,   633,  -891, -1823,  -312,   635,  1005,  -158, -1823,
    1169,  -576,  -854,   814, -1823, -1823,   424,   126, -1823,  1621,
   -1823, -1823,    42,   132, -1823,   803,   103,  1004,   743,  -419,
    1099,  1476, -1823,  -615, -1823,  -912,  -852, -1823,  -679, -1823,
    -229,  1402,  1141, -1823, -1823,  1179,   425,   908, -1823, -1823,
    -290, -1823, -1823,  1400, -1823,   519, -1823, -1823, -1823, -1823,
    1401, -1823, -1823,  1403, -1823,  1342,  -242,  -807,  1474,  -555,
    -492, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,   312,
   -1823, -1823, -1823, -1823, -1823, -1823,     7, -1823,  -408, -1823,
     758, -1823, -1823,  1368, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823,  -549,  -504,  -529, -1823,  -556, -1823, -1823, -1823, -1823,
    1140, -1823,  2017, -1823,  1539,    73, -1331, -1823,  1506, -1823,
   -1823, -1823,  1148, -1823,  1432, -1823,  1150,  -653,   190,  -658,
    -207, -1823,  -272, -1823,  -240, -1823, -1823,  -193,  -296,    53,
   -1823,    -4, -1823, -1326,  -476,    39,  -230, -1823, -1823, -1823,
   -1823, -1823,  -545, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
   -1823, -1823,   350, -1823,   152, -1823, -1823, -1823, -1549, -1823,
     361,   500, -1823, -1823, -1823, -1823,   694, -1823, -1823, -1823,
   -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823, -1823,
     356, -1823, -1823, -1823, -1823, -1823, -1823, -1823,  1497,  -789,
     708, -1823,   511, -1823,   710, -1823, -1823,   245, -1053, -1823,
   -1823, -1823, -1823, -1823, -1822,   157, -1823, -1823, -1823, -1823,
   -1823, -1823,   154, -1823, -1823, -1823, -1823
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1097
static const yytype_int16 yytable[] =
{
     149,    41,   289,   573,   693,   158,   430,   428,    42,   163,
    1075,   707,   467,   173,   149,    38,   281,   555,   435,   464,
      39,   839,   938,  1067,   170,    52,   712,  1232,  1012,  1293,
    1553,   283,   290,  1005,   879,   442,   443,    53,   883,  1299,
     445,   216,    61,   216,  1026,   838,   899,  1527,   301,   556,
     888,   609,   613,   301,  1064,    43,  1293,   164,   903,  1105,
    1106,  1107,   149,   182,   946,   762,  1763,   635,    44,  1244,
    1245,   576,   577,   578,   862,  1625,   919,   148,   459,   205,
    1216,   741,   164,   589,   813,   814,   815,  1785,   469,  1236,
     864,   174,   730,    51,  1047,  1048,   559,  1165,   641,  1166,
    1049,  1935,  1052,  1553,   810,  1618,  1381,  2002,  -731,   641,
    1180,  1553,   608,  2078,  2079,  1891,  2088,   165,   822,  1042,
     621,   709,   211,  1485,  1880,  1393,    59,  1936,   637,  1726,
      65,   471,    62,   184,   185,   186,   187,   188,   189,   298,
    1836,   -87,   -87,   -87,   -87,   -87,   -87,   472,  1072,   400,
     149,   212,  1053,  1054,  2080,   418,   908,   637,  1268,  1831,
     382,   641,  1834,  1813,    14,   473,   474,  1837,   687,   688,
    1727,  1881,  1381,   486,  2039,  1786,    41,    41,    41,    41,
      41,    66,  1382,    42,    42,    42,    42,    42,    13,    14,
      38,    38,    38,    38,    38,    39,    39,    39,    39,    39,
      52,    52,    52,    52,    52,  1878,  1486,  1162,  1796,   461,
     149,   149,    53,    53,    53,    53,    53,    61,    61,    61,
      61,    61,  1027,  1474,  1988,   475,  1990,   414,  1797,   149,
      43,    43,    43,    43,    43,   154,   149,   484,   770,  1905,
     642,   149,   149,    44,    44,    44,    44,    44,  1709,   149,
     149,   149,   149,   497,   149,   213,  2089,   149,   149,   149,
     149,   149,   510,   205,   773,   155,   149,   149,    51,    51,
      51,    51,    51,   290,   522,   523,   864,   864,   689,  1897,
     570,   712,   864,   825,   693,  1902,  -774,   462,   463,  1132,
    1133,  1741,   216,   427,  1155,   574,   575,  1485,   827,   605,
    1416,    59,    59,    59,    59,    59,   478,    62,    62,    62,
      62,    62,   449,   483,   609,   214,  1134,   164,   488,   489,
     465,   164,   929,   470,   742,   592,   493,   494,   495,   496,
    1626,   498,   793,   425,   505,   506,   507,   508,   509,   867,
    1175,  1593,  1135,   515,   516,  2081,  1253,   164,  1255,   823,
     873,   873,  1937,  -467,   949,   953,  1181,  1938,  1333,   869,
    1216,  1417,   769,   762,   966,   164,  1475,  1995,   149,  1974,
    -731,  2022,  -778,  1150,  1825,   608,  -780,   358,  1984,   358,
    1486,  1108,  1039,  1040,  1499,   608,  -262,  1278,  1238,  1034,
    1394,  1164,  1033,  1399,   207,   694,  1798,   208,   920,   725,
     921,   216,   821,  1613,  1814,  1110,  1111,  1112,  1113,  1527,
     781,   782,   783,   784,   164,   159,  1117,  1118,  1119,  1036,
      40,   163,   798,    13,   690,   160,   400,    13,    14,   641,
     713,   151,   190,   191,   192,   193,   909,   382,  1391,   190,
     191,   192,   193,  1024, -1096,   655,  1031,  1186,   149,   561,
    2031,  -731,  2033,    13,   217,   641,  1222,  1223,  1224,  -731,
    1225,  1226,   149,  1227,  1209,  1293,   149,   606,   293,   294,
     295,    13,    14,   607,   448,   626,   627,  1346,  -731,   215,
    -731,   301,   791,   149,  1965, -1096,   797,  1050,   149,  1350,
     608,    49, -1096,   152,   828,   149,  1459,   149,   149,   149,
     149,   691,   729,   712,  1400,  1074,  1088,  1028,   149,   149,
     149,   562,  1599,  1600,  1438,   218,   820,   227,  1460,   556,
     446,    14,   826,  1585,   290,   736,  1903,  1439,  1497,  1568,
     641,  1609,  2075,   637,   692,   449,  1754,   556,  1215,   768,
     911,  -778,   622,   772,   724,  -780,   624,  1586,   850,   691,
     166,  1418,  1201,  1228,  -262,  1704,  1120,   641,  1730,  1764,
     792,   299,  1034,   588,   194,   799,   559,  1071,  1089,   864,
     552,   556,   804,   573,   806,   807,   808,   809,  1812,   219,
    1353,  1731,   692,  1565,   559,   817,   818,   819,   556,  1034,
    1732,  1386,  1184,   291,  1577,    40,    40,    40,    40,    40,
    1742,  1584,  1775,  1795,   910,  1449,  1423,  1131,  1854,   164,
     746,  1025,   993,  1426,  1032,  1187,  1069,   195,   559,  1368,
    1190,  1237,  1871,   297,   195,  1765,  1153,  1912,   164,  1257,
     831,   832,  1210,   942,   945,   559,  1927,  1949,   948,  1971,
     196,  1211,  1156,  1755,   940,  1347,  1610,   196,  1259,  1387,
     872,  1474,  1614,  1896,  1965,  1722,   300,  1351,  1151,  1985,
    2092,   915,  1634,   918,  1242,   415,    49,    49,    49,    49,
      49,   447,  1401,  1635,  1246,  1247, -1096,  1766,   994,   400,
    2059,  1004,  1032,   301,   638,  1010,   290,  1197,   197,  1199,
     382,  1212,   747,  1365,   277,  1032,  1498,  1569,  1736,  1187,
     184,   185,   186,   187,   188,   189,  1928,   465,  1340,  1929,
    1883,  1845,   748,  1264,   606,    13,   217,   900,  1767,    15,
     607,  1768,   180,  1705,   432,  1248,  1401,   433,   181,   149,
     606,  1769,  1366,  1129,    13,    14,   607,  1162,  1641,  1636,
     606,    25,  1020,  1642,  1057,   228,   607,    26,    27,  1032,
     441,  1874,  1875, -1083,   893,  1619,   894,  1881,  1032,   190,
     191,   192,   193,  1623,  2016,  1058,    29,   149,  1662,   641,
    1658,   552,   419,  1462,   444,   420,  1662,   149,   149,   149,
     149,   421,   833,   229,   776,  1084,   230, -1061,  1846,  1463,
    1872,  1847,   292,   165,   149,  1913,  1104,  1104,  1104,  1104,
     434,   149,  1464, -1061,  1279,  1950,  1038,  1972,   450,  1309,
    1612,  1274,  1616,  1637,   750,  1310,   752,   753,   754,   755,
     756,   757,   465,  1550,   758,   476,   477,  1986,  2093,   712,
    1758,   231,  1336,   232,  1583,  1571,  1758,  1587,   931,  1280,
    1289,  2057,   932,   233,  1068,   606,   641,   451,   292,   712,
     570,   607,   517,   518,  1076,  1077,  1078,  1079,   293,   294,
     295,  1643,  2046,  2047,   556,   574,  1303,  1271,  1157,  1272,
    1273,  1099,  2064,  1572,  1128,  1573,  1574,   149,  1109,  1823,
    1456,  1457,  1458,  1824,   194,  1167,  1362,  1363,   452,  1410,
    1138,   776,  1176,   453,  2048,  1328,  1414,   893,  1415,   894,
     454,  1222,  1223,  1224,   455,  1225,  1226,  1010,  1227,  1779,
    1780,   559,  1300,   458,   293,   294,   295,   763,   556,   556,
     431,   750,   466,   752,   753,   754,   755,   756,   757,   173,
     942,   758,   700,   701,   656,  1233,  1233,  1233,  1016,   764,
    1213,   940,   765,   766,   195,  1017,  1018,   234,   235,   236,
     237,   238,   239,   216,  1161,   529,   530,   531,   629,   240,
     925,   468,  1147,  1148,  1149,   559,   559,   196,   479,  1951,
     532,  1952,  1953,  1954,   533,   534,   535,   315,   316,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   241,   228,
    1222,  1223,  1224,   293,   294,   295,  1737,  1227,  1228,   431,
     480,   242,   545,   546,   547,   436,   437,   243,   197,   440,
     244,  1260,   245,  1437,   675,   676,   677,   678,   679,   777,
    1123,   481,  1469,  1125,  1126,  1127,  1989,   229,  1991,   485,
     230,  1222,  1223,  1224,   482,  1225,  1226,  -519,  1227,  1276,
    1277,  1137,  1139,  1140,  1141,  1455,   490,  -172,  1281,  1282,
     246,   922,  1283,   925,   556,   252,  1287,   149,   574,   173,
    1217,   491,   656,   724,   724,  1685,  1218,  1806,  1472,   492,
    1295,  1478,  1479,  1747,   499,   231,  1308,   232,   584,   585,
     586,   587,  1809,  1084,  1806,  1324,   511,   233,   520,  1184,
    1184,   524,  1094,  1095,   149,  1096,  1104,   696,   697,  1607,
     525,   559,   556,  -937,   526,  1682,   527,  -937,  -937,   528,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -188,   253,   254,   255,   256,   777,  -187,  1228,  1501,
     500,   293,   294,   295,  1288,   724,  -937,  -937,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   560,  1217,   559,
    1621,  1622,   743,   744,  1218,   750,   751,   752,   753,   754,
     755,   756,   757,   794,   795,   758,   957,   958,   959,   645,
    1587,  1331,   646,   647,   648,   649,   650,   651,   652,   653,
     566,   962,   963,   654,   656,  1061,  1054,   626,   627,  1747,
     568,   234,   235,   236,   237,   238,   239,   501,   502,   503,
     504,  1188,  1189,   240,  1261,  1262,  1620,   301,  1233,  1233,
     942,   184,   185,   186,   187,   188,   189,   942,  1285,  1286,
    -887,   940,  1788,  1789,   942,   301,  1820,  1430,   940,  1955,
    1956,  -761,   241,  1432,   945,   940,   548,   549,   550,   551,
    -763,  1651,  -759,  1478,  1478,   840,   841,   842,   843,   844,
     845,   243,   579,  1010,   244,  1450,   245,  1800,   580,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,  1694,
    1697,   581,  1697,  2065,  2066,   438,   439,  1075,   513,   514,
    1304,  1305,  1306,  1307,   591,  1461,  1684,   582,  1689,  1060,
    1062,  -172,   552,   588,   246,  1504,  2055,  2056,   564,   565,
     590,   556,   556,  1332,   556,   593,   257,   860,   861,  1482,
     594,   595,   596,   173,   149,  1490,   597,   465,   598,   599,
     600,  1500,  1491,  1422,  1495,   290,   149,   601,   602,   603,
    1540,  1541,   644,  -232,  -633,   617,   618,   619,   633,   634,
    1217,   681,   682,   683,   684,   685,  1218,   686,   559,   559,
    1641,   559,  1676,  -700,   698,  1642,   702,  1554,   703,   706,
     759,   704,   714,   716,   717,   718,   258,   197,   738,  1492,
     840,   841,   842,   843,   844,   878,   767,   739,   740,  2008,
    1578,   257,  1493,   771,   774,  1739,  1547,   775,  1548,   485,
    1549,  1496,   786,   816,  1895,  1551,   836,   785,   800,  -232,
     788,   805,   801,  1505,   858,   645,   802,  1494,   646,   647,
     648,   649,   650,   651,   652,   653,   259,   803,  1440,   654,
     811,   942,  1772,   942,   865,  -937,   829,  1482,  1781,  1782,
    1554,   830,   940,   872,   940,   834,   835,   876,  1554,   837,
     260,   258,   622,   624,   851,  1640,   852,   853,   854,   868,
     881,  -232,  1289,   871,   877,   890,  1805,   840,   841,   842,
     843,   844,  1352,  1815,   889,   896,   897,   904,  1822,   906,
     907,   916,  1673,  1643,   960,   961,   357,  1661,   995,  1011,
     998,  1014,   261,   262,   263,   264,   265,   996,  1015,  1490,
    1022,   259,  -232,   637,  1665,  -232,  1491,  1029,   -14,     1,
    1041,  1045,   290,  1046,  1063,  -232,   724,   724,  1070,  1044,
     942,   266,  1073,  1081,  1054,   260,  1043,  1080,  1082,  1087,
    1907,   170,  1861,  1100,   267,   641,  1093,  1085,  1124,  1136,
     268,  1142,  1146,  1098,  1158,   269,  1160,  1159,  1162,  1169,
    1174,  1178,   292,  1492,  1195,  1198,  1196,  1240,  1254,     2,
    1206,  1249,  1208,  1221,   656,  1256,  1493,   261,   262,   263,
     264,   265,     3,     4,     5,     6,  1714,  -762,  1263,  -764,
     270,  -760,  1250,   271,  1266,     7,     8,     9,    10,  1268,
    1270,  1494,  1258,  1187,    11,  1275,   266,  1680,  1296,  1284,
    1301,  1302,  1089,  1298,  1738,  1312,  1317,   646,   647,   648,
     649,   650,   651,   652,   653,   268,  1233,   942,   654,  1313,
     269,  1325,  1327,  1482,  1330,  1361,  1329,  1334,   940,  1759,
    1760,  1337,  1338,  1339,  1335,  1341,  1342,     3,     4,     5,
       6,    12,  1343,  1344,  1345,  1987,  1348,  1941,  -791,  1943,
       7,     8,     9,    10,  1355,   270,  1349,  1357,   271,    11,
    1356,  1778,  1371,  1384,  1389,  1358,  1359,  1367,  1783,  1369,
    1370,  1391,  1395,  1396,  1402,  1403,  1404,   556,  1409,  1419,
      13,    14,   400,  1802,  1420,  1412,  1425,  1421,  1427,  1822,
    1428,  1822,  1431,   382,  1434,  1435,  1442,  1540,  1443,  1444,
    2038,  1446,  1540,  1447,  1454,  1451,  1453,  1470,  1480,  1473,
    1481,  1554,  1826,  1502,  1507,  1506,  1543,  1509,  1542,  1555,
    1556,  1544,  1942,  1570,   559,  1580,  1566,   645,  1840,  1581,
     646,   647,   648,   649,   650,   651,   652,   653,    15,  2027,
    1441,   654,  1582,  1594,  1595,    13,    14,    16,    17,  1596,
      18,  1611,    19,    20,    21,    22,    23,    24,  1624,  1862,
      25,  2034,  1617,  1631,  1633,  1629,    26,    27,  1630,  1655,
    1638,  1632,  1659,  1652,   149,  1639,  2062,  1660,  1667,  1658,
    1668,  1670,    28,  1662,   656,    29,   552,  1666,  1674,  1675,
    1693,  1671,   645,  2013,  1677,   646,   647,   648,   649,   650,
     651,   652,   653,    15,  1690,  1802,   654,  1692,   556,  1698,
    1700,  1701,    16,    17,  1702,    18,  1703,  1706,  1707,  1540,
    1712,    30,   574,  1708,  1716,    25,  1717,   615,   616,  1711,
    1718,    26,    27,   620,  1719,  1720,  1721,  1729,   630,   654,
    1752,  1756,  1725,  1761,  1753,  1773,  1705,    28,  1792,  1499,
      29,  1868,  1922,  1784,  1787,   559,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   149,
    1799,  1803,  1804,  1816,  1835,  1838,  1839,  1842,  1778,  1843,
    1844,  1856,  1948,  1864,  1857,  1858,    30,  2091,  1863,  1859,
    1865,  1866,  1867,  1869,  1540,  1870,  2094,  1873,  1970,  1962,
    1876,  1879,  1886,  1540,  1887,  1889,  1963,  1890,  1540,   638,
    1904,  1898,  1908,  1960,  1802,  1909,  1802,   710,  1961,  1892,
    1993,  1910,  1911,  1967,  1259,   710,  1914,  1917,  1921,  1919,
    1920,  1924,  1934,  1945,  2000,  1968,  1940,  1916,  1976,  1982,
    1969,  1958,  1978,  1973,  1996,  1983,  1939,  1999,  1928,  2012,
    2017,  2019,  2030,  2028,  2014,  2011,  2032,  2023,  2024,  2025,
    2026,  2035,  2042,  2036,  2054,  2041,  2043,  2050,  2061,  2060,
    2067,  2071,  2069,  2065,  2084,  2085,  2066,  2087,  1316,  1663,
    1540,  1452,   731,   737,  1267,  2045,   457,   288,  1051,  1290,
    1540,   456,   574,   529,   530,   531,  1664,  1762,  2083,  2070,
    2068,  2063,  2044,  1819,  2074,  1807,  1900,  1901,   532,  2086,
    1699,  1885,   533,   534,   535,   315,   316,   536,   537,   538,
     539,   540,   541,   542,   543,   544,  1884,  1545,  1021,   735,
     157,  1657,   417,  1944,  1947,  2021,  1654,  1540,  1653,  1540,
     545,   546,   547,  1013,   857,  1598,  1597,  1265,  1154,  1424,
    1740,  1433,  1239,   947,  1182,  1152,   705,   870,  1023,  1743,
    1360,   997,   282,   965,  1540,   967,  1855,  2077,   968,  1962,
    1200,  1833,  1710,   824,   926,  1992,  1963,   882,   884,   884,
    1832,  1540,  1203,  1960,  1204,   882,  1576,   884,  1961,  1564,
    1713,  1841,  1998,  1967,  1567,  1918,   875,  2005,     0,     0,
       0,   912,   913,   914,     0,  1968,     0,     0,     0,   902,
    1969,     0,     0,     0,     0,     0,     0,   928,   710,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     956,   956,   956,   956,     0,     0,     0,     0,     0,     0,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,   982,   983,   984,   985,   986,   987,   988,
     989,   990,   991,   992,     0,     0,     0,     0,     0,  1002,
    1002,     0,     0,     0,     0,     0,   301,     0,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,   313,   314,     0,     0,    73,    74,     0,     0,    75,
     315,   316,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,   317,   318,   319,
     320,   321,   322,   323,     0,    78,     0,     0,   273,   274,
     275,     0,     0,     0,     0,   324,    79,     0,     0,   164,
     167,     0,   168,   169,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,  1695,     0,     0,
      84,    85,    86,     0,   548,   549,   550,   551,    87,   325,
       0,     0,     0,   326,     0,     0,    88,   327,     0,    89,
       0,    90,    91,    92,     0,     0,     0,   328,    93,    94,
       0,     0,     0,     0,     0,     0,     0,   329,   330,   331,
     332,   333,     0,   334,   335,    95,    96,   336,   337,    97,
     338,    98,    99,   100,   101,   102,   103,   104,     0,   105,
     339,   106,   107,   108,   109,     0,   110,   340,   111,     0,
       0,     0,     0,     0,   112,    13,   604,     0,   113,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   343,   344,     0,     0,     0,
     345,   346,   347,     0,     0,  1170,     0,     0,     0,   882,
       0,     0,   349,     0,     0,   884,     0,     0,   710,     0,
       0,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     116,     0,     0,     0,   117,     0,  1202,     0,     0,  1205,
       0,   118,     0,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,   710,   710,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,   605,     0,     0,   350,
     351,   352,   353,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,   354,     0,     0,     0,   355,   356,     0,
       0,     0,     0,  1002,     0,  1002,     0,     0,     0,     0,
       0,     0,     0,   144,   145,     0,     0,     0,     0,   146,
     147,     0,   529,   530,   531,     0,     0,     0,     0,   710,
       0,     0,     0,     0,     0,     0,   710,   532,   357,     0,
     358,   533,   534,   535,   315,   316,   536,   537,   538,   539,
     540,   541,   542,   543,   544,     0,     0,   529,   530,   531,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   545,
     546,   547,   532,     0,     0,     0,   533,   534,   535,   315,
     316,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,     0,     0,     0,     0,     0,     0,  -225,     0,     0,
       0,     0,     0,     0,   545,   546,   547,   529,   530,   531,
       0,     0,     0,     0,  -225,     0,     0,     0,     0,  -225,
    -225,     0,   532,     0,     0,     0,   533,   534,   535,   315,
     316,   536,   537,   538,   539,   540,   541,   542,   543,   544,
       0,     0,     0,     0,     0,     0,   857,  1466,  1467,     0,
       0,     0,     0,     0,   545,   546,   547,     0,     0,     0,
       0,  -225,     0,  -225,  1364,     0,     0,     0,   884,     0,
       0,     0,     0,  1375,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1193,     0,     0,     0,     0,  1405,  1406,  1407,  1408,     0,
       0,     0,     0,     0,     0,   710,     0,     0,     0,     0,
       0,  1413,   710,   656,   710,  -225,  -225,  -225,     0,     0,
       0,     0,     0,     0,     0,     0,  1114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -225,     0,  -225,
       0,     0,     0,     0,     0,  -225,  -225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -225,     0,     0,  -225,
       0,     0,  1002,     0,  -225,     0,     0,     0,     0,  -225,
       0,   657,   658,   659,   660,   661,     0,     0,     0,   662,
     663,   664,   665,   666,   656,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,     0,     0,
       0,     0,     0,   548,   549,   550,   551,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1605,     0,     0,     0,     0,  -225,
       0,     0,     0,     0,     0,     0,     0,     0,   548,   549,
     550,   551,   657,   658,   659,   660,   661,     0,     0,     0,
     662,   663,   664,   665,   666,     0,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   656,
       0,     0,     0,     0,     0,  1559,     0,     0,  1375,     0,
       0,     0,     0,     0,     0,     0,  1170,     0,   548,   549,
     550,   551,     0,   882,     0,     0,   882,     0,   656,     0,
       0,     0,     0,     0,     0,   710,   710,   710,   710,     0,
       0,     0,     0,     0,     0,   710,     0,     0,     0,     0,
       0,  1194,     0,     0,     0,     0,     0,   657,   658,   659,
     660,   661,     0,     0,     0,   662,   663,   664,   665,   666,
       0,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,     0,   656,   657,   658,   659,   660,
     661,     0,     0,     0,   662,   663,   664,   665,   666,     0,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   656,     0,     0,     0,     0,     0,     0,
       0,     0,  1606,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   657,   658,   659,   660,   661,     0,     0,
    1688,   662,   663,   664,   665,   666,     0,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
       0,   657,   658,   659,   660,   661,     0,     0,     0,   662,
     663,   664,   665,   666,     0,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,     0,     0,
       0,     0,     0,  1375,     0,     0,     0,  1191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   656,     0,
       0,     0,     0,     0,     0,  1733,  1207,  1734,     0,     0,
    1735,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   656,     0,     0,   857,     0,
       0,     0,   882,     0,     0,     0,     0,     0,     0,     0,
       0,   882,     0,     0,     0,     0,     0,   882,     0,     0,
       0,  1411,     0,     0,     0,     0,   657,   658,   659,   660,
     661,     0,     0,  1601,   662,   663,   664,   665,   666,     0,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   657,   658,   659,   660,   661,     0,     0,
       0,   662,   663,   664,   665,   666,     0,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
       0,  1827,  1559,  1559,     0,  1559,   301,     0,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   882,
       0,   313,   314,     0,     0,    73,    74,     0,     0,    75,
     315,   316,     0,     0,     0,     0,     0,     0,   882,     0,
       0,    76,     0,     0,    77,     0,     0,   317,   318,   319,
     320,   321,   322,   323,     0,    78,  1977,     0,   273,   274,
     275,     0,     0,     0,     0,   324,    79,     0,     0,     0,
     167,     0,   168,   169,     0,     0,     0,     0,     0,     0,
       0,     0,   922,    80,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,  1894,     0,     0,
      84,    85,    86,  1899,     0,     0,     0,     0,    87,   325,
       0,     0,     0,   326,     0,     0,    88,   327,     0,    89,
       0,    90,    91,    92,     0,     0,     0,   328,    93,    94,
       0,     0,     0,     0,     0,     0,     0,   329,   330,   331,
     332,   333,     0,   334,   335,    95,    96,   336,   337,    97,
     338,    98,    99,   100,   101,   102,   103,   104,     0,   105,
     339,   106,   107,   108,   109,     0,   110,   340,   111,     0,
       0,     0,     0,     0,   112,     0,   341,     0,   113,   342,
       0,   950,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   951,   952,     0,     0,   343,   344,     0,     0,     0,
     345,   346,   347,     0,     0,     0,     0,  1827,     0,     0,
    1559,     0,   349,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,   882,     0,
     116,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,   118,     0,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,  2029,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   350,
     351,   352,   353,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,   354,     0,     0,     0,   355,   356,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   145,     0,     0,     0,     0,   146,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   357,   301,
     358,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,   313,   314,     0,     0,    73,    74,
       0,     0,    75,   315,   316,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    77,     0,     0,
     317,   318,   319,   320,   321,   322,   323,     0,    78,     0,
       0,   273,   274,   275,     0,     0,     0,     0,   324,    79,
       0,     0,   164,   167,     0,   168,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,   325,     0,     0,     0,   326,     0,     0,    88,
     327,     0,    89,     0,    90,    91,    92,     0,     0,     0,
     328,    93,    94,     0,     0,     0,     0,     0,     0,     0,
     329,   330,   331,   332,   333,     0,   334,   335,    95,    96,
     336,   337,    97,   338,    98,    99,   100,   101,   102,   103,
     104,     0,   105,   339,   106,   107,   108,   109,     0,   110,
     340,   111,     0,     0,     0,     0,     0,   112,    13,   604,
       0,   113,   342,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   344,
       0,     0,     0,   345,   346,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   118,     0,     0,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
       0,   136,     0,     0,     0,  1681,   138,     0,     0,     0,
       0,     0,   350,   351,   352,   353,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,   354,     0,     0,     0,
     355,   356,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,     0,     0,
       0,     0,   146,   147,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   357,   301,   358,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,     0,     0,   313,   314,     0,
       0,    73,    74,     0,     0,    75,   315,   316,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
      77,     0,     0,   317,   318,   319,   320,   321,   322,   323,
       0,    78,     0,     0,   273,   274,   275,     0,     0,     0,
       0,   324,    79,     0,     0,     0,   167,     0,   168,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,    87,   325,     0,     0,     0,   326,
       0,     0,    88,   327,     0,    89,     0,    90,    91,    92,
       0,     0,     0,   328,    93,    94,     0,     0,     0,     0,
       0,     0,     0,   329,   330,   331,   332,   333,     0,   334,
     335,    95,    96,   336,   337,    97,   338,    98,    99,   100,
     101,   102,   103,   104,     0,   105,   339,   106,   107,   108,
     109,     0,   110,   340,   111,     0,     0,     0,     0,     0,
     112,     0,   341,     0,   113,   342,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   343,   344,     0,     0,     0,   345,   346,   347,     0,
       0,     0,     0,     0,     0,   348,     0,     0,   349,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,   115,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,     0,   136,     0,     0,     0,   137,   138,
       0,     0,     0,     0,     0,   350,   351,   352,   353,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,   354,
       0,     0,     0,   355,   356,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   144,
     145,     0,     0,     0,     0,   146,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   357,   301,   358,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,     0,     0,
     313,   314,     0,     0,    73,    74,     0,     0,    75,   315,
     316,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,    77,     0,     0,   317,   318,   319,   320,
     321,   322,   323,     0,    78,     0,     0,   273,   274,   275,
       0,     0,     0,     0,   324,    79,     0,     0,     0,   167,
       0,   168,   169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,    87,   325,     0,
       0,     0,   326,     0,     0,    88,   327,     0,    89,     0,
      90,    91,    92,     0,     0,     0,   328,    93,    94,     0,
       0,     0,     0,     0,     0,     0,   329,   330,   331,   332,
     333,     0,   334,   335,    95,    96,   336,   337,    97,   338,
      98,    99,   100,   101,   102,   103,   104,     0,   105,   339,
     106,   107,   108,   109,     0,   110,   340,   111,     0,     0,
       0,     0,     0,   112,     0,   341,     0,   113,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   344,     0,     0,     0,   345,
     346,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,     0,     0,     0,     0,     0,   129,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,     0,   136,     0,     0,
       0,   137,   138,     0,     0,     0,     0,     0,   350,   351,
     352,   353,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,   354,     0,     0,     0,   355,   356,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,   145,     0,     0,     0,     0,   146,   147,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   357,   301,   358,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,     0,     0,   313,   314,     0,     0,    73,    74,     0,
       0,    75,   315,   316,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,    77,     0,     0,   317,
     318,   319,   320,   321,   322,   323,     0,    78,     0,     0,
     273,   274,   275,     0,     0,     0,     0,   324,    79,     0,
       0,     0,   167,     0,   168,   169,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,   326,     0,     0,    88,   327,
       0,    89,     0,    90,    91,    92,     0,     0,     0,   328,
      93,    94,     0,     0,     0,     0,     0,     0,     0,   329,
     330,   331,   332,   333,     0,   334,   335,    95,    96,   336,
     337,    97,   338,    98,    99,   100,   101,   102,   103,   104,
       0,   105,   339,   106,   107,   108,   109,     0,   110,   340,
     111,     0,     0,     0,     0,     0,   112,     0,   614,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1744,     0,     0,     0,     0,     0,   343,   344,     0,
       0,     0,   345,   346,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   349,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,   115,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,   117,     0,     0,     0,
       0,     0,     0,   118,     0,     0,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,     0,
     136,     0,     0,     0,   137,   138,     0,     0,     0,     0,
       0,   350,   351,   352,   353,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,   354,     0,     0,     0,   355,
     356,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,   145,     0,     0,     0,
       0,   146,   147,     0,     0,     0,     0,     0,     0,  1745,
       0,     0,     0,     0,     0,     0,  1746,     0,     0,     0,
       0,   301,   358,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,   313,   314,     0,     0,
      73,    74,     0,     0,    75,   315,   316,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,    77,
       0,     0,   317,   318,   319,   320,   321,   322,   323,     0,
      78,     0,     0,   273,   274,   275,     0,     0,     0,     0,
     324,    79,     0,     0,   164,   167,     0,   168,   169,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,   326,     0,
       0,    88,   327,     0,    89,     0,    90,    91,    92,     0,
       0,     0,   328,    93,    94,     0,     0,     0,     0,     0,
       0,     0,   329,   330,   331,   332,   333,     0,   334,   335,
      95,    96,   336,   337,    97,   338,    98,    99,   100,   101,
     102,   103,   104,     0,   105,   339,   106,   107,   108,   109,
       0,   110,   340,   111,     0,     0,     0,     0,     0,   112,
       0,   719,   720,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   344,     0,     0,     0,   345,   346,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   349,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   115,     0,
       0,     0,     0,     0,     0,   116,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
       0,     0,     0,     0,     0,   129,     0,     0,   130,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   135,     0,   136,     0,     0,     0,   137,   138,     0,
       0,     0,     0,     0,   350,   351,   352,   353,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   354,     0,
       0,     0,   355,   356,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
       0,     0,     0,     0,   146,   147,     0,   301,     0,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
       0,     0,   313,   314,     0,   358,    73,    74,     0,     0,
      75,   315,   316,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,    77,     0,     0,   317,   318,
     319,   320,   321,   322,   323,     0,    78,     0,     0,   273,
     274,   275,     0,     0,     0,     0,   324,    79,     0,     0,
       0,   167,     0,   168,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,   326,     0,     0,    88,   327,     0,
      89,     0,    90,    91,    92,     0,     0,     0,   328,    93,
      94,     0,     0,     0,     0,     0,     0,     0,   329,   330,
     331,   332,   333,     0,   334,   335,    95,    96,   336,   337,
      97,   338,    98,    99,   100,   101,   102,   103,   104,     0,
     105,   339,   106,   107,   108,   109,     0,   110,   340,   111,
       0,     0,     0,     0,     0,   112,     0,   614,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   999,     0,     0,   343,   344,     0,     0,
       0,   345,   346,   347,     0,     0,     0,     0,     0,     0,
    1000,     0,     0,   349,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   115,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,   118,     0,     0,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,  1001,     0,     0,     0,     0,
       0,   129,     0,     0,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,     0,     0,   135,     0,   136,
       0,     0,     0,   137,   138,     0,     0,     0,     0,     0,
     350,   351,   352,   353,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,   354,     0,     0,     0,   355,   356,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,     0,     0,     0,     0,
     146,   147,     0,   301,     0,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,   313,   314,
       0,   358,    73,    74,     0,     0,    75,   315,   316,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,    77,     0,     0,   317,   318,   319,   320,   321,   322,
     323,     0,    78,     0,     0,   273,   274,   275,     0,     0,
       0,     0,   324,    79,     0,     0,     0,   167,     0,   168,
     169,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
     326,     0,     0,    88,   327,     0,    89,     0,    90,    91,
      92,     0,     0,     0,   328,    93,    94,     0,     0,     0,
       0,     0,     0,     0,   329,   330,   331,   332,   333,  1558,
     334,   335,    95,    96,   336,   337,    97,   338,    98,    99,
     100,   101,   102,   103,   104,   890,   105,   339,   106,   107,
     108,   109,     0,   110,   340,   111,     0,     0,     0,     0,
       0,   112,     0,   614,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   343,   344,     0,     0,     0,   345,   346,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   349,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     115,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,     0,     0,     0,     0,     0,   129,     0,     0,
     130,     0,     0,     0,   131,     0,     0,   132,   133,     0,
     134,     0,     0,   135,     0,   136,     0,     0,     0,   137,
     138,     0,     0,     0,     0,     0,   350,   351,   352,   353,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
     354,     0,     0,     0,   355,   356,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,     0,     0,     0,     0,   146,   147,     0,   301,
       0,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,   313,   314,     0,   358,    73,    74,
       0,     0,    75,   315,   316,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    77,     0,     0,
     317,   318,   319,   320,   321,   322,   323,     0,    78,     0,
       0,   273,   274,   275,     0,     0,     0,     0,   324,    79,
       0,     0,     0,   167,     0,   168,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,   326,     0,     0,    88,
     327,     0,    89,     0,    90,    91,    92,     0,     0,     0,
     328,    93,    94,     0,     0,     0,     0,     0,     0,     0,
     329,   330,   331,   332,   333,     0,   334,   335,    95,    96,
     336,   337,    97,   338,    98,    99,   100,   101,   102,   103,
     104,     0,   105,   339,   106,   107,   108,   109,     0,   110,
     340,   111,     0,     0,     0,     0,     0,   112,     0,   614,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   344,
       0,     0,     0,   345,   346,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   118,     0,     0,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
       0,   136,     0,     0,     0,   137,   138,     0,     0,     0,
       0,     0,   350,   351,   352,   353,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,   354,     0,     0,     0,
     355,   356,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,     0,     0,
       0,     0,   146,   147,     0,     0,     0,     0,     0,     0,
    1745,     0,     0,     0,     0,     0,     0,  1746,     0,     0,
       0,     0,   301,   358,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,     0,     0,   313,   314,     0,
       0,    73,    74,     0,     0,    75,   315,   316,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
      77,     0,     0,   317,   318,   319,   320,   321,   322,   323,
       0,    78,     0,     0,   273,   274,   275,     0,     0,     0,
       0,   324,    79,     0,     0,     0,   167,     0,   168,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,   326,
       0,     0,    88,   327,     0,    89,     0,    90,    91,    92,
       0,     0,     0,   328,    93,    94,     0,     0,     0,     0,
       0,     0,     0,   329,   330,   331,   332,   333,     0,   334,
     335,    95,    96,   336,   337,    97,   338,    98,    99,   100,
     101,   102,   103,   104,     0,   105,   339,   106,   107,   108,
     109,     0,   110,   340,   111,     0,     0,     0,     0,     0,
     112,     0,   614,     0,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   343,   344,     0,     0,     0,   345,   346,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   349,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,   115,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,     0,   136,     0,     0,     0,   137,   138,
       0,     0,     0,     0,     0,   350,   351,   352,   353,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,   354,
       0,     0,     0,   355,   356,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   144,
     145,     0,     0,     0,     0,   146,   147,     0,     0,     0,
       0,     0,     0,  2006,     0,     0,     0,     0,     0,     0,
    2007,     0,     0,     0,     0,   301,   358,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,     0,     0,
     313,   314,     0,     0,    73,    74,     0,     0,    75,   315,
     316,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,    77,     0,     0,   317,   318,   319,   320,
     321,   322,   323,     0,    78,     0,     0,   273,   274,   275,
       0,     0,     0,     0,   324,    79,     0,     0,     0,   167,
       0,   168,   169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,   326,     0,     0,    88,   327,     0,    89,     0,
      90,    91,    92,     0,     0,     0,   328,    93,    94,     0,
       0,     0,     0,     0,     0,     0,   329,   330,   331,   332,
     333,     0,   334,   335,    95,    96,   336,   337,    97,   338,
      98,    99,   100,   101,   102,   103,   104,     0,   105,   339,
     106,   107,   108,   109,     0,   110,   340,   111,     0,     0,
       0,     0,     0,   112,     0,   614,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   344,     0,     0,     0,   345,
     346,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,     0,     0,     0,     0,     0,   129,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,     0,   136,     0,     0,
       0,   137,   138,     0,     0,     0,     0,     0,   350,   351,
     352,   353,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,   354,   629,     0,     0,   355,   356,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,   145,     0,     0,     0,     0,   146,   147,
       0,   301,     0,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,   313,   314,     0,   358,
      73,    74,     0,     0,    75,   315,   316,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,    77,
       0,     0,   317,   318,   319,   320,   321,   322,   323,     0,
      78,     0,     0,   273,   274,   275,     0,     0,     0,     0,
     324,    79,     0,     0,     0,   167,     0,   168,   169,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,   326,     0,
       0,    88,   327,     0,    89,     0,    90,    91,    92,     0,
       0,     0,   328,    93,    94,     0,     0,     0,     0,     0,
       0,     0,   329,   330,   331,   332,   333,     0,   334,   335,
      95,    96,   336,   337,    97,   338,    98,    99,   100,   101,
     102,   103,   104,     0,   105,   339,   106,   107,   108,   109,
       0,   110,   340,   111,     0,     0,     0,     0,     0,   112,
       0,   614,   708,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   344,     0,     0,     0,   345,   346,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   349,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   115,     0,
       0,     0,     0,     0,     0,   116,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
       0,     0,     0,     0,     0,   129,     0,     0,   130,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   135,     0,   136,     0,     0,     0,   137,   138,     0,
       0,     0,     0,     0,   350,   351,   352,   353,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   354,     0,
       0,     0,   355,   356,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
       0,     0,     0,     0,   146,   147,     0,   301,     0,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
       0,     0,   313,   314,     0,   358,    73,    74,     0,     0,
      75,   315,   316,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,    77,     0,     0,   317,   318,
     319,   320,   321,   322,   323,     0,    78,     0,     0,   273,
     274,   275,     0,     0,     0,     0,   324,    79,     0,     0,
     164,   167,     0,   168,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,   326,     0,     0,    88,   327,     0,
      89,     0,    90,    91,    92,     0,     0,     0,   328,    93,
      94,     0,     0,     0,     0,     0,     0,     0,   329,   330,
     331,   332,   333,     0,   334,   335,    95,    96,   336,   337,
      97,   338,    98,    99,   100,   101,   102,   103,   104,     0,
     105,   339,   106,   107,   108,   109,     0,   110,   340,   111,
       0,     0,     0,     0,     0,   112,     0,   719,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,   344,     0,     0,
       0,   345,   346,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   349,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   115,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,   118,     0,     0,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,     0,     0,     0,     0,
       0,   129,     0,     0,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,     0,     0,   135,     0,   136,
       0,     0,     0,   137,   138,     0,     0,     0,     0,     0,
     350,   351,   352,   353,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,   354,     0,     0,     0,   355,   356,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,     0,     0,     0,     0,
     146,   147,     0,   301,     0,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,   313,   314,
       0,   358,    73,    74,     0,     0,    75,   315,   316,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,    77,     0,     0,   317,   318,   319,   320,   321,   322,
     323,     0,    78,     0,     0,   273,   274,   275,     0,     0,
       0,     0,   324,    79,     0,     0,     0,   167,     0,   168,
     169,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,  1373,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
     326,     0,     0,    88,   327,     0,    89,     0,    90,    91,
      92,     0,     0,     0,   328,    93,    94,     0,     0,     0,
       0,     0,     0,     0,   329,   330,   331,   332,   333,     0,
     334,   335,    95,    96,   336,   337,    97,   338,    98,    99,
     100,   101,   102,   103,   104,     0,   105,   339,   106,   107,
     108,   109,     0,   110,   340,   111,     0,     0,     0,     0,
       0,   112,     0,   614,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   343,   344,     0,     0,     0,   345,   346,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   349,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     115,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,   121,   122,   123,   124,   125,   126,   127,
    1374,   128,     0,     0,     0,     0,     0,   129,     0,     0,
     130,     0,     0,     0,   131,     0,     0,   132,   133,     0,
     134,     0,     0,   135,     0,   136,     0,     0,     0,   137,
     138,     0,     0,     0,     0,     0,   350,   351,   352,   353,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
     354,     0,     0,     0,   355,   356,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,     0,     0,     0,     0,   146,   147,     0,   301,
       0,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,   313,   314,     0,   358,    73,    74,
       0,     0,    75,   315,   316,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    77,     0,     0,
     317,   318,   319,   320,   321,   322,   323,     0,    78,     0,
       0,   273,   274,   275,     0,     0,     0,     0,   324,    79,
       0,     0,     0,   167,     0,   168,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,   326,     0,     0,    88,
     327,     0,    89,     0,    90,    91,    92,     0,     0,     0,
     328,    93,    94,     0,     0,     0,     0,     0,     0,     0,
     329,   330,   331,   332,   333,     0,   334,   335,    95,    96,
     336,   337,    97,   338,    98,    99,   100,   101,   102,   103,
     104,     0,   105,   339,   106,   107,   108,   109,     0,   110,
     340,   111,     0,     0,     0,     0,     0,   112,     0,   614,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   344,
       0,     0,     0,   345,   346,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   118,     0,     0,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
       0,   136,     0,     0,     0,   137,   138,     0,     0,     0,
       0,     0,   350,   351,   352,   353,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,   354,  1685,     0,     0,
     355,   356,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,     0,     0,
       0,     0,   146,   147,     0,   301,     0,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,     0,     0,
     313,   314,     0,   358,    73,    74,     0,     0,    75,   315,
     316,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,    77,     0,     0,   317,   318,   319,   320,
     321,   322,   323,     0,    78,     0,     0,   273,   274,   275,
       0,     0,     0,     0,   324,    79,     0,     0,     0,   167,
       0,   168,   169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,   326,     0,     0,    88,   327,     0,    89,     0,
      90,    91,    92,     0,     0,     0,   328,    93,    94,     0,
       0,     0,     0,     0,     0,     0,   329,   330,   331,   332,
     333,  1558,   334,   335,    95,    96,   336,   337,    97,   338,
      98,    99,   100,   101,   102,   103,   104,     0,   105,   339,
     106,   107,   108,   109,     0,   110,   340,   111,     0,     0,
       0,     0,     0,   112,     0,   614,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   344,     0,     0,     0,   345,
     346,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,     0,     0,     0,     0,     0,   129,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,     0,   136,     0,     0,
       0,   137,   138,     0,     0,     0,     0,     0,   350,   351,
     352,   353,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,   354,     0,     0,     0,   355,   356,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,   145,     0,     0,     0,     0,   146,   147,
       0,   301,     0,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,   313,   314,     0,   358,
      73,    74,     0,     0,    75,   315,   316,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,    77,
       0,     0,   317,   318,   319,   320,   321,   322,   323,     0,
      78,     0,     0,   273,   274,   275,     0,     0,     0,     0,
     324,    79,     0,     0,     0,   167,     0,   168,   169,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,   326,     0,
       0,    88,   327,     0,    89,     0,    90,    91,    92,     0,
       0,     0,   328,    93,    94,     0,     0,     0,     0,     0,
       0,     0,   329,   330,   331,   332,   333,     0,   334,   335,
      95,    96,   336,   337,    97,   338,    98,    99,   100,   101,
     102,   103,   104,     0,   105,   339,   106,   107,   108,   109,
       0,   110,   340,   111,     0,     0,     0,     0,     0,   112,
       0,   614,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   344,     0,     0,     0,   345,   346,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   349,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   115,     0,
       0,     0,     0,     0,     0,   116,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
       0,     0,     0,     0,     0,   129,     0,     0,   130,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   135,     0,   136,     0,     0,     0,   137,   138,     0,
       0,     0,     0,     0,   350,   351,   352,   353,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   354,     0,
       0,     0,   355,   356,     0,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,     0,   144,   145,
       0,     0,    73,    74,   146,   147,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,    77,     0,     0,     0,   358,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,   164,   167,   933,   168,
     169,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,    89,     0,    90,    91,
      92,     0,     0,   656,     0,    93,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,     0,     0,    97,     0,    98,    99,
     100,   101,   102,   103,   104,     0,   105,     0,   106,   107,
     108,   109,     0,   110,     0,   111,     0,     0,     0,     0,
       0,   112,    13,  1214,     0,   113,     0,     0,     0,     0,
       0,   657,   658,   659,   660,   661,     0,     0,     0,   662,
     663,   664,   665,   666,     0,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     115,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,     0,     0,     0,     0,     0,   129,     0,     0,
     130,     0,     0,     0,   131,     0,     0,   132,   133,     0,
     134,     0,     0,   135,     0,   136,     0,     0,     0,   137,
     138,     0,     0,  1215,     0,     0,   139,   140,   141,   142,
    1809,     0,     0,     0,     0,     0,   143,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,    75,     0,
     144,   145,     0,     0,     0,     0,   146,   147,     0,     0,
      76,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,   935,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,   167,
     933,   168,   169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,    88,     0,     0,    89,     0,
      90,    91,    92,   656,     0,     0,     0,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,     0,     0,    97,     0,
      98,    99,   100,   101,   102,   103,   104,     0,   105,     0,
     106,   107,   108,   109,     0,   110,     0,   111,     0,     0,
       0,     0,     0,   112,     0,   934,     0,   113,     0,     0,
       0,   657,   658,   659,   660,   661,     0,     0,     0,   662,
     663,   664,   665,   666,     0,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   680,   128,     0,     0,     0,     0,     0,   129,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,     0,   136,     0,     0,
       0,   137,   138,     0,     0,     0,     0,     0,   139,   140,
     141,   142,     0,     0,     0,     0,     0,     0,   143,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,     0,
      75,     0,   144,   145,     0,     0,     0,     0,   146,   147,
       0,     0,    76,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,   935,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     3,     4,
    1510,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1511,     0,     0,    81,     0,     0,
    1512,     0,     0,     0,     0,     0,    83,     0,  1243,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
      89,     0,    90,    91,    92,   656,     0,     0,     0,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,     0,     0,
      97,     0,    98,    99,   100,   101,   102,   103,   104,     0,
     105,     0,   106,   107,   108,   109,     0,   110,     0,   111,
       0,     0,     0,     0,     0,   112,     0,     0,     0,   113,
       0,     0,     0,   657,   658,   659,   660,   661,     0,     0,
       0,   662,   663,   664,   665,   666,     0,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   115,     0,     0,     0,     0,     0,
       0,   116,     0,     0,    15,   117,     0,     0,     0,     0,
       0,     0,   118,    16,  1514,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,    25,     0,     0,     0,
       0,   129,    26,    27,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,     0,     0,   135,    28,   136,
    1515,    29,     0,   137,   138,     0,     0,     0,     0,     0,
     139,   140,   141,   142,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,  1516,     0,     0,  1979,     0,     0,
    1517,  1980,  -347,     0,     0,     0,     0,    30,    67,    68,
      69,    70,    71,    72,   144,   145,     0,     0,     0,     0,
     146,   147,     0,     0,     0,    73,    74,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     3,     4,  1510,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1511,     0,     0,    81,     0,     0,  1512,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,  1603,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    89,
       0,    90,    91,    92,     0,   656,     0,     0,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0,    97,
       0,    98,    99,   100,   101,   102,   103,   104,     0,   105,
       0,   106,   107,   108,   109,  1604,   110,     0,   111,     0,
       0,     0,     0,     0,   112,     0,     0,     0,   113,     0,
       0,     0,     0,   657,   658,   659,   660,   661,     0,     0,
       0,   662,   663,   664,   665,   666,     0,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     116,     0,     0,    15,   117,     0,     0,     0,     0,     0,
    1513,   118,    16,  1514,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,    25,     0,     0,     0,     0,
     129,    26,    27,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,    28,   136,  1515,
      29,     0,   137,   138,     0,     0,     0,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,  1516,     0,     0,     0,     0,     0,  1517,
       0,     0,     0,     0,  1518,     0,    30,    67,    68,    69,
      70,    71,    72,   144,   145,     0,     0,     0,     0,   146,
     147,     0,     0,     0,    73,    74,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     3,     4,  1510,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,  1511,     0,     0,    81,     0,     0,  1512,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,    88,     0,     0,    89,     0,
      90,    91,    92,   656,     0,     0,     0,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,     0,     0,    97,     0,
      98,    99,   100,   101,   102,   103,   104,     0,   105,     0,
     106,   107,   108,   109,     0,   110,     0,   111,     0,     0,
       0,     0,     0,   112,     0,     0,     0,   113,     0,     0,
       0,   657,   658,   659,   660,   661,     0,     0,     0,   662,
     663,   664,   665,   666,     0,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,     0,     0,
       0,     0,     0,     0,  1143,  1144,     0,     0,     0,     0,
       0,   114,   115,     0,     0,     0,     0,     0,     0,   116,
       0,     0,    15,   117,     0,     0,     0,     0,     0,  1817,
     118,    16,  1514,  1818,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,    25,     0,     0,     0,     0,   129,
      26,    27,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,    28,   136,  1515,    29,
       0,   137,   138,     0,     0,     0,     0,     0,   139,   140,
     141,   142,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,  1516,     0,     0,     0,     0,     0,  1517,     0,
       0,     0,     0,  1518,     0,    30,    67,    68,    69,    70,
      71,    72,   144,   145,     0,     0,     0,     0,   146,   147,
       0,     0,     0,    73,    74,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     3,     4,  1510,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,  1511,     0,     0,    81,     0,     0,  1512,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,    89,     0,    90,
      91,    92,     0,   656,     0,     0,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,     0,     0,    97,     0,    98,
      99,   100,   101,   102,   103,   104,     0,   105,     0,   106,
     107,   108,   109,     0,   110,     0,   111,     0,     0,     0,
       0,     0,   112,  1192,     0,     0,   113,     0,     0,     0,
       0,   657,   658,   659,   660,   661,     0,     0,     0,   662,
     663,   664,   665,   666,     0,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,     0,     0,     0,   116,     0,
       0,    15,   117,     0,     0,     0,     0,     0,     0,   118,
      16,  1514,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,    25,     0,     0,     0,     0,   129,    26,
      27,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,    28,   136,  1515,    29,     0,
     137,   138,     0,     0,     0,     0,     0,   139,   140,   141,
     142,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,  1516,     0,     0,     0,     0,     0,  1517,     0,  -347,
       0,     0,     0,     0,    30,    67,    68,    69,    70,    71,
      72,   144,   145,     0,     0,     0,     0,   146,   147,     0,
       0,     0,    73,    74,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     3,     4,  1510,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    1511,     0,     0,    81,     0,     0,  1512,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,    89,     0,    90,    91,
      92,     0,   656,     0,     0,    93,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,     0,     0,    97,     0,    98,    99,
     100,   101,   102,   103,   104,     0,   105,     0,   106,   107,
     108,   109,  1557,   110,     0,   111,     0,     0,     0,     0,
       0,   112,     0,     0,     0,   113,     0,     0,     0,     0,
     657,   658,   659,   660,   661,     0,     0,     0,   662,   663,
     664,   665,   666,     0,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     115,     0,     0,     0,     0,     0,     0,   116,     0,     0,
      15,   117,     0,     0,     0,     0,     0,     0,   118,    16,
    1514,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,    25,     0,     0,     0,     0,   129,    26,    27,
     130,     0,     0,     0,   131,     0,     0,   132,   133,     0,
     134,     0,     0,   135,    28,   136,  1515,    29,     0,   137,
     138,     0,     0,     0,     0,     0,   139,   140,   141,   142,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
    1516,     0,     0,     0,     0,     0,  1517,     0,     0,     0,
       0,     0,  2037,    30,    67,    68,    69,    70,    71,    72,
     144,   145,     0,     0,     0,     0,   146,   147,     0,     0,
       0,    73,    74,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     3,     4,  1510,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,  1511,
       0,     0,    81,     0,     0,  1512,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,    89,     0,    90,    91,    92,
       0,   656,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,    96,     0,     0,    97,     0,    98,    99,   100,
     101,   102,   103,   104,     0,   105,     0,   106,   107,   108,
     109,  1602,   110,     0,   111,     0,     0,     0,     0,     0,
     112,     0,     0,     0,   113,     0,     0,     0,     0,   657,
     658,   659,   660,   661,     0,     0,     0,   662,   663,   664,
     665,   666,     0,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,   115,
       0,     0,     0,     0,     0,     0,   116,     0,     0,    15,
     117,     0,     0,     0,     0,     0,     0,   118,    16,  1514,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,    25,     0,     0,     0,     0,   129,    26,    27,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,    28,   136,  1515,    29,     0,   137,   138,
       0,     0,     0,     0,     0,   139,   140,   141,   142,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,  1516,
       0,     0,     0,     0,     0,  1517,    67,    68,    69,    70,
      71,    72,    30,     0,     0,     0,     0,     0,     0,   144,
     145,     0,     0,    73,    74,   146,   147,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     3,     4,  1510,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,  1511,     0,     0,    81,     0,     0,  1512,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,    89,     0,    90,
      91,    92,     0,   656,     0,     0,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,     0,     0,    97,     0,    98,
      99,   100,   101,   102,   103,   104,     0,   105,     0,   106,
     107,   108,   109,  1608,   110,     0,   111,     0,     0,     0,
       0,     0,   112,     0,     0,     0,   113,     0,     0,     0,
       0,   657,   658,   659,   660,   661,     0,     0,     0,   662,
     663,   664,   665,   666,     0,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,   118,
      16,  1514,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,    26,
      27,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,    28,   136,  1515,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   139,   140,   141,
     142,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,  1516,     0,     0,     0,     0,     0,  1517,     0,     0,
       0,     0,  1959,     0,    30,    67,    68,    69,    70,    71,
      72,   144,   145,     0,     0,     0,     0,   146,   147,     0,
       0,     0,    73,    74,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     3,     4,  1510,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    1511,     0,     0,    81,     0,     0,  1512,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,    89,     0,    90,    91,
      92,     0,   656,     0,     0,    93,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,     0,     0,    97,     0,    98,    99,
     100,   101,   102,   103,   104,     0,   105,     0,   106,   107,
     108,   109,  1851,   110,     0,   111,     0,     0,     0,     0,
       0,   112,     0,     0,     0,   113,     0,     0,     0,     0,
     657,   658,   659,   660,   661,     0,     0,     0,   662,   663,
     664,   665,   666,     0,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     115,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,   118,    16,
    1514,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,     0,     0,     0,     0,     0,   129,    26,    27,
     130,     0,     0,     0,   131,     0,     0,   132,   133,     0,
     134,     0,     0,   135,    28,   136,  1515,     0,     0,   137,
     138,     0,     0,     0,     0,     0,   139,   140,   141,   142,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
    1516,     0,     0,     0,     0,     0,  1517,     0,     0,     0,
       0,     0,  2073,    30,     0,     0,     0,     0,     0,     0,
     144,   145,     0,     0,     0,     0,   146,   147,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
     228,     0,     0,     0,     0,    73,    74,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,   230,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    89,
       0,    90,    91,    92,     0,   656,     0,     0,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0,    97,
       0,    98,    99,   100,   101,   102,   103,   104,     0,   105,
       0,   106,   107,   108,   109,  1852,   110,     0,   111,     0,
       0,     0,     0,     0,   112,     0,     0,     0,   113,     0,
       0,     0,     0,   657,   658,   659,   660,   661,     0,     0,
       0,   662,   663,   664,   665,   666,     0,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   284,   285,   236,   237,   238,   239,     0,     0,
     116,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,   118,     0,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   286,   138,     0,     0,     0,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    75,     0,   144,   145,     0,     0,     0,     0,   146,
     147,     0,     0,    76,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
     273,   274,   275,     0,     0,     0,     0,     0,   276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,    89,     0,    90,    91,    92,     0,   656,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,     0,
       0,    97,     0,    98,    99,   100,   101,   102,   103,   104,
       0,   105,     0,   106,   107,   108,   109,  1853,   110,     0,
     111,     0,     0,     0,     0,     0,   112,     0,   277,     0,
     113,     0,     0,     0,     0,   657,   658,   659,   660,   661,
       0,     0,     0,   662,   663,   664,   665,   666,     0,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,   115,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,   117,     0,     0,     0,
       0,     0,     0,   118,     0,     0,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,     0,     0,     0,
       0,     0,   129,     0,     0,   278,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   279,     0,
     136,     0,     0,     0,   137,   138,     0,     0,     0,     0,
       0,   139,   280,   141,   142,     0,     0,     0,     0,     0,
       0,   143,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,     0,     0,    75,     0,   144,   145,     0,     0,     0,
       0,   146,   147,     0,     0,    76,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    84,    85,    86,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,    89,     0,    90,    91,    92,   656,     0,
       0,     0,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      96,     0,     0,    97,     0,    98,    99,   100,   101,   102,
     103,   104,     0,   105,     0,   106,   107,   108,   109,     0,
     110,     0,   732,     0,     0,     0,     0,     0,   112,     0,
       0,     0,   113,     0,     0,     0,   657,   658,   659,   660,
     661,     0,     0,     0,   662,   663,   664,   665,   666,     0,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,   115,     0,     0,
       0,     0,     0,     0,   116,     0,     0,     0,   117,   262,
     263,   264,   265,     0,     0,   118,     0,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,     0,   136,     0,     0,     0,   733,   138,     0,     0,
       0,     0,     0,   139,   140,   141,   142,     0,     0,     0,
       0,     0,     0,   143,    67,    68,    69,  1006,  1007,  1008,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,    75,     0,   144,   145,     0,
       0,     0,     0,   146,   147,     0,     0,    76,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,   167,     0,   168,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,    89,     0,    90,    91,    92,
       0,     0,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,    96,     0,     0,    97,     0,    98,    99,   100,
     101,   102,   103,   104,     0,   105,     0,   106,   107,   108,
     109,     0,   110,     0,   111,     0,     0,     0,     0,     0,
     112,     0,     0,     0,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1009,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,   115,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,     0,   136,     0,     0,     0,   137,   138,
       0,     0,     0,     0,     0,   139,   140,   141,   142,     0,
       0,     0,     0,     0,     0,   143,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,   144,
     145,     0,     0,     0,     0,   146,   147,     0,     0,    76,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,   167,     0,
     168,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,    89,     0,    90,
      91,    92,     0,     0,     0,     0,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,     0,     0,    97,     0,    98,
      99,   100,   101,   102,   103,   104,     0,   105,     0,   106,
     107,   108,   109,     0,   110,     0,   111,     0,     0,     0,
       0,     0,   112,     0,   588,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   139,   140,   141,
     142,     0,     0,     0,     0,     0,     0,   143,    67,    68,
      69,  1006,  1007,  1008,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    75,
       0,   144,   145,     0,     0,     0,     0,   146,   147,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
     167,     0,   168,   169,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    89,
       0,    90,    91,    92,     0,     0,     0,     0,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0,    97,
       0,    98,    99,   100,   101,   102,   103,   104,     0,   105,
       0,   106,   107,   108,   109,     0,   110,     0,   111,     0,
       0,     0,     0,     0,   112,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1448,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     116,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,   118,     0,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    75,     0,   144,   145,     0,     0,     0,     0,   146,
     147,     0,     0,    76,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,   167,     0,   168,   169,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,    89,     0,    90,    91,    92,     0,     0,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,     0,
       0,    97,     0,    98,    99,   100,   101,   102,   103,   104,
       0,   105,     0,   106,   107,   108,   109,     0,   110,     0,
     111,     0,     0,     0,     0,     0,   112,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,   115,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,   117,     0,     0,     0,
       0,     0,     0,   118,     0,     0,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,     0,
     136,     0,     0,     0,   137,   138,     0,     0,     0,     0,
       0,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,    67,    68,    69,  1006,  1007,  1008,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,     0,     0,    75,     0,   144,   145,     0,     0,     0,
       0,   146,   147,     0,     0,    76,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,   167,     0,   168,   169,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    84,    85,    86,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,    89,     0,    90,    91,    92,     0,     0,
       0,     0,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      96,     0,     0,    97,     0,    98,    99,   100,   101,   102,
     103,   104,     0,   105,     0,   106,   107,   108,   109,     0,
     110,     0,   111,     0,     0,     0,     0,     0,   112,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,   115,     0,     0,
       0,     0,     0,     0,   116,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,     0,   136,     0,     0,     0,   137,   138,     0,     0,
       0,     0,     0,   139,   140,   141,   142,     0,     0,     0,
       0,     0,     0,   143,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,    75,     0,   144,   145,     0,
       0,     0,     0,   146,   147,     0,     0,    76,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,    89,     0,    90,    91,    92,
       0,     0,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,    96,     0,     0,    97,     0,    98,    99,   100,
     101,   102,   103,   104,     0,   105,     0,   106,   107,   108,
     109,     0,   110,     0,   111,     0,     0,     0,     0,     0,
     112,     0,    14,     0,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,   115,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,     0,   136,     0,     0,     0,   137,   138,
       0,     0,     0,     0,     0,   139,   140,   141,   142,     0,
       0,     0,     0,     0,     0,   143,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,   144,
     145,     0,     0,     0,     0,   146,   147,     0,     0,    76,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,    89,     0,    90,
      91,    92,     0,     0,     0,     0,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,     0,     0,    97,     0,    98,
      99,   100,   101,   102,   103,   104,     0,   105,     0,   106,
     107,   108,   109,     0,   110,     0,   111,     0,     0,     0,
       0,     0,   112,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,  1318,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,     0,     0,     0,   116,     0,
    1289,     0,   117,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   139,   140,   141,
     142,     0,     0,     0,     0,     0,     0,   143,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    75,
       0,   144,   145,     0,     0,     0,     0,   146,   147,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    89,
       0,    90,    91,    92,     0,     0,     0,     0,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0,    97,
       0,    98,    99,   100,   101,   102,   103,   104,     0,   105,
       0,   106,   107,   108,   109,     0,   110,     0,   111,     0,
       0,     0,     0,     0,   112,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     116,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,   118,     0,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,   460,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    75,     0,   144,   145,     0,     0,     0,     0,   146,
     147,     0,     0,    76,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,    89,     0,    90,    91,    92,     0,     0,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,     0,
       0,    97,     0,    98,    99,   100,   101,   102,   103,   104,
       0,   105,     0,   106,   107,   108,   109,     0,   110,     0,
     111,     0,     0,     0,     0,     0,   112,     0,   277,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,   115,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,   117,     0,     0,     0,
       0,     0,     0,   118,     0,     0,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,     0,
     136,     0,     0,     0,   137,   138,     0,     0,     0,     0,
       0,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,     0,     0,    75,     0,   144,   145,     0,     0,     0,
       0,   146,   147,     0,     0,    76,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    84,    85,    86,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,    89,     0,    90,    91,    92,     0,     0,
       0,     0,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      96,     0,     0,    97,     0,    98,    99,   100,   101,   102,
     103,   104,     0,   105,     0,   106,   107,   108,   109,     0,
     110,     0,   111,     0,     0,     0,     0,     0,   112,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,   115,     0,     0,
       0,     0,     0,     0,   116,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,     0,   136,     0,     0,     0,   137,   138,     0,     0,
       0,     0,     0,   139,   140,   141,   142,     0,     0,     0,
       0,     0,     0,   143,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,    75,     0,   144,   145,     0,
       0,     0,     0,   146,   147,     0,     0,    76,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,    89,     0,    90,    91,    92,
       0,     0,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,    96,     0,     0,    97,     0,    98,    99,   100,
     101,   102,   103,   104,     0,   105,     0,   106,   107,   108,
     109,     0,   110,     0,   111,     0,     0,     0,     0,     0,
     112,     0,     0,     0,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,   115,
       0,     0,     0,     0,     0,     0,   116,     0,  1289,     0,
     117,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,     0,   136,     0,     0,     0,   137,   138,
       0,     0,     0,     0,     0,   139,   140,   141,   142,     0,
       0,     0,     0,     0,     0,   143,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,   144,
     145,     0,     0,     0,     0,   146,   147,     0,     0,    76,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,    89,     0,    90,
      91,    92,     0,     0,     0,     0,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,     0,     0,    97,     0,    98,
      99,   100,   101,   102,   103,   104,     0,   105,     0,   106,
     107,   108,   109,     0,   110,     0,   111,     0,     0,     0,
       0,     0,   112,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   139,   140,   141,
     142,     0,     0,     0,     0,     0,     0,   143,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    75,
       0,   144,   145,     0,     0,     0,     0,   146,   147,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    89,
       0,    90,    91,    92,     0,     0,     0,     0,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0,    97,
       0,    98,    99,   100,   101,   102,   103,   104,     0,   105,
       0,   106,   107,   108,   109,     0,   110,     0,   111,     0,
       0,     0,     0,     0,   112,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     789,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,   118,     0,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    75,     0,   144,   145,     0,     0,     0,     0,   146,
     147,     0,     0,    76,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,    89,     0,    90,    91,    92,     0,     0,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,     0,
       0,    97,     0,    98,    99,   100,   101,   102,   103,   104,
       0,   105,     0,   106,   107,   108,   109,     0,   110,     0,
     111,     0,     0,     0,     0,     0,   112,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,   115,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,   117,     0,     0,     0,
       0,     0,     0,   118,     0,     0,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,     0,
     136,     0,     0,     0,   137,   138,     0,     0,     0,     0,
       0,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,  1231,     0,     0,     0,
       0,   146,   147
};

static const yytype_int16 yycheck[] =
{
       4,     0,    36,   299,   414,     9,   164,   163,     0,    13,
     778,   430,   219,    17,    18,     0,    35,   289,   174,   217,
       0,   550,   637,   770,    17,     0,   434,   939,   692,  1062,
    1361,    35,    36,   686,   590,   191,   192,     0,   593,  1067,
     196,    11,     0,    11,    14,   549,   601,  1334,     3,   289,
     595,   341,   342,     3,    16,     0,  1089,    66,   603,   801,
     802,   803,    66,    24,   640,   462,  1645,   357,     0,   960,
     961,   301,   302,   303,   566,    85,   625,     4,   212,    26,
     934,   111,    66,   325,   507,   508,   509,    83,    27,   941,
     566,    18,   450,     0,   752,   753,   289,   886,   179,   888,
     758,    83,   229,  1434,   505,  1431,   266,  1929,   173,   179,
     899,  1442,   341,    42,    43,  1799,   110,    14,    58,   746,
     350,   433,    58,  1314,   279,  1178,     0,   109,   111,   110,
     133,   298,     0,     5,     6,     7,     8,     9,    10,    66,
      83,     5,     6,     7,     8,     9,    10,   314,   775,   153,
     154,    87,   279,   280,    83,   159,   174,   111,   111,  1708,
     153,   179,  1711,  1690,   173,   219,   220,   110,   398,   399,
     151,   326,   266,   242,  1996,   171,   175,   176,   177,   178,
     179,   111,   342,   175,   176,   177,   178,   179,   172,   173,
     175,   176,   177,   178,   179,   175,   176,   177,   178,   179,
     175,   176,   177,   178,   179,  1784,  1314,   158,    64,   213,
     214,   215,   175,   176,   177,   178,   179,   175,   176,   177,
     178,   179,   714,   173,  1908,   229,  1910,   154,    84,   233,
     175,   176,   177,   178,   179,   262,   240,   241,   468,   309,
     321,   245,   246,   175,   176,   177,   178,   179,   342,   253,
     254,   255,   256,   257,   258,    55,   250,   261,   262,   263,
     264,   265,   266,   210,   471,    81,   270,   271,   175,   176,
     177,   178,   179,   277,   278,   279,   752,   753,   343,  1806,
     299,   689,   758,   525,   694,  1812,     3,   214,   215,   838,
     839,  1617,    11,   161,   870,   299,   300,  1488,   527,   283,
    1212,   175,   176,   177,   178,   179,   233,   175,   176,   177,
     178,   179,   342,   240,   604,   115,   845,    66,   245,   246,
     217,    66,   634,   262,   458,   329,   253,   254,   255,   256,
     340,   258,   488,   342,   261,   262,   263,   264,   265,   568,
     895,  1394,   846,   270,   271,   274,   999,    66,  1001,   289,
     579,   580,   334,   315,   644,   645,   901,   339,  1100,   342,
    1214,  1213,   317,   760,   654,    66,   316,  1916,   372,  1896,
     173,  1950,     3,   865,  1705,   604,     3,   347,  1905,   347,
    1488,   804,   740,   741,   172,   614,   174,  1045,   342,   342,
    1179,   342,   172,  1182,   258,   414,   252,   261,   628,   271,
     629,    11,   174,    16,  1691,   806,   807,   808,   809,  1696,
     479,   480,   481,   482,    66,    79,   817,   818,   819,   172,
       0,   425,   491,   172,   173,    87,   430,   172,   173,   179,
     434,   189,    64,    65,    66,    67,   174,   430,   104,    64,
      65,    66,    67,   174,   110,   372,   174,   174,   452,   189,
    1977,   173,  1979,   172,   173,   179,    69,    70,    71,   173,
      73,    74,   466,    76,   174,  1498,   470,   341,   168,   169,
     170,   172,   173,   341,   281,   192,   193,   174,   173,   279,
     173,     3,   486,   487,  1888,   151,   490,   759,   492,   174,
     719,     0,   158,   251,   528,   499,   252,   501,   502,   503,
     504,   250,   449,   911,   174,   777,   111,   714,   512,   513,
     514,   251,  1403,  1404,   174,   234,   520,     0,   274,   759,
     111,   173,   526,   125,   528,   452,  1813,   174,   174,   174,
     179,   174,  2059,   111,   283,   342,     3,   777,   283,   466,
     343,   172,   173,   470,   441,   172,   173,   149,   552,   250,
     179,  1215,   302,   166,   342,   174,   828,   179,   174,   110,
     487,   274,   342,   173,   189,   492,   759,   774,   173,  1045,
     342,   811,   499,   869,   501,   502,   503,   504,   302,   298,
    1136,   174,   283,  1372,   777,   512,   513,   514,   828,   342,
     174,    84,   904,   133,  1383,   175,   176,   177,   178,   179,
     174,  1390,   174,   174,   342,  1258,  1221,   837,   174,    66,
     172,   342,   110,  1228,   342,   342,   772,   249,   811,  1164,
     910,   343,   174,   133,   249,   176,   868,   174,    66,   343,
      21,    22,   342,   637,   638,   828,    83,   174,   642,   174,
     272,   931,   871,   110,   637,   342,   346,   272,   343,   142,
     343,   173,   265,   302,  2058,   321,   343,   342,   865,   174,
     174,   622,    99,   624,   954,   190,   175,   176,   177,   178,
     179,   262,   342,   110,   964,   965,   342,   228,   176,   683,
     302,   685,   342,     3,   262,   689,   690,   917,   313,   919,
     683,   933,   254,   115,   173,   342,   342,   342,  1610,   342,
       5,     6,     7,     8,     9,    10,   153,   604,  1109,   156,
     279,    83,   274,  1025,   588,   172,   173,   115,   269,   230,
     588,   272,     5,   342,   320,   967,   342,   173,    11,   733,
     604,   282,   154,    53,   172,   173,   604,   158,   127,   176,
     614,   252,   703,   132,    67,    17,   614,   258,   259,   342,
     173,  1779,  1780,   174,   152,  1434,   154,   326,   342,    64,
      65,    66,    67,  1442,   174,    88,   277,   771,   342,   179,
     342,   342,    88,   253,   270,    91,   342,   781,   782,   783,
     784,    97,   173,    55,    86,   789,    58,   158,   160,   269,
     342,   163,   102,   690,   798,   342,   800,   801,   802,   803,
     343,   805,   282,   174,  1046,   342,   733,   342,   281,    56,
    1425,  1041,  1427,   250,   116,    62,   118,   119,   120,   121,
     122,   123,   719,  1352,   126,   219,   220,   342,   342,  1237,
    1637,   103,  1104,   105,  1389,   110,  1643,  1392,   342,  1046,
     229,   174,   346,   115,   771,   719,   179,   342,   102,  1257,
     869,   719,    42,    43,   781,   782,   783,   784,   168,   169,
     170,   250,    39,    40,  1104,   869,  1073,  1037,   872,  1039,
    1040,   798,   174,   148,   835,   150,   151,   881,   805,   237,
    1281,  1282,  1283,   241,   189,   889,  1158,  1159,   265,  1201,
     851,    86,   896,   342,    71,  1093,  1208,   152,  1210,   154,
     266,    69,    70,    71,   266,    73,    74,   911,    76,  1656,
    1657,  1104,  1068,    87,   168,   169,   170,   252,  1158,  1159,
     174,   116,   262,   118,   119,   120,   121,   122,   123,   933,
     934,   126,    89,    90,   134,   939,   940,   941,    88,   274,
     933,   934,   277,   278,   249,    95,    96,   219,   220,   221,
     222,   223,   224,    11,   881,     5,     6,     7,   301,   231,
     303,   262,   859,   860,   861,  1158,  1159,   272,   279,  1880,
      20,  1882,  1883,  1884,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,   260,    17,
      69,    70,    71,   168,   169,   170,  1611,    76,   166,   174,
     279,   273,    52,    53,    54,   175,   176,   279,   313,   179,
     282,  1015,   284,  1243,   214,   215,   216,   217,   218,   321,
     830,   279,  1294,   833,   834,   835,  1909,    55,  1911,   306,
      58,    69,    70,    71,   279,    73,    74,    75,    76,  1043,
    1044,   851,   852,   853,   854,  1275,   319,   319,  1052,  1053,
     322,   301,  1056,   303,  1294,   165,  1060,  1061,  1062,  1063,
     934,   279,   134,   960,   961,   301,   934,   303,  1298,   233,
    1063,  1301,  1302,  1628,   233,   103,  1080,   105,   320,   321,
     322,   323,   301,  1087,   303,  1089,   306,   115,   227,  1401,
    1402,   296,    64,    65,  1098,    67,  1100,    82,    83,  1411,
     177,  1294,  1342,    20,   177,  1515,   177,    24,    25,   342,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,   279,   232,   233,   234,   235,   321,   279,   166,  1327,
     165,   168,   169,   170,  1061,  1032,    53,    54,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   104,  1022,  1342,
    1440,  1441,   255,   256,  1022,   116,   117,   118,   119,   120,
     121,   122,   123,   324,   325,   126,   647,   648,   649,   177,
    1725,  1098,   180,   181,   182,   183,   184,   185,   186,   187,
     297,   100,   101,   191,   134,   279,   280,   192,   193,  1744,
     285,   219,   220,   221,   222,   223,   224,   232,   233,   234,
     235,   184,   185,   231,    93,    94,  1435,     3,  1212,  1213,
    1214,     5,     6,     7,     8,     9,    10,  1221,    89,    90,
       3,  1214,   328,   329,  1228,     3,     4,  1231,  1221,   326,
     327,   173,   260,  1237,  1238,  1228,   286,   287,   288,   289,
     173,  1471,   173,  1473,  1474,   290,   291,   292,   293,   294,
     295,   279,   173,  1257,   282,  1259,   284,  1676,   173,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,  1541,
    1542,    22,  1544,    64,    65,   177,   178,  2045,   268,   269,
    1076,  1077,  1078,  1079,   125,  1289,  1515,   173,  1517,   765,
     766,   319,   342,   173,   322,  1329,  2020,  2021,   294,   295,
     173,  1541,  1542,  1099,  1544,   173,    55,   564,   565,  1313,
     173,   173,   173,  1317,  1318,  1314,   173,  1214,   173,   173,
     173,  1325,  1314,  1220,  1317,  1329,  1330,   173,   173,   173,
    1334,  1335,   190,   110,   342,   173,   173,   173,   173,   173,
    1214,   332,   343,   342,   173,   173,  1214,   173,  1541,  1542,
     127,  1544,  1510,   332,   281,   132,    92,  1361,    98,   321,
     321,   342,   299,   133,   133,   133,   115,   313,   112,  1314,
     290,   291,   292,   293,   294,   295,   174,   112,   111,  1934,
    1384,    55,  1314,   262,   298,  1614,  1347,   172,  1349,   306,
    1351,  1318,   172,   106,  1804,  1356,    38,   237,   173,   176,
     176,   233,   173,  1330,   167,   177,   173,  1314,   180,   181,
     182,   183,   184,   185,   186,   187,   165,   173,   190,   191,
     173,  1425,  1652,  1427,   298,   342,   173,  1431,  1658,  1659,
    1434,   173,  1425,   343,  1427,   173,   173,    23,  1442,   173,
     189,   115,   173,   173,   173,  1464,   173,   173,   173,   177,
     112,   228,   229,   177,   174,   155,  1685,   290,   291,   292,
     293,   294,   295,  1692,   238,   238,     3,   173,  1698,   174,
     174,   172,  1506,   250,   173,   173,   345,  1481,   173,   283,
     174,    82,   231,   232,   233,   234,   235,   206,    79,  1488,
     173,   165,   269,   111,  1498,   272,  1488,   243,     0,     1,
     257,   104,  1506,   172,   111,   282,  1403,  1404,   314,   273,
    1514,   260,   172,   261,   280,   189,   281,   238,   106,   227,
    1816,  1514,  1752,   173,   273,   179,   321,   250,    23,   281,
     279,   342,   104,   265,   321,   284,   111,   342,   158,   173,
     342,   146,   102,  1488,   174,   174,   287,   109,   174,    51,
     312,   110,   342,   342,   134,   174,  1488,   231,   232,   233,
     234,   235,    64,    65,    66,    67,  1570,   173,    88,   173,
     319,   173,   333,   322,   261,    77,    78,    79,    80,   111,
     258,  1488,   342,   342,    86,   257,   260,  1514,   110,    90,
     111,   257,   173,   315,  1613,    20,   234,   180,   181,   182,
     183,   184,   185,   186,   187,   279,  1610,  1611,   191,   268,
     284,    99,   321,  1617,   265,   173,   323,   174,  1611,  1638,
    1639,   174,   174,   174,   342,   174,   342,    64,    65,    66,
      67,   133,   174,   174,   174,  1907,   174,  1866,   281,  1869,
      77,    78,    79,    80,   174,   319,   342,   174,   322,    86,
     342,  1655,   342,   321,   342,   174,   174,   174,  1662,   174,
     174,   104,   174,   161,   173,   173,   173,  1907,   296,   174,
     172,   173,  1676,  1677,   174,   312,    75,   174,    75,  1909,
      72,  1911,   173,  1676,   104,   108,   104,  1691,   174,   102,
    1986,   174,  1696,   174,    16,   266,   266,   321,   265,   111,
     274,  1705,  1706,   172,   265,   173,   241,   174,   236,   174,
     174,   236,  1868,   321,  1907,   143,   250,   177,  1722,   143,
     180,   181,   182,   183,   184,   185,   186,   187,   230,  1958,
     190,   191,   174,   281,   174,   172,   173,   239,   240,   174,
     242,    75,   244,   245,   246,   247,   248,   249,   104,  1753,
     252,  1980,   173,   329,   250,   174,   258,   259,   174,   173,
     264,   274,   238,   342,  1768,   264,  2038,     3,     3,   342,
     172,   228,   274,   342,   134,   277,   342,   267,    77,   237,
     344,   331,   177,  1939,   238,   180,   181,   182,   183,   184,
     185,   186,   187,   230,   310,  1799,   191,   308,  2038,     5,
     174,   174,   239,   240,   174,   242,   174,   343,   173,  1813,
     174,   313,  1816,   342,   265,   252,   265,   343,   344,   342,
     265,   258,   259,   349,   265,   174,   174,   162,   354,   191,
     257,   110,   342,   128,   273,    83,   342,   274,   112,   172,
     277,  1768,  1846,   173,   266,  2038,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,  1863,
     238,   173,   173,   173,   110,   110,   110,   265,  1872,   265,
     174,   326,  1876,   321,   337,   337,   313,  2084,   272,   335,
     110,   173,   264,   342,  1888,   229,  2093,     3,  1892,  1888,
     273,   171,   330,  1897,   301,    85,  1888,    85,  1902,   262,
     133,   312,   238,  1888,  1908,     5,  1910,   433,  1888,   343,
    1914,   238,     5,  1888,   343,   441,   321,   154,   156,   151,
     151,     3,   190,    59,  1928,  1888,   129,   342,   300,   133,
    1888,   173,   312,   174,   159,   312,  1863,   156,   153,   326,
     113,    60,   133,   310,   173,   338,   300,  1951,  1952,  1953,
    1954,   312,   336,   312,    61,   326,   337,   265,   308,   306,
     265,   318,   265,    64,   173,   133,    65,    41,  1087,  1488,
    1974,  1268,   451,   453,  1034,  2014,   210,    36,   760,  1062,
    1984,   209,  1986,     5,     6,     7,  1498,  1643,  2066,  2052,
    2051,  2044,  2013,  1696,  2058,  1687,  1811,  1811,    20,  2075,
    1544,  1790,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,  1789,  1342,   704,   452,
       8,  1476,   157,  1872,  1875,  1947,  1474,  2031,  1473,  2033,
      52,    53,    54,   694,   560,  1402,  1401,  1032,   869,  1225,
    1616,  1238,   943,   641,   903,   866,   425,   571,   706,  1624,
    1142,   683,    35,   653,  2058,   654,  1744,  2061,   655,  2058,
     920,  1711,  1562,   524,   632,  1913,  2058,   593,   594,   595,
    1709,  2075,   924,  2058,   924,   601,  1382,   603,  2058,  1371,
    1569,  1725,  1925,  2058,  1374,  1840,   580,  1933,    -1,    -1,
      -1,   617,   618,   619,    -1,  2058,    -1,    -1,    -1,   602,
    2058,    -1,    -1,    -1,    -1,    -1,    -1,   633,   634,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     646,   647,   648,   649,    -1,    -1,    -1,    -1,    -1,    -1,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,    -1,    -1,    -1,    -1,    -1,   685,
     686,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,   279,    -1,    -1,
      97,    98,    99,    -1,   286,   287,   288,   289,   105,   106,
      -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,
      -1,   118,   119,   120,    -1,    -1,    -1,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,    -1,   163,   164,   165,    -1,
      -1,    -1,    -1,    -1,   171,   172,   173,    -1,   175,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
     197,   198,   199,    -1,    -1,   891,    -1,    -1,    -1,   895,
      -1,    -1,   209,    -1,    -1,   901,    -1,    -1,   904,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,   922,    -1,    -1,   925,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,   960,   961,   273,    -1,   275,    -1,
      -1,    -1,   279,   280,    -1,    -1,   283,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,    -1,    -1,    -1,   304,   305,    -1,
      -1,    -1,    -1,   999,    -1,  1001,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,
     327,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,  1025,
      -1,    -1,    -1,    -1,    -1,    -1,  1032,    20,   345,    -1,
     347,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,     5,     6,     7,
      -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,   132,
     133,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,  1142,   130,   131,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    -1,    -1,    -1,
      -1,   174,    -1,   176,  1160,    -1,    -1,    -1,  1164,    -1,
      -1,    -1,    -1,  1169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,    -1,    -1,  1191,  1192,  1193,  1194,    -1,
      -1,    -1,    -1,    -1,    -1,  1201,    -1,    -1,    -1,    -1,
      -1,  1207,  1208,   134,  1210,   228,   229,   230,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,   252,
      -1,    -1,    -1,    -1,    -1,   258,   259,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,   272,
      -1,    -1,  1258,    -1,   277,    -1,    -1,    -1,    -1,   282,
      -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
     201,   202,   203,   204,   134,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,   342,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,   289,   192,   193,   194,   195,   196,    -1,    -1,    -1,
     200,   201,   202,   203,   204,    -1,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   134,
      -1,    -1,    -1,    -1,    -1,  1371,    -1,    -1,  1374,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1382,    -1,   286,   287,
     288,   289,    -1,  1389,    -1,    -1,  1392,    -1,   134,    -1,
      -1,    -1,    -1,    -1,    -1,  1401,  1402,  1403,  1404,    -1,
      -1,    -1,    -1,    -1,    -1,  1411,    -1,    -1,    -1,    -1,
      -1,   342,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
     195,   196,    -1,    -1,    -1,   200,   201,   202,   203,   204,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,   134,   192,   193,   194,   195,
     196,    -1,    -1,    -1,   200,   201,   202,   203,   204,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   134,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
    1516,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,  1569,    -1,    -1,    -1,   342,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,    -1,    -1,    -1,    -1,  1601,   342,  1603,    -1,    -1,
    1606,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,  1624,    -1,
      -1,    -1,  1628,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1637,    -1,    -1,    -1,    -1,    -1,  1643,    -1,    -1,
      -1,   302,    -1,    -1,    -1,    -1,   192,   193,   194,   195,
     196,    -1,    -1,   342,   200,   201,   202,   203,   204,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   192,   193,   194,   195,   196,    -1,    -1,
      -1,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      -1,  1707,  1708,  1709,    -1,  1711,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,  1725,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,  1744,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,   302,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   301,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,  1803,    -1,    -1,
      97,    98,    99,  1809,    -1,    -1,    -1,    -1,   105,   106,
      -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,
      -1,   118,   119,   120,    -1,    -1,    -1,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,    -1,   163,   164,   165,    -1,
      -1,    -1,    -1,    -1,   171,    -1,   173,    -1,   175,   176,
      -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   188,   189,    -1,    -1,   192,   193,    -1,    -1,    -1,
     197,   198,   199,    -1,    -1,    -1,    -1,  1913,    -1,    -1,
    1916,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,  1934,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,  1972,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,
      -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,    -1,    -1,    -1,   304,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,
     327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,     3,
     347,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
     114,    -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,    -1,   163,
     164,   165,    -1,    -1,    -1,    -1,    -1,   171,   172,   173,
      -1,   175,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
      -1,    -1,    -1,   197,   198,   199,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   320,   321,    -1,    -1,
      -1,    -1,   326,   327,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   345,     3,   347,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,   114,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,   124,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,    -1,   175,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,    -1,    -1,    -1,   197,   198,   199,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,    -1,
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
     321,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   345,     3,   347,     5,     6,     7,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,   197,
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
      -1,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,     3,   347,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
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
      -1,   186,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,
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
      -1,    -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,
      -1,   326,   327,    -1,    -1,    -1,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,
      -1,     3,   347,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,    -1,
      -1,   113,   114,    -1,   116,    -1,   118,   119,   120,    -1,
      -1,    -1,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,
      -1,    -1,    -1,    -1,   326,   327,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,   347,    22,    23,    -1,    -1,
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
      -1,    -1,    -1,   189,    -1,    -1,   192,   193,    -1,    -1,
      -1,   197,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,    -1,
     326,   327,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,   347,    22,    23,    -1,    -1,    26,    27,    28,    -1,
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
     320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,   347,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,
     114,    -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,    -1,   163,
     164,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
      -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
      -1,    -1,    -1,   197,   198,   199,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   320,   321,    -1,    -1,
      -1,    -1,   326,   327,    -1,    -1,    -1,    -1,    -1,    -1,
     334,    -1,    -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,
      -1,    -1,     3,   347,     5,     6,     7,     8,     9,    10,
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
      -1,    -1,    -1,   304,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
     321,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,    -1,    -1,    -1,     3,   347,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,
     118,   119,   120,    -1,    -1,    -1,   124,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,    -1,   163,   164,   165,    -1,    -1,
      -1,    -1,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,   197,
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
      -1,    -1,   300,   301,    -1,    -1,   304,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,
      -1,     3,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,   347,
      22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,    -1,
      -1,   113,   114,    -1,   116,    -1,   118,   119,   120,    -1,
      -1,    -1,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,
      -1,    -1,    -1,    -1,   326,   327,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,   347,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
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
     246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,   300,    -1,    -1,    -1,   304,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,    -1,
     326,   327,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,   347,    22,    23,    -1,    -1,    26,    27,    28,    -1,
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
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,
      -1,   171,    -1,   173,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,    -1,    -1,    -1,   197,   198,   199,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,
     300,    -1,    -1,    -1,   304,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,     3,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,   347,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,
     114,    -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,    -1,   163,
     164,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
      -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
      -1,    -1,    -1,   197,   198,   199,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,    -1,
      -1,    -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,
     264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,
      -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,
      -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,
      -1,    -1,   296,    -1,    -1,    -1,   300,   301,    -1,    -1,
     304,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   320,   321,    -1,    -1,
      -1,    -1,   326,   327,    -1,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,   347,    22,    23,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,
     118,   119,   120,    -1,    -1,    -1,   124,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,    -1,   163,   164,   165,    -1,    -1,
      -1,    -1,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,   197,
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
      -1,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,
      -1,     3,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,   347,
      22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,    -1,
      -1,   113,   114,    -1,   116,    -1,   118,   119,   120,    -1,
      -1,    -1,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   304,   305,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,
      -1,    -1,    22,    23,   326,   327,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,
     120,    -1,    -1,   134,    -1,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,    -1,   158,   159,
     160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,   171,   172,   173,    -1,   175,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,
      -1,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,
     280,    -1,    -1,   283,    -1,    -1,   286,   287,   288,   289,
     301,    -1,    -1,    -1,    -1,    -1,   296,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
     320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,   345,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,
     118,   119,   120,   134,    -1,    -1,    -1,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,    -1,
     158,   159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,
      -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   263,   251,    -1,    -1,    -1,    -1,    -1,   257,
      -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,
     268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,
      -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,   345,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,   107,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,   118,   119,   120,   134,    -1,    -1,    -1,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,    -1,   158,   159,   160,   161,    -1,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,   175,
      -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
      -1,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,   230,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,   252,    -1,    -1,    -1,
      -1,   257,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,   274,   275,
     276,   277,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,   300,    -1,    -1,   303,    -1,    -1,
     306,   307,   308,    -1,    -1,    -1,    -1,   313,     5,     6,
       7,     8,     9,    10,   320,   321,    -1,    -1,    -1,    -1,
     326,   327,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,   112,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,   118,   119,   120,    -1,   134,    -1,    -1,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
      -1,   158,   159,   160,   161,   174,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
      -1,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,   230,   231,    -1,    -1,    -1,    -1,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,   252,    -1,    -1,    -1,    -1,
     257,   258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,   274,   275,   276,
     277,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,   306,
      -1,    -1,    -1,    -1,   311,    -1,   313,     5,     6,     7,
       8,     9,    10,   320,   321,    -1,    -1,    -1,    -1,   326,
     327,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
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
     211,   212,   213,   214,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,   225,   226,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      -1,    -1,   230,   231,    -1,    -1,    -1,    -1,    -1,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,   252,    -1,    -1,    -1,    -1,   257,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,
     268,    -1,   270,    -1,    -1,   273,   274,   275,   276,   277,
      -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,
      -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,   306,    -1,
      -1,    -1,    -1,   311,    -1,   313,     5,     6,     7,     8,
       9,    10,   320,   321,    -1,    -1,    -1,    -1,   326,   327,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,
     119,   120,    -1,   134,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,    -1,   158,
     159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,   184,    -1,    -1,   175,    -1,    -1,    -1,
      -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,   230,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,   252,    -1,    -1,    -1,    -1,   257,   258,
     259,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
      -1,   270,    -1,    -1,   273,   274,   275,   276,   277,    -1,
     279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,
     289,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
      -1,   300,    -1,    -1,    -1,    -1,    -1,   306,    -1,   308,
      -1,    -1,    -1,    -1,   313,     5,     6,     7,     8,     9,
      10,   320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,
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
     230,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,   252,    -1,    -1,    -1,    -1,   257,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,   274,   275,   276,   277,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,
     300,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,
      -1,    -1,   312,   313,     5,     6,     7,     8,     9,    10,
     320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,
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
      -1,   134,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,    -1,   158,   159,   160,
     161,   174,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,   192,
     193,   194,   195,   196,    -1,    -1,    -1,   200,   201,   202,
     203,   204,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,   230,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,   252,    -1,    -1,    -1,    -1,   257,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,
      -1,    -1,   273,   274,   275,   276,   277,    -1,   279,   280,
      -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,
      -1,    -1,    -1,    -1,    -1,   306,     5,     6,     7,     8,
       9,    10,   313,    -1,    -1,    -1,    -1,    -1,    -1,   320,
     321,    -1,    -1,    22,    23,   326,   327,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,
     119,   120,    -1,   134,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,    -1,   158,
     159,   160,   161,   174,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    -1,    -1,   175,    -1,    -1,    -1,
      -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,   258,
     259,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
      -1,   270,    -1,    -1,   273,   274,   275,   276,    -1,    -1,
     279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,
     289,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
      -1,   300,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,
      -1,    -1,   311,    -1,   313,     5,     6,     7,     8,     9,
      10,   320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,
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
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,    -1,    -1,    -1,    -1,   257,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,   274,   275,   276,    -1,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,
     300,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,
      -1,    -1,   312,   313,    -1,    -1,    -1,    -1,    -1,    -1,
     320,   321,    -1,    -1,    -1,    -1,   326,   327,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,   118,   119,   120,    -1,   134,    -1,    -1,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
      -1,   158,   159,   160,   161,   174,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
      -1,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,   221,   222,   223,   224,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,
      -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,
     327,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,   118,   119,   120,    -1,   134,    -1,    -1,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
      -1,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,    -1,   158,   159,   160,   161,   174,   163,    -1,
     165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,
     175,    -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,
      -1,    -1,    -1,   200,   201,   202,   203,   204,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,
      -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,
      -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   320,   321,    -1,    -1,    -1,
      -1,   326,   327,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,    -1,   118,   119,   120,   134,    -1,
      -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,    -1,   146,    -1,   148,   149,   150,   151,   152,
     153,   154,    -1,   156,    -1,   158,   159,   160,   161,    -1,
     163,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,
      -1,    -1,   175,    -1,    -1,    -1,   192,   193,   194,   195,
     196,    -1,    -1,    -1,   200,   201,   202,   203,   204,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,   232,
     233,   234,   235,    -1,    -1,   238,    -1,    -1,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
      -1,    -1,    -1,    -1,   257,    -1,    -1,   260,    -1,    -1,
      -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,
     273,    -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,
      -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,
      -1,    -1,    -1,   296,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,   320,   321,    -1,
      -1,    -1,    -1,   326,   327,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,    -1,   158,   159,   160,
     161,    -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,
      -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,
      -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,
      -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   320,
     321,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,
     119,   120,    -1,    -1,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,    -1,   158,
     159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
      -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,
     279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,
     289,    -1,    -1,    -1,    -1,    -1,    -1,   296,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,   118,   119,   120,    -1,    -1,    -1,    -1,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
      -1,   158,   159,   160,   161,    -1,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,
      -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,
     327,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,    -1,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
      -1,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,    -1,   158,   159,   160,   161,    -1,   163,    -1,
     165,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,
      -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,
      -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   320,   321,    -1,    -1,    -1,
      -1,   326,   327,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,    -1,   118,   119,   120,    -1,    -1,
      -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,    -1,   146,    -1,   148,   149,   150,   151,   152,
     153,   154,    -1,   156,    -1,   158,   159,   160,   161,    -1,
     163,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,
      -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,
      -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
      -1,    -1,    -1,    -1,   257,    -1,    -1,   260,    -1,    -1,
      -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,
     273,    -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,
      -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,
      -1,    -1,    -1,   296,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,   320,   321,    -1,
      -1,    -1,    -1,   326,   327,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,    -1,   158,   159,   160,
     161,    -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,
      -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,
      -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,
      -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   320,
     321,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,
     119,   120,    -1,    -1,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,    -1,   158,
     159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    -1,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
     229,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
      -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,
     279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,
     289,    -1,    -1,    -1,    -1,    -1,    -1,   296,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,   118,   119,   120,    -1,    -1,    -1,    -1,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
      -1,   158,   159,   160,   161,    -1,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,   274,   275,    -1,
      -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,
     327,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,    -1,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
      -1,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,    -1,   158,   159,   160,   161,    -1,   163,    -1,
     165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,
      -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,
      -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,   320,   321,    -1,    -1,    -1,
      -1,   326,   327,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,    -1,   118,   119,   120,    -1,    -1,
      -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,    -1,   146,    -1,   148,   149,   150,   151,   152,
     153,   154,    -1,   156,    -1,   158,   159,   160,   161,    -1,
     163,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,
      -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,
      -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
      -1,    -1,    -1,    -1,   257,    -1,    -1,   260,    -1,    -1,
      -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,
     273,    -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,
      -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,
      -1,    -1,    -1,   296,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,   320,   321,    -1,
      -1,    -1,    -1,   326,   327,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,    -1,   158,   159,   160,
     161,    -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,   229,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,
      -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,
      -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,
      -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,   320,
     321,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,
     119,   120,    -1,    -1,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,    -1,   158,
     159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    -1,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
      -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,
     279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,
     289,    -1,    -1,    -1,    -1,    -1,    -1,   296,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,   118,   119,   120,    -1,    -1,    -1,    -1,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
      -1,   158,   159,   160,   161,    -1,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,
      -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,
     327,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,    -1,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
      -1,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,    -1,   158,   159,   160,   161,    -1,   163,    -1,
     165,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,
      -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,
      -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,
      -1,   326,   327
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    64,    65,    66,    67,    77,    78,    79,
      80,    86,   133,   172,   173,   230,   239,   240,   242,   244,
     245,   246,   247,   248,   249,   252,   258,   259,   274,   277,
     313,   349,   355,   356,   359,   360,   361,   362,   364,   366,
     367,   376,   381,   393,   398,   399,   405,   450,   453,   461,
     482,   496,   500,   501,   502,   510,   525,   526,   527,   545,
     549,   550,   551,   554,   675,   133,   111,     5,     6,     7,
       8,     9,    10,    22,    23,    26,    38,    41,    52,    63,
      80,    83,    86,    92,    97,    98,    99,   105,   113,   116,
     118,   119,   120,   125,   126,   142,   143,   146,   148,   149,
     150,   151,   152,   153,   154,   156,   158,   159,   160,   161,
     163,   165,   171,   175,   219,   220,   227,   231,   238,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   251,   257,
     260,   264,   267,   268,   270,   273,   275,   279,   280,   286,
     287,   288,   289,   296,   320,   321,   326,   327,   643,   669,
     670,   189,   251,   536,   262,    81,   507,   507,   669,    79,
      87,   546,   547,   669,    66,   554,   179,    67,    69,    70,
     614,   615,   616,   669,   643,   352,   351,   353,   354,   350,
       5,    11,   673,   676,     5,     6,     7,     8,     9,    10,
      64,    65,    66,    67,   189,   249,   272,   313,   377,   384,
     385,   386,   388,   389,   390,   667,   668,   258,   261,   382,
     383,    58,    87,    55,   115,   279,    11,   173,   234,   298,
     445,   446,   518,   545,   551,   658,   672,     0,    17,    55,
      58,   103,   105,   115,   219,   220,   221,   222,   223,   224,
     231,   260,   273,   279,   282,   284,   322,   406,   407,   410,
     411,   444,   165,   232,   233,   234,   235,    55,   115,   165,
     189,   231,   232,   233,   234,   235,   260,   273,   279,   284,
     319,   322,   495,    55,    56,    57,    63,   173,   260,   273,
     287,   449,   640,   669,   219,   220,   279,   365,   410,   442,
     669,   133,   102,   168,   169,   170,   570,   133,   643,   274,
     343,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    18,    19,    27,    28,    44,    45,    46,
      47,    48,    49,    50,    62,   106,   110,   114,   124,   134,
     135,   136,   137,   138,   140,   141,   144,   145,   147,   157,
     164,   173,   176,   192,   193,   197,   198,   199,   206,   209,
     286,   287,   288,   289,   300,   304,   305,   345,   347,   532,
     557,   568,   569,   577,   578,   579,   580,   582,   584,   585,
     587,   589,   591,   592,   594,   595,   596,   597,   598,   599,
     600,   613,   614,   617,   619,   620,   621,   623,   624,   625,
     626,   627,   640,   641,   642,   644,   645,   647,   662,   665,
     669,   674,   683,   684,   685,   686,   687,   701,   708,   710,
     713,   723,   724,   754,   643,   190,   508,   508,   669,    88,
      91,    97,   503,   504,   505,   342,   548,   551,   448,   449,
     536,   174,   320,   173,   343,   448,   362,   362,   349,   349,
     362,   173,   448,   448,   270,   448,   111,   262,   281,   342,
     281,   342,   265,   342,   266,   266,   384,   377,    87,   503,
     274,   669,   643,   643,   445,   554,   262,   658,   262,    27,
     262,   298,   314,   219,   220,   669,   219,   220,   643,   279,
     279,   279,   279,   643,   669,   306,   358,   358,   643,   643,
     319,   279,   233,   643,   643,   643,   643,   669,   643,   233,
     165,   232,   233,   234,   235,   643,   643,   643,   643,   643,
     669,   306,   357,   357,   357,   643,   643,    42,    43,   499,
     227,   442,   669,   669,   296,   177,   177,   177,   342,     5,
       6,     7,    20,    24,    25,    26,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    52,    53,    54,   286,   287,
     288,   289,   342,   632,   639,   660,   662,   663,   664,   665,
     104,   189,   251,   555,   555,   555,   297,   571,   285,   539,
     449,   537,   538,   666,   669,   669,   674,   674,   674,   173,
     173,    22,   173,   618,   618,   618,   618,   618,   173,   594,
     173,   125,   669,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   283,   545,   551,   568,   578,
     586,   614,   669,   578,   173,   596,   596,   173,   173,   173,
     596,   674,   173,   630,   173,   631,   192,   193,   628,   301,
     596,   652,   653,   173,   173,   578,   590,   111,   262,   558,
     559,   179,   321,   622,   190,   177,   180,   181,   182,   183,
     184,   185,   186,   187,   191,   643,   134,   192,   193,   194,
     195,   196,   200,   201,   202,   203,   204,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     263,   332,   343,   342,   173,   173,   173,   674,   674,   343,
     173,   250,   283,   446,   449,   528,    82,    83,   281,   509,
      89,    90,    92,    98,   342,   547,   321,   557,   174,   533,
     596,   648,   616,   669,   299,   573,   133,   133,   133,   173,
     174,   531,   533,   535,   554,   271,   391,   392,   667,   667,
     391,   386,   165,   279,   387,   495,   643,   390,   112,   112,
     111,   111,   503,   255,   256,   408,   172,   254,   274,   394,
     116,   117,   118,   119,   120,   121,   122,   123,   126,   321,
     401,   403,   404,   252,   274,   277,   278,   174,   643,   317,
     674,   262,   643,   658,   298,   172,    86,   321,   400,   402,
     404,   358,   358,   358,   358,   237,   172,   374,   176,   227,
     368,   669,   643,   448,   324,   325,   483,   669,   358,   643,
     173,   173,   173,   173,   643,   233,   643,   643,   643,   643,
     499,   173,   497,   497,   497,   497,   106,   643,   643,   643,
     669,   174,    58,   289,   642,   594,   669,   568,   442,   173,
     173,    21,    22,   173,   173,   173,    38,   173,   630,   631,
     290,   291,   292,   293,   294,   295,   633,   635,   637,   638,
     669,   173,   173,   173,   173,   574,   575,   596,   167,   556,
     556,   556,   598,   657,   672,   298,   572,   568,   177,   342,
     559,   177,   343,   568,   646,   646,    23,   174,   295,   633,
     634,   112,   596,   597,   596,   680,   681,   682,   680,   238,
     155,   702,   728,   152,   154,   726,   238,     3,   714,   597,
     115,   725,   726,   680,   173,   529,   174,   174,   174,   174,
     342,   343,   596,   596,   596,   673,   172,   629,   673,   629,
     674,   568,   301,   650,   651,   303,   652,   654,   596,   533,
     649,   342,   346,    68,   173,   345,   540,   560,   561,   593,
     614,   643,   669,   552,   553,   669,   539,   569,   669,   578,
     178,   188,   189,   578,   588,   583,   596,   583,   583,   583,
     173,   173,   100,   101,   581,   581,   578,   588,   591,   596,
     596,   596,   596,   596,   596,   596,   596,   596,   596,   596,
     596,   596,   596,   596,   596,   596,   596,   596,   596,   596,
     596,   596,   596,   110,   176,   173,   206,   621,   174,   189,
     206,   251,   596,   655,   669,   655,     8,     9,    10,   206,
     669,   283,   529,   528,    82,    79,    88,    95,    96,   506,
     673,   505,   173,   593,   174,   342,    14,   598,   658,   243,
     363,   174,   342,   172,   342,   379,   172,   378,   643,   391,
     391,   257,   408,   281,   273,   104,   172,   657,   657,   657,
     660,   403,   229,   279,   280,   396,   397,    67,    88,   395,
     397,   279,   397,   111,    16,   516,   517,   516,   643,   448,
     314,   658,   408,   172,   660,   402,   643,   643,   643,   643,
     238,   261,   106,   369,   669,   250,   370,   227,   111,   173,
     413,   414,   448,   321,    64,    65,    67,   484,   265,   643,
     173,   206,   480,   481,   669,   480,   480,   480,   497,   643,
     499,   499,   499,   499,   174,   498,   660,   499,   499,   499,
     660,   656,   673,   656,    23,   656,   656,   656,   673,    53,
     661,   674,   629,   629,   631,   630,   281,   656,   673,   656,
     656,   656,   342,   225,   226,   576,   104,   554,   554,   554,
     598,   658,   573,   594,   538,   539,   568,   669,   321,   342,
     111,   643,   158,   727,   342,   727,   727,   669,   689,   173,
     596,   703,   704,   705,   342,   597,   669,   711,   146,   715,
     727,   680,   570,   530,   533,   534,   174,   342,   184,   185,
     578,   342,   184,   111,   342,   174,   287,   674,   174,   674,
     638,   302,   596,   650,   654,   596,   312,   342,   342,   174,
     342,   578,   594,   614,   173,   283,   540,   545,   551,   561,
     562,   342,    69,    70,    71,    73,    74,    76,   166,   541,
     543,   321,   563,   669,   563,   564,   564,   343,   342,   558,
     109,   565,   578,   107,   531,   531,   578,   578,   594,   110,
     333,   601,   602,   655,   174,   655,   174,   343,   342,   343,
     669,    93,    94,    88,   533,   535,   261,   392,   111,   380,
     258,   380,   380,   380,   674,   257,   669,   669,   657,   594,
     658,   669,   669,   669,    90,    89,    90,   669,   643,   229,
     417,   420,   431,   432,   666,   614,   110,   519,   315,   519,
     448,   111,   257,   658,   413,   413,   413,   413,   669,    56,
      62,   375,    20,   268,   677,   678,   369,   234,   182,   416,
     417,   418,   423,   443,   669,    99,   409,   321,   445,   323,
     265,   643,   413,   480,   174,   342,   660,   174,   174,   174,
     499,   174,   342,   174,   174,   174,   174,   342,   174,   342,
     174,   342,   295,   633,   636,   174,   342,   174,   174,   174,
     575,   173,   660,   660,   596,   115,   154,   174,   680,   174,
     174,   342,   688,    83,   250,   596,   729,   730,   732,   733,
     734,   266,   342,   699,   321,   706,    84,   142,   709,   342,
     712,   104,   716,   736,   727,   174,   161,   737,   738,   727,
     174,   342,   173,   173,   173,   596,   596,   596,   596,   296,
     533,   302,   312,   596,   533,   533,   563,   564,   529,   174,
     174,   174,   554,   561,   541,    75,   561,    75,    72,   542,
     669,   173,   669,   553,   104,   108,   567,   674,   174,   174,
     190,   190,   104,   174,   102,   603,   174,   174,   206,   655,
     669,   266,   375,   266,    16,   674,   499,   499,   499,   252,
     274,   669,   253,   269,   282,   440,   130,   131,   419,   660,
     321,   488,   674,   111,   173,   316,   523,   524,   674,   674,
     265,   274,   669,   671,   679,   355,   359,   371,   372,   373,
     376,   381,   393,   398,   496,   614,   643,   174,   342,   172,
     669,   445,   172,   447,   442,   643,   173,   265,   412,   174,
      66,    80,    86,   237,   240,   276,   300,   306,   311,   364,
     366,   367,   376,   381,   393,   398,   454,   457,   459,   460,
     461,   465,   467,   473,   475,   476,   496,   500,   501,   550,
     669,   669,   236,   241,   236,   498,   659,   673,   673,   673,
     631,   673,   566,   644,   669,   174,   174,   174,   139,   596,
     690,   696,   697,   698,   728,   727,   250,   732,   174,   342,
     321,   110,   148,   150,   151,   700,   704,   727,   669,   707,
     143,   143,   174,   597,   727,   125,   149,   597,   717,   718,
     719,   720,   721,   736,   281,   174,   174,   534,   530,   531,
     531,   342,   174,   112,   174,   174,   342,   533,   174,   174,
     346,    75,   561,    16,   265,   544,   561,   173,   671,   566,
     568,   578,   578,   566,   104,    85,   340,   604,   605,   174,
     174,   329,   274,   250,    99,   110,   176,   250,   264,   264,
     449,   127,   132,   250,   421,   422,   425,   426,   428,   429,
     432,   674,   342,   523,   524,   173,   513,   513,   342,   238,
       3,   669,   342,   373,   418,   669,   267,     3,   172,   415,
     228,   331,   485,   442,    77,   237,   536,   238,   462,   463,
     643,   279,   446,   466,   568,   301,   470,   471,   596,   568,
     310,   455,   308,   344,   660,   279,   479,   660,     5,   479,
     174,   174,   174,   174,   174,   342,   343,   173,   342,   342,
     699,   342,   174,   730,   669,   731,   265,   265,   265,   265,
     174,   174,   321,   735,   736,   342,   110,   151,   722,   162,
     174,   174,   174,   596,   596,   596,   563,   561,   449,   568,
     544,   671,   174,   574,   186,   334,   341,   597,   606,   607,
     608,   609,   257,   273,     3,   110,   110,   427,   595,   449,
     449,   128,   427,   425,   110,   176,   228,   269,   272,   282,
     439,   441,   674,    83,   522,   174,   514,   515,   669,   516,
     516,   674,   674,   669,   173,    83,   171,   266,   328,   329,
     486,   487,   112,   490,   491,   174,    64,    84,   252,   238,
     557,   451,   669,   173,   173,   568,   303,   470,   472,   301,
     468,   469,   302,   455,   457,   568,   173,   237,   241,   454,
       4,   452,   674,   237,   241,   644,   669,   596,   691,   692,
     694,   696,   698,   690,   696,   110,    83,   110,   110,   110,
     669,   718,   265,   265,   174,    83,   160,   163,   739,   740,
     745,   174,   174,   174,   174,   607,   326,   337,   337,   335,
     612,   674,   669,   272,   321,   110,   173,   264,   643,   342,
     229,   174,   342,     3,   519,   519,   273,   424,   425,   171,
     279,   326,   489,   279,   489,   487,   330,   301,   493,    85,
      85,   451,   343,   464,   596,   446,   302,   455,   312,   596,
     468,   472,   455,   457,   133,   309,   478,   666,   238,     5,
     238,     5,   174,   342,   321,   693,   342,   154,   735,   151,
     151,   156,   669,   746,     3,   741,   742,    83,   153,   156,
     747,   748,   750,   751,   190,    83,   109,   334,   339,   643,
     129,   568,   448,   674,   515,    59,   520,   520,   669,   174,
     342,   488,   488,   488,   488,   326,   327,   492,   173,   311,
     364,   366,   376,   381,   458,   459,   494,   500,   501,   550,
     669,   174,   342,   174,   455,   457,   300,   302,   312,   303,
     307,   474,   133,   312,   455,   174,   342,   660,   451,   452,
     451,   452,   692,   669,   695,   696,   159,   743,   743,   156,
     669,   753,   742,   752,   749,   750,   334,   341,   597,   610,
     611,   338,   326,   448,   173,   430,   174,   113,   438,    60,
     521,   521,   425,   669,   669,   669,   669,   568,   310,   596,
     133,   455,   300,   455,   568,   312,   312,   312,   666,   742,
     744,   326,   336,   337,   438,   400,    39,    40,    71,   437,
     265,   434,   435,   436,    61,   522,   522,   174,   456,   302,
     306,   308,   660,   436,   174,    64,    65,   265,   435,   265,
     434,   318,   511,   312,   458,   455,   477,   669,    42,    43,
      83,   274,   433,   433,   173,   133,   474,    41,   110,   250,
     512,   658,   174,   342,   658
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
#line 683 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 11:
#line 684 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 12:
#line 689 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 13:
#line 690 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym); YYACCEPT; }
    break;

  case 14:
#line 691 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 15:
#line 692 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 16:
#line 693 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 17:
#line 694 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYABORT; }
    break;

  case 18:
#line 699 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 20:
#line 703 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 21:
#line 707 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 22:
#line 708 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 23:
#line 711 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 24:
#line 712 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 36:
#line 735 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(2) - (5)].l));
		append_list(l, (yyvsp[(3) - (5)].l));
		append_symbol(l, (yyvsp[(4) - (5)].sym));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
    break;

  case 38:
#line 745 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 39:
#line 746 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 40:
#line 751 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[(2) - (2)].l)); }
    break;

  case 41:
#line 752 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 42:
#line 757 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(1) - (2)].l) );
		append_type(l, &(yyvsp[(2) - (2)].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 43:
#line 762 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l) );
		append_type(l, &(yyvsp[(4) - (4)].type) );
		(yyval.l) = append_symbol((yyvsp[(1) - (4)].l), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 44:
#line 771 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, (yyvsp[(2) - (4)].sval) );
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 45:
#line 776 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (4)].l));
	  	append_symbol(l, (yyvsp[(4) - (4)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_SET, l ); }
    break;

  case 46:
#line 781 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 47:
#line 789 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 48:
#line 797 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 49:
#line 805 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 50:
#line 813 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 51:
#line 819 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 52:
#line 828 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(4) - (7)].l));
		append_symbol(l, (yyvsp[(5) - (7)].sym));
		append_symbol(l, (yyvsp[(6) - (7)].sym));
		append_list(l, (yyvsp[(7) - (7)].l));
		append_int(l, (yyvsp[(3) - (7)].bval));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
    break;

  case 53:
#line 836 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(4) - (5)].l));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		append_int(l, (yyvsp[(3) - (5)].bval));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
    break;

  case 54:
#line 845 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (1)].sval) );
	  append_string((yyval.l), NULL ); }
    break;

  case 55:
#line 849 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[(2) - (2)].sval) ); }
    break;

  case 56:
#line 853 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (3)].sval) );
	  append_string((yyval.l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 58:
#line 862 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 59:
#line 863 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[(4) - (4)].sval) ); }
    break;

  case 60:
#line 867 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 62:
#line 872 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 63:
#line 874 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 69:
#line 880 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 70:
#line 881 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 71:
#line 885 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 72:
#line 886 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_role; }
    break;

  case 73:
#line 891 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
    break;

  case 74:
#line 901 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
    break;

  case 75:
#line 910 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 76:
#line 912 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 77:
#line 916 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 78:
#line 917 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 79:
#line 921 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 80:
#line 922 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 81:
#line 927 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 82:
#line 928 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 83:
#line 933 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
    break;

  case 84:
#line 941 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
    break;

  case 85:
#line 950 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 86:
#line 951 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 87:
#line 955 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 88:
#line 956 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 89:
#line 961 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (1)].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
    break;

  case 90:
#line 965 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (3)].l));
	  append_symbol((yyval.l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 91:
#line 971 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(L(), (yyvsp[(1) - (1)].i_val)); }
    break;

  case 92:
#line 973 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(append_int(L(), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val)); }
    break;

  case 93:
#line 977 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
    break;

  case 94:
#line 978 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
    break;

  case 95:
#line 982 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(2) - (2)].l)); }
    break;

  case 96:
#line 983 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[(1) - (1)].l)); }
    break;

  case 97:
#line 984 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[(1) - (1)].l)); }
    break;

  case 98:
#line 995 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 99:
#line 996 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 101:
#line 1001 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 102:
#line 1003 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 103:
#line 1007 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
    break;

  case 104:
#line 1008 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
    break;

  case 105:
#line 1009 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[(2) - (2)].l)); }
    break;

  case 106:
#line 1010 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 107:
#line 1011 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 108:
#line 1012 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
    break;

  case 109:
#line 1016 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 110:
#line 1018 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 111:
#line 1022 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 112:
#line 1023 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 113:
#line 1031 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 114:
#line 1036 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, (yyvsp[(6) - (6)].l)));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 115:
#line 1041 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 116:
#line 1046 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 117:
#line 1051 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 118:
#line 1056 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 119:
#line 1061 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 120:
#line 1066 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (4)].sval));
	  append_list(l, (yyvsp[(4) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 121:
#line 1071 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
    break;

  case 122:
#line 1076 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 123:
#line 1088 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (4)].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[(2) - (4)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 124:
#line 1094 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 125:
#line 1101 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (7)].sval));
				  append_string(l, (yyvsp[(7) - (7)].sval));
				  append_int(l, (yyvsp[(2) - (7)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 126:
#line 1111 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
    break;

  case 127:
#line 1116 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
    break;

  case 128:
#line 1120 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
    break;

  case 129:
#line 1124 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[(2) - (4)].sval)); }
    break;

  case 130:
#line 1126 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  if (!strlen((yyvsp[(5) - (5)].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 131:
#line 1134 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 132:
#line 1142 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
    break;

  case 133:
#line 1147 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
    break;

  case 134:
#line 1152 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  append_int(l, 0);
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 135:
#line 1160 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 136:
#line 1161 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 137:
#line 1165 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 138:
#line 1166 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 139:
#line 1167 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 145:
#line 1189 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
    break;

  case 146:
#line 1200 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (3)].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
    break;

  case 147:
#line 1217 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
    break;

  case 148:
#line 1226 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 149:
#line 1227 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 150:
#line 1231 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 151:
#line 1232 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 152:
#line 1236 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 153:
#line 1237 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 154:
#line 1238 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 155:
#line 1242 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 156:
#line 1243 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
    break;

  case 157:
#line 1244 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[(3) - (3)].l_val)));  }
    break;

  case 158:
#line 1245 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[(3) - (3)].sym)));  }
    break;

  case 159:
#line 1246 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 160:
#line 1250 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 161:
#line 1251 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 162:
#line 1252 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
    break;

  case 163:
#line 1253 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 164:
#line 1254 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
    break;

  case 165:
#line 1255 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 166:
#line 1256 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
    break;

  case 167:
#line 1257 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
    break;

  case 168:
#line 1265 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (9)].sval));
	  append_int(l, (yyvsp[(2) - (9)].i_val));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
    break;

  case 169:
#line 1274 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 170:
#line 1275 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ordered_idx; }
    break;

  case 171:
#line 1276 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imprints_idx; }
    break;

  case 172:
#line 1277 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 173:
#line 1298 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval));
	  append_int(l, (yyvsp[(3) - (3)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
    break;

  case 174:
#line 1303 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (10)].sval));
	  append_string(l, (yyvsp[(6) - (10)].sval));
	  append_string(l, (yyvsp[(8) - (10)].sval));
	  append_string(l, (yyvsp[(10) - (10)].sval));
	  append_int(l, (yyvsp[(4) - (10)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
    break;

  case 175:
#line 1313 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 176:
#line 1314 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 177:
#line 1315 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
    break;

  case 178:
#line 1319 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 179:
#line 1320 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 180:
#line 1325 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, SQL_PERSIST);
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[(2) - (5)].bval));
	  append_list(l, (yyvsp[(5) - (5)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 181:
#line 1337 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
      dlist *l = L();
      append_list(l, (yyvsp[(3) - (6)].l));
      append_symbol(l, (yyvsp[(6) - (6)].sym));
      (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE_LOADER, l);
    }
    break;

  case 182:
#line 1344 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_STREAM;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 183:
#line 1355 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_MERGE_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 184:
#line 1366 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_REPLICA_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 185:
#line 1380 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT, tpe = SQL_REMOTE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_symbol(l, (yyvsp[(5) - (7)].sym));
	  append_int(l, commit_action);
	  append_string(l, (yyvsp[(7) - (7)].sval));
	  append_int(l, (yyvsp[(3) - (7)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 186:
#line 1391 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, (yyvsp[(1) - (6)].i_val));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  if ((yyvsp[(1) - (6)].i_val) != SQL_PERSIST)
		commit_action = (yyvsp[(6) - (6)].i_val);
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[(3) - (6)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
    break;

  case 187:
#line 1406 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 188:
#line 1407 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 189:
#line 1408 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 190:
#line 1409 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 191:
#line 1410 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 192:
#line 1411 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 193:
#line 1415 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_COMMIT; }
    break;

  case 194:
#line 1416 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DELETE; }
    break;

  case 195:
#line 1417 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_PRESERVE; }
    break;

  case 196:
#line 1418 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DROP; }
    break;

  case 197:
#line 1422 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[(2) - (3)].l)); }
    break;

  case 198:
#line 1423 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[(1) - (1)].l)); }
    break;

  case 199:
#line 1431 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (4)].l));
			  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym)); 
			  append_int((yyval.l), (yyvsp[(4) - (4)].i_val)); }
    break;

  case 200:
#line 1437 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 201:
#line 1438 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 202:
#line 1439 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 203:
#line 1444 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 204:
#line 1446 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 210:
#line 1453 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 211:
#line 1454 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 212:
#line 1459 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
			dlist *l = L();
			append_string(l, (yyvsp[(1) - (3)].sval));
			append_type(l, &(yyvsp[(2) - (3)].type));
			append_list(l, (yyvsp[(3) - (3)].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 213:
#line 1467 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 214:
#line 1519 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 216:
#line 1525 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 217:
#line 1527 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 218:
#line 1533 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (6)].sval) );
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
    break;

  case 219:
#line 1541 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 220:
#line 1543 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 224:
#line 1549 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 225:
#line 1553 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 226:
#line 1559 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 227:
#line 1567 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 228:
#line 1596 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 229:
#line 1633 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 230:
#line 1634 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 231:
#line 1641 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 232:
#line 1650 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 233:
#line 1651 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 234:
#line 1655 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 235:
#line 1656 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 236:
#line 1657 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 237:
#line 1658 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 238:
#line 1659 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 239:
#line 1663 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(3) - (3)].i_val) << 8); }
    break;

  case 240:
#line 1667 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 241:
#line 1671 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
    break;

  case 242:
#line 1672 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 243:
#line 1673 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 244:
#line 1674 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 245:
#line 1675 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 246:
#line 1679 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 247:
#line 1680 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 248:
#line 1681 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 249:
#line 1682 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 250:
#line 1686 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 251:
#line 1687 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 252:
#line 1691 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
    break;

  case 253:
#line 1692 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
    break;

  case 254:
#line 1693 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
    break;

  case 255:
#line 1694 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
    break;

  case 256:
#line 1697 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(2) - (5)].l) );
			  append_list(l, (yyvsp[(3) - (5)].l) );
			  append_int(l, (yyvsp[(4) - (5)].i_val) );
			  append_int(l, (yyvsp[(5) - (5)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 258:
#line 1710 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[(2) - (2)].l)); }
    break;

  case 259:
#line 1712 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[(3) - (3)].l)); }
    break;

  case 260:
#line 1716 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(5) - (8)].l) );
			  append_list(l, (yyvsp[(3) - (8)].l) );
			  append_list(l, (yyvsp[(6) - (8)].l) );
			  append_int(l, (yyvsp[(7) - (8)].i_val) );
			  append_int(l, (yyvsp[(8) - (8)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 261:
#line 1728 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 262:
#line 1733 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 263:
#line 1735 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 264:
#line 1739 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 265:
#line 1744 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_int(l, (yyvsp[(6) - (6)].bval));
	  append_int(l, TRUE);	/* persistent view */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 267:
#line 1756 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 270:
#line 1765 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 271:
#line 1766 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 272:
#line 1770 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 274:
#line 1775 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 275:
#line 1780 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				append_list(l, (yyvsp[(3) - (6)].l));
				append_string(l, (yyvsp[(6) - (6)].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
    break;

  case 276:
#line 1787 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 279:
#line 1802 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (11)].l));
				append_list(f, (yyvsp[(5) - (11)].l));
				append_symbol(f, (yyvsp[(8) - (11)].sym));
				append_list(f, (yyvsp[(11) - (11)].l));
				append_list(f, NULL);
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[(1) - (11)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 280:
#line 1816 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (9)].l));
				append_list(f, (yyvsp[(5) - (9)].l));
				append_symbol(f, (yyvsp[(8) - (9)].sym));
				append_list(f, NULL);
				append_list(f, (yyvsp[(9) - (9)].l));
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_SQL);
				append_int(f, (yyvsp[(1) - (9)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 281:
#line 1829 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(10) - (11)].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p')
            {
            	// code does not get cleaner than this people
                if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY;
                } else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON3_MAP") == 0) {
                	lang = FUNC_LANG_MAP_PY3;
                } else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON3") == 0) {
                	lang = FUNC_LANG_PY3;
                } else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON2_MAP") == 0) {
                	lang = FUNC_LANG_MAP_PY2;
                } else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON2") == 0) {
                	lang = FUNC_LANG_PY2;
                } else {
                	lang = FUNC_LANG_PY;
                }
            }
			else if (l == 'C' || l == 'c')
				lang = FUNC_LANG_C;
			else if (l == 'J' || l == 'j')
				lang = FUNC_LANG_J;
			else {
				char *msg = sql_message("Language name R, C, PYTHON[3], PYTHON[3]_MAP or J(avascript):expected, received '%c'", l);
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
			append_int(f, (yyvsp[(1) - (11)].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 282:
#line 1875 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(4) - (10)].l));
				append_list(f, (yyvsp[(6) - (10)].l)); 
				/* no returns - use OID */
				append_symbol(f, NULL); 
				append_list(f, (yyvsp[(10) - (10)].l));
				append_list(f, NULL);
				append_int(f, F_FILT);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[(1) - (10)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 283:
#line 1890 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (11)].l));
				append_list(f, (yyvsp[(5) - (11)].l));
				append_symbol(f, (yyvsp[(8) - (11)].sym));
				append_list(f, (yyvsp[(11) - (11)].l));
				append_list(f, NULL);
				append_int(f, F_AGGR);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[(1) - (11)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 284:
#line 1903 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[(10) - (11)].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p')
            {
                if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY;
                } else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON3_MAP") == 0) {
                	lang = FUNC_LANG_MAP_PY3;
                } else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON3") == 0) {
                	lang = FUNC_LANG_PY3;
                } else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON2_MAP") == 0) {
                	lang = FUNC_LANG_MAP_PY2;
                } else if (strcasecmp((yyvsp[(10) - (11)].sval), "PYTHON2") == 0) {
                	lang = FUNC_LANG_PY2;
                } else {
                	lang = FUNC_LANG_PY;
                }
            }
			else if (l == 'C' || l == 'c')
				lang = FUNC_LANG_C;
			else if (l == 'J' || l == 'j')
				lang = FUNC_LANG_J;
			else {
				char *msg = sql_message("Language name R, C, PYTHON[3], PYTHON[3]_MAP or J(avascript):expected, received '%c'", l);
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
			append_int(f, (yyvsp[(1) - (11)].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 285:
#line 1949 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (9)].l));
				append_list(f, (yyvsp[(5) - (9)].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, (yyvsp[(9) - (9)].l));
				append_list(f, NULL);
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[(1) - (9)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 286:
#line 1962 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *f = L();
				append_list(f, (yyvsp[(3) - (7)].l));
				append_list(f, (yyvsp[(5) - (7)].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, NULL); 
				append_list(f, (yyvsp[(7) - (7)].l));
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_SQL);
				append_int(f, (yyvsp[(1) - (7)].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 287:
#line 1974 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
			append_int(f, (yyvsp[(1) - (9)].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
    break;

  case 288:
#line 1999 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[(1) - (1)].sym)); }
    break;

  case 289:
#line 2003 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(2) - (5)].l),(yyvsp[(3) - (5)].sym)); }
    break;

  case 290:
#line 2007 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(3) - (6)].l),(yyvsp[(4) - (6)].sym)); }
    break;

  case 291:
#line 2022 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 292:
#line 2024 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 293:
#line 2028 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 294:
#line 2030 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 321:
#line 2078 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 322:
#line 2082 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[(2) - (2)].sym));}
    break;

  case 323:
#line 2087 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L(); 
		  append_list( l, (yyvsp[(1) - (4)].l));
		  append_list( l, (yyvsp[(3) - (4)].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
    break;

  case 325:
#line 2098 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = L();}
    break;

  case 326:
#line 2099 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 327:
#line 2101 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 328:
#line 2106 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[(2) - (2)].sym)); }
    break;

  case 331:
#line 2113 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[(3) - (4)].sym)); }
    break;

  case 332:
#line 2118 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (6)].sym)),(yyvsp[(3) - (6)].l)),(yyvsp[(4) - (6)].l))); }
    break;

  case 333:
#line 2124 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[(2) - (5)].l)),(yyvsp[(3) - (5)].l))); }
    break;

  case 334:
#line 2132 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 335:
#line 2140 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 336:
#line 2142 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 337:
#line 2147 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 338:
#line 2155 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 339:
#line 2157 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 340:
#line 2161 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 341:
#line 2162 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 342:
#line 2172 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (7)].sym));
		  append_list(l, (yyvsp[(4) - (7)].l));
		  append_symbol(l, (yyvsp[(5) - (7)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
    break;

  case 343:
#line 2183 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 344:
#line 2185 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[(2) - (2)].l)); }
    break;

  case 345:
#line 2188 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  append_symbol(l, (yyvsp[(5) - (5)].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
    break;

  case 346:
#line 2202 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 347:
#line 2218 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 349:
#line 2223 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 351:
#line 2229 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[(1) - (2)].sval));
			  	  append_type((yyval.l), &(yyvsp[(2) - (2)].type));
				}
    break;

  case 352:
#line 2234 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
				  append_string((yyval.l), (yyvsp[(3) - (4)].sval));
			  	  append_type((yyval.l), &(yyvsp[(4) - (4)].type));
				}
    break;

  case 353:
#line 2242 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(3) - (4)].l)); }
    break;

  case 354:
#line 2244 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(1) - (1)].type))); }
    break;

  case 356:
#line 2249 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
    break;

  case 357:
#line 2253 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 358:
#line 2258 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *p = L();
			  append_string(p, (yyvsp[(3) - (4)].sval));
			  append_type(p, &(yyvsp[(4) - (4)].type));
			  (yyval.l) = append_list((yyvsp[(1) - (4)].l), p); }
    break;

  case 359:
#line 2263 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[(1) - (2)].sval));
			  append_type(p, &(yyvsp[(2) - (2)].type));
			  (yyval.l) = append_list(l, p); }
    break;

  case 360:
#line 2313 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (9)].l));
	  append_int(l, (yyvsp[(4) - (9)].i_val));
	  append_symbol(l, (yyvsp[(5) - (9)].sym));
	  append_list(l, (yyvsp[(7) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  append_list(l, (yyvsp[(9) - (9)].l));
	  (yyval.sym) = _symbol_create_list(SQL_CREATE_TRIGGER, l); 
	}
    break;

  case 361:
#line 2325 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 362:
#line 2326 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 363:
#line 2331 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
    break;

  case 364:
#line 2332 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
    break;

  case 365:
#line 2333 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
    break;

  case 366:
#line 2334 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[(3) - (3)].l)); }
    break;

  case 367:
#line 2338 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 368:
#line 2339 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 369:
#line 2343 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 370:
#line 2345 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].l)); }
    break;

  case 371:
#line 2350 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 372:
#line 2351 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 373:
#line 2352 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 374:
#line 2353 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 379:
#line 2368 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[(1) - (3)].i_val));
	  append_symbol((yyval.l), (yyvsp[(2) - (3)].sym));
	  append_list((yyval.l), (yyvsp[(3) - (3)].l));
	}
    break;

  case 380:
#line 2375 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 381:
#line 2376 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 382:
#line 2380 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 383:
#line 2381 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 384:
#line 2385 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 385:
#line 2386 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 386:
#line 2391 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 387:
#line 2394 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 388:
#line 2399 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
    break;

  case 389:
#line 2405 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );	
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
    break;

  case 390:
#line 2411 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
    break;

  case 391:
#line 2417 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
    break;

  case 392:
#line 2423 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_LOADER );
	  (yyval.l) = l; }
    break;

  case 393:
#line 2432 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 394:
#line 2438 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = (yyvsp[(2) - (3)].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 395:
#line 2443 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 396:
#line 2451 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(6) - (6)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 397:
#line 2459 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 398:
#line 2467 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 399:
#line 2475 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_LOADER );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 400:
#line 2483 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  append_int(l, (yyvsp[(3) - (5)].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
    break;

  case 401:
#line 2489 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
    break;

  case 402:
#line 2493 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 403:
#line 2494 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 404:
#line 2495 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[(3) - (3)].l) ); }
    break;

  case 405:
#line 2496 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, (yyvsp[(3) - (3)].l) ); }
    break;

  case 406:
#line 2500 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = NULL;}
    break;

  case 407:
#line 2501 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = (yyvsp[(2) - (3)].l);}
    break;

  case 408:
#line 2502 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {(yyval.l) = L(); }
    break;

  case 409:
#line 2506 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_type(l, &(yyvsp[(1) - (1)].type) );
				  (yyval.l)= l; }
    break;

  case 410:
#line 2509 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { append_type((yyvsp[(3) - (3)].l), &(yyvsp[(1) - (3)].type));
				  (yyval.l) = (yyvsp[(3) - (3)].l); }
    break;

  case 411:
#line 2514 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 412:
#line 2515 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 413:
#line 2516 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 420:
#line 2535 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	  (yyval.sym) = (yyvsp[(1) - (1)].sym);
	  m->type = Q_TRANS;					}
    break;

  case 421:
#line 2542 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[(3) - (3)].bval));  }
    break;

  case 422:
#line 2544 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[(2) - (2)].sval)); }
    break;

  case 423:
#line 2546 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[(3) - (3)].sval)); }
    break;

  case 424:
#line 2548 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[(3) - (4)].bval)), (yyvsp[(4) - (4)].sval) )); }
    break;

  case 425:
#line 2552 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 426:
#line 2554 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(4) - (4)].i_val)); }
    break;

  case 427:
#line 2556 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 428:
#line 2560 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; }
    break;

  case 430:
#line 2566 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 431:
#line 2568 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(1) - (3)].i_val) | (yyvsp[(3) - (3)].i_val)); }
    break;

  case 432:
#line 2573 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_readonly; }
    break;

  case 433:
#line 2574 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_writable; }
    break;

  case 434:
#line 2575 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_serializable; }
    break;

  case 435:
#line 2576 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; /* not supported */ }
    break;

  case 440:
#line 2587 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 441:
#line 2588 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 442:
#line 2592 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 443:
#line 2593 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 444:
#line 2594 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 445:
#line 2598 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 446:
#line 2599 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 447:
#line 2604 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 448:
#line 2618 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 449:
#line 2632 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_COPYLOADER, l ); }
    break;

  case 450:
#line 2637 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 451:
#line 2648 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 452:
#line 2655 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 453:
#line 2666 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 454:
#line 2667 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 455:
#line 2672 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(L(), (yyvsp[(1) - (1)].l_val)); }
    break;

  case 456:
#line 2674 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l_val)); }
    break;

  case 457:
#line 2679 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 458:
#line 2680 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 459:
#line 2684 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 460:
#line 2685 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 461:
#line 2690 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (1)].sval) );
			  (yyval.l) = l; }
    break;

  case 462:
#line 2694 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (2)].sval) );
			  append_string(l, (yyvsp[(2) - (2)].sval) );
			  (yyval.l) = l; }
    break;

  case 463:
#line 2702 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 464:
#line 2707 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 465:
#line 2712 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (5)].sval));
				  append_string(l, (yyvsp[(5) - (5)].sval));
				  (yyval.l) = l; }
    break;

  case 466:
#line 2717 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (7)].sval));
				  append_string(l, (yyvsp[(5) - (7)].sval));
				  append_string(l, sql2str((yyvsp[(7) - (7)].sval)));
				  (yyval.l) = l; }
    break;

  case 467:
#line 2725 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 468:
#line 2726 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 469:
#line 2730 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 470:
#line 2731 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (2)].l_val)), 0); }
    break;

  case 471:
#line 2732 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[(2) - (2)].l_val)); }
    break;

  case 472:
#line 2734 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(3) - (4)].l_val)); }
    break;

  case 473:
#line 2736 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(4) - (4)].l_val)); }
    break;

  case 474:
#line 2740 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 475:
#line 2741 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 476:
#line 2745 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 477:
#line 2746 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 478:
#line 2750 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 479:
#line 2751 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 480:
#line 2755 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 481:
#line 2756 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 482:
#line 2760 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 483:
#line 2761 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 484:
#line 2765 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 485:
#line 2767 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 486:
#line 2773 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
    break;

  case 487:
#line 2782 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
    break;

  case 488:
#line 2824 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 489:
#line 2832 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 490:
#line 2841 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 491:
#line 2843 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 492:
#line 2845 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(2) - (2)].l)); }
    break;

  case 494:
#line 2851 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(2) - (3)].l)); }
    break;

  case 495:
#line 2853 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (5)].l), (yyvsp[(4) - (5)].l)); }
    break;

  case 496:
#line 2857 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 497:
#line 2859 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 498:
#line 2863 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 499:
#line 2865 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 500:
#line 2870 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 505:
#line 2899 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 506:
#line 2900 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 507:
#line 2901 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 508:
#line 2905 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 509:
#line 2907 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 510:
#line 2912 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym) );
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 511:
#line 2917 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
    break;

  case 512:
#line 2924 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 513:
#line 2925 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 514:
#line 2932 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 515:
#line 2934 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
    break;

  case 516:
#line 2939 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
    break;

  case 517:
#line 2947 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[(2) - (5)].i_val));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 518:
#line 2955 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[(3) - (5)].i_val));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 519:
#line 2965 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 520:
#line 2966 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 521:
#line 2967 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (2)].i_val); }
    break;

  case 522:
#line 2971 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 523:
#line 2972 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 524:
#line 2976 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 525:
#line 2977 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 526:
#line 2978 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 527:
#line 2982 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 528:
#line 2984 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[(2) - (2)].l)); }
    break;

  case 530:
#line 3008 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (3)].l));
	  	append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
    break;

  case 531:
#line 3017 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 532:
#line 3018 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 533:
#line 3023 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[(1) - (4)].sval)));
	  append_list(l, (yyvsp[(2) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 537:
#line 3046 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (4)].bval), (yyvsp[(3) - (4)].l), NULL,
		(yyvsp[(4) - (4)].l)->h->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 538:
#line 3057 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (6)].bval), (yyvsp[(3) - (6)].l), (yyvsp[(5) - (6)].l),
		(yyvsp[(6) - (6)].l)->h->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 539:
#line 3068 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 540:
#line 3098 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 541:
#line 3100 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 543:
#line 3110 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
    break;

  case 544:
#line 3119 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
    break;

  case 545:
#line 3128 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
    break;

  case 546:
#line 3134 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 548:
#line 3139 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 549:
#line 3140 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 550:
#line 3141 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 551:
#line 3146 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 552:
#line 3148 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 553:
#line 3150 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(4) - (5)].l); }
    break;

  case 555:
#line 3160 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[(1) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(4) - (4)].sym)); }
    break;

  case 556:
#line 3168 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 557:
#line 3169 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[(2) - (2)].l)); }
    break;

  case 558:
#line 3173 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 559:
#line 3175 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 560:
#line 3179 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (2)].l));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 561:
#line 3184 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  	  	  append_int(l, 0);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 562:
#line 3190 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(2) - (3)].sym));
		  	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  	  append_int(l, 1);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 563:
#line 3196 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 564:
#line 3206 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 565:
#line 3218 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
    break;

  case 566:
#line 3222 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym);
				  append_symbol((yyvsp[(1) - (1)].sym)->data.lval, NULL); }
    break;

  case 567:
#line 3226 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { m->caching = 0; }
    break;

  case 568:
#line 3228 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[(3) - (5)].sym));
		append_symbol(op, (yyvsp[(5) - (5)].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
    break;

  case 569:
#line 3239 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (5)].sval));
		  	  	  append_list(l, (yyvsp[(4) - (5)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 570:
#line 3244 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (2)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 571:
#line 3249 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (4)].sval));
		  	  	  append_list(l, (yyvsp[(3) - (4)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 572:
#line 3254 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (1)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 573:
#line 3261 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 574:
#line 3262 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 575:
#line 3266 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 576:
#line 3267 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) );}
    break;

  case 577:
#line 3271 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(1) - (1)].l))); }
    break;

  case 578:
#line 3274 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(3) - (3)].l))); }
    break;

  case 579:
#line 3279 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 580:
#line 3280 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 581:
#line 3286 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
    break;

  case 582:
#line 3290 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 583:
#line 3295 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
    break;

  case 584:
#line 3299 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 585:
#line 3303 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 586:
#line 3305 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l)); }
    break;

  case 587:
#line 3309 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 588:
#line 3310 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 589:
#line 3314 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 590:
#line 3318 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 591:
#line 3319 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 592:
#line 3323 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 593:
#line 3327 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 594:
#line 3328 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val)));
			}
    break;

  case 595:
#line 3332 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[(2) - (2)].sval),NULL)));
			}
    break;

  case 596:
#line 3336 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 597:
#line 3340 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 598:
#line 3342 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 599:
#line 3347 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  append_int(l, (yyvsp[(2) - (2)].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
    break;

  case 600:
#line 3355 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 601:
#line 3356 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 602:
#line 3357 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 612:
#line 3374 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 613:
#line 3390 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 614:
#line 3395 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, (yyvsp[(2) - (3)].sval));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 615:
#line 3402 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 616:
#line 3412 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
    break;

  case 617:
#line 3419 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
    break;

  case 618:
#line 3428 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 619:
#line 3429 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 620:
#line 3430 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 621:
#line 3435 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 622:
#line 3442 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 623:
#line 3449 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 624:
#line 3456 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 625:
#line 3466 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (1)].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
    break;

  case 626:
#line 3470 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 627:
#line 3485 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[(1) - (4)].sym) );}
    break;

  case 628:
#line 3486 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[(1) - (3)].sym) ); }
    break;

  case 629:
#line 3491 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 630:
#line 3497 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 631:
#line 3503 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 632:
#line 3508 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 633:
#line 3516 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 634:
#line 3518 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 635:
#line 3524 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, (yyvsp[(2) - (4)].sval));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 636:
#line 3531 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 637:
#line 3540 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 638:
#line 3541 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 639:
#line 3542 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 640:
#line 3546 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[(2) - (2)].sym) ); }
    break;

  case 641:
#line 3550 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 642:
#line 3551 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym));  }
    break;

  case 643:
#line 3555 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 644:
#line 3560 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(1) - (3)].l));
		  append_list(l, (yyvsp[(2) - (3)].l));
		  append_list(l, (yyvsp[(3) - (3)].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
    break;

  case 645:
#line 3569 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 646:
#line 3571 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 647:
#line 3573 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 648:
#line 3577 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 649:
#line 3579 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 650:
#line 3581 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 652:
#line 3588 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 653:
#line 3595 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 654:
#line 3602 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 655:
#line 3609 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 656:
#line 3616 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 657:
#line 3623 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 658:
#line 3630 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
			  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 659:
#line 3637 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 660:
#line 3644 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 661:
#line 3651 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 662:
#line 3658 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 663:
#line 3665 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 664:
#line 3671 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 665:
#line 3678 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 666:
#line 3685 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 667:
#line 3692 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 668:
#line 3699 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 669:
#line 3706 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 670:
#line 3713 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 671:
#line 3720 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 672:
#line 3726 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 673:
#line 3733 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 674:
#line 3740 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 675:
#line 3747 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 676:
#line 3754 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 677:
#line 3756 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 678:
#line 3777 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 679:
#line 3781 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 682:
#line 3787 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
    break;

  case 683:
#line 3789 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
    break;

  case 685:
#line 3792 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[(1) - (1)].l)); }
    break;

  case 689:
#line 3796 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[(4) - (4)].l)); }
    break;

  case 697:
#line 3808 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
    break;

  case 698:
#line 3878 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[(1) - (5)].sym)), (yyvsp[(4) - (5)].l))); }
    break;

  case 699:
#line 3883 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[(1) - (3)].l) ); }
    break;

  case 701:
#line 3889 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[(1) - (3)].sym)), (yyvsp[(2) - (3)].sym)), (yyvsp[(3) - (3)].sym)); }
    break;

  case 702:
#line 3893 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 703:
#line 3895 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 704:
#line 3899 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 705:
#line 3901 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 706:
#line 3905 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 707:
#line 3907 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[(2) - (3)].l), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val))); }
    break;

  case 708:
#line 3911 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_ROWS; }
    break;

  case 709:
#line 3912 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_RANGE; }
    break;

  case 710:
#line 3916 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(1) - (1)].sym)), _symbol_create_int(SQL_FRAME, -1)); }
    break;

  case 711:
#line 3917 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 712:
#line 3921 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 713:
#line 3922 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 714:
#line 3923 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 715:
#line 3927 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 716:
#line 3932 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(2) - (4)].sym)), (yyvsp[(4) - (4)].sym)); }
    break;

  case 717:
#line 3936 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 718:
#line 3937 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 719:
#line 3938 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 720:
#line 3942 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 721:
#line 3946 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NONE; }
    break;

  case 722:
#line 3947 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
    break;

  case 723:
#line 3948 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_GROUP; }
    break;

  case 724:
#line 3949 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_TIES; }
    break;

  case 725:
#line 3950 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
    break;

  case 726:
#line 3954 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 727:
#line 3959 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 728:
#line 3963 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 729:
#line 3990 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 730:
#line 3991 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 731:
#line 3996 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 732:
#line 3997 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "left"); }
    break;

  case 733:
#line 3998 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "right"); }
    break;

  case 734:
#line 3999 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "insert"); }
    break;

  case 735:
#line 4004 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[(3) - (6)].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 736:
#line 4011 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 737:
#line 4016 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 738:
#line 4021 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 739:
#line 4026 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 740:
#line 4031 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 741:
#line 4038 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 742:
#line 4039 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 743:
#line 4044 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 744:
#line 4054 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 745:
#line 4064 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 746:
#line 4071 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 747:
#line 4078 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 748:
#line 4085 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 749:
#line 4092 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 750:
#line 4104 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 751:
#line 4106 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 752:
#line 4111 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 753:
#line 4116 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, (yyvsp[(1) - (3)].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 754:
#line 4121 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 755:
#line 4126 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
  		  append_string(l, (yyvsp[(2) - (2)].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
    break;

  case 756:
#line 4133 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 757:
#line 4134 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 758:
#line 4139 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 759:
#line 4160 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 760:
#line 4161 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 761:
#line 4166 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 762:
#line 4167 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 763:
#line 4172 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 764:
#line 4173 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 765:
#line 4180 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 766:
#line 4186 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 767:
#line 4192 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 768:
#line 4198 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 769:
#line 4204 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (4)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 770:
#line 4210 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 772:
#line 4220 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 773:
#line 4221 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = -1; }
    break;

  case 774:
#line 4222 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 775:
#line 4226 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 776:
#line 4227 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 777:
#line 4238 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 778:
#line 4240 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0+1; }
    break;

  case 779:
#line 4244 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 780:
#line 4246 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 6+1; }
    break;

  case 781:
#line 4250 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
    break;

  case 782:
#line 4252 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 783:
#line 4258 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 784:
#line 4266 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = iyear; }
    break;

  case 785:
#line 4267 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imonth; }
    break;

  case 786:
#line 4268 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = iday; }
    break;

  case 787:
#line 4269 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = ihour; }
    break;

  case 788:
#line 4270 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = imin; }
    break;

  case 790:
#line 4275 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = isec; }
    break;

  case 791:
#line 4280 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 792:
#line 4286 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (1)].i_val)), 0);  }
    break;

  case 793:
#line 4289 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 794:
#line 4295 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 795:
#line 4298 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 796:
#line 4304 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[(1) - (3)].l)), (yyvsp[(3) - (3)].l) ); }
    break;

  case 797:
#line 4307 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list( L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 798:
#line 4311 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 802:
#line 4337 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(1) - (1)].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
    break;

  case 803:
#line 4343 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 804:
#line 4408 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 805:
#line 4439 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 806:
#line 4502 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 807:
#line 4541 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 808:
#line 4558 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 809:
#line 4574 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 810:
#line 4590 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 812:
#line 4607 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 813:
#line 4624 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 814:
#line 4641 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 815:
#line 4658 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 816:
#line 4679 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
    break;

  case 817:
#line 4683 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
    break;

  case 818:
#line 4689 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 819:
#line 4734 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 820:
#line 4735 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (3)].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 821:
#line 4739 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (5)].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[(1) - (5)].sval)), 
						(yyvsp[(3) - (5)].sval)), 
					(yyvsp[(5) - (5)].sval))
				;}
    break;

  case 822:
#line 4750 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 823:
#line 4753 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 824:
#line 4758 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[(1) - (5)].sval)), (yyvsp[(3) - (5)].sval)), (yyvsp[(5) - (5)].sval));}
    break;

  case 825:
#line 4766 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 826:
#line 4772 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 828:
#line 4784 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[(3) - (6)].sym)), (yyvsp[(5) - (6)].sym))); }
    break;

  case 829:
#line 4789 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[(3) - (4)].l)); }
    break;

  case 830:
#line 4791 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (5)].sym)),(yyvsp[(3) - (5)].l)),(yyvsp[(4) - (5)].sym))); }
    break;

  case 831:
#line 4797 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[(2) - (4)].l)),(yyvsp[(3) - (4)].sym))); }
    break;

  case 832:
#line 4805 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 833:
#line 4807 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 834:
#line 4812 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (3)].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[(3) - (3)].sym));
			}
    break;

  case 835:
#line 4816 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 836:
#line 4822 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 837:
#line 4830 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 838:
#line 4832 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 839:
#line 4837 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 840:
#line 4845 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 841:
#line 4847 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 842:
#line 4851 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 843:
#line 4852 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 845:
#line 4862 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 846:
#line 4873 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 847:
#line 4883 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 848:
#line 4893 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 849:
#line 4904 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
    break;

  case 850:
#line 4906 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
    break;

  case 851:
#line 4910 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
    break;

  case 852:
#line 4912 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 853:
#line 4914 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 854:
#line 4916 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
    break;

  case 855:
#line 4924 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
    break;

  case 856:
#line 4926 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
    break;

  case 857:
#line 4934 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
    break;

  case 858:
#line 4935 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
    break;

  case 859:
#line 4936 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
    break;

  case 860:
#line 4937 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
    break;

  case 861:
#line 4938 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
    break;

  case 862:
#line 4940 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
    break;

  case 863:
#line 4942 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 864:
#line 4955 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 865:
#line 4972 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 866:
#line 4974 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 867:
#line 4988 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 868:
#line 5007 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 869:
#line 5008 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 870:
#line 5009 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
    break;

  case 873:
#line 5012 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 874:
#line 5014 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 875:
#line 5015 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 876:
#line 5017 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 877:
#line 5019 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 878:
#line 5030 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 879:
#line 5045 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 880:
#line 5058 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometry", 0, 0 )) {
			yyerror(m, "\b22000!type (geometry) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 881:
#line 5065 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 882:
#line 5080 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 883:
#line 5095 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometrya", 0, 0 )) {
			yyerror(m, "\b22000!type (geometrya) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 884:
#line 5102 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	int geoSubType = find_subgeometry_type((yyvsp[(1) - (1)].sval));

	if(geoSubType == 0) {
		char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[(1) - (1)].sval));
		(yyval.type).type = NULL;
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} else if (geoSubType == -1) {
		char *msg = sql_message("allocation failure");
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

  case 885:
#line 5128 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	int subtype = find_subgeometry_type((yyvsp[(1) - (1)].sval));
	char* geoSubType = (yyvsp[(1) - (1)].sval);

	if(subtype == 0) {
		char *msg = sql_message("\b22000!type (%s) unknown", geoSubType);
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} else if(subtype == -1) {
		char *msg = sql_message("allocation failure");
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} 
	(yyval.i_val) = subtype;	
}
    break;

  case 886:
#line 5145 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
	int subtype = find_subgeometry_type((yyvsp[(1) - (1)].sval));
	char* geoSubType = (yyvsp[(1) - (1)].sval);

	if(subtype == 0) {
		char *msg = sql_message("\b22000!type (%s) unknown", geoSubType);
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} else if (subtype == -1) {
		char *msg = sql_message("allocation failure");
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} 
	(yyval.i_val) = subtype;	
}
    break;

  case 887:
#line 5166 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 888:
#line 5180 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 889:
#line 5181 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (2)].sval); }
    break;

  case 890:
#line 5185 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 891:
#line 5186 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 892:
#line 5187 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 893:
#line 5190 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 894:
#line 5191 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 897:
#line 5199 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 898:
#line 5200 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 899:
#line 5201 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 900:
#line 5202 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 901:
#line 5203 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 902:
#line 5204 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 903:
#line 5208 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 904:
#line 5209 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 905:
#line 5210 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 906:
#line 5211 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 907:
#line 5212 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 908:
#line 5213 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 909:
#line 5214 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 911:
#line 5219 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "large"); }
    break;

  case 912:
#line 5220 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "name"); }
    break;

  case 913:
#line 5221 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "object"); }
    break;

  case 914:
#line 5222 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "password"); }
    break;

  case 915:
#line 5223 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "path"); }
    break;

  case 916:
#line 5224 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "precision"); }
    break;

  case 917:
#line 5225 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
    break;

  case 918:
#line 5226 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "role"); }
    break;

  case 919:
#line 5227 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "size"); }
    break;

  case 920:
#line 5228 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "type"); }
    break;

  case 921:
#line 5229 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "release"); }
    break;

  case 922:
#line 5230 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "value"); }
    break;

  case 923:
#line 5231 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "zone"); }
    break;

  case 924:
#line 5233 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "action"); }
    break;

  case 925:
#line 5234 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "as"); }
    break;

  case 926:
#line 5235 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
    break;

  case 927:
#line 5236 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "column"); }
    break;

  case 928:
#line 5237 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
    break;

  case 929:
#line 5238 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
    break;

  case 930:
#line 5239 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "increment"); }
    break;

  case 931:
#line 5240 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
    break;

  case 932:
#line 5241 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
    break;

  case 933:
#line 5242 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "plan"); }
    break;

  case 934:
#line 5243 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "schema"); }
    break;

  case 935:
#line 5244 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "start"); }
    break;

  case 936:
#line 5245 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "statement"); }
    break;

  case 937:
#line 5246 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "table"); }
    break;

  case 938:
#line 5248 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cache"); }
    break;

  case 939:
#line 5249 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "data"); }
    break;

  case 940:
#line 5250 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
    break;

  case 941:
#line 5251 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "match"); }
    break;

  case 942:
#line 5252 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "options"); }
    break;

  case 943:
#line 5253 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "row"); }
    break;

  case 944:
#line 5254 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "key"); }
    break;

  case 945:
#line 5255 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "language"); }
    break;

  case 946:
#line 5256 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "level"); }
    break;

  case 947:
#line 5257 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "session"); }
    break;

  case 948:
#line 5258 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "date"); }
    break;

  case 949:
#line 5259 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "time"); }
    break;

  case 950:
#line 5260 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
    break;

  case 951:
#line 5261 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "interval"); }
    break;

  case 952:
#line 5262 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
    break;

  case 953:
#line 5264 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
    break;

  case 954:
#line 5265 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "execute"); }
    break;

  case 955:
#line 5266 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "explain"); }
    break;

  case 956:
#line 5267 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "debug"); }
    break;

  case 957:
#line 5268 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "trace"); }
    break;

  case 958:
#line 5269 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "text"); }
    break;

  case 959:
#line 5270 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
    break;

  case 960:
#line 5271 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "no"); }
    break;

  case 961:
#line 5273 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "strip"); }
    break;

  case 962:
#line 5274 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
    break;

  case 963:
#line 5275 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "passing"); }
    break;

  case 964:
#line 5276 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "nil"); }
    break;

  case 965:
#line 5277 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "ref"); }
    break;

  case 966:
#line 5278 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "absent"); }
    break;

  case 967:
#line 5279 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "empty"); }
    break;

  case 968:
#line 5280 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "document"); }
    break;

  case 969:
#line 5281 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "element"); }
    break;

  case 970:
#line 5282 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "content"); }
    break;

  case 971:
#line 5283 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
    break;

  case 972:
#line 5284 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "returning"); }
    break;

  case 973:
#line 5285 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "location"); }
    break;

  case 974:
#line 5286 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "id"); }
    break;

  case 975:
#line 5287 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "according"); }
    break;

  case 976:
#line 5288 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "uri"); }
    break;

  case 977:
#line 5289 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "filter"); }
    break;

  case 978:
#line 5290 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
    break;

  case 979:
#line 5291 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temp"); }
    break;

  case 980:
#line 5292 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
    break;

  case 981:
#line 5293 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
    break;

  case 982:
#line 5294 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "storage"); }
    break;

  case 983:
#line 5295 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
    break;

  case 984:
#line 5296 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "replace"); }
    break;

  case 985:
#line 5300 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 986:
#line 5302 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 987:
#line 5307 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 988:
#line 5330 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 989:
#line 5350 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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

  case 990:
#line 5383 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 991:
#line 5385 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { char *s = strconcat((yyvsp[(1) - (2)].sval),(yyvsp[(2) - (2)].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
    break;

  case 992:
#line 5393 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 993:
#line 5400 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (3)].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 994:
#line 5405 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (4)].i_val));
  	  append_list(l, (yyvsp[(3) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 995:
#line 5419 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 997:
#line 5424 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[(2) - (2)].l)); }
    break;

  case 1000:
#line 5435 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1001:
#line 5437 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1013:
#line 5459 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
    break;

  case 1014:
#line 5467 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
    break;

  case 1015:
#line 5475 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
    break;

  case 1016:
#line 5485 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_list(l, (yyvsp[(5) - (7)].l));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
    break;

  case 1017:
#line 5495 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 1018:
#line 5497 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1019:
#line 5501 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1020:
#line 5505 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (6)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (6)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(6) - (6)].l)); }
    break;

  case 1021:
#line 5509 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1022:
#line 5513 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1023:
#line 5517 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1024:
#line 5521 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(2) - (2)].l)); }
    break;

  case 1026:
#line 5531 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1027:
#line 5535 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1028:
#line 5537 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1029:
#line 5547 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (2)].sval));
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1030:
#line 5554 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1031:
#line 5555 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1034:
#line 5568 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[(1) - (2)].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[(2) - (2)].i_val)); 	}
    break;

  case 1035:
#line 5575 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1036:
#line 5577 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1038:
#line 5585 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1039:
#line 5586 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 1040:
#line 5590 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1041:
#line 5591 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1042:
#line 5592 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1043:
#line 5593 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 1044:
#line 5594 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 1045:
#line 5601 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (7)].sym));
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_int(l, (yyvsp[(5) - (7)].i_val));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
    break;

  case 1046:
#line 5611 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1047:
#line 5612 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 1048:
#line 5617 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 1049:
#line 5619 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 1050:
#line 5624 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (2)].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[(2) - (2)].sval)); }
    break;

  case 1051:
#line 5629 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1052:
#line 5633 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1053:
#line 5634 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1054:
#line 5638 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1055:
#line 5645 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_int(l, (yyvsp[(3) - (6)].i_val) );
	  append_symbol(l, (yyvsp[(4) - (6)].sym));
	  append_int(l, (yyvsp[(5) - (6)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
    break;

  case 1056:
#line 5652 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1057:
#line 5653 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1058:
#line 5660 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_symbol(l, (yyvsp[(5) - (7)].sym));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
    break;

  case 1060:
#line 5672 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1061:
#line 5674 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1062:
#line 5685 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1077:
#line 5731 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
    break;

  case 1078:
#line 5742 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1080:
#line 5747 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1081:
#line 5751 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1082:
#line 5752 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1083:
#line 5756 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1084:
#line 5757 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1085:
#line 5758 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1086:
#line 5773 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1087:
#line 5777 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1088:
#line 5779 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1093:
#line 5802 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { char *s = strconcat("xmlns:", (yyvsp[(3) - (3)].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1094:
#line 5811 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1095:
#line 5815 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1125:
#line 5911 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"
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
#line 14016 "y.tab.c"
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


#line 5932 "/Users/hannes/source/MonetDBLite/src/sql/server/sql_parser.y"

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

			if (typeSubStr == NULL) {
				return -1;
			}
			memcpy(typeSubStr, geoSubType, strLength-1);
			typeSubStr[strLength-1]='\0';
			if(flag == 'z' || flag == 'm' ) {
				subType = find_subgeometry_type(typeSubStr);
				if (subType == -1) {
					free(typeSubStr);
					return -1;
				}
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


