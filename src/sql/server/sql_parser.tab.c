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
#line 9 "src/sql/server/sql_parser.y"

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
#line 111 "src/sql/server/sql_parser.y"
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
#line 862 "src/sql/server/sql_parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 120 "src/sql/server/sql_parser.y"

extern int sqllex( YYSTYPE *yylval, void *m );
/* enable to activate debugging support
int yydebug=1;
*/


/* Line 216 of yacc.c.  */
#line 881 "src/sql/server/sql_parser.tab.c"

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
#define YYLAST   17555

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  348
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  407
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1127
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2097

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
    1705,  1707,  1709,  1711,  1713,  1715,  1717,  1718,  1720,  1722,
    1724,  1728,  1732,  1736,  1740,  1741,  1744,  1748,  1753,  1758,
    1764,  1770,  1771,  1773,  1776,  1777,  1779,  1781,  1783,  1785,
    1788,  1791,  1793,  1797,  1801,  1803,  1808,  1810,  1812,  1814,
    1819,  1826,  1832,  1834,  1838,  1840,  1846,  1852,  1858,  1862,
    1864,  1865,  1867,  1869,  1870,  1872,  1878,  1880,  1885,  1886,
    1889,  1891,  1895,  1898,  1901,  1905,  1908,  1912,  1914,  1916,
    1917,  1923,  1929,  1932,  1937,  1939,  1940,  1942,  1943,  1947,
    1949,  1953,  1954,  1957,  1961,  1963,  1967,  1969,  1970,  1974,
    1975,  1978,  1981,  1982,  1985,  1988,  1989,  1992,  1995,  1998,
    2000,  2004,  2007,  2008,  2010,  2012,  2014,  2016,  2018,  2020,
    2022,  2024,  2026,  2028,  2030,  2033,  2035,  2039,  2043,  2050,
    2057,  2058,  2060,  2062,  2066,  2070,  2074,  2078,  2080,  2084,
    2089,  2093,  2099,  2105,  2113,  2121,  2123,  2127,  2132,  2137,
    2139,  2141,  2143,  2146,  2148,  2152,  2156,  2160,  2164,  2169,
    2173,  2177,  2182,  2186,  2188,  2192,  2196,  2200,  2204,  2208,
    2212,  2216,  2220,  2224,  2228,  2232,  2236,  2240,  2244,  2248,
    2252,  2256,  2260,  2264,  2267,  2271,  2275,  2279,  2283,  2286,
    2289,  2293,  2295,  2297,  2299,  2301,  2303,  2305,  2307,  2309,
    2311,  2313,  2318,  2320,  2322,  2324,  2326,  2328,  2330,  2332,
    2334,  2340,  2344,  2346,  2350,  2351,  2355,  2356,  2360,  2361,
    2365,  2367,  2369,  2371,  2373,  2376,  2378,  2381,  2384,  2389,
    2392,  2394,  2397,  2400,  2401,  2405,  2408,  2411,  2415,  2418,
    2422,  2427,  2429,  2433,  2435,  2437,  2439,  2441,  2448,  2451,
    2454,  2457,  2460,  2463,  2464,  2467,  2476,  2485,  2492,  2499,
    2506,  2510,  2519,  2521,  2525,  2527,  2531,  2535,  2538,  2539,
    2542,  2544,  2546,  2550,  2552,  2556,  2558,  2562,  2567,  2574,
    2580,  2586,  2591,  2598,  2600,  2602,  2604,  2605,  2609,  2610,
    2614,  2615,  2619,  2620,  2622,  2626,  2630,  2632,  2634,  2636,
    2638,  2640,  2642,  2644,  2647,  2649,  2652,  2655,  2658,  2662,
    2664,  2667,  2669,  2671,  2673,  2675,  2677,  2679,  2681,  2683,
    2685,  2688,  2693,  2698,  2700,  2703,  2706,  2709,  2712,  2714,
    2716,  2721,  2723,  2727,  2733,  2735,  2739,  2745,  2752,  2759,
    2761,  2768,  2773,  2779,  2784,  2786,  2790,  2794,  2798,  2803,
    2805,  2808,  2813,  2815,  2818,  2819,  2822,  2824,  2826,  2828,
    2830,  2832,  2834,  2836,  2838,  2843,  2848,  2853,  2855,  2860,
    2862,  2864,  2866,  2868,  2870,  2872,  2877,  2884,  2886,  2891,
    2898,  2900,  2903,  2905,  2907,  2909,  2911,  2916,  2918,  2923,
    2930,  2932,  2937,  2939,  2944,  2951,  2953,  2955,  2957,  2959,
    2961,  2963,  2966,  2968,  2970,  2974,  2976,  2980,  2982,  2984,
    2986,  2988,  2990,  2992,  2994,  2996,  2998,  3000,  3002,  3004,
    3006,  3008,  3010,  3012,  3014,  3016,  3018,  3020,  3022,  3024,
    3026,  3028,  3030,  3032,  3034,  3036,  3038,  3040,  3042,  3044,
    3046,  3048,  3050,  3052,  3054,  3056,  3058,  3060,  3062,  3064,
    3066,  3068,  3070,  3072,  3074,  3076,  3078,  3080,  3082,  3084,
    3086,  3088,  3090,  3092,  3094,  3096,  3098,  3100,  3102,  3104,
    3106,  3108,  3110,  3112,  3114,  3116,  3118,  3120,  3122,  3124,
    3126,  3128,  3130,  3132,  3134,  3136,  3138,  3140,  3142,  3144,
    3146,  3148,  3150,  3152,  3154,  3156,  3158,  3160,  3162,  3166,
    3168,  3170,  3172,  3174,  3177,  3180,  3184,  3189,  3190,  3192,
    3195,  3197,  3199,  3201,  3205,  3207,  3209,  3211,  3213,  3215,
    3217,  3219,  3221,  3223,  3225,  3227,  3233,  3239,  3245,  3253,
    3254,  3257,  3262,  3269,  3274,  3277,  3282,  3285,  3287,  3292,
    3294,  3298,  3301,  3302,  3305,  3307,  3309,  3312,  3314,  3318,
    3320,  3321,  3324,  3328,  3332,  3336,  3340,  3345,  3353,  3354,
    3357,  3359,  3363,  3366,  3368,  3369,  3372,  3374,  3381,  3384,
    3387,  3395,  3397,  3398,  3401,  3410,  3412,  3413,  3417,  3419,
    3421,  3425,  3427,  3429,  3432,  3437,  3438,  3440,  3444,  3448,
    3454,  3461,  3463,  3465,  3467,  3469,  3470,  3473,  3476,  3481,
    3483,  3487,  3489,  3491,  3493,  3495,  3499,  3502,  3505,  3506,
    3508,  3511,  3514,  3515,  3517,  3523,  3525,  3527,  3531,  3535,
    3537,  3539,  3540,  3543,  3545,  3548,  3550,  3551,  3553,  3555,
    3558,  3559,  3561,  3564,  3567,  3570,  3572,  3574
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
      -1,   250,    -1,   533,    -1,   554,    -1,    -1,   189,    -1,
     251,    -1,   538,    -1,   537,   342,   538,    -1,   666,   177,
     250,    -1,   666,   177,   568,    -1,   449,   177,   594,    -1,
      -1,   285,   568,    -1,   173,   540,   174,    -1,   561,    74,
      75,   561,    -1,   561,   166,   561,   544,    -1,   561,   541,
      75,   561,   544,    -1,   561,    73,   541,    75,   561,    -1,
      -1,    76,    -1,   543,   542,    -1,    -1,    72,    -1,    69,
      -1,    70,    -1,    71,    -1,   265,   568,    -1,    16,   449,
      -1,   545,    -1,   172,   546,   548,    -1,   546,   342,   547,
      -1,   547,    -1,   669,   448,   321,   593,    -1,   551,    -1,
     550,    -1,   551,    -1,    66,   536,   557,   558,    -1,    66,
     536,   557,   262,   552,   558,    -1,   554,   570,   571,   572,
     573,    -1,   553,    -1,   552,   342,   553,    -1,   669,    -1,
     554,   170,   555,   556,   554,    -1,   554,   169,   555,   556,
     554,    -1,   554,   168,   555,   556,   554,    -1,   173,   554,
     174,    -1,   549,    -1,    -1,   189,    -1,   251,    -1,    -1,
     167,    -1,   167,   104,   173,   566,   174,    -1,   620,    -1,
     559,   539,   565,   567,    -1,    -1,   111,   560,    -1,   561,
      -1,   560,   342,   561,    -1,   643,   564,    -1,   614,   564,
      -1,    68,   614,   564,    -1,   593,   563,    -1,    68,   594,
     563,    -1,   593,    -1,   540,    -1,    -1,   345,   562,   554,
     346,   563,    -1,   321,   669,   173,   671,   174,    -1,   321,
     669,    -1,   669,   173,   671,   174,    -1,   669,    -1,    -1,
     563,    -1,    -1,   109,   104,   566,    -1,   644,    -1,   566,
     342,   644,    -1,    -1,   108,   568,    -1,   569,   179,   568,
      -1,   569,    -1,   578,   190,   569,    -1,   578,    -1,    -1,
     102,   104,   574,    -1,    -1,   297,   657,    -1,   297,   598,
      -1,    -1,   298,   658,    -1,   298,   598,    -1,    -1,   299,
     658,    -1,   299,    14,    -1,   299,   598,    -1,   575,    -1,
     574,   342,   575,    -1,   596,   576,    -1,    -1,   225,    -1,
     226,    -1,   579,    -1,   580,    -1,   582,    -1,   584,    -1,
     585,    -1,   587,    -1,   589,    -1,   592,    -1,   596,    -1,
     176,   578,    -1,   577,    -1,   578,   191,   578,    -1,   578,
     177,   578,    -1,   578,   187,   581,   578,   190,   578,    -1,
     578,   186,   581,   578,   190,   578,    -1,    -1,   100,    -1,
     101,    -1,   578,   183,   583,    -1,   578,   181,   583,    -1,
     578,   182,   583,    -1,   578,   180,   583,    -1,   596,    -1,
     596,   107,   674,    -1,   596,   263,   176,   110,    -1,   596,
     263,   110,    -1,   578,   185,   173,   531,   174,    -1,   578,
     184,   173,   531,   174,    -1,   173,   586,   174,   185,   173,
     531,   174,    -1,   173,   586,   174,   184,   173,   531,   174,
      -1,   578,    -1,   586,   342,   578,    -1,   578,   191,   588,
     594,    -1,   578,   177,   588,   578,    -1,   188,    -1,   178,
      -1,   189,    -1,   106,   594,    -1,   578,    -1,   590,   342,
     578,    -1,   345,   590,   346,    -1,   591,   643,   591,    -1,
     173,   551,   174,    -1,   173,   283,   529,   174,    -1,   173,
     545,   174,    -1,   173,   551,   174,    -1,   173,   283,   529,
     174,    -1,   173,   545,   174,    -1,   597,    -1,   596,   192,
     596,    -1,   596,   193,   596,    -1,   596,   206,   596,    -1,
     596,   207,   596,    -1,   596,   208,   596,    -1,   596,   196,
     596,    -1,   596,   194,   596,    -1,   596,   213,   596,    -1,
     596,   210,   596,    -1,   596,   218,   596,    -1,   596,   211,
     596,    -1,   596,   217,   596,    -1,   596,   212,   596,    -1,
     596,   216,   596,    -1,   596,   215,   596,    -1,   596,   134,
     596,    -1,   596,   195,   596,    -1,   596,   209,   596,    -1,
     596,   214,   596,    -1,   209,   596,    -1,   596,   204,   596,
      -1,   596,   203,   596,    -1,   596,   202,   596,    -1,   596,
     201,   596,    -1,   192,   596,    -1,   193,   596,    -1,   173,
     568,   174,    -1,   595,    -1,   594,    -1,   623,    -1,   640,
      -1,    62,    -1,   599,    -1,   644,    -1,   613,    -1,   627,
      -1,   614,    -1,   124,   125,   112,   643,    -1,   617,    -1,
     619,    -1,   647,    -1,   645,    -1,   683,    -1,   598,    -1,
     532,    -1,   347,    -1,   600,   332,   173,   601,   174,    -1,
     624,   173,   174,    -1,   627,    -1,   602,   603,   604,    -1,
      -1,   333,   104,   566,    -1,    -1,   102,   104,   574,    -1,
      -1,   605,   606,   612,    -1,    85,    -1,   340,    -1,   607,
      -1,   609,    -1,   341,   337,    -1,   608,    -1,   334,   326,
      -1,   597,   337,    -1,   186,   607,   190,   610,    -1,   341,
     336,    -1,   611,    -1,   334,   326,    -1,   597,   337,    -1,
      -1,   335,   334,   326,    -1,   335,   109,    -1,   335,   339,
      -1,   335,    83,   338,    -1,   134,   669,    -1,   615,   173,
     174,    -1,   615,   173,   648,   174,    -1,   616,    -1,   669,
     343,   616,    -1,   669,    -1,    69,    -1,    70,    -1,    67,
      -1,   114,   173,   634,   111,   596,   174,    -1,    46,   618,
      -1,    48,   618,    -1,    47,   618,    -1,    50,   618,    -1,
      49,   618,    -1,    -1,   173,   174,    -1,   199,   173,   596,
     111,   596,   112,   596,   174,    -1,   199,   173,   596,   342,
     596,   342,   596,   174,    -1,   199,   173,   596,   111,   596,
     174,    -1,   199,   173,   596,   342,   596,   174,    -1,   198,
     173,   596,   184,   596,   174,    -1,   596,   200,   596,    -1,
     197,   173,   596,   342,   596,   342,   596,   174,    -1,   621,
      -1,   620,   342,   621,    -1,   206,    -1,   669,   343,   206,
      -1,   614,   343,   206,    -1,   568,   622,    -1,    -1,   321,
     669,    -1,   641,    -1,    10,    -1,   669,   343,    10,    -1,
       8,    -1,   669,   343,     8,    -1,     9,    -1,   669,   343,
       9,    -1,   625,   173,   206,   174,    -1,   625,   173,   669,
     343,   206,   174,    -1,   625,   173,   251,   655,   174,    -1,
     625,   173,   189,   655,   174,    -1,   625,   173,   655,   174,
      -1,   626,   173,   655,   342,   655,   174,    -1,   754,    -1,
     192,    -1,   193,    -1,    -1,   172,   287,   296,    -1,    -1,
     173,   673,   174,    -1,    -1,   173,   673,   174,    -1,    -1,
     286,    -1,   287,   630,   629,    -1,   288,   631,   629,    -1,
     290,    -1,   291,    -1,   292,    -1,   293,    -1,   294,    -1,
     633,    -1,   295,    -1,   633,   630,    -1,   633,    -1,   295,
     631,    -1,   633,   630,    -1,   295,   631,    -1,   635,   281,
     636,    -1,   637,    -1,   289,   638,    -1,    55,    -1,    57,
      -1,    56,    -1,   674,    -1,    13,    -1,    12,    -1,    11,
      -1,    14,    -1,    15,    -1,   286,   674,    -1,   287,   630,
     629,   674,    -1,   288,   631,   629,   674,    -1,   642,    -1,
     665,   674,    -1,     6,   674,    -1,   662,   674,    -1,     5,
     674,    -1,    44,    -1,    45,    -1,   289,   628,   674,   638,
      -1,   669,    -1,   669,   343,   669,    -1,   669,   343,   669,
     343,   669,    -1,   669,    -1,   669,   343,   669,    -1,   669,
     343,   669,   343,   669,    -1,    18,   173,   646,   321,   660,
     174,    -1,    19,   173,   646,   342,   660,   174,    -1,   568,
      -1,   304,   173,   596,   342,   596,   174,    -1,   305,   173,
     649,   174,    -1,   300,   596,   651,   654,   312,    -1,   300,
     653,   654,   312,    -1,   533,    -1,   648,   342,   533,    -1,
     533,   342,   533,    -1,   649,   342,   533,    -1,   301,   596,
     302,   533,    -1,   650,    -1,   651,   650,    -1,   301,   568,
     302,   533,    -1,   652,    -1,   653,   652,    -1,    -1,   303,
     596,    -1,   596,    -1,   673,    -1,   672,    -1,   672,    -1,
     673,    -1,    20,    -1,   663,    -1,   664,    -1,    20,   173,
     656,   174,    -1,   663,   173,   656,   174,    -1,   664,   173,
     656,   174,    -1,   665,    -1,   665,   173,   656,   174,    -1,
      31,    -1,    32,    -1,    35,    -1,    33,    -1,    34,    -1,
      29,    -1,    29,   173,   656,   174,    -1,    29,   173,   656,
     342,   659,   174,    -1,    30,    -1,    30,   173,   656,   174,
      -1,    30,   173,   673,   342,   673,   174,    -1,    36,    -1,
      36,    38,    -1,    37,    -1,   632,    -1,   639,    -1,     6,
      -1,     6,   173,   656,   174,    -1,   662,    -1,   662,   173,
     656,   174,    -1,   662,   173,   673,   342,   673,   174,    -1,
       5,    -1,     5,   173,   656,   174,    -1,    52,    -1,    52,
     173,   661,   174,    -1,    52,   173,   661,   342,   673,   174,
      -1,    54,    -1,    53,    -1,    53,    -1,   674,    -1,     7,
      -1,    24,    -1,    20,    21,    -1,    25,    -1,    26,    -1,
      20,    22,    23,    -1,    28,    -1,    27,    22,    23,    -1,
     669,    -1,   668,    -1,     5,    -1,     6,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,     5,    -1,     6,    -1,
     175,    -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,
     670,    -1,    22,    -1,   238,    -1,    23,    -1,   257,    -1,
     268,    -1,    38,    -1,   270,    -1,   260,    -1,    98,    -1,
     231,    -1,    80,    -1,   125,    -1,   296,    -1,    41,    -1,
     321,    -1,   227,    -1,   280,    -1,   120,    -1,   251,    -1,
     116,    -1,   118,    -1,   119,    -1,   245,    -1,   273,    -1,
      86,    -1,   327,    -1,   279,    -1,   126,    -1,   171,    -1,
      97,    -1,   113,    -1,   267,    -1,   326,    -1,   264,    -1,
     241,    -1,    92,    -1,    63,    -1,   286,    -1,   287,    -1,
     288,    -1,   289,    -1,   105,    -1,   248,    -1,   249,    -1,
     244,    -1,   246,    -1,   247,    -1,    26,    -1,   275,    -1,
      83,    -1,   142,    -1,   143,    -1,   146,    -1,   148,    -1,
     149,    -1,   150,    -1,   151,    -1,   152,    -1,   153,    -1,
     154,    -1,   156,    -1,   158,    -1,   159,    -1,   160,    -1,
     161,    -1,   163,    -1,   165,    -1,   220,    -1,   219,    -1,
     242,    -1,   243,    -1,    99,    -1,    52,    -1,   320,    -1,
     669,    -1,   671,   342,   669,    -1,    11,    -1,    11,    -1,
       5,    -1,     3,    -1,     3,   674,    -1,   249,   676,    -1,
     673,   173,   174,    -1,   673,   173,   531,   174,    -1,    -1,
     678,    -1,   268,   679,    -1,   671,    -1,   682,    -1,   680,
      -1,   681,   342,   680,    -1,   596,    -1,   684,    -1,   685,
      -1,   686,    -1,   687,    -1,   701,    -1,   708,    -1,   710,
      -1,   713,    -1,   723,    -1,   724,    -1,   135,   173,   597,
     727,   174,    -1,   136,   173,   681,   727,   174,    -1,   137,
     173,   680,   727,   174,    -1,   138,   173,   238,   689,   688,
     727,   174,    -1,    -1,   342,   728,    -1,   342,   728,   342,
     690,    -1,   342,   728,   342,   690,   342,   696,    -1,   342,
     728,   342,   696,    -1,   342,   690,    -1,   342,   690,   342,
     696,    -1,   342,   696,    -1,   669,    -1,   139,   173,   691,
     174,    -1,   692,    -1,   691,   342,   692,    -1,   694,   693,
      -1,    -1,   321,   695,    -1,   596,    -1,   669,    -1,   697,
     699,    -1,   698,    -1,   697,   342,   698,    -1,   596,    -1,
      -1,   266,   700,    -1,   110,   265,   110,    -1,   151,   265,
     110,    -1,   150,   265,   110,    -1,   148,   265,   110,    -1,
     148,   265,    83,   154,    -1,   140,   173,   702,   703,   699,
     727,   174,    -1,    -1,   728,   342,    -1,   704,    -1,   703,
     342,   704,    -1,   705,   706,    -1,   596,    -1,    -1,   321,
     707,    -1,   669,    -1,   141,   173,   726,   597,   709,   174,
      -1,    84,   143,    -1,   142,   143,    -1,   144,   173,   238,
     711,   712,   727,   174,    -1,   669,    -1,    -1,   342,   597,
      -1,   145,   173,   714,   715,   727,   721,   722,   174,    -1,
       3,    -1,    -1,   146,   716,   717,    -1,   736,    -1,   718,
      -1,   717,   342,   718,    -1,   719,    -1,   720,    -1,   597,
     735,    -1,   597,   321,   669,   735,    -1,    -1,   736,    -1,
     110,   265,   151,    -1,   151,   265,   151,    -1,   147,   173,
     597,   727,   174,    -1,   157,   173,   725,   680,   737,   174,
      -1,   726,    -1,   115,    -1,   152,    -1,   154,    -1,    -1,
     158,   154,    -1,   158,   115,    -1,   155,   173,   729,   174,
      -1,   730,    -1,   729,   342,   730,    -1,   733,    -1,   734,
      -1,   669,    -1,   596,    -1,   732,   321,   731,    -1,   250,
     732,    -1,    83,   250,    -1,    -1,   736,    -1,   104,   149,
      -1,   104,   125,    -1,    -1,   738,    -1,   161,   281,   162,
     739,   747,    -1,   740,    -1,   745,    -1,   163,   741,   743,
      -1,    83,   156,   743,    -1,   742,    -1,     3,    -1,    -1,
     159,   744,    -1,   742,    -1,   160,   746,    -1,   669,    -1,
      -1,   748,    -1,   750,    -1,   751,   749,    -1,    -1,   750,
      -1,   153,   753,    -1,    83,   156,    -1,   156,   752,    -1,
     742,    -1,   669,    -1,   164,   173,   680,   570,   727,   174,
      -1
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
    2869,  2886,  2890,  2891,  2895,  2896,  2900,  2901,  2902,  2906,
    2907,  2912,  2917,  2922,  2930,  2931,  2937,  2939,  2944,  2952,
    2960,  2971,  2972,  2973,  2977,  2978,  2982,  2983,  2984,  2988,
    2989,  3009,  3013,  3023,  3024,  3028,  3040,  3045,  3047,  3051,
    3062,  3073,  3104,  3105,  3110,  3114,  3123,  3132,  3140,  3141,
    3145,  3146,  3147,  3152,  3153,  3155,  3160,  3164,  3174,  3175,
    3179,  3180,  3185,  3189,  3195,  3201,  3211,  3223,  3228,  3232,
    3231,  3244,  3249,  3254,  3259,  3267,  3268,  3272,  3273,  3277,
    3279,  3285,  3286,  3291,  3296,  3300,  3305,  3309,  3310,  3315,
    3316,  3320,  3324,  3325,  3329,  3333,  3334,  3338,  3342,  3346,
    3347,  3352,  3361,  3362,  3363,  3367,  3368,  3369,  3370,  3371,
    3372,  3373,  3374,  3375,  3379,  3396,  3400,  3407,  3417,  3424,
    3434,  3435,  3436,  3440,  3447,  3454,  3461,  3471,  3475,  3491,
    3492,  3496,  3502,  3508,  3513,  3521,  3523,  3528,  3536,  3546,
    3547,  3548,  3552,  3556,  3557,  3561,  3565,  3575,  3576,  3578,
    3583,  3584,  3586,  3592,  3593,  3600,  3607,  3614,  3621,  3628,
    3635,  3642,  3649,  3656,  3663,  3670,  3676,  3683,  3690,  3697,
    3704,  3711,  3718,  3725,  3731,  3738,  3745,  3752,  3759,  3761,
    3783,  3787,  3788,  3792,  3793,  3795,  3797,  3798,  3799,  3800,
    3801,  3802,  3803,  3804,  3805,  3806,  3807,  3808,  3809,  3813,
    3883,  3889,  3890,  3894,  3899,  3900,  3905,  3906,  3911,  3912,
    3917,  3918,  3922,  3923,  3927,  3928,  3929,  3933,  3937,  3942,
    3943,  3944,  3948,  3952,  3953,  3954,  3955,  3956,  3960,  3964,
    3968,  3996,  3997,  4002,  4003,  4004,  4005,  4009,  4016,  4021,
    4026,  4031,  4036,  4044,  4045,  4049,  4059,  4069,  4076,  4083,
    4090,  4097,  4110,  4111,  4116,  4121,  4126,  4131,  4139,  4140,
    4144,  4166,  4167,  4172,  4173,  4178,  4179,  4185,  4191,  4197,
    4203,  4209,  4215,  4222,  4226,  4227,  4228,  4232,  4233,  4244,
    4246,  4250,  4252,  4256,  4257,  4263,  4272,  4273,  4274,  4275,
    4276,  4280,  4281,  4285,  4291,  4294,  4300,  4303,  4309,  4312,
    4317,  4337,  4338,  4339,  4343,  4349,  4413,  4444,  4507,  4546,
    4563,  4579,  4595,  4611,  4612,  4629,  4646,  4663,  4684,  4688,
    4695,  4740,  4741,  4745,  4756,  4759,  4763,  4771,  4777,  4785,
    4789,  4794,  4796,  4802,  4810,  4812,  4817,  4821,  4827,  4835,
    4837,  4842,  4850,  4852,  4857,  4858,  4862,  4867,  4878,  4889,
    4899,  4909,  4911,  4916,  4917,  4919,  4921,  4930,  4931,  4940,
    4941,  4942,  4943,  4944,  4946,  4947,  4960,  4978,  4979,  4993,
    5013,  5014,  5015,  5016,  5017,  5018,  5019,  5021,  5022,  5024,
    5036,  5050,  5064,  5071,  5086,  5101,  5108,  5128,  5140,  5155,
    5170,  5171,  5175,  5176,  5177,  5180,  5181,  5184,  5186,  5189,
    5190,  5191,  5192,  5193,  5194,  5198,  5199,  5200,  5201,  5202,
    5203,  5204,  5205,  5209,  5210,  5211,  5212,  5213,  5214,  5215,
    5216,  5217,  5218,  5219,  5220,  5221,  5223,  5224,  5225,  5226,
    5227,  5228,  5229,  5230,  5231,  5232,  5233,  5234,  5235,  5236,
    5238,  5239,  5240,  5241,  5242,  5243,  5244,  5245,  5246,  5247,
    5248,  5249,  5250,  5251,  5252,  5254,  5255,  5256,  5257,  5258,
    5259,  5260,  5261,  5263,  5264,  5265,  5266,  5267,  5268,  5269,
    5270,  5271,  5272,  5273,  5274,  5275,  5276,  5277,  5278,  5279,
    5280,  5281,  5282,  5283,  5284,  5285,  5286,  5290,  5291,  5296,
    5319,  5340,  5372,  5374,  5382,  5389,  5394,  5409,  5410,  5414,
    5417,  5420,  5424,  5426,  5431,  5435,  5436,  5437,  5438,  5439,
    5440,  5441,  5442,  5443,  5444,  5448,  5456,  5464,  5471,  5485,
    5486,  5490,  5494,  5498,  5502,  5506,  5510,  5517,  5521,  5525,
    5526,  5536,  5544,  5545,  5549,  5553,  5557,  5564,  5566,  5571,
    5575,  5576,  5580,  5581,  5582,  5583,  5584,  5588,  5601,  5602,
    5606,  5608,  5613,  5619,  5623,  5624,  5628,  5633,  5642,  5643,
    5647,  5658,  5662,  5663,  5668,  5678,  5681,  5683,  5687,  5691,
    5692,  5696,  5697,  5701,  5705,  5708,  5710,  5714,  5715,  5719,
    5727,  5736,  5737,  5741,  5742,  5746,  5747,  5748,  5763,  5767,
    5768,  5778,  5779,  5783,  5787,  5791,  5801,  5805,  5808,  5810,
    5814,  5815,  5818,  5820,  5824,  5829,  5830,  5834,  5835,  5839,
    5843,  5846,  5848,  5852,  5856,  5860,  5863,  5865,  5869,  5870,
    5874,  5876,  5880,  5884,  5885,  5889,  5893,  5897
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
     532,   533,   534,   534,   535,   535,   536,   536,   536,   537,
     537,   538,   538,   538,   539,   539,   540,   540,   540,   540,
     540,   541,   541,   541,   542,   542,   543,   543,   543,   544,
     544,   362,   545,   546,   546,   547,   548,   362,   362,   549,
     550,   551,   552,   552,   553,   554,   554,   554,   554,   554,
     555,   555,   555,   556,   556,   556,   557,   558,   559,   559,
     560,   560,   561,   561,   561,   561,   561,   561,   561,   562,
     561,   563,   563,   563,   563,   564,   564,   565,   565,   566,
     566,   567,   567,   568,   568,   569,   569,   570,   570,   571,
     571,   571,   572,   572,   572,   573,   573,   573,   573,   574,
     574,   575,   576,   576,   576,   577,   577,   577,   577,   577,
     577,   577,   577,   577,   578,   578,   579,   579,   580,   580,
     581,   581,   581,   582,   582,   582,   582,   583,   583,   584,
     584,   585,   585,   585,   585,   586,   586,   587,   587,   588,
     588,   588,   589,   590,   590,   591,   592,   593,   593,   593,
     594,   594,   594,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   596,   596,   597,   597,   597,   597,   597,   597,   597,
     597,   597,   597,   597,   597,   597,   597,   597,   597,   598,
     599,   600,   600,   601,   602,   602,   603,   603,   604,   604,
     605,   605,   606,   606,   607,   607,   607,   608,   609,   610,
     610,   610,   611,   612,   612,   612,   612,   612,   613,   614,
     614,   615,   615,   616,   616,   616,   616,   617,   617,   617,
     617,   617,   617,   618,   618,   619,   619,   619,   619,   619,
     619,   619,   620,   620,   621,   621,   621,   621,   622,   622,
     623,   624,   624,   625,   625,   626,   626,   627,   627,   627,
     627,   627,   627,   627,   628,   628,   628,   629,   629,   630,
     630,   631,   631,   632,   632,   632,   633,   633,   633,   633,
     633,   634,   634,   635,   636,   636,   637,   637,   638,   638,
     639,   640,   640,   640,   641,   641,   641,   641,   641,   641,
     641,   641,   641,   641,   641,   641,   641,   641,   641,   641,
     642,   643,   643,   643,   644,   644,   644,   645,   645,   646,
     647,   647,   647,   647,   648,   648,   649,   649,   650,   651,
     651,   652,   653,   653,   654,   654,   655,   656,   657,   658,
     659,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   661,   661,   662,
     663,   663,   664,   664,   664,   665,   665,   666,   667,   668,
     668,   668,   668,   668,   668,   669,   669,   669,   669,   669,
     669,   669,   669,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   671,   671,   672,
     673,   673,   674,   674,   675,   676,   676,   677,   677,   678,
     679,   680,   681,   681,   682,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   684,   685,   686,   687,   688,
     688,   688,   688,   688,   688,   688,   688,   689,   690,   691,
     691,   692,   693,   693,   694,   695,   696,   697,   697,   698,
     699,   699,   700,   700,   700,   700,   700,   701,   702,   702,
     703,   703,   704,   705,   706,   706,   707,   708,   709,   709,
     710,   711,   712,   712,   713,   714,   715,   715,   716,   717,
     717,   718,   718,   719,   720,   721,   721,   722,   722,   723,
     724,   725,   725,   726,   726,   727,   727,   727,   728,   729,
     729,   730,   730,   731,   732,   733,   734,   734,   735,   735,
     736,   736,   737,   737,   738,   739,   739,   740,   740,   741,
     742,   743,   743,   744,   745,   746,   747,   747,   748,   748,
     749,   749,   750,   751,   751,   752,   753,   754
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
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       3,     3,     3,     3,     0,     2,     3,     4,     4,     5,
       5,     0,     1,     2,     0,     1,     1,     1,     1,     2,
       2,     1,     3,     3,     1,     4,     1,     1,     1,     4,
       6,     5,     1,     3,     1,     5,     5,     5,     3,     1,
       0,     1,     1,     0,     1,     5,     1,     4,     0,     2,
       1,     3,     2,     2,     3,     2,     3,     1,     1,     0,
       5,     5,     2,     4,     1,     0,     1,     0,     3,     1,
       3,     0,     2,     3,     1,     3,     1,     0,     3,     0,
       2,     2,     0,     2,     2,     0,     2,     2,     2,     1,
       3,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     3,     6,     6,
       0,     1,     1,     3,     3,     3,     3,     1,     3,     4,
       3,     5,     5,     7,     7,     1,     3,     4,     4,     1,
       1,     1,     2,     1,     3,     3,     3,     3,     4,     3,
       3,     4,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     3,     1,     3,     0,     3,     0,     3,     0,     3,
       1,     1,     1,     1,     2,     1,     2,     2,     4,     2,
       1,     2,     2,     0,     3,     2,     2,     3,     2,     3,
       4,     1,     3,     1,     1,     1,     1,     6,     2,     2,
       2,     2,     2,     0,     2,     8,     8,     6,     6,     6,
       3,     8,     1,     3,     1,     3,     3,     2,     0,     2,
       1,     1,     3,     1,     3,     1,     3,     4,     6,     5,
       5,     4,     6,     1,     1,     1,     0,     3,     0,     3,
       0,     3,     0,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     2,     2,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     4,     1,     2,     2,     2,     2,     1,     1,
       4,     1,     3,     5,     1,     3,     5,     6,     6,     1,
       6,     4,     5,     4,     1,     3,     3,     3,     4,     1,
       2,     4,     1,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     1,     4,     1,
       1,     1,     1,     1,     1,     4,     6,     1,     4,     6,
       1,     2,     1,     1,     1,     1,     4,     1,     4,     6,
       1,     4,     1,     4,     6,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     2,     2,     3,     4,     0,     1,     2,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     5,     7,     0,
       2,     4,     6,     4,     2,     4,     2,     1,     4,     1,
       3,     2,     0,     2,     1,     1,     2,     1,     3,     1,
       0,     2,     3,     3,     3,     3,     4,     7,     0,     2,
       1,     3,     2,     1,     0,     2,     1,     6,     2,     2,
       7,     1,     0,     2,     8,     1,     0,     3,     1,     1,
       3,     1,     1,     2,     4,     0,     1,     3,     3,     5,
       6,     1,     1,     1,     1,     0,     2,     2,     4,     1,
       3,     1,     1,     1,     1,     3,     2,     2,     0,     1,
       2,     2,     0,     1,     5,     1,     1,     3,     3,     1,
       1,     0,     2,     1,     2,     1,     0,     1,     1,     2,
       0,     1,     2,     2,     2,     1,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    17,     0,     0,   506,     0,   441,   441,     0,
       0,     0,    15,     0,     0,    18,    27,     0,     0,     7,
       5,     9,    11,     3,     0,    25,     0,    85,    26,     0,
     469,     0,    19,     0,     0,     0,     0,     0,    34,    35,
      28,    29,    30,    33,    31,   143,   142,   140,   141,    37,
     144,    32,   415,   414,   420,   419,   416,   418,   417,   531,
     549,   537,   538,   587,     0,    16,     0,   905,   906,   908,
     909,   910,   911,   913,   915,   960,   918,   926,   985,   949,
     923,   962,   937,   948,   942,   921,   984,   954,   943,   932,
     933,   934,   930,   924,   940,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   941,   907,   981,   980,   928,   922,   914,   947,
     982,   983,   957,   935,   958,   959,   955,   956,   931,   916,
     920,   946,   944,   917,   919,   936,   961,   939,   929,   950,
     951,   952,   953,   925,   986,   927,   945,   938,     0,   821,
     912,   507,   508,     0,     0,   440,   444,   444,   422,     0,
     428,     0,   534,   272,   506,     0,     0,   736,   734,   735,
     322,     0,   731,   733,   272,     0,     0,     0,     0,     0,
     991,   990,     0,   994,   899,   900,   901,   902,   903,   904,
     104,   272,   272,   103,    99,   108,   272,     0,     0,     0,
      89,    91,     0,   100,   101,    75,   898,     0,     0,     0,
       0,     0,   428,     0,     0,     0,   989,     0,     0,     0,
       0,   266,     0,   269,   268,     0,   849,     1,     0,     0,
       0,   170,   171,     0,   188,   187,     0,     0,     0,     0,
       0,     0,    23,    23,   169,     0,     0,     0,   137,   138,
       0,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    21,    21,
       0,     0,   411,   801,   803,   802,   949,     0,   920,   936,
     951,     0,     0,     0,   981,   980,    23,    40,    41,     0,
     262,     2,     0,   550,   550,   550,   589,    13,   514,     0,
       0,   992,   905,   906,   908,   909,   910,   911,   807,   806,
     805,   808,   809,     0,     0,     0,   895,   818,   819,   743,
     743,   743,   743,   743,   685,     0,   500,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   754,     0,
     950,   951,   952,   953,     0,     0,     0,     0,   699,   698,
     558,   758,   584,   615,   586,   605,   606,   607,   608,   609,
     610,   611,     0,   612,   682,   681,   613,   653,   697,   686,
       0,   688,   690,   692,   693,   556,   752,   683,     0,     0,
       0,   689,   684,   760,   813,   687,   695,   694,     0,     0,
     824,   804,   696,  1005,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,   773,   490,     0,   421,   445,   423,     0,
       0,     0,   425,   429,   430,     0,   532,   536,     0,   273,
       0,   548,    20,     0,     0,   595,     0,     0,    10,    12,
       0,     0,   105,   106,    98,   107,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   428,   427,
     175,     0,     0,     0,     0,   587,     0,   471,     0,     0,
       0,     0,   470,   192,   191,     0,   190,   189,     0,    23,
      23,    23,    23,     0,    69,     0,     0,     0,   272,     0,
       0,    23,     0,     0,     0,     0,     0,   403,   146,     0,
       0,     0,     0,     0,     0,   411,   406,   406,   406,   406,
     402,     0,     0,     0,     0,   404,   405,   413,   412,   394,
       0,     0,    49,    47,     0,     0,     0,     0,     0,   880,
     875,   889,   851,   890,   892,   893,   864,   867,   859,   860,
     862,   863,   861,   870,   872,   882,   886,   885,   783,   780,
     782,     0,     0,   873,   874,    42,   877,   852,   853,   857,
       0,   551,   552,   553,   553,   553,     0,   592,     0,   486,
       0,   558,   509,     0,   897,   822,   993,   817,   815,     0,
       0,     0,     0,   738,   740,   739,   742,   741,     0,   642,
       0,     0,   728,     0,     0,     0,     0,  1048,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   586,
       0,   690,   824,   614,     0,   678,   679,     0,     0,     0,
     673,   810,     0,   778,     0,   778,   774,   775,     0,     0,
       0,   842,   844,     0,     0,   643,     0,     0,     0,   539,
     514,     0,   757,     0,     0,     0,     0,     0,     0,     0,
       0,   620,   620,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   816,   814,     0,
       0,     0,     0,   493,   490,   488,   442,     0,     0,   424,
     433,   432,     0,     0,     0,   533,     0,   558,   729,   834,
     501,     0,   732,   733,     0,    38,     8,     6,     4,     0,
     995,     0,   504,   498,   505,   111,    79,   109,   112,    76,
      77,    92,   979,   939,    90,    97,    96,   102,    86,    88,
       0,     0,   426,   177,   176,     0,   175,     0,     0,   120,
       0,   156,     0,     0,   166,   164,   162,   167,     0,     0,
     147,   150,   159,   136,     0,   136,   136,   267,     0,   463,
     463,     0,   272,     0,     0,   175,     0,     0,   145,   148,
     154,     0,     0,     0,     0,     0,     0,   173,     0,   928,
      58,    54,   272,     0,   361,   362,     0,     0,     0,     0,
     357,   357,   357,   357,   406,     0,   411,   411,   411,   411,
     401,     0,   391,   388,   392,   390,    22,   411,   411,   411,
      46,   274,    50,   776,    51,    45,    48,    44,     0,     0,
       0,   891,     0,     0,     0,     0,   871,     0,   778,   778,
     786,   787,   788,   789,   790,   782,   780,     0,   799,   800,
     263,     0,     0,     0,     0,   588,   599,   602,   554,     0,
       0,     0,   591,   590,   848,     0,   595,   515,     0,     0,
     514,     0,     0,   829,     0,     0,   896,   744,   792,   791,
       0,     0,     0,   653,  1004,  1002,  1085,  1001,  1085,     0,
       0,     0,     0,  1083,  1084,     0,     0,  1065,  1066,   653,
    1082,     0,  1081,   587,     0,     0,   652,   650,   680,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   839,   844,     0,   843,     0,     0,     0,
       0,     0,   645,     0,     0,   569,   568,   559,   560,   567,
     575,   575,   821,   558,   542,   544,   577,   759,   583,   640,
     639,   641,   617,     0,   626,   627,   624,   625,   623,     0,
       0,   621,   622,     0,     0,   585,   616,     0,   646,   669,
     654,   655,   660,   670,   659,   750,   677,   676,   675,   674,
     656,   657,   658,   671,   662,   664,   666,   661,   672,   668,
     667,   665,   663,   630,     0,   704,   756,   753,   701,     0,
       0,   931,   846,     0,   824,     0,   909,   910,   911,   755,
     825,   491,   492,   489,   443,     0,     0,     0,   439,   434,
     435,   431,     0,   535,   730,     0,   597,   598,   596,    39,
      36,   996,     0,     0,     0,    81,     0,    81,    95,    81,
      81,     0,     0,     0,     0,     0,     0,   163,   161,   165,
     155,   151,     0,     0,   135,   116,     0,     0,     0,   115,
       0,     0,   232,     0,   468,   474,     0,   474,   272,     0,
     472,   473,     0,     0,   152,   149,   272,   272,   272,   272,
       0,     0,    24,    55,    57,     0,   997,     0,     0,   232,
     178,   198,     0,     0,   364,   365,   363,     0,     0,   272,
     357,   356,     0,   355,     0,     0,     0,     0,   389,   411,
     398,   395,   399,   397,   408,     0,   409,    53,   393,   400,
      43,     0,   847,     0,   894,     0,     0,     0,   847,   887,
       0,   888,   784,   785,   797,   796,     0,     0,   847,     0,
       0,     0,     0,   603,   604,   601,     0,   547,   546,   545,
     594,   593,   541,   513,   510,   487,   511,   512,   823,     0,
       0,     0,   691,     0,     0,     0,     0,     0,  1027,  1019,
       0,  1053,  1040,  1050,  1054,  1049,   653,  1061,  1062,     0,
    1085,     0,  1102,  1085,   503,     0,   502,   496,   651,     0,
       0,     0,   636,     0,     0,     0,     0,   779,     0,   811,
     781,   812,   820,     0,     0,   840,     0,   845,   833,     0,
       0,   831,     0,   644,     0,   575,     0,     0,   568,     0,
       0,   521,     0,     0,   526,   527,   528,   521,     0,   522,
       0,     0,   524,   927,   565,   574,   576,   563,   562,     0,
       0,   540,     0,   581,   638,     0,     0,     0,     0,     0,
     637,   629,     0,     0,   706,     0,   767,     0,   771,     0,
       0,     0,   446,   436,   437,   438,   835,   499,     0,   110,
       0,    74,     0,    73,    83,    84,     0,     0,   121,   124,
     160,   158,   157,   411,   411,   411,   118,   119,   117,     0,
     114,     0,   113,   205,   206,     0,     0,   449,   375,   452,
       0,   451,     0,     0,     0,   153,   182,   183,     0,   184,
     275,    71,    72,    70,     0,     0,    60,   998,    56,     0,
       0,     0,   207,   203,   208,   209,   897,     0,   180,     0,
     270,     0,     0,     0,   193,     0,   347,     0,   359,     0,
       0,     0,   396,   407,     0,   881,   876,   854,   865,     0,
     868,     0,   883,     0,   782,   794,   798,   878,     0,   855,
     856,   858,   600,     0,     0,     0,     0,  1087,  1086,  1015,
    1003,  1016,  1017,     0,  1085,   962,     0,  1094,     0,  1089,
       0,  1091,  1092,     0,     0,  1085,     0,  1052,     0,     0,
       0,     0,  1085,     0,     0,  1068,  1075,  1079,     0,     0,
    1103,     0,   494,     0,     0,     0,     0,     0,     0,     0,
       0,   777,   841,     0,   832,     0,   836,   837,   566,   564,
       0,   516,   649,   647,     0,   561,     0,     0,   521,     0,
     525,   523,   572,     0,   822,   543,     0,     0,   557,   628,
     632,   631,     0,     0,     0,   700,     0,   708,   770,   769,
       0,     0,   826,    80,    82,    78,     0,   123,   133,   134,
     132,     0,     0,   233,     0,     0,     0,   231,   210,   211,
     213,   214,   376,     0,   464,     0,     0,   457,   457,   482,
     484,     0,     0,     0,   987,  1000,   999,    19,     0,    52,
      61,    62,    64,    65,    68,    66,    67,   181,   264,   197,
     232,     0,     0,   200,     0,   265,   366,   367,     0,     0,
     186,     0,   506,   923,   937,     0,     0,     0,     0,     0,
     291,   303,   304,   297,   298,   299,   302,   300,   286,   288,
     305,   316,   315,   320,   319,   318,   317,     0,   301,   296,
     295,   306,     0,     0,     0,     0,     0,   410,     0,   850,
       0,     0,   795,     0,     0,   579,   824,   827,   828,   737,
       0,  1039,  1024,  1026,  1040,  1037,  1020,     0,  1097,  1096,
    1088,     0,     0,     0,     0,     0,     0,  1041,  1051,     0,
    1056,  1055,  1058,  1059,  1057,   653,     0,  1101,  1100,   653,
    1067,  1069,  1071,  1072,     0,  1076,     0,  1080,  1127,   497,
       0,     0,     0,     0,   749,     0,   747,   748,     0,   838,
     830,   648,     0,     0,   517,     0,     0,   518,   521,     0,
       0,   578,   582,   619,   618,   705,     0,   710,   711,   703,
       0,   768,   772,     0,     0,   129,     0,   127,     0,     0,
       0,     0,   258,     0,   228,     0,   212,   215,   216,   221,
     222,   223,     0,   475,     0,   480,     0,     0,   463,   463,
       0,     0,   185,    59,     0,    63,   204,   897,     0,   179,
       0,   199,     0,     0,   380,     0,     0,     0,     0,     0,
     321,     0,   324,   939,   329,   328,   330,     0,   338,   340,
       0,     0,   291,   347,     0,   348,   358,     0,   347,   354,
       0,     0,   866,   869,   884,   879,   555,     0,     0,     0,
       0,     0,  1036,     0,  1018,  1090,  1093,  1095,     0,     0,
       0,     0,  1047,  1060,     0,  1073,  1099,     0,     0,     0,
       0,     0,   495,   634,   633,     0,     0,     0,   570,   520,
     530,   529,   519,     0,   573,   707,     0,     0,     0,   653,
     723,   712,   715,   713,     0,     0,   130,   131,   128,   126,
     681,     0,   259,     0,   224,   217,   253,     0,     0,     0,
       0,   254,   226,   257,   465,     0,   450,   483,     0,   459,
     461,   474,   474,   485,     0,   988,   232,     0,   202,   271,
     377,   377,   368,   369,     0,   360,   384,   168,     0,     0,
     196,     0,     0,   285,     0,   325,     0,     0,   291,   339,
       0,     0,   335,   340,   291,   347,     0,     0,     0,     0,
     947,   280,   277,   287,   278,     0,     0,   580,   825,  1034,
       0,  1029,  1032,  1025,  1038,  1021,  1023,  1042,     0,  1045,
    1044,  1043,  1098,  1070,     0,     0,  1064,     0,     0,     0,
    1116,  1105,  1106,   751,   745,   746,   571,     0,   716,   714,
     717,     0,   709,   122,   125,     0,     0,   252,     0,   255,
     272,     0,   481,   458,     0,   462,   476,   476,     0,     0,
     219,   201,   375,   378,   375,   375,   375,   370,     0,     0,
     347,   194,   195,   282,     0,     0,   326,     0,   291,   341,
       0,     0,   336,     0,   343,     0,   292,   291,     0,     0,
       0,     0,     0,     0,  1028,     0,     0,  1031,     0,  1046,
    1074,  1077,  1078,  1111,  1115,  1114,  1110,  1111,  1109,     0,
       0,     0,  1104,  1117,  1118,  1120,     0,     0,   725,     0,
     726,   272,   229,     0,   250,   466,   460,   477,   478,   478,
     174,   218,   232,     0,     0,     0,     0,   382,   383,   381,
       0,     0,   311,   312,   309,   310,   386,   313,   379,   308,
     307,   314,   276,   323,     0,   331,   337,     0,   333,   291,
       0,   291,     0,     0,   292,   289,   347,   353,     0,   351,
     279,   281,   283,   284,  1030,  1035,  1033,  1022,     0,  1108,
    1107,  1123,  1126,  1122,  1125,  1124,  1119,  1121,     0,     0,
     653,   718,   720,   727,   724,   250,     0,   227,   261,   246,
     241,     0,   480,   480,   220,   374,   372,   373,   371,     0,
     293,   327,   292,   334,   332,   344,     0,     0,   290,     0,
       0,  1113,  1112,   721,   719,   722,   241,     0,   248,   249,
     247,   251,     0,   242,   243,   256,   479,   448,   453,   385,
     347,   291,   342,   349,   352,   260,   230,     0,     0,     0,
     245,     0,   244,     0,   447,   387,     0,   343,   346,   350,
     235,   236,     0,     0,   240,   239,     0,   294,   345,   234,
     237,   238,     0,   455,   454,     0,   456
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,   179,   176,   175,   177,   178,    32,    33,   512,
     487,    34,    35,    36,    37,  1030,  1521,   287,  1522,  1523,
     790,  1083,  1086,  1489,  1490,  1491,   787,  1313,  1524,   198,
    1037,  1035,  1271,  1525,   209,   210,   199,   200,   201,   734,
     202,   203,   204,   726,   727,  1526,   749,  1059,  1055,  1056,
    1527,    45,   778,   760,   779,   761,   780,    46,   247,   248,
     745,  1328,   249,   250,  1510,  1090,  1091,  1671,  1321,  1322,
    1323,  1470,  1293,  1646,  1647,  1324,  1879,  1648,  1649,  1759,
    1650,  1651,  2017,  1294,  1652,  2084,  2053,  2054,  2055,  2051,
    2020,  1772,  1467,  1773,   521,  1325,   251,   220,   221,  1505,
    1092,   429,    47,  1803,  1823,    48,  1528,  1693,  2060,  1977,
    1966,  1530,  1531,  1532,  1680,  1681,  1895,  1533,  1685,  1534,
    1812,  1813,  1688,  1689,  1810,  1535,  1983,  1536,  1537,  2078,
    1908,  1698,  1102,  1103,    50,   796,  1097,  1674,  1792,  1793,
    1473,  1884,  1795,  1796,  1959,  1890,  1968,   272,  1538,   812,
    1115,   519,  1539,  1540,    54,   422,   423,   424,  1019,   156,
     416,   699,    55,  2074,  2092,  1658,  1778,  1779,  1065,  1066,
     222,  1299,  1948,  2022,  1776,  1478,  1479,    56,    57,    58,
     695,   905,  1185,   721,   359,   722,  1187,   723,   153,   571,
     572,   569,   936,  1231,  1431,  1232,  1617,   223,   161,   162,
     426,    60,  1541,   224,   943,   944,    63,   563,   859,   360,
     639,   640,   937,  1221,  1222,  1236,  1237,  1243,  1554,  1438,
     361,   362,   296,   567,   866,   715,   855,   856,  1145,   363,
     364,   365,   366,   963,   367,   954,   368,   369,   610,   370,
     953,   371,   636,   372,   373,   939,   374,   375,   376,   377,
     378,   379,   380,  1253,  1254,  1447,  1629,  1630,  1750,  1751,
    1752,  1753,  2011,  2012,  1862,   381,   611,   171,   172,   383,
     583,   384,   385,   386,   642,   387,   388,   389,   390,   391,
     628,   917,   623,   625,   553,   846,   880,   847,  1356,   848,
     849,   554,   392,   393,   394,   941,   395,   396,   874,   397,
     711,   930,   923,   924,   631,   632,   927,  1003,  1121,   863,
     225,  1548,  1116,  1130,   398,   557,   558,   399,  1296,   728,
     206,   612,   150,  1485,   226,  1122,   401,    64,   183,  1316,
    1317,  1486,   885,   886,   887,   402,   403,   404,   405,   406,
    1374,  1169,  1562,  1830,  1831,  1917,  1832,  1996,  1563,  1564,
    1565,  1385,  1577,   407,   891,  1172,  1173,  1174,  1387,  1581,
     408,  1390,   409,  1178,  1392,   410,   898,  1180,  1394,  1590,
    1591,  1592,  1593,  1594,  1730,   411,   412,   901,   895,  1164,
     892,  1378,  1379,  1717,  1380,  1381,  1382,  1725,  1726,  1399,
    1400,  1850,  1851,  1927,  1928,  1999,  2042,  1852,  1925,  1932,
    1933,  2006,  1934,  1935,  2005,  2003,   413
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1743
static const yytype_int16 yypact[] =
{
     948,   152, -1743,    71, 16644,   -45,   -36,   281,   281, 16644,
     338,   391, -1743, 16644,   377,   382, -1743, 14308, 16644, -1743,
   -1743, -1743, -1743, -1743,   677, -1743,   694,   157,    83,   113,
     425,   526,  1328,   803,  1544, 12848, 12556,   435, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, -1743,   640,   467, -1743, 16644, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,   436,   376,
   -1743, -1743, -1743,  3873, 16644, -1743,   473,   473, -1743, 16644,
     772,   -25, -1743,   560,   -45,   905,   450, -1743, -1743, -1743,
   -1743,   600, -1743,   457,   560,  1774,  1774,   948,   948,  1774,
   -1743, -1743,   608, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743,   560,   560, -1743,   542, -1743,   560,   290,  -184,   544,
   -1743,   525,   587,   530, -1743, -1743, -1743,   615,   635,   404,
    1208,   826,   772, 15476, 16644, 16644, -1743,   566,   646,   911,
     676, -1743,    53, -1743, -1743,   203, -1743, -1743,   621, 16644,
     736, -1743, -1743, 16644, -1743, -1743,   682,   691,   711,   738,
   16644, 16644,   741,   741, -1743, 16644, 16644,   654, -1743, -1743,
     776, -1743,   817, 16644, 16644, 16644, 16644, 16644, 16644,   828,
     810, 16644, 16644, 16644, 16644, 16644, 16644,   761,   761,   761,
   16644, 16644,   415, -1743, -1743, -1743,   842, 16644, 16644, 16644,
     781,   903,   912,   915,   816,   848,    74,   788, -1743,   952,
   -1743, -1743,  1032,   224,   224,   224,   852, -1743,   866, 15768,
   16644,  1150,  1150,  1150,  1152,  1008,  1016,  1018, -1743, -1743,
   -1743, -1743, -1743,  1026,  1028,  1187, -1743, -1743, -1743,  1069,
    1069,  1069,  1069,  1069, -1743,  1077, -1743,  1085,  1102, 16644,
    1093,  1097,  1106,  1113,  1116,  1120,  1122,  1123,  1127,  1129,
    1130,  2164,  4559,  9191,  9191,  1131,  1133,  1134, -1743,  9191,
    1150,   274,   291,   235,  6909,  1135,  1136,  4559, -1743, -1743,
     293,   939,  1139, -1743,  1269, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, 16644, -1743, -1743, -1743,  9480, -1743, -1743, -1743,
     978, -1743,   970, -1743, -1743,   972, -1743, -1743,  1147,  1148,
    1149,  1009, -1743, -1743, -1743, -1743, -1743, -1743,  1150,  1150,
     -57, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743,   358,   950, -1743,  1049, -1743,   964,
    1239,  1242, -1743,  1001, -1743, 16644, -1743, -1743,  1025, -1743,
    3873, -1743, -1743,  7235, 14308,  1048,  1216,  1218, -1743, -1743,
    1224,  5245, -1743, -1743, -1743, -1743, -1743, -1743,   128,  1208,
     128,  1045, 13140,   389,  1258,  1261,  1266,     4,   772, -1743,
     809,   521,   698,   794,  1204,   777, 16644, -1743,    49,  1117,
   16644,   911,  1082, -1743, -1743,  1213, -1743, -1743,   805,   741,
     741,   741,   741,  1154,  1217,  1223, 16936, 16644,   560,   762,
   16644,   741, 16644,  1229,  1230,  1231,  1233, -1743, -1743, 16644,
    1168, 16644, 16644, 16644, 16644,   415,  1234,  1234,  1234,  1234,
   -1743,  1302, 16644, 16644, 16644, -1743, -1743, -1743, -1743, -1743,
   16644,   -53, -1743, -1743,    27,  1077, 16644,  4559, 16644,  1238,
    1244, -1743,   609, -1743, -1743, -1743,  1249,  1251, -1743, -1743,
   -1743, -1743, -1743,  1374, -1743,  1253, -1743, -1743, -1743,  1254,
    1255,  1044, 16644, -1743, -1743, -1743,  1257,  1262,  1264,  1265,
    9191, -1743, -1743,  1272,  1272,  1272,    39,  1143,  4559, -1743,
    1267,    14, -1743,  1268, -1743,  1099, -1743, -1743, -1743,  4559,
    4559,  1425,  1287, -1743, -1743, -1743, -1743, -1743,   346, -1743,
    1300,  1350, -1743,  9191,  9191,  9191,  1225,  1309,     2,  1237,
    1473,  9191,   622,  9191,  2164,  1304,  1307,  1318,  1321,   927,
     -50, -1743,    82,  1447,  2164,  1323,  1323,  9191,  9191,  9191,
    1256, -1743,   677,  1306,   677,  1306, -1743, -1743,  1150,  4559,
    2916, -1743,   583,  9191,  9191,  1447,   401,  9785, 16644, -1743,
     866, 16644, -1743,  4559,  3187,  9191,  9191,  9191,  9191,  1324,
    1326,   997,   997,  4559,  3187,  1155,  9191,  9191,  9191,  9191,
    9191,  9191,  9191,  9191,  9191,  9191,  9191,  9191,  9191,  9191,
    9191,  9191,  9191,  9191,  9191,  9191,  9191,  9191,  9191,  9191,
     366,  1329,  1297,  3873,  1327,  5571,  9191, -1743, -1743, 13432,
   14892,  1222,  1304, -1743,   363, -1743, -1743,  1424,  1428, -1743,
   -1743, -1743,    57,   677,   772, -1743,  1337,  1400, -1743, -1743,
   12835,    65, -1743, -1743,    47,  1270, -1743, -1743, -1743,  2164,
   -1743,   191, -1743, -1743,   833, -1743,   161, -1743, -1743, -1743,
     238, -1743,   828, 16644, -1743, -1743, -1743, -1743, -1743, -1743,
     128,   128, -1743, -1743, -1743,  1263,   809,  1240,  1271, -1743,
    1420,  1370,   911,   911, -1743, -1743, -1743, -1743,   911,  2525,
     698, -1743, -1743,   469,   667,  1273,   823, -1743,  1432,    48,
      48, 16644,   560,  1232,   911,   809,  1382,  2525,   805, -1743,
   -1743, 16644, 16644, 16644, 16644,  1331,  1311, -1743,  1450, 16644,
    1325,  1346,   350,  1259, -1743, -1743,   740,  1313, 16644,  1403,
   16060, 16060, 16060, 16060,  1234, 16644,   415,   415,   415,   415,
   -1743,  1710, -1743, -1743, -1743, -1743, -1743,   415,   415,   415,
   -1743, -1743, -1743,   954, -1743, -1743, -1743, -1743,   952,   677,
     677, -1743,  1558,   677,   677,   677, -1743,   171,  1306,  1306,
   -1743, -1743, -1743, -1743, -1743,  1255,  1254,  1301, -1743, -1743,
   -1743,   677,   677,   677,   677,  1243, -1743, 10373,  1480,   377,
     377,   377, -1743, -1743, -1743,    39,  1048, -1743,  1077, 15768,
     866,  4216, 16644, -1743,  1276,  1245, -1743, -1743, -1743, -1743,
    1475, 16644, 12835,   668, 12835, -1743,    -1, -1743,  1440, 16644,
    1427,  9191,  1260, -1743, -1743,  9191, 16644, -1743,  1457,   668,
   -1743,  9191, -1743,  1502,  7561,   216, -1743, -1743, -1743,   998,
    4559, 14600,  2588, 10683,  2498,  1431,  1319,  1150,  1437,  1150,
    1044,  1314,  9191, -1743,   641,  9191, -1743,  1330,  2691,  1277,
     286,  4559, -1743, 13724,  9493, -1743, -1743,  1281,  1178, 17228,
   17228, 17228,   246,    18, -1743, -1743,  1504, -1743, -1743, -1743,
   -1743, -1743,  1485,  4559, -1743,  9772, -1743, -1743, -1743,  7887,
    7887, -1743, -1743,  4559,  4559, -1743, -1743,  1077, -1743, 12835,
    1323,  1323,  1323,  1323,  1323,  1323,  1323,  1323,  1323,  1323,
    1151,  1151,  1151,  1256,   702,   702,   702,   702,  1484,  1484,
    1484,  1484,  1484, -1743,  1515,  1293, -1743, -1743, -1743,  9191,
    1461,  9191, 12835,  1462,   258,  1298,  1468,  1471,  1472, -1743,
     259, -1743,  1310, -1743, -1743, 16644,  1039,  1560, -1743, -1743,
   -1743, -1743,   368, -1743, -1743,  9191, -1743, -1743, -1743, -1743,
   -1743, -1743,  7887,  1385,   128,  1538,  1393,  1538, -1743,    35,
      35,  1150,  1397, 16644, 16644,   911,   194, -1743, -1743, -1743,
   -1743, -1743, 16644, 16644, -1743, -1743, 16644,  1565,  1115, -1743,
   16644, 16644, 16352, 14308, -1743,  1546,  1342,  1546,   560,  1547,
   -1743, -1743,  1404,   911, -1743, -1743,  1489,  1489,  1489,  1489,
   16644,   730, -1743, -1743, -1743,  1643,  1405, 16644,  1449, 15184,
    1585, -1743,  1365,   566, -1743,  1364, -1743,  1423, 16644,  1489,
   16060, -1743,  1516,  1349,  2525,  1519,  1521,  1522, -1743,   415,
   -1743, -1743, -1743, -1743, -1743,  1523,  1356, -1743, -1743, -1743,
   -1743,  1525, -1743,  1526, -1743,  1527,   298,  1528,  1363, -1743,
     306, -1743, -1743, -1743, -1743,  1426,  1387,  1534,  1368,  1537,
    1545,  1548,  9191, -1743, -1743, -1743,  1550, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,  2525,
    2525,  9191, -1743,   438,  1551,  9191,  1552,  1553, -1743,  1376,
    8213, 12835,   312, -1743,  1407, -1743,   339, -1743,  1379,  1620,
    1440,  1555,  1571,  1440, -1743,   320, -1743, -1743, -1743,  1575,
    1576,  1577,  1447,  9191,  9191,  9191,  9191, -1743,  1458, -1743,
   -1743, -1743, -1743,  9191,  2756, -1743,  1443, 12835, -1743,  9191,
    9191, -1743,  9191,  1447, 17228, 17228,  9493,  1304,  1582,  1583,
    1584,   922,   377,  9785, -1743, -1743, -1743,   863,  1684, -1743,
    9785,  1685,  1689, 16644, -1743,  1592, -1743, -1743, -1743, 14308,
   16644, -1743,  1663,  1661,  1485,  1150,   322,   330,  1303,  1380,
   -1743, -1743,  1666,  1597,  1670,  1599, -1743,  1606, -1743, 14016,
    9191, 16644, -1743, -1743, -1743, -1743, -1743, -1743,  1517, -1743,
     730, -1743,  1518, -1743, -1743, -1743,  1765,  1150, -1743, -1743,
   -1743, -1743, -1743,   415,   415,   415, -1743, -1743, -1743,   418,
   -1743, 16644, -1743, -1743, -1743,   627,  1132, -1743,  1465, -1743,
    1150, -1743,  1671,    62,  1150, -1743, -1743, -1743,  1524, -1743,
   -1743, -1743, -1743, -1743,  1513, 16644,   764, -1743, -1743, 14308,
   16644,   332, -1743, -1743, -1743, -1743,   248, 16644, -1743,   566,
    1616, 16644, 16644,  1617,  1529,  1618, 10386, 16644, -1743,  1557,
    1559,  1562, -1743, -1743,  2525, -1743, -1743, -1743, -1743,   677,
   -1743,   677, -1743,   677,  1255, -1743, -1743, -1743,   677, -1743,
   -1743, -1743, -1743, 16644,  1622,  1625, 10992, -1743, -1743, -1743,
   -1743, -1743, -1743,  5897,  1440,  1541,  9191, 12835,   341, -1743,
    1481, -1743, -1743,   725,  9191,  1440, 16644, -1743,  1658,  1660,
    1631,  9191,  1440,    26,  9191, -1743,  1620, -1743,  1531,  1633,
   -1743,  1634, -1743,  7561,  7561,  7887,  7887,  2725, 11301, 10065,
    2546, -1743, -1743,  9191, -1743, 11610, -1743, -1743, -1743, -1743,
     347, -1743, -1743, -1743,   272,  1178,  1734,  9785,   695,  9785,
   -1743, -1743,  1637, 16644,   260, -1743, 16644,  4559, -1743, -1743,
   -1743, -1743,  4559,  4559, 16644, -1743,  1709,     5, -1743, -1743,
    1641,  1642, -1743, -1743, -1743, -1743,  1492,  1561, -1743, -1743,
   -1743,  1568,   724, -1743,  1563,  1567,   560, -1743, -1743, -1743,
   -1743,   974, -1743,  1150,  1482,   432,  1150,  1649,  1649,  1487,
   -1743,  1588,  1829, 16644, -1743,  1491, -1743,  1295,   434, -1743,
     764, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   15184,  1569,  1831,  1665,  1614, -1743,  1503,  1533, 16644,  1769,
   -1743,  1610,   -45,   338,   391,  1611, 14308,  3530,  8539,  4559,
    1540, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743,  1549, -1743, -1743,
   -1743, -1743,  1511,  2525,  2490,  1843,  2490, -1743,  1682, -1743,
    1688,  1691, -1743,  1693,   353, -1743,  1530, -1743, -1743, -1743,
    1686, 12835,  1535, -1743,   409, -1743,  1536,  1694, -1743, -1743,
   -1743,  8213, 16644,  1593,  1604,  1607,  1615, -1743, -1743,  1697,
   -1743, -1743, -1743, -1743, -1743,   679,  1701, -1743, -1743,   301,
    1539, -1743, -1743, -1743,    21, -1743,  1714, -1743, -1743, -1743,
     355,   364,   373,  9191, -1743,  9191, -1743, -1743,  9191, -1743,
   -1743, -1743, 17228,  9785, -1743,   560,  4559, -1743,   695, 16644,
     380,  1543, -1743,  1692,  1692,  1543,  9191, -1743, -1743, -1743,
    4902, -1743, -1743,  1630,  1609, -1743,   166, -1743,  1779,  9191,
     560,   560, -1743,  1764, -1743,  9191, -1743,   974, -1743, -1743,
   -1743, -1743,   459, -1743,  1150,  1810,   383, 16644,    48,    48,
    1150,  1150, -1743, -1743, 16644, -1743, -1743,  1722,  1723, -1743,
      17, -1743,  1635,   892,  1785,   385,    97,  1664,  3873, 16644,
   -1743,  1726, -1743,  1730, -1743, -1743, -1743,  4559, -1743,   664,
    2944,  1602, -1743, 11622,  4559, -1743, -1743,  1738, 10695, -1743,
    1228,   419, -1743, -1743, -1743, -1743, -1743, 16644, 16644,  9191,
    9191,  9191, -1743,  8865, -1743, -1743, -1743, -1743,  1797,   625,
    1803,  1804, -1743, -1743, 16644, -1743, -1743,  9191,  1651,  1653,
    1745,   314, -1743, -1743, -1743, 11912, 12221, 12544, -1743, -1743,
   -1743, -1743, -1743,   390, -1743,  1243,  6223,  1594,  1587,  1591,
    1586, -1743, -1743, -1743,  1150, 16644, -1743, -1743, -1743, -1743,
    2361,  1650, -1743,  1608, -1743, -1743, -1743,  1815,  1757,  1667,
   16644, -1743, -1743, -1743,  1595,  1704, -1743, -1743,   408, -1743,
    1931,  1546,  1546, -1743,  1662, -1743,   771,  1768, -1743, -1743,
     186,   284,   892, -1743,  1612, -1743,  1639, -1743,  1851,  1856,
   -1743, 16644,  1681, -1743,  1601,  9191,   630,  1646, -1743, -1743,
    1644,  9191, -1743,   717, -1743, 11622,  1812,  1645, 16644,  1715,
    1950, -1743, -1743, -1743, -1743,  1719,  1953, -1743,  1619, 12835,
     410, -1743,  1638, -1743, -1743,  1624, -1743, -1743,  1806, -1743,
   -1743, -1743,  1620, -1743,  1813,  1816, -1743,  1805, 16644,  1965,
     601, -1743, -1743, -1743, -1743, -1743, -1743,  1780, -1743, -1743,
   -1743,    64, -1743, -1743, -1743, 16644,  1840, -1743,  4559, -1743,
     560,  1150, -1743, -1743, 16644, -1743,  1912,  1912, 16644,   420,
   -1743, -1743,  1465, -1743,  1465,  1465,  1465, -1743,   907,  1800,
   11924, -1743, -1743, -1743, 16644,   421, 12835,  1801, -1743, 11004,
    1674,  2789, -1743,  1668, 10077,  1844,  1669, -1743,   430,  2525,
   16644,  1228, 16644,  1228, -1743,  9191, 16644, -1743,  9191, -1743,
   -1743, -1743, -1743,  1817, -1743, -1743, -1743,  1817, -1743,  1822,
   16644,  1965, -1743, -1743, -1743,  1826,  6566,  1647, -1743,  1657,
   -1743,   560,  1814,  1818,  1873, -1743, -1743, -1743,  1928,  1928,
   -1743, -1743,   771, 16644, 16644, 16644, 16644, -1743, -1743, -1743,
    4559,  1679, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743,  9191, -1743, 11004,  1857, -1743, -1743,
    1695, -1743,  4559,  1690,  1696, -1743, 11313, -1743, 16644, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,  1965, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,  1675,  1655,
    1656, -1743, -1743, -1743, -1743,  1873,   805, -1743, -1743,   638,
    1729,  1939,  1810,  1810, -1743, -1743, -1743, -1743, -1743,  1832,
   -1743, 12835, -1743, 11004, -1743, 11004,  1703,  1705, -1743,  1699,
    2525, -1743, -1743, -1743, -1743, -1743,  1729,  1054, -1743, -1743,
   -1743, -1743,  1180,  1744,  1747, -1743, -1743, -1743,  1700, -1743,
   12233, -1743, -1743, 16644, -1743, -1743, -1743,   165,   165,  1946,
   -1743,  1938, -1743,  1842, -1743, -1743,  1884, 10077, -1743, -1743,
   -1743, -1743,  1978,    33, -1743, -1743,   911, -1743, -1743, -1743,
   -1743, -1743,   441, -1743, -1743,   911, -1743
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1743,  1087, -1743, -1743, -1743, -1743, -1743, -1193, -1743,   999,
     145, -1176, -1743, -1743,   940, -1743,    15, -1743,    20,   612,
   -1743,   933, -1743, -1743, -1743,   531, -1743,   752,     1,  1820,
   -1743, -1743,   -87,     8, -1743, -1743,  1819, -1743,  1572, -1743,
   -1743, -1743,  1574,  -332,   990,    55, -1743, -1743, -1743,   510,
      68, -1743,     9, -1743,  -774,  1274,  -402, -1743, -1743, -1743,
    -604, -1743,  1999, -1743, -1743,    46, -1743, -1743, -1743,   975,
     538, -1743, -1743, -1743, -1743, -1743, -1743, -1564, -1743,   394,
   -1743, -1743, -1743, -1743, -1008,   -28,   -13,   -11,    -3, -1743,
      29, -1743, -1743, -1743,   -26, -1743, -1743,  -198,  -412, -1743,
    -156,   -19, -1743, -1255,  -882, -1743,   348, -1370, -1743, -1302,
     -15, -1441, -1743,   652, -1743, -1743, -1743, -1743, -1743, -1743,
     234, -1743,   360, -1743,   237, -1743,   -24, -1743, -1743, -1743,
   -1743,   506,  -731, -1743, -1743, -1743, -1743, -1743, -1743,   262,
    -980,   264, -1743, -1743, -1743, -1743, -1743,  1605,    93,  -420,
     714,  -436,    25,    37, -1743,  -116, -1743,  1358, -1743,  2052,
    1906, -1743, -1743, -1743, -1743,   586, -1743,   192,  -748, -1743,
   -1743, -1037,   188,   118,  -741,   597,   598, -1743, -1743, -1743,
    1384,  -666,   672,  -921, -1743,  -313,   678,  1050,  -158, -1743,
    1214,  -481,  -868,   857, -1743, -1743,   468,   126, -1743,  1673,
   -1743, -1743,    42,   132, -1743,   849,   103,   989,   727,  -419,
    1145,  1520, -1743,  -616, -1743,  -891,  -863, -1743,  -720, -1743,
    -229,  1439,  1193, -1743, -1743,  1235,   464,   957, -1743, -1743,
    -314, -1743, -1743,  1448, -1743,   362, -1743, -1743, -1743, -1743,
    1451, -1743, -1743,  1452, -1743,  1398,  -262,  -775,  1476,  -548,
    -491, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,   357,
   -1743, -1743, -1743, -1743, -1743, -1743,     7, -1743,  -377, -1743,
     821, -1743, -1743,  1429, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743,  -539,  -482,  -521, -1743,  -557, -1743, -1743, -1743, -1743,
    1186, -1743,  2073, -1743,  1589,    73, -1314, -1743,  1578, -1743,
   -1743, -1743,  1190, -1743,  1479, -1743,  1191,  -640,   562,  -639,
    -207, -1743,  -272, -1743,  -266, -1743, -1743,  -245,  -296,    30,
   -1743,    -4, -1743, -1354,  -474,    23,    52, -1743, -1743, -1743,
   -1743, -1743,  -544, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
   -1743, -1743,   403, -1743,   202, -1743, -1743, -1743, -1637, -1743,
     407,   555, -1743, -1743, -1743, -1743,   742, -1743, -1743, -1743,
   -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743, -1743,
     393, -1743, -1743, -1743, -1743, -1743, -1743, -1743,  1554,  -804,
     754, -1743,   554, -1743,   753, -1743, -1743,   288, -1105, -1743,
   -1743, -1743, -1743, -1743, -1742,   201, -1743, -1743, -1743, -1743,
   -1743, -1743,   196, -1743, -1743, -1743, -1743
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1099
static const yytype_int16 yytable[] =
{
     149,    41,   693,   573,  1075,   158,   430,   428,    42,   163,
     289,   707,   467,   173,   149,    38,   281,   555,   435,   464,
      39,   938,  1067,   556,   170,    52,  1012,   609,   613,   839,
    1301,   283,   290,   879,  1529,   442,   443,    53,  1246,  1247,
     445,   164,    61,   635,   559,   883,  1005,   182,  1234,  1555,
     216,   888,   301,   899,  1295,    43,   205,   712,   216,   903,
     762,  1026,   149,   589,  1064,   301,  1218,   838,    44,   810,
    1105,  1106,  1107,  1833,  1395,   862,  1836,   148,  1238,  1620,
     469,  1295,  1166,  1765,  1167,   822,   919,   813,   814,   815,
    1627,   174,   864,    51,  -939,  1181,   459,   448,  -939,  -939,
    1787,  -939,  -939,  -939,  -939,  -939,  -939,  -939,  -939,  -939,
    -939,  -939,   608,  1047,  1048,   741,  -733,   165,   730,  1049,
     709,   821,  1555,  1487,   909,   637,    59,  -939,  -939,   637,
    1555,  1728,    62,   184,   185,   186,   187,   188,   189,   298,
    1488,   211,  1042,  2090,   151,  1016,  1270,  1937,    14,   400,
     149,  1587,  1017,  1018,   893,   418,   894,  1163,   449,   946,
     382,  1798,   -87,   -87,   -87,   -87,   -87,   -87,   213,  1756,
     212,  1072,  1729,  1938,   301,  1588,    41,    41,    41,    41,
      41,  1799,    66,    42,    42,    42,    42,    42,  1788,  2004,
      38,    38,    38,    38,    38,    39,    39,    39,    39,    39,
      52,    52,    52,    52,    52,   216,   152,  2080,  2081,   461,
     149,   149,    53,    53,    53,    53,    53,    61,    61,    61,
      61,    61,  1880,  1027,  1129,   475,   154,   414,   214,   149,
      43,    43,    43,    43,    43,  1476,   149,   484,  -776,  1024,
     205,   149,   149,    44,    44,    44,    44,    44,  2082,   149,
     149,   149,   149,   497,   149,  -733,  2041,   149,   149,   149,
     149,   149,   510,   825,   773,  1743,   149,   149,    51,    51,
      51,    51,    51,   290,   522,   523,  1757,  -780,   864,   864,
     570,  1997,   693,  2091,   864,    65,   689,   462,   463,   552,
     609,  1595,   910,   427,  -782,   574,   575,  1487,   827,  1132,
    1133,    59,    59,    59,    59,    59,   478,    62,    62,    62,
      62,    62,   712,   483,  1488,   470,   823,   425,   488,   489,
     465,   929,  1815,  1418,  1134,   592,   493,   494,   495,   496,
     952,   498,   793,  1033,   505,   506,   507,   508,   509,   867,
     966,  1165,   742,   515,   516,  1628,   449,  1176,  1218,  1800,
     873,   873,  1419,   576,   577,   578,   869,  1182,   762,  1255,
    1240,  1257,   155,  -467,  1135,  1031,   769,   588,   149,  1335,
    1110,  1111,  1112,  1113,  1150,   608,  1396,  1034,  1477,  1401,
     485,  1117,  1118,  1119,  1108,   608,   358,   486,  2024,  1155,
    1188,  1816,   215,  1827,   358,   694,  1529,  1847,  1939,   725,
     921,   446,   621,  1940,   637,  1393,  1280,  1025,  1039,  1040,
    1036, -1098,   164,   561,   948,   207,  -939,   159,   208,  -733,
    1501,   163,  -262,  1388,   164,   911,   400,   626,   627,   164,
     713,  -733,  -733,  -733,   164,   301,   216,   382,  1899,  2083,
     293,   294,   295,   164,  1904,   655,  -780,   622,   149,  1967,
     687,   688, -1098,   190,   191,   192,   193,   517,   518, -1098,
    1211,  1088,   149,  -782,   624,  1882,   149,   606,   190,   191,
     192,   193,  1348,   607,  1848,   562,   993,  1849,   160,   729,
    1352,  1389,   791,   149,  1601,  1602,   797,  1050,   149,   257,
     608,   164,  1295,   556,  1402,   149,  1440,   149,   149,   149,
     149,   471,   828,  1034,  1441,  1074,  1499,  1028,   149,   149,
     149,   556,  1883,  1905,   559,  1570,   820,   472,    13,    14,
     770,  1611,   826,  1089,   290,   736,   227,  1706,  1976,  1732,
      13,   690,   559,  1032,   712,    13,    14,  1986,  1733,   768,
      13,    14,   994,   772,   724,   556,  1893,  1734,   850,   258,
      14,  1420,   447,  1367,  1744,   638,  1120,  1777,  1189,  1797,
     792,   166,   556,  1885,  1856,   799,   559,  1071,   291,  1766,
    1567,   864,   804,   573,   806,   807,   808,   809,  1383,  1355,
    1034,  1579,  1873,   559,  1914,   817,   818,   819,  1586,  1239,
    -262,  1186,  1368,   194,  1951,  1973,  1192,    13,   217,   259,
     297,  1259,  1261,   872,  1987,  1476,  1153,  1425,   691,  2033,
    1883,  2035,    40,   691,  1428,  2094,  1069,  1213,  1612,  1967,
    1451,  1370,  1724,   260,   781,   782,   783,   784,  1212,   605,
     831,   832,   164,   942,   945,  1767,   798,   947,   195,  1244,
    1349,   692,  1157, -1098,   940,   915,   692,   918,  1353,  1248,
    1249,  1217,    49,   195,  1384,  1990,  1825,  1992,  1151,   218,
    1826,   196,  1403,   415,  1032,   261,   262,   263,   264,   265,
    1461,  1214,  1032,  1342,  1500,  1383,   196,  2048,  2049,   400,
     920,  1004,   180,  1571,  1929,  1010,   290,  1768,   181,  1189,
     382,  2077,  1462,   746,   266,  1707,   164,  1403,  1052,   184,
     185,   186,   187,   188,   189,  1250,  1032,   465,  1838,  2050,
     299,  1615,  1266,   268,   606,  1032,  1621,   197,   269,   300,
     607,  1738,  1664,   219,  1625,  1660,  1020,   552,  1769,   149,
     606,  1770,  1664,   277,  1057,  1839,   607,   900,    13,   217,
     606,  1771,   292,   931,  1876,  1877,   607,   932,  1053,  1054,
    1874,  1711,  1915,   270,  1930,  1058,   271,  1931,   190,   191,
     192,   193,  1952,  1974,  1224,  1225,  1226,   149,  1227,  1228,
     432,  1229,  1988,   433,   893,   747,   894,   149,   149,   149,
     149,   441,   833,  2095,  1281,  1084,  1311,    40,    40,    40,
      40,    40,  1312,   165,   149,   748,  1104,  1104,  1104,  1104,
     434,   149,    13,    14,  1094,  1095,  1038,  1096,   293,   294,
     295,  1614,   444,  1618,   750,   751,   752,   753,   754,   755,
     756,   757,   465,  1636,   758,   450,  1163,    49,    49,    49,
      49,    49,  1338,  1552,  1637,  1573,   656, -1063,   556,  1282,
     473,   474, -1085,  1585,  1068,   606,  1589,  1458,  1459,  1460,
     570,   607,   452, -1063,  1076,  1077,  1078,  1079,  1128,   559,
     419,  1230,   712,   420,  1760,   574,  1305,   451,  1158,   421,
    1760,  1099,   453,  1574,  1138,  1575,  1576,   149,  1109,   292,
    1464,   454,   712,   194,   629,  1168,   925,  1364,  1365,  1131,
    1412,   776,  1177,   556,   556,  1330,  1465,  1416,  1643,  1417,
    1638,   455,  1953,  1644,  1954,  1955,  1956,  1010,   466,  1466,
    1781,  1782,  1302,   458,   559,   559,   675,   676,   677,   678,
     679,   750,   216,   752,   753,   754,   755,   756,   757,   173,
     942,   758,  1224,  1225,  1226,  1235,  1235,  1235,   468,  1229,
    1215,   940,   922,   195,   925,   293,   294,   295,   -14,     1,
    1273,   431,  1274,  1275,  1162,   476,   477,   529,   530,   531,
    1616,   479,  1147,  1148,  1149,  1687,   196,  1808,   252,  1199,
     480,  1201,   532,   490,  1639,   500,   533,   534,   535,   315,
     316,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     481,  1224,  1225,  1226,    15,  1227,  1228,  1739,  1229,     2,
    1291,   293,   294,   295,   545,   546,   547,   197,   956,   957,
     958,  1262,     3,     4,     5,     6,    25,   482,  1811,   759,
    1808,  1645,    26,    27,  1471,     7,     8,     9,    10,  1991,
     556,  1993,   696,   697,    11,   253,   254,   255,   256,  1278,
    1279,    29,   501,   502,   503,   504,   763,   485,  1283,  1284,
     492,   559,  1285,   700,   701,   491,  1289,   149,   574,   173,
    1219,   499,   724,   724,   743,   744,  1220,   511,   764,   520,
    1297,   765,   766,   293,   294,   295,  1310,   524,   556,   431,
     525,    12,  1749,  1084,  -232,  1326,   794,   795,  1230,   526,
    1186,  1186,   527,  1276,   149,  -188,  1104,   961,   962,   559,
    1609,  1643,  1061,  1054,   644,  1684,  1644,   645,   646,   647,
     648,   649,   650,   651,   652,   436,   437,   653,   654,   440,
      13,    14,  1306,  1307,  1308,  1309,   777,  -187,  1623,  1624,
     528,  1503,  1263,  1264,  1290,   724,   560,   529,   530,   531,
     776,   584,   585,   586,   587,  1334,   626,   627,  1219,   566,
    -232,   568,   532,   301,  1220,  -889,   533,   534,   535,   315,
     316,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     750,  1333,   752,   753,   754,   755,   756,   757,    15,  1589,
     758,  -763,  1190,  1191,   545,   546,   547,    16,    17,  -765,
      18,  -761,    19,    20,    21,    22,    23,    24,  1749,   579,
      25,   580,  -232,  1291,  1287,  1288,    26,    27,  1622,   581,
    1235,  1235,   942,   184,   185,   186,   187,   188,   189,   942,
    1790,  1791,    28,   940,  1645,    29,   942,   591,  2066,  1432,
     940,   301,  1822,  1957,  1958,  1434,   945,   940,   548,   549,
     550,   551,   582,  -232,  2067,  2068,  -232,  1224,  1225,  1226,
     588,  1227,  1228,  -521,  1229,  1010,  -232,  1452,   590,  1802,
     641,    30,  1468,  1469,   438,   439,   593,   513,   514,  -635,
     594,  1696,  1699,  1075,  1699,  1060,  1062,   556,   556,   595,
     556,  2057,  2058,   564,   565,   656,   596,  1463,  1686,   597,
    1691,   860,   861,   598,   552,   599,   600,  1439,   559,   559,
     601,   559,   602,   603,   617,  1506,   618,   619,   633,   634,
     681,  1484,   228,   682,   683,   173,   149,  1492,   643,   465,
     684,   685,   686,  1502,  1493,  1424,  1497,   290,   149,  1457,
     698,   702,  1542,  1543,   840,   841,   842,   843,   844,   845,
     703,  -702,  1219,   704,  1230,   228,   706,   714,  1220,   716,
     229,   717,  1474,   230,  1678,  1480,  1481,   718,   197,  1556,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     738,  1494,  1549,   739,  1550,   777,  1551,   740,   767,   771,
     774,  1553,  1580,   229,  1495,   775,   230,  1741,  2010,   786,
     656,   785,  1123,  1498,  1897,  1125,  1126,  1127,   231,   788,
     232,   805,   800,   801,   802,  1507,   803,   811,   816,  1496,
     233,   829,   836,  1137,  1139,  1140,  1141,   830,   548,   549,
     550,   551,   834,   942,   835,   942,   837,   622,   624,  1484,
     851,   231,  1556,   232,   940,   852,   940,   853,   854,   858,
    1556,   865,   872,   233,   868,   871,   644,  1642,   876,   645,
     646,   647,   648,   649,   650,   651,   652,   656,  1807,   653,
     654,   877,   881,   889,   890,  1817,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   896,   897,   904,   916,  1663,
     644,   906,  1675,   645,   646,   647,   648,   649,   650,   651,
     652,  1492,   907,  1442,   654,   908,  1667,   959,  1493,   960,
     357,   998,   995,   996,   290,  1011,  1014,  1015,   724,   724,
    1022,   637,   942,  1029,   234,   235,   236,   237,   238,   239,
    1041,  1043,  1909,   170,  1045,  1653,   240,  1480,  1480,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,  1046,  1063,  1044,  1494,  1070,   234,   235,   236,
     237,   238,   239,  1054,  1073,   241,  1082,   644,  1495,   240,
     645,   646,   647,   648,   649,   650,   651,   652,  1716,  1080,
    1443,   654,  1081,  1087,   243,  1085,  1100,   244,  1098,   245,
    1093,  1124,  1136,  1496,  1146,  1142,  1161,  1160,   241,  1682,
     840,   841,   842,   843,   844,   878,  1740,  1159,  1163,   257,
    1170,   242,  1175,  1179,   292,  1197,  1198,   243,  1235,   942,
     244,  1200,   245,  1242,  -172,  1484,  1203,   246,   656,  1210,
     940,  1761,  1762,  1223,   644,  1251,  1252,   645,   646,   647,
     648,   649,   650,   651,   652,  1256,  1258,  1989,   654,  1943,
    1260,  -764,  1208,   556,  -766,  -762,  1268,  -172,  1265,  1270,
     246,  1272,  1189,  1780,  1277,  1286,  1298,  1300,  1303,   258,
    1785,  1304,  1089,  1314,   559,   645,   646,   647,   648,   649,
     650,   651,   652,  1315,   400,  1804,   654,   840,   841,   842,
     843,   844,  1354,  1319,  1327,   382,  1329,  1331,  1332,  1542,
    1336,  1337,  2040,  1339,  1542,  1340,  1341,  1343,  1344,  1345,
    1346,  1347,  1350,  1556,  1828,  1351,  1774,  -793,  1357,   259,
    1358,  1359,  1783,  1784,  1944,   529,   530,   531,  1373,  1360,
    1842,  1391,  1361,  1363,  1393,  1369,  1371,  1372,  1386,  1397,
     532,  2029,  1398,   260,   533,   534,   535,   315,   316,   536,
     537,   538,   539,   540,   541,   542,   543,   544,  1404,  1405,
    1406,  1864,  1824,  2036,  1411,  1414,  1421,  1422,  1423,  1427,
    1429,  1430,   545,   546,   547,  1433,   149,  1436,  2064,  1437,
    1444,  1445,  1446,  1448,   556,   261,   262,   263,   264,   265,
    1449,  1456,  1475,  1453,  1455,  2015,  1472,  1483,  1504,  1482,
    1508,  1568,  1511,  1544,  1509,   559,  1557,  1804,  1546,  1558,
    1545,  1582,  1572,  1583,   266,  1584,  1863,  1597,  1598,  1613,
    1619,  1542,  1596,  1626,   574,  1631,  1632,   267,  1635,   615,
     616,  1633,  1657,   268,  1654,   620,  1661,  1640,   269,  1660,
     630,  1641,  1662,  1664,  1669,  1634,  1668,  1670,     3,     4,
       5,     6,  1672,  1870,  1924,   552,  1676,  1677,  1700,  1679,
    1692,     7,     8,     9,    10,  1695,  1702,  1694,  1718,  1709,
      11,   149,  1703,   270,  1673,  1704,   271,  1705,  1714,  1719,
    1780,  1722,  1720,  1708,  1950,  1723,  1731,  1710,  1713,  2093,
    1721,  1727,  1755,   654,  1114,  1707,  1542,  1754,  2096,  1758,
    1972,  1964,  1763,  1775,  1501,  1542,  1786,  1794,  1965,  1805,
    1542,  1789,  1801,  1806,  1814,  1962,  1804,  1837,  1804,   710,
    1963,  1818,  1995,  1840,  1841,  1969,  1844,   710,  1845,  1846,
    1858,  1861,  1865,  1945,  1859,  1867,  2002,  1970,  1860,  1866,
    1868,  1869,  1971,  1872,  1875,  1878,  1891,  1871,  1941,  1881,
    1889,  1892,  1888,   638,  1894,  1906,    13,    14,  1898,  2025,
    2026,  2027,  2028,  1910,  1907,  1911,  1900,  1912,  1913,  1916,
    1919,  1923,  1261,  1824,  1921,  1824,  1918,  1922,  1926,  1942,
    1936,  1947,  1542,  1960,  1978,  1975,  1998,  1984,  2001,  1930,
    1980,  1985,  1542,  2014,   574,  2013,  2019,  2016,  2021,  2030,
    2032,  2044,  2018,  2045,  2052,  2034,   548,   549,   550,   551,
    2056,  2043,  2037,  2068,    15,  2061,  2059,  2063,  2038,  2069,
    2067,  2062,  2071,    16,    17,  2086,    18,  2087,  2073,  2089,
    1318,  1665,  1454,   731,  1269,  2047,    25,   737,   456,  1542,
     457,  1542,    26,    27,  1051,   288,   857,  1292,  1666,  1764,
    2085,  2072,  2070,  2065,  2046,  2076,  1821,  1902,    28,  1809,
    1903,    29,  1701,  2088,  1887,  1886,  1542,   735,  1547,  2079,
     157,  1964,  1021,   417,  1659,  1949,  1946,  2023,  1965,   882,
     884,   884,  1655,  1542,  1656,  1962,  1600,   882,  1013,   884,
    1963,  1599,  1267,  1154,  1426,  1969,  1742,    30,  1241,  1435,
    1745,   870,   965,   912,   913,   914,  1183,  1970,   705,  1362,
     964,  1152,  1971,  1857,  1023,   967,  1202,   968,   282,   928,
     710,   926,   997,   824,  1205,  1206,  1835,  1994,  1834,  1712,
    1843,   955,   955,   955,   955,  1715,  1578,  1566,  2000,  1569,
    1920,  2007,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   902,     0,   875,     0,
       0,  1002,  1002,     0,     0,     0,     0,   301,     0,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
       0,     0,   313,   314,     0,     0,    73,    74,     0,     0,
      75,   315,   316,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,    77,     0,     0,   317,   318,
     319,   320,   321,   322,   323,     0,    78,     0,     0,   273,
     274,   275,     0,     0,     0,     0,   324,    79,     0,     0,
     164,   167,     0,   168,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,    87,
     325,     0,     0,     0,   326,     0,     0,    88,   327,     0,
      89,     0,    90,    91,    92,     0,     0,     0,   328,    93,
      94,     0,     0,     0,     0,     0,     0,     0,   329,   330,
     331,   332,   333,     0,   334,   335,    95,    96,   336,   337,
      97,   338,    98,    99,   100,   101,   102,   103,   104,     0,
     105,   339,   106,   107,   108,   109,     0,   110,   340,   111,
       0,     0,     0,     0,     0,   112,    13,   604,     0,   113,
     342,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,   344,     0,     0,
       0,   345,   346,   347,     0,     0,     0,  1171,     0,     0,
       0,   882,     0,   349,     0,     0,     0,   884,     0,     0,
     710,     0,     0,   114,   115,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,   117,     0,     0,  1204,     0,
       0,  1207,   118,     0,     0,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,     0,     0,     0,     0,
       0,   129,     0,     0,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,   710,   710,   135,     0,   136,
       0,     0,     0,   137,   138,     0,     0,   605,     0,     0,
     350,   351,   352,   353,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,   354,     0,     0,     0,   355,   356,
       0,  -225,     0,     0,     0,  1002,     0,  1002,     0,     0,
       0,     0,     0,     0,   144,   145,     0,     0,  -225,     0,
     146,   147,     0,  -225,  -225,   529,   530,   531,     0,     0,
       0,   710,     0,     0,     0,     0,     0,     0,   710,   357,
     532,   358,     0,     0,   533,   534,   535,   315,   316,   536,
     537,   538,   539,   540,   541,   542,   543,   544,     0,     0,
     529,   530,   531,     0,     0,  -225,     0,  -225,     0,     0,
       0,     0,   545,   546,   547,   532,     0,     0,     0,   533,
     534,   535,   315,   316,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   545,   546,   547,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -225,
    -225,  -225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1195,
       0,  -225,     0,  -225,     0,     0,     0,     0,   857,  -225,
    -225,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -225,     0,   656,  -225,     0,     0,     0,  1366,  -225,     0,
       0,   884,     0,  -225,     0,     0,  1377,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1407,
    1408,  1409,  1410,     0,     0,     0,     0,     0,     0,   710,
     656,     0,     0,     0,     0,  1415,   710,     0,   710,     0,
     657,   658,   659,   660,   661,     0,     0,     0,   662,   663,
     664,   665,   666,  -225,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,     0,     0,     0,
    1607,     0,   656,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1002,     0,   657,   658,
     659,   660,   661,     0,     0,     0,   662,   663,   664,   665,
     666,     0,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,     0,     0,     0,     0,  1697,
       0,     0,     0,     0,     0,     0,   548,   549,   550,   551,
     657,   658,   659,   660,   661,     0,     0,     0,   662,   663,
     664,   665,   666,     0,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,     0,     0,     0,
       0,   548,   549,   550,   551,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   656,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1196,     0,     0,     0,     0,     0,     0,     0,     0,  1561,
       0,     0,  1377,     0,     0,     0,     0,     0,     0,   656,
    1171,     0,     0,     0,     0,     0,     0,   882,     0,     0,
     882,     0,     0,     0,     0,     0,     0,     0,     0,   710,
     710,   710,   710,   657,   658,   659,   660,   661,  1608,   710,
     656,   662,   663,   664,   665,   666,     0,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
       0,     0,     0,     0,     0,     0,     0,   657,   658,   659,
     660,   661,     0,   656,     0,   662,   663,   664,   665,   666,
    1193,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,     0,     0,     0,     0,   657,   658,
     659,   660,   661,     0,     0,     0,   662,   663,   664,   665,
     666,     0,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,     0,     0,     0,     0,     0,
       0,   657,   658,   659,   660,   661,     0,     0,     0,   662,
     663,   664,   665,   666,  1690,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1377,     0,     0,
     656,     0,     0,     0,     0,     0,     0,     0,  1413,     0,
       0,     0,     0,     0,     0,     0,     0,  1603,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   656,  1735,
       0,  1736,     0,     0,  1737,     0,     0,     0,     0,     0,
       0,  1979,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   857,     0,     0,     0,   882,     0,   657,   658,
     659,   660,   661,     0,     0,   882,   662,   663,   664,   665,
     666,   882,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,     0,   657,   658,   659,   660,
     661,     0,     0,     0,   662,   663,   664,   665,   666,     0,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1829,  1561,  1561,     0,  1561,
     301,     0,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   882,     0,   313,   314,     0,     0,    73,
      74,     0,     0,    75,   315,   316,     0,   922,     0,     0,
       0,     0,   882,     0,     0,    76,     0,     0,    77,     0,
       0,   317,   318,   319,   320,   321,   322,   323,     0,    78,
       0,     0,   273,   274,   275,  1811,     0,     0,     0,   324,
      79,     0,     0,     0,   167,     0,   168,   169,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,    83,
       0,  1896,     0,     0,    84,    85,    86,  1901,     0,     0,
       0,     0,    87,   325,     0,     0,     0,   326,     0,     0,
      88,   327,     0,    89,     0,    90,    91,    92,     0,     0,
       0,   328,    93,    94,     0,     0,     0,     0,     0,     0,
       0,   329,   330,   331,   332,   333,     0,   334,   335,    95,
      96,   336,   337,    97,   338,    98,    99,   100,   101,   102,
     103,   104,     0,   105,   339,   106,   107,   108,   109,     0,
     110,   340,   111,     0,     0,     0,     0,     0,   112,     0,
     341,     0,   113,   342,     0,   949,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   950,   951,     0,     0,   343,
     344,     0,     0,     0,   345,   346,   347,     0,     0,     0,
       0,  1829,     0,     0,  1561,     0,   349,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,   115,     0,     0,
       0,     0,   882,     0,   116,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
    2031,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,     0,   136,     0,     0,     0,   137,   138,     0,     0,
       0,     0,     0,   350,   351,   352,   353,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,   354,     0,     0,
       0,   355,   356,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   145,     0,
       0,     0,     0,   146,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   357,   301,   358,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,     0,     0,   313,   314,
       0,     0,    73,    74,     0,     0,    75,   315,   316,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,    77,     0,     0,   317,   318,   319,   320,   321,   322,
     323,     0,    78,     0,     0,   273,   274,   275,     0,     0,
       0,     0,   324,    79,     0,     0,   164,   167,     0,   168,
     169,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,   325,     0,     0,     0,
     326,     0,     0,    88,   327,     0,    89,     0,    90,    91,
      92,     0,     0,     0,   328,    93,    94,     0,     0,     0,
       0,     0,     0,     0,   329,   330,   331,   332,   333,     0,
     334,   335,    95,    96,   336,   337,    97,   338,    98,    99,
     100,   101,   102,   103,   104,     0,   105,   339,   106,   107,
     108,   109,     0,   110,   340,   111,     0,     0,     0,     0,
       0,   112,    13,   604,     0,   113,   342,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   343,   344,     0,     0,     0,   345,   346,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   349,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     115,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,     0,     0,     0,     0,     0,   129,     0,     0,
     130,     0,     0,     0,   131,     0,     0,   132,   133,     0,
     134,     0,     0,   135,     0,   136,     0,     0,     0,  1683,
     138,     0,     0,     0,     0,     0,   350,   351,   352,   353,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
     354,     0,     0,     0,   355,   356,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,     0,     0,     0,     0,   146,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   357,   301,   358,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,   313,   314,     0,     0,    73,    74,     0,     0,    75,
     315,   316,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,   317,   318,   319,
     320,   321,   322,   323,     0,    78,     0,     0,   273,   274,
     275,     0,     0,     0,     0,   324,    79,     0,     0,     0,
     167,     0,   168,   169,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,   325,
       0,     0,     0,   326,     0,     0,    88,   327,     0,    89,
       0,    90,    91,    92,     0,     0,     0,   328,    93,    94,
       0,     0,     0,     0,     0,     0,     0,   329,   330,   331,
     332,   333,     0,   334,   335,    95,    96,   336,   337,    97,
     338,    98,    99,   100,   101,   102,   103,   104,     0,   105,
     339,   106,   107,   108,   109,     0,   110,   340,   111,     0,
       0,     0,     0,     0,   112,     0,   341,     0,   113,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   343,   344,     0,     0,     0,
     345,   346,   347,     0,     0,     0,     0,     0,     0,   348,
       0,     0,   349,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     116,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,   118,     0,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
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
       0,     0,     0,   167,     0,   168,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,   325,     0,     0,     0,   326,     0,     0,    88,
     327,     0,    89,     0,    90,    91,    92,     0,     0,     0,
     328,    93,    94,     0,     0,     0,     0,     0,     0,     0,
     329,   330,   331,   332,   333,     0,   334,   335,    95,    96,
     336,   337,    97,   338,    98,    99,   100,   101,   102,   103,
     104,     0,   105,   339,   106,   107,   108,   109,     0,   110,
     340,   111,     0,     0,     0,     0,     0,   112,     0,   341,
       0,   113,   342,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   344,
       0,     0,     0,   345,   346,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   118,     0,     0,   119,   120,   121,
     122,   123,   124,   125,   126,   127,  1156,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
       0,   136,     0,     0,     0,   137,   138,     0,     0,     0,
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
      85,    86,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,   326,     0,     0,    88,   327,     0,    89,     0,
      90,    91,    92,     0,     0,     0,   328,    93,    94,     0,
       0,     0,     0,     0,     0,     0,   329,   330,   331,   332,
     333,     0,   334,   335,    95,    96,   336,   337,    97,   338,
      98,    99,   100,   101,   102,   103,   104,     0,   105,   339,
     106,   107,   108,   109,     0,   110,   340,   111,     0,     0,
       0,     0,     0,   112,     0,   614,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1746,     0,
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
       0,     0,     0,     0,     0,     0,  1747,     0,     0,     0,
       0,     0,     0,  1748,     0,     0,     0,     0,   301,   358,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,     0,     0,   313,   314,     0,     0,    73,    74,     0,
       0,    75,   315,   316,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,    77,     0,     0,   317,
     318,   319,   320,   321,   322,   323,     0,    78,     0,     0,
     273,   274,   275,     0,     0,     0,     0,   324,    79,     0,
       0,   164,   167,     0,   168,   169,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,   326,     0,     0,    88,   327,
       0,    89,     0,    90,    91,    92,     0,     0,     0,   328,
      93,    94,     0,     0,     0,     0,     0,     0,     0,   329,
     330,   331,   332,   333,     0,   334,   335,    95,    96,   336,
     337,    97,   338,    98,    99,   100,   101,   102,   103,   104,
       0,   105,   339,   106,   107,   108,   109,     0,   110,   340,
     111,     0,     0,     0,     0,     0,   112,     0,   719,   720,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,   344,     0,
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
       0,   146,   147,     0,   301,     0,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,   313,
     314,     0,   358,    73,    74,     0,     0,    75,   315,   316,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,   317,   318,   319,   320,   321,
     322,   323,     0,    78,     0,     0,   273,   274,   275,     0,
       0,     0,     0,   324,    79,     0,     0,     0,   167,     0,
     168,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,   326,     0,     0,    88,   327,     0,    89,     0,    90,
      91,    92,     0,     0,     0,   328,    93,    94,     0,     0,
       0,     0,     0,     0,     0,   329,   330,   331,   332,   333,
       0,   334,   335,    95,    96,   336,   337,    97,   338,    98,
      99,   100,   101,   102,   103,   104,     0,   105,   339,   106,
     107,   108,   109,     0,   110,   340,   111,     0,     0,     0,
       0,     0,   112,     0,   614,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     999,     0,     0,   343,   344,     0,     0,     0,   345,   346,
     347,     0,     0,     0,     0,     0,     0,  1000,     0,     0,
     349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,  1001,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   350,   351,   352,
     353,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,   354,     0,     0,     0,   355,   356,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,   145,     0,     0,     0,     0,   146,   147,     0,
     301,     0,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,     0,     0,   313,   314,     0,   358,    73,
      74,     0,     0,    75,   315,   316,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,    77,     0,
       0,   317,   318,   319,   320,   321,   322,   323,     0,    78,
       0,     0,   273,   274,   275,     0,     0,     0,     0,   324,
      79,     0,     0,     0,   167,     0,   168,   169,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    84,    85,    86,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,   326,     0,     0,
      88,   327,     0,    89,     0,    90,    91,    92,     0,     0,
       0,   328,    93,    94,     0,     0,     0,     0,     0,     0,
       0,   329,   330,   331,   332,   333,  1560,   334,   335,    95,
      96,   336,   337,    97,   338,    98,    99,   100,   101,   102,
     103,   104,   890,   105,   339,   106,   107,   108,   109,     0,
     110,   340,   111,     0,     0,     0,     0,     0,   112,     0,
     614,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
     344,     0,     0,     0,   345,   346,   347,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   349,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,   115,     0,     0,
       0,     0,     0,     0,   116,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,     0,   136,     0,     0,     0,   137,   138,     0,     0,
       0,     0,     0,   350,   351,   352,   353,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,   354,     0,     0,
       0,   355,   356,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   145,     0,
       0,     0,     0,   146,   147,     0,   301,     0,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,   313,   314,     0,   358,    73,    74,     0,     0,    75,
     315,   316,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,   317,   318,   319,
     320,   321,   322,   323,     0,    78,     0,     0,   273,   274,
     275,     0,     0,     0,     0,   324,    79,     0,     0,     0,
     167,     0,   168,   169,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,   326,     0,     0,    88,   327,     0,    89,
       0,    90,    91,    92,     0,     0,     0,   328,    93,    94,
       0,     0,     0,     0,     0,     0,     0,   329,   330,   331,
     332,   333,     0,   334,   335,    95,    96,   336,   337,    97,
     338,    98,    99,   100,   101,   102,   103,   104,     0,   105,
     339,   106,   107,   108,   109,     0,   110,   340,   111,     0,
       0,     0,     0,     0,   112,     0,   614,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   343,   344,     0,     0,     0,
     345,   346,   347,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   349,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     116,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,   118,     0,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   350,
     351,   352,   353,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,   354,     0,     0,     0,   355,   356,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   145,     0,     0,     0,     0,   146,
     147,     0,     0,     0,     0,     0,     0,  1747,     0,     0,
       0,     0,     0,     0,  1748,     0,     0,     0,     0,   301,
     358,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,     0,     0,   313,   314,     0,     0,    73,    74,
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
    2008,     0,     0,     0,     0,     0,     0,  2009,     0,     0,
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
     629,     0,     0,   355,   356,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   144,
     145,     0,     0,     0,     0,   146,   147,     0,   301,     0,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,     0,     0,   313,   314,     0,   358,    73,    74,     0,
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
     111,     0,     0,     0,     0,     0,   112,     0,   614,   708,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,   344,     0,
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
       0,   146,   147,     0,   301,     0,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,   313,
     314,     0,   358,    73,    74,     0,     0,    75,   315,   316,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,   317,   318,   319,   320,   321,
     322,   323,     0,    78,     0,     0,   273,   274,   275,     0,
       0,     0,     0,   324,    79,     0,     0,     0,   167,     0,
     168,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,   326,     0,     0,    88,   327,     0,    89,     0,    90,
      91,    92,     0,     0,     0,   328,    93,    94,     0,     0,
       0,     0,     0,     0,     0,   329,   330,   331,   332,   333,
       0,   334,   335,    95,    96,   336,   337,    97,   338,    98,
      99,   100,   101,   102,   103,   104,     0,   105,   339,   106,
     107,   108,   109,     0,   110,   340,   111,     0,     0,     0,
       0,     0,   112,     0,   614,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   343,   344,     0,     0,     0,   345,   346,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   119,   120,   121,   122,   123,   124,   125,   126,
     127,  1184,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   350,   351,   352,
     353,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,   354,     0,     0,     0,   355,   356,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,   145,     0,     0,     0,     0,   146,   147,     0,
     301,     0,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,     0,     0,   313,   314,     0,   358,    73,
      74,     0,     0,    75,   315,   316,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,    77,     0,
       0,   317,   318,   319,   320,   321,   322,   323,     0,    78,
       0,     0,   273,   274,   275,     0,     0,     0,     0,   324,
      79,     0,     0,   164,   167,     0,   168,   169,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    84,    85,    86,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,   326,     0,     0,
      88,   327,     0,    89,     0,    90,    91,    92,     0,     0,
       0,   328,    93,    94,     0,     0,     0,     0,     0,     0,
       0,   329,   330,   331,   332,   333,     0,   334,   335,    95,
      96,   336,   337,    97,   338,    98,    99,   100,   101,   102,
     103,   104,     0,   105,   339,   106,   107,   108,   109,     0,
     110,   340,   111,     0,     0,     0,     0,     0,   112,     0,
     719,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
     344,     0,     0,     0,   345,   346,   347,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   349,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,   115,     0,     0,
       0,     0,     0,     0,   116,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,     0,   136,     0,     0,     0,   137,   138,     0,     0,
       0,     0,     0,   350,   351,   352,   353,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,   354,     0,     0,
       0,   355,   356,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   145,     0,
       0,     0,     0,   146,   147,     0,   301,     0,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,     0,
       0,   313,   314,     0,   358,    73,    74,     0,     0,    75,
     315,   316,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,   317,   318,   319,
     320,   321,   322,   323,     0,    78,     0,     0,   273,   274,
     275,     0,     0,     0,     0,   324,    79,     0,     0,     0,
     167,     0,   168,   169,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,  1375,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,   326,     0,     0,    88,   327,     0,    89,
       0,    90,    91,    92,     0,     0,     0,   328,    93,    94,
       0,     0,     0,     0,     0,     0,     0,   329,   330,   331,
     332,   333,     0,   334,   335,    95,    96,   336,   337,    97,
     338,    98,    99,   100,   101,   102,   103,   104,     0,   105,
     339,   106,   107,   108,   109,     0,   110,   340,   111,     0,
       0,     0,     0,     0,   112,     0,   614,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   343,   344,     0,     0,     0,
     345,   346,   347,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   349,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     116,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,   118,     0,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,  1376,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   350,
     351,   352,   353,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,   354,     0,     0,     0,   355,   356,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   145,     0,     0,     0,     0,   146,
     147,     0,   301,     0,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,     0,     0,   313,   314,     0,
     358,    73,    74,     0,     0,    75,   315,   316,     0,     0,
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
    1687,     0,     0,   355,   356,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   144,
     145,     0,     0,     0,     0,   146,   147,     0,   301,     0,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,     0,     0,   313,   314,     0,   358,    73,    74,     0,
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
     330,   331,   332,   333,  1560,   334,   335,    95,    96,   336,
     337,    97,   338,    98,    99,   100,   101,   102,   103,   104,
       0,   105,   339,   106,   107,   108,   109,     0,   110,   340,
     111,     0,     0,     0,     0,     0,   112,     0,   614,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,   344,     0,
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
       0,   146,   147,     0,   301,     0,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,   313,
     314,     0,   358,    73,    74,     0,     0,    75,   315,   316,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,   317,   318,   319,   320,   321,
     322,   323,     0,    78,     0,     0,   273,   274,   275,     0,
       0,     0,     0,   324,    79,     0,     0,     0,   167,     0,
     168,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,   326,     0,     0,    88,   327,     0,    89,     0,    90,
      91,    92,     0,     0,     0,   328,    93,    94,     0,     0,
       0,     0,     0,     0,     0,   329,   330,   331,   332,   333,
       0,   334,   335,    95,    96,   336,   337,    97,   338,    98,
      99,   100,   101,   102,   103,   104,     0,   105,   339,   106,
     107,   108,   109,     0,   110,   340,   111,     0,     0,     0,
       0,     0,   112,     0,   614,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   343,   344,     0,     0,     0,   345,   346,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   350,   351,   352,
     353,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,   354,     0,     0,     0,   355,   356,     0,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
       0,   144,   145,     0,     0,    73,    74,   146,   147,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,     0,   358,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,   164,
     167,   933,   168,   169,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    89,
       0,    90,    91,    92,   656,     0,     0,     0,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0,    97,
       0,    98,    99,   100,   101,   102,   103,   104,     0,   105,
       0,   106,   107,   108,   109,     0,   110,     0,   111,     0,
       0,     0,     0,     0,   112,    13,  1216,     0,   113,     0,
       0,     0,   657,   658,   659,   660,   661,     0,     0,     0,
     662,   663,   664,   665,   666,     0,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     116,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,   118,     0,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   680,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,     0,   136,     0,
       0,     0,   137,   138,     0,     0,  1217,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    75,     0,   144,   145,     0,     0,     0,     0,   146,
     147,     0,     0,    76,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,   935,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,   167,   933,   168,   169,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,    81,     0,
       0,    82,     0,     0,     0,     0,     0,    83,     0,  1245,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,    89,     0,    90,    91,    92,   656,     0,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,     0,
       0,    97,     0,    98,    99,   100,   101,   102,   103,   104,
       0,   105,     0,   106,   107,   108,   109,     0,   110,     0,
     111,     0,     0,     0,     0,     0,   112,     0,   934,     0,
     113,     0,     0,     0,   657,   658,   659,   660,   661,     0,
       0,     0,   662,   663,   664,   665,   666,     0,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     935,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     3,     4,  1512,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,  1513,     0,     0,
      81,     0,     0,  1514,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    84,    85,    86,  1605,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,    89,     0,    90,    91,    92,     0,   656,
       0,     0,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      96,     0,     0,    97,     0,    98,    99,   100,   101,   102,
     103,   104,     0,   105,     0,   106,   107,   108,   109,  1606,
     110,     0,   111,     0,     0,     0,     0,     0,   112,     0,
       0,     0,   113,     0,     0,     0,     0,   657,   658,   659,
     660,   661,     0,     0,     0,   662,   663,   664,   665,   666,
       0,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,   115,     0,     0,
       0,     0,     0,     0,   116,     0,     0,    15,   117,     0,
       0,     0,     0,     0,     0,   118,    16,  1516,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,    25,
       0,     0,     0,     0,   129,    26,    27,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,    28,   136,  1517,    29,     0,   137,   138,     0,     0,
       0,     0,     0,   139,   140,   141,   142,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,  1518,     0,     0,
    1981,     0,     0,  1519,  1982,  -347,     0,     0,     0,     0,
      30,    67,    68,    69,    70,    71,    72,   144,   145,     0,
       0,     0,     0,   146,   147,     0,     0,     0,    73,    74,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       3,     4,  1512,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,  1513,     0,     0,    81,
       0,     0,  1514,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,    89,     0,    90,    91,    92,   656,     0,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
       0,     0,    97,     0,    98,    99,   100,   101,   102,   103,
     104,     0,   105,     0,   106,   107,   108,   109,     0,   110,
       0,   111,     0,     0,     0,     0,     0,   112,     0,     0,
       0,   113,     0,     0,     0,   657,   658,   659,   660,   661,
       0,     0,     0,   662,   663,   664,   665,   666,     0,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,     0,     0,     0,     0,     0,     0,  1143,  1144,
       0,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,     0,   116,     0,     0,    15,   117,     0,     0,
       0,     0,     0,  1515,   118,    16,  1516,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,    25,     0,
       0,     0,     0,   129,    26,    27,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
      28,   136,  1517,    29,     0,   137,   138,     0,     0,     0,
       0,     0,   139,   140,   141,   142,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,  1518,     0,     0,     0,
       0,     0,  1519,     0,     0,     0,     0,  1520,     0,    30,
      67,    68,    69,    70,    71,    72,   144,   145,     0,     0,
       0,     0,   146,   147,     0,     0,     0,    73,    74,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     3,
       4,  1512,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1513,     0,     0,    81,     0,
       0,  1514,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,    89,     0,    90,    91,    92,     0,   656,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,     0,
       0,    97,     0,    98,    99,   100,   101,   102,   103,   104,
       0,   105,     0,   106,   107,   108,   109,     0,   110,     0,
     111,     0,     0,     0,     0,     0,   112,  1194,     0,     0,
     113,     0,     0,     0,     0,   657,   658,   659,   660,   661,
       0,     0,     0,   662,   663,   664,   665,   666,     0,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,   115,     0,     0,     0,     0,
       0,     0,   116,     0,     0,    15,   117,     0,     0,     0,
       0,     0,  1819,   118,    16,  1516,  1820,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,    25,     0,     0,
       0,     0,   129,    26,    27,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,    28,
     136,  1517,    29,     0,   137,   138,     0,     0,     0,     0,
       0,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,  1518,     0,     0,     0,     0,
       0,  1519,     0,     0,     0,     0,  1520,     0,    30,    67,
      68,    69,    70,    71,    72,   144,   145,     0,     0,     0,
       0,   146,   147,     0,     0,     0,    73,    74,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     3,     4,
    1512,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1513,     0,     0,    81,     0,     0,
    1514,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
      89,     0,    90,    91,    92,     0,   656,     0,     0,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,     0,     0,
      97,     0,    98,    99,   100,   101,   102,   103,   104,     0,
     105,     0,   106,   107,   108,   109,  1559,   110,     0,   111,
       0,     0,     0,     0,     0,   112,     0,     0,     0,   113,
       0,     0,     0,     0,   657,   658,   659,   660,   661,     0,
       0,     0,   662,   663,   664,   665,   666,     0,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   115,     0,     0,     0,     0,     0,
       0,   116,     0,     0,    15,   117,     0,     0,     0,     0,
       0,     0,   118,    16,  1516,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,    25,     0,     0,     0,
       0,   129,    26,    27,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,     0,     0,   135,    28,   136,
    1517,    29,     0,   137,   138,     0,     0,     0,     0,     0,
     139,   140,   141,   142,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,  1518,     0,     0,     0,     0,     0,
    1519,     0,  -347,     0,     0,     0,     0,    30,    67,    68,
      69,    70,    71,    72,   144,   145,     0,     0,     0,     0,
     146,   147,     0,     0,     0,    73,    74,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     3,     4,  1512,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1513,     0,     0,    81,     0,     0,  1514,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,     0,
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
       0,   118,    16,  1516,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,    25,     0,     0,     0,     0,
     129,    26,    27,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,    28,   136,  1517,
      29,     0,   137,   138,     0,     0,     0,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,  1518,     0,     0,     0,     0,     0,  1519,
       0,     0,     0,     0,     0,  2039,    30,    67,    68,    69,
      70,    71,    72,   144,   145,     0,     0,     0,     0,   146,
     147,     0,     0,     0,    73,    74,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     3,     4,  1512,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,  1513,     0,     0,    81,     0,     0,  1514,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,    88,     0,     0,    89,     0,
      90,    91,    92,     0,   656,     0,     0,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,     0,     0,    97,     0,
      98,    99,   100,   101,   102,   103,   104,     0,   105,     0,
     106,   107,   108,   109,  1610,   110,     0,   111,     0,     0,
       0,     0,     0,   112,     0,     0,     0,   113,     0,     0,
       0,     0,   657,   658,   659,   660,   661,     0,     0,     0,
     662,   663,   664,   665,   666,     0,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,     0,     0,     0,     0,     0,   116,
       0,     0,    15,   117,     0,     0,     0,     0,     0,     0,
     118,    16,  1516,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,    25,     0,     0,     0,     0,   129,
      26,    27,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,    28,   136,  1517,    29,
       0,   137,   138,     0,     0,     0,     0,     0,   139,   140,
     141,   142,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,  1518,     0,     0,     0,     0,     0,  1519,    67,
      68,    69,    70,    71,    72,    30,     0,     0,     0,     0,
       0,     0,   144,   145,     0,     0,    73,    74,   146,   147,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     3,     4,
    1512,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1513,     0,     0,    81,     0,     0,
    1514,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
      89,     0,    90,    91,    92,     0,   656,     0,     0,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,     0,     0,
      97,     0,    98,    99,   100,   101,   102,   103,   104,     0,
     105,     0,   106,   107,   108,   109,  1853,   110,     0,   111,
       0,     0,     0,     0,     0,   112,     0,     0,     0,   113,
       0,     0,     0,     0,   657,   658,   659,   660,   661,     0,
       0,     0,   662,   663,   664,   665,   666,     0,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   115,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,   118,    16,  1516,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,     0,     0,     0,     0,
       0,   129,    26,    27,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,     0,     0,   135,    28,   136,
    1517,     0,     0,   137,   138,     0,     0,     0,     0,     0,
     139,   140,   141,   142,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,  1518,     0,     0,     0,     0,     0,
    1519,     0,     0,     0,     0,  1961,     0,    30,    67,    68,
      69,    70,    71,    72,   144,   145,     0,     0,     0,     0,
     146,   147,     0,     0,     0,    73,    74,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     3,     4,  1512,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1513,     0,     0,    81,     0,     0,  1514,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    89,
       0,    90,    91,    92,     0,   656,     0,     0,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0,    97,
       0,    98,    99,   100,   101,   102,   103,   104,     0,   105,
       0,   106,   107,   108,   109,  1854,   110,     0,   111,     0,
       0,     0,     0,     0,   112,     0,     0,     0,   113,     0,
       0,     0,     0,   657,   658,   659,   660,   661,     0,     0,
       0,   662,   663,   664,   665,   666,     0,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     116,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,   118,    16,  1516,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,     0,     0,     0,     0,     0,
     129,    26,    27,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,    28,   136,  1517,
       0,     0,   137,   138,     0,     0,     0,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,  1518,     0,     0,     0,     0,     0,  1519,
       0,     0,     0,     0,     0,  2075,    30,     0,     0,     0,
       0,     0,     0,   144,   145,     0,     0,     0,     0,   146,
     147,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,   228,     0,     0,     0,     0,    73,    74,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,   230,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,    89,     0,    90,    91,    92,     0,   656,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
       0,     0,    97,     0,    98,    99,   100,   101,   102,   103,
     104,     0,   105,     0,   106,   107,   108,   109,  1855,   110,
       0,   111,     0,     0,     0,     0,     0,   112,     0,     0,
       0,   113,     0,     0,     0,     0,   657,   658,   659,   660,
     661,     0,     0,     0,   662,   663,   664,   665,   666,     0,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   284,   285,   236,   237,   238,
     239,     0,     0,   116,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   118,     0,     0,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
       0,   136,     0,     0,     0,   286,   138,     0,     0,     0,
       0,     0,   139,   140,   141,   142,     0,     0,     0,     0,
       0,     0,   143,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,     0,     0,    75,     0,   144,   145,     0,     0,
       0,     0,   146,   147,     0,     0,    76,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,   273,   274,   275,     0,     0,     0,     0,
       0,   276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,    89,     0,    90,    91,    92,   656,
       0,     0,     0,    93,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,     0,     0,    97,     0,    98,    99,   100,   101,
     102,   103,   104,     0,   105,     0,   106,   107,   108,   109,
       0,   110,     0,   111,     0,     0,     0,     0,     0,   112,
       0,   277,     0,   113,     0,     0,     0,   657,   658,   659,
     660,   661,     0,     0,     0,   662,   663,   664,   665,   666,
       0,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   115,     0,
       0,     0,     0,     0,     0,   116,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
       0,     0,     0,     0,     0,   129,     0,     0,   278,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   279,     0,   136,     0,     0,     0,   137,   138,     0,
       0,     0,     0,     0,   139,   280,   141,   142,     0,     0,
       0,     0,     0,     0,   143,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,    75,     0,   144,   145,
       0,     0,     0,     0,   146,   147,     0,     0,    76,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,    89,     0,    90,    91,
      92,     0,     0,     0,     0,    93,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,     0,     0,    97,     0,    98,    99,
     100,   101,   102,   103,   104,     0,   105,     0,   106,   107,
     108,   109,     0,   110,     0,   732,     0,     0,     0,     0,
       0,   112,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     115,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,   117,   262,   263,   264,   265,     0,     0,   118,     0,
       0,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,     0,     0,     0,     0,     0,   129,     0,     0,
     130,     0,     0,     0,   131,     0,     0,   132,   133,     0,
     134,     0,     0,   135,     0,   136,     0,     0,     0,   733,
     138,     0,     0,     0,     0,     0,   139,   140,   141,   142,
       0,     0,     0,     0,     0,     0,   143,    67,    68,    69,
    1006,  1007,  1008,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,    75,     0,
     144,   145,     0,     0,     0,     0,   146,   147,     0,     0,
      76,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,   167,
       0,   168,   169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,    88,     0,     0,    89,     0,
      90,    91,    92,     0,     0,     0,     0,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,     0,     0,    97,     0,
      98,    99,   100,   101,   102,   103,   104,     0,   105,     0,
     106,   107,   108,   109,     0,   110,     0,   111,     0,     0,
       0,     0,     0,   112,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1009,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,     0,     0,     0,     0,     0,   129,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,     0,   136,     0,     0,
       0,   137,   138,     0,     0,     0,     0,     0,   139,   140,
     141,   142,     0,     0,     0,     0,     0,     0,   143,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,     0,
      75,     0,   144,   145,     0,     0,     0,     0,   146,   147,
       0,     0,    76,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,   167,     0,   168,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
      89,     0,    90,    91,    92,     0,     0,     0,     0,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,     0,     0,
      97,     0,    98,    99,   100,   101,   102,   103,   104,     0,
     105,     0,   106,   107,   108,   109,     0,   110,     0,   111,
       0,     0,     0,     0,     0,   112,     0,   588,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   115,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,   118,     0,     0,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,     0,     0,     0,     0,
       0,   129,     0,     0,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,     0,     0,   135,     0,   136,
       0,     0,     0,   137,   138,     0,     0,     0,     0,     0,
     139,   140,   141,   142,     0,     0,     0,     0,     0,     0,
     143,    67,    68,    69,  1006,  1007,  1008,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,     0,    75,     0,   144,   145,     0,     0,     0,     0,
     146,   147,     0,     0,    76,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,   167,     0,   168,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,    89,     0,    90,    91,    92,     0,     0,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
       0,     0,    97,     0,    98,    99,   100,   101,   102,   103,
     104,     0,   105,     0,   106,   107,   108,   109,     0,   110,
       0,   111,     0,     0,     0,     0,     0,   112,     0,     0,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1450,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   118,     0,     0,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
       0,   136,     0,     0,     0,   137,   138,     0,     0,     0,
       0,     0,   139,   140,   141,   142,     0,     0,     0,     0,
       0,     0,   143,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,     0,     0,    75,     0,   144,   145,     0,     0,
       0,     0,   146,   147,     0,     0,    76,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,   167,     0,   168,   169,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,    89,     0,    90,    91,    92,     0,
       0,     0,     0,    93,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,     0,     0,    97,     0,    98,    99,   100,   101,
     102,   103,   104,     0,   105,     0,   106,   107,   108,   109,
       0,   110,     0,   111,     0,     0,     0,     0,     0,   112,
       0,     0,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   115,     0,
       0,     0,     0,     0,     0,   116,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
       0,     0,     0,     0,     0,   129,     0,     0,   130,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   135,     0,   136,     0,     0,     0,   137,   138,     0,
       0,     0,     0,     0,   139,   140,   141,   142,     0,     0,
       0,     0,     0,     0,   143,    67,    68,    69,  1006,  1007,
    1008,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,    75,     0,   144,   145,
       0,     0,     0,     0,   146,   147,     0,     0,    76,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,   167,     0,   168,
     169,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,    89,     0,    90,    91,
      92,     0,     0,     0,     0,    93,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,     0,     0,    97,     0,    98,    99,
     100,   101,   102,   103,   104,     0,   105,     0,   106,   107,
     108,   109,     0,   110,     0,   111,     0,     0,     0,     0,
       0,   112,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     115,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,     0,     0,     0,     0,     0,   129,     0,     0,
     130,     0,     0,     0,   131,     0,     0,   132,   133,     0,
     134,     0,     0,   135,     0,   136,     0,     0,     0,   137,
     138,     0,     0,     0,     0,     0,   139,   140,   141,   142,
       0,     0,     0,     0,     0,     0,   143,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,    75,     0,
     144,   145,     0,     0,     0,     0,   146,   147,     0,     0,
      76,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,    88,     0,     0,    89,     0,
      90,    91,    92,     0,     0,     0,     0,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,     0,     0,    97,     0,
      98,    99,   100,   101,   102,   103,   104,     0,   105,     0,
     106,   107,   108,   109,     0,   110,     0,   111,     0,     0,
       0,     0,     0,   112,     0,    14,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,     0,     0,     0,     0,     0,   129,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,     0,   136,     0,     0,
       0,   137,   138,     0,     0,     0,     0,     0,   139,   140,
     141,   142,     0,     0,     0,     0,     0,     0,   143,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,     0,
      75,     0,   144,   145,     0,     0,     0,     0,   146,   147,
       0,     0,    76,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
      89,     0,    90,    91,    92,     0,     0,     0,     0,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,     0,     0,
      97,     0,    98,    99,   100,   101,   102,   103,   104,     0,
     105,     0,   106,   107,   108,   109,     0,   110,     0,   111,
       0,     0,     0,     0,     0,   112,     0,     0,     0,   113,
       0,     0,     0,     0,     0,     0,  1320,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   115,     0,     0,     0,     0,     0,
       0,   116,     0,  1291,     0,   117,     0,     0,     0,     0,
       0,     0,   118,     0,     0,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,     0,     0,     0,     0,
       0,   129,     0,     0,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,     0,     0,   135,     0,   136,
       0,     0,     0,   137,   138,     0,     0,     0,     0,     0,
     139,   140,   141,   142,     0,     0,     0,     0,     0,     0,
     143,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,     0,    75,     0,   144,   145,     0,     0,     0,     0,
     146,   147,     0,     0,    76,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,    89,     0,    90,    91,    92,     0,     0,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
       0,     0,    97,     0,    98,    99,   100,   101,   102,   103,
     104,     0,   105,     0,   106,   107,   108,   109,     0,   110,
       0,   111,     0,     0,     0,     0,     0,   112,     0,     0,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   118,     0,     0,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
     460,   136,     0,     0,     0,   137,   138,     0,     0,     0,
       0,     0,   139,   140,   141,   142,     0,     0,     0,     0,
       0,     0,   143,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,     0,     0,    75,     0,   144,   145,     0,     0,
       0,     0,   146,   147,     0,     0,    76,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,    89,     0,    90,    91,    92,     0,
       0,     0,     0,    93,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,     0,     0,    97,     0,    98,    99,   100,   101,
     102,   103,   104,     0,   105,     0,   106,   107,   108,   109,
       0,   110,     0,   111,     0,     0,     0,     0,     0,   112,
       0,   277,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   115,     0,
       0,     0,     0,     0,     0,   116,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
       0,     0,     0,     0,     0,   129,     0,     0,   130,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   135,     0,   136,     0,     0,     0,   137,   138,     0,
       0,     0,     0,     0,   139,   140,   141,   142,     0,     0,
       0,     0,     0,     0,   143,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,    75,     0,   144,   145,
       0,     0,     0,     0,   146,   147,     0,     0,    76,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,    89,     0,    90,    91,
      92,     0,     0,     0,     0,    93,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,     0,     0,    97,     0,    98,    99,
     100,   101,   102,   103,   104,     0,   105,     0,   106,   107,
     108,   109,     0,   110,     0,   111,     0,     0,     0,     0,
       0,   112,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     115,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,     0,     0,     0,     0,     0,   129,     0,     0,
     130,     0,     0,     0,   131,     0,     0,   132,   133,     0,
     134,     0,     0,   135,     0,   136,     0,     0,     0,   137,
     138,     0,     0,     0,     0,     0,   139,   140,   141,   142,
       0,     0,     0,     0,     0,     0,   143,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,    75,     0,
     144,   145,     0,     0,     0,     0,   146,   147,     0,     0,
      76,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,    88,     0,     0,    89,     0,
      90,    91,    92,     0,     0,     0,     0,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,     0,     0,    97,     0,
      98,    99,   100,   101,   102,   103,   104,     0,   105,     0,
     106,   107,   108,   109,     0,   110,     0,   111,     0,     0,
       0,     0,     0,   112,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,     0,     0,     0,     0,     0,   116,
       0,  1291,     0,   117,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,     0,     0,     0,     0,     0,   129,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,     0,   136,     0,     0,
       0,   137,   138,     0,     0,     0,     0,     0,   139,   140,
     141,   142,     0,     0,     0,     0,     0,     0,   143,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,     0,
      75,     0,   144,   145,     0,     0,     0,     0,   146,   147,
       0,     0,    76,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,    81,     0,     0,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
      89,     0,    90,    91,    92,     0,     0,     0,     0,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,     0,     0,
      97,     0,    98,    99,   100,   101,   102,   103,   104,     0,
     105,     0,   106,   107,   108,   109,     0,   110,     0,   111,
       0,     0,     0,     0,     0,   112,     0,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   115,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,   118,     0,     0,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,     0,     0,     0,     0,
       0,   129,     0,     0,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,     0,     0,   135,     0,   136,
       0,     0,     0,   137,   138,     0,     0,     0,     0,     0,
     139,   140,   141,   142,     0,     0,     0,     0,     0,     0,
     143,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,     0,    75,     0,   144,   145,     0,     0,     0,     0,
     146,   147,     0,     0,    76,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,    89,     0,    90,    91,    92,     0,     0,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
       0,     0,    97,     0,    98,    99,   100,   101,   102,   103,
     104,     0,   105,     0,   106,   107,   108,   109,     0,   110,
       0,   111,     0,     0,     0,     0,     0,   112,     0,     0,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,     0,   789,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   118,     0,     0,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
       0,   136,     0,     0,     0,   137,   138,     0,     0,     0,
       0,     0,   139,   140,   141,   142,     0,     0,     0,     0,
       0,     0,   143,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,     0,     0,    75,     0,   144,   145,     0,     0,
       0,     0,   146,   147,     0,     0,    76,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,    89,     0,    90,    91,    92,     0,
       0,     0,     0,    93,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,     0,     0,    97,     0,    98,    99,   100,   101,
     102,   103,   104,     0,   105,     0,   106,   107,   108,   109,
       0,   110,     0,   111,     0,     0,     0,     0,     0,   112,
       0,     0,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   115,     0,
       0,     0,     0,     0,     0,   116,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
       0,     0,     0,     0,     0,   129,     0,     0,   130,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   135,     0,   136,     0,     0,     0,   137,   138,     0,
       0,     0,     0,     0,   139,   140,   141,   142,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,  1233,
       0,     0,     0,     0,   146,   147
};

static const yytype_int16 yycheck[] =
{
       4,     0,   414,   299,   778,     9,   164,   163,     0,    13,
      36,   430,   219,    17,    18,     0,    35,   289,   174,   217,
       0,   637,   770,   289,    17,     0,   692,   341,   342,   550,
    1067,    35,    36,   590,  1336,   191,   192,     0,   959,   960,
     196,    66,     0,   357,   289,   593,   686,    24,   939,  1363,
      11,   595,     3,   601,  1062,     0,    26,   434,    11,   603,
     462,    14,    66,   325,    16,     3,   934,   549,     0,   505,
     801,   802,   803,  1710,  1179,   566,  1713,     4,   941,  1433,
      27,  1089,   886,  1647,   888,    58,   625,   507,   508,   509,
      85,    18,   566,     0,    20,   899,   212,   281,    24,    25,
      83,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,   341,   752,   753,   111,   173,    14,   450,   758,
     433,   174,  1436,  1316,   174,   111,     0,    53,    54,   111,
    1444,   110,     0,     5,     6,     7,     8,     9,    10,    66,
    1316,    58,   746,   110,   189,    88,   111,    83,   173,   153,
     154,   125,    95,    96,   152,   159,   154,   158,   342,   640,
     153,    64,     5,     6,     7,     8,     9,    10,    55,     3,
      87,   775,   151,   109,     3,   149,   175,   176,   177,   178,
     179,    84,   111,   175,   176,   177,   178,   179,   171,  1931,
     175,   176,   177,   178,   179,   175,   176,   177,   178,   179,
     175,   176,   177,   178,   179,    11,   251,    42,    43,   213,
     214,   215,   175,   176,   177,   178,   179,   175,   176,   177,
     178,   179,  1786,   714,    53,   229,   262,   154,   115,   233,
     175,   176,   177,   178,   179,   173,   240,   241,     3,   174,
     210,   245,   246,   175,   176,   177,   178,   179,    83,   253,
     254,   255,   256,   257,   258,   173,  1998,   261,   262,   263,
     264,   265,   266,   525,   471,  1619,   270,   271,   175,   176,
     177,   178,   179,   277,   278,   279,   110,     3,   752,   753,
     299,  1918,   694,   250,   758,   133,   343,   214,   215,   342,
     604,  1396,   342,   161,     3,   299,   300,  1490,   527,   838,
     839,   175,   176,   177,   178,   179,   233,   175,   176,   177,
     178,   179,   689,   240,  1490,   262,   289,   342,   245,   246,
     217,   634,  1692,  1214,   845,   329,   253,   254,   255,   256,
     644,   258,   488,   172,   261,   262,   263,   264,   265,   568,
     654,   342,   458,   270,   271,   340,   342,   895,  1216,   252,
     579,   580,  1215,   301,   302,   303,   342,   901,   760,   999,
     342,  1001,    81,   315,   846,   174,   317,   173,   372,  1100,
     806,   807,   808,   809,   865,   604,  1180,   342,   316,  1183,
     306,   817,   818,   819,   804,   614,   347,   242,  1952,   870,
     174,  1693,   279,  1707,   347,   414,  1698,    83,   334,   271,
     629,   111,   350,   339,   111,   104,  1045,   342,   740,   741,
     172,   110,    66,   189,   643,   258,   342,    79,   261,   173,
     172,   425,   174,    84,    66,   343,   430,   192,   193,    66,
     434,   173,   173,   173,    66,     3,    11,   430,  1808,   274,
     168,   169,   170,    66,  1814,   372,   172,   173,   452,  1890,
     398,   399,   151,    64,    65,    66,    67,    42,    43,   158,
     174,   111,   466,   172,   173,   279,   470,   341,    64,    65,
      66,    67,   174,   341,   160,   251,   110,   163,    87,   449,
     174,   142,   486,   487,  1405,  1406,   490,   759,   492,    55,
     719,    66,  1500,   759,   174,   499,   174,   501,   502,   503,
     504,   298,   528,   342,   174,   777,   174,   714,   512,   513,
     514,   777,   326,  1815,   759,   174,   520,   314,   172,   173,
     468,   174,   526,   173,   528,   452,     0,   174,  1898,   174,
     172,   173,   777,   342,   911,   172,   173,  1907,   174,   466,
     172,   173,   176,   470,   441,   811,  1801,   174,   552,   115,
     173,  1217,   262,   115,   174,   262,   828,   174,   342,   174,
     487,   179,   828,   279,   174,   492,   811,   774,   133,   110,
    1374,  1045,   499,   869,   501,   502,   503,   504,   266,  1136,
     342,  1385,   174,   828,   174,   512,   513,   514,  1392,   343,
     342,   904,   154,   189,   174,   174,   910,   172,   173,   165,
     133,   343,   343,   343,   174,   173,   868,  1223,   250,  1979,
     326,  1981,     0,   250,  1230,   174,   772,   931,   346,  2060,
    1260,  1165,   321,   189,   479,   480,   481,   482,   342,   283,
      21,    22,    66,   637,   638,   176,   491,   641,   249,   953,
     342,   283,   871,   342,   637,   622,   283,   624,   342,   963,
     964,   283,     0,   249,   342,  1910,   237,  1912,   865,   234,
     241,   272,   342,   190,   342,   231,   232,   233,   234,   235,
     252,   933,   342,  1109,   342,   266,   272,    39,    40,   683,
     628,   685,     5,   342,    83,   689,   690,   228,    11,   342,
     683,  2061,   274,   172,   260,   342,    66,   342,   229,     5,
       6,     7,     8,     9,    10,   967,   342,   604,    83,    71,
     274,    16,  1025,   279,   588,   342,  1436,   313,   284,   343,
     588,  1612,   342,   298,  1444,   342,   703,   342,   269,   733,
     604,   272,   342,   173,    67,   110,   604,   115,   172,   173,
     614,   282,   102,   342,  1781,  1782,   614,   346,   279,   280,
     342,   342,   342,   319,   153,    88,   322,   156,    64,    65,
      66,    67,   342,   342,    69,    70,    71,   771,    73,    74,
     320,    76,   342,   173,   152,   254,   154,   781,   782,   783,
     784,   173,   173,   342,  1046,   789,    56,   175,   176,   177,
     178,   179,    62,   690,   798,   274,   800,   801,   802,   803,
     343,   805,   172,   173,    64,    65,   733,    67,   168,   169,
     170,  1427,   270,  1429,   116,   117,   118,   119,   120,   121,
     122,   123,   719,    99,   126,   281,   158,   175,   176,   177,
     178,   179,  1104,  1354,   110,   110,   134,   158,  1104,  1046,
     219,   220,   174,  1391,   771,   719,  1394,  1283,  1284,  1285,
     869,   719,   265,   174,   781,   782,   783,   784,   835,  1104,
      88,   166,  1239,    91,  1639,   869,  1073,   342,   872,    97,
    1645,   798,   342,   148,   851,   150,   151,   881,   805,   102,
     253,   266,  1259,   189,   301,   889,   303,  1159,  1160,   837,
    1203,    86,   896,  1159,  1160,  1093,   269,  1210,   127,  1212,
     176,   266,  1882,   132,  1884,  1885,  1886,   911,   262,   282,
    1658,  1659,  1068,    87,  1159,  1160,   214,   215,   216,   217,
     218,   116,    11,   118,   119,   120,   121,   122,   123,   933,
     934,   126,    69,    70,    71,   939,   940,   941,   262,    76,
     933,   934,   301,   249,   303,   168,   169,   170,     0,     1,
    1037,   174,  1039,  1040,   881,   219,   220,     5,     6,     7,
     265,   279,   859,   860,   861,   301,   272,   303,   165,   917,
     279,   919,    20,   319,   250,   165,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
     279,    69,    70,    71,   230,    73,    74,  1613,    76,    51,
     229,   168,   169,   170,    52,    53,    54,   313,   646,   647,
     648,  1015,    64,    65,    66,    67,   252,   279,   301,   321,
     303,   250,   258,   259,  1296,    77,    78,    79,    80,  1911,
    1296,  1913,    82,    83,    86,   232,   233,   234,   235,  1043,
    1044,   277,   232,   233,   234,   235,   252,   306,  1052,  1053,
     233,  1296,  1056,    89,    90,   279,  1060,  1061,  1062,  1063,
     934,   233,   959,   960,   255,   256,   934,   306,   274,   227,
    1063,   277,   278,   168,   169,   170,  1080,   296,  1344,   174,
     177,   133,  1630,  1087,   110,  1089,   324,   325,   166,   177,
    1403,  1404,   177,  1041,  1098,   279,  1100,   100,   101,  1344,
    1413,   127,   279,   280,   177,  1517,   132,   180,   181,   182,
     183,   184,   185,   186,   187,   175,   176,   190,   191,   179,
     172,   173,  1076,  1077,  1078,  1079,   321,   279,  1442,  1443,
     342,  1329,    93,    94,  1061,  1032,   104,     5,     6,     7,
      86,   320,   321,   322,   323,  1099,   192,   193,  1022,   297,
     176,   285,    20,     3,  1022,     3,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
     116,  1098,   118,   119,   120,   121,   122,   123,   230,  1727,
     126,   173,   184,   185,    52,    53,    54,   239,   240,   173,
     242,   173,   244,   245,   246,   247,   248,   249,  1746,   173,
     252,   173,   228,   229,    89,    90,   258,   259,  1437,    22,
    1214,  1215,  1216,     5,     6,     7,     8,     9,    10,  1223,
     328,   329,   274,  1216,   250,   277,  1230,   125,   174,  1233,
    1223,     3,     4,   326,   327,  1239,  1240,  1230,   286,   287,
     288,   289,   173,   269,    64,    65,   272,    69,    70,    71,
     173,    73,    74,    75,    76,  1259,   282,  1261,   173,  1678,
     321,   313,   130,   131,   177,   178,   173,   268,   269,   342,
     173,  1543,  1544,  2047,  1546,   765,   766,  1543,  1544,   173,
    1546,  2022,  2023,   294,   295,   134,   173,  1291,  1517,   173,
    1519,   564,   565,   173,   342,   173,   173,  1245,  1543,  1544,
     173,  1546,   173,   173,   173,  1331,   173,   173,   173,   173,
     332,  1315,    17,   343,   342,  1319,  1320,  1316,   179,  1216,
     173,   173,   173,  1327,  1316,  1222,  1319,  1331,  1332,  1277,
     281,    92,  1336,  1337,   290,   291,   292,   293,   294,   295,
      98,   332,  1216,   342,   166,    17,   321,   299,  1216,   133,
      55,   133,  1300,    58,  1512,  1303,  1304,   133,   313,  1363,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     112,  1316,  1349,   112,  1351,   321,  1353,   111,   174,   262,
     298,  1358,  1386,    55,  1316,   172,    58,  1616,  1936,   172,
     134,   237,   830,  1320,  1806,   833,   834,   835,   103,   176,
     105,   233,   173,   173,   173,  1332,   173,   173,   106,  1316,
     115,   173,    38,   851,   852,   853,   854,   173,   286,   287,
     288,   289,   173,  1427,   173,  1429,   173,   173,   173,  1433,
     173,   103,  1436,   105,  1427,   173,  1429,   173,   173,   167,
    1444,   298,   343,   115,   177,   177,   177,  1466,    23,   180,
     181,   182,   183,   184,   185,   186,   187,   134,  1687,   190,
     191,   174,   112,   238,   155,  1694,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   238,     3,   173,   172,  1483,
     177,   174,  1508,   180,   181,   182,   183,   184,   185,   186,
     187,  1490,   174,   190,   191,   174,  1500,   173,  1490,   173,
     345,   174,   173,   206,  1508,   283,    82,    79,  1405,  1406,
     173,   111,  1516,   243,   219,   220,   221,   222,   223,   224,
     257,   281,  1818,  1516,   104,  1473,   231,  1475,  1476,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   172,   111,   273,  1490,   314,   219,   220,   221,
     222,   223,   224,   280,   172,   260,   106,   177,  1490,   231,
     180,   181,   182,   183,   184,   185,   186,   187,  1572,   238,
     190,   191,   261,   227,   279,   250,   173,   282,   265,   284,
     321,    23,   281,  1490,   104,   342,   111,   342,   260,  1516,
     290,   291,   292,   293,   294,   295,  1615,   321,   158,    55,
     173,   273,   342,   146,   102,   174,   287,   279,  1612,  1613,
     282,   174,   284,   109,   319,  1619,   302,   322,   134,   342,
    1613,  1640,  1641,   342,   177,   110,   333,   180,   181,   182,
     183,   184,   185,   186,   187,   174,   174,  1909,   191,  1868,
     342,   173,   312,  1909,   173,   173,   261,   319,    88,   111,
     322,   258,   342,  1657,   257,    90,   110,   315,   111,   115,
    1664,   257,   173,    20,  1909,   180,   181,   182,   183,   184,
     185,   186,   187,   268,  1678,  1679,   191,   290,   291,   292,
     293,   294,   295,   234,    99,  1678,   321,   323,   265,  1693,
     174,   342,  1988,   174,  1698,   174,   174,   174,   342,   174,
     174,   174,   174,  1707,  1708,   342,  1654,   281,   174,   165,
     342,   174,  1660,  1661,  1870,     5,     6,     7,   342,   174,
    1724,   342,   174,   173,   104,   174,   174,   174,   321,   174,
      20,  1960,   161,   189,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,   173,   173,
     173,  1755,  1700,  1982,   296,   312,   174,   174,   174,    75,
      75,    72,    52,    53,    54,   173,  1770,   104,  2040,   108,
     104,   174,   102,   174,  2040,   231,   232,   233,   234,   235,
     174,    16,   111,   266,   266,  1941,   321,   274,   172,   265,
     173,   250,   174,   236,   265,  2040,   174,  1801,   236,   174,
     241,   143,   321,   143,   260,   174,  1754,   174,   174,    75,
     173,  1815,   281,   104,  1818,   174,   174,   273,   250,   343,
     344,   329,   173,   279,   342,   349,   238,   264,   284,   342,
     354,   264,     3,   342,     3,   274,   267,   172,    64,    65,
      66,    67,   228,  1770,  1848,   342,    77,   237,     5,   238,
     310,    77,    78,    79,    80,   344,   174,   308,   265,   173,
      86,  1865,   174,   319,   331,   174,   322,   174,   174,   265,
    1874,   174,   265,   343,  1878,   174,   162,   342,   342,  2086,
     265,   342,   273,   191,   174,   342,  1890,   257,  2095,   110,
    1894,  1890,   128,    83,   172,  1899,   173,   112,  1890,   173,
    1904,   266,   238,   173,   302,  1890,  1910,   110,  1912,   433,
    1890,   173,  1916,   110,   110,  1890,   265,   441,   265,   174,
     326,   335,   272,  1871,   337,   110,  1930,  1890,   337,   321,
     173,   264,  1890,   229,     3,   273,    85,   342,  1865,   171,
     301,    85,   330,   262,   343,   133,   172,   173,   302,  1953,
    1954,  1955,  1956,   238,   309,     5,   312,   238,     5,   321,
     154,   156,   343,  1911,   151,  1913,   342,   151,     3,   129,
     190,    59,  1976,   173,   300,   174,   159,   133,   156,   153,
     312,   312,  1986,   326,  1988,   338,   113,   173,    60,   310,
     133,   336,   174,   337,   265,   300,   286,   287,   288,   289,
      61,   326,   312,    65,   230,   302,   174,   308,   312,   265,
      64,   306,   265,   239,   240,   173,   242,   133,   318,    41,
    1087,  1490,  1270,   451,  1034,  2016,   252,   453,   209,  2033,
     210,  2035,   258,   259,   760,    36,   560,  1062,  1500,  1645,
    2068,  2054,  2053,  2046,  2015,  2060,  1698,  1813,   274,  1689,
    1813,   277,  1546,  2077,  1792,  1791,  2060,   452,  1344,  2063,
       8,  2060,   704,   157,  1478,  1877,  1874,  1949,  2060,   593,
     594,   595,  1475,  2077,  1476,  2060,  1404,   601,   694,   603,
    2060,  1403,  1032,   869,  1227,  2060,  1618,   313,   943,  1240,
    1626,   571,   653,   617,   618,   619,   903,  2060,   425,  1142,
     652,   866,  2060,  1746,   706,   654,   920,   655,    35,   633,
     634,   632,   683,   524,   924,   924,  1713,  1915,  1711,  1564,
    1727,   645,   646,   647,   648,  1571,  1384,  1373,  1927,  1376,
    1842,  1935,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   602,    -1,   580,    -1,
      -1,   685,   686,    -1,    -1,    -1,    -1,     3,    -1,     5,
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
      -1,   197,   198,   199,    -1,    -1,    -1,   891,    -1,    -1,
      -1,   895,    -1,   209,    -1,    -1,    -1,   901,    -1,    -1,
     904,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,   231,    -1,    -1,   922,    -1,
      -1,   925,   238,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,   959,   960,   273,    -1,   275,
      -1,    -1,    -1,   279,   280,    -1,    -1,   283,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,   300,    -1,    -1,    -1,   304,   305,
      -1,   110,    -1,    -1,    -1,   999,    -1,  1001,    -1,    -1,
      -1,    -1,    -1,    -1,   320,   321,    -1,    -1,   127,    -1,
     326,   327,    -1,   132,   133,     5,     6,     7,    -1,    -1,
      -1,  1025,    -1,    -1,    -1,    -1,    -1,    -1,  1032,   345,
      20,   347,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
       5,     6,     7,    -1,    -1,   174,    -1,   176,    -1,    -1,
      -1,    -1,    52,    53,    54,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   228,
     229,   230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,   250,    -1,   252,    -1,    -1,    -1,    -1,  1142,   258,
     259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     269,    -1,   134,   272,    -1,    -1,    -1,  1161,   277,    -1,
      -1,  1165,    -1,   282,    -1,    -1,  1170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1193,
    1194,  1195,  1196,    -1,    -1,    -1,    -1,    -1,    -1,  1203,
     134,    -1,    -1,    -1,    -1,  1209,  1210,    -1,  1212,    -1,
     192,   193,   194,   195,   196,    -1,    -1,    -1,   200,   201,
     202,   203,   204,   342,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,    -1,    -1,    -1,
     174,    -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1260,    -1,   192,   193,
     194,   195,   196,    -1,    -1,    -1,   200,   201,   202,   203,
     204,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,   279,
      -1,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
     192,   193,   194,   195,   196,    -1,    -1,    -1,   200,   201,
     202,   203,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,    -1,    -1,    -1,
      -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1373,
      -1,    -1,  1376,    -1,    -1,    -1,    -1,    -1,    -1,   134,
    1384,    -1,    -1,    -1,    -1,    -1,    -1,  1391,    -1,    -1,
    1394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1403,
    1404,  1405,  1406,   192,   193,   194,   195,   196,   342,  1413,
     134,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
     195,   196,    -1,   134,    -1,   200,   201,   202,   203,   204,
     342,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,    -1,    -1,   192,   193,
     194,   195,   196,    -1,    -1,    -1,   200,   201,   202,   203,
     204,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
     201,   202,   203,   204,  1518,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   342,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1571,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,  1603,
      -1,  1605,    -1,    -1,  1608,    -1,    -1,    -1,    -1,    -1,
      -1,   302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1626,    -1,    -1,    -1,  1630,    -1,   192,   193,
     194,   195,   196,    -1,    -1,  1639,   200,   201,   202,   203,
     204,  1645,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    -1,   192,   193,   194,   195,
     196,    -1,    -1,    -1,   200,   201,   202,   203,   204,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1709,  1710,  1711,    -1,  1713,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,  1727,    -1,    18,    19,    -1,    -1,    22,
      23,    -1,    -1,    26,    27,    28,    -1,   301,    -1,    -1,
      -1,    -1,  1746,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    55,    56,    57,   301,    -1,    -1,    -1,    62,
      63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,  1805,    -1,    -1,    97,    98,    99,  1811,    -1,    -1,
      -1,    -1,   105,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,   114,    -1,   116,    -1,   118,   119,   120,    -1,    -1,
      -1,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,    -1,
     163,   164,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,
     173,    -1,   175,   176,    -1,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,   189,    -1,    -1,   192,
     193,    -1,    -1,    -1,   197,   198,   199,    -1,    -1,    -1,
      -1,  1915,    -1,    -1,  1918,    -1,   209,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,
      -1,    -1,  1936,    -1,   227,    -1,    -1,    -1,   231,    -1,
      -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
      -1,    -1,    -1,    -1,   257,    -1,    -1,   260,    -1,    -1,
    1974,   264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,
     273,    -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,
      -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,
      -1,    -1,    -1,   296,    -1,    -1,    -1,   300,    -1,    -1,
      -1,   304,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,    -1,
      -1,    -1,    -1,   326,   327,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   345,     3,   347,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,   118,   119,
     120,    -1,    -1,    -1,   124,   125,   126,    -1,    -1,    -1,
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
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,
     300,    -1,    -1,    -1,   304,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   345,     3,   347,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,   106,
      -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,
      -1,   118,   119,   120,    -1,    -1,    -1,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,    -1,   163,   164,   165,    -1,
      -1,    -1,    -1,    -1,   171,    -1,   173,    -1,   175,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
     197,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
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
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,
     118,   119,   120,    -1,    -1,    -1,   124,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,    -1,   163,   164,   165,    -1,    -1,
      -1,    -1,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,     3,   347,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,
      -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,    -1,   163,   164,
     165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,   174,
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
      -1,    -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,
      -1,   326,   327,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,   347,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,   118,
     119,   120,    -1,    -1,    -1,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,    -1,   163,   164,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,    -1,    -1,   192,   193,    -1,    -1,    -1,   197,   198,
     199,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
      -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,
     279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,
     289,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
      -1,   300,    -1,    -1,    -1,   304,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,   347,    22,
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
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,    -1,
      -1,    -1,    -1,   326,   327,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   347,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,
      -1,   118,   119,   120,    -1,    -1,    -1,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,    -1,   163,   164,   165,    -1,
      -1,    -1,    -1,    -1,   171,    -1,   173,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
     197,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,
      -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,    -1,    -1,    -1,   304,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,
     327,    -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,     3,
     347,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,
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
     301,    -1,    -1,   304,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
     321,    -1,    -1,    -1,    -1,   326,   327,    -1,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,   347,    22,    23,    -1,
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
     165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,   174,
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
      -1,    -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,
      -1,   326,   327,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,   347,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,   118,
     119,   120,    -1,    -1,    -1,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,    -1,   163,   164,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,    -1,    -1,    -1,   197,   198,
     199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
      -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,
     279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,
     289,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
      -1,   300,    -1,    -1,    -1,   304,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,   347,    22,
      23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,    -1,
      -1,    -1,    -1,   326,   327,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   347,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,
      -1,   118,   119,   120,    -1,    -1,    -1,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,    -1,   163,   164,   165,    -1,
      -1,    -1,    -1,    -1,   171,    -1,   173,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
     197,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,
      -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,    -1,    -1,    -1,   304,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,
     327,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
     347,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
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
     321,    -1,    -1,    -1,    -1,   326,   327,    -1,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,   347,    22,    23,    -1,
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
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
      -1,    -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,
      -1,   326,   327,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,   347,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,   118,
     119,   120,    -1,    -1,    -1,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,    -1,   163,   164,   165,    -1,    -1,    -1,
      -1,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,    -1,    -1,    -1,   197,   198,
     199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
      -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,
     279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,
     289,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
      -1,   300,    -1,    -1,    -1,   304,   305,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   320,   321,    -1,    -1,    22,    23,   326,   327,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
      67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
      -1,   118,   119,   120,   134,    -1,    -1,    -1,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
      -1,   158,   159,   160,   161,    -1,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,   171,   172,   173,    -1,   175,    -1,
      -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
     200,   201,   202,   203,   204,    -1,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   263,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,
      -1,    -1,   279,   280,    -1,    -1,   283,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,
     327,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,   345,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,   107,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,   118,   119,   120,   134,    -1,    -1,    -1,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
      -1,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,    -1,   158,   159,   160,   161,    -1,   163,    -1,
     165,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,
     175,    -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,
      -1,    -1,   200,   201,   202,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,   112,    -1,    -1,
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
      -1,    -1,    -1,    -1,   227,    -1,    -1,   230,   231,    -1,
      -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,   252,
      -1,    -1,    -1,    -1,   257,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,
     273,   274,   275,   276,   277,    -1,   279,   280,    -1,    -1,
      -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,
      -1,    -1,    -1,   296,    -1,    -1,    -1,   300,    -1,    -1,
     303,    -1,    -1,   306,   307,   308,    -1,    -1,    -1,    -1,
     313,     5,     6,     7,     8,     9,    10,   320,   321,    -1,
      -1,    -1,    -1,   326,   327,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,    -1,   118,   119,   120,   134,    -1,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,    -1,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,    -1,   158,   159,   160,   161,    -1,   163,
      -1,   165,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,
      -1,   175,    -1,    -1,    -1,   192,   193,   194,   195,   196,
      -1,    -1,    -1,   200,   201,   202,   203,   204,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,   226,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,   230,   231,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,   252,    -1,
      -1,    -1,    -1,   257,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,
     274,   275,   276,   277,    -1,   279,   280,    -1,    -1,    -1,
      -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,
      -1,    -1,   296,    -1,    -1,    -1,   300,    -1,    -1,    -1,
      -1,    -1,   306,    -1,    -1,    -1,    -1,   311,    -1,   313,
       5,     6,     7,     8,     9,    10,   320,   321,    -1,    -1,
      -1,    -1,   326,   327,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,   118,   119,   120,    -1,   134,    -1,    -1,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
      -1,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,    -1,   158,   159,   160,   161,    -1,   163,    -1,
     165,    -1,    -1,    -1,    -1,    -1,   171,   184,    -1,    -1,
     175,    -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,
      -1,    -1,    -1,   200,   201,   202,   203,   204,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,    -1,   230,   231,    -1,    -1,    -1,
      -1,    -1,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,   252,    -1,    -1,
      -1,    -1,   257,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,   274,
     275,   276,   277,    -1,   279,   280,    -1,    -1,    -1,    -1,
      -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,
      -1,   306,    -1,    -1,    -1,    -1,   311,    -1,   313,     5,
       6,     7,     8,     9,    10,   320,   321,    -1,    -1,    -1,
      -1,   326,   327,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,   118,   119,   120,    -1,   134,    -1,    -1,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,    -1,   158,   159,   160,   161,   174,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,   175,
      -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,
      -1,    -1,   200,   201,   202,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,   230,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,   252,    -1,    -1,    -1,
      -1,   257,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,   274,   275,
     276,   277,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,
     306,    -1,   308,    -1,    -1,    -1,    -1,   313,     5,     6,
       7,     8,     9,    10,   320,   321,    -1,    -1,    -1,    -1,
     326,   327,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,    86,
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
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,   230,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,   252,    -1,    -1,    -1,    -1,
     257,   258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,   274,   275,   276,
     277,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,   306,
      -1,    -1,    -1,    -1,    -1,   312,   313,     5,     6,     7,
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
     118,   119,   120,    -1,   134,    -1,    -1,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,    -1,
     158,   159,   160,   161,   174,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,    -1,
      -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
     200,   201,   202,   203,   204,    -1,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      -1,    -1,   230,   231,    -1,    -1,    -1,    -1,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,   252,    -1,    -1,    -1,    -1,   257,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,
     268,    -1,   270,    -1,    -1,   273,   274,   275,   276,   277,
      -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,
      -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,   306,     5,
       6,     7,     8,     9,    10,   313,    -1,    -1,    -1,    -1,
      -1,    -1,   320,   321,    -1,    -1,    22,    23,   326,   327,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,   118,   119,   120,    -1,   134,    -1,    -1,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,    -1,   158,   159,   160,   161,   174,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,   175,
      -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,    -1,
      -1,    -1,   200,   201,   202,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,   274,   275,
     276,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,
     306,    -1,    -1,    -1,    -1,   311,    -1,   313,     5,     6,
       7,     8,     9,    10,   320,   321,    -1,    -1,    -1,    -1,
     326,   327,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,    86,
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
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,   258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,   274,   275,   276,
      -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,   306,
      -1,    -1,    -1,    -1,    -1,   312,   313,    -1,    -1,    -1,
      -1,    -1,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,
     327,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
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
      -1,    -1,    -1,    -1,    -1,   219,   220,   221,   222,   223,
     224,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,    -1,
      -1,    -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,
     264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,
      -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,
      -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,
      -1,    -1,   296,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,   320,   321,    -1,    -1,
      -1,    -1,   326,   327,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,   134,
      -1,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,    -1,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,    -1,   158,   159,   160,   161,
      -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,   173,    -1,   175,    -1,    -1,    -1,   192,   193,   194,
     195,   196,    -1,    -1,    -1,   200,   201,   202,   203,   204,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   320,   321,
      -1,    -1,    -1,    -1,   326,   327,    -1,    -1,    38,    -1,
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
      -1,   231,   232,   233,   234,   235,    -1,    -1,   238,    -1,
      -1,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
     260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,    -1,
     270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,
     280,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
     320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,
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
      26,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    26,    -1,   320,   321,    -1,    -1,    -1,    -1,
     326,   327,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
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
      22,    23,    -1,    -1,    26,    -1,   320,   321,    -1,    -1,
      -1,    -1,   326,   327,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    69,    70,    -1,
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
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   320,   321,
      -1,    -1,    -1,    -1,   326,   327,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    -1,
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
      -1,    -1,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,
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
      26,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,
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
      -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
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
      -1,    -1,    26,    -1,   320,   321,    -1,    -1,    -1,    -1,
     326,   327,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
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
     274,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,
      -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,
      -1,    -1,   296,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,   320,   321,    -1,    -1,
      -1,    -1,   326,   327,    -1,    -1,    38,    -1,    -1,    41,
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
      -1,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,   320,   321,
      -1,    -1,    -1,    -1,   326,   327,    -1,    -1,    38,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
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
     320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      -1,   229,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,
      -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,
     268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,
      -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,
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
      -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,   320,   321,    -1,    -1,    -1,    -1,
     326,   327,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
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
      22,    23,    -1,    -1,    26,    -1,   320,   321,    -1,    -1,
      -1,    -1,   326,   327,    -1,    -1,    38,    -1,    -1,    41,
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
      -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,
      -1,    -1,    -1,    -1,   326,   327
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
     559,   321,   622,   179,   177,   180,   181,   182,   183,   184,
     185,   186,   187,   190,   191,   643,   134,   192,   193,   194,
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
     614,   643,   669,   552,   553,   669,   539,   669,   568,   178,
     188,   189,   578,   588,   583,   596,   583,   583,   583,   173,
     173,   100,   101,   581,   581,   569,   578,   588,   591,   596,
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
     598,   658,   573,   594,   538,   539,   250,   568,   669,   321,
     342,   111,   643,   158,   727,   342,   727,   727,   669,   689,
     173,   596,   703,   704,   705,   342,   597,   669,   711,   146,
     715,   727,   680,   570,   250,   530,   533,   534,   174,   342,
     184,   185,   578,   342,   184,   111,   342,   174,   287,   674,
     174,   674,   638,   302,   596,   650,   654,   596,   312,   342,
     342,   174,   342,   578,   594,   614,   173,   283,   540,   545,
     551,   561,   562,   342,    69,    70,    71,    73,    74,    76,
     166,   541,   543,   321,   563,   669,   563,   564,   564,   343,
     342,   558,   109,   565,   578,   107,   531,   531,   578,   578,
     594,   110,   333,   601,   602,   655,   174,   655,   174,   343,
     342,   343,   669,    93,    94,    88,   533,   535,   261,   392,
     111,   380,   258,   380,   380,   380,   674,   257,   669,   669,
     657,   594,   658,   669,   669,   669,    90,    89,    90,   669,
     643,   229,   417,   420,   431,   432,   666,   614,   110,   519,
     315,   519,   448,   111,   257,   658,   413,   413,   413,   413,
     669,    56,    62,   375,    20,   268,   677,   678,   369,   234,
     182,   416,   417,   418,   423,   443,   669,    99,   409,   321,
     445,   323,   265,   643,   413,   480,   174,   342,   660,   174,
     174,   174,   499,   174,   342,   174,   174,   174,   174,   342,
     174,   342,   174,   342,   295,   633,   636,   174,   342,   174,
     174,   174,   575,   173,   660,   660,   596,   115,   154,   174,
     680,   174,   174,   342,   688,    83,   250,   596,   729,   730,
     732,   733,   734,   266,   342,   699,   321,   706,    84,   142,
     709,   342,   712,   104,   716,   736,   727,   174,   161,   737,
     738,   727,   174,   342,   173,   173,   173,   596,   596,   596,
     596,   296,   533,   302,   312,   596,   533,   533,   563,   564,
     529,   174,   174,   174,   554,   561,   541,    75,   561,    75,
      72,   542,   669,   173,   669,   553,   104,   108,   567,   674,
     174,   174,   190,   190,   104,   174,   102,   603,   174,   174,
     206,   655,   669,   266,   375,   266,    16,   674,   499,   499,
     499,   252,   274,   669,   253,   269,   282,   440,   130,   131,
     419,   660,   321,   488,   674,   111,   173,   316,   523,   524,
     674,   674,   265,   274,   669,   671,   679,   355,   359,   371,
     372,   373,   376,   381,   393,   398,   496,   614,   643,   174,
     342,   172,   669,   445,   172,   447,   442,   643,   173,   265,
     412,   174,    66,    80,    86,   237,   240,   276,   300,   306,
     311,   364,   366,   367,   376,   381,   393,   398,   454,   457,
     459,   460,   461,   465,   467,   473,   475,   476,   496,   500,
     501,   550,   669,   669,   236,   241,   236,   498,   659,   673,
     673,   673,   631,   673,   566,   644,   669,   174,   174,   174,
     139,   596,   690,   696,   697,   698,   728,   727,   250,   732,
     174,   342,   321,   110,   148,   150,   151,   700,   704,   727,
     669,   707,   143,   143,   174,   597,   727,   125,   149,   597,
     717,   718,   719,   720,   721,   736,   281,   174,   174,   534,
     530,   531,   531,   342,   174,   112,   174,   174,   342,   533,
     174,   174,   346,    75,   561,    16,   265,   544,   561,   173,
     671,   566,   568,   578,   578,   566,   104,    85,   340,   604,
     605,   174,   174,   329,   274,   250,    99,   110,   176,   250,
     264,   264,   449,   127,   132,   250,   421,   422,   425,   426,
     428,   429,   432,   674,   342,   523,   524,   173,   513,   513,
     342,   238,     3,   669,   342,   373,   418,   669,   267,     3,
     172,   415,   228,   331,   485,   442,    77,   237,   536,   238,
     462,   463,   643,   279,   446,   466,   568,   301,   470,   471,
     596,   568,   310,   455,   308,   344,   660,   279,   479,   660,
       5,   479,   174,   174,   174,   174,   174,   342,   343,   173,
     342,   342,   699,   342,   174,   730,   669,   731,   265,   265,
     265,   265,   174,   174,   321,   735,   736,   342,   110,   151,
     722,   162,   174,   174,   174,   596,   596,   596,   563,   561,
     449,   568,   544,   671,   174,   574,   186,   334,   341,   597,
     606,   607,   608,   609,   257,   273,     3,   110,   110,   427,
     595,   449,   449,   128,   427,   425,   110,   176,   228,   269,
     272,   282,   439,   441,   674,    83,   522,   174,   514,   515,
     669,   516,   516,   674,   674,   669,   173,    83,   171,   266,
     328,   329,   486,   487,   112,   490,   491,   174,    64,    84,
     252,   238,   557,   451,   669,   173,   173,   568,   303,   470,
     472,   301,   468,   469,   302,   455,   457,   568,   173,   237,
     241,   454,     4,   452,   674,   237,   241,   644,   669,   596,
     691,   692,   694,   696,   698,   690,   696,   110,    83,   110,
     110,   110,   669,   718,   265,   265,   174,    83,   160,   163,
     739,   740,   745,   174,   174,   174,   174,   607,   326,   337,
     337,   335,   612,   674,   669,   272,   321,   110,   173,   264,
     643,   342,   229,   174,   342,     3,   519,   519,   273,   424,
     425,   171,   279,   326,   489,   279,   489,   487,   330,   301,
     493,    85,    85,   451,   343,   464,   596,   446,   302,   455,
     312,   596,   468,   472,   455,   457,   133,   309,   478,   666,
     238,     5,   238,     5,   174,   342,   321,   693,   342,   154,
     735,   151,   151,   156,   669,   746,     3,   741,   742,    83,
     153,   156,   747,   748,   750,   751,   190,    83,   109,   334,
     339,   643,   129,   568,   448,   674,   515,    59,   520,   520,
     669,   174,   342,   488,   488,   488,   488,   326,   327,   492,
     173,   311,   364,   366,   376,   381,   458,   459,   494,   500,
     501,   550,   669,   174,   342,   174,   455,   457,   300,   302,
     312,   303,   307,   474,   133,   312,   455,   174,   342,   660,
     451,   452,   451,   452,   692,   669,   695,   696,   159,   743,
     743,   156,   669,   753,   742,   752,   749,   750,   334,   341,
     597,   610,   611,   338,   326,   448,   173,   430,   174,   113,
     438,    60,   521,   521,   425,   669,   669,   669,   669,   568,
     310,   596,   133,   455,   300,   455,   568,   312,   312,   312,
     666,   742,   744,   326,   336,   337,   438,   400,    39,    40,
      71,   437,   265,   434,   435,   436,    61,   522,   522,   174,
     456,   302,   306,   308,   660,   436,   174,    64,    65,   265,
     435,   265,   434,   318,   511,   312,   458,   455,   477,   669,
      42,    43,    83,   274,   433,   433,   173,   133,   474,    41,
     110,   250,   512,   658,   174,   342,   658
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
#line 620 "src/sql/server/sql_parser.y"
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
#line 630 "src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 4:
#line 635 "src/sql/server/sql_parser.y"
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
#line 644 "src/sql/server/sql_parser.y"
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 6:
#line 649 "src/sql/server/sql_parser.y"
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
#line 659 "src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 8:
#line 664 "src/sql/server/sql_parser.y"
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
#line 674 "src/sql/server/sql_parser.y"
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
#line 683 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 11:
#line 684 "src/sql/server/sql_parser.y"
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 12:
#line 689 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 13:
#line 690 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym); YYACCEPT; }
    break;

  case 14:
#line 691 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 15:
#line 692 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 16:
#line 693 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 17:
#line 694 "src/sql/server/sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYABORT; }
    break;

  case 18:
#line 699 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 20:
#line 703 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 21:
#line 707 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 22:
#line 708 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 23:
#line 711 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 24:
#line 712 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 36:
#line 735 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(2) - (5)].l));
		append_list(l, (yyvsp[(3) - (5)].l));
		append_symbol(l, (yyvsp[(4) - (5)].sym));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
    break;

  case 38:
#line 745 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 39:
#line 746 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 40:
#line 751 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[(2) - (2)].l)); }
    break;

  case 41:
#line 752 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 42:
#line 757 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(1) - (2)].l) );
		append_type(l, &(yyvsp[(2) - (2)].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 43:
#line 762 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l) );
		append_type(l, &(yyvsp[(4) - (4)].type) );
		(yyval.l) = append_symbol((yyvsp[(1) - (4)].l), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 44:
#line 771 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, (yyvsp[(2) - (4)].sval) );
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 45:
#line 776 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (4)].l));
	  	append_symbol(l, (yyvsp[(4) - (4)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_SET, l ); }
    break;

  case 46:
#line 781 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 47:
#line 789 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 48:
#line 797 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 49:
#line 805 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 50:
#line 813 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 51:
#line 819 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 52:
#line 828 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(4) - (7)].l));
		append_symbol(l, (yyvsp[(5) - (7)].sym));
		append_symbol(l, (yyvsp[(6) - (7)].sym));
		append_list(l, (yyvsp[(7) - (7)].l));
		append_int(l, (yyvsp[(3) - (7)].bval));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
    break;

  case 53:
#line 836 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(4) - (5)].l));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		append_int(l, (yyvsp[(3) - (5)].bval));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
    break;

  case 54:
#line 845 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (1)].sval) );
	  append_string((yyval.l), NULL ); }
    break;

  case 55:
#line 849 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[(2) - (2)].sval) ); }
    break;

  case 56:
#line 853 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (3)].sval) );
	  append_string((yyval.l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 58:
#line 862 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 59:
#line 863 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[(4) - (4)].sval) ); }
    break;

  case 60:
#line 867 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 62:
#line 872 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 63:
#line 874 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 69:
#line 880 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 70:
#line 881 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 71:
#line 885 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 72:
#line 886 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_role; }
    break;

  case 73:
#line 891 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
    break;

  case 74:
#line 901 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
    break;

  case 75:
#line 910 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 76:
#line 912 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 77:
#line 916 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 78:
#line 917 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 79:
#line 921 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 80:
#line 922 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 81:
#line 927 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 82:
#line 928 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 83:
#line 933 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
    break;

  case 84:
#line 941 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
    break;

  case 85:
#line 950 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 86:
#line 951 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 87:
#line 955 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 88:
#line 956 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 89:
#line 961 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (1)].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
    break;

  case 90:
#line 965 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (3)].l));
	  append_symbol((yyval.l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 91:
#line 971 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(L(), (yyvsp[(1) - (1)].i_val)); }
    break;

  case 92:
#line 973 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(append_int(L(), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val)); }
    break;

  case 93:
#line 977 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
    break;

  case 94:
#line 978 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
    break;

  case 95:
#line 982 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(2) - (2)].l)); }
    break;

  case 96:
#line 983 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[(1) - (1)].l)); }
    break;

  case 97:
#line 984 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[(1) - (1)].l)); }
    break;

  case 98:
#line 995 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 99:
#line 996 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 101:
#line 1001 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 102:
#line 1003 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 103:
#line 1007 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
    break;

  case 104:
#line 1008 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
    break;

  case 105:
#line 1009 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[(2) - (2)].l)); }
    break;

  case 106:
#line 1010 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 107:
#line 1011 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 108:
#line 1012 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
    break;

  case 109:
#line 1016 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 110:
#line 1018 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 111:
#line 1022 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 112:
#line 1023 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 113:
#line 1031 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 114:
#line 1036 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, (yyvsp[(6) - (6)].l)));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 115:
#line 1041 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 116:
#line 1046 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 117:
#line 1051 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 118:
#line 1056 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 119:
#line 1061 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 120:
#line 1066 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (4)].sval));
	  append_list(l, (yyvsp[(4) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 121:
#line 1071 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
    break;

  case 122:
#line 1076 "src/sql/server/sql_parser.y"
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
#line 1088 "src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (4)].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[(2) - (4)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 124:
#line 1094 "src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 125:
#line 1101 "src/sql/server/sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (7)].sval));
				  append_string(l, (yyvsp[(7) - (7)].sval));
				  append_int(l, (yyvsp[(2) - (7)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 126:
#line 1111 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
    break;

  case 127:
#line 1116 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
    break;

  case 128:
#line 1120 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
    break;

  case 129:
#line 1124 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[(2) - (4)].sval)); }
    break;

  case 130:
#line 1126 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  if (!strlen((yyvsp[(5) - (5)].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 131:
#line 1134 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 132:
#line 1142 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
    break;

  case 133:
#line 1147 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
    break;

  case 134:
#line 1152 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  append_int(l, 0);
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 135:
#line 1160 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 136:
#line 1161 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 137:
#line 1165 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 138:
#line 1166 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 139:
#line 1167 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 145:
#line 1189 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
    break;

  case 146:
#line 1200 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (3)].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
    break;

  case 147:
#line 1217 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
    break;

  case 148:
#line 1226 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 149:
#line 1227 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 150:
#line 1231 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 151:
#line 1232 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 152:
#line 1236 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 153:
#line 1237 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 154:
#line 1238 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 155:
#line 1242 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 156:
#line 1243 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
    break;

  case 157:
#line 1244 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[(3) - (3)].l_val)));  }
    break;

  case 158:
#line 1245 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[(3) - (3)].sym)));  }
    break;

  case 159:
#line 1246 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 160:
#line 1250 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 161:
#line 1251 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 162:
#line 1252 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
    break;

  case 163:
#line 1253 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 164:
#line 1254 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
    break;

  case 165:
#line 1255 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 166:
#line 1256 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
    break;

  case 167:
#line 1257 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
    break;

  case 168:
#line 1265 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (9)].sval));
	  append_int(l, (yyvsp[(2) - (9)].i_val));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
    break;

  case 169:
#line 1274 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 170:
#line 1275 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ordered_idx; }
    break;

  case 171:
#line 1276 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imprints_idx; }
    break;

  case 172:
#line 1277 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 173:
#line 1298 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval));
	  append_int(l, (yyvsp[(3) - (3)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
    break;

  case 174:
#line 1303 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (10)].sval));
	  append_string(l, (yyvsp[(6) - (10)].sval));
	  append_string(l, (yyvsp[(8) - (10)].sval));
	  append_string(l, (yyvsp[(10) - (10)].sval));
	  append_int(l, (yyvsp[(4) - (10)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
    break;

  case 175:
#line 1313 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 176:
#line 1314 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 177:
#line 1315 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
    break;

  case 178:
#line 1319 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 179:
#line 1320 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 180:
#line 1325 "src/sql/server/sql_parser.y"
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
#line 1337 "src/sql/server/sql_parser.y"
    {
      dlist *l = L();
      append_list(l, (yyvsp[(3) - (6)].l));
      append_symbol(l, (yyvsp[(6) - (6)].sym));
      (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE_LOADER, l);
    }
    break;

  case 182:
#line 1344 "src/sql/server/sql_parser.y"
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
#line 1355 "src/sql/server/sql_parser.y"
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
#line 1366 "src/sql/server/sql_parser.y"
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
#line 1380 "src/sql/server/sql_parser.y"
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
#line 1391 "src/sql/server/sql_parser.y"
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
#line 1406 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 188:
#line 1407 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 189:
#line 1408 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 190:
#line 1409 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 191:
#line 1410 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 192:
#line 1411 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 193:
#line 1415 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_COMMIT; }
    break;

  case 194:
#line 1416 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DELETE; }
    break;

  case 195:
#line 1417 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_PRESERVE; }
    break;

  case 196:
#line 1418 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = CA_DROP; }
    break;

  case 197:
#line 1422 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[(2) - (3)].l)); }
    break;

  case 198:
#line 1423 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[(1) - (1)].l)); }
    break;

  case 199:
#line 1431 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (4)].l));
			  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym)); 
			  append_int((yyval.l), (yyvsp[(4) - (4)].i_val)); }
    break;

  case 200:
#line 1437 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 201:
#line 1438 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 202:
#line 1439 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 203:
#line 1444 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 204:
#line 1446 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 210:
#line 1453 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 211:
#line 1454 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 212:
#line 1459 "src/sql/server/sql_parser.y"
    {
			dlist *l = L();
			append_string(l, (yyvsp[(1) - (3)].sval));
			append_type(l, &(yyvsp[(2) - (3)].type));
			append_list(l, (yyvsp[(3) - (3)].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 213:
#line 1467 "src/sql/server/sql_parser.y"
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
#line 1519 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 216:
#line 1525 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 217:
#line 1527 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 218:
#line 1533 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (6)].sval) );
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
    break;

  case 219:
#line 1541 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 220:
#line 1543 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 224:
#line 1549 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 225:
#line 1553 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 226:
#line 1559 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 227:
#line 1567 "src/sql/server/sql_parser.y"
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
#line 1596 "src/sql/server/sql_parser.y"
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
#line 1633 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 230:
#line 1634 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 231:
#line 1641 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 232:
#line 1650 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 233:
#line 1651 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 234:
#line 1655 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 235:
#line 1656 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 236:
#line 1657 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 237:
#line 1658 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 238:
#line 1659 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 239:
#line 1663 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(3) - (3)].i_val) << 8); }
    break;

  case 240:
#line 1667 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 241:
#line 1671 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
    break;

  case 242:
#line 1672 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 243:
#line 1673 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 244:
#line 1674 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 245:
#line 1675 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 246:
#line 1679 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 247:
#line 1680 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 248:
#line 1681 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 249:
#line 1682 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 250:
#line 1686 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 251:
#line 1687 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 252:
#line 1691 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
    break;

  case 253:
#line 1692 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
    break;

  case 254:
#line 1693 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
    break;

  case 255:
#line 1694 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
    break;

  case 256:
#line 1697 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(2) - (5)].l) );
			  append_list(l, (yyvsp[(3) - (5)].l) );
			  append_int(l, (yyvsp[(4) - (5)].i_val) );
			  append_int(l, (yyvsp[(5) - (5)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 258:
#line 1710 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[(2) - (2)].l)); }
    break;

  case 259:
#line 1712 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[(3) - (3)].l)); }
    break;

  case 260:
#line 1716 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(5) - (8)].l) );
			  append_list(l, (yyvsp[(3) - (8)].l) );
			  append_list(l, (yyvsp[(6) - (8)].l) );
			  append_int(l, (yyvsp[(7) - (8)].i_val) );
			  append_int(l, (yyvsp[(8) - (8)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 261:
#line 1728 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 262:
#line 1733 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 263:
#line 1735 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 264:
#line 1739 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 265:
#line 1744 "src/sql/server/sql_parser.y"
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
#line 1756 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 270:
#line 1765 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 271:
#line 1766 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 272:
#line 1770 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 274:
#line 1775 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 275:
#line 1780 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				append_list(l, (yyvsp[(3) - (6)].l));
				append_string(l, (yyvsp[(6) - (6)].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
    break;

  case 276:
#line 1787 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 279:
#line 1802 "src/sql/server/sql_parser.y"
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
#line 1816 "src/sql/server/sql_parser.y"
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
#line 1829 "src/sql/server/sql_parser.y"
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
#line 1875 "src/sql/server/sql_parser.y"
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
#line 1890 "src/sql/server/sql_parser.y"
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
#line 1903 "src/sql/server/sql_parser.y"
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
#line 1949 "src/sql/server/sql_parser.y"
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
#line 1962 "src/sql/server/sql_parser.y"
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
#line 1974 "src/sql/server/sql_parser.y"
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
#line 1999 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[(1) - (1)].sym)); }
    break;

  case 289:
#line 2003 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(2) - (5)].l),(yyvsp[(3) - (5)].sym)); }
    break;

  case 290:
#line 2007 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(3) - (6)].l),(yyvsp[(4) - (6)].sym)); }
    break;

  case 291:
#line 2022 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 292:
#line 2024 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 293:
#line 2028 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 294:
#line 2030 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 321:
#line 2078 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 322:
#line 2082 "src/sql/server/sql_parser.y"
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[(2) - (2)].sym));}
    break;

  case 323:
#line 2087 "src/sql/server/sql_parser.y"
    { dlist *l = L(); 
		  append_list( l, (yyvsp[(1) - (4)].l));
		  append_list( l, (yyvsp[(3) - (4)].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
    break;

  case 325:
#line 2098 "src/sql/server/sql_parser.y"
    {(yyval.l) = L();}
    break;

  case 326:
#line 2099 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 327:
#line 2101 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 328:
#line 2106 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[(2) - (2)].sym)); }
    break;

  case 331:
#line 2113 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[(3) - (4)].sym)); }
    break;

  case 332:
#line 2118 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (6)].sym)),(yyvsp[(3) - (6)].l)),(yyvsp[(4) - (6)].l))); }
    break;

  case 333:
#line 2124 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[(2) - (5)].l)),(yyvsp[(3) - (5)].l))); }
    break;

  case 334:
#line 2132 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 335:
#line 2140 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 336:
#line 2142 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 337:
#line 2147 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 338:
#line 2155 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 339:
#line 2157 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 340:
#line 2161 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 341:
#line 2162 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 342:
#line 2172 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (7)].sym));
		  append_list(l, (yyvsp[(4) - (7)].l));
		  append_symbol(l, (yyvsp[(5) - (7)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
    break;

  case 343:
#line 2183 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 344:
#line 2185 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[(2) - (2)].l)); }
    break;

  case 345:
#line 2188 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  append_symbol(l, (yyvsp[(5) - (5)].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
    break;

  case 346:
#line 2202 "src/sql/server/sql_parser.y"
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
#line 2218 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 349:
#line 2223 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 351:
#line 2229 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[(1) - (2)].sval));
			  	  append_type((yyval.l), &(yyvsp[(2) - (2)].type));
				}
    break;

  case 352:
#line 2234 "src/sql/server/sql_parser.y"
    { 
				  append_string((yyval.l), (yyvsp[(3) - (4)].sval));
			  	  append_type((yyval.l), &(yyvsp[(4) - (4)].type));
				}
    break;

  case 353:
#line 2242 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(3) - (4)].l)); }
    break;

  case 354:
#line 2244 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(1) - (1)].type))); }
    break;

  case 356:
#line 2249 "src/sql/server/sql_parser.y"
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
    break;

  case 357:
#line 2253 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 358:
#line 2258 "src/sql/server/sql_parser.y"
    { dlist *p = L();
			  append_string(p, (yyvsp[(3) - (4)].sval));
			  append_type(p, &(yyvsp[(4) - (4)].type));
			  (yyval.l) = append_list((yyvsp[(1) - (4)].l), p); }
    break;

  case 359:
#line 2263 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[(1) - (2)].sval));
			  append_type(p, &(yyvsp[(2) - (2)].type));
			  (yyval.l) = append_list(l, p); }
    break;

  case 360:
#line 2313 "src/sql/server/sql_parser.y"
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
#line 2325 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 362:
#line 2326 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 363:
#line 2331 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
    break;

  case 364:
#line 2332 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
    break;

  case 365:
#line 2333 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
    break;

  case 366:
#line 2334 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[(3) - (3)].l)); }
    break;

  case 367:
#line 2338 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 368:
#line 2339 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 369:
#line 2343 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 370:
#line 2345 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].l)); }
    break;

  case 371:
#line 2350 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 372:
#line 2351 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 373:
#line 2352 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 374:
#line 2353 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 379:
#line 2368 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[(1) - (3)].i_val));
	  append_symbol((yyval.l), (yyvsp[(2) - (3)].sym));
	  append_list((yyval.l), (yyvsp[(3) - (3)].l));
	}
    break;

  case 380:
#line 2375 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 381:
#line 2376 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 382:
#line 2380 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 383:
#line 2381 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 384:
#line 2385 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 385:
#line 2386 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 386:
#line 2391 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 387:
#line 2394 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 388:
#line 2399 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
    break;

  case 389:
#line 2405 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );	
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
    break;

  case 390:
#line 2411 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
    break;

  case 391:
#line 2417 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
    break;

  case 392:
#line 2423 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_LOADER );
	  (yyval.l) = l; }
    break;

  case 393:
#line 2432 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 394:
#line 2438 "src/sql/server/sql_parser.y"
    { dlist *l = (yyvsp[(2) - (3)].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 395:
#line 2443 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 396:
#line 2451 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(6) - (6)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 397:
#line 2459 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 398:
#line 2467 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 399:
#line 2475 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_LOADER );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 400:
#line 2483 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  append_int(l, (yyvsp[(3) - (5)].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
    break;

  case 401:
#line 2489 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
    break;

  case 402:
#line 2493 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 403:
#line 2494 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 404:
#line 2495 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[(3) - (3)].l) ); }
    break;

  case 405:
#line 2496 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, (yyvsp[(3) - (3)].l) ); }
    break;

  case 406:
#line 2500 "src/sql/server/sql_parser.y"
    {(yyval.l) = NULL;}
    break;

  case 407:
#line 2501 "src/sql/server/sql_parser.y"
    {(yyval.l) = (yyvsp[(2) - (3)].l);}
    break;

  case 408:
#line 2502 "src/sql/server/sql_parser.y"
    {(yyval.l) = L(); }
    break;

  case 409:
#line 2506 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_type(l, &(yyvsp[(1) - (1)].type) );
				  (yyval.l)= l; }
    break;

  case 410:
#line 2509 "src/sql/server/sql_parser.y"
    { append_type((yyvsp[(3) - (3)].l), &(yyvsp[(1) - (3)].type));
				  (yyval.l) = (yyvsp[(3) - (3)].l); }
    break;

  case 411:
#line 2514 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 412:
#line 2515 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 413:
#line 2516 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 420:
#line 2535 "src/sql/server/sql_parser.y"
    {
	  (yyval.sym) = (yyvsp[(1) - (1)].sym);
	  m->type = Q_TRANS;					}
    break;

  case 421:
#line 2542 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[(3) - (3)].bval));  }
    break;

  case 422:
#line 2544 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[(2) - (2)].sval)); }
    break;

  case 423:
#line 2546 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[(3) - (3)].sval)); }
    break;

  case 424:
#line 2548 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[(3) - (4)].bval)), (yyvsp[(4) - (4)].sval) )); }
    break;

  case 425:
#line 2552 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 426:
#line 2554 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(4) - (4)].i_val)); }
    break;

  case 427:
#line 2556 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 428:
#line 2560 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; }
    break;

  case 430:
#line 2566 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 431:
#line 2568 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(1) - (3)].i_val) | (yyvsp[(3) - (3)].i_val)); }
    break;

  case 432:
#line 2573 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_readonly; }
    break;

  case 433:
#line 2574 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_writable; }
    break;

  case 434:
#line 2575 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_serializable; }
    break;

  case 435:
#line 2576 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = tr_none; /* not supported */ }
    break;

  case 440:
#line 2587 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 441:
#line 2588 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 442:
#line 2592 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 443:
#line 2593 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 444:
#line 2594 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 445:
#line 2598 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 446:
#line 2599 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 447:
#line 2604 "src/sql/server/sql_parser.y"
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
#line 2618 "src/sql/server/sql_parser.y"
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
#line 2632 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_COPYLOADER, l ); }
    break;

  case 450:
#line 2637 "src/sql/server/sql_parser.y"
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
#line 2648 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 452:
#line 2655 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 453:
#line 2666 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 454:
#line 2667 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 455:
#line 2672 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(L(), (yyvsp[(1) - (1)].l_val)); }
    break;

  case 456:
#line 2674 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l_val)); }
    break;

  case 457:
#line 2679 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 458:
#line 2680 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 459:
#line 2684 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 460:
#line 2685 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 461:
#line 2690 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (1)].sval) );
			  (yyval.l) = l; }
    break;

  case 462:
#line 2694 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (2)].sval) );
			  append_string(l, (yyvsp[(2) - (2)].sval) );
			  (yyval.l) = l; }
    break;

  case 463:
#line 2702 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 464:
#line 2707 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 465:
#line 2712 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (5)].sval));
				  append_string(l, (yyvsp[(5) - (5)].sval));
				  (yyval.l) = l; }
    break;

  case 466:
#line 2717 "src/sql/server/sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (7)].sval));
				  append_string(l, (yyvsp[(5) - (7)].sval));
				  append_string(l, sql2str((yyvsp[(7) - (7)].sval)));
				  (yyval.l) = l; }
    break;

  case 467:
#line 2725 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 468:
#line 2726 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 469:
#line 2730 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 470:
#line 2731 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (2)].l_val)), 0); }
    break;

  case 471:
#line 2732 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[(2) - (2)].l_val)); }
    break;

  case 472:
#line 2734 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(3) - (4)].l_val)); }
    break;

  case 473:
#line 2736 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(4) - (4)].l_val)); }
    break;

  case 474:
#line 2740 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 475:
#line 2741 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 476:
#line 2745 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 477:
#line 2746 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 478:
#line 2750 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 479:
#line 2751 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 480:
#line 2755 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 481:
#line 2756 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 482:
#line 2760 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 483:
#line 2761 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 484:
#line 2765 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 485:
#line 2767 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 486:
#line 2773 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
    break;

  case 487:
#line 2782 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
    break;

  case 488:
#line 2824 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 489:
#line 2832 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 490:
#line 2841 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 491:
#line 2843 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 492:
#line 2845 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(2) - (2)].l)); }
    break;

  case 494:
#line 2851 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(2) - (3)].l)); }
    break;

  case 495:
#line 2853 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (5)].l), (yyvsp[(4) - (5)].l)); }
    break;

  case 496:
#line 2857 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 497:
#line 2859 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 498:
#line 2863 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 499:
#line 2865 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 500:
#line 2870 "src/sql/server/sql_parser.y"
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

  case 503:
#line 2891 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DEFAULT, NULL ); }
    break;

  case 506:
#line 2900 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 507:
#line 2901 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 508:
#line 2902 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 509:
#line 2906 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 510:
#line 2908 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 511:
#line 2913 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, _symbol_create(SQL_DEFAULT, NULL ) );
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 512:
#line 2918 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym) );
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 513:
#line 2923 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
    break;

  case 514:
#line 2930 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 515:
#line 2931 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 516:
#line 2938 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 517:
#line 2940 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
    break;

  case 518:
#line 2945 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
    break;

  case 519:
#line 2953 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[(2) - (5)].i_val));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 520:
#line 2961 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[(3) - (5)].i_val));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 521:
#line 2971 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 522:
#line 2972 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 523:
#line 2973 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (2)].i_val); }
    break;

  case 524:
#line 2977 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 525:
#line 2978 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 526:
#line 2982 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 527:
#line 2983 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 528:
#line 2984 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 529:
#line 2988 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 530:
#line 2990 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[(2) - (2)].l)); }
    break;

  case 532:
#line 3014 "src/sql/server/sql_parser.y"
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (3)].l));
	  	append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
    break;

  case 533:
#line 3023 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 534:
#line 3024 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 535:
#line 3029 "src/sql/server/sql_parser.y"
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[(1) - (4)].sval)));
	  append_list(l, (yyvsp[(2) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 539:
#line 3052 "src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (4)].bval), (yyvsp[(3) - (4)].l), NULL,
		(yyvsp[(4) - (4)].l)->h->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 540:
#line 3063 "src/sql/server/sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (6)].bval), (yyvsp[(3) - (6)].l), (yyvsp[(5) - (6)].l),
		(yyvsp[(6) - (6)].l)->h->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 541:
#line 3074 "src/sql/server/sql_parser.y"
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

  case 542:
#line 3104 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 543:
#line 3106 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 545:
#line 3116 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
    break;

  case 546:
#line 3125 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
    break;

  case 547:
#line 3134 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
    break;

  case 548:
#line 3140 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 550:
#line 3145 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 551:
#line 3146 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 552:
#line 3147 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 553:
#line 3152 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 554:
#line 3154 "src/sql/server/sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 555:
#line 3156 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(4) - (5)].l); }
    break;

  case 557:
#line 3166 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[(1) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(4) - (4)].sym)); }
    break;

  case 558:
#line 3174 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 559:
#line 3175 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[(2) - (2)].l)); }
    break;

  case 560:
#line 3179 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 561:
#line 3181 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 562:
#line 3185 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (2)].l));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 563:
#line 3190 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  	  	  append_int(l, 0);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 564:
#line 3196 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(2) - (3)].sym));
		  	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  	  append_int(l, 1);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 565:
#line 3202 "src/sql/server/sql_parser.y"
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

  case 566:
#line 3212 "src/sql/server/sql_parser.y"
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

  case 567:
#line 3224 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
    break;

  case 568:
#line 3228 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym);
				  append_symbol((yyvsp[(1) - (1)].sym)->data.lval, NULL); }
    break;

  case 569:
#line 3232 "src/sql/server/sql_parser.y"
    { m->caching = 0; }
    break;

  case 570:
#line 3234 "src/sql/server/sql_parser.y"
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[(3) - (5)].sym));
		append_symbol(op, (yyvsp[(5) - (5)].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
    break;

  case 571:
#line 3245 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (5)].sval));
		  	  	  append_list(l, (yyvsp[(4) - (5)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 572:
#line 3250 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (2)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 573:
#line 3255 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (4)].sval));
		  	  	  append_list(l, (yyvsp[(3) - (4)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 574:
#line 3260 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (1)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 575:
#line 3267 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 576:
#line 3268 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 577:
#line 3272 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 578:
#line 3273 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) );}
    break;

  case 579:
#line 3277 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(1) - (1)].l))); }
    break;

  case 580:
#line 3280 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(3) - (3)].l))); }
    break;

  case 581:
#line 3285 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 582:
#line 3286 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 583:
#line 3292 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
    break;

  case 584:
#line 3296 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 585:
#line 3301 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
    break;

  case 586:
#line 3305 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 587:
#line 3309 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 588:
#line 3311 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l)); }
    break;

  case 589:
#line 3315 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 590:
#line 3316 "src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 591:
#line 3320 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 592:
#line 3324 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 593:
#line 3325 "src/sql/server/sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val))); 
			}
    break;

  case 594:
#line 3329 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 595:
#line 3333 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 596:
#line 3334 "src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].l_val)));
			}
    break;

  case 597:
#line 3338 "src/sql/server/sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[(2) - (2)].sval),NULL)));
			}
    break;

  case 598:
#line 3342 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 599:
#line 3346 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 600:
#line 3348 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 601:
#line 3353 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  append_int(l, (yyvsp[(2) - (2)].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
    break;

  case 602:
#line 3361 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 603:
#line 3362 "src/sql/server/sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 604:
#line 3363 "src/sql/server/sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 614:
#line 3380 "src/sql/server/sql_parser.y"
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

  case 615:
#line 3396 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 616:
#line 3401 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, (yyvsp[(2) - (3)].sval));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 617:
#line 3408 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 618:
#line 3418 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
    break;

  case 619:
#line 3425 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
    break;

  case 620:
#line 3434 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 621:
#line 3435 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 622:
#line 3436 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 623:
#line 3441 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 624:
#line 3448 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 625:
#line 3455 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 626:
#line 3462 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 627:
#line 3472 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (1)].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
    break;

  case 628:
#line 3476 "src/sql/server/sql_parser.y"
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

  case 629:
#line 3491 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[(1) - (4)].sym) );}
    break;

  case 630:
#line 3492 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[(1) - (3)].sym) ); }
    break;

  case 631:
#line 3497 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 632:
#line 3503 "src/sql/server/sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 633:
#line 3509 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 634:
#line 3514 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 635:
#line 3522 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 636:
#line 3524 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 637:
#line 3530 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, (yyvsp[(2) - (4)].sval));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 638:
#line 3537 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 639:
#line 3546 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 640:
#line 3547 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 641:
#line 3548 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 642:
#line 3552 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[(2) - (2)].sym) ); }
    break;

  case 643:
#line 3556 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 644:
#line 3557 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym));  }
    break;

  case 645:
#line 3561 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 646:
#line 3566 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(1) - (3)].l));
		  append_list(l, (yyvsp[(2) - (3)].l));
		  append_list(l, (yyvsp[(3) - (3)].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
    break;

  case 647:
#line 3575 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 648:
#line 3577 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 649:
#line 3579 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 650:
#line 3583 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 651:
#line 3585 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 652:
#line 3587 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 654:
#line 3594 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 655:
#line 3601 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 656:
#line 3608 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 657:
#line 3615 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 658:
#line 3622 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 659:
#line 3629 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 660:
#line 3636 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
			  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 661:
#line 3643 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 662:
#line 3650 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 663:
#line 3657 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 664:
#line 3664 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 665:
#line 3671 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 666:
#line 3677 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 667:
#line 3684 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 668:
#line 3691 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 669:
#line 3698 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 670:
#line 3705 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 671:
#line 3712 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 672:
#line 3719 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 673:
#line 3726 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 674:
#line 3732 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 675:
#line 3739 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 676:
#line 3746 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 677:
#line 3753 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 678:
#line 3760 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 679:
#line 3762 "src/sql/server/sql_parser.y"
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

  case 680:
#line 3783 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 681:
#line 3787 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 684:
#line 3793 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
    break;

  case 685:
#line 3795 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
    break;

  case 687:
#line 3798 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[(1) - (1)].l)); }
    break;

  case 691:
#line 3802 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[(4) - (4)].l)); }
    break;

  case 699:
#line 3814 "src/sql/server/sql_parser.y"
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
    break;

  case 700:
#line 3884 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[(1) - (5)].sym)), (yyvsp[(4) - (5)].l))); }
    break;

  case 701:
#line 3889 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[(1) - (3)].l) ); }
    break;

  case 703:
#line 3895 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[(1) - (3)].sym)), (yyvsp[(2) - (3)].sym)), (yyvsp[(3) - (3)].sym)); }
    break;

  case 704:
#line 3899 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 705:
#line 3901 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 706:
#line 3905 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 707:
#line 3907 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 708:
#line 3911 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 709:
#line 3913 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[(2) - (3)].l), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val))); }
    break;

  case 710:
#line 3917 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_ROWS; }
    break;

  case 711:
#line 3918 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = FRAME_RANGE; }
    break;

  case 712:
#line 3922 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(1) - (1)].sym)), _symbol_create_int(SQL_FRAME, -1)); }
    break;

  case 713:
#line 3923 "src/sql/server/sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 714:
#line 3927 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 715:
#line 3928 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 716:
#line 3929 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 717:
#line 3933 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 718:
#line 3938 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(2) - (4)].sym)), (yyvsp[(4) - (4)].sym)); }
    break;

  case 719:
#line 3942 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 720:
#line 3943 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 721:
#line 3944 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 722:
#line 3948 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 723:
#line 3952 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NONE; }
    break;

  case 724:
#line 3953 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
    break;

  case 725:
#line 3954 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_GROUP; }
    break;

  case 726:
#line 3955 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_TIES; }
    break;

  case 727:
#line 3956 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
    break;

  case 728:
#line 3960 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 729:
#line 3965 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 730:
#line 3969 "src/sql/server/sql_parser.y"
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

  case 731:
#line 3996 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 732:
#line 3997 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 733:
#line 4002 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 734:
#line 4003 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "left"); }
    break;

  case 735:
#line 4004 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "right"); }
    break;

  case 736:
#line 4005 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "insert"); }
    break;

  case 737:
#line 4010 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[(3) - (6)].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 738:
#line 4017 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 739:
#line 4022 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 740:
#line 4027 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 741:
#line 4032 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 742:
#line 4037 "src/sql/server/sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 743:
#line 4044 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 744:
#line 4045 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 745:
#line 4050 "src/sql/server/sql_parser.y"
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

  case 746:
#line 4060 "src/sql/server/sql_parser.y"
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

  case 747:
#line 4070 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 748:
#line 4077 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 749:
#line 4084 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 750:
#line 4091 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 751:
#line 4098 "src/sql/server/sql_parser.y"
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

  case 752:
#line 4110 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 753:
#line 4112 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 754:
#line 4117 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 755:
#line 4122 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_string(l, (yyvsp[(1) - (3)].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 756:
#line 4127 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 757:
#line 4132 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
  		  append_string(l, (yyvsp[(2) - (2)].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
    break;

  case 758:
#line 4139 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 759:
#line 4140 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 760:
#line 4145 "src/sql/server/sql_parser.y"
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

  case 761:
#line 4166 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 762:
#line 4167 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 763:
#line 4172 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 764:
#line 4173 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 765:
#line 4178 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 766:
#line 4179 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 767:
#line 4186 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 768:
#line 4192 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 769:
#line 4198 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 770:
#line 4204 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 771:
#line 4210 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (4)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 772:
#line 4216 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 774:
#line 4226 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 775:
#line 4227 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = -1; }
    break;

  case 776:
#line 4228 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 777:
#line 4232 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 778:
#line 4233 "src/sql/server/sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 779:
#line 4244 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 780:
#line 4246 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0+1; }
    break;

  case 781:
#line 4250 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 782:
#line 4252 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 6+1; }
    break;

  case 783:
#line 4256 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
    break;

  case 784:
#line 4258 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 785:
#line 4264 "src/sql/server/sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 786:
#line 4272 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iyear; }
    break;

  case 787:
#line 4273 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imonth; }
    break;

  case 788:
#line 4274 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = iday; }
    break;

  case 789:
#line 4275 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = ihour; }
    break;

  case 790:
#line 4276 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = imin; }
    break;

  case 792:
#line 4281 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = isec; }
    break;

  case 793:
#line 4286 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 794:
#line 4292 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (1)].i_val)), 0);  }
    break;

  case 795:
#line 4295 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 796:
#line 4301 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 797:
#line 4304 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 798:
#line 4310 "src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[(1) - (3)].l)), (yyvsp[(3) - (3)].l) ); }
    break;

  case 799:
#line 4313 "src/sql/server/sql_parser.y"
    { (yyval.l) =  append_list( L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 800:
#line 4317 "src/sql/server/sql_parser.y"
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

  case 804:
#line 4343 "src/sql/server/sql_parser.y"
    { const char *s = sql2str((yyvsp[(1) - (1)].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
    break;

  case 805:
#line 4349 "src/sql/server/sql_parser.y"
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

  case 806:
#line 4414 "src/sql/server/sql_parser.y"
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

  case 807:
#line 4445 "src/sql/server/sql_parser.y"
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

  case 808:
#line 4508 "src/sql/server/sql_parser.y"
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

  case 809:
#line 4547 "src/sql/server/sql_parser.y"
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

  case 810:
#line 4564 "src/sql/server/sql_parser.y"
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

  case 811:
#line 4580 "src/sql/server/sql_parser.y"
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

  case 812:
#line 4596 "src/sql/server/sql_parser.y"
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

  case 814:
#line 4613 "src/sql/server/sql_parser.y"
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

  case 815:
#line 4630 "src/sql/server/sql_parser.y"
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

  case 816:
#line 4647 "src/sql/server/sql_parser.y"
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

  case 817:
#line 4664 "src/sql/server/sql_parser.y"
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

  case 818:
#line 4685 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
    break;

  case 819:
#line 4689 "src/sql/server/sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
    break;

  case 820:
#line 4695 "src/sql/server/sql_parser.y"
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

  case 821:
#line 4740 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 822:
#line 4741 "src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (3)].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 823:
#line 4745 "src/sql/server/sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (5)].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[(1) - (5)].sval)), 
						(yyvsp[(3) - (5)].sval)), 
					(yyvsp[(5) - (5)].sval))
				;}
    break;

  case 824:
#line 4756 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 825:
#line 4759 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 826:
#line 4764 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[(1) - (5)].sval)), (yyvsp[(3) - (5)].sval)), (yyvsp[(5) - (5)].sval));}
    break;

  case 827:
#line 4772 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 828:
#line 4778 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 830:
#line 4790 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[(3) - (6)].sym)), (yyvsp[(5) - (6)].sym))); }
    break;

  case 831:
#line 4795 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[(3) - (4)].l)); }
    break;

  case 832:
#line 4797 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (5)].sym)),(yyvsp[(3) - (5)].l)),(yyvsp[(4) - (5)].sym))); }
    break;

  case 833:
#line 4803 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[(2) - (4)].l)),(yyvsp[(3) - (4)].sym))); }
    break;

  case 834:
#line 4811 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 835:
#line 4813 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 836:
#line 4818 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (3)].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[(3) - (3)].sym));
			}
    break;

  case 837:
#line 4822 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 838:
#line 4828 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 839:
#line 4836 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 840:
#line 4838 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 841:
#line 4843 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 842:
#line 4851 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 843:
#line 4853 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 844:
#line 4857 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 845:
#line 4858 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 847:
#line 4868 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 848:
#line 4879 "src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 849:
#line 4889 "src/sql/server/sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 850:
#line 4899 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 851:
#line 4910 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
    break;

  case 852:
#line 4912 "src/sql/server/sql_parser.y"
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
    break;

  case 853:
#line 4916 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
    break;

  case 854:
#line 4918 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 855:
#line 4920 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 856:
#line 4922 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
    break;

  case 857:
#line 4930 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
    break;

  case 858:
#line 4932 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
    break;

  case 859:
#line 4940 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
    break;

  case 860:
#line 4941 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
    break;

  case 861:
#line 4942 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
    break;

  case 862:
#line 4943 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
    break;

  case 863:
#line 4944 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
    break;

  case 864:
#line 4946 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
    break;

  case 865:
#line 4948 "src/sql/server/sql_parser.y"
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

  case 866:
#line 4961 "src/sql/server/sql_parser.y"
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

  case 867:
#line 4978 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 868:
#line 4980 "src/sql/server/sql_parser.y"
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

  case 869:
#line 4994 "src/sql/server/sql_parser.y"
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

  case 870:
#line 5013 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 871:
#line 5014 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 872:
#line 5015 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
    break;

  case 875:
#line 5018 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 876:
#line 5020 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 877:
#line 5021 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 878:
#line 5023 "src/sql/server/sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 879:
#line 5025 "src/sql/server/sql_parser.y"
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

  case 880:
#line 5036 "src/sql/server/sql_parser.y"
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

  case 881:
#line 5051 "src/sql/server/sql_parser.y"
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

  case 882:
#line 5064 "src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometry", 0, 0 )) {
			yyerror(m, "\b22000!type (geometry) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 883:
#line 5071 "src/sql/server/sql_parser.y"
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

  case 884:
#line 5086 "src/sql/server/sql_parser.y"
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

  case 885:
#line 5101 "src/sql/server/sql_parser.y"
    {
		if (!sql_find_subtype(&(yyval.type), "geometrya", 0, 0 )) {
			yyerror(m, "\b22000!type (geometrya) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
    break;

  case 886:
#line 5108 "src/sql/server/sql_parser.y"
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

  case 887:
#line 5128 "src/sql/server/sql_parser.y"
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

  case 888:
#line 5140 "src/sql/server/sql_parser.y"
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

  case 889:
#line 5156 "src/sql/server/sql_parser.y"
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

  case 890:
#line 5170 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 891:
#line 5171 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (2)].sval); }
    break;

  case 892:
#line 5175 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 893:
#line 5176 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 894:
#line 5177 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 895:
#line 5180 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 896:
#line 5181 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 899:
#line 5189 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 900:
#line 5190 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 901:
#line 5191 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 902:
#line 5192 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 903:
#line 5193 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 904:
#line 5194 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 905:
#line 5198 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 906:
#line 5199 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 907:
#line 5200 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 908:
#line 5201 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 909:
#line 5202 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 910:
#line 5203 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 911:
#line 5204 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 913:
#line 5209 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "large"); }
    break;

  case 914:
#line 5210 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "name"); }
    break;

  case 915:
#line 5211 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "object"); }
    break;

  case 916:
#line 5212 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "password"); }
    break;

  case 917:
#line 5213 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "path"); }
    break;

  case 918:
#line 5214 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "precision"); }
    break;

  case 919:
#line 5215 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
    break;

  case 920:
#line 5216 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "role"); }
    break;

  case 921:
#line 5217 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "size"); }
    break;

  case 922:
#line 5218 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "type"); }
    break;

  case 923:
#line 5219 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "release"); }
    break;

  case 924:
#line 5220 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "value"); }
    break;

  case 925:
#line 5221 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "zone"); }
    break;

  case 926:
#line 5223 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "action"); }
    break;

  case 927:
#line 5224 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "as"); }
    break;

  case 928:
#line 5225 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
    break;

  case 929:
#line 5226 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "column"); }
    break;

  case 930:
#line 5227 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
    break;

  case 931:
#line 5228 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
    break;

  case 932:
#line 5229 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "increment"); }
    break;

  case 933:
#line 5230 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
    break;

  case 934:
#line 5231 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
    break;

  case 935:
#line 5232 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "plan"); }
    break;

  case 936:
#line 5233 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "schema"); }
    break;

  case 937:
#line 5234 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "start"); }
    break;

  case 938:
#line 5235 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "statement"); }
    break;

  case 939:
#line 5236 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "table"); }
    break;

  case 940:
#line 5238 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cache"); }
    break;

  case 941:
#line 5239 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "data"); }
    break;

  case 942:
#line 5240 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
    break;

  case 943:
#line 5241 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "match"); }
    break;

  case 944:
#line 5242 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "options"); }
    break;

  case 945:
#line 5243 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "row"); }
    break;

  case 946:
#line 5244 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "key"); }
    break;

  case 947:
#line 5245 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "language"); }
    break;

  case 948:
#line 5246 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "level"); }
    break;

  case 949:
#line 5247 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "session"); }
    break;

  case 950:
#line 5248 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "date"); }
    break;

  case 951:
#line 5249 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "time"); }
    break;

  case 952:
#line 5250 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
    break;

  case 953:
#line 5251 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "interval"); }
    break;

  case 954:
#line 5252 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
    break;

  case 955:
#line 5254 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
    break;

  case 956:
#line 5255 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "execute"); }
    break;

  case 957:
#line 5256 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "explain"); }
    break;

  case 958:
#line 5257 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "debug"); }
    break;

  case 959:
#line 5258 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "trace"); }
    break;

  case 960:
#line 5259 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "text"); }
    break;

  case 961:
#line 5260 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
    break;

  case 962:
#line 5261 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "no"); }
    break;

  case 963:
#line 5263 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "strip"); }
    break;

  case 964:
#line 5264 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
    break;

  case 965:
#line 5265 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "passing"); }
    break;

  case 966:
#line 5266 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "nil"); }
    break;

  case 967:
#line 5267 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "ref"); }
    break;

  case 968:
#line 5268 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "absent"); }
    break;

  case 969:
#line 5269 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "empty"); }
    break;

  case 970:
#line 5270 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "document"); }
    break;

  case 971:
#line 5271 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "element"); }
    break;

  case 972:
#line 5272 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "content"); }
    break;

  case 973:
#line 5273 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
    break;

  case 974:
#line 5274 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "returning"); }
    break;

  case 975:
#line 5275 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "location"); }
    break;

  case 976:
#line 5276 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "id"); }
    break;

  case 977:
#line 5277 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "according"); }
    break;

  case 978:
#line 5278 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "uri"); }
    break;

  case 979:
#line 5279 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "filter"); }
    break;

  case 980:
#line 5280 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
    break;

  case 981:
#line 5281 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temp"); }
    break;

  case 982:
#line 5282 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
    break;

  case 983:
#line 5283 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
    break;

  case 984:
#line 5284 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "storage"); }
    break;

  case 985:
#line 5285 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
    break;

  case 986:
#line 5286 "src/sql/server/sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "replace"); }
    break;

  case 987:
#line 5290 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 988:
#line 5292 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 989:
#line 5297 "src/sql/server/sql_parser.y"
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

  case 990:
#line 5320 "src/sql/server/sql_parser.y"
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

  case 991:
#line 5340 "src/sql/server/sql_parser.y"
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

  case 992:
#line 5373 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 993:
#line 5375 "src/sql/server/sql_parser.y"
    { char *s = strconcat((yyvsp[(1) - (2)].sval),(yyvsp[(2) - (2)].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
    break;

  case 994:
#line 5383 "src/sql/server/sql_parser.y"
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 995:
#line 5390 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (3)].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 996:
#line 5395 "src/sql/server/sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (4)].i_val));
  	  append_list(l, (yyvsp[(3) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 997:
#line 5409 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 999:
#line 5414 "src/sql/server/sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[(2) - (2)].l)); }
    break;

  case 1002:
#line 5425 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1003:
#line 5427 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1015:
#line 5449 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
    break;

  case 1016:
#line 5457 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
    break;

  case 1017:
#line 5465 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
    break;

  case 1018:
#line 5475 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_list(l, (yyvsp[(5) - (7)].l));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
    break;

  case 1019:
#line 5485 "src/sql/server/sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 1020:
#line 5487 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1021:
#line 5491 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1022:
#line 5495 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (6)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (6)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(6) - (6)].l)); }
    break;

  case 1023:
#line 5499 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1024:
#line 5503 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1025:
#line 5507 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1026:
#line 5511 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(2) - (2)].l)); }
    break;

  case 1028:
#line 5521 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1029:
#line 5525 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1030:
#line 5527 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1031:
#line 5537 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (2)].sval));
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1032:
#line 5544 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1033:
#line 5545 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1036:
#line 5558 "src/sql/server/sql_parser.y"
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[(1) - (2)].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[(2) - (2)].i_val)); 	}
    break;

  case 1037:
#line 5565 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1038:
#line 5567 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1040:
#line 5575 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1041:
#line 5576 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 1042:
#line 5580 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1043:
#line 5581 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1044:
#line 5582 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1045:
#line 5583 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 1046:
#line 5584 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 1047:
#line 5591 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (7)].sym));
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_int(l, (yyvsp[(5) - (7)].i_val));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
    break;

  case 1048:
#line 5601 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1049:
#line 5602 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 1050:
#line 5607 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 1051:
#line 5609 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 1052:
#line 5614 "src/sql/server/sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (2)].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[(2) - (2)].sval)); }
    break;

  case 1053:
#line 5619 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1054:
#line 5623 "src/sql/server/sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1055:
#line 5624 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1056:
#line 5628 "src/sql/server/sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1057:
#line 5635 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_int(l, (yyvsp[(3) - (6)].i_val) );
	  append_symbol(l, (yyvsp[(4) - (6)].sym));
	  append_int(l, (yyvsp[(5) - (6)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
    break;

  case 1058:
#line 5642 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1059:
#line 5643 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1060:
#line 5650 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_symbol(l, (yyvsp[(5) - (7)].sym));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
    break;

  case 1062:
#line 5662 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1063:
#line 5664 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1064:
#line 5675 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1079:
#line 5721 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
    break;

  case 1080:
#line 5732 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1082:
#line 5737 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1083:
#line 5741 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1084:
#line 5742 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1085:
#line 5746 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1086:
#line 5747 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1087:
#line 5748 "src/sql/server/sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1088:
#line 5763 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1089:
#line 5767 "src/sql/server/sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1090:
#line 5769 "src/sql/server/sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1095:
#line 5792 "src/sql/server/sql_parser.y"
    { char *s = strconcat("xmlns:", (yyvsp[(3) - (3)].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1096:
#line 5801 "src/sql/server/sql_parser.y"
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1097:
#line 5805 "src/sql/server/sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1127:
#line 5901 "src/sql/server/sql_parser.y"
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
#line 14148 "src/sql/server/sql_parser.tab.c"
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


#line 5922 "src/sql/server/sql_parser.y"

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


