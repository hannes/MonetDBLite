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
     INDEX = 557,
     AS = 558,
     TRIGGER = 559,
     OF = 560,
     BEFORE = 561,
     AFTER = 562,
     ROW = 563,
     STATEMENT = 564,
     sqlNEW = 565,
     OLD = 566,
     EACH = 567,
     REFERENCING = 568,
     OVER = 569,
     PARTITION = 570,
     CURRENT = 571,
     EXCLUDE = 572,
     FOLLOWING = 573,
     PRECEDING = 574,
     OTHERS = 575,
     TIES = 576,
     RANGE = 577,
     UNBOUNDED = 578
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
#define INDEX 557
#define AS 558
#define TRIGGER 559
#define OF 560
#define BEFORE 561
#define AFTER 562
#define ROW 563
#define STATEMENT 564
#define sqlNEW 565
#define OLD 566
#define EACH 567
#define REFERENCING 568
#define OVER 569
#define PARTITION 570
#define CURRENT 571
#define EXCLUDE 572
#define FOLLOWING 573
#define PRECEDING 574
#define OTHERS 575
#define TIES 576
#define RANGE 577
#define UNBOUNDED 578




/* Copy the first part of user declarations.  */
#line 9 "sql_parser.y"

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
#line 111 "sql_parser.y"
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
#line 851 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 121 "sql_parser.y"

extern int sqllex( YYSTYPE *yylval, void *m );
/* enable to activate debugging support
int yydebug=1;
*/


/* Line 216 of yacc.c.  */
#line 870 "y.tab.c"

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
#define YYLAST   15050

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  342
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  403
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1104
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2035

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   578

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   205,   191,     2,
     170,   171,   203,   189,   336,   190,   337,   204,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   338,     2,
       2,   174,     2,   341,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   339,     2,   340,   193,     2,     2,     2,     2,     2,
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
     327,   328,   329,   330,   331,   332,   333,   334,   335
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
    1425,  1429,  1430,  1431,  1435,  1449,  1463,  1472,  1479,  1486,
    1487,  1491,  1493,  1497,  1499,  1502,  1503,  1507,  1513,  1521,
    1522,  1524,  1525,  1528,  1531,  1536,  1541,  1542,  1546,  1547,
    1549,  1550,  1553,  1554,  1557,  1559,  1563,  1565,  1569,  1574,
    1580,  1585,  1591,  1592,  1595,  1598,  1600,  1604,  1610,  1612,
    1616,  1618,  1622,  1624,  1626,  1628,  1630,  1632,  1633,  1635,
    1637,  1639,  1643,  1647,  1651,  1652,  1655,  1659,  1664,  1669,
    1674,  1679,  1685,  1691,  1693,  1696,  1698,  1700,  1702,  1704,
    1707,  1710,  1712,  1716,  1720,  1722,  1729,  1731,  1733,  1735,
    1740,  1747,  1753,  1755,  1759,  1761,  1767,  1773,  1779,  1783,
    1785,  1786,  1788,  1790,  1791,  1793,  1799,  1801,  1806,  1807,
    1810,  1812,  1816,  1818,  1821,  1824,  1826,  1828,  1831,  1833,
    1835,  1836,  1842,  1848,  1851,  1856,  1858,  1859,  1863,  1865,
    1869,  1870,  1873,  1877,  1879,  1883,  1885,  1886,  1890,  1891,
    1894,  1897,  1898,  1901,  1904,  1905,  1908,  1911,  1914,  1916,
    1920,  1923,  1924,  1926,  1928,  1930,  1932,  1934,  1936,  1938,
    1940,  1942,  1944,  1946,  1949,  1951,  1955,  1959,  1966,  1973,
    1974,  1976,  1978,  1982,  1986,  1990,  1994,  1996,  2000,  2005,
    2009,  2015,  2021,  2029,  2037,  2039,  2043,  2048,  2050,  2052,
    2054,  2057,  2059,  2063,  2067,  2071,  2075,  2080,  2084,  2086,
    2090,  2094,  2098,  2102,  2106,  2110,  2114,  2118,  2122,  2126,
    2130,  2134,  2138,  2142,  2146,  2150,  2154,  2158,  2163,  2166,
    2170,  2174,  2178,  2182,  2185,  2188,  2192,  2194,  2196,  2198,
    2200,  2202,  2204,  2206,  2208,  2210,  2212,  2217,  2219,  2221,
    2223,  2225,  2227,  2229,  2231,  2233,  2239,  2243,  2245,  2249,
    2250,  2254,  2255,  2259,  2260,  2264,  2266,  2268,  2270,  2272,
    2275,  2277,  2280,  2283,  2288,  2291,  2293,  2296,  2299,  2300,
    2304,  2307,  2310,  2314,  2317,  2321,  2326,  2328,  2332,  2334,
    2336,  2338,  2340,  2347,  2350,  2353,  2356,  2359,  2362,  2363,
    2366,  2375,  2384,  2391,  2398,  2405,  2409,  2418,  2420,  2424,
    2426,  2430,  2434,  2437,  2438,  2441,  2443,  2445,  2449,  2451,
    2455,  2457,  2461,  2466,  2473,  2479,  2485,  2490,  2497,  2499,
    2501,  2503,  2504,  2508,  2509,  2513,  2514,  2518,  2519,  2521,
    2525,  2529,  2531,  2533,  2535,  2537,  2539,  2541,  2543,  2546,
    2548,  2551,  2554,  2557,  2561,  2563,  2566,  2568,  2570,  2572,
    2574,  2576,  2578,  2580,  2582,  2584,  2587,  2592,  2597,  2599,
    2602,  2605,  2608,  2611,  2613,  2615,  2620,  2622,  2626,  2632,
    2634,  2638,  2644,  2651,  2658,  2660,  2667,  2672,  2678,  2683,
    2685,  2689,  2693,  2697,  2702,  2704,  2707,  2712,  2714,  2717,
    2718,  2721,  2723,  2725,  2727,  2729,  2731,  2733,  2735,  2737,
    2739,  2741,  2746,  2751,  2756,  2758,  2763,  2765,  2767,  2769,
    2771,  2773,  2775,  2780,  2787,  2789,  2794,  2801,  2803,  2806,
    2808,  2810,  2812,  2814,  2819,  2821,  2826,  2833,  2835,  2840,
    2842,  2847,  2854,  2856,  2858,  2860,  2862,  2864,  2866,  2869,
    2871,  2873,  2877,  2879,  2883,  2885,  2887,  2889,  2891,  2893,
    2895,  2897,  2899,  2901,  2903,  2905,  2907,  2909,  2911,  2913,
    2915,  2917,  2919,  2921,  2923,  2925,  2927,  2929,  2931,  2933,
    2935,  2937,  2939,  2941,  2943,  2945,  2947,  2949,  2951,  2953,
    2955,  2957,  2959,  2961,  2963,  2965,  2967,  2969,  2971,  2973,
    2975,  2977,  2979,  2981,  2983,  2985,  2987,  2989,  2991,  2993,
    2995,  2997,  2999,  3001,  3003,  3005,  3007,  3009,  3011,  3013,
    3015,  3017,  3019,  3021,  3023,  3025,  3027,  3029,  3031,  3033,
    3035,  3037,  3039,  3041,  3043,  3045,  3047,  3049,  3051,  3053,
    3055,  3057,  3059,  3061,  3063,  3067,  3069,  3071,  3073,  3075,
    3077,  3080,  3083,  3087,  3092,  3093,  3095,  3098,  3100,  3102,
    3104,  3108,  3110,  3112,  3114,  3116,  3118,  3120,  3122,  3124,
    3126,  3128,  3130,  3136,  3142,  3148,  3156,  3157,  3160,  3165,
    3172,  3177,  3180,  3185,  3188,  3190,  3195,  3197,  3201,  3204,
    3205,  3208,  3210,  3212,  3215,  3217,  3221,  3223,  3224,  3227,
    3231,  3235,  3239,  3243,  3248,  3256,  3257,  3260,  3262,  3266,
    3269,  3271,  3272,  3275,  3277,  3284,  3287,  3290,  3298,  3300,
    3301,  3304,  3313,  3315,  3316,  3320,  3322,  3324,  3328,  3330,
    3332,  3335,  3340,  3341,  3343,  3347,  3351,  3357,  3364,  3366,
    3368,  3370,  3372,  3373,  3376,  3379,  3384,  3386,  3390,  3392,
    3394,  3396,  3398,  3402,  3405,  3408,  3409,  3411,  3414,  3417,
    3418,  3420,  3426,  3428,  3430,  3434,  3438,  3440,  3442,  3443,
    3446,  3448,  3451,  3453,  3454,  3456,  3458,  3461,  3462,  3464,
    3467,  3470,  3473,  3475,  3477
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     343,     0,    -1,   354,   130,    -1,    -1,   244,   344,   354,
     130,    -1,    -1,   240,   345,   354,   130,    -1,    -1,   239,
     346,   354,   130,    -1,    -1,   243,   347,   354,   130,    -1,
      -1,   241,   348,   343,    -1,    -1,   242,   349,   343,    -1,
     665,   130,    -1,    -1,   130,    -1,     1,   130,    -1,    51,
      -1,   226,    -1,   248,    -1,   270,    -1,   234,    -1,   359,
      -1,   368,    -1,   373,    -1,   390,    -1,   487,    -1,   385,
      -1,   356,    -1,   358,    -1,   237,   630,   440,   561,   355,
      -1,   452,    -1,    -1,   238,    -1,   353,   357,    -1,   353,
     402,    -1,   434,   649,    -1,   357,   336,   434,   649,    -1,
     352,   658,   174,   522,    -1,   352,    63,   223,   658,    -1,
     352,   269,   658,    -1,   352,   627,   174,   658,    -1,   352,
     256,   658,    -1,   352,   283,   292,    58,    -1,   352,   283,
     292,   629,    -1,   350,   269,   360,   362,   667,   363,    -1,
     351,   269,   630,   490,    -1,   658,    -1,   223,   361,    -1,
     658,   223,   361,    -1,   658,    -1,    -1,   246,    20,   270,
     658,    -1,    -1,   364,    -1,   365,    -1,   364,   365,    -1,
     368,    -1,   373,    -1,   390,    -1,   487,    -1,   385,    -1,
      -1,   169,   257,   367,    -1,    56,    -1,    62,    -1,   254,
     376,   277,   383,   370,   372,    -1,   254,   369,   277,   383,
     371,   372,    -1,   656,    -1,   369,   336,   656,    -1,    -1,
     169,   254,   262,    -1,    -1,   169,   257,   262,    -1,    -1,
     108,   367,    -1,   255,   374,   376,   108,   383,   372,    -1,
     255,   375,   369,   108,   383,   372,    -1,    -1,   254,   262,
     109,    -1,    -1,   257,   262,   109,    -1,   377,    -1,   380,
     261,   379,    -1,   378,    -1,   378,   336,   378,    -1,   309,
     108,    -1,   309,   258,    -1,   275,   630,    -1,   630,    -1,
     486,    -1,   186,   266,    -1,   186,    -1,   381,    -1,   382,
      -1,   381,   336,   382,    -1,    67,    -1,    64,    -1,    65,
     440,    -1,    66,   440,    -1,   268,   440,    -1,   245,    -1,
     384,    -1,   383,   336,   384,    -1,   267,    -1,   656,    -1,
     273,   275,   630,   274,   389,   409,    -1,   273,   275,   630,
     274,   275,   630,    -1,   273,   275,   630,   273,   387,    -1,
     273,   275,   630,   248,   388,    -1,   273,   275,   630,   270,
      87,    89,    -1,   273,   275,   630,   270,    67,    89,    -1,
     273,   275,   630,   270,    87,    88,    -1,   273,    55,   658,
     386,    -1,   273,    55,   658,   250,   277,   658,    -1,   273,
      55,   270,   400,   253,   664,    16,   323,   253,   664,    -1,
     169,   400,   253,   664,    -1,   270,   269,   658,    -1,   169,
     400,   253,   664,   270,   269,   658,    -1,   389,   658,   270,
     246,   419,    -1,   389,   658,   270,   107,    -1,   389,   658,
     270,   173,   107,    -1,   389,   658,   248,   246,    -1,   389,
     658,   270,    98,     3,    -1,   389,   658,   270,    98,   107,
      -1,   389,   658,   490,    -1,   225,   658,   490,    -1,   275,
     658,   490,    -1,   276,    -1,    -1,   350,   399,    -1,   350,
     402,    -1,   350,   436,    -1,   442,    -1,   444,    -1,   397,
      -1,   391,    -1,   473,    -1,   350,   112,   630,   392,    -1,
     351,   112,   630,    -1,   273,   112,   630,   393,    -1,   394,
      -1,   392,   394,    -1,   395,    -1,   393,   395,    -1,   315,
     649,    -1,    85,   169,   646,    -1,   396,    -1,   315,   649,
      -1,   114,    -1,   114,   169,   646,    -1,   114,   169,   581,
      -1,   396,    -1,   113,   102,   644,    -1,   116,   644,    -1,
     119,    -1,   115,   644,    -1,   118,    -1,   123,   644,    -1,
     117,    -1,   120,    -1,   350,   398,   314,   658,   261,   630,
     170,   434,   171,    -1,   278,    -1,    -1,   256,   658,   366,
      -1,    55,   658,   169,   400,   253,   664,   233,   664,   269,
     658,    -1,    -1,   252,    -1,   251,    -1,    -1,    98,   658,
       3,    -1,   275,   630,   405,   401,    -1,   217,   275,   630,
     405,    -1,   218,   275,   630,   405,    -1,   220,   275,   630,
     405,    -1,   219,   275,   630,   405,   261,     3,    -1,   403,
     275,   630,   405,   404,    -1,   216,    -1,   215,    -1,    58,
     216,    -1,    58,   215,    -1,    17,   216,    -1,    17,   215,
      -1,    -1,   261,    76,    64,    84,    -1,   261,    76,    83,
      84,    -1,   261,    76,   248,    -1,   170,   408,   171,    -1,
     406,    -1,   440,   315,   437,   407,    -1,    -1,   169,    82,
     168,    -1,   169,   168,    -1,   410,    -1,   408,   336,   410,
      -1,   412,    -1,   423,    -1,   409,    -1,   415,    -1,   435,
      -1,   127,    -1,   128,    -1,   655,   649,   413,    -1,   655,
     411,    -1,    -1,   414,    -1,   417,    -1,   414,   417,    -1,
     658,   169,   263,   170,   416,   171,    -1,   417,    -1,   416,
     336,   417,    -1,   418,    -1,   420,    -1,   421,    -1,   246,
     419,    -1,   582,    -1,   424,   431,    -1,   124,   125,   315,
     126,   422,    -1,   129,    -1,    -1,   170,   392,   171,    -1,
     424,   432,    -1,    -1,   225,   658,    -1,    82,    41,    -1,
      42,    -1,    43,    -1,   270,   107,    -1,   270,   246,    -1,
     261,    65,   425,    -1,   261,    64,   425,    -1,    -1,   426,
      -1,   427,    -1,   427,   426,    -1,   426,   427,    -1,    -1,
      70,    -1,    39,    -1,    40,    -1,    -1,   110,   429,    -1,
     173,   107,    -1,   107,    -1,   278,    -1,   265,   260,    -1,
     268,   630,   440,   430,   428,    -1,   433,    -1,   278,   441,
      -1,   265,   260,   441,    -1,   249,   260,   441,   268,   630,
     440,   430,   428,    -1,   224,   170,   556,   171,    -1,   658,
      -1,   434,   336,   658,    -1,   179,   630,    -1,   280,   630,
     440,   315,   437,   439,    -1,   438,    -1,   170,   437,   171,
      -1,   539,    -1,   533,    -1,    -1,   169,   224,   262,    -1,
      -1,   441,    -1,   170,   434,   171,    -1,   350,   227,   630,
     232,   233,   658,    -1,   658,   337,   658,    -1,   350,   229,
     630,   170,   471,   171,   231,   470,   232,   233,   443,    -1,
     350,   229,   630,   170,   471,   171,   231,   470,   445,    -1,
     350,   229,   630,   170,   471,   171,   231,   470,   236,     5,
       4,    -1,   350,   162,   229,   630,   170,   471,   171,   232,
     233,   443,    -1,   350,   230,   630,   170,   471,   171,   231,
     470,   232,   233,   443,    -1,   350,   230,   630,   170,   471,
     171,   231,   470,   236,     5,     4,    -1,   350,   228,   630,
     170,   471,   171,   232,   233,   443,    -1,   350,   228,   630,
     170,   471,   171,   445,    -1,   448,    -1,   307,   446,   448,
     130,   308,    -1,   307,   306,   446,   448,   130,   308,    -1,
      -1,   446,   448,   130,    -1,    -1,   447,   449,   130,    -1,
     492,    -1,   491,    -1,   359,    -1,   368,    -1,   373,    -1,
     390,    -1,   487,    -1,   385,    -1,   356,    -1,   358,    -1,
     450,    -1,   538,    -1,   492,    -1,   491,    -1,   368,    -1,
     373,    -1,   356,    -1,   358,    -1,   450,    -1,   538,    -1,
     452,    -1,   451,    -1,   466,    -1,   464,    -1,   458,    -1,
     456,    -1,   235,   453,    -1,   235,   601,    -1,   454,   170,
     455,   171,    -1,   630,    -1,    -1,   583,    -1,   455,   336,
     583,    -1,   272,   457,    -1,   438,    -1,   556,    -1,   275,
     170,   438,   171,    -1,   296,   583,   460,   463,   308,   296,
      -1,   296,   462,   463,   308,   296,    -1,   297,   583,   298,
     446,    -1,   459,    -1,   460,   459,    -1,   297,   556,   298,
     446,    -1,   461,    -1,   462,   461,    -1,    -1,   299,   446,
      -1,   302,   556,   298,   446,   465,   308,   302,    -1,    -1,
     299,   446,    -1,   303,   556,   298,   446,   465,    -1,   467,
     304,   556,   305,   446,   308,   304,   468,    -1,    -1,   658,
     338,    -1,    -1,   658,    -1,   655,   649,    -1,   469,   336,
     655,   649,    -1,   275,   170,   469,   171,    -1,   649,    -1,
     472,    -1,   203,    -1,    -1,   472,   336,   658,   649,    -1,
     658,   649,    -1,   350,   316,   630,   474,   475,   261,   658,
     476,   481,    -1,   318,    -1,   319,    -1,    67,    -1,    64,
      -1,    65,    -1,    65,   317,   434,    -1,    -1,   325,   477,
      -1,   478,    -1,   477,   478,    -1,   323,   480,   479,   658,
      -1,   322,   480,   479,   658,    -1,   323,   275,   479,   658,
      -1,   322,   275,   479,   658,    -1,    -1,   315,    -1,    -1,
     320,    -1,   482,   484,   485,    -1,    -1,   109,   324,   483,
      -1,   320,    -1,   321,    -1,    -1,   297,   556,    -1,   449,
      -1,   307,   306,   447,   308,    -1,   229,   630,   488,    -1,
     162,   229,   630,   488,    -1,   230,   630,   488,    -1,   228,
     630,   488,    -1,   351,   275,   630,   490,    -1,   351,   486,
     490,    -1,   351,   186,   229,   630,   490,    -1,   351,   186,
     162,   229,   630,   490,    -1,   351,   186,   230,   630,   490,
      -1,   351,   186,   228,   630,   490,    -1,   351,   280,   630,
     490,    -1,   351,   227,   630,   490,    -1,   351,   256,   658,
      -1,   351,    55,   658,    -1,   351,   314,   630,    -1,   351,
     316,   630,    -1,    -1,   170,   489,   171,    -1,   170,   171,
      -1,   649,    -1,   649,   336,   489,    -1,    -1,    43,    -1,
      42,    -1,   492,    -1,   491,    -1,   514,    -1,   516,    -1,
     515,    -1,   501,    -1,   493,    -1,    76,   498,   499,    -1,
      78,   658,    -1,    79,    78,   658,    -1,    77,   498,   499,
     500,    -1,    85,    86,   494,    -1,   270,    58,    86,   494,
      -1,   270,    86,   494,    -1,    -1,   495,    -1,   496,    -1,
     495,   336,   496,    -1,    87,    89,    -1,    87,    88,    -1,
      90,    91,   497,    -1,    96,    97,   663,    -1,    87,    92,
      -1,    87,    93,    -1,    94,    87,    -1,    95,    -1,    80,
      -1,    -1,   187,    81,    -1,   187,    82,    81,    -1,    -1,
      -1,   277,    78,   658,    -1,   309,   507,   258,   630,   440,
     108,   512,   502,   505,   508,   509,   510,   511,    -1,   309,
     507,   258,   630,   440,   108,   312,   502,   505,   508,   509,
     510,   511,    -1,   309,   507,    27,   258,   630,   108,   512,
     511,    -1,   309,   437,   258,   664,   505,   508,    -1,   309,
     437,   258,   313,   505,   508,    -1,    -1,   170,   503,   171,
      -1,   504,    -1,   503,   336,   504,    -1,   658,    -1,   658,
       3,    -1,    -1,   506,   311,   664,    -1,   506,   311,   664,
     336,   664,    -1,   506,   311,   664,   336,   664,   336,   664,
      -1,    -1,    16,    -1,    -1,   646,   310,    -1,   294,   646,
      -1,   646,   294,   646,   310,    -1,   646,   310,   294,   646,
      -1,    -1,   107,   479,   664,    -1,    -1,    59,    -1,    -1,
      60,    61,    -1,    -1,    82,   225,    -1,   513,    -1,   170,
     513,   171,    -1,   664,    -1,   513,   336,   664,    -1,    64,
     108,   630,   528,    -1,    65,   630,   270,   526,   528,    -1,
      67,   258,   630,   517,    -1,    67,   258,   630,   441,   517,
      -1,    -1,   246,   279,    -1,   279,   518,    -1,   438,    -1,
     170,   519,   171,    -1,   518,   336,   170,   519,   171,    -1,
     523,    -1,   519,   336,   523,    -1,   524,    -1,   520,   336,
     524,    -1,   107,    -1,   583,    -1,   522,    -1,   522,    -1,
     542,    -1,    -1,   186,    -1,   247,    -1,   527,    -1,   526,
     336,   527,    -1,   655,   174,   556,    -1,   441,   174,   581,
      -1,    -1,   281,   556,    -1,   170,   529,   171,    -1,   550,
      73,    74,   550,    -1,   550,   163,   550,   532,    -1,   550,
      74,   550,   532,    -1,   550,    72,    74,   550,    -1,   550,
     530,    74,   550,   532,    -1,   550,    72,   530,    74,   550,
      -1,    75,    -1,   531,    71,    -1,   531,    -1,    68,    -1,
      69,    -1,    70,    -1,   261,   556,    -1,    16,   441,    -1,
     533,    -1,   169,   534,   536,    -1,   534,   336,   535,    -1,
     535,    -1,   658,   440,   315,   170,   536,   171,    -1,   539,
      -1,   538,    -1,   539,    -1,    66,   525,   545,   546,    -1,
      66,   525,   545,   258,   540,   546,    -1,   542,   558,   559,
     560,   561,    -1,   541,    -1,   540,   336,   541,    -1,   658,
      -1,   542,   167,   543,   544,   542,    -1,   542,   166,   543,
     544,   542,    -1,   542,   165,   543,   544,   542,    -1,   170,
     542,   171,    -1,   537,    -1,    -1,   186,    -1,   247,    -1,
      -1,   164,    -1,   164,   102,   170,   554,   171,    -1,   607,
      -1,   547,   528,   553,   555,    -1,    -1,   108,   548,    -1,
     550,    -1,   548,   336,   550,    -1,   630,    -1,   630,   552,
      -1,   601,   552,    -1,   601,    -1,   549,    -1,   581,   552,
      -1,   581,    -1,   529,    -1,    -1,   339,   551,   542,   340,
     552,    -1,   315,   658,   170,   660,   171,    -1,   315,   658,
      -1,   658,   170,   660,   171,    -1,   658,    -1,    -1,   106,
     102,   554,    -1,   631,    -1,   554,   336,   631,    -1,    -1,
     105,   556,    -1,   557,   176,   556,    -1,   557,    -1,   566,
     187,   557,    -1,   566,    -1,    -1,   101,   102,   562,    -1,
      -1,   293,   645,    -1,   293,   585,    -1,    -1,   294,   647,
      -1,   294,   585,    -1,    -1,   295,   647,    -1,   295,    14,
      -1,   295,   585,    -1,   563,    -1,   562,   336,   563,    -1,
     583,   564,    -1,    -1,   221,    -1,   222,    -1,   567,    -1,
     568,    -1,   570,    -1,   572,    -1,   573,    -1,   575,    -1,
     577,    -1,   580,    -1,   583,    -1,   173,   566,    -1,   565,
      -1,   566,   188,   566,    -1,   566,   174,   566,    -1,   566,
     184,   569,   566,   187,   566,    -1,   566,   183,   569,   566,
     187,   566,    -1,    -1,    99,    -1,   100,    -1,   566,   180,
     571,    -1,   566,   178,   571,    -1,   566,   179,   571,    -1,
     566,   177,   571,    -1,   583,    -1,   583,   104,   664,    -1,
     583,   259,   173,   107,    -1,   583,   259,   107,    -1,   566,
     182,   170,   520,   171,    -1,   566,   181,   170,   520,   171,
      -1,   170,   574,   171,   182,   170,   520,   171,    -1,   170,
     574,   171,   181,   170,   520,   171,    -1,   566,    -1,   574,
     336,   566,    -1,   566,   188,   576,   581,    -1,   185,    -1,
     175,    -1,   186,    -1,   103,   581,    -1,   566,    -1,   578,
     336,   566,    -1,   339,   578,   340,    -1,   579,   630,   579,
      -1,   170,   542,   171,    -1,   170,   279,   518,   171,    -1,
     170,   533,   171,    -1,   584,    -1,   583,   189,   583,    -1,
     583,   190,   583,    -1,   583,   203,   583,    -1,   583,   204,
     583,    -1,   583,   205,   583,    -1,   583,   193,   583,    -1,
     583,   191,   583,    -1,   583,   210,   583,    -1,   583,   207,
     583,    -1,   583,   214,   583,    -1,   583,   208,   583,    -1,
     583,   213,   583,    -1,   583,   209,   583,    -1,   583,   212,
     583,    -1,   583,   211,   583,    -1,   583,   131,   583,    -1,
     583,   192,   583,    -1,   583,   206,   583,    -1,   583,   206,
     174,   583,    -1,   206,   583,    -1,   583,   201,   583,    -1,
     583,   200,   583,    -1,   583,   199,   583,    -1,   583,   198,
     583,    -1,   189,   583,    -1,   190,   583,    -1,   170,   556,
     171,    -1,   582,    -1,   581,    -1,   610,    -1,   627,    -1,
      62,    -1,   586,    -1,   631,    -1,   600,    -1,   614,    -1,
     601,    -1,   121,   122,   109,   630,    -1,   604,    -1,   606,
      -1,   634,    -1,   632,    -1,   673,    -1,   585,    -1,   521,
      -1,   341,    -1,   587,   326,   170,   588,   171,    -1,   611,
     170,   171,    -1,   614,    -1,   589,   590,   591,    -1,    -1,
     327,   102,   554,    -1,    -1,   101,   102,   562,    -1,    -1,
     592,   593,   599,    -1,    84,    -1,   334,    -1,   594,    -1,
     596,    -1,   335,   331,    -1,   595,    -1,   328,   320,    -1,
     584,   331,    -1,   183,   594,   187,   597,    -1,   335,   330,
      -1,   598,    -1,   328,   320,    -1,   584,   331,    -1,    -1,
     329,   328,   320,    -1,   329,   106,    -1,   329,   333,    -1,
     329,    82,   332,    -1,   131,   658,    -1,   602,   170,   171,
      -1,   602,   170,   635,   171,    -1,   603,    -1,   658,   337,
     603,    -1,   658,    -1,    68,    -1,    69,    -1,    67,    -1,
     111,   170,   621,   108,   583,   171,    -1,    46,   605,    -1,
      48,   605,    -1,    47,   605,    -1,    50,   605,    -1,    49,
     605,    -1,    -1,   170,   171,    -1,   196,   170,   583,   108,
     583,   109,   583,   171,    -1,   196,   170,   583,   336,   583,
     336,   583,   171,    -1,   196,   170,   583,   108,   583,   171,
      -1,   196,   170,   583,   336,   583,   171,    -1,   195,   170,
     583,   181,   583,   171,    -1,   583,   197,   583,    -1,   194,
     170,   583,   336,   583,   336,   583,   171,    -1,   608,    -1,
     607,   336,   608,    -1,   203,    -1,   658,   337,   203,    -1,
     601,   337,   203,    -1,   556,   609,    -1,    -1,   315,   658,
      -1,   628,    -1,    10,    -1,   658,   337,    10,    -1,     8,
      -1,   658,   337,     8,    -1,     9,    -1,   658,   337,     9,
      -1,   612,   170,   203,   171,    -1,   612,   170,   658,   337,
     203,   171,    -1,   612,   170,   247,   642,   171,    -1,   612,
     170,   186,   642,   171,    -1,   612,   170,   642,   171,    -1,
     613,   170,   642,   336,   642,   171,    -1,   744,    -1,   189,
      -1,   190,    -1,    -1,   169,   283,   292,    -1,    -1,   170,
     663,   171,    -1,    -1,   170,   663,   171,    -1,    -1,   282,
      -1,   283,   617,   616,    -1,   284,   618,   616,    -1,   286,
      -1,   287,    -1,   288,    -1,   289,    -1,   290,    -1,   620,
      -1,   291,    -1,   620,   617,    -1,   620,    -1,   291,   618,
      -1,   620,   617,    -1,   291,   618,    -1,   622,   277,   623,
      -1,   624,    -1,   285,   625,    -1,    55,    -1,    57,    -1,
      56,    -1,   664,    -1,    13,    -1,    12,    -1,    11,    -1,
      14,    -1,    15,    -1,   282,   664,    -1,   283,   617,   616,
     664,    -1,   284,   618,   616,   664,    -1,   629,    -1,   654,
     664,    -1,     6,   664,    -1,   651,   664,    -1,     5,   664,
      -1,    44,    -1,    45,    -1,   285,   615,   664,   625,    -1,
     658,    -1,   658,   337,   658,    -1,   658,   337,   658,   337,
     658,    -1,   658,    -1,   658,   337,   658,    -1,   658,   337,
     658,   337,   658,    -1,    18,   170,   633,   315,   649,   171,
      -1,    19,   170,   633,   336,   649,   171,    -1,   556,    -1,
     300,   170,   583,   336,   583,   171,    -1,   301,   170,   636,
     171,    -1,   296,   583,   638,   641,   308,    -1,   296,   640,
     641,   308,    -1,   522,    -1,   635,   336,   522,    -1,   522,
     336,   522,    -1,   636,   336,   522,    -1,   297,   583,   298,
     522,    -1,   637,    -1,   638,   637,    -1,   297,   556,   298,
     522,    -1,   639,    -1,   640,   639,    -1,    -1,   299,   583,
      -1,   583,    -1,   663,    -1,   662,    -1,   661,    -1,   662,
      -1,   661,    -1,   663,    -1,    20,    -1,   652,    -1,   653,
      -1,    20,   170,   643,   171,    -1,   652,   170,   643,   171,
      -1,   653,   170,   643,   171,    -1,   654,    -1,   654,   170,
     643,   171,    -1,    31,    -1,    32,    -1,    35,    -1,    33,
      -1,    34,    -1,    29,    -1,    29,   170,   643,   171,    -1,
      29,   170,   643,   336,   648,   171,    -1,    30,    -1,    30,
     170,   643,   171,    -1,    30,   170,   663,   336,   663,   171,
      -1,    36,    -1,    36,    38,    -1,    37,    -1,   619,    -1,
     626,    -1,     6,    -1,     6,   170,   643,   171,    -1,   651,
      -1,   651,   170,   643,   171,    -1,   651,   170,   663,   336,
     663,   171,    -1,     5,    -1,     5,   170,   643,   171,    -1,
      52,    -1,    52,   170,   650,   171,    -1,    52,   170,   650,
     336,   663,   171,    -1,    54,    -1,    53,    -1,    53,    -1,
     664,    -1,     7,    -1,    24,    -1,    20,    21,    -1,    25,
      -1,    26,    -1,    20,    22,    23,    -1,    28,    -1,    27,
      22,    23,    -1,   658,    -1,   657,    -1,     5,    -1,     6,
      -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,     5,
      -1,     6,    -1,   172,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,   659,    -1,    22,    -1,   233,    -1,    23,
      -1,   253,    -1,   264,    -1,    38,    -1,   266,    -1,   256,
      -1,    97,    -1,   227,    -1,    79,    -1,   122,    -1,   292,
      -1,    41,    -1,   315,    -1,   223,    -1,   276,    -1,   117,
      -1,   247,    -1,   113,    -1,   115,    -1,   116,    -1,   240,
      -1,   269,    -1,    85,    -1,   321,    -1,   275,    -1,   123,
      -1,   168,    -1,    96,    -1,   110,    -1,   263,    -1,   320,
      -1,   260,    -1,   236,    -1,    91,    -1,    63,    -1,   282,
      -1,   283,    -1,   284,    -1,   285,    -1,   244,    -1,   245,
      -1,   239,    -1,   243,    -1,   241,    -1,   242,    -1,    26,
      -1,   271,    -1,    82,    -1,   139,    -1,   140,    -1,   143,
      -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,   149,
      -1,   150,    -1,   151,    -1,   153,    -1,   155,    -1,   156,
      -1,   157,    -1,   158,    -1,   160,    -1,   162,    -1,   216,
      -1,   215,    -1,   237,    -1,   238,    -1,    98,    -1,    52,
      -1,   658,    -1,   660,   336,   658,    -1,   662,    -1,    11,
      -1,    11,    -1,     5,    -1,     3,    -1,     3,   664,    -1,
     245,   666,    -1,   663,   170,   171,    -1,   663,   170,   520,
     171,    -1,    -1,   668,    -1,   264,   669,    -1,   660,    -1,
     672,    -1,   670,    -1,   671,   336,   670,    -1,   583,    -1,
     674,    -1,   675,    -1,   676,    -1,   677,    -1,   691,    -1,
     698,    -1,   700,    -1,   703,    -1,   713,    -1,   714,    -1,
     132,   170,   584,   717,   171,    -1,   133,   170,   671,   717,
     171,    -1,   134,   170,   670,   717,   171,    -1,   135,   170,
     233,   679,   678,   717,   171,    -1,    -1,   336,   718,    -1,
     336,   718,   336,   680,    -1,   336,   718,   336,   680,   336,
     686,    -1,   336,   718,   336,   686,    -1,   336,   680,    -1,
     336,   680,   336,   686,    -1,   336,   686,    -1,   658,    -1,
     136,   170,   681,   171,    -1,   682,    -1,   681,   336,   682,
      -1,   684,   683,    -1,    -1,   315,   685,    -1,   583,    -1,
     658,    -1,   687,   689,    -1,   688,    -1,   687,   336,   688,
      -1,   583,    -1,    -1,   262,   690,    -1,   107,   261,   107,
      -1,   148,   261,   107,    -1,   147,   261,   107,    -1,   145,
     261,   107,    -1,   145,   261,    82,   151,    -1,   137,   170,
     692,   693,   689,   717,   171,    -1,    -1,   718,   336,    -1,
     694,    -1,   693,   336,   694,    -1,   695,   696,    -1,   583,
      -1,    -1,   315,   697,    -1,   658,    -1,   138,   170,   716,
     584,   699,   171,    -1,    83,   140,    -1,   139,   140,    -1,
     141,   170,   233,   701,   702,   717,   171,    -1,   658,    -1,
      -1,   336,   584,    -1,   142,   170,   704,   705,   717,   711,
     712,   171,    -1,     3,    -1,    -1,   143,   706,   707,    -1,
     726,    -1,   708,    -1,   707,   336,   708,    -1,   709,    -1,
     710,    -1,   584,   725,    -1,   584,   315,   658,   725,    -1,
      -1,   726,    -1,   107,   261,   148,    -1,   148,   261,   148,
      -1,   144,   170,   584,   717,   171,    -1,   154,   170,   715,
     670,   727,   171,    -1,   716,    -1,   112,    -1,   149,    -1,
     151,    -1,    -1,   155,   151,    -1,   155,   112,    -1,   152,
     170,   719,   171,    -1,   720,    -1,   719,   336,   720,    -1,
     723,    -1,   724,    -1,   658,    -1,   583,    -1,   722,   315,
     721,    -1,   246,   722,    -1,    82,   246,    -1,    -1,   726,
      -1,   102,   146,    -1,   102,   122,    -1,    -1,   728,    -1,
     158,   277,   159,   729,   737,    -1,   730,    -1,   735,    -1,
     160,   731,   733,    -1,    82,   153,   733,    -1,   732,    -1,
       3,    -1,    -1,   156,   734,    -1,   732,    -1,   157,   736,
      -1,   658,    -1,    -1,   738,    -1,   740,    -1,   741,   739,
      -1,    -1,   740,    -1,   150,   743,    -1,    82,   153,    -1,
     153,   742,    -1,   732,    -1,   658,    -1,   161,   170,   670,
     558,   717,   171,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   617,   617,   628,   628,   642,   642,   657,   657,   672,
     672,   687,   687,   697,   697,   703,   704,   705,   706,   707,
     712,   715,   718,   721,   725,   726,   727,   728,   729,   730,
     731,   732,   733,   740,   744,   745,   749,   751,   755,   760,
     768,   773,   781,   789,   797,   805,   811,   819,   827,   835,
     839,   843,   850,   853,   854,   858,   859,   863,   864,   868,
     868,   868,   868,   868,   871,   872,   876,   877,   881,   890,
     901,   902,   907,   908,   912,   913,   918,   919,   923,   931,
     941,   942,   946,   947,   951,   955,   962,   963,   968,   969,
     973,   974,   975,   986,   987,   988,   992,   993,   998,   999,
    1000,  1001,  1002,  1003,  1007,  1008,  1013,  1014,  1020,  1026,
    1031,  1036,  1041,  1046,  1051,  1056,  1061,  1066,  1079,  1085,
    1091,  1101,  1106,  1110,  1114,  1116,  1124,  1132,  1137,  1142,
    1150,  1151,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,
    1178,  1189,  1206,  1216,  1217,  1221,  1222,  1226,  1227,  1228,
    1232,  1233,  1234,  1235,  1236,  1240,  1241,  1242,  1243,  1244,
    1245,  1246,  1247,  1254,  1264,  1265,  1285,  1290,  1301,  1302,
    1303,  1307,  1308,  1312,  1323,  1333,  1343,  1356,  1366,  1381,
    1382,  1383,  1384,  1385,  1386,  1390,  1391,  1392,  1393,  1397,
    1398,  1402,  1412,  1413,  1414,  1418,  1420,  1424,  1424,  1425,
    1425,  1425,  1428,  1429,  1433,  1441,  1494,  1495,  1499,  1501,
    1506,  1515,  1517,  1521,  1521,  1521,  1524,  1528,  1532,  1541,
    1570,  1608,  1609,  1614,  1625,  1626,  1630,  1631,  1632,  1633,
    1634,  1638,  1642,  1646,  1647,  1648,  1649,  1650,  1654,  1655,
    1656,  1657,  1661,  1662,  1666,  1667,  1668,  1669,  1670,  1680,
    1684,  1686,  1688,  1703,  1707,  1709,  1714,  1718,  1730,  1731,
    1735,  1736,  1740,  1741,  1745,  1746,  1750,  1754,  1762,  1766,
    1779,  1792,  1817,  1830,  1843,  1869,  1881,  1896,  1898,  1902,
    1920,  1921,  1926,  1927,  1932,  1933,  1934,  1935,  1936,  1937,
    1938,  1939,  1940,  1941,  1942,  1943,  1947,  1948,  1949,  1950,
    1951,  1952,  1953,  1954,  1958,  1959,  1960,  1961,  1962,  1963,
    1976,  1980,  1984,  1993,  1996,  1997,  1998,  2004,  2008,  2009,
    2010,  2015,  2021,  2029,  2037,  2039,  2044,  2052,  2054,  2059,
    2060,  2067,  2081,  2082,  2084,  2095,  2116,  2117,  2121,  2122,
    2127,  2131,  2139,  2141,  2146,  2147,  2151,  2155,  2160,  2209,
    2223,  2224,  2228,  2229,  2230,  2231,  2235,  2236,  2240,  2241,
    2247,  2248,  2249,  2250,  2253,  2255,  2258,  2260,  2264,  2272,
    2273,  2277,  2278,  2282,  2283,  2287,  2289,  2295,  2301,  2307,
    2313,  2322,  2327,  2332,  2340,  2348,  2356,  2364,  2369,  2374,
    2375,  2376,  2377,  2381,  2382,  2383,  2387,  2390,  2395,  2396,
    2397,  2402,  2403,  2408,  2409,  2410,  2411,  2415,  2422,  2424,
    2426,  2428,  2432,  2434,  2436,  2441,  2442,  2446,  2448,  2454,
    2455,  2456,  2457,  2461,  2462,  2463,  2464,  2468,  2469,  2473,
    2474,  2475,  2479,  2480,  2484,  2497,  2510,  2520,  2527,  2537,
    2538,  2542,  2543,  2547,  2551,  2560,  2564,  2569,  2574,  2583,
    2584,  2588,  2589,  2590,  2591,  2593,  2598,  2599,  2603,  2604,
    2608,  2609,  2613,  2614,  2618,  2619,  2623,  2624,  2629,  2638,
    2679,  2687,  2698,  2699,  2701,  2703,  2708,  2709,  2714,  2715,
    2720,  2721,  2726,  2743,  2747,  2751,  2752,  2756,  2757,  2758,
    2762,  2763,  2768,  2773,  2781,  2782,  2788,  2790,  2796,  2804,
    2812,  2820,  2828,  2839,  2840,  2841,  2845,  2846,  2847,  2851,
    2852,  2872,  2876,  2886,  2887,  2891,  2903,  2908,  2910,  2914,
    2925,  2936,  2967,  2968,  2973,  2977,  2986,  2995,  3003,  3004,
    3008,  3009,  3010,  3015,  3016,  3018,  3023,  3027,  3037,  3038,
    3042,  3043,  3048,  3052,  3056,  3060,  3067,  3068,  3078,  3083,
    3093,  3092,  3105,  3110,  3115,  3120,  3128,  3129,  3133,  3135,
    3141,  3142,  3147,  3152,  3156,  3161,  3165,  3166,  3171,  3172,
    3176,  3180,  3181,  3185,  3189,  3190,  3194,  3198,  3202,  3203,
    3208,  3217,  3218,  3219,  3223,  3224,  3225,  3226,  3227,  3228,
    3229,  3230,  3231,  3235,  3252,  3256,  3263,  3273,  3280,  3290,
    3291,  3292,  3296,  3303,  3310,  3317,  3327,  3331,  3349,  3350,
    3354,  3360,  3366,  3371,  3379,  3381,  3386,  3397,  3398,  3399,
    3403,  3407,  3408,  3412,  3416,  3425,  3426,  3428,  3434,  3435,
    3442,  3449,  3456,  3463,  3470,  3477,  3484,  3491,  3498,  3505,
    3512,  3518,  3525,  3532,  3539,  3546,  3553,  3560,  3567,  3573,
    3580,  3587,  3594,  3601,  3603,  3628,  3632,  3633,  3637,  3638,
    3640,  3642,  3643,  3644,  3645,  3646,  3647,  3648,  3649,  3650,
    3651,  3652,  3653,  3654,  3658,  3728,  3734,  3735,  3739,  3744,
    3745,  3750,  3751,  3756,  3757,  3762,  3763,  3767,  3768,  3772,
    3773,  3774,  3778,  3782,  3787,  3788,  3789,  3793,  3797,  3798,
    3799,  3800,  3801,  3805,  3809,  3813,  3841,  3842,  3847,  3848,
    3849,  3850,  3854,  3861,  3866,  3871,  3876,  3881,  3889,  3890,
    3894,  3904,  3914,  3921,  3928,  3935,  3942,  3955,  3956,  3961,
    3966,  3971,  3976,  3984,  3985,  3989,  4011,  4012,  4017,  4018,
    4023,  4024,  4030,  4036,  4042,  4048,  4054,  4060,  4067,  4071,
    4072,  4073,  4077,  4078,  4089,  4091,  4095,  4097,  4101,  4102,
    4108,  4117,  4118,  4119,  4120,  4121,  4125,  4126,  4130,  4136,
    4139,  4145,  4148,  4154,  4157,  4162,  4182,  4183,  4184,  4188,
    4194,  4258,  4289,  4340,  4379,  4396,  4412,  4428,  4444,  4445,
    4462,  4479,  4496,  4517,  4521,  4528,  4573,  4574,  4578,  4589,
    4592,  4596,  4604,  4610,  4618,  4622,  4627,  4629,  4635,  4643,
    4645,  4650,  4654,  4660,  4668,  4670,  4675,  4683,  4685,  4690,
    4691,  4695,  4700,  4711,  4722,  4733,  4743,  4753,  4763,  4765,
    4770,  4771,  4773,  4775,  4784,  4785,  4794,  4795,  4796,  4797,
    4798,  4800,  4801,  4814,  4832,  4833,  4847,  4867,  4868,  4869,
    4870,  4871,  4872,  4873,  4875,  4876,  4878,  4890,  4904,  4918,
    4921,  4936,  4951,  4954,  4974,  4986,  5001,  5016,  5017,  5021,
    5022,  5023,  5026,  5027,  5030,  5032,  5035,  5036,  5037,  5038,
    5039,  5040,  5044,  5045,  5046,  5047,  5048,  5049,  5050,  5051,
    5055,  5056,  5057,  5058,  5059,  5060,  5061,  5062,  5063,  5064,
    5065,  5066,  5067,  5069,  5070,  5071,  5072,  5073,  5074,  5075,
    5076,  5077,  5078,  5079,  5080,  5081,  5082,  5084,  5085,  5086,
    5087,  5088,  5089,  5090,  5091,  5092,  5093,  5094,  5095,  5096,
    5097,  5099,  5100,  5101,  5102,  5103,  5104,  5105,  5106,  5107,
    5109,  5110,  5111,  5112,  5113,  5114,  5115,  5116,  5117,  5118,
    5119,  5120,  5121,  5122,  5123,  5124,  5125,  5126,  5127,  5128,
    5129,  5130,  5131,  5135,  5136,  5141,  5159,  5181,  5201,  5233,
    5235,  5243,  5250,  5255,  5270,  5271,  5275,  5278,  5281,  5285,
    5287,  5292,  5296,  5297,  5298,  5299,  5300,  5301,  5302,  5303,
    5304,  5305,  5309,  5317,  5325,  5332,  5346,  5347,  5351,  5355,
    5359,  5363,  5367,  5371,  5378,  5382,  5386,  5387,  5397,  5405,
    5406,  5410,  5414,  5418,  5425,  5427,  5432,  5436,  5437,  5441,
    5442,  5443,  5444,  5445,  5449,  5462,  5463,  5467,  5469,  5474,
    5480,  5484,  5485,  5489,  5494,  5503,  5504,  5508,  5519,  5523,
    5524,  5529,  5539,  5542,  5544,  5548,  5552,  5553,  5557,  5558,
    5562,  5566,  5569,  5571,  5575,  5576,  5580,  5588,  5597,  5598,
    5602,  5603,  5607,  5608,  5609,  5624,  5628,  5629,  5639,  5640,
    5644,  5648,  5652,  5662,  5666,  5669,  5671,  5675,  5676,  5679,
    5681,  5685,  5690,  5691,  5695,  5696,  5700,  5704,  5707,  5709,
    5713,  5717,  5721,  5724,  5726,  5730,  5731,  5735,  5737,  5741,
    5745,  5746,  5750,  5754,  5758
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
  "STDOUT", "INDEX", "AS", "TRIGGER", "OF", "BEFORE", "AFTER", "ROW",
  "STATEMENT", "sqlNEW", "OLD", "EACH", "REFERENCING", "OVER", "PARTITION",
  "CURRENT", "EXCLUDE", "FOLLOWING", "PRECEDING", "OTHERS", "TIES",
  "RANGE", "UNBOUNDED", "','", "'.'", "':'", "'['", "']'", "'?'",
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
  "table_ref", "@7", "table_name", "opt_group_by_clause",
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
     573,   574,   575,   576,   577,   578,    44,    46,    58,    91,
      93,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   342,   343,   344,   343,   345,   343,   346,   343,   347,
     343,   348,   343,   349,   343,   343,   343,   343,   343,   343,
     350,   351,   352,   353,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   355,   355,   356,   356,   357,   357,
     358,   358,   358,   358,   358,   358,   358,   359,   359,   360,
     360,   360,   361,   362,   362,   363,   363,   364,   364,   365,
     365,   365,   365,   365,   366,   366,   367,   367,   368,   368,
     369,   369,   370,   370,   371,   371,   372,   372,   373,   373,
     374,   374,   375,   375,   376,   376,   377,   377,   378,   378,
     379,   379,   379,   380,   380,   380,   381,   381,   382,   382,
     382,   382,   382,   382,   383,   383,   384,   384,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   386,   386,
     386,   387,   387,   387,   387,   387,   387,   388,   388,   388,
     389,   389,   390,   390,   390,   390,   390,   390,   390,   390,
     391,   391,   391,   392,   392,   393,   393,   394,   394,   394,
     395,   395,   395,   395,   395,   396,   396,   396,   396,   396,
     396,   396,   396,   397,   398,   398,   399,   399,   400,   400,
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
     444,   444,   444,   444,   444,   444,   444,   445,   445,   445,
     446,   446,   447,   447,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   449,   449,   449,   449,
     449,   449,   449,   449,   450,   450,   450,   450,   450,   450,
     451,   452,   453,   454,   455,   455,   455,   456,   457,   457,
     457,   458,   458,   459,   460,   460,   461,   462,   462,   463,
     463,   464,   465,   465,   465,   466,   467,   467,   468,   468,
     469,   469,   470,   470,   471,   471,   471,   472,   472,   473,
     474,   474,   475,   475,   475,   475,   476,   476,   477,   477,
     478,   478,   478,   478,   479,   479,   480,   480,   481,   482,
     482,   483,   483,   484,   484,   485,   485,   486,   486,   486,
     486,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   488,   488,   488,   489,   489,   490,   490,
     490,   354,   354,   491,   491,   491,   491,   492,   493,   493,
     493,   493,   493,   493,   493,   494,   494,   495,   495,   496,
     496,   496,   496,   497,   497,   497,   497,   498,   498,   499,
     499,   499,   500,   500,   501,   501,   501,   501,   501,   502,
     502,   503,   503,   504,   504,   505,   505,   505,   505,   506,
     506,   507,   507,   507,   507,   507,   508,   508,   509,   509,
     510,   510,   511,   511,   512,   512,   513,   513,   514,   515,
     516,   516,   517,   517,   517,   517,   518,   518,   519,   519,
     520,   520,   521,   522,   523,   524,   524,   525,   525,   525,
     526,   526,   527,   527,   528,   528,   529,   529,   529,   529,
     529,   529,   529,   530,   530,   530,   531,   531,   531,   532,
     532,   354,   533,   534,   534,   535,   536,   354,   354,   537,
     538,   539,   540,   540,   541,   542,   542,   542,   542,   542,
     543,   543,   543,   544,   544,   544,   545,   546,   547,   547,
     548,   548,   549,   549,   549,   549,   550,   550,   550,   550,
     551,   550,   552,   552,   552,   552,   553,   553,   554,   554,
     555,   555,   556,   556,   557,   557,   558,   558,   559,   559,
     559,   560,   560,   560,   561,   561,   561,   561,   562,   562,
     563,   564,   564,   564,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   566,   566,   567,   567,   568,   568,   569,
     569,   569,   570,   570,   570,   570,   571,   571,   572,   572,
     573,   573,   573,   573,   574,   574,   575,   576,   576,   576,
     577,   578,   578,   579,   580,   581,   581,   581,   582,   582,
     582,   582,   582,   582,   582,   582,   582,   582,   582,   582,
     582,   582,   582,   582,   582,   582,   582,   582,   582,   582,
     582,   582,   582,   582,   582,   582,   583,   583,   584,   584,
     584,   584,   584,   584,   584,   584,   584,   584,   584,   584,
     584,   584,   584,   584,   585,   586,   587,   587,   588,   589,
     589,   590,   590,   591,   591,   592,   592,   593,   593,   594,
     594,   594,   595,   596,   597,   597,   597,   598,   599,   599,
     599,   599,   599,   600,   601,   601,   602,   602,   603,   603,
     603,   603,   604,   604,   604,   604,   604,   604,   605,   605,
     606,   606,   606,   606,   606,   606,   606,   607,   607,   608,
     608,   608,   608,   609,   609,   610,   611,   611,   612,   612,
     613,   613,   614,   614,   614,   614,   614,   614,   614,   615,
     615,   615,   616,   616,   617,   617,   618,   618,   619,   619,
     619,   620,   620,   620,   620,   620,   621,   621,   622,   623,
     623,   624,   624,   625,   625,   626,   627,   627,   627,   628,
     628,   628,   628,   628,   628,   628,   628,   628,   628,   628,
     628,   628,   628,   628,   628,   629,   630,   630,   630,   631,
     631,   631,   632,   632,   633,   634,   634,   634,   634,   635,
     635,   636,   636,   637,   638,   638,   639,   640,   640,   641,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   649,
     649,   649,   649,   649,   649,   649,   649,   649,   649,   649,
     649,   649,   649,   649,   649,   649,   649,   649,   649,   649,
     649,   649,   649,   649,   649,   649,   649,   649,   649,   649,
     649,   649,   649,   649,   650,   650,   651,   652,   652,   653,
     653,   653,   654,   654,   655,   656,   657,   657,   657,   657,
     657,   657,   658,   658,   658,   658,   658,   658,   658,   658,
     659,   659,   659,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   660,   660,   661,   662,   663,   663,   664,
     664,   665,   666,   666,   667,   667,   668,   669,   670,   671,
     671,   672,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   674,   675,   676,   677,   678,   678,   678,   678,
     678,   678,   678,   678,   679,   680,   681,   681,   682,   683,
     683,   684,   685,   686,   687,   687,   688,   689,   689,   690,
     690,   690,   690,   690,   691,   692,   692,   693,   693,   694,
     695,   696,   696,   697,   698,   699,   699,   700,   701,   702,
     702,   703,   704,   705,   705,   706,   707,   707,   708,   708,
     709,   710,   711,   711,   712,   712,   713,   714,   715,   715,
     716,   716,   717,   717,   717,   718,   719,   719,   720,   720,
     721,   722,   723,   724,   724,   725,   725,   726,   726,   727,
     727,   728,   729,   729,   730,   730,   731,   732,   733,   733,
     734,   735,   736,   737,   737,   738,   738,   739,   739,   740,
     741,   741,   742,   743,   744
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
       3,     0,     0,     3,    13,    13,     8,     6,     6,     0,
       3,     1,     3,     1,     2,     0,     3,     5,     7,     0,
       1,     0,     2,     2,     4,     4,     0,     3,     0,     1,
       0,     2,     0,     2,     1,     3,     1,     3,     4,     5,
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
       5,     5,     7,     7,     1,     3,     4,     1,     1,     1,
       2,     1,     3,     3,     3,     3,     4,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     2,     3,
       3,     3,     3,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     3,     1,     3,     0,
       3,     0,     3,     0,     3,     1,     1,     1,     1,     2,
       1,     2,     2,     4,     2,     1,     2,     2,     0,     3,
       2,     2,     3,     2,     3,     4,     1,     3,     1,     1,
       1,     1,     6,     2,     2,     2,     2,     2,     0,     2,
       8,     8,     6,     6,     6,     3,     8,     1,     3,     1,
       3,     3,     2,     0,     2,     1,     1,     3,     1,     3,
       1,     3,     4,     6,     5,     5,     4,     6,     1,     1,
       1,     0,     3,     0,     3,     0,     3,     0,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     2,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     4,     1,     2,
       2,     2,     2,     1,     1,     4,     1,     3,     5,     1,
       3,     5,     6,     6,     1,     6,     4,     5,     4,     1,
       3,     3,     3,     4,     1,     2,     4,     1,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     1,     4,     1,     1,     1,     1,
       1,     1,     4,     6,     1,     4,     6,     1,     2,     1,
       1,     1,     1,     4,     1,     4,     6,     1,     4,     1,
       4,     6,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
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
       0,     0,    19,     0,     0,   487,     0,   428,   428,     0,
       0,     0,    17,     0,     0,    20,    23,     0,     0,     7,
       5,    11,    13,     9,     3,     0,    21,     0,    80,    22,
       0,   451,     0,   165,     0,     0,     0,     0,    30,    31,
      24,    25,    26,    29,    27,   138,   137,   135,   136,    33,
     139,    28,   402,   401,   407,   406,   403,   405,   404,   511,
     529,   517,   518,   566,     0,    18,     0,   882,   883,   885,
     886,   887,   888,   890,   892,   937,   895,   903,   962,   926,
     900,   939,   914,   925,   919,   898,   961,   920,   909,   910,
     911,   907,   901,   917,   940,   941,   942,   943,   944,   945,
     946,   947,   948,   949,   950,   951,   952,   953,   954,   955,
     956,   918,   884,   958,   957,   905,   899,   891,   924,   959,
     960,   933,   912,   935,   936,   934,   931,   932,   908,   893,
     897,   923,   921,   894,   896,   913,   938,   916,   906,   927,
     928,   929,   930,   902,   904,   922,   915,     0,   796,   889,
     488,   489,     0,     0,   427,   431,   431,   409,     0,   415,
       0,   514,   264,   487,     0,   711,   709,   710,   311,     0,
     706,   708,   264,     0,     0,     0,     0,     0,     0,   968,
     967,     0,   971,   876,   877,   878,   879,   880,   881,    99,
     264,   264,    98,    94,   103,   264,     0,     0,     0,    84,
      86,     0,    95,    96,    70,   875,     0,     0,     0,     0,
       0,   415,     0,     0,     0,   966,     0,     0,     0,   258,
       0,   261,   260,     0,   825,     1,     0,     0,     0,     0,
       0,   180,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,     0,     0,     0,   132,   133,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,   776,   778,   777,
     926,   897,   913,   928,     0,     0,   958,   957,   916,    36,
      37,     0,   254,     2,     0,   530,   530,   530,   568,    15,
     494,     0,     0,   969,   882,   883,   885,   886,   887,   888,
     782,   781,   780,   783,   784,     0,     0,     0,   872,   793,
     794,   718,   718,   718,   718,   718,   660,     0,   482,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     729,     0,   927,   928,   929,   930,     0,     0,     0,     0,
     674,   673,   538,   733,   563,   594,   565,   584,   585,   586,
     587,   588,   589,   590,     0,   591,   657,   656,   592,   628,
     672,   661,     0,   663,   665,   667,   668,   536,   727,   658,
       0,     0,     0,   664,   659,   735,   788,   662,   670,   669,
       0,     0,   799,   779,   671,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   748,   472,     0,   408,   432,
     410,     0,     0,     0,   412,   416,   417,     0,   512,   516,
       0,     0,   265,     0,   528,     0,     0,   574,     0,     0,
      12,    14,     0,     0,     0,   100,   101,    93,   102,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   415,   414,   168,     0,     0,     0,     0,   566,   453,
       0,     0,     0,     0,   452,   184,   183,     0,   182,   181,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,   905,    53,    49,   264,   264,     0,     0,     0,   390,
     141,     0,     0,     0,     0,     0,   398,   393,   393,   393,
     389,   398,   398,   398,   391,   392,   400,   399,   382,     0,
      44,    42,     0,     0,     0,     0,   857,   852,   866,   828,
     867,   869,   870,   841,   844,   836,   837,   839,   840,   838,
     847,   849,   859,   863,   862,   758,   755,   757,     0,     0,
     850,   851,    38,   854,   829,   830,   834,     0,   531,   532,
     533,   533,   533,     0,   571,     0,   468,     0,   494,   490,
       0,   874,   797,   970,   792,   790,     0,     0,     0,     0,
     713,   715,   714,   717,   716,     0,   620,     0,     0,   703,
       0,     0,     0,     0,  1025,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   565,     0,   665,   799,
     593,     0,   653,   654,     0,     0,     0,   648,   785,     0,
     753,     0,   753,   749,   750,     0,     0,     0,   817,   819,
       0,     0,   621,     0,     0,     0,   519,   494,     0,   732,
       0,     0,     0,     0,     0,     0,     0,     0,   599,   599,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   791,   789,     0,     0,     0,     0,   475,
     472,   470,   429,     0,     0,   411,   420,   419,     0,     0,
       0,   513,     0,     0,   538,   704,   809,   483,     0,   707,
     708,     0,    34,     8,     6,    10,     4,     0,   972,     0,
     485,   480,   486,   106,    74,   104,   107,    71,    72,    87,
     956,   916,    85,    92,    91,    97,    81,    83,     0,     0,
     413,   170,   169,     0,   168,     0,     0,   115,     0,   151,
       0,     0,   161,   159,   157,   162,     0,     0,   142,   145,
     154,   131,     0,   131,   131,   259,   445,   445,     0,   264,
       0,     0,   168,     0,     0,   140,   143,   149,     0,   264,
     264,   264,   264,     0,   346,   346,   346,     0,   166,    50,
      52,     0,   974,     0,   224,   171,   190,     0,     0,   350,
     351,     0,     0,   264,   393,     0,   398,   398,   398,   388,
       0,   380,   377,   379,    48,   381,   387,    41,    45,   751,
      46,    43,    40,     0,     0,     0,   868,     0,     0,     0,
       0,   848,     0,   753,   753,   761,   762,   763,   764,   765,
     757,   755,     0,   774,   775,   255,     0,     0,     0,     0,
     567,   578,   581,   534,     0,     0,     0,   570,   569,   824,
     965,     0,   574,   495,     0,     0,   469,     0,     0,   804,
       0,     0,   873,   719,   767,   766,     0,     0,     0,   628,
     981,   979,  1062,   978,  1062,     0,     0,     0,     0,  1060,
    1061,     0,     0,  1042,  1043,   628,  1059,     0,  1058,   566,
       0,     0,     0,   627,   625,   655,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     814,   819,     0,   818,     0,     0,     0,     0,     0,   623,
       0,   550,   549,   539,   546,   540,   548,   545,   542,   796,
     538,   522,   524,   556,   734,   562,   596,   605,   606,   603,
     604,   602,     0,     0,   600,   601,     0,     0,   564,   618,
     617,   619,   595,     0,   624,   644,   629,   630,   635,   645,
     634,   725,   652,   651,   650,   649,   631,   632,   633,     0,
     646,   637,   639,   641,   636,   643,   642,   640,   638,   609,
       0,   679,   731,   728,   676,     0,     0,   908,   821,     0,
     799,     0,   886,   887,   888,   730,   800,   473,   474,   471,
     430,     0,     0,     0,   426,   421,   422,   418,   266,     0,
     705,     0,   576,   577,   575,   826,    35,    32,   973,     0,
       0,     0,    76,     0,    76,    90,    76,    76,     0,     0,
       0,     0,     0,     0,   158,   823,   156,   160,   150,   146,
       0,     0,   130,   111,     0,     0,     0,   110,     0,     0,
     224,   450,   456,     0,   456,     0,     0,   454,   455,     0,
       0,   147,   144,   346,   174,   175,     0,   176,     0,   345,
       0,   344,     0,     0,     0,     0,     0,     0,    55,   975,
      51,     0,     0,     0,   199,   195,   197,   200,   198,     0,
     201,     0,   874,     0,   173,     0,     0,   353,   354,   352,
       0,     0,   185,   378,   398,   386,   383,   385,   395,     0,
     396,    39,     0,   822,     0,   871,     0,     0,     0,   822,
     864,     0,   865,   759,   760,   772,   771,     0,     0,   822,
       0,     0,     0,     0,   582,   583,   580,     0,   527,   526,
     525,   573,   572,   521,   493,   491,   492,   798,     0,     0,
       0,   666,     0,     0,     0,     0,     0,  1004,   996,     0,
    1030,  1017,  1027,  1031,  1026,   628,  1038,  1039,     0,  1062,
       0,  1079,  1062,   625,     0,   484,   478,   626,     0,     0,
       0,   615,     0,     0,     0,     0,   754,     0,   786,   756,
     787,   795,     0,     0,   815,     0,   820,   808,     0,     0,
     806,     0,   622,     0,   549,     0,     0,     0,   506,   507,
     508,     0,     0,     0,   503,     0,     0,   505,   904,   547,
     555,   544,   543,     0,     0,   520,     0,   560,     0,     0,
       0,     0,     0,   616,   647,   608,     0,     0,   681,     0,
     742,     0,   746,     0,     0,     0,   433,   423,   424,   425,
       0,   810,   481,     0,   105,     0,    69,     0,    68,    78,
      79,     0,     0,   116,   119,   155,   153,   152,   398,   398,
     398,   113,   114,   112,     0,   109,   108,   364,   438,     0,
     437,     0,     0,     0,   148,     0,     0,   267,   336,     0,
     348,     0,     0,    66,    67,    65,     0,   963,   977,   976,
     165,     0,    47,    56,    57,    59,    60,    63,    61,    62,
     256,   225,   189,   224,     0,     0,     0,   223,   202,   203,
     205,   206,     0,     0,   192,   262,     0,     0,     0,     0,
     178,   384,   394,     0,   858,   853,   831,   842,     0,   845,
       0,   860,     0,   757,   769,   773,   855,     0,   832,   833,
     835,   579,     0,     0,     0,     0,  1064,  1063,   992,   980,
     993,   994,     0,  1062,   939,     0,  1071,     0,  1066,     0,
    1068,  1069,     0,     0,  1062,     0,  1029,     0,     0,     0,
       0,  1062,     0,     0,  1045,  1052,  1056,     0,     0,  1080,
       0,   476,     0,     0,     0,     0,     0,     0,     0,     0,
     752,   816,     0,   807,     0,   811,   812,   496,     0,   541,
       0,     0,     0,     0,     0,     0,   504,   553,     0,   797,
     523,     0,     0,   537,   607,   611,   610,     0,     0,     0,
     675,     0,   683,   745,   744,     0,     0,   801,   515,    75,
      77,    73,     0,   118,   128,   129,   127,     0,     0,   365,
       0,   446,     0,   462,   464,   466,   439,   439,     0,     0,
     177,   487,   900,   914,     0,     0,     0,     0,     0,   280,
     292,   293,   286,   287,   288,   291,   289,   276,   277,   294,
     305,   304,   309,   308,   307,   306,     0,   290,   285,   284,
     295,     0,     0,     0,     0,    54,     0,    58,   196,   874,
       0,     0,   250,     0,   220,     0,   204,   207,   208,   213,
     214,   215,     0,     0,   172,     0,   191,     0,   257,   355,
     356,     0,     0,   397,     0,   827,     0,     0,   770,     0,
       0,   558,   799,   802,   803,   712,     0,  1016,  1001,  1003,
    1017,  1014,   997,     0,  1074,  1073,  1065,     0,     0,     0,
       0,     0,     0,  1018,  1028,     0,  1033,  1032,  1035,  1036,
    1034,   628,     0,  1078,  1077,   628,  1044,  1046,  1048,  1049,
       0,  1053,     0,  1057,  1104,   479,     0,     0,     0,     0,
     724,     0,   722,   723,     0,   813,   805,     0,   500,     0,
     497,     0,     0,   499,   498,     0,     0,     0,   557,   561,
     598,   597,   680,     0,   685,   686,   678,     0,   743,   747,
       0,     0,   124,     0,   122,     0,     0,   457,     0,     0,
       0,   436,     0,     0,   445,   445,     0,     0,     0,     0,
     310,     0,   313,   916,   318,   317,   319,     0,   327,   329,
       0,     0,   280,   336,     0,   337,   347,     0,   336,   343,
       0,   964,     0,   251,     0,   216,   656,   209,   245,     0,
       0,     0,     0,   246,   218,   249,   224,     0,   194,     0,
       0,   369,     0,     0,     0,   188,   843,   846,   861,   856,
     535,     0,     0,     0,     0,     0,  1013,     0,   995,  1067,
    1070,  1072,     0,     0,     0,     0,  1024,  1037,     0,  1050,
    1076,     0,     0,     0,     0,     0,   477,   613,   612,     0,
       0,     0,   551,   502,   510,   509,   501,     0,   554,   682,
       0,     0,     0,   628,   698,   687,   690,   688,     0,     0,
     125,   126,   123,   121,   447,   465,   463,   467,     0,   441,
     443,   456,   456,     0,     0,     0,   275,     0,   314,     0,
       0,   280,   328,     0,     0,   324,   329,   280,   336,     0,
       0,     0,     0,   924,   270,     0,     0,     0,     0,   244,
       0,   247,   264,     0,   211,   193,   263,   366,   366,   357,
     358,     0,   349,   373,   163,   186,   187,   559,   800,  1011,
       0,  1006,  1009,  1002,  1015,   998,  1000,  1019,     0,  1022,
    1021,  1020,  1075,  1047,     0,     0,  1041,     0,     0,     0,
    1093,  1082,  1083,   726,   720,   721,   552,     0,   691,   689,
     692,     0,   684,   117,   120,     0,   440,     0,   444,   458,
     458,     0,   272,     0,     0,   315,     0,   280,   330,     0,
       0,   325,     0,   332,     0,   281,   280,     0,     0,     0,
       0,     0,     0,   264,   221,     0,   242,   210,   224,   364,
     367,   364,   364,   364,   359,     0,     0,   336,  1005,     0,
       0,  1008,     0,  1023,  1051,  1054,  1055,  1088,  1092,  1091,
    1087,  1088,  1086,     0,     0,     0,  1081,  1094,  1095,  1097,
       0,     0,   700,     0,   701,   448,   442,   459,   460,   460,
     167,   268,   312,     0,   320,   326,     0,   322,   280,     0,
     280,     0,     0,   281,   278,   336,   342,     0,   340,   269,
     271,   273,   274,   242,     0,   219,   253,   238,   233,   212,
       0,     0,     0,     0,   371,   372,   370,   374,     0,   300,
     301,   298,   299,   375,   302,   368,   297,   296,   303,  1007,
    1012,  1010,   999,     0,  1085,  1084,  1100,  1103,  1099,  1102,
    1101,  1096,  1098,     0,     0,   628,   693,   695,   702,   699,
       0,   462,   462,   316,   281,   323,   321,   333,     0,     0,
     279,     0,     0,   233,     0,   240,   241,   239,   243,     0,
     234,   235,   248,   363,   361,   362,   360,   282,  1090,  1089,
     696,   694,   697,   461,   435,   434,   280,   331,   338,   341,
     252,   222,     0,     0,     0,   237,     0,   236,   336,   332,
     335,   339,   227,   228,     0,     0,   232,   231,   376,     0,
     334,   226,   229,   230,   283
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
    1925,  1088,  1512,  2026,  1990,  1991,  1992,  1988,  1928,  1664,
    1317,  1665,   692,  1090,   251,   218,   219,  1518,   787,   422,
      47,  1746,    48,  1477,  1643,  2018,  1906,  1943,  1479,  1480,
    1481,  1630,  1631,  1834,  1482,  1635,  1483,  1755,  1756,  1638,
    1639,  1753,  1484,  1912,  1485,  1486,  2020,  1847,  1648,  1070,
    1071,    50,   791,  1100,  1671,  1779,  1780,  1450,  1861,  1782,
    1783,  1936,  1867,  1945,   266,  1487,   801,  1109,   508,  1488,
    1489,    54,   414,   415,   416,  1005,   155,   408,   685,    55,
    1624,  1738,  1739,  1052,  1053,   220,  1278,  1898,  1971,  1621,
    1453,  1454,    56,    57,    58,   681,   892,  1174,   709,   351,
     710,  1176,   711,   152,   558,   559,   556,   922,  1216,  1217,
    1593,   221,   160,   161,   418,    60,  1490,   222,   930,   931,
      63,   550,   844,   352,   626,   627,   923,   924,  1205,  1206,
    1219,  1227,  1530,  1423,   353,   354,   288,   554,   852,   702,
     840,   841,  1136,   355,   356,   357,   358,   946,   359,   937,
     360,   361,   597,   362,   953,   363,   623,   364,   365,   366,
     367,   368,   369,   370,   371,   372,  1237,  1238,  1432,  1606,
    1607,  1724,  1725,  1726,  1727,  1966,  1967,  1822,   373,   598,
     169,   170,   375,   570,   376,   377,   378,   629,   379,   380,
     381,   382,   383,   615,   904,   610,   612,   540,   831,   866,
     832,  1345,   833,   834,   541,   384,   385,   386,   928,   387,
     388,   860,   389,   698,   917,   910,   911,   618,   619,   914,
     989,  1112,  1034,   848,   223,  1014,  1524,  1110,  1121,   390,
     544,   545,   391,  1091,   716,   205,   599,   149,  1298,  1015,
     224,  1113,   393,    64,   182,  1078,  1079,  1299,   871,   872,
     873,   394,   395,   396,   397,   398,  1363,  1158,  1538,  1790,
    1791,  1871,  1792,  1951,  1539,  1540,  1541,  1374,  1553,   399,
     877,  1161,  1162,  1163,  1376,  1557,   400,  1379,   401,  1167,
    1381,   402,   884,  1169,  1383,  1566,  1567,  1568,  1569,  1570,
    1704,   403,   404,   887,   881,  1153,   878,  1367,  1368,  1691,
    1369,  1370,  1371,  1699,  1700,  1388,  1389,  1810,  1811,  1881,
    1882,  1954,  1999,  1812,  1879,  1886,  1887,  1961,  1888,  1889,
    1960,  1958,   405
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1767
static const yytype_int16 yypact[] =
{
    1559,   282, -1767,    40, 14170,   -83,   181,   389,   389, 14170,
     451,   397, -1767, 14170,    62, -1767, -1767, 12242, 14170, -1767,
   -1767, -1767, -1767, -1767, -1767,   142, -1767,   681,   604,    79,
     111,    84,   626,  1299,   887, 12523, 11693,   552, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767,   491,   598, -1767, 14170, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767,   393,   347, -1767,
   -1767, -1767,  4138, 14170, -1767,   555,   555, -1767, 14170,   748,
      54, -1767,   583,   -83,   754, -1767, -1767, -1767, -1767,   607,
   -1767,   448,   583,  1296,  1296,  1559,  1559,  1296,  1296, -1767,
   -1767,   612, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
     583,   583, -1767,   529, -1767,   583,   117,  -169,   548, -1767,
     493,   575,   510, -1767, -1767, -1767,   590,   594,   456,  1093,
     783,   748, 13438, 14170, 14170, -1767,   601,   869,   627, -1767,
      75, -1767, -1767,   458, -1767, -1767,   771, 14170,   776, 14170,
     689, -1767, -1767,   635,   648,   652,   654, 14170, 14170, 14170,
   14170, 14170, 14353, 14170, -1767, 14170, 14170,   620, -1767, -1767,
     666, -1767, 14170, 14170,   715,   687, 14170, 14170, 14170, 14170,
   14170, 14170, 14170, 14170, 14170, 14170,   966, -1767, -1767, -1767,
     727, 14170, 14170,   668,   788,   805,   708,   714, 14170,   697,
   -1767,   941, -1767, -1767,   921,   257,   257,   257,   747, -1767,
     723, 13621, 14170,  1043,  1043,  1043,  1061,   898,   901,   904,
   -1767, -1767, -1767, -1767, -1767,   920,   922,  1072, -1767, -1767,
   -1767,   926,   926,   926,   926,   926, -1767,   934, -1767,   943,
     987, 14170,   951,   974,  1011,  1015,  1020,  1022,  1023,  1024,
    1026,  1028,  1032,  3127,  4475,  8703,  8703,  1036,  1038,  1040,
   -1767,  8703,  1043,   256,   420,    82,  6463,  1042,  1045,  4475,
   -1767, -1767,   279,   885,  1037, -1767,  1160, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, 14170, -1767, -1767, -1767, 10520, -1767,
   -1767, -1767,   892, -1767,   879, -1767, -1767,   893, -1767, -1767,
    1067,  1070,  1073,   916, -1767, -1767, -1767, -1767, -1767, -1767,
    1043,  1043,   -56, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767,   214,   948, -1767,   967,
   -1767,   932,  1154,  1149, -1767,   912, -1767, 14170, -1767, -1767,
   14170,   935, -1767,  4138, -1767,  6783, 12242,   956,  1125,  1126,
   -1767, -1767,  1127,  1128,  2050, -1767, -1767, -1767, -1767, -1767,
   -1767,   135,  1093,   135,   961, 12706,   352,  1163,  1164,  1167,
       9,   748, -1767,   804,   554,   899,   711,  1105,   642, -1767,
      46,  1025, 14170,   869,   984, -1767, -1767,  1111, -1767, -1767,
     641, 14170, 14170, 14170, 14170, 14170,  1052,  1115,  1116,  1118,
    1120, 14170,  1044,  1074,  1131,   583,   740, 14170, 14170, -1767,
   -1767, 14170,  1069, 14170, 14170, 14170,   966,  1132,  1132,  1132,
   -1767,   966,   966,   966, -1767, -1767, -1767, -1767, -1767, 14170,
   -1767, -1767,    63, 14170,  8703, 14170,  1134,  1135, -1767,   424,
   -1767, -1767, -1767,  1136,  1137, -1767, -1767, -1767, -1767, -1767,
    1280, -1767,  1151, -1767, -1767, -1767,  1153,  1156,  1080, 14170,
   -1767, -1767, -1767,  1157,  1158,  1162,  1165,  8703, -1767, -1767,
    1169,  1169,  1169,    41,  1051,  4475, -1767,  1175,  -176, -1767,
    1176, -1767,  1016, -1767, -1767, -1767,  4475,  4475,  1328,  1184,
   -1767, -1767, -1767, -1767, -1767,   304, -1767,  1190,  1249, -1767,
    8703,  8703,  8703,  1143,  1207,   423,  1144,  1375,  8703,   672,
    8703,  3127,  1210,  1224,   787,  1226,   946,   -85, -1767,   -54,
    1491,  3127,  1179,  1179,  8703,  8703,  8703,   939, -1767,   142,
    1229,   142,  1229, -1767, -1767,  1043,  4475,  2902, -1767,  -148,
    8703,  8703,  1491,   196,  8984, 14170, -1767,   723, 14170, -1767,
    4475,  4475,  8703,  8703,  8703,  8703,  1239,  1242,   977,   977,
    4475,  3464,  1076,  8703,  8703,  8703,  8703,  8703,  8703,  8703,
    8703,  8703,  8703,  8703,  8703,  8703,  8703,  7103,  8703,  8703,
    8703,  8703,  8703,  8703,  8703,  8703,   341,  1243,  1215,  4138,
    1250,  5149,  8703, -1767, -1767, 11876, 13072,  1141,  1210, -1767,
     416, -1767, -1767,  1345,  1349, -1767, -1767, -1767,   760,   142,
     748, -1767,   195,  1253,  1320, -1767, -1767, 14836,   217, -1767,
   -1767,    51,  1192, -1767, -1767, -1767, -1767,  3127, -1767,   222,
   -1767, -1767,   831, -1767,   -35, -1767, -1767, -1767,   -14, -1767,
     715, 14170, -1767, -1767, -1767, -1767, -1767, -1767,   135,   135,
   -1767, -1767, -1767,  1178,   804,  1166,  1181, -1767,  1346,  1275,
     869,   869, -1767, -1767, -1767, -1767,   869,  2839,   899, -1767,
   -1767,   324,    65,  1177,   807, -1767,    38,    38, 14170,   583,
    1142,   869,   804,  1285,  2839,   641, -1767, -1767,  1286,  1131,
    1131,  1131,  1131,  1225, 13804, 13804, 13804,  1200, -1767, -1767,
   -1767,  1439,  1196, 14170, 13255,  1366, -1767,  1152,  1155, -1767,
   -1767,   799,  1211,  1131,  1132, 14170,   966,   966,   966, -1767,
    2434, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,   890,
   -1767, -1767, -1767,   941,   142,   142, -1767,  1445,   142,   142,
     142, -1767,   405,  1229,  1229, -1767, -1767, -1767, -1767, -1767,
    1156,  1153,  1197, -1767, -1767, -1767,   142,   142,   142,   142,
    1146, -1767, 11399,  1369,    62,    62,    62, -1767, -1767, -1767,
   -1767,    41,   956, -1767,   934, 13621, -1767,  4475, 14170, -1767,
    1168,  1148, -1767, -1767, -1767, -1767,  1365, 14170, 14836,   619,
   14836, -1767,   -37, -1767,  1330, 14170,  1316,  8703,  1185, -1767,
   -1767,  8703, 14170, -1767,  1350,   619, -1767,  8703, -1767,  1391,
     872,  8703,   229, -1767, -1767, -1767,   907,  4475, 12889,  9258,
   12230,  2807,  1352,  1230,  1043,  1353,  1043,  1080,  1222,  8703,
   -1767,   377,  8703, -1767,  1227,  9575,  1198,   269,  4475, -1767,
    2541, -1767, -1767,  1201, -1767,  1096, 14536, 14536, 14536,   120,
      22, -1767, -1767,  1426, -1767, -1767,  1572, -1767, 10802, -1767,
   -1767, -1767,  7423,  7423, -1767, -1767,  4475,  4475, -1767, -1767,
   -1767, -1767, -1767,   934, -1767, 14836,  1179,  1179,  1179,  1179,
    1179,  1179,  1179,  1179,  1179,  1179,  1055,  1055,  1194,  8703,
     939,   661,   661,   661,   661,  1405,  1405,  1405,  1405, -1767,
    1432,  1213, -1767, -1767, -1767,  8703,  1370,  8703, 14836,  1371,
     128,  1209,  1376,  1377,  1378, -1767,   239, -1767,  1217, -1767,
   -1767, 14170,  1014,  1462, -1767, -1767, -1767, -1767, -1767,    62,
   -1767,  8703, -1767, -1767, -1767, -1767, -1767, -1767, -1767,  7423,
    1297,   135,  1448,  1304,  1448, -1767,    25,    25,  1043,  1309,
   14170, 14170,   869,   118, -1767, -1767, -1767, -1767, -1767, -1767,
   14170, 14170, -1767, -1767, 14170,  1474,  1030, -1767, 14170, 14170,
   13987, -1767,  1457,  1254,  1457,  1459,  1463, -1767, -1767,  1317,
     869, -1767, -1767, 13804, -1767, -1767,  1311, -1767, 14170, -1767,
    1404,  1240,  2839,  1407,  1415,   569,  1318, 14170,   709, -1767,
   -1767, 14170, 14170,   288, -1767, -1767, -1767, -1767, -1767,   561,
   -1767,  2391,   -81, 14170, -1767,   601,   601, -1767,  1272, -1767,
    1331, 14170,  1333, -1767,   966, -1767, -1767, -1767, -1767,  1424,
    1261, -1767,  1427, -1767,  1428, -1767,  1430,   291,  1431,  1267,
   -1767,   297, -1767, -1767, -1767, -1767,  1327,  1294,  1435,  1271,
    1438,  1440,  1442,  8703, -1767, -1767, -1767,  1446, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,  2839,  2839,
    8703, -1767,   468,  1447,  8703,  1449,  1450, -1767,  1281,  7743,
   14836,  -164, -1767,  1307, -1767,   539, -1767,  1283,  1526,  1330,
    1458,  1472,  1330,  1533,   310, -1767, -1767, -1767,  1470,  1471,
    1473,  1491,  8703,  8703,  8703,  8703, -1767,  1354, -1767, -1767,
   -1767, -1767,  8703,  1298, -1767,  1334, 14836, -1767,  8703,  8703,
   -1767,  8703,  1491,  2541,  1477,  1096,    62,  8984, -1767, -1767,
   -1767,   957,  1571,  8984, -1767,  8984,  1575,  1579, 14170, -1767,
    1481, -1767, -1767, 12242, 14170, -1767,  1551,  1550,  1043,   313,
     316,  1258,  1529, -1767, 14836, -1767,  1554,  1486,  1557,  1488,
   -1767,  1489, -1767, 12059,  8703, 14170, -1767, -1767, -1767, -1767,
    1490, -1767, -1767,  1400, -1767,   569, -1767,  1402, -1767, -1767,
   -1767,  1651,  1043, -1767, -1767, -1767, -1767, -1767,   966,   966,
     966, -1767, -1767, -1767,   180, -1767, -1767,  1361, -1767,  1043,
   -1767,   408,    57,  1043, -1767,  1509,  1678, -1767,  9582, 14170,
   -1767,  1451,  1456, -1767, -1767, -1767, 14170, -1767,  1355, -1767,
    2158,   475, -1767,   709, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, 13255,  1433,  1434,   583, -1767, -1767, -1767,
   -1767,   782,  1429,  1687,  1527,  1528, 14170, 14170,  1531,  1629,
   -1767, -1767, -1767,  2839, -1767, -1767, -1767, -1767,   142, -1767,
     142, -1767,   142,  1156, -1767, -1767, -1767,   142, -1767, -1767,
   -1767, -1767, 14170,  1543,  1544, 14524, -1767, -1767, -1767, -1767,
   -1767, -1767,  5469,  1330,  1476,  8703, 14836,   319, -1767,  1403,
   -1767, -1767,   570,  8703,  1330, 14170, -1767,  1580,  1583,  1548,
    8703,  1330,    13,  8703, -1767,  1526, -1767,  1453,  1555, -1767,
    1556, -1767,  8703,  8703,  7423,  7423,  9892, 14633, 11085,  8972,
   -1767, -1767,  8703, -1767, 14677, -1767, -1767, -1767,   345,  1096,
    8984,  1657,  8984,   566,   566,  8984, -1767,  1562, 14170,   259,
   -1767, 14170,  4475, -1767, -1767, -1767, -1767,  4475,  4475, 14170,
   -1767,  1623,   -40, -1767, -1767,  1563,  1565, -1767, -1767, -1767,
   -1767, -1767,  1414,  1468, -1767, -1767, -1767,  1493,   547, -1767,
    1043,  1408,  1043,  1658,  1409, -1767,  1573,  1573,  1508,  1514,
   -1767,   -83,   451,   397,  1524, 12242,  3801,  8063,  4475,  1441,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767,  1454, -1767, -1767, -1767,
   -1767,  1423,  2839,  2478,  2478, -1767, 14170, -1767, -1767,  1594,
     583,   583, -1767,  1639, -1767,  8703, -1767,   782, -1767, -1767,
   -1767, -1767,   508,  1596, -1767,    72, -1767,  1545, -1767,  1436,
    1443, 14170,   165, -1767,  1599, -1767,  1602,  1603, -1767,  1604,
     329, -1767,  1452, -1767, -1767, -1767,  1607, 14836,  1444, -1767,
     158, -1767,  1455,  1608, -1767, -1767, -1767,  7743, 14170,  1517,
    1521,  1522,  1523, -1767, -1767,  1615, -1767, -1767, -1767, -1767,
   -1767,   682,  1619, -1767, -1767,   -36,  1461, -1767, -1767, -1767,
      20, -1767,  1633, -1767, -1767, -1767,   330,   334,   356,  8703,
   -1767,  8703, -1767, -1767,  8703, -1767, -1767, 14536, -1767,  8984,
   -1767,   583,  4475, -1767, -1767,   566, 14170,   357,  1469, -1767,
    1620,  1620,  1469,  8703, -1767, -1767, -1767,  4812, -1767, -1767,
    1542,  1540, -1767,   419, -1767,  1703,  8703, -1767,  1043,   363,
    1586, -1767,  1043, 14170,    38,    38,  1043,  1582,  4138, 14170,
   -1767,  1646, -1767,  1647, -1767, -1767, -1767,  4475, -1767,   595,
   10205,  1520, -1767, 10814,  4475, -1767, -1767,  1649,  9899, -1767,
     498, -1767,  1552, -1767,  1506, -1767,  2706, -1767, -1767,  1715,
    1653,  1564, 14170, -1767, -1767, -1767,   676,  1662, -1767,  1574,
     809,  1716,   385,  1749,  1750, -1767, -1767, -1767, -1767, -1767,
   -1767, 14170, 14170,  8703,  8703,  8703, -1767,  8383, -1767, -1767,
   -1767, -1767,  1731,   365,  1732,  1734, -1767, -1767, 14170, -1767,
   -1767,  8703,  1584,  1585,  1672,   381, -1767, -1767, -1767, 14721,
   14765, 14809, -1767, -1767, -1767, -1767, -1767,   386, -1767,  1146,
    5789,  1530,  1513,  1518,  1519, -1767, -1767, -1767,  1043, 14170,
   -1767, -1767, -1767, -1767,  1515, -1767, -1767, -1767,   391, -1767,
    1849,  1457,  1457,  1588, 14170,  1600, -1767,  1525,  8703,   650,
    1561, -1767, -1767,  1546,  8703, -1767,   608, -1767, 10814,  1730,
    1558, 14170,  1628,  1859, -1767,  1632,  1861, 14170,  1744, -1767,
    4475, -1767,   583,   431, -1767, -1767, -1767,  -162,  -150,   809,
   -1767,  1553, -1767,  1578, -1767, -1767, -1767, -1767,  1535, 14836,
     436, -1767,  1566, -1767, -1767,  1547, -1767, -1767,  1725, -1767,
   -1767, -1767,  1526, -1767,  1736,  1738, -1767,  1727, 14170,  1875,
     616, -1767, -1767, -1767, -1767, -1767, -1767,  1695, -1767, -1767,
   -1767,   -13, -1767, -1767, -1767,  1043, -1767, 14170, -1767,  1828,
    1828, 14170, -1767, 14170,   445, 14836,  1719, -1767, 10216,  1597,
    2860, -1767,  1587,  9265,  1762,  1590, -1767,   447,  2839, 14170,
    1890, 14170,  1892,   583,  1729,  1733,  1790, -1767,   676,  1361,
   -1767,  1361,  1361,  1361, -1767,   840,  4475, 11095, -1767,  8703,
   14170, -1767,  8703, -1767, -1767, -1767, -1767,  1745, -1767, -1767,
   -1767,  1745, -1767,  1752, 14170,  1875, -1767, -1767, -1767,  1756,
    6126,  1570, -1767,  1591, -1767, -1767, -1767, -1767,  1847,  1847,
   -1767, -1767, -1767,  8703, -1767, 10216,  1778, -1767, -1767,  1614,
   -1767,  4475,  1605,  1606, -1767, 10533, -1767, 14170, -1767, -1767,
   -1767, -1767, -1767,  1790,   641, -1767, -1767,   758,  1654, -1767,
   14170, 14170, 14170, 14170, -1767, -1767, -1767, -1767,  1610, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767,  1875, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767,  1592,  1595,  1589, -1767, -1767, -1767, -1767,
    1856,  1658,  1658, 14836, -1767, 10216, -1767, 10216,  1630,  1616,
   -1767,  1622,  2839,  1654,   780, -1767, -1767, -1767, -1767,  1108,
    1666,  1668, -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767, 14170, -1767,
   -1767, -1767,   281,   281,  1867, -1767,  1868, -1767, 11412,  9265,
   -1767, -1767, -1767, -1767,  1897,   270, -1767, -1767, -1767,  1809,
   -1767, -1767, -1767, -1767, -1767
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1767,  1000, -1767, -1767, -1767, -1767, -1767, -1767, -1010, -1000,
   -1767, -1767,   888, -1767,    12, -1767,    18,   533, -1767,  1159,
   -1767, -1767, -1767,   637, -1767,   686,     0,  1735, -1767, -1767,
     -88,     6, -1767, -1767,  1737, -1767,  1499, -1767, -1767, -1767,
    1503,  -356,   929,    61, -1767, -1767, -1767,   426,   131, -1767,
      27, -1767,  -746,  1204,  -396, -1767, -1767, -1767,   -62, -1767,
    1917, -1767, -1767,   231, -1767, -1767, -1767,   905,   643, -1767,
   -1767, -1767, -1767, -1767, -1767, -1444, -1767,   338, -1767, -1767,
   -1767, -1767,  -736,   -55,   -34,   -31,   -23, -1767,    42, -1767,
   -1767, -1767,   -27, -1767, -1767,  -214,  -403, -1767,  -158,  -280,
   -1767, -1100, -1767,   318, -1287, -1767, -1233,   -57, -1766, -1767,
     563, -1767, -1767, -1767, -1767, -1767, -1767,   208, -1767,   328,
   -1767,   212, -1767,   -50, -1767, -1767, -1767, -1767,   477,  -703,
   -1767, -1767, -1767, -1767, -1767, -1767,   191,  -704,   194, -1767,
   -1767, -1767, -1767, -1767,  1537,   258,  -423,   640,  -392,    24,
      30, -1767,  -160, -1767,  1288, -1767,  1972,  1827, -1767, -1767,
     527, -1767,   183,  -741, -1767, -1767, -1028,   178,   110,  -788,
     729,   564, -1767, -1767, -1767,  1335,  1339,   628,  -886, -1767,
    -351,   633,  1001,  -153, -1767,  1171,    37,  -856,   808, -1767,
   -1253,   221, -1767,  1611,  1018, -1767,    36,   278, -1767,   810,
      68,   902,   653,  -398,  1099, -1767, -1767, -1767,  -609, -1767,
    -893, -1767, -1283, -1767,  -227,  1392,  1150, -1767, -1767,  1183,
     428,   900, -1767, -1767,  -250, -1767, -1767,  1398, -1767,   182,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767,  1396, -1767,  -270,
   -1120,  1342,  -538,  -486, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767,   320, -1767, -1767, -1767, -1767, -1767, -1767,   -16,
   -1767,  -383, -1767,   823, -1767, -1767,  1372, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767,  -382,  -478,  -509, -1767,  -548, -1767,
   -1767, -1767, -1767,  1138, -1767,  2008, -1767,  1532,    73, -1314,
   -1767,  1479, -1767, -1767, -1767,  1139, -1767,  1460, -1767,  1140,
    -641,   476,  -652, -1767,  -190,  1216, -1767,  -261, -1767,  -258,
   -1767, -1767,  -240,  -286,    19, -1767,     4, -1767, -1322,  1494,
    -384,   -18,  -171, -1767, -1767, -1767, -1767, -1767,  -537, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767, -1767, -1767,   362, -1767,
     197, -1767, -1767, -1767, -1587, -1767,   367,   530, -1767, -1767,
   -1767, -1767,   698, -1767, -1767, -1767, -1767, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767, -1767, -1767,   373, -1767, -1767, -1767,
   -1767, -1767, -1767, -1767,  1492,  -793,   713, -1767,   535, -1767,
     718, -1767, -1767,   283, -1088, -1767, -1767, -1767, -1767, -1767,
   -1414,   199, -1767, -1767, -1767, -1767, -1767, -1767,   198, -1767,
   -1767, -1767, -1767
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1076
static const yytype_int16 yytable[] =
{
      41,   168,   457,   679,   421,   560,    42,   181,   148,   281,
     423,   557,    38,   157,   427,   925,  1054,   162,    39,  1062,
     542,   171,   148,   543,    52,   694,  1280,   459,   824,   865,
      53,   991,   435,   436,  1221,  1222,    61,   438,  1531,   275,
     282,   546,   869,   699,  1604,   874,   204,   576,  1089,   293,
     885,   452,   215,   889,  1051,  1478,  1229,  1230,   823,   750,
     293,    43,   215,  1657,  1204,  1012,  1382,   847,  1300,  1891,
     148, -1075,  1073,  1074,   696,   802,   803,   147,  1301,  1155,
    1384,  1156,   164,   596,   600,  -751,   896,   718,  1322,  1036,
    -254,   172,  1170,  1892,  1037,   215,  1597,  1793,  1372,   622,
    1796,  1944,   461,   150,   799,   555,   595,  1531,   441,   804,
     805,   806, -1075,  1859,  -708,  1531,  -708,   729,  1152, -1075,
     163,   808,   563,   564,   565,  1862,   680,  1702,   163,   215,
     624,    44,  1045,  1255,  1020,  1563,   374,   210,  1598,   290,
     183,   184,   185,   186,   187,   188,  1602,   179,    66,   616,
     163,   912,  1046,   180,  1667,  1023,   392,   148,  1860,  1564,
     855,  1594,   410,   812,   151,   211,   212,   442,  1703,   850,
    1860,   608,  1373,    41,    41,    41,    41,    41,    41,    42,
      42,    42,    42,    42,    42,    38,    38,    38,    38,    38,
      38,    39,    39,    39,    39,    39,    39,    52,    52,    52,
      52,    52,    52,    53,    53,    53,    53,    53,    53,    61,
      61,    61,    61,    61,    61,  1013,   454,   148,   148,   673,
     674,    59,  1774,   213,    14,   439,   406,  1452,   204,  1673,
     906,   467,    14,   148,    43,    43,    43,    43,    43,    43,
    1668,   148,   148,   148,   148,   480,   483,   148,  1674,   148,
     148,   897,  1944,    13,   216,  -254,   489,   148,    51,  -755,
     148,   148,   148,   148,   500,   148,   148,   148,   148,   148,
     916,   613,   614,   760,  1717,   510,   511,   679,    62,  1698,
     163,   675,   148,   898,   458,  1952,   455,   456,   575,   757,
    -708,   730,   699,  1300,  1605,   561,   562,  1571,  -708,  1154,
   -1075,  1021,   470,  1301,    44,    44,    44,    44,    44,    44,
     476,   477,   478,   479,  1089,  1893,   484,   850,   485,   486,
    1894,  1125,  1021,  2022,  2023,   579,   490,   788,   853,   496,
     497,   498,   499,   462,   501,   502,   503,   504,   505,   859,
     859,   596,  1716,  1165,  1239,   442,  1241,  1204,   809,  -449,
    1171,   484,   750,  1126,   926,  1758,  1035,  1035,  1224,   756,
    1285,  1021,  1035,  2024,   595,  1141,  1008,  1787,   148,  1456,
     163,  1103,  1026,  1027,   595,   440,  1385,  2032,   217,  1390,
    1265,   936,   350,    13,   676,  1656,   214,   624,  1010,   908,
     417,   952,   350,  1018,    59,    59,    59,    59,    59,    59,
    1177,   594,   713,   935,  1105,  1106,  1107,   374,   293,  -708,
    1759,   293,    65,  1675,  1929,  1478,   189,   190,   191,   192,
    1372,   162,  1730,  -757,   282,  -755,   609,   392,  1447,  -708,
     700,    51,    51,    51,    51,    51,    51,   642,   419,   153,
    1200,  1123,  1124,   548,   907,   816,   817,  1798,   979,   148,
    1448,    62,    62,    62,    62,    62,    62,  1223,  1120,  1312,
     677,   717,  1337,  1807,  1838,  1243,   148,   850,  1341,   154,
    1843,  1959,  1799,    13,    14,   148,   148,   148,   148,   148,
     595,  1391,   163,   159,  1425,   780,  1038,  1426,   813,   543,
    1546,   792,   148,   678,  1685,   148,  1656,   148,   148,   148,
    1680,  1706,   712,  1061,   549,  1707,   543,   546,  1577,  1578,
     285,   286,   287,   807,   980,   699,  2033,   811,   724,   282,
     189,   190,   191,   192,   546,  1844,  1731,  1708,  1718,   158,
     252,   539,   918,    40,  1735,   759,   919,   625,  1808,  1998,
    1175,  1809,   543,   835,   768,   769,   770,   771,   772,  1040,
    1905,  2025,  1111,  1011,   593,   543,  1784,  1816,  1019,  1915,
     546,   793,  1826,    49,   794,  1178,   796,   797,   798,   560,
    1543,  1058,   879,   546,   880,   557,  1245,  1089,  1452,  1344,
    1356,  1555,  1591,   592,  1144,    13,    14,   253,  1562,  -757,
     611,   902,   284,   905,   818,   856,   858,   194,  1409,  1041,
    1042,  1056,  1857,  1436,  1413,  1201,  1414,  1868,   927,   -82,
     -82,   -82,   -82,   -82,   -82,  1658,  1902,  1359,  1916,  1357,
     195,  1975,  1377,  1977,  1313,  1293,   225,  1338,   929,   932,
    1146,  1294,   934,  1342,  1208,  1209,  1210,   254,  1211,  1212,
    1213,  1214,   193,   594,  1832,  1613,  1392,  1181,  1035,  1019,
     926,  1122,  1019,   374,  1614,  1547,   285,   286,   287,   890,
    1251,   255,   677,   291,   933,  1681,  1392,   163,  1202,   594,
    1019,  1006,  1029,   392,   909,   990,   912,  1549,  1378,   996,
     282,  1659,   283,  1233,   292,  1587,   183,   184,   185,   186,
     187,   188,  1019,  1496,  1712,   678,  1231,  1232,  1883,  1622,
    1059,   194,   256,   257,   258,   259,    40,    40,    40,    40,
      40,    40,  1331,  1829,  1830,  1550,   163,  1551,  1552,  2019,
    1615,   539,  1496,   734,   195,   148,   763,  1827,   289,  1215,
    1765,   260,  1660,  1188,  1766,  1190,    49,    49,    49,    49,
      49,    49,   407,   284,   164,   189,   190,   191,   192,  1919,
     262,  1921,   463,   420,   738,   263,   740,   741,   742,   743,
     744,   745,   148,  1266,   746,   196,  1884,  1858,   464,  1885,
      13,   216,  1869,  1661,  1152,   890,  1662,   425,  1072,  1072,
    1072,  1903,   434,  1917,   886,   426,  1663,   780,  1092,   264,
   -1062,   265,   643,  1616,  1025,   437,   593,  1985,  1986,   148,
    1503,  1588,  1119,  1590,   735,  1504,  1595,   285,   286,   287,
    1314,  1290,   593,   424,   543,   939,   940,   941,  1129,    13,
      14,   879,   593,   880,   736,   443,  1315,  1592,  1987,   444,
    1321,  1055,   546,   543,  1528,   411,   445, -1040,   412,  1316,
     699,  1401,  1561,  1267,   413,  1565,   446,  1002,  1405,   492,
    1406,   546,   447, -1040,  1003,  1004,   448,  1261,   206,   561,
     699,   207,  1147,  1097,  1098,   763,  1099,   193,  1104,   451,
    1284,   148,   662,   663,   664,   665,  1444,  1445,  1446,  1157,
     215,  1324,  1325,  1741,  1742,   460,  1166,  1353,  1354,  -224,
     543,   543,  1637,   738,  1751,   740,   741,   742,   743,   744,
     745,  1082,   996,   746,   927,  1754,  1503,  1751,   546,   546,
     472,  1504,  1138,  1139,  1140,   493,   494,   495,   471,   285,
     286,   287,  1505,   473,   929,   424,   194,   474,   593,   475,
    1220,  1220,  1220,   926,   487,    15,  1258,   926,  1259,  1260,
    1151,   488,   252,   926,   491,   926,   516,   517,   518,   195,
     509,  2011,   285,   286,   287,  -224,   764,    26,   894,   751,
     512,   519,   513,    27,    28,   520,   521,   522,   307,   308,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   514,
    1713,   752,    30,  -180,   753,   754,   465,   466,   594,  -179,
     196,   468,   469,   532,   533,   534,   285,   286,   287,   253,
    1064,  1065,  1066,  1067,   555,  1246,  -224,  1082,   506,   507,
     712,   712,   738,   739,   740,   741,   742,   743,   744,   745,
     686,   687,   746,   547,  1102,  1208,  1209,  1210,  1505,   682,
     683,  1410,  1214,   515,  1263,  1264,  1502,   285,   286,   287,
     553,  1175,  1175,  1173,  1268,  1269,   293,  -224,  1270,   254,
    -224,  1585,  1274,   148,   561,   731,   732,  1424,   789,   790,
    -224,   428,   429,  1634,  -866,   432,   433,  1072,  -738,  1723,
     643,  -740,  1287,   255,  -736,   543,   944,   945,  1305,   613,
     614,  1297,  1049,  1042,  1306,   148,  1311,   712,  1179,  1180,
     566,  1443,   567,   546,   568,   764,   569,  1323,   183,   184,
     185,   186,   187,   188,   575,   148,  1247,  1248,  1451,   578,
    1455,  1455,  1458,   577,   256,   257,   258,   259,  1272,  1273,
     631,   580,  1275,   632,   633,   634,   635,   636,   637,   638,
     639,  1777,  1778,   640,   641,   571,   572,   573,   574,  1307,
     926,   593,   926,   260,   581,   926,   658,   659,   660,   661,
     662,   663,   664,   665,  1310,  1930,   261,  1931,  1932,  1933,
    1934,  1935,   262,  1565,  1208,  1209,  1210,   263,  1211,  1212,
    1213,  1214,  2012,  2013,  1328,   430,   431,  1600,  1601,  1048,
    1050,   582,  1723,  2004,  2005,   583,   643,   927,   551,   552,
     584,   927,   585,   586,   587,  1599,   588,   927,   589,   927,
     628,   264,   590,   265,   845,   846,   604,   929,   605,  1308,
     606,   929,   620,   630,   747,   621,   668,   929,   667,   929,
    1652,  1653,  1417,   535,   536,   537,   538,  1419,   932,   669,
    1745,  1646,  1649,  1649,   543,   543,   543,   670,  1062,  1636,
     671,  1641,  -677,   672,   684,   688,   689,   996,   690,  1437,
     693,   701,   546,   546,   546,   703,   704,   705,   706,  1215,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     196,   890,   726,   727,  1408,   728,   755,   539,   761,  1617,
     762,  1455,  -614,   758,   773,   774,   775,   419,   776,   777,
     781,  1114,  1491,  1492,  1116,  1117,  1118,   783,   795,  1519,
    1495,   784,   800,  1305,   814,   815,   819,   820,  1628,  1306,
     643,  1714,  1128,  1130,  1131,  1132,   226,  1499,   821,   926,
    1525,   822,  1526,   609,  1527,   643,   611,   836,   837,  1529,
     282,  1520,   838,   843,   631,   839,  1309,   632,   633,   634,
     635,   636,   637,   638,   639,   851,  1836,   640,   641,   854,
     857,   862,  1965,   858,   227,   863,  1532,   228,   867,   876,
       3,     4,     5,     6,  1307,  1715,   825,   826,   827,   828,
     829,   830,     7,     8,     9,    10,   875,   882,   883,  1556,
     891,    11,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   927,   893,   927,   895,   903,   927,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   942,
    1750,   229,   943,   981,   929,   349,   929,  1760,   982,   929,
     997,   984,  1297,  1009,   593,  1532,  1000,  1001,   624,   643,
    1016,  1028,   631,  1532,  1308,   632,   633,   634,   635,   636,
     637,   638,   639,  1030,  1033,  1427,   641,  1734,  1032,   168,
    1031,  1737,  1057,  1042,  1060,  1743,  1063,  1075,  1068,  1076,
    1077,   230,   712,   712,  1093,    13,    14,  1095,  1115,   929,
    1096,  1137,  1101,  1150,  1127,  1848,   825,   826,   827,   828,
     829,   864,  1133,  1148,  1149,  1152,  1159,   644,   645,   646,
     647,   648,   284,  1168,  1672,   649,   650,   651,   652,   653,
    1651,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,  1187,   231,   232,   233,   234,   235,   236,
    1192,  1164,    15,  1186,  1189,   282,   237,   238,   239,   240,
      16,    17,  1226,    18,  1199,  1197,   643,  1207,  1632,  1235,
    1236,  1240,  1242,  1855,    26,  1244,  -739,  -741,  -737,  1249,
      27,    28,  1690,  1178,  1253,   241,  1255,  1823,  1257,   -16,
       1,  1309,  1262,  1271,  1277,  1279,    29,  1281,   242,    30,
    1283,  1282,  1286,   927,   243,  1288,  1289,   244,  1291,   245,
     825,   826,   827,   828,   829,  1343,  1292,  1918,  1296,  1326,
     543,  1220,  1327,   929,  1329,  1332,  1402,  1333,  1334,  1335,
    1297,  1336,  1339,  1340,  -768,    31,  1346,  1347,   546,  1348,
       2,  1349,   374,  1350,  1856,   246,  1352,  1362,  1358,  1380,
    1360,  1361,  1375,     3,     4,     5,     6,  1740,  1382,  1386,
    1387,  1982,   392,  1747,  -528,     7,     8,     9,    10,  1937,
    1393,  1394,  1403,  1395,    11,  1412,  1400,  1491,  1407,  1415,
    1416,  1418,  1491,  1421,  1895,  1422,  1429,  1430,  1431,  1433,
    1434,  1438,  1439,  -528,  1441,   631,   148,  1442,   632,   633,
     634,   635,   636,   637,   638,   639,  1449,   602,   603,   641,
    1459,  1460,  1493,   607,  1978,  1532,  1788,  1494,   617,    12,
    1514,  1496,  1513,  1500,  1501,  1923,  1515,  1517,  -528,  -528,
    -528,  1521,  1802,   631,  -528,  1522,   632,   633,   634,   635,
     636,   637,   638,   639,  1533,  1534,  1428,   641,  1548,  1560,
    1558,  2009,  1544,  1559,   543,  1603,  1573,  1574,    13,    14,
    1572,  1589,  1596,  1824,  1608,  1772,  1609,  1610,  1611,  1612,
    1620,  1626,   546,  1623,  1618,  1622,  1627,  1642,  1747,   632,
     633,   634,   635,   636,   637,   638,   639,  1629,  1644,  -528,
     641,  1645,  1491,  1322,  1654,   561,  1666,   697,  1670,  1669,
    1676,   148,   539,  1677,  1678,  1679,   697,  1683,  1692,  1688,
    1684,  -528,  1693,  1694,  1695,    15,  1696,  -528,  -528,  1682,
    1697,  1687,  1705,    16,    17,  1728,    18,  1701,    19,    20,
      21,    22,    23,    24,    25,  1681,  -528,    26,   641,  1729,
    1732,  1736,  1878,    27,    28,  1744,  1748,  1749,  1757,  1761,
    1767,  1768,  1769,  1770,  1771,  1781,  -528,  -528,  -528,    29,
    1775,  1740,    30,  1785,  1786,  1900,  1776,  1901,  1797,  1800,
    1853,  1801,  1491,  1806,  1819,  1804,  1805,  1491,  1821,  1820,
    1818,  1825,  1828,  1747,  1839,  1747,   697,  1831,   625,  1837,
    1845,  1849,  1833,  1846,  1850,  1851,  1852,  1941,    31,  -528,
    1854,  1491,  1245,  1942,  1950,  1866,  1873,  1865,  1880,  1939,
    1877,  1870,  1890,  1872,  1875,  1940,  1876,  1897,  1957,   842,
    1904,  1946,  1913,  1907,  1920,  1909,  1922,  1947,  1914,  1924,
    1927,  1953,  1968,  1948,  1926,  1956,  1884,  1970,  1974,  1491,
    1976,  1969,  2000,  1979,  1980,  1989,  1997,  2003,  2007,  1491,
    2002,   561,   868,   870,   870,  2001,  2008,  2014,  2006,  2016,
     868,  2012,   870,  2013,  1993,  1994,  1995,  1996,  2031,  2034,
    1497,  1440,  1080,   719,   450,   449,   899,   900,   901,   725,
    1254,  1984,  1039,   280,  1733,  1276,  1498,  2017,  2027,  2015,
    2010,  2029,   915,   697,  1841,  1983,  1764,  1752,  1842,  2030,
    1864,  1650,  1863,  1523,   938,   938,   938,   938,  1007,  1491,
     156,  1491,   723,   409,  1625,   955,   956,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   970,
     971,   972,   973,   974,   975,   976,   977,   978,  1899,  1972,
    1896,  1457,  2021,   988,   988,   999,  1619,   998,  1941,  1411,
    1252,  1576,  1491,  1491,  1942,  1575,  1145,  1250,   691,  1225,
    1939,  1719,   948,  1351,  1420,  1143,  1940,   947,   954,  1172,
    1817,   983,  1946,   274,   810,  1191,   861,   849,  1947,  1795,
    1194,  1195,  1794,   293,  1948,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,  1949,  1142,   305,   306,
    1686,  1554,    73,    74,  1803,  1542,    75,   307,   308,   913,
    1955,   888,  1689,  1545,     0,  1874,     0,  1962,    76,     0,
       0,    77,     0,     0,   309,   310,   311,   312,   313,   314,
     315,     0,    78,     0,     0,   267,   268,   269,     0,     0,
       0,     0,   316,    79,     0,     0,   163,   165,   166,   167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,   318,     0,     0,
      87,   319,     0,    88,     0,    89,    90,    91,     0,     0,
       0,   320,    92,    93,     0,   226,     0,     0,     0,     0,
       0,   321,   322,   323,   324,   325,     0,   326,   327,    94,
      95,   328,   329,    96,   330,    97,    98,    99,   100,   101,
     102,   103,     0,   104,   331,   105,   106,   107,   108,     0,
     109,   332,   110,   227,     0,     0,   228,     0,   111,  1160,
     707,   708,   112,   868,     0,     0,     0,     0,     0,   870,
       0,     0,     0,   697,     0,     0,     0,     0,     0,   335,
     336,     0,     0,     0,   337,   338,   339,     0,     0,     0,
       0,  1193,     0,     0,  1196,     0,   341,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
     229,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,   117,   697,   697,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,  1234,     0,   132,   133,     0,   134,     0,     0,   135,
     230,   136,     0,     0,     0,   137,   138,   988,     0,   988,
       0,     0,   342,   343,   344,   345,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,   346,     0,     0,     0,
     347,   348,     0,   697,     0,     0,     0,     0,     0,     0,
       0,   697,     0,     0,     0,   144,     0,     0,     0,     0,
     145,   146,     0,   231,   232,   233,   234,   235,   236,     0,
       0,     0,     0,     0,     0,   237,   238,   239,   240,     0,
       0,   350,     0,     0,     0,     0,   516,   517,   518,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   519,     0,     0,   241,   520,   521,   522,   307,   308,
     523,   524,   525,   526,   527,   528,   529,   530,   531,     0,
       0,     0,     0,   243,     0,     0,   244,     0,   245,   516,
     517,   518,     0,   532,   533,   534,     0,     0,     0,     0,
       0,     0,     0,     0,   519,     0,     0,     0,   520,   521,
     522,   307,   308,   523,   524,   525,   526,   527,   528,   529,
     530,   531,     0,     0,   246,   842,     0,     0,     0,     0,
       0,     0,     0,   516,   517,   518,   532,   533,   534,     0,
       0,     0,  1355,     0,     0,     0,   870,     0,   519,     0,
       0,  1366,   520,   521,   522,   307,   308,   523,   524,   525,
     526,   527,   528,   529,   530,   531,     0,     0,  1318,  1319,
       0,     0,     0,     0,  1396,  1397,  1398,  1399,     0,     0,
     532,   533,   534,     0,   697,     0,     0,     0,     0,     0,
    1404,   697,     0,   697,     0,     0,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,     0,   988,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,  1108,     0,   163,   165,   166,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
       0,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,   535,   536,   537,   538,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,  1537,     0,     0,  1366,     0,   111,
      13,  1203,     0,   112,     0,  1160,   535,   536,   537,   538,
       0,     0,   868,     0,     0,   868,     0,     0,     0,     0,
       0,     0,     0,     0,   697,   697,   697,   697,     0,     0,
       0,     0,     0,     0,   697,     0,     0,     0,     0,     0,
       0,     0,     0,  1647,     0,     0,   113,   114,     0,     0,
     535,   536,   537,   538,   115,     0,     0,     0,   116,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,  1640,
     135,     0,   136,  -217,     0,     0,   137,   138,     0,     0,
     592,     0,     0,   139,   140,   141,   142,     0,     0,     0,
    -217,     0,     0,   143,     0,  -217,  -217,     0,     0,     0,
       0,     0,     0,     0,   516,   517,   518,   868,     0,     0,
       0,     0,     0,     0,     0,     0,   144,     0,     0,   519,
       0,   145,   146,   520,   521,   522,   307,   308,   523,   524,
     525,   526,   527,   528,   529,   530,   531,  -217,     0,  -217,
     921,     0,     0,     0,     0,     0,     0,     0,     0,  1366,
       0,   532,   533,   534,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1184,     0,     0,     0,     0,
       0,  1709,     0,  1710,     0,     0,  1711,     0,     0,     0,
    -217,  -217,  -217,     0,     0,     0,     0,     0,   643,     0,
       0,     0,     0,     0,     0,   842,     0,     0,     0,   868,
       0,     0,  -217,     0,  -217,     0,     0,     0,   868,     0,
    -217,  -217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -217,     0,     0,  -217,     0,     0,     0,     0,  -217,
       0,     0,     0,     0,  -217,     0,     0,     0,     0,     0,
       0,   643,     0,     0,     0,     0,   644,   645,   646,   647,
     648,     0,     0,     0,   649,   650,   651,   652,   653,     0,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,     0,     0,     0,  1789,  1537,  1537,     0,  1537,
       0,     0,     0,   643,     0,     0,     0,     0,     0,     0,
       0,     0,  -217,   868,     0,     0,     0,     0,     0,   644,
     645,   646,   647,   648,     0,     0,     0,   649,   650,   651,
     652,   653,   868,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1835,   644,   645,   646,   647,   648,  1840,     0,     0,   649,
     650,   651,   652,   653,     0,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,     0,     0,
       0,   535,   536,   537,   538,     0,     0,     0,     0,     0,
     293,     0,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,  1185,     0,   305,   306,     0,     0,    73,
      74,     0,     0,    75,   307,   308,     0,     0,  1908,     0,
       0,     0,     0,     0,     0,    76,     0,     0,    77,     0,
       0,   309,   310,   311,   312,   313,   314,   315,     0,    78,
       0,     0,   267,   268,   269,     0,     0,     0,     0,   316,
      79,     0,     0,   163,   165,   166,   167,     0,     0,   909,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,  1789,    82,     0,  1537,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
     317,     0,   868,     0,   318,     0,     0,    87,   319,     0,
      88,     0,    89,    90,    91,  1973,     0,     0,   320,    92,
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
       0,     0,   144,     0,     0,     0,     0,   145,   146,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   349,   293,   350,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
       0,     0,   305,   306,     0,     0,    73,    74,     0,     0,
      75,   307,   308,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,    77,     0,     0,   309,   310,
     311,   312,   313,   314,   315,     0,    78,     0,     0,   267,
     268,   269,     0,     0,     0,     0,   316,    79,     0,     0,
       0,   165,   166,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,   317,     0,     0,
       0,   318,     0,     0,    87,   319,     0,    88,     0,    89,
      90,    91,     0,     0,     0,   320,    92,    93,     0,     0,
       0,     0,     0,     0,     0,   321,   322,   323,   324,   325,
       0,   326,   327,    94,    95,   328,   329,    96,   330,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   331,   105,
     106,   107,   108,     0,   109,   332,   110,     0,     0,     0,
       0,     0,   111,     0,   333,     0,   112,   334,     0,   949,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   950,
     951,     0,     0,   335,   336,     0,     0,     0,   337,   338,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,   144,
       0,     0,     0,     0,   145,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   349,   293,   350,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,     0,     0,   305,
     306,     0,     0,    73,    74,     0,     0,    75,   307,   308,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,   309,   310,   311,   312,   313,
     314,   315,     0,    78,     0,     0,   267,   268,   269,     0,
       0,     0,     0,   316,    79,     0,     0,   163,   165,   166,
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
      13,   591,     0,   112,   334,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     335,   336,     0,     0,     0,   337,   338,   339,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   341,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   116,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,     0,   136,     0,     0,     0,  1633,   138,     0,     0,
       0,     0,     0,   342,   343,   344,   345,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,   346,     0,     0,
       0,   347,   348,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,     0,     0,     0,
       0,   145,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     349,   293,   350,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,     0,     0,   305,   306,     0,     0,
      73,    74,     0,     0,    75,   307,   308,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,    77,
       0,     0,   309,   310,   311,   312,   313,   314,   315,     0,
      78,     0,     0,   267,   268,   269,     0,     0,     0,     0,
     316,    79,     0,     0,     0,   165,   166,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    84,    85,    86,     0,     0,     0,
       0,   317,     0,     0,     0,   318,     0,     0,    87,   319,
       0,    88,     0,    89,    90,    91,     0,     0,     0,   320,
      92,    93,     0,     0,     0,     0,     0,     0,     0,   321,
     322,   323,   324,   325,     0,   326,   327,    94,    95,   328,
     329,    96,   330,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   331,   105,   106,   107,   108,     0,   109,   332,
     110,     0,     0,     0,     0,     0,   111,     0,   333,     0,
     112,   334,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,   336,     0,
       0,     0,   337,   338,   339,     0,     0,     0,     0,     0,
       0,   340,     0,     0,   341,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,     0,     0,     0,     0,
       0,   129,     0,     0,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,     0,     0,   135,     0,   136,
       0,     0,     0,   137,   138,     0,     0,     0,     0,     0,
     342,   343,   344,   345,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,   346,     0,     0,     0,   347,   348,
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
     144,     0,     0,     0,     0,   145,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   349,   293,   350,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,     0,     0,
     305,   306,     0,     0,    73,    74,     0,     0,    75,   307,
     308,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,    77,     0,     0,   309,   310,   311,   312,
     313,   314,   315,     0,    78,     0,     0,   267,   268,   269,
       0,     0,     0,     0,   316,    79,     0,     0,     0,   165,
     166,   167,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,   318,
       0,     0,    87,   319,     0,    88,     0,    89,    90,    91,
       0,     0,     0,   320,    92,    93,     0,     0,     0,     0,
       0,     0,     0,   321,   322,   323,   324,   325,     0,   326,
     327,    94,    95,   328,   329,    96,   330,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   331,   105,   106,   107,
     108,     0,   109,   332,   110,     0,     0,     0,     0,     0,
     111,     0,   601,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1720,     0,     0,     0,     0,
       0,   335,   336,     0,     0,     0,   337,   338,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
       0,     0,     0,     0,     0,   129,     0,     0,   130,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   135,     0,   136,     0,     0,     0,   137,   138,     0,
       0,     0,     0,     0,   342,   343,   344,   345,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   346,     0,
       0,     0,   347,   348,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,     0,     0,
       0,     0,   145,   146,     0,     0,     0,     0,     0,     0,
    1721,     0,     0,     0,     0,     0,     0,  1722,     0,     0,
       0,     0,   293,   350,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,     0,     0,   305,   306,     0,
       0,    73,    74,     0,     0,    75,   307,   308,     0,     0,
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
     321,   322,   323,   324,   325,     0,   326,   327,    94,    95,
     328,   329,    96,   330,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   331,   105,   106,   107,   108,     0,   109,
     332,   110,     0,     0,     0,     0,     0,   111,     0,   601,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   985,     0,     0,   335,   336,
       0,     0,     0,   337,   338,   339,     0,     0,     0,     0,
       0,     0,   986,     0,     0,   341,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   987,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,     0,
     136,     0,     0,     0,   137,   138,     0,     0,     0,     0,
       0,   342,   343,   344,   345,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,   346,     0,     0,     0,   347,
     348,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     103,   876,   104,   331,   105,   106,   107,   108,     0,   109,
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
     321,   322,   323,   324,   325,     0,   326,   327,    94,    95,
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
       0,     0,     0,     0,   144,     0,     0,     0,     0,   145,
     146,     0,     0,     0,     0,     0,     0,  1721,     0,     0,
       0,     0,     0,     0,  1722,     0,     0,     0,     0,   293,
     350,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,     0,     0,   305,   306,     0,     0,    73,    74,
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
     324,   325,     0,   326,   327,    94,    95,   328,   329,    96,
     330,    97,    98,    99,   100,   101,   102,   103,     0,   104,
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
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,   145,   146,     0,   293,     0,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,   350,    73,    74,     0,     0,    75,
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
       0,   111,     0,   601,   695,   112,     0,     0,     0,     0,
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
       0,     0,     0,   347,   348,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,   145,   146,     0,   293,     0,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,   350,    73,    74,     0,     0,    75,
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
       0,   111,     0,   601,     0,   112,     0,   969,     0,     0,
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
       0,     0,     0,   347,   348,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,   145,   146,     0,   293,     0,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,   350,    73,    74,     0,     0,    75,
     307,   308,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,   309,   310,   311,
     312,   313,   314,   315,     0,    78,     0,     0,   267,   268,
     269,     0,     0,     0,     0,   316,    79,     0,     0,   163,
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
       0,   111,     0,   707,     0,   112,     0,     0,     0,     0,
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
       0,     0,     0,   347,   348,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,   145,   146,     0,   293,     0,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,   350,    73,    74,     0,     0,    75,
     307,   308,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,   309,   310,   311,
     312,   313,   314,   315,     0,    78,     0,     0,   267,   268,
     269,     0,     0,     0,     0,   316,    79,     0,     0,     0,
     165,   166,   167,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,  1364,     0,     0,    82,     0,
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
     119,   120,   121,   122,   123,   124,   125,   126,   127,  1365,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,     0,   136,     0,     0,     0,   137,   138,
       0,     0,     0,     0,     0,   342,   343,   344,   345,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,   346,
       0,     0,     0,   347,   348,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,   145,   146,     0,   293,     0,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,   350,    73,    74,     0,     0,    75,
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
    1637,     0,     0,   347,   348,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,   145,   146,     0,   293,     0,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,   350,    73,    74,     0,     0,    75,
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
       0,     0,     0,     0,   321,   322,   323,   324,   325,  1536,
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
       0,     0,     0,   347,   348,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,   145,   146,     0,   293,     0,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,     0,
       0,   305,   306,     0,   350,    73,    74,     0,     0,    75,
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
       0,     0,     0,     0,     0,   342,   343,   344,   345,    67,
      68,    69,    70,    71,    72,   143,     0,     0,     0,   346,
       0,     0,     0,   347,   348,     0,    73,    74,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,    76,   145,   146,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,   350,     0,     0,    79,     0,     0,
       0,   165,   166,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,     0,    81,     0,     0,    82,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    88,     0,    89,
      90,    91,     0,   643,     0,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,     0,   105,
     106,   107,   108,  1583,   109,     0,   110,     0,     0,     0,
       0,     0,   111,     0,   920,     0,   112,     0,     0,     0,
       0,   644,   645,   646,   647,   648,     0,     0,     0,   649,
     650,   651,   652,   653,     0,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,     0,     0,     0,     0,     0,   129,     0,     0,
     130,     0,     0,     0,   131,     0,     0,   132,   133,     0,
     134,     0,     0,   135,     0,   136,     0,     0,     0,   137,
     138,     0,     0,     0,     0,     0,   139,   140,   141,   142,
      67,    68,    69,    70,    71,    72,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,   144,
       0,     0,     0,    76,   145,   146,    77,     0,  1584,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,   921,     0,     0,     0,     0,    79,     3,
       4,  1461,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1462,     0,     0,    81,     0,     0,
    1463,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,     0,     0,     0,     0,    92,    93,   643,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,     0,   109,     0,   110,     0,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   644,   645,   646,
     647,   648,     0,     0,     0,   649,   650,   651,   652,   653,
       0,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,    15,   116,     0,     0,     0,     0,     0,   117,    16,
    1465,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,    26,     0,     0,     0,     0,   129,    27,
      28,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,    29,   136,  1466,    30,     0,
     137,   138,     0,     0,     0,     0,     0,   139,   140,   141,
     142,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,  1467,     0,     0,  1910,     0,     0,  1468,  1911,  -336,
       0,     0,     0,     0,    31,     0,     0,     0,     0,     0,
     144,     0,     0,     0,     0,   145,   146,    67,    68,    69,
      70,    71,    72,     0,  1182,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     3,     4,  1461,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,  1462,     0,     0,    81,     0,     0,  1463,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,     0,    89,    90,    91,
       0,     0,     0,     0,    92,    93,   643,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,     0,   109,     0,   110,     0,     0,     0,     0,     0,
     111,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   644,   645,   646,   647,   648,     0,
       0,     0,   649,   650,   651,   652,   653,     0,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,    15,   116,
       0,     0,     0,     0,  1464,   117,    16,  1465,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
      26,     0,     0,     0,     0,   129,    27,    28,   130,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   135,    29,   136,  1466,    30,     0,   137,   138,     0,
       0,     0,     0,     0,   139,   140,   141,   142,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,  1467,     0,
       0,     0,     0,     0,  1468,     0,     0,     0,     0,  1469,
       0,    31,     0,     0,     0,     0,     0,   144,     0,     0,
       0,     0,   145,   146,    67,    68,    69,    70,    71,    72,
       0,  1198,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     3,     4,  1461,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,  1462,     0,
       0,    81,     0,     0,  1463,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,    89,    90,    91,     0,     0,     0,
       0,    92,    93,   643,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,   111,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   644,   645,   646,   647,   648,     0,     0,     0,   649,
     650,   651,   652,   653,     0,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,    15,   116,     0,     0,     0,
       0,  1762,   117,    16,  1465,  1763,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,    26,     0,     0,
       0,     0,   129,    27,    28,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,    29,
     136,  1466,    30,     0,   137,   138,     0,     0,     0,     0,
       0,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,  1467,     0,     0,     0,     0,
       0,  1468,     0,     0,     0,     0,  1469,     0,    31,     0,
       0,     0,     0,     0,   144,     0,     0,     0,     0,   145,
     146,    67,    68,    69,    70,    71,    72,     0,  1579,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
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
       0,     0,    15,   116,     0,     0,     0,     0,     0,   117,
      16,  1465,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,    26,     0,     0,     0,     0,   129,
      27,    28,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,    29,   136,  1466,    30,
       0,   137,   138,     0,     0,     0,     0,     0,   139,   140,
     141,   142,  1754,     0,     0,     0,     0,     0,   143,     0,
       0,     0,  1467,     0,     0,     0,     0,     0,  1468,     0,
    -336,     0,     0,     0,     0,    31,     0,     0,     0,     0,
       0,   144,     0,     0,     0,     0,   145,   146,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     3,     4,  1461,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,  1462,     0,     0,    81,     0,     0,  1463,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,   643,     0,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,     0,   109,     0,   110,     0,     0,     0,     0,
       0,   111,     0,     0,     0,   112,     0,     0,     0,   644,
     645,   646,   647,   648,     0,     0,     0,   649,   650,   651,
     652,   653,     0,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,    15,
     116,     0,     0,     0,     0,     0,   117,    16,  1465,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   666,
     128,    26,     0,     0,     0,     0,   129,    27,    28,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,    29,   136,  1466,    30,     0,   137,   138,
       0,     0,     0,     0,     0,   139,   140,   141,   142,    67,
      68,    69,    70,    71,    72,   143,     0,     0,     0,  1467,
       0,     0,     0,     0,     0,  1468,    73,    74,     0,     0,
      75,  1981,    31,     0,     0,     0,     0,     0,   144,     0,
       0,     0,    76,   145,   146,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     3,     4,
    1461,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1462,     0,     0,    81,     0,     0,  1463,
       0,     0,     0,     0,     0,    83,  1228,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    88,     0,    89,
      90,    91,     0,   643,     0,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,     0,   105,
     106,   107,   108,     0,   109,     0,   110,     0,     0,     0,
       0,     0,   111,     0,     0,     0,   112,     0,     0,     0,
       0,   644,   645,   646,   647,   648,     0,     0,     0,   649,
     650,   651,   652,   653,     0,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
      15,   116,     0,     0,     0,     0,     0,   117,    16,  1465,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,    26,     0,     0,     0,     0,   129,    27,    28,
     130,     0,     0,     0,   131,     0,     0,   132,   133,     0,
     134,     0,     0,   135,    29,   136,  1466,    30,     0,   137,
     138,     0,     0,     0,     0,     0,   139,   140,   141,   142,
      67,    68,    69,    70,    71,    72,   143,     0,     0,     0,
    1467,     0,     0,     0,     0,     0,  1468,    73,    74,     0,
       0,    75,     0,    31,     0,     0,     0,     0,     0,   144,
       0,     0,     0,    76,   145,   146,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     3,
       4,  1461,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1462,     0,     0,    81,     0,     0,
    1463,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,  1581,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,     0,     0,     0,   643,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,     0,   109,  1582,   110,     0,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,   644,   645,   646,   647,   648,     0,
       0,     0,   649,   650,   651,   652,   653,     0,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,     0,     0,     0,   117,    16,
    1465,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,    27,
      28,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,    29,   136,  1466,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   139,   140,   141,
     142,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,  1467,     0,     0,     0,     0,     0,  1468,     0,     0,
       0,     0,  1938,     0,    31,     0,     0,     0,     0,     0,
     144,     0,     0,     0,     0,   145,   146,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     3,     4,  1461,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,  1462,     0,     0,    81,     0,     0,  1463,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,     0,    89,    90,    91,
     643,     0,     0,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,     0,   109,     0,   110,     0,     0,     0,     0,     0,
     111,     0,     0,     0,   112,     0,     0,     0,   644,   645,
     646,   647,   648,     0,     0,     0,   649,   650,   651,   652,
     653,     0,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,     0,     0,     0,     0,     0,     0,
    1134,  1135,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,   117,    16,  1465,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
       0,     0,     0,     0,     0,   129,    27,    28,   130,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   135,    29,   136,  1466,     0,     0,   137,   138,     0,
       0,     0,     0,     0,   139,   140,   141,   142,    67,    68,
      69,    70,    71,    72,   143,     0,     0,     0,  1467,     0,
     226,     0,     0,     0,  1468,    73,    74,     0,     0,    75,
    2028,    31,     0,     0,     0,     0,     0,   144,     0,     0,
       0,    76,   145,   146,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,   228,     0,     0,     0,     0,    79,     0,     0,     0,
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
       0,    67,    68,    69,   992,   993,   994,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,     0,    75,     0,     0,     0,     0,     0,   276,   277,
     233,   234,   235,   236,    76,     0,   115,    77,     0,     0,
     116,     0,     0,     0,     0,     0,   117,     0,    78,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    79,
     128,     0,     0,   165,   166,   167,   129,     0,     0,   130,
       0,     0,     0,   131,     0,    80,   132,   133,    81,   134,
       0,    82,   135,     0,   136,     0,     0,    83,   278,   138,
       0,     0,    84,    85,    86,   139,   140,   141,   142,     0,
       0,     0,     0,     0,     0,   143,    87,     0,     0,    88,
       0,    89,    90,    91,     0,     0,     0,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,   145,   146,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,    69,   992,   993,   994,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   995,
       0,    73,    74,     0,     0,    75,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,    76,     0,   115,
      77,     0,     0,   116,     0,     0,     0,     0,     0,   117,
       0,    78,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,    79,   128,     0,     0,   165,   166,   167,   129,
       0,     0,   130,     0,     0,     0,   131,     0,    80,   132,
     133,    81,   134,     0,    82,   135,     0,   136,     0,     0,
      83,   137,   138,     0,     0,    84,    85,    86,   139,   140,
     141,   142,     0,     0,     0,     0,     0,     0,   143,    87,
       0,     0,    88,     0,    89,    90,    91,     0,     0,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,     0,   145,   146,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,   111,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1435,     0,    73,    74,     0,     0,    75,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
      76,     0,   115,    77,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,    78,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,    79,   128,     0,     0,   165,
     166,   167,   129,     0,     0,   130,     0,     0,     0,   131,
       0,    80,   132,   133,    81,   134,     0,    82,   135,     0,
     136,     0,     0,    83,   137,   138,     0,     0,    84,    85,
      86,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,    87,     0,     0,    88,     0,    89,    90,    91,
       0,   643,     0,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,   144,     0,     0,     0,     0,   145,
     146,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,     0,   109,     0,   110,     0,     0,     0,     0,     0,
     111,  1183,     0,     0,   112,     0,     0,     0,     0,   644,
     645,   646,   647,   648,     0,     0,     0,   649,   650,   651,
     652,   653,     0,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,   117,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
       0,     0,     0,     0,     0,   129,     0,     0,   130,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   135,     0,   136,     0,     0,     0,   137,   138,     0,
       0,     0,     0,     0,   139,   140,   141,   142,    67,    68,
      69,    70,    71,    72,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,   144,     0,     0,
       0,    76,   145,   146,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,   267,   268,
     269,     0,     0,     0,     0,     0,   270,     0,     0,     0,
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
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,     0,    75,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,    76,     0,   115,    77,     0,     0,
     116,     0,     0,     0,     0,     0,   117,     0,    78,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    79,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   271,
       0,     0,     0,   131,     0,    80,   132,   133,    81,   134,
       0,    82,   272,     0,   136,     0,     0,    83,   137,   138,
       0,     0,    84,    85,    86,   139,   273,   141,   142,     0,
       0,     0,     0,     0,     0,   143,    87,     0,     0,    88,
       0,    89,    90,    91,     0,     0,     0,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,   145,   146,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,     0,   109,     0,   720,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,    69,   992,   993,   994,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,    75,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,    76,     0,   115,
      77,     0,     0,   116,   257,   258,   259,     0,     0,   117,
       0,    78,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,    79,   128,     0,     0,   165,   166,   167,   129,
       0,     0,   130,     0,     0,     0,   131,     0,    80,   132,
     133,    81,   134,     0,    82,   135,     0,   136,     0,     0,
      83,   721,   138,     0,     0,    84,    85,    86,   139,   140,
     141,   142,     0,     0,     0,     0,     0,     0,   143,    87,
       0,     0,    88,     0,    89,    90,    91,     0,     0,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,     0,   145,   146,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,   111,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,    75,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
      76,     0,   115,    77,     0,     0,   116,     0,     0,     0,
       0,     0,   117,     0,    78,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,    79,   128,     0,   163,     0,
       0,     0,   129,     0,     0,   130,     0,     0,     0,   131,
       0,    80,   132,   133,    81,   134,     0,    82,   135,     0,
     136,     0,     0,    83,   137,   138,     0,     0,    84,    85,
      86,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,    87,     0,     0,    88,     0,    89,    90,    91,
       0,     0,     0,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,   144,     0,     0,     0,     0,   145,
     146,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,     0,   109,     0,   110,     0,     0,     0,     0,     0,
     111,     0,    14,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    75,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,    76,     0,   115,    77,     0,     0,   116,
       0,     0,     0,     0,     0,   117,     0,    78,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,    79,   128,
       0,     0,     0,     0,     0,   129,     0,     0,   130,     0,
       0,     0,   131,     0,    80,   132,   133,    81,   134,     0,
      82,   135,     0,   136,     0,     0,    83,   137,   138,     0,
       0,    84,    85,    86,   139,   140,   141,   142,     0,     0,
       0,     0,     0,     0,   143,    87,     0,     0,    88,     0,
      89,    90,    91,     0,     0,     0,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,   144,     0,     0,
       0,     0,   145,   146,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,     0,   109,     0,   110,     0,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,  1081,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,     0,     0,    75,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,    76,     0,   115,    77,
    1082,     0,   116,     0,     0,     0,     0,     0,   117,     0,
      78,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,    79,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,    80,   132,   133,
      81,   134,     0,    82,   135,     0,   136,     0,     0,    83,
     137,   138,     0,     0,    84,    85,    86,   139,   140,   141,
     142,     0,     0,     0,     0,     0,     0,   143,    87,     0,
       0,    88,     0,    89,    90,    91,     0,     0,     0,     0,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
     144,     0,     0,     0,     0,   145,   146,    94,    95,     0,
       0,    96,     0,    97,    98,    99,   100,   101,   102,   103,
       0,   104,     0,   105,   106,   107,   108,     0,   109,     0,
     110,     0,     0,     0,     0,     0,   111,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,    76,
       0,   115,    77,     0,     0,   116,     0,     0,     0,     0,
       0,   117,     0,    78,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,    79,   128,     0,     0,     0,     0,
       0,   129,     0,     0,   130,     0,     0,     0,   131,     0,
      80,   132,   133,    81,   134,     0,    82,   135,   453,   136,
       0,     0,    83,   137,   138,     0,     0,    84,    85,    86,
     139,   140,   141,   142,     0,     0,     0,     0,     0,     0,
     143,    87,     0,     0,    88,     0,    89,    90,    91,     0,
       0,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,   144,     0,     0,     0,     0,   145,   146,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,     0,     0,     0,     0,     0,   111,
       0,   420,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,     0,
      75,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,    76,     0,   115,    77,     0,     0,   116,     0,
       0,     0,     0,     0,   117,     0,    78,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,    79,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
       0,   131,     0,    80,   132,   133,    81,   134,     0,    82,
     135,     0,   136,     0,     0,    83,   137,   138,     0,     0,
      84,    85,    86,   139,   140,   141,   142,     0,     0,     0,
       0,     0,     0,   143,    87,     0,     0,    88,     0,    89,
      90,    91,     0,     0,     0,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,   144,     0,     0,     0,
       0,   145,   146,    94,    95,     0,     0,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,     0,   105,
     106,   107,   108,     0,   109,     0,   110,     0,     0,     0,
       0,     0,   111,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1069,     0,    73,
      74,     0,     0,    75,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,    76,     0,   115,    77,     0,
       0,   116,     0,     0,     0,     0,     0,   117,     0,    78,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
      79,   128,     0,     0,     0,     0,     0,   129,     0,     0,
     130,     0,     0,     0,   131,     0,    80,   132,   133,    81,
     134,     0,    82,   135,     0,   136,     0,     0,    83,   137,
     138,     0,     0,    84,    85,    86,   139,   140,   141,   142,
       0,     0,     0,     0,     0,     0,   143,    87,     0,     0,
      88,     0,    89,    90,    91,     0,     0,     0,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,   144,
       0,     0,     0,     0,   145,   146,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,     0,   109,     0,   110,
       0,     0,     0,     0,     0,   111,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,    75,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,    76,     0,
     115,    77,  1082,     0,   116,     0,     0,     0,     0,     0,
     117,     0,    78,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,    79,   128,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,     0,     0,   131,     0,    80,
     132,   133,    81,   134,     0,    82,   135,     0,   136,     0,
       0,    83,   137,   138,     0,     0,    84,    85,    86,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
      87,     0,     0,    88,     0,    89,    90,    91,     0,     0,
       0,     0,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,   144,     0,     0,     0,     0,   145,   146,    94,
      95,     0,     0,    96,     0,    97,    98,    99,   100,   101,
     102,   103,     0,   104,     0,   105,   106,   107,   108,     0,
     109,     0,   110,     0,     0,     0,     0,     0,   111,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    75,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,    76,     0,   115,    77,     0,     0,   116,     0,     0,
       0,     0,     0,   117,     0,    78,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,    79,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,     0,    80,   132,   133,    81,   134,     0,    82,   135,
       0,   136,     0,     0,    83,   137,   138,     0,     0,    84,
      85,    86,   139,   140,   141,   142,     0,     0,     0,     0,
       0,     0,   143,    87,     0,     0,    88,     0,    89,    90,
      91,     0,     0,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,   144,     0,     0,     0,     0,
     145,   146,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,     0,   109,     0,   110,     0,     0,     0,     0,
       0,   111,     0,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,     0,    75,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,    76,     0,   481,    77,     0,     0,
     116,     0,     0,     0,     0,     0,   117,     0,    78,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    79,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,    80,   132,   133,    81,   134,
       0,    82,   135,     0,   136,     0,     0,    83,   137,   138,
       0,     0,    84,    85,    86,   139,   140,   141,   142,     0,
       0,     0,     0,     0,     0,   143,    87,     0,     0,    88,
       0,    89,    90,    91,     0,   643,     0,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,   145,   146,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,  1535,   109,     0,   110,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,     0,   644,   645,   646,   647,   648,     0,     0,
       0,   649,   650,   651,   652,   653,     0,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,   643,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,     0,     0,     0,     0,     0,   129,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,  1580,   135,     0,   136,   643,     0,
       0,   137,   138,     0,     0,     0,     0,     0,   139,   140,
     141,   142,   644,   645,   646,   647,   648,     0,   143,     0,
     649,   650,   651,   652,   653,     0,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,  1586,     0,
       0,  1218,   643,     0,     0,     0,   145,   146,     0,     0,
       0,     0,     0,     0,     0,     0,   644,   645,   646,   647,
     648,     0,     0,     0,   649,   650,   651,   652,   653,     0,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,  1813,     0,     0,     0,   643,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     644,   645,   646,   647,   648,     0,     0,     0,   649,   650,
     651,   652,   653,     0,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,  1814,     0,     0,     0,
     643,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   644,   645,   646,   647,   648,     0,
       0,     0,   649,   650,   651,   652,   653,   643,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
    1815,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   644,   645,
     646,   647,   648,     0,     0,     0,   649,   650,   651,   652,
     653,     0,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,     0,   644,   645,   646,   647,   648,
       0,     0,     0,   649,   650,   651,   652,   653,     0,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665
};

static const yytype_int16 yycheck[] =
{
       0,    17,   216,   406,   162,   291,     0,    25,     4,    36,
     163,   291,     0,     9,   172,   624,   757,    13,     0,   765,
     281,    17,    18,   281,     0,   423,  1054,   217,   537,   577,
       0,   672,   190,   191,   927,   928,     0,   195,  1352,    35,
      36,   281,   580,   426,    84,   582,    27,   317,   784,     3,
     588,   211,    11,   590,    16,  1288,   942,   943,   536,   455,
       3,     0,    11,  1507,   920,    14,   102,   553,  1078,    82,
      66,   107,   775,   776,   425,   498,   499,     4,  1078,   872,
    1168,   874,    14,   333,   334,     3,   171,   443,   169,   741,
     171,    18,   885,   106,   746,    11,  1418,  1684,   262,   349,
    1687,  1867,    27,   186,   496,   281,   333,  1421,   277,   501,
     502,   503,   148,   275,   170,  1429,   170,   108,   155,   155,
      66,    58,   293,   294,   295,   275,   406,   107,    66,    11,
     108,     0,    67,   108,   169,   122,   152,    58,  1421,    66,
       5,     6,     7,     8,     9,    10,  1429,     5,   108,   297,
      66,   299,    87,    11,    82,   169,   152,   153,   320,   146,
     336,  1414,   158,   514,   247,    86,    55,   336,   148,   553,
     320,   342,   336,   173,   174,   175,   176,   177,   178,   173,
     174,   175,   176,   177,   178,   173,   174,   175,   176,   177,
     178,   173,   174,   175,   176,   177,   178,   173,   174,   175,
     176,   177,   178,   173,   174,   175,   176,   177,   178,   173,
     174,   175,   176,   177,   178,   701,   212,   213,   214,   390,
     391,     0,  1666,   112,   170,   108,   153,   170,   209,    64,
     612,   227,   170,   229,   173,   174,   175,   176,   177,   178,
     168,   237,   238,   239,   240,   241,   242,   243,    83,   245,
     246,   336,  2018,   169,   170,   336,   252,   253,     0,     3,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     621,   189,   190,   463,  1596,   271,   272,   680,     0,   315,
      66,   337,   278,   337,   216,  1872,   213,   214,   170,   460,
     170,   451,   675,  1303,   334,   291,   292,  1385,   170,   336,
     336,   336,   229,  1303,   173,   174,   175,   176,   177,   178,
     237,   238,   239,   240,  1050,   328,   243,   701,   245,   246,
     333,   830,   336,    42,    43,   321,   253,   485,   555,   256,
     257,   258,   259,   258,   261,   262,   263,   264,   265,   566,
     567,   591,  1595,   881,   985,   336,   987,  1203,   285,   311,
     887,   278,   748,   831,   624,  1642,   740,   741,   336,   313,
    1063,   336,   746,    82,   591,   851,   171,  1681,   364,   312,
      66,   794,   728,   729,   601,   258,  1169,   107,   294,  1172,
    1032,   631,   341,   169,   170,  1505,   275,   108,   171,   616,
     336,   641,   341,   171,   173,   174,   175,   176,   177,   178,
     171,   333,   267,   630,   796,   797,   798,   423,     3,   170,
    1643,     3,   130,   248,  1858,  1648,    64,    65,    66,    67,
     262,   417,     3,     3,   420,   169,   170,   423,   248,   170,
     426,   173,   174,   175,   176,   177,   178,   364,   160,   258,
     171,   823,   824,   186,   615,    21,    22,    82,   107,   445,
     270,   173,   174,   175,   176,   177,   178,   337,    53,   171,
     246,   442,   171,    82,  1751,   337,   462,   851,   171,    80,
    1757,  1885,   107,   169,   170,   471,   472,   473,   474,   475,
     707,   171,    66,    86,   171,   481,   747,   171,   515,   747,
     171,   487,   488,   279,   336,   491,  1616,   493,   494,   495,
     171,   171,   434,   764,   247,   171,   764,   747,  1394,  1395,
     165,   166,   167,   509,   173,   898,   246,   513,   445,   515,
      64,    65,    66,    67,   764,  1758,   107,   171,   171,    78,
      55,   336,   336,     0,   171,   462,   340,   258,   157,  1953,
     891,   160,   800,   539,   471,   472,   473,   474,   475,   225,
    1837,   270,   813,   336,   333,   813,   171,   171,   336,  1846,
     800,   488,   171,     0,   491,   336,   493,   494,   495,   855,
    1363,   761,   149,   813,   151,   855,   337,  1313,   170,  1127,
     112,  1374,    16,   279,   854,   169,   170,   112,  1381,   169,
     170,   609,   101,   611,   170,   558,   337,   245,  1207,   275,
     276,   759,   171,  1244,  1213,   336,  1215,   171,   624,     5,
       6,     7,     8,     9,    10,   107,   171,  1154,   171,   151,
     268,  1908,    83,  1910,   336,    56,     0,   336,   624,   625,
     857,    62,   628,   336,    68,    69,    70,   162,    72,    73,
      74,    75,   186,   575,  1744,    98,   336,   897,  1032,   336,
     920,   822,   336,   669,   107,   336,   165,   166,   167,   591,
    1011,   186,   246,   270,   627,   336,   336,    66,   918,   601,
     336,   689,   734,   669,   297,   671,   299,   107,   139,   675,
     676,   173,   130,   953,   337,   340,     5,     6,     7,     8,
       9,    10,   336,   336,  1587,   279,   946,   947,    82,   336,
     762,   245,   227,   228,   229,   230,   173,   174,   175,   176,
     177,   178,  1104,  1741,  1742,   145,    66,   147,   148,  2006,
     173,   336,   336,   169,   268,   721,    85,   336,   130,   163,
     232,   256,   224,   904,   236,   906,   173,   174,   175,   176,
     177,   178,   187,   101,   676,    64,    65,    66,    67,  1849,
     275,  1851,   294,   170,   113,   280,   115,   116,   117,   118,
     119,   120,   758,  1033,   123,   309,   150,   336,   310,   153,
     169,   170,   336,   265,   155,   707,   268,   170,   774,   775,
     776,   336,   170,   336,   112,   337,   278,   783,   784,   314,
     171,   316,   131,   246,   721,   266,   575,    39,    40,   795,
     124,  1410,   820,  1412,   250,   129,  1415,   165,   166,   167,
     249,  1072,   591,   171,  1072,   633,   634,   635,   836,   169,
     170,   149,   601,   151,   270,   277,   265,   261,    70,   336,
    1091,   758,  1072,  1091,  1343,    87,   261,   155,    90,   278,
    1223,  1192,  1380,  1033,    96,  1383,   336,    87,  1199,   162,
    1201,  1091,   262,   171,    94,    95,   262,  1028,   254,   855,
    1243,   257,   858,    64,    65,    85,    67,   186,   795,    86,
    1060,   867,   211,   212,   213,   214,  1268,  1269,  1270,   875,
      11,  1095,  1096,  1624,  1625,   258,   882,  1148,  1149,   107,
    1148,  1149,   297,   113,   299,   115,   116,   117,   118,   119,
     120,   225,   898,   123,   920,   297,   124,   299,  1148,  1149,
     275,   129,   844,   845,   846,   228,   229,   230,   229,   165,
     166,   167,   246,   275,   920,   171,   245,   275,   707,   275,
     926,   927,   928,  1203,   314,   226,  1024,  1207,  1026,  1027,
     867,   275,    55,  1213,   229,  1215,     5,     6,     7,   268,
     223,   171,   165,   166,   167,   173,   315,   248,   171,   248,
     292,    20,   174,   254,   255,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,   174,
    1589,   270,   273,   275,   273,   274,   215,   216,   920,   275,
     309,   215,   216,    52,    53,    54,   165,   166,   167,   112,
     769,   770,   771,   772,   281,  1001,   224,   225,    42,    43,
     942,   943,   113,   114,   115,   116,   117,   118,   119,   120,
      88,    89,   123,   102,   793,    68,    69,    70,   246,    81,
      82,    74,    75,   336,  1030,  1031,  1316,   165,   166,   167,
     293,  1392,  1393,   171,  1040,  1041,     3,   265,  1044,   162,
     268,  1402,  1048,  1049,  1050,   251,   252,  1228,   318,   319,
     278,   173,   174,  1466,     3,   177,   178,  1063,   170,  1607,
     131,   170,  1068,   186,   170,  1333,    99,   100,  1078,   189,
     190,  1077,   275,   276,  1078,  1081,  1082,  1019,   181,   182,
     170,  1262,   170,  1333,    22,   315,   170,  1093,     5,     6,
       7,     8,     9,    10,   170,  1101,    92,    93,  1279,   122,
    1281,  1282,  1283,   170,   227,   228,   229,   230,    88,    89,
     174,   170,  1049,   177,   178,   179,   180,   181,   182,   183,
     184,   322,   323,   187,   188,   312,   313,   314,   315,  1078,
    1410,   920,  1412,   256,   170,  1415,   207,   208,   209,   210,
     211,   212,   213,   214,  1081,  1859,   269,  1861,  1862,  1863,
     320,   321,   275,  1701,    68,    69,    70,   280,    72,    73,
      74,    75,    64,    65,  1101,   175,   176,  1427,  1428,   753,
     754,   170,  1720,  1971,  1972,   170,   131,  1203,   286,   287,
     170,  1207,   170,   170,   170,  1422,   170,  1213,   170,  1215,
     315,   314,   170,   316,   551,   552,   170,  1203,   170,  1078,
     170,  1207,   170,   176,   315,   170,   337,  1213,   326,  1215,
    1500,  1501,  1218,   282,   283,   284,   285,  1223,  1224,   336,
    1628,  1492,  1493,  1494,  1492,  1493,  1494,   170,  1984,  1466,
     170,  1468,   326,   170,   277,    91,    97,  1243,   336,  1245,
     315,   295,  1492,  1493,  1494,   130,   130,   130,   130,   163,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     309,  1203,   109,   109,  1206,   108,   171,   336,   294,  1450,
     169,  1452,   336,   258,   232,   170,   170,  1009,   170,   169,
     246,   815,  1288,  1289,   818,   819,   820,   223,   229,  1326,
    1296,   170,   170,  1303,   170,   170,   170,   170,  1461,  1303,
     131,  1591,   836,   837,   838,   839,    17,  1313,    38,  1589,
    1338,   170,  1340,   170,  1342,   131,   170,   170,   170,  1347,
    1326,  1327,   170,   164,   174,   170,  1078,   177,   178,   179,
     180,   181,   182,   183,   184,   294,  1749,   187,   188,   174,
     174,    23,  1890,   337,    55,   171,  1352,    58,   109,   152,
      64,    65,    66,    67,  1303,  1592,   286,   287,   288,   289,
     290,   291,    76,    77,    78,    79,   233,   233,     3,  1375,
     170,    85,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,  1410,   171,  1412,   171,   169,  1415,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   170,
    1637,   112,   170,   170,  1410,   339,  1412,  1644,   203,  1415,
     279,   171,  1418,   170,  1203,  1421,    81,    78,   108,   131,
     238,   253,   174,  1429,  1303,   177,   178,   179,   180,   181,
     182,   183,   184,   277,   169,   187,   188,  1618,   102,  1465,
     269,  1622,   310,   276,   169,  1626,   170,   257,   233,    20,
     264,   162,  1394,  1395,    98,   169,   170,   315,    23,  1465,
     315,   102,   261,   108,   277,  1761,   286,   287,   288,   289,
     290,   291,   336,   315,   336,   155,   170,   189,   190,   191,
     192,   193,   101,   143,  1521,   197,   198,   199,   200,   201,
    1496,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   283,   215,   216,   217,   218,   219,   220,
     298,   336,   226,   171,   171,  1521,   227,   228,   229,   230,
     234,   235,   106,   237,   336,   308,   131,   336,  1465,   107,
     327,   171,   171,  1770,   248,   336,   170,   170,   170,    87,
     254,   255,  1548,   336,   257,   256,   108,  1728,   254,     0,
       1,  1303,   253,    89,   107,   311,   270,   108,   269,   273,
     253,   108,   261,  1589,   275,   171,   336,   278,   171,   280,
     286,   287,   288,   289,   290,   291,   171,  1848,   270,   317,
    1848,  1587,   261,  1589,   261,   171,   298,   336,   171,   171,
    1596,   171,   171,   336,   277,   309,   171,   336,  1848,   171,
      51,   171,  1628,   171,  1772,   316,   170,   336,   171,   336,
     171,   171,   315,    64,    65,    66,    67,  1623,   102,   171,
     158,  1917,  1628,  1629,   101,    76,    77,    78,    79,  1866,
     170,   170,   308,   170,    85,    74,   292,  1643,   171,    74,
      71,   170,  1648,   102,  1825,   105,   102,   171,   101,   171,
     171,   171,   262,   130,   262,   174,  1662,    16,   177,   178,
     179,   180,   181,   182,   183,   184,   315,   335,   336,   188,
     171,     3,   231,   341,  1911,  1681,  1682,   231,   346,   130,
       3,   336,   263,   260,   260,  1853,   169,   169,   165,   166,
     167,   170,  1698,   174,   171,    76,   177,   178,   179,   180,
     181,   182,   183,   184,   171,   171,   187,   188,   315,   171,
     140,  1982,   246,   140,  1982,   102,   171,   171,   169,   170,
     277,    74,   170,  1729,   171,  1662,   171,   323,   270,   246,
      82,   233,  1982,   170,   336,   336,   232,   306,  1744,   177,
     178,   179,   180,   181,   182,   183,   184,   233,   304,   226,
     188,   338,  1758,   169,   125,  1761,   170,   425,   325,   224,
     171,  1767,   336,   171,   171,   171,   434,   170,   261,   171,
     336,   248,   261,   261,   261,   226,   171,   254,   255,   337,
     171,   336,   159,   234,   235,   253,   237,   336,   239,   240,
     241,   242,   243,   244,   245,   336,   273,   248,   188,   269,
     107,   225,  1808,   254,   255,   233,   170,   170,   298,   170,
     268,   315,   107,   170,   260,   109,   293,   294,   295,   270,
     168,  1827,   273,    84,    84,  1831,   262,  1833,   107,   107,
    1767,   107,  1838,   171,   331,   261,   261,  1843,   329,   331,
     320,   336,     3,  1849,   308,  1851,   514,   269,   258,   298,
     130,   233,   337,   305,     5,   233,     5,  1867,   309,   336,
     126,  1867,   337,  1867,  1870,   297,   151,   324,     3,  1867,
     153,   315,   187,   336,   148,  1867,   148,    59,  1884,   547,
     171,  1867,   130,   296,     4,   308,     4,  1867,   308,   170,
     110,   156,   332,  1867,   171,   153,   150,    60,   130,  1905,
     296,   320,   320,   308,   308,   261,   306,    61,   302,  1915,
     331,  1917,   580,   581,   582,   330,   304,   261,   298,   261,
     588,    64,   590,    65,  1930,  1931,  1932,  1933,    41,   130,
    1303,  1255,   783,   444,   209,   208,   604,   605,   606,   446,
    1021,  1924,   748,    36,  1616,  1050,  1313,  1991,  2013,  1990,
    1983,  2018,   620,   621,  1756,  1923,  1648,  1639,  1756,  2019,
    1779,  1494,  1778,  1333,   632,   633,   634,   635,   690,  1975,
       8,  1977,   445,   156,  1457,   643,   644,   645,   646,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,  1830,  1899,
    1827,  1282,  2008,   671,   672,   680,  1452,   678,  2018,  1211,
    1019,  1393,  2018,  2019,  2018,  1392,   855,  1009,   417,   930,
    2018,  1603,   640,  1133,  1224,   852,  2018,   639,   642,   889,
    1720,   669,  2018,    35,   512,   907,   567,   553,  2018,  1687,
     911,   911,  1685,     3,  2018,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,  1869,   851,    18,    19,
    1540,  1373,    22,    23,  1701,  1362,    26,    27,    28,   619,
    1881,   589,  1547,  1365,    -1,  1802,    -1,  1889,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
     110,   111,    -1,   113,    -1,   115,   116,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,    17,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,   134,   135,    -1,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,    -1,
     160,   161,   162,    55,    -1,    -1,    58,    -1,   168,   877,
     170,   171,   172,   881,    -1,    -1,    -1,    -1,    -1,   887,
      -1,    -1,    -1,   891,    -1,    -1,    -1,    -1,    -1,   189,
     190,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,
      -1,   909,    -1,    -1,   912,    -1,   206,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,
     112,    -1,    -1,   223,    -1,    -1,    -1,   227,    -1,    -1,
      -1,    -1,    -1,   233,   942,   943,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,
     260,   969,    -1,   263,   264,    -1,   266,    -1,    -1,   269,
     162,   271,    -1,    -1,    -1,   275,   276,   985,    -1,   987,
      -1,    -1,   282,   283,   284,   285,    -1,    -1,    -1,    -1,
      -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,
     300,   301,    -1,  1011,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1019,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,
     320,   321,    -1,   215,   216,   217,   218,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,   227,   228,   229,   230,    -1,
      -1,   341,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,   256,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,   275,    -1,    -1,   278,    -1,   280,     5,
       6,     7,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,   316,  1133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    52,    53,    54,    -1,
      -1,    -1,  1150,    -1,    -1,    -1,  1154,    -1,    20,    -1,
      -1,  1159,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,  1182,  1183,  1184,  1185,    -1,    -1,
      52,    53,    54,    -1,  1192,    -1,    -1,    -1,    -1,    -1,
    1198,  1199,    -1,  1201,    -1,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,  1244,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,   171,    -1,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,   115,   116,   117,    -1,
      -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   282,   283,   284,   285,    -1,    -1,    -1,
     139,   140,    -1,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
      -1,   160,    -1,   162,  1362,    -1,    -1,  1365,    -1,   168,
     169,   170,    -1,   172,    -1,  1373,   282,   283,   284,   285,
      -1,    -1,  1380,    -1,    -1,  1383,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1392,  1393,  1394,  1395,    -1,    -1,
      -1,    -1,    -1,    -1,  1402,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   275,    -1,    -1,   215,   216,    -1,    -1,
     282,   283,   284,   285,   223,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,
      -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,  1467,
     269,    -1,   271,   107,    -1,    -1,   275,   276,    -1,    -1,
     279,    -1,    -1,   282,   283,   284,   285,    -1,    -1,    -1,
     124,    -1,    -1,   292,    -1,   129,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,  1505,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,    20,
      -1,   320,   321,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,   171,    -1,   173,
     339,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1547,
      -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,  1579,    -1,  1581,    -1,    -1,  1584,    -1,    -1,    -1,
     224,   225,   226,    -1,    -1,    -1,    -1,    -1,   131,    -1,
      -1,    -1,    -1,    -1,    -1,  1603,    -1,    -1,    -1,  1607,
      -1,    -1,   246,    -1,   248,    -1,    -1,    -1,  1616,    -1,
     254,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   265,    -1,    -1,   268,    -1,    -1,    -1,    -1,   273,
      -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,
      -1,   131,    -1,    -1,    -1,    -1,   189,   190,   191,   192,
     193,    -1,    -1,    -1,   197,   198,   199,   200,   201,    -1,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,    -1,    -1,    -1,  1683,  1684,  1685,    -1,  1687,
      -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,  1701,    -1,    -1,    -1,    -1,    -1,   189,
     190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   199,
     200,   201,  1720,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1748,   189,   190,   191,   192,   193,  1754,    -1,    -1,   197,
     198,   199,   200,   201,    -1,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,    -1,    -1,    -1,
      -1,   282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,   336,    -1,    18,    19,    -1,    -1,    22,
      23,    -1,    -1,    26,    27,    28,    -1,    -1,   298,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    66,    67,    68,    69,    -1,    -1,   297,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    82,
      -1,  1869,    85,    -1,  1872,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,    -1,
     103,    -1,  1890,    -1,   107,    -1,    -1,   110,   111,    -1,
     113,    -1,   115,   116,   117,  1903,    -1,    -1,   121,   122,
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
      -1,    -1,   315,    -1,    -1,    -1,    -1,   320,   321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   339,     3,   341,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,   107,    -1,    -1,   110,   111,    -1,   113,    -1,   115,
     116,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,
      -1,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,    -1,   160,   161,   162,    -1,    -1,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,   173,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,
     186,    -1,    -1,   189,   190,    -1,    -1,    -1,   194,   195,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,
      -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   339,     3,   341,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,
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
     169,   170,    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   190,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,
      -1,   320,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     339,     3,   341,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,   116,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,   133,   134,   135,    -1,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,    -1,   160,   161,
     162,    -1,    -1,    -1,    -1,    -1,   168,    -1,   170,    -1,
     172,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   190,    -1,
      -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    -1,
      -1,   223,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,
      -1,   233,    -1,    -1,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    -1,   247,    -1,    -1,    -1,    -1,
      -1,   253,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,
      -1,   263,   264,    -1,   266,    -1,    -1,   269,    -1,   271,
      -1,    -1,    -1,   275,   276,    -1,    -1,    -1,    -1,    -1,
     282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,   301,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,   320,   321,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   339,     3,   341,
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
     315,    -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   339,     3,   341,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,   110,   111,    -1,   113,    -1,   115,   116,   117,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,   133,   134,   135,    -1,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,    -1,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
      -1,   189,   190,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,
      -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,   227,
      -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,
      -1,    -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,
      -1,   269,    -1,   271,    -1,    -1,    -1,   275,   276,    -1,
      -1,    -1,    -1,    -1,   282,   283,   284,   285,    -1,    -1,
      -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,
      -1,    -1,   300,   301,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,
      -1,    -1,   320,   321,    -1,    -1,    -1,    -1,    -1,    -1,
     328,    -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,
      -1,    -1,     3,   341,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
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
     131,   132,   133,   134,   135,    -1,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,    -1,   160,
     161,   162,    -1,    -1,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,   189,   190,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,   206,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,   320,
     321,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
     341,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
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
     151,   152,   153,   154,   155,   156,   157,   158,    -1,   160,
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
      -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,   320,
     321,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
     341,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
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
     131,   132,   133,   134,   135,    -1,   137,   138,   139,   140,
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
      -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,   320,
     321,    -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,
      -1,    -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,     3,
     341,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,    23,
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
      -1,   315,    -1,    -1,    -1,    -1,   320,   321,    -1,    -1,
      -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,    -1,    -1,
      -1,   335,    -1,    -1,    -1,    -1,     3,   341,     5,     6,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,   320,   321,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   341,    22,    23,    -1,    -1,    26,
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
      -1,   168,    -1,   170,   171,   172,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,   320,   321,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   341,    22,    23,    -1,    -1,    26,
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
      -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,   320,   321,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   341,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    66,
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
      -1,    -1,    -1,   300,   301,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,   320,   321,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   341,    22,    23,    -1,    -1,    26,
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
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,
      -1,    -1,    -1,   260,    -1,    -1,   263,   264,    -1,   266,
      -1,    -1,   269,    -1,   271,    -1,    -1,    -1,   275,   276,
      -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,   301,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,   320,   321,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   341,    22,    23,    -1,    -1,    26,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,   320,   321,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   341,    22,    23,    -1,    -1,    26,
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
      -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,   136,
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
      -1,    -1,    -1,   300,   301,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,   320,   321,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   341,    22,    23,    -1,    -1,    26,
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
      -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,     5,
       6,     7,     8,     9,    10,   292,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,   301,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    38,   320,   321,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   341,    -1,    -1,    63,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,   115,
     116,   117,    -1,   131,    -1,    -1,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,    -1,   143,    -1,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
     156,   157,   158,   171,   160,    -1,   162,    -1,    -1,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,    -1,    -1,
      -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
     198,   199,   200,   201,    -1,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
     216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,
      -1,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
      -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,
     256,    -1,    -1,    -1,   260,    -1,    -1,   263,   264,    -1,
     266,    -1,    -1,   269,    -1,   271,    -1,    -1,    -1,   275,
     276,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,
       5,     6,     7,     8,     9,    10,   292,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,
      -1,    -1,    -1,    38,   320,   321,    41,    -1,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,   339,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
     115,   116,   117,    -1,    -1,    -1,    -1,   122,   123,   131,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,    -1,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,    -1,   160,    -1,   162,    -1,    -1,
      -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   190,   191,
     192,   193,    -1,    -1,    -1,   197,   198,   199,   200,   201,
      -1,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
      -1,   226,   227,    -1,    -1,    -1,    -1,    -1,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,   247,   248,    -1,    -1,    -1,    -1,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,   264,
      -1,   266,    -1,    -1,   269,   270,   271,   272,   273,    -1,
     275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,   299,    -1,    -1,   302,   303,   304,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,
     315,    -1,    -1,    -1,    -1,   320,   321,     5,     6,     7,
       8,     9,    10,    -1,   336,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,   115,   116,   117,
      -1,    -1,    -1,    -1,   122,   123,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,    -1,    -1,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,    -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,
     168,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   190,   191,   192,   193,    -1,
      -1,    -1,   197,   198,   199,   200,   201,    -1,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,
      -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,   226,   227,
      -1,    -1,    -1,    -1,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    -1,   247,
     248,    -1,    -1,    -1,    -1,   253,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,
      -1,   269,   270,   271,   272,   273,    -1,   275,   276,    -1,
      -1,    -1,    -1,    -1,   282,   283,   284,   285,    -1,    -1,
      -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,
      -1,    -1,    -1,    -1,   302,    -1,    -1,    -1,    -1,   307,
      -1,   309,    -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,
      -1,    -1,   320,   321,     5,     6,     7,     8,     9,    10,
      -1,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,
      -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,   115,   116,   117,    -1,    -1,    -1,
      -1,   122,   123,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,    -1,   160,
      -1,   162,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
     198,   199,   200,   201,    -1,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,    -1,
      -1,    -1,   223,    -1,    -1,   226,   227,    -1,    -1,    -1,
      -1,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,   247,   248,    -1,    -1,
      -1,    -1,   253,   254,   255,   256,    -1,    -1,    -1,   260,
      -1,    -1,   263,   264,    -1,   266,    -1,    -1,   269,   270,
     271,   272,   273,    -1,   275,   276,    -1,    -1,    -1,    -1,
      -1,   282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,   302,    -1,    -1,    -1,    -1,   307,    -1,   309,    -1,
      -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,   320,
     321,     5,     6,     7,     8,     9,    10,    -1,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
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
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    -1,   247,   248,    -1,    -1,    -1,    -1,   253,
     254,   255,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,
     264,    -1,   266,    -1,    -1,   269,   270,   271,   272,   273,
      -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,
     284,   285,   297,    -1,    -1,    -1,    -1,    -1,   292,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,   302,    -1,
     304,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,   315,    -1,    -1,    -1,    -1,   320,   321,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,   115,   116,
     117,   131,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,    -1,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,    -1,   160,    -1,   162,    -1,    -1,    -1,    -1,
      -1,   168,    -1,    -1,    -1,   172,    -1,    -1,    -1,   189,
     190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   199,
     200,   201,    -1,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,   226,
     227,    -1,    -1,    -1,    -1,    -1,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   259,
     247,   248,    -1,    -1,    -1,    -1,   253,   254,   255,   256,
      -1,    -1,    -1,   260,    -1,    -1,   263,   264,    -1,   266,
      -1,    -1,   269,   270,   271,   272,   273,    -1,   275,   276,
      -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,     5,
       6,     7,     8,     9,    10,   292,    -1,    -1,    -1,   296,
      -1,    -1,    -1,    -1,    -1,   302,    22,    23,    -1,    -1,
      26,   308,   309,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    38,   320,   321,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    -1,    -1,    82,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    91,   104,    -1,    -1,    -1,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,   115,
     116,   117,    -1,   131,    -1,    -1,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,    -1,   143,    -1,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
     156,   157,   158,    -1,   160,    -1,   162,    -1,    -1,    -1,
      -1,    -1,   168,    -1,    -1,    -1,   172,    -1,    -1,    -1,
      -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
     198,   199,   200,   201,    -1,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
     216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,
     226,   227,    -1,    -1,    -1,    -1,    -1,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
      -1,   247,   248,    -1,    -1,    -1,    -1,   253,   254,   255,
     256,    -1,    -1,    -1,   260,    -1,    -1,   263,   264,    -1,
     266,    -1,    -1,   269,   270,   271,   272,   273,    -1,   275,
     276,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,
       5,     6,     7,     8,     9,    10,   292,    -1,    -1,    -1,
     296,    -1,    -1,    -1,    -1,    -1,   302,    22,    23,    -1,
      -1,    26,    -1,   309,    -1,    -1,    -1,    -1,    -1,   315,
      -1,    -1,    -1,    38,   320,   321,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
     115,   116,   117,    -1,    -1,    -1,   131,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,    -1,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,    -1,   160,   171,   162,    -1,    -1,
      -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   190,   191,   192,   193,    -1,
      -1,    -1,   197,   198,   199,   200,   201,    -1,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
      -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,   254,
     255,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,   264,
      -1,   266,    -1,    -1,   269,   270,   271,   272,    -1,    -1,
     275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,
      -1,    -1,   307,    -1,   309,    -1,    -1,    -1,    -1,    -1,
     315,    -1,    -1,    -1,    -1,   320,   321,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,   115,   116,   117,
     131,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,    -1,    -1,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,    -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,
     168,    -1,    -1,    -1,   172,    -1,    -1,    -1,   189,   190,
     191,   192,   193,    -1,    -1,    -1,   197,   198,   199,   200,
     201,    -1,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,
      -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,   227,
      -1,    -1,    -1,    -1,    -1,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,   254,   255,   256,    -1,
      -1,    -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,
      -1,   269,   270,   271,   272,    -1,    -1,   275,   276,    -1,
      -1,    -1,    -1,    -1,   282,   283,   284,   285,     5,     6,
       7,     8,     9,    10,   292,    -1,    -1,    -1,   296,    -1,
      17,    -1,    -1,    -1,   302,    22,    23,    -1,    -1,    26,
     308,   309,    -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,
      -1,    38,   320,   321,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
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
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,   215,   216,
     217,   218,   219,   220,    38,    -1,   223,    41,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    52,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    63,
     247,    -1,    -1,    67,    68,    69,   253,    -1,    -1,   256,
      -1,    -1,    -1,   260,    -1,    79,   263,   264,    82,   266,
      -1,    85,   269,    -1,   271,    -1,    -1,    91,   275,   276,
      -1,    -1,    96,    97,    98,   282,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,   292,   110,    -1,    -1,   113,
      -1,   115,   116,   117,    -1,    -1,    -1,    -1,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,   320,   321,   139,   140,    -1,    -1,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,    -1,   160,    -1,   162,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,   215,   216,    -1,    -1,    -1,    -1,    38,    -1,   223,
      41,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,
      -1,    52,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    63,   247,    -1,    -1,    67,    68,    69,   253,
      -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    79,   263,
     264,    82,   266,    -1,    85,   269,    -1,   271,    -1,    -1,
      91,   275,   276,    -1,    -1,    96,    97,    98,   282,   283,
     284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,   110,
      -1,    -1,   113,    -1,   115,   116,   117,    -1,    -1,    -1,
      -1,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   315,    -1,    -1,    -1,    -1,   320,   321,   139,   140,
      -1,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,    -1,   160,
      -1,   162,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,    -1,
      38,    -1,   223,    41,    -1,    -1,   227,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    52,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    63,   247,    -1,    -1,    67,
      68,    69,   253,    -1,    -1,   256,    -1,    -1,    -1,   260,
      -1,    79,   263,   264,    82,   266,    -1,    85,   269,    -1,
     271,    -1,    -1,    91,   275,   276,    -1,    -1,    96,    97,
      98,   282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,   292,   110,    -1,    -1,   113,    -1,   115,   116,   117,
      -1,   131,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,   320,
     321,   139,   140,    -1,    -1,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,    -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,
     168,   181,    -1,    -1,   172,    -1,    -1,    -1,    -1,   189,
     190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   199,
     200,   201,    -1,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,
      -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,   227,
      -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,
      -1,    -1,   260,    -1,    -1,   263,   264,    -1,   266,    -1,
      -1,   269,    -1,   271,    -1,    -1,    -1,   275,   276,    -1,
      -1,    -1,    -1,    -1,   282,   283,   284,   285,     5,     6,
       7,     8,     9,    10,   292,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,
      -1,    38,   320,   321,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
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
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,   215,   216,
      -1,    -1,    -1,    -1,    38,    -1,   223,    41,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    52,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    63,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,
      -1,    -1,    -1,   260,    -1,    79,   263,   264,    82,   266,
      -1,    85,   269,    -1,   271,    -1,    -1,    91,   275,   276,
      -1,    -1,    96,    97,    98,   282,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,   292,   110,    -1,    -1,   113,
      -1,   115,   116,   117,    -1,    -1,    -1,    -1,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,   320,   321,   139,   140,    -1,    -1,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,    -1,   160,    -1,   162,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,   215,   216,    -1,    -1,    -1,    -1,    38,    -1,   223,
      41,    -1,    -1,   227,   228,   229,   230,    -1,    -1,   233,
      -1,    52,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    63,   247,    -1,    -1,    67,    68,    69,   253,
      -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    79,   263,
     264,    82,   266,    -1,    85,   269,    -1,   271,    -1,    -1,
      91,   275,   276,    -1,    -1,    96,    97,    98,   282,   283,
     284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,   110,
      -1,    -1,   113,    -1,   115,   116,   117,    -1,    -1,    -1,
      -1,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   315,    -1,    -1,    -1,    -1,   320,   321,   139,   140,
      -1,    -1,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,    -1,   160,
      -1,   162,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,    -1,
      38,    -1,   223,    41,    -1,    -1,   227,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    52,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    63,   247,    -1,    66,    -1,
      -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,   260,
      -1,    79,   263,   264,    82,   266,    -1,    85,   269,    -1,
     271,    -1,    -1,    91,   275,   276,    -1,    -1,    96,    97,
      98,   282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,
      -1,   292,   110,    -1,    -1,   113,    -1,   115,   116,   117,
      -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,   320,
     321,   139,   140,    -1,    -1,   143,    -1,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,    -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,
      -1,    -1,    -1,    38,    -1,   223,    41,    -1,    -1,   227,
      -1,    -1,    -1,    -1,    -1,   233,    -1,    52,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,    63,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,
      -1,    -1,   260,    -1,    79,   263,   264,    82,   266,    -1,
      85,   269,    -1,   271,    -1,    -1,    91,   275,   276,    -1,
      -1,    96,    97,    98,   282,   283,   284,   285,    -1,    -1,
      -1,    -1,    -1,    -1,   292,   110,    -1,    -1,   113,    -1,
     115,   116,   117,    -1,    -1,    -1,    -1,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,
      -1,    -1,   320,   321,   139,   140,    -1,    -1,   143,    -1,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,    -1,   160,    -1,   162,    -1,    -1,
      -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
     215,   216,    -1,    -1,    -1,    -1,    38,    -1,   223,    41,
     225,    -1,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      52,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    63,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,   256,    -1,    -1,    -1,   260,    -1,    79,   263,   264,
      82,   266,    -1,    85,   269,    -1,   271,    -1,    -1,    91,
     275,   276,    -1,    -1,    96,    97,    98,   282,   283,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,   292,   110,    -1,
      -1,   113,    -1,   115,   116,   117,    -1,    -1,    -1,    -1,
     122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     315,    -1,    -1,    -1,    -1,   320,   321,   139,   140,    -1,
      -1,   143,    -1,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,   156,   157,   158,    -1,   160,    -1,
     162,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    38,
      -1,   223,    41,    -1,    -1,   227,    -1,    -1,    -1,    -1,
      -1,   233,    -1,    52,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,    63,   247,    -1,    -1,    -1,    -1,
      -1,   253,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,
      79,   263,   264,    82,   266,    -1,    85,   269,   270,   271,
      -1,    -1,    91,   275,   276,    -1,    -1,    96,    97,    98,
     282,   283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,
     292,   110,    -1,    -1,   113,    -1,   115,   116,   117,    -1,
      -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,   320,   321,
     139,   140,    -1,    -1,   143,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
      -1,   160,    -1,   162,    -1,    -1,    -1,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,
      -1,    -1,    38,    -1,   223,    41,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    52,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,    63,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,
      -1,   260,    -1,    79,   263,   264,    82,   266,    -1,    85,
     269,    -1,   271,    -1,    -1,    91,   275,   276,    -1,    -1,
      96,    97,    98,   282,   283,   284,   285,    -1,    -1,    -1,
      -1,    -1,    -1,   292,   110,    -1,    -1,   113,    -1,   115,
     116,   117,    -1,    -1,    -1,    -1,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,
      -1,   320,   321,   139,   140,    -1,    -1,   143,    -1,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
     156,   157,   158,    -1,   160,    -1,   162,    -1,    -1,    -1,
      -1,    -1,   168,    -1,    -1,    -1,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,   215,
     216,    -1,    -1,    -1,    -1,    38,    -1,   223,    41,    -1,
      -1,   227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    52,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
      63,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,
     256,    -1,    -1,    -1,   260,    -1,    79,   263,   264,    82,
     266,    -1,    85,   269,    -1,   271,    -1,    -1,    91,   275,
     276,    -1,    -1,    96,    97,    98,   282,   283,   284,   285,
      -1,    -1,    -1,    -1,    -1,    -1,   292,   110,    -1,    -1,
     113,    -1,   115,   116,   117,    -1,    -1,    -1,    -1,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,
      -1,    -1,    -1,    -1,   320,   321,   139,   140,    -1,    -1,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,    -1,   155,   156,   157,   158,    -1,   160,    -1,   162,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,   215,   216,    -1,    -1,    -1,    -1,    38,    -1,
     223,    41,   225,    -1,   227,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    52,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    63,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    79,
     263,   264,    82,   266,    -1,    85,   269,    -1,   271,    -1,
      -1,    91,   275,   276,    -1,    -1,    96,    97,    98,   282,
     283,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     110,    -1,    -1,   113,    -1,   115,   116,   117,    -1,    -1,
      -1,    -1,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   315,    -1,    -1,    -1,    -1,   320,   321,   139,
     140,    -1,    -1,   143,    -1,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,   156,   157,   158,    -1,
     160,    -1,   162,    -1,    -1,    -1,    -1,    -1,   168,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,
      -1,    38,    -1,   223,    41,    -1,    -1,   227,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    52,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,    63,   247,    -1,    -1,
      -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,
     260,    -1,    79,   263,   264,    82,   266,    -1,    85,   269,
      -1,   271,    -1,    -1,    91,   275,   276,    -1,    -1,    96,
      97,    98,   282,   283,   284,   285,    -1,    -1,    -1,    -1,
      -1,    -1,   292,   110,    -1,    -1,   113,    -1,   115,   116,
     117,    -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,
     320,   321,   139,   140,    -1,    -1,   143,    -1,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,    -1,   160,    -1,   162,    -1,    -1,    -1,    -1,
      -1,   168,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,   215,   216,
      -1,    -1,    -1,    -1,    38,    -1,   223,    41,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    52,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    63,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,
      -1,    -1,    -1,   260,    -1,    79,   263,   264,    82,   266,
      -1,    85,   269,    -1,   271,    -1,    -1,    91,   275,   276,
      -1,    -1,    96,    97,    98,   282,   283,   284,   285,    -1,
      -1,    -1,    -1,    -1,    -1,   292,   110,    -1,    -1,   113,
      -1,   115,   116,   117,    -1,   131,    -1,    -1,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,   320,   321,   139,   140,    -1,    -1,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,   171,   160,    -1,   162,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
      -1,   197,   198,   199,   200,   201,    -1,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,
      -1,    -1,    -1,   227,   131,    -1,    -1,    -1,    -1,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,
      -1,    -1,   256,    -1,    -1,    -1,   260,    -1,    -1,   263,
     264,    -1,   266,    -1,   171,   269,    -1,   271,   131,    -1,
      -1,   275,   276,    -1,    -1,    -1,    -1,    -1,   282,   283,
     284,   285,   189,   190,   191,   192,   193,    -1,   292,    -1,
     197,   198,   199,   200,   201,    -1,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   171,    -1,
      -1,   315,   131,    -1,    -1,    -1,   320,   321,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,   190,   191,   192,
     193,    -1,    -1,    -1,   197,   198,   199,   200,   201,    -1,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   171,    -1,    -1,    -1,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
     199,   200,   201,    -1,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   171,    -1,    -1,    -1,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   190,   191,   192,   193,    -1,
      -1,    -1,   197,   198,   199,   200,   201,   131,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   190,
     191,   192,   193,    -1,    -1,    -1,   197,   198,   199,   200,
     201,    -1,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,    -1,   189,   190,   191,   192,   193,
      -1,    -1,    -1,   197,   198,   199,   200,   201,    -1,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    64,    65,    66,    67,    76,    77,    78,
      79,    85,   130,   169,   170,   226,   234,   235,   237,   239,
     240,   241,   242,   243,   244,   245,   248,   254,   255,   270,
     273,   309,   343,   350,   351,   352,   353,   354,   356,   358,
     359,   368,   373,   385,   390,   391,   397,   442,   444,   452,
     473,   487,   491,   492,   493,   501,   514,   515,   516,   533,
     537,   538,   539,   542,   665,   130,   108,     5,     6,     7,
       8,     9,    10,    22,    23,    26,    38,    41,    52,    63,
      79,    82,    85,    91,    96,    97,    98,   110,   113,   115,
     116,   117,   122,   123,   139,   140,   143,   145,   146,   147,
     148,   149,   150,   151,   153,   155,   156,   157,   158,   160,
     162,   168,   172,   215,   216,   223,   227,   233,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   247,   253,
     256,   260,   263,   264,   266,   269,   271,   275,   276,   282,
     283,   284,   285,   292,   315,   320,   321,   630,   658,   659,
     186,   247,   525,   258,    80,   498,   498,   658,    78,    86,
     534,   535,   658,    66,   542,    67,    68,    69,   601,   602,
     603,   658,   630,   346,   345,   348,   349,   347,   344,     5,
      11,   663,   666,     5,     6,     7,     8,     9,    10,    64,
      65,    66,    67,   186,   245,   268,   309,   369,   376,   377,
     378,   380,   381,   382,   656,   657,   254,   257,   374,   375,
      58,    86,    55,   112,   275,    11,   170,   294,   437,   438,
     507,   533,   539,   646,   662,     0,    17,    55,    58,   112,
     162,   215,   216,   217,   218,   219,   220,   227,   228,   229,
     230,   256,   269,   275,   278,   280,   316,   398,   399,   402,
     403,   436,    55,   112,   162,   186,   227,   228,   229,   230,
     256,   269,   275,   280,   314,   316,   486,    55,    56,    57,
      63,   256,   269,   283,   627,   658,   215,   216,   275,   357,
     402,   434,   658,   130,   101,   165,   166,   167,   558,   130,
     630,   270,   337,     3,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    18,    19,    27,    28,    44,
      45,    46,    47,    48,    49,    50,    62,   103,   107,   111,
     121,   131,   132,   133,   134,   135,   137,   138,   141,   142,
     144,   154,   161,   170,   173,   189,   190,   194,   195,   196,
     203,   206,   282,   283,   284,   285,   296,   300,   301,   339,
     341,   521,   545,   556,   557,   565,   566,   567,   568,   570,
     572,   573,   575,   577,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   600,   601,   604,   606,   607,   608,   610,
     611,   612,   613,   614,   627,   628,   629,   631,   632,   634,
     651,   654,   658,   664,   673,   674,   675,   676,   677,   691,
     698,   700,   703,   713,   714,   744,   630,   187,   499,   499,
     658,    87,    90,    96,   494,   495,   496,   336,   536,   539,
     170,   440,   441,   525,   171,   170,   337,   440,   354,   354,
     343,   343,   354,   354,   170,   440,   440,   266,   440,   108,
     258,   277,   336,   277,   336,   261,   336,   262,   262,   376,
     369,    86,   494,   270,   658,   630,   630,   437,   542,   646,
     258,    27,   258,   294,   310,   215,   216,   658,   215,   216,
     630,   229,   275,   275,   275,   275,   630,   630,   630,   630,
     658,   223,   360,   658,   630,   630,   630,   314,   275,   658,
     630,   229,   162,   228,   229,   230,   630,   630,   630,   630,
     658,   630,   630,   630,   630,   630,    42,    43,   490,   223,
     658,   658,   292,   174,   174,   336,     5,     6,     7,    20,
      24,    25,    26,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    52,    53,    54,   282,   283,   284,   285,   336,
     619,   626,   649,   651,   652,   653,   654,   102,   186,   247,
     543,   543,   543,   293,   559,   281,   528,   441,   526,   527,
     655,   658,   658,   664,   664,   664,   170,   170,    22,   170,
     605,   605,   605,   605,   605,   170,   581,   170,   122,   658,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   279,   533,   542,   556,   566,   574,   601,   658,
     566,   170,   583,   583,   170,   170,   170,   583,   664,   170,
     617,   170,   618,   189,   190,   615,   297,   583,   639,   640,
     170,   170,   566,   578,   108,   258,   546,   547,   315,   609,
     176,   174,   177,   178,   179,   180,   181,   182,   183,   184,
     187,   188,   630,   131,   189,   190,   191,   192,   193,   197,
     198,   199,   200,   201,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   259,   326,   337,   336,
     170,   170,   170,   664,   664,   337,   170,   246,   279,   438,
     441,   517,    81,    82,   277,   500,    88,    89,    91,    97,
     336,   535,   434,   315,   545,   171,   522,   583,   635,   603,
     658,   295,   561,   130,   130,   130,   130,   170,   171,   520,
     522,   524,   542,   267,   383,   384,   656,   656,   383,   378,
     162,   275,   379,   486,   630,   382,   109,   109,   108,   108,
     494,   251,   252,   400,   169,   250,   270,   386,   113,   114,
     115,   116,   117,   118,   119,   120,   123,   315,   393,   395,
     396,   248,   270,   273,   274,   171,   313,   664,   258,   630,
     646,   294,   169,    85,   315,   392,   394,   396,   630,   630,
     630,   630,   630,   232,   170,   170,   170,   169,   366,   361,
     658,   246,   362,   223,   170,   405,   406,   440,   440,   318,
     319,   474,   658,   630,   630,   229,   630,   630,   630,   490,
     170,   488,   488,   488,   490,   490,   490,   658,    58,   285,
     629,   658,   522,   434,   170,   170,    21,    22,   170,   170,
     170,    38,   170,   617,   618,   286,   287,   288,   289,   290,
     291,   620,   622,   624,   625,   658,   170,   170,   170,   170,
     562,   563,   583,   164,   544,   544,   544,   585,   645,   661,
     662,   294,   560,   556,   174,   336,   528,   174,   337,   556,
     633,   633,    23,   171,   291,   620,   621,   109,   583,   584,
     583,   670,   671,   672,   670,   233,   152,   692,   718,   149,
     151,   716,   233,     3,   704,   584,   112,   715,   716,   670,
     542,   170,   518,   171,   171,   171,   171,   336,   337,   583,
     583,   583,   663,   169,   616,   663,   616,   664,   556,   297,
     637,   638,   299,   639,   641,   583,   522,   636,   336,   340,
     170,   339,   529,   548,   549,   550,   581,   601,   630,   658,
     540,   541,   658,   528,   658,   556,   566,   571,   583,   571,
     571,   571,   170,   170,    99,   100,   569,   569,   557,   175,
     185,   186,   566,   576,   579,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   174,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   107,
     173,   170,   203,   608,   171,   186,   203,   247,   583,   642,
     658,   642,     8,     9,    10,   203,   658,   279,   518,   517,
      81,    78,    87,    94,    95,   497,   663,   496,   171,   170,
     171,   336,    14,   585,   647,   661,   238,   355,   171,   336,
     169,   336,   371,   169,   370,   630,   383,   383,   253,   400,
     277,   269,   102,   169,   644,   662,   644,   644,   649,   395,
     225,   275,   276,   388,   389,    67,    87,   387,   389,   275,
     389,    16,   505,   506,   505,   630,   440,   310,   646,   400,
     169,   649,   394,   170,   405,   405,   405,   405,   233,   203,
     471,   472,   658,   471,   471,   257,    20,   264,   667,   668,
     361,   179,   225,   408,   409,   410,   412,   415,   423,   424,
     435,   655,   658,    98,   401,   315,   315,    64,    65,    67,
     475,   261,   405,   488,   630,   490,   490,   490,   171,   489,
     649,   649,   643,   663,   643,    23,   643,   643,   643,   663,
      53,   650,   664,   616,   616,   618,   617,   277,   643,   663,
     643,   643,   643,   336,   221,   222,   564,   102,   542,   542,
     542,   585,   647,   561,   581,   527,   556,   658,   315,   336,
     108,   630,   155,   717,   336,   717,   717,   658,   679,   170,
     583,   693,   694,   695,   336,   584,   658,   701,   143,   705,
     717,   670,   558,   171,   519,   522,   523,   171,   336,   181,
     182,   566,   336,   181,   108,   336,   171,   283,   664,   171,
     664,   625,   298,   583,   637,   641,   583,   308,   336,   336,
     171,   336,   566,   170,   529,   550,   551,   336,    68,    69,
      70,    72,    73,    74,    75,   163,   530,   531,   315,   552,
     658,   552,   552,   337,   336,   546,   106,   553,   104,   520,
     520,   566,   566,   581,   583,   107,   327,   588,   589,   642,
     171,   642,   171,   337,   336,   337,   658,    92,    93,    87,
     536,   522,   524,   257,   384,   108,   372,   254,   372,   372,
     372,   664,   253,   658,   658,   644,   581,   646,   658,   658,
     658,    89,    88,    89,   658,   630,   409,   107,   508,   311,
     508,   108,   108,   253,   646,   471,   261,   658,   171,   336,
     649,   171,   171,    56,    62,   367,   270,   658,   660,   669,
     350,   351,   363,   364,   365,   368,   373,   385,   390,   487,
     630,   658,   171,   336,   249,   265,   278,   432,   127,   128,
     411,   649,   169,   658,   437,   437,   317,   261,   630,   261,
     404,   490,   171,   336,   171,   171,   171,   171,   336,   171,
     336,   171,   336,   291,   620,   623,   171,   336,   171,   171,
     171,   563,   170,   649,   649,   583,   112,   151,   171,   670,
     171,   171,   336,   678,    82,   246,   583,   719,   720,   722,
     723,   724,   262,   336,   689,   315,   696,    83,   139,   699,
     336,   702,   102,   706,   726,   717,   171,   158,   727,   728,
     717,   171,   336,   170,   170,   170,   583,   583,   583,   583,
     292,   522,   298,   308,   583,   522,   522,   171,   542,   550,
      74,   530,    74,   550,   550,    74,    71,   658,   170,   658,
     541,   102,   105,   555,   664,   171,   171,   187,   187,   102,
     171,   101,   590,   171,   171,   203,   642,   658,   171,   262,
     367,   262,    16,   664,   490,   490,   490,   248,   270,   315,
     479,   664,   170,   512,   513,   664,   312,   512,   664,   171,
       3,    66,    79,    85,   232,   235,   272,   296,   302,   307,
     356,   358,   359,   368,   373,   385,   390,   445,   448,   450,
     451,   452,   456,   458,   464,   466,   467,   487,   491,   492,
     538,   658,   658,   231,   231,   658,   336,   365,   410,   658,
     260,   260,   441,   124,   129,   246,   413,   414,   417,   418,
     420,   421,   424,   263,     3,   169,   407,   169,   439,   434,
     658,   170,    76,   489,   648,   663,   663,   663,   618,   663,
     554,   631,   658,   171,   171,   171,   136,   583,   680,   686,
     687,   688,   718,   717,   246,   722,   171,   336,   315,   107,
     145,   147,   148,   690,   694,   717,   658,   697,   140,   140,
     171,   584,   717,   122,   146,   584,   707,   708,   709,   710,
     711,   726,   277,   171,   171,   523,   519,   520,   520,   336,
     171,   109,   171,   171,   336,   522,   171,   340,   550,    74,
     550,    16,   261,   532,   532,   550,   170,   660,   554,   556,
     566,   566,   554,   102,    84,   334,   591,   592,   171,   171,
     323,   270,   246,    98,   107,   173,   246,   664,   336,   513,
      82,   511,   336,   170,   502,   502,   233,   232,   525,   233,
     453,   454,   630,   275,   438,   457,   556,   297,   461,   462,
     583,   556,   306,   446,   304,   338,   649,   275,   470,   649,
     470,   658,   441,   441,   125,   419,   582,   417,   107,   173,
     224,   265,   268,   278,   431,   433,   170,    82,   168,   224,
     325,   476,   434,    64,    83,   248,   171,   171,   171,   171,
     171,   336,   337,   170,   336,   336,   689,   336,   171,   720,
     658,   721,   261,   261,   261,   261,   171,   171,   315,   725,
     726,   336,   107,   148,   712,   159,   171,   171,   171,   583,
     583,   583,   552,   550,   441,   556,   532,   660,   171,   562,
     183,   328,   335,   584,   593,   594,   595,   596,   253,   269,
       3,   107,   107,   419,   664,   171,   225,   664,   503,   504,
     658,   505,   505,   664,   233,   545,   443,   658,   170,   170,
     556,   299,   461,   463,   297,   459,   460,   298,   446,   448,
     556,   170,   232,   236,   445,   232,   236,   268,   315,   107,
     170,   260,   630,   416,   417,   168,   262,   322,   323,   477,
     478,   109,   481,   482,   171,    84,    84,   631,   658,   583,
     681,   682,   684,   686,   688,   680,   686,   107,    82,   107,
     107,   107,   658,   708,   261,   261,   171,    82,   157,   160,
     729,   730,   735,   171,   171,   171,   171,   594,   320,   331,
     331,   329,   599,   664,   658,   336,   171,   336,     3,   508,
     508,   269,   443,   337,   455,   583,   438,   298,   446,   308,
     583,   459,   463,   446,   448,   130,   305,   469,   655,   233,
       5,   233,     5,   630,   126,   556,   440,   171,   336,   275,
     320,   480,   275,   480,   478,   324,   297,   484,   171,   336,
     315,   683,   336,   151,   725,   148,   148,   153,   658,   736,
       3,   731,   732,    82,   150,   153,   737,   738,   740,   741,
     187,    82,   106,   328,   333,   664,   504,    59,   509,   509,
     658,   658,   171,   336,   171,   446,   448,   296,   298,   308,
     299,   303,   465,   130,   308,   446,   171,   336,   649,   443,
       4,   443,     4,   440,   170,   422,   171,   110,   430,   417,
     479,   479,   479,   479,   320,   321,   483,   556,   307,   356,
     358,   368,   373,   449,   450,   485,   491,   492,   538,   682,
     658,   685,   686,   156,   733,   733,   153,   658,   743,   732,
     742,   739,   740,   328,   335,   584,   597,   598,   332,   320,
      60,   510,   510,   583,   130,   446,   296,   446,   556,   308,
     308,   308,   655,   430,   392,    39,    40,    70,   429,   261,
     426,   427,   428,   658,   658,   658,   658,   306,   732,   734,
     320,   330,   331,    61,   511,   511,   298,   302,   304,   649,
     428,   171,    64,    65,   261,   427,   261,   426,   447,   446,
     468,   658,    42,    43,    82,   270,   425,   425,   308,   449,
     465,    41,   107,   246,   130
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
#line 618 "sql_parser.y"
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
#line 628 "sql_parser.y"
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 4:
#line 633 "sql_parser.y"
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
#line 642 "sql_parser.y"
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 6:
#line 647 "sql_parser.y"
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
#line 657 "sql_parser.y"
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 8:
#line 662 "sql_parser.y"
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
#line 672 "sql_parser.y"
    {
		  	  m->emod |= mod_dot;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 10:
#line 677 "sql_parser.y"
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
#line 687 "sql_parser.y"
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
#line 696 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 13:
#line 697 "sql_parser.y"
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
    break;

  case 14:
#line 702 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (3)].sym); YYACCEPT; }
    break;

  case 15:
#line 703 "sql_parser.y"
    { m->sym = (yyval.sym) = (yyvsp[(1) - (2)].sym); YYACCEPT; }
    break;

  case 16:
#line 704 "sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 17:
#line 705 "sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 18:
#line 706 "sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
    break;

  case 19:
#line 707 "sql_parser.y"
    { m->sym = (yyval.sym) = NULL; YYABORT; }
    break;

  case 32:
#line 734 "sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(2) - (5)].l));
		append_list(l, (yyvsp[(3) - (5)].l));
		append_symbol(l, (yyvsp[(4) - (5)].sym));
		append_int(l, (yyvsp[(5) - (5)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
    break;

  case 34:
#line 744 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 35:
#line 745 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 36:
#line 750 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[(2) - (2)].l)); }
    break;

  case 37:
#line 751 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 38:
#line 756 "sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(1) - (2)].l) );
		append_type(l, &(yyvsp[(2) - (2)].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 39:
#line 761 "sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l) );
		append_type(l, &(yyvsp[(4) - (4)].type) );
		(yyval.l) = append_symbol((yyvsp[(1) - (4)].l), _symbol_create_list( SQL_DECLARE, l)); }
    break;

  case 40:
#line 769 "sql_parser.y"
    { dlist *l = L();
		append_string(l, (yyvsp[(2) - (4)].sval) );
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 41:
#line 774 "sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 42:
#line 782 "sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 43:
#line 790 "sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(4) - (4)].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(4) - (4)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 44:
#line 798 "sql_parser.y"
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[(3) - (3)].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[(3) - (3)].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 45:
#line 806 "sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 46:
#line 812 "sql_parser.y"
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[(4) - (4)].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
    break;

  case 47:
#line 821 "sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (6)].l));
		append_symbol(l, (yyvsp[(4) - (6)].sym));
		append_symbol(l, (yyvsp[(5) - (6)].sym));
		append_list(l, (yyvsp[(6) - (6)].l));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
    break;

  case 48:
#line 828 "sql_parser.y"
    { dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_int(l, (yyvsp[(4) - (4)].i_val));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
    break;

  case 49:
#line 836 "sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (1)].sval) );
	  append_string((yyval.l), NULL ); }
    break;

  case 50:
#line 840 "sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[(2) - (2)].sval) ); }
    break;

  case 51:
#line 844 "sql_parser.y"
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[(1) - (3)].sval) );
	  append_string((yyval.l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 53:
#line 853 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 54:
#line 854 "sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[(4) - (4)].sval) ); }
    break;

  case 55:
#line 858 "sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 57:
#line 863 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 58:
#line 865 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 64:
#line 871 "sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 65:
#line 872 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 66:
#line 876 "sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 67:
#line 877 "sql_parser.y"
    { (yyval.i_val) = cur_role; }
    break;

  case 68:
#line 882 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
    break;

  case 69:
#line 892 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_list(l, (yyvsp[(4) - (6)].l));
	  append_int(l, (yyvsp[(5) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
    break;

  case 70:
#line 901 "sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 71:
#line 903 "sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 72:
#line 907 "sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 73:
#line 908 "sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 74:
#line 912 "sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 75:
#line 913 "sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 76:
#line 918 "sql_parser.y"
    { (yyval.i_val) = cur_user; }
    break;

  case 77:
#line 919 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 78:
#line 924 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
    break;

  case 79:
#line 932 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_int(l, (yyvsp[(2) - (6)].bval));
	  append_int(l, (yyvsp[(6) - (6)].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
    break;

  case 80:
#line 941 "sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 81:
#line 942 "sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 82:
#line 946 "sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 83:
#line 947 "sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 84:
#line 952 "sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (1)].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
    break;

  case 85:
#line 956 "sql_parser.y"
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[(1) - (3)].l));
	  append_symbol((yyval.l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 86:
#line 962 "sql_parser.y"
    { (yyval.l) = append_int(L(), (yyvsp[(1) - (1)].i_val)); }
    break;

  case 87:
#line 964 "sql_parser.y"
    { (yyval.l) = append_int(append_int(L(), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val)); }
    break;

  case 88:
#line 968 "sql_parser.y"
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
    break;

  case 89:
#line 969 "sql_parser.y"
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
    break;

  case 90:
#line 973 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(2) - (2)].l)); }
    break;

  case 91:
#line 974 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[(1) - (1)].l)); }
    break;

  case 92:
#line 975 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[(1) - (1)].l)); }
    break;

  case 93:
#line 986 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 94:
#line 987 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 96:
#line 992 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 97:
#line 994 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 98:
#line 998 "sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
    break;

  case 99:
#line 999 "sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
    break;

  case 100:
#line 1000 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[(2) - (2)].l)); }
    break;

  case 101:
#line 1001 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 102:
#line 1002 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[(2) - (2)].l)); }
    break;

  case 103:
#line 1003 "sql_parser.y"
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
    break;

  case 104:
#line 1007 "sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 105:
#line 1009 "sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 106:
#line 1013 "sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 107:
#line 1014 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 108:
#line 1022 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, (yyvsp[(6) - (6)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 109:
#line 1027 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, (yyvsp[(6) - (6)].l)));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 110:
#line 1032 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 111:
#line 1037 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 112:
#line 1042 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 113:
#line 1047 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 114:
#line 1052 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (6)].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
    break;

  case 115:
#line 1057 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (4)].sval));
	  append_list(l, (yyvsp[(4) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
    break;

  case 116:
#line 1062 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(3) - (6)].sval));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
    break;

  case 117:
#line 1067 "sql_parser.y"
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
#line 1079 "sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (4)].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[(2) - (4)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 119:
#line 1085 "sql_parser.y"
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 120:
#line 1092 "sql_parser.y"
    { dlist * l = L();
				  append_string(l, (yyvsp[(4) - (7)].sval));
				  append_string(l, (yyvsp[(7) - (7)].sval));
				  append_int(l, (yyvsp[(2) - (7)].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
    break;

  case 121:
#line 1102 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
    break;

  case 122:
#line 1107 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (4)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
    break;

  case 123:
#line 1111 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
    break;

  case 124:
#line 1115 "sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[(2) - (4)].sval)); }
    break;

  case 125:
#line 1117 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  if (!strlen((yyvsp[(5) - (5)].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[(5) - (5)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 126:
#line 1125 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (5)].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
    break;

  case 127:
#line 1133 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
    break;

  case 128:
#line 1138 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
    break;

  case 129:
#line 1143 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval) );
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 130:
#line 1150 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 131:
#line 1151 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 132:
#line 1155 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 133:
#line 1156 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 134:
#line 1157 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 140:
#line 1179 "sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
    break;

  case 141:
#line 1190 "sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (3)].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
    break;

  case 142:
#line 1207 "sql_parser.y"
    {
		dlist *l = L();
		append_list(l, (yyvsp[(3) - (4)].l));
		append_list(l, (yyvsp[(4) - (4)].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
    break;

  case 143:
#line 1216 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 144:
#line 1217 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 145:
#line 1221 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 146:
#line 1222 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 147:
#line 1226 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 148:
#line 1227 "sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 149:
#line 1228 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 150:
#line 1232 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(2) - (2)].type))); }
    break;

  case 151:
#line 1233 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
    break;

  case 152:
#line 1234 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[(3) - (3)].l_val)));  }
    break;

  case 153:
#line 1235 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[(3) - (3)].sym)));  }
    break;

  case 154:
#line 1236 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 155:
#line 1240 "sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[(3) - (3)].l_val)); }
    break;

  case 156:
#line 1241 "sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 157:
#line 1242 "sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
    break;

  case 158:
#line 1243 "sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 159:
#line 1244 "sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
    break;

  case 160:
#line 1245 "sql_parser.y"
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[(2) - (2)].l_val)); }
    break;

  case 161:
#line 1246 "sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
    break;

  case 162:
#line 1247 "sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
    break;

  case 163:
#line 1255 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (9)].sval));
	  append_int(l, (yyvsp[(2) - (9)].i_val));
	  append_list(l, (yyvsp[(6) - (9)].l));
	  append_list(l, (yyvsp[(8) - (9)].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
    break;

  case 164:
#line 1264 "sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 165:
#line 1265 "sql_parser.y"
    { (yyval.i_val) = hash_idx; }
    break;

  case 166:
#line 1286 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (3)].sval));
	  append_int(l, (yyvsp[(3) - (3)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
    break;

  case 167:
#line 1291 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (10)].sval));
	  append_string(l, (yyvsp[(6) - (10)].sval));
	  append_string(l, (yyvsp[(8) - (10)].sval));
	  append_string(l, (yyvsp[(10) - (10)].sval));
	  append_int(l, (yyvsp[(4) - (10)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
    break;

  case 168:
#line 1301 "sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 169:
#line 1302 "sql_parser.y"
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
    break;

  case 170:
#line 1303 "sql_parser.y"
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
    break;

  case 171:
#line 1307 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 172:
#line 1308 "sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 173:
#line 1313 "sql_parser.y"
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
#line 1324 "sql_parser.y"
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
#line 1334 "sql_parser.y"
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
#line 1344 "sql_parser.y"
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
#line 1357 "sql_parser.y"
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
#line 1367 "sql_parser.y"
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
#line 1381 "sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 180:
#line 1382 "sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 181:
#line 1383 "sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 182:
#line 1384 "sql_parser.y"
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
    break;

  case 183:
#line 1385 "sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 184:
#line 1386 "sql_parser.y"
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
    break;

  case 185:
#line 1390 "sql_parser.y"
    { (yyval.i_val) = CA_COMMIT; }
    break;

  case 186:
#line 1391 "sql_parser.y"
    { (yyval.i_val) = CA_DELETE; }
    break;

  case 187:
#line 1392 "sql_parser.y"
    { (yyval.i_val) = CA_PRESERVE; }
    break;

  case 188:
#line 1393 "sql_parser.y"
    { (yyval.i_val) = CA_DROP; }
    break;

  case 189:
#line 1397 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[(2) - (3)].l)); }
    break;

  case 190:
#line 1398 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[(1) - (1)].l)); }
    break;

  case 191:
#line 1406 "sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (4)].l));
			  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym)); 
			  append_int((yyval.l), (yyvsp[(4) - (4)].i_val)); }
    break;

  case 192:
#line 1412 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 193:
#line 1413 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 194:
#line 1414 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 195:
#line 1419 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 196:
#line 1421 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 202:
#line 1428 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 203:
#line 1429 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 204:
#line 1434 "sql_parser.y"
    {
			dlist *l = L();
			append_string(l, (yyvsp[(1) - (3)].sval));
			append_type(l, &(yyvsp[(2) - (3)].type));
			append_list(l, (yyvsp[(3) - (3)].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
    break;

  case 205:
#line 1442 "sql_parser.y"
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
#line 1494 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 208:
#line 1500 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 209:
#line 1502 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym) ); }
    break;

  case 210:
#line 1508 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (6)].sval) );
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
    break;

  case 211:
#line 1516 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 212:
#line 1518 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 216:
#line 1524 "sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[(2) - (2)].sym)); }
    break;

  case 217:
#line 1528 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 218:
#line 1534 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 219:
#line 1542 "sql_parser.y"
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
#line 1571 "sql_parser.y"
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
#line 1608 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 222:
#line 1609 "sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 223:
#line 1616 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(1) - (2)].sval) );
	  append_symbol(l, (yyvsp[(2) - (2)].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
    break;

  case 224:
#line 1625 "sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 225:
#line 1626 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 226:
#line 1630 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 227:
#line 1631 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 228:
#line 1632 "sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 229:
#line 1633 "sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 230:
#line 1634 "sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 231:
#line 1638 "sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(3) - (3)].i_val) << 8); }
    break;

  case 232:
#line 1642 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 233:
#line 1646 "sql_parser.y"
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
    break;

  case 234:
#line 1647 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 235:
#line 1648 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 236:
#line 1649 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 237:
#line 1650 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (2)].i_val) + (yyvsp[(2) - (2)].i_val); }
    break;

  case 238:
#line 1654 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 239:
#line 1655 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 240:
#line 1656 "sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 241:
#line 1657 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 242:
#line 1661 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 243:
#line 1662 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 244:
#line 1666 "sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
    break;

  case 245:
#line 1667 "sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
    break;

  case 246:
#line 1668 "sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
    break;

  case 247:
#line 1669 "sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
    break;

  case 248:
#line 1672 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(2) - (5)].l) );
			  append_list(l, (yyvsp[(3) - (5)].l) );
			  append_int(l, (yyvsp[(4) - (5)].i_val) );
			  append_int(l, (yyvsp[(5) - (5)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 250:
#line 1685 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[(2) - (2)].l)); }
    break;

  case 251:
#line 1687 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[(3) - (3)].l)); }
    break;

  case 252:
#line 1691 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, (yyvsp[(5) - (8)].l) );
			  append_list(l, (yyvsp[(3) - (8)].l) );
			  append_list(l, (yyvsp[(6) - (8)].l) );
			  append_int(l, (yyvsp[(7) - (8)].i_val) );
			  append_int(l, (yyvsp[(8) - (8)].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
    break;

  case 253:
#line 1703 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 254:
#line 1708 "sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 255:
#line 1710 "sql_parser.y"
    { (yyval.l) = append_string( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval) ); }
    break;

  case 256:
#line 1714 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[(2) - (2)].l) ); }
    break;

  case 257:
#line 1719 "sql_parser.y"
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
#line 1731 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 262:
#line 1740 "sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 263:
#line 1741 "sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 264:
#line 1745 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 266:
#line 1750 "sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 267:
#line 1755 "sql_parser.y"
    { dlist *l = L();
				append_list(l, (yyvsp[(3) - (6)].l));
				append_string(l, (yyvsp[(6) - (6)].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
    break;

  case 268:
#line 1762 "sql_parser.y"
    { (yyval.l) = append_string(append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval)); }
    break;

  case 269:
#line 1770 "sql_parser.y"
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
#line 1783 "sql_parser.y"
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
#line 1795 "sql_parser.y"
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
			else
				yyerror(m, sql_message("Language name R, C, or J(avascript):expected, received '%c'", l));

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
#line 1820 "sql_parser.y"
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
#line 1834 "sql_parser.y"
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
#line 1846 "sql_parser.y"
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
			else
				yyerror(m, sql_message("Language name R, C, or J(avascript):expected, received '%c'", l));

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
#line 1872 "sql_parser.y"
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
#line 1884 "sql_parser.y"
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
#line 1897 "sql_parser.y"
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[(1) - (1)].sym)); }
    break;

  case 278:
#line 1901 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(2) - (5)].l),(yyvsp[(3) - (5)].sym)); }
    break;

  case 279:
#line 1905 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(3) - (6)].l),(yyvsp[(4) - (6)].sym)); }
    break;

  case 280:
#line 1920 "sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 281:
#line 1922 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 282:
#line 1926 "sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 283:
#line 1928 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l),(yyvsp[(2) - (3)].sym));}
    break;

  case 310:
#line 1976 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 311:
#line 1980 "sql_parser.y"
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[(2) - (2)].sym));}
    break;

  case 312:
#line 1985 "sql_parser.y"
    { dlist *l = L(); 
		  append_list( l, (yyvsp[(1) - (4)].l));
		  append_list( l, (yyvsp[(3) - (4)].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
    break;

  case 314:
#line 1996 "sql_parser.y"
    {(yyval.l) = L();}
    break;

  case 315:
#line 1997 "sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 316:
#line 1999 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 317:
#line 2004 "sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[(2) - (2)].sym)); }
    break;

  case 320:
#line 2011 "sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[(3) - (4)].sym)); }
    break;

  case 321:
#line 2016 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (6)].sym)),(yyvsp[(3) - (6)].l)),(yyvsp[(4) - (6)].l))); }
    break;

  case 322:
#line 2022 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[(2) - (5)].l)),(yyvsp[(3) - (5)].l))); }
    break;

  case 323:
#line 2030 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 324:
#line 2038 "sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 325:
#line 2040 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 326:
#line 2045 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].l))); }
    break;

  case 327:
#line 2053 "sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 328:
#line 2055 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 329:
#line 2059 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 330:
#line 2060 "sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 331:
#line 2070 "sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (7)].sym));
		  append_list(l, (yyvsp[(4) - (7)].l));
		  append_symbol(l, (yyvsp[(5) - (7)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
    break;

  case 332:
#line 2081 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 333:
#line 2083 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[(2) - (2)].l)); }
    break;

  case 334:
#line 2086 "sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(2) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  append_symbol(l, (yyvsp[(5) - (5)].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
    break;

  case 335:
#line 2100 "sql_parser.y"
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
#line 2116 "sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 338:
#line 2121 "sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 340:
#line 2127 "sql_parser.y"
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[(1) - (2)].sval));
			  	  append_type((yyval.l), &(yyvsp[(2) - (2)].type));
				}
    break;

  case 341:
#line 2132 "sql_parser.y"
    { 
				  append_string((yyval.l), (yyvsp[(3) - (4)].sval));
			  	  append_type((yyval.l), &(yyvsp[(4) - (4)].type));
				}
    break;

  case 342:
#line 2140 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[(3) - (4)].l)); }
    break;

  case 343:
#line 2142 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[(1) - (1)].type))); }
    break;

  case 345:
#line 2147 "sql_parser.y"
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
    break;

  case 346:
#line 2151 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 347:
#line 2156 "sql_parser.y"
    { dlist *p = L();
			  append_string(p, (yyvsp[(3) - (4)].sval));
			  append_type(p, &(yyvsp[(4) - (4)].type));
			  (yyval.l) = append_list((yyvsp[(1) - (4)].l), p); }
    break;

  case 348:
#line 2161 "sql_parser.y"
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[(1) - (2)].sval));
			  append_type(p, &(yyvsp[(2) - (2)].type));
			  (yyval.l) = append_list(l, p); }
    break;

  case 349:
#line 2211 "sql_parser.y"
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
#line 2223 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 351:
#line 2224 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 352:
#line 2228 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
    break;

  case 353:
#line 2229 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
    break;

  case 354:
#line 2230 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
    break;

  case 355:
#line 2231 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[(3) - (3)].l)); }
    break;

  case 356:
#line 2235 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 357:
#line 2236 "sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (2)].l); }
    break;

  case 358:
#line 2240 "sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 359:
#line 2242 "sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].l)); }
    break;

  case 360:
#line 2247 "sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 361:
#line 2248 "sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 362:
#line 2249 "sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[(4) - (4)].sval)); }
    break;

  case 363:
#line 2250 "sql_parser.y"
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[(4) - (4)].sval)); }
    break;

  case 368:
#line 2265 "sql_parser.y"
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[(1) - (3)].i_val));
	  append_symbol((yyval.l), (yyvsp[(2) - (3)].sym));
	  append_list((yyval.l), (yyvsp[(3) - (3)].l));
	}
    break;

  case 369:
#line 2272 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 370:
#line 2273 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(3) - (3)].i_val); }
    break;

  case 371:
#line 2277 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 372:
#line 2278 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 373:
#line 2282 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 374:
#line 2283 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 375:
#line 2288 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 376:
#line 2291 "sql_parser.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); }
    break;

  case 377:
#line 2296 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
    break;

  case 378:
#line 2302 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );	
	  append_list(l, (yyvsp[(4) - (4)].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
    break;

  case 379:
#line 2308 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
    break;

  case 380:
#line 2314 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (3)].l) );	
	  append_list(l, (yyvsp[(3) - (3)].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
    break;

  case 381:
#line 2323 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
    break;

  case 382:
#line 2328 "sql_parser.y"
    { dlist *l = (yyvsp[(2) - (3)].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[(3) - (3)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 383:
#line 2333 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 384:
#line 2341 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(5) - (6)].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(6) - (6)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 385:
#line 2349 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 386:
#line 2357 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(4) - (5)].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[(5) - (5)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
    break;

  case 387:
#line 2365 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
    break;

  case 388:
#line 2370 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l) );
	  append_int(l, (yyvsp[(4) - (4)].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
    break;

  case 389:
#line 2374 "sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 390:
#line 2375 "sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[(3) - (3)].sval) ); }
    break;

  case 391:
#line 2376 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[(3) - (3)].l) ); }
    break;

  case 392:
#line 2377 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, (yyvsp[(3) - (3)].l) ); }
    break;

  case 393:
#line 2381 "sql_parser.y"
    {(yyval.l) = NULL;}
    break;

  case 394:
#line 2382 "sql_parser.y"
    {(yyval.l) = (yyvsp[(2) - (3)].l);}
    break;

  case 395:
#line 2383 "sql_parser.y"
    {(yyval.l) = L(); }
    break;

  case 396:
#line 2387 "sql_parser.y"
    { dlist *l = L();
				  append_type(l, &(yyvsp[(1) - (1)].type) );
				  (yyval.l)= l; }
    break;

  case 397:
#line 2390 "sql_parser.y"
    { append_type((yyvsp[(3) - (3)].l), &(yyvsp[(1) - (3)].type));
				  (yyval.l) = (yyvsp[(3) - (3)].l); }
    break;

  case 398:
#line 2395 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 399:
#line 2396 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 400:
#line 2397 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 407:
#line 2416 "sql_parser.y"
    {
	  (yyval.sym) = (yyvsp[(1) - (1)].sym);
	  m->type = Q_TRANS;					}
    break;

  case 408:
#line 2423 "sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[(3) - (3)].bval));  }
    break;

  case 409:
#line 2425 "sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[(2) - (2)].sval)); }
    break;

  case 410:
#line 2427 "sql_parser.y"
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[(3) - (3)].sval)); }
    break;

  case 411:
#line 2429 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[(3) - (4)].bval)), (yyvsp[(4) - (4)].sval) )); }
    break;

  case 412:
#line 2433 "sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 413:
#line 2435 "sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(4) - (4)].i_val)); }
    break;

  case 414:
#line 2437 "sql_parser.y"
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[(3) - (3)].i_val)); }
    break;

  case 415:
#line 2441 "sql_parser.y"
    { (yyval.i_val) = tr_none; }
    break;

  case 417:
#line 2447 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val); }
    break;

  case 418:
#line 2449 "sql_parser.y"
    { (yyval.i_val) = ((yyvsp[(1) - (3)].i_val) | (yyvsp[(3) - (3)].i_val)); }
    break;

  case 419:
#line 2454 "sql_parser.y"
    { (yyval.i_val) = tr_readonly; }
    break;

  case 420:
#line 2455 "sql_parser.y"
    { (yyval.i_val) = tr_writable; }
    break;

  case 421:
#line 2456 "sql_parser.y"
    { (yyval.i_val) = tr_serializable; }
    break;

  case 422:
#line 2457 "sql_parser.y"
    { (yyval.i_val) = tr_none; /* not supported */ }
    break;

  case 427:
#line 2468 "sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 428:
#line 2469 "sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 429:
#line 2473 "sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 430:
#line 2474 "sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 431:
#line 2475 "sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 432:
#line 2479 "sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 433:
#line 2480 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 434:
#line 2485 "sql_parser.y"
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

  case 435:
#line 2498 "sql_parser.y"
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

  case 436:
#line 2511 "sql_parser.y"
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
#line 2521 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, (yyvsp[(4) - (6)].sval));
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 438:
#line 2528 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(2) - (6)].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[(5) - (6)].l));
	  append_string(l, (yyvsp[(6) - (6)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
    break;

  case 439:
#line 2537 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 440:
#line 2538 "sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 441:
#line 2542 "sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 442:
#line 2543 "sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 443:
#line 2548 "sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (1)].sval) );
			  (yyval.l) = l; }
    break;

  case 444:
#line 2552 "sql_parser.y"
    { dlist *l = L();
			  append_string(l, (yyvsp[(1) - (2)].sval) );
			  append_string(l, (yyvsp[(2) - (2)].sval) );
			  (yyval.l) = l; }
    break;

  case 445:
#line 2560 "sql_parser.y"
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 446:
#line 2565 "sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (3)].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
    break;

  case 447:
#line 2570 "sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (5)].sval));
				  append_string(l, (yyvsp[(5) - (5)].sval));
				  (yyval.l) = l; }
    break;

  case 448:
#line 2575 "sql_parser.y"
    { dlist *l = L();
				  append_string(l, (yyvsp[(3) - (7)].sval));
				  append_string(l, (yyvsp[(5) - (7)].sval));
				  append_string(l, sql2str((yyvsp[(7) - (7)].sval)));
				  (yyval.l) = l; }
    break;

  case 449:
#line 2583 "sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 450:
#line 2584 "sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 451:
#line 2588 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 452:
#line 2589 "sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (2)].l_val)), 0); }
    break;

  case 453:
#line 2590 "sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[(2) - (2)].l_val)); }
    break;

  case 454:
#line 2592 "sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(3) - (4)].l_val)); }
    break;

  case 455:
#line 2594 "sql_parser.y"
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[(1) - (4)].l_val)), (yyvsp[(4) - (4)].l_val)); }
    break;

  case 456:
#line 2598 "sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 457:
#line 2599 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 458:
#line 2603 "sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 459:
#line 2604 "sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 460:
#line 2608 "sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 461:
#line 2609 "sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 462:
#line 2613 "sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 463:
#line 2614 "sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 464:
#line 2618 "sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 465:
#line 2619 "sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 466:
#line 2623 "sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 467:
#line 2625 "sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 468:
#line 2631 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
    break;

  case 469:
#line 2640 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(2) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
    break;

  case 470:
#line 2681 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (4)].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 471:
#line 2689 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
    break;

  case 472:
#line 2698 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 473:
#line 2700 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
    break;

  case 474:
#line 2702 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(2) - (2)].l)); }
    break;

  case 476:
#line 2708 "sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(2) - (3)].l)); }
    break;

  case 477:
#line 2710 "sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (5)].l), (yyvsp[(4) - (5)].l)); }
    break;

  case 478:
#line 2714 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 479:
#line 2716 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 480:
#line 2720 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 481:
#line 2722 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 482:
#line 2727 "sql_parser.y"
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

  case 487:
#line 2756 "sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 488:
#line 2757 "sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 489:
#line 2758 "sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 490:
#line 2762 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 491:
#line 2764 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 492:
#line 2769 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym) );
	  append_string(l, (yyvsp[(1) - (3)].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
    break;

  case 493:
#line 2774 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
    break;

  case 494:
#line 2781 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 495:
#line 2782 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 496:
#line 2789 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 497:
#line 2792 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
    break;

  case 498:
#line 2797 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
    break;

  case 499:
#line 2805 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 0);
	  append_int(l, 0);
	  append_symbol(l, (yyvsp[(3) - (4)].sym));
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 500:
#line 2813 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  append_int(l, 1);
	  append_int(l, 0);
	  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 501:
#line 2821 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[(2) - (5)].i_val));
	  append_symbol(l, (yyvsp[(4) - (5)].sym));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 502:
#line 2829 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[(3) - (5)].i_val));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
    break;

  case 503:
#line 2839 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 504:
#line 2840 "sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (2)].i_val); }
    break;

  case 505:
#line 2841 "sql_parser.y"
    { (yyval.i_val) = 1 + (yyvsp[(1) - (1)].i_val); }
    break;

  case 506:
#line 2845 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 507:
#line 2846 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 508:
#line 2847 "sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 509:
#line 2851 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 510:
#line 2853 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[(2) - (2)].l)); }
    break;

  case 512:
#line 2877 "sql_parser.y"
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[(2) - (3)].l));
	  	append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
    break;

  case 513:
#line 2886 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 514:
#line 2887 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 515:
#line 2892 "sql_parser.y"
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[(1) - (6)].sval)));
	  append_list(l, (yyvsp[(2) - (6)].l));
	  append_symbol(l, (yyvsp[(5) - (6)].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
    break;

  case 519:
#line 2915 "sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (4)].bval), (yyvsp[(3) - (4)].l), NULL,
		(yyvsp[(4) - (4)].l)->h->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->data.sym,
		(yyvsp[(4) - (4)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 520:
#line 2926 "sql_parser.y"
    { (yyval.sym) = newSelectNode( SA, (yyvsp[(2) - (6)].bval), (yyvsp[(3) - (6)].l), (yyvsp[(5) - (6)].l),
		(yyvsp[(6) - (6)].l)->h->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->data.sym,
		(yyvsp[(6) - (6)].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
    break;

  case 521:
#line 2937 "sql_parser.y"
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

  case 522:
#line 2967 "sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 523:
#line 2969 "sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 525:
#line 2979 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
    break;

  case 526:
#line 2988 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
    break;

  case 527:
#line 2997 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (5)].sym));
	  append_int(l, (yyvsp[(3) - (5)].bval));
	  append_list(l, (yyvsp[(4) - (5)].l));
	  append_symbol(l, (yyvsp[(5) - (5)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
    break;

  case 528:
#line 3003 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 530:
#line 3008 "sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 531:
#line 3009 "sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 532:
#line 3010 "sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 533:
#line 3015 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 534:
#line 3017 "sql_parser.y"
    { (yyval.l) = L(); }
    break;

  case 535:
#line 3019 "sql_parser.y"
    { (yyval.l) = (yyvsp[(4) - (5)].l); }
    break;

  case 537:
#line 3029 "sql_parser.y"
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[(1) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(3) - (4)].sym));
	  append_symbol((yyval.l), (yyvsp[(4) - (4)].sym)); }
    break;

  case 538:
#line 3037 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 539:
#line 3038 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[(2) - (2)].l)); }
    break;

  case 540:
#line 3042 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 541:
#line 3044 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 542:
#line 3048 "sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (1)].l));
		  	  	  append_symbol(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 543:
#line 3052 "sql_parser.y"
    { dlist *l = L();
		  		  append_list(l, (yyvsp[(1) - (2)].l));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 544:
#line 3056 "sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
		  	  	  append_symbol(l, (yyvsp[(2) - (2)].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 545:
#line 3060 "sql_parser.y"
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[(1) - (1)].sym));
		  	  	  append_symbol(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
    break;

  case 547:
#line 3069 "sql_parser.y"
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

  case 548:
#line 3079 "sql_parser.y"
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
    break;

  case 549:
#line 3083 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym);
				  append_symbol((yyvsp[(1) - (1)].sym)->data.lval, NULL); }
    break;

  case 550:
#line 3093 "sql_parser.y"
    { m->caching = 0; }
    break;

  case 551:
#line 3095 "sql_parser.y"
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[(3) - (5)].sym));
		append_symbol(op, (yyvsp[(5) - (5)].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
    break;

  case 552:
#line 3106 "sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (5)].sval));
		  	  	  append_list(l, (yyvsp[(4) - (5)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 553:
#line 3111 "sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(2) - (2)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 554:
#line 3116 "sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (4)].sval));
		  	  	  append_list(l, (yyvsp[(3) - (4)].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 555:
#line 3121 "sql_parser.y"
    { dlist *l = L();
		  		  append_string(l, (yyvsp[(1) - (1)].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
    break;

  case 556:
#line 3128 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 557:
#line 3129 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) );}
    break;

  case 558:
#line 3133 "sql_parser.y"
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(1) - (1)].l))); }
    break;

  case 559:
#line 3136 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[(3) - (3)].l))); }
    break;

  case 560:
#line 3141 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 561:
#line 3142 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 562:
#line 3148 "sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
    break;

  case 563:
#line 3152 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 564:
#line 3157 "sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
    break;

  case 565:
#line 3161 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 566:
#line 3165 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 567:
#line 3167 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l)); }
    break;

  case 568:
#line 3171 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 569:
#line 3172 "sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("wrd");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].w_val))); 
			}
    break;

  case 570:
#line 3176 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 571:
#line 3180 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 572:
#line 3181 "sql_parser.y"
    { 
		  	  sql_subtype *t = sql_bind_localtype("wrd");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].w_val))); 
			}
    break;

  case 573:
#line 3185 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 574:
#line 3189 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 575:
#line 3190 "sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("wrd");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[(2) - (2)].w_val)));
			}
    break;

  case 576:
#line 3194 "sql_parser.y"
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[(2) - (2)].sval),NULL)));
			}
    break;

  case 577:
#line 3198 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 578:
#line 3202 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 579:
#line 3204 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 580:
#line 3209 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  append_int(l, (yyvsp[(2) - (2)].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
    break;

  case 581:
#line 3217 "sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 582:
#line 3218 "sql_parser.y"
    { (yyval.bval) = TRUE; }
    break;

  case 583:
#line 3219 "sql_parser.y"
    { (yyval.bval) = FALSE; }
    break;

  case 593:
#line 3236 "sql_parser.y"
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

  case 594:
#line 3252 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 595:
#line 3257 "sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, (yyvsp[(2) - (3)].sval));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 596:
#line 3264 "sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 597:
#line 3274 "sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
    break;

  case 598:
#line 3281 "sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (6)].sym));
		  append_int(l, (yyvsp[(3) - (6)].i_val));
		  append_symbol(l, (yyvsp[(4) - (6)].sym));
		  append_symbol(l, (yyvsp[(6) - (6)].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
    break;

  case 599:
#line 3290 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 600:
#line 3291 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 601:
#line 3292 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 602:
#line 3297 "sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 603:
#line 3304 "sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 604:
#line 3311 "sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 605:
#line 3318 "sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (3)].sym));
		  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
    break;

  case 606:
#line 3328 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(1) - (1)].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
    break;

  case 607:
#line 3332 "sql_parser.y"
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

  case 608:
#line 3349 "sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[(1) - (4)].sym) );}
    break;

  case 609:
#line 3350 "sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[(1) - (3)].sym) ); }
    break;

  case 610:
#line 3355 "sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 611:
#line 3361 "sql_parser.y"
    { dlist *l = L();

		  append_symbol(l, (yyvsp[(1) - (5)].sym));
		  append_list(l, (yyvsp[(4) - (5)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 612:
#line 3367 "sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
    break;

  case 613:
#line 3372 "sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(2) - (7)].l));
		  append_list(l, (yyvsp[(6) - (7)].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
    break;

  case 614:
#line 3380 "sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 615:
#line 3382 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 616:
#line 3388 "sql_parser.y"
    { dlist *l = L();
		  append_symbol(l, (yyvsp[(1) - (4)].sym));
		  append_string(l, (yyvsp[(2) - (4)].sval));
		  append_symbol(l, (yyvsp[(4) - (4)].sym));
		  append_int(l, (yyvsp[(3) - (4)].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
    break;

  case 617:
#line 3397 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 618:
#line 3398 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 619:
#line 3399 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 620:
#line 3403 "sql_parser.y"
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[(2) - (2)].sym) ); }
    break;

  case 621:
#line 3407 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 622:
#line 3408 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym));  }
    break;

  case 623:
#line 3412 "sql_parser.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); }
    break;

  case 624:
#line 3417 "sql_parser.y"
    { dlist *l = L();
		  append_list(l, (yyvsp[(1) - (3)].l));
		  append_list(l, (yyvsp[(2) - (3)].l));
		  append_list(l, (yyvsp[(3) - (3)].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
    break;

  case 625:
#line 3425 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 626:
#line 3427 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[(3) - (4)].l)); }
    break;

  case 627:
#line 3429 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 629:
#line 3436 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 630:
#line 3443 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 631:
#line 3450 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 632:
#line 3457 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 633:
#line 3464 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 634:
#line 3471 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 635:
#line 3478 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
			  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 636:
#line 3485 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 637:
#line 3492 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 638:
#line 3499 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 639:
#line 3506 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 640:
#line 3513 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 641:
#line 3519 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 642:
#line 3526 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 643:
#line 3533 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 644:
#line 3540 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 645:
#line 3547 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 646:
#line 3554 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 647:
#line 3561 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[(1) - (4)].sym));
	  		  append_symbol(l, (yyvsp[(4) - (4)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 648:
#line 3568 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 649:
#line 3574 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 650:
#line 3581 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 651:
#line 3588 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 652:
#line 3595 "sql_parser.y"
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  		  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 653:
#line 3602 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 654:
#line 3604 "sql_parser.y"
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

  case 655:
#line 3628 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); }
    break;

  case 656:
#line 3632 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 659:
#line 3638 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
    break;

  case 660:
#line 3640 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
    break;

  case 662:
#line 3643 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[(1) - (1)].l)); }
    break;

  case 666:
#line 3647 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[(4) - (4)].l)); }
    break;

  case 674:
#line 3659 "sql_parser.y"
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
    break;

  case 675:
#line 3729 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[(1) - (5)].sym)), (yyvsp[(4) - (5)].l))); }
    break;

  case 676:
#line 3734 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[(1) - (3)].l) ); }
    break;

  case 678:
#line 3740 "sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[(1) - (3)].sym)), (yyvsp[(2) - (3)].sym)), (yyvsp[(3) - (3)].sym)); }
    break;

  case 679:
#line 3744 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 680:
#line 3746 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 681:
#line 3750 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 682:
#line 3752 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[(3) - (3)].l) ); }
    break;

  case 683:
#line 3756 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 684:
#line 3758 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[(2) - (3)].l), (yyvsp[(1) - (3)].i_val)), (yyvsp[(3) - (3)].i_val))); }
    break;

  case 685:
#line 3762 "sql_parser.y"
    { (yyval.i_val) = FRAME_ROWS; }
    break;

  case 686:
#line 3763 "sql_parser.y"
    { (yyval.i_val) = FRAME_RANGE; }
    break;

  case 687:
#line 3767 "sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(1) - (1)].sym)), _symbol_create_int(SQL_FRAME, -1)); }
    break;

  case 688:
#line 3768 "sql_parser.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); }
    break;

  case 689:
#line 3772 "sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 690:
#line 3773 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 691:
#line 3774 "sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 692:
#line 3778 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 693:
#line 3783 "sql_parser.y"
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[(2) - (4)].sym)), (yyvsp[(4) - (4)].sym)); }
    break;

  case 694:
#line 3787 "sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
    break;

  case 695:
#line 3788 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 696:
#line 3789 "sql_parser.y"
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
    break;

  case 697:
#line 3793 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 698:
#line 3797 "sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NONE; }
    break;

  case 699:
#line 3798 "sql_parser.y"
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
    break;

  case 700:
#line 3799 "sql_parser.y"
    { (yyval.i_val) = EXCLUDE_GROUP; }
    break;

  case 701:
#line 3800 "sql_parser.y"
    { (yyval.i_val) = EXCLUDE_TIES; }
    break;

  case 702:
#line 3801 "sql_parser.y"
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
    break;

  case 703:
#line 3805 "sql_parser.y"
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[(2) - (2)].sval) ); }
    break;

  case 704:
#line 3810 "sql_parser.y"
    { dlist *l = L();
  	  append_list(l, (yyvsp[(1) - (3)].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 705:
#line 3814 "sql_parser.y"
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

  case 706:
#line 3841 "sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 707:
#line 3842 "sql_parser.y"
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 708:
#line 3847 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 709:
#line 3848 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "left"); }
    break;

  case 710:
#line 3849 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "right"); }
    break;

  case 711:
#line 3850 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "insert"); }
    break;

  case 712:
#line 3855 "sql_parser.y"
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[(3) - (6)].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
    break;

  case 713:
#line 3862 "sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 714:
#line 3867 "sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 715:
#line 3872 "sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 716:
#line 3877 "sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 717:
#line 3882 "sql_parser.y"
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
    break;

  case 718:
#line 3889 "sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 719:
#line 3890 "sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 720:
#line 3895 "sql_parser.y"
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

  case 721:
#line 3905 "sql_parser.y"
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

  case 722:
#line 3915 "sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 723:
#line 3922 "sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 724:
#line 3929 "sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  	  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 725:
#line 3936 "sql_parser.y"
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 726:
#line 3943 "sql_parser.y"
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

  case 727:
#line 3955 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym) ); }
    break;

  case 728:
#line 3957 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym) ); }
    break;

  case 729:
#line 3962 "sql_parser.y"
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 730:
#line 3967 "sql_parser.y"
    { dlist *l = L();
  		  append_string(l, (yyvsp[(1) - (3)].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 731:
#line 3972 "sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (3)].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
    break;

  case 732:
#line 3977 "sql_parser.y"
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[(1) - (2)].sym));
  		  append_string(l, (yyvsp[(2) - (2)].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
    break;

  case 733:
#line 3984 "sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 734:
#line 3985 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 735:
#line 3990 "sql_parser.y"
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

  case 736:
#line 4011 "sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 737:
#line 4012 "sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 738:
#line 4017 "sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 739:
#line 4018 "sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 740:
#line 4023 "sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 741:
#line 4024 "sql_parser.y"
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 742:
#line 4031 "sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 743:
#line 4037 "sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 744:
#line 4043 "sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 745:
#line 4049 "sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (5)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(4) - (5)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 746:
#line 4055 "sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (4)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (4)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 747:
#line 4061 "sql_parser.y"
    { dlist *l = L();
  		  append_list(l, (yyvsp[(1) - (6)].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[(3) - (6)].sym));
  		  append_symbol(l, (yyvsp[(5) - (6)].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
    break;

  case 749:
#line 4071 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 750:
#line 4072 "sql_parser.y"
    { (yyval.i_val) = -1; }
    break;

  case 751:
#line 4073 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 752:
#line 4077 "sql_parser.y"
    { (yyval.bval) = 1; }
    break;

  case 753:
#line 4078 "sql_parser.y"
    { (yyval.bval) = 0; }
    break;

  case 754:
#line 4089 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 755:
#line 4091 "sql_parser.y"
    { (yyval.i_val) = 0+1; }
    break;

  case 756:
#line 4095 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (3)].i_val)+1; }
    break;

  case 757:
#line 4097 "sql_parser.y"
    { (yyval.i_val) = 6+1; }
    break;

  case 758:
#line 4101 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
    break;

  case 759:
#line 4103 "sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 760:
#line 4109 "sql_parser.y"
    { if ((yyvsp[(3) - (3)].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[(2) - (3)].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[(2) - (3)].i_val), 0); 
			}
    break;

  case 761:
#line 4117 "sql_parser.y"
    { (yyval.i_val) = iyear; }
    break;

  case 762:
#line 4118 "sql_parser.y"
    { (yyval.i_val) = imonth; }
    break;

  case 763:
#line 4119 "sql_parser.y"
    { (yyval.i_val) = iday; }
    break;

  case 764:
#line 4120 "sql_parser.y"
    { (yyval.i_val) = ihour; }
    break;

  case 765:
#line 4121 "sql_parser.y"
    { (yyval.i_val) = imin; }
    break;

  case 767:
#line 4126 "sql_parser.y"
    { (yyval.i_val) = isec; }
    break;

  case 768:
#line 4131 "sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 769:
#line 4137 "sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (1)].i_val)), 0);  }
    break;

  case 770:
#line 4140 "sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 771:
#line 4146 "sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[(1) - (2)].i_val)), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 772:
#line 4149 "sql_parser.y"
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[(2) - (2)].i_val)-1);  }
    break;

  case 773:
#line 4155 "sql_parser.y"
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[(1) - (3)].l)), (yyvsp[(3) - (3)].l) ); }
    break;

  case 774:
#line 4158 "sql_parser.y"
    { (yyval.l) =  append_list( L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 775:
#line 4162 "sql_parser.y"
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

  case 779:
#line 4188 "sql_parser.y"
    { const char *s = sql2str((yyvsp[(1) - (1)].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
    break;

  case 780:
#line 4194 "sql_parser.y"
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

  case 781:
#line 4259 "sql_parser.y"
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

  case 782:
#line 4290 "sql_parser.y"
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

  case 783:
#line 4341 "sql_parser.y"
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

  case 784:
#line 4380 "sql_parser.y"
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

  case 785:
#line 4397 "sql_parser.y"
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

  case 786:
#line 4413 "sql_parser.y"
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

  case 787:
#line 4429 "sql_parser.y"
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

  case 789:
#line 4446 "sql_parser.y"
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

  case 790:
#line 4463 "sql_parser.y"
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

  case 791:
#line 4480 "sql_parser.y"
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

  case 792:
#line 4497 "sql_parser.y"
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

  case 793:
#line 4518 "sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
    break;

  case 794:
#line 4522 "sql_parser.y"
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
    break;

  case 795:
#line 4528 "sql_parser.y"
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

  case 796:
#line 4573 "sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 797:
#line 4574 "sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (3)].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 798:
#line 4578 "sql_parser.y"
    {
				  m->scanner.schema = (yyvsp[(1) - (5)].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[(1) - (5)].sval)), 
						(yyvsp[(3) - (5)].sval)), 
					(yyvsp[(5) - (5)].sval))
				;}
    break;

  case 799:
#line 4589 "sql_parser.y"
    { (yyval.l) = append_string(
				L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 800:
#line 4592 "sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].sval));}
    break;

  case 801:
#line 4597 "sql_parser.y"
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[(1) - (5)].sval)), (yyvsp[(3) - (5)].sval)), (yyvsp[(5) - (5)].sval));}
    break;

  case 802:
#line 4605 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 803:
#line 4611 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (6)].sym));
	  append_type(l, &(yyvsp[(5) - (6)].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
    break;

  case 805:
#line 4623 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[(3) - (6)].sym)), (yyvsp[(5) - (6)].sym))); }
    break;

  case 806:
#line 4628 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[(3) - (4)].l)); }
    break;

  case 807:
#line 4630 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[(2) - (5)].sym)),(yyvsp[(3) - (5)].l)),(yyvsp[(4) - (5)].sym))); }
    break;

  case 808:
#line 4636 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[(2) - (4)].l)),(yyvsp[(3) - (4)].sym))); }
    break;

  case 809:
#line 4644 "sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 810:
#line 4646 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 811:
#line 4651 "sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (3)].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[(3) - (3)].sym));
			}
    break;

  case 812:
#line 4655 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 813:
#line 4661 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 814:
#line 4669 "sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym));}
    break;

  case 815:
#line 4671 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 816:
#line 4676 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[(2) - (4)].sym)),(yyvsp[(4) - (4)].sym))); }
    break;

  case 817:
#line 4684 "sql_parser.y"
    { (yyval.l) = append_symbol( L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 818:
#line 4686 "sql_parser.y"
    { (yyval.l) = append_symbol( (yyvsp[(1) - (2)].l), (yyvsp[(2) - (2)].sym)); }
    break;

  case 819:
#line 4690 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 820:
#line 4691 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 822:
#line 4701 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 823:
#line 4712 "sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 824:
#line 4723 "sql_parser.y"
    { (yyval.w_val) = (yyvsp[(1) - (1)].w_val);
		  if ((yyval.w_val) <= 0) {
			(yyval.w_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
    break;

  case 825:
#line 4733 "sql_parser.y"
    { (yyval.l_val) = (yyvsp[(1) - (1)].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 826:
#line 4743 "sql_parser.y"
    { (yyval.w_val) = (yyvsp[(1) - (1)].w_val);
		  if ((yyval.w_val) < 0) {
			(yyval.w_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 827:
#line 4753 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(1) - (1)].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
    break;

  case 828:
#line 4764 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
    break;

  case 829:
#line 4766 "sql_parser.y"
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
    break;

  case 830:
#line 4770 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
    break;

  case 831:
#line 4772 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 832:
#line 4774 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 833:
#line 4776 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
    break;

  case 834:
#line 4784 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
    break;

  case 835:
#line 4786 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[(3) - (4)].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
    break;

  case 836:
#line 4794 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
    break;

  case 837:
#line 4795 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
    break;

  case 838:
#line 4796 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
    break;

  case 839:
#line 4797 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
    break;

  case 840:
#line 4798 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
    break;

  case 841:
#line 4800 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
    break;

  case 842:
#line 4802 "sql_parser.y"
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

  case 843:
#line 4815 "sql_parser.y"
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

  case 844:
#line 4832 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 845:
#line 4834 "sql_parser.y"
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

  case 846:
#line 4848 "sql_parser.y"
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

  case 847:
#line 4867 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 848:
#line 4868 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
    break;

  case 849:
#line 4869 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
    break;

  case 852:
#line 4872 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 853:
#line 4874 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 854:
#line 4875 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (1)].sval), 0, 0); }
    break;

  case 855:
#line 4877 "sql_parser.y"
    { sql_find_subtype(&(yyval.type), (yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].i_val), 0); }
    break;

  case 856:
#line 4879 "sql_parser.y"
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

  case 857:
#line 4890 "sql_parser.y"
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

  case 858:
#line 4905 "sql_parser.y"
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

  case 859:
#line 4918 "sql_parser.y"
    {
		sql_find_subtype(&(yyval.type), "geometry", 0, 0 );
	}
    break;

  case 860:
#line 4921 "sql_parser.y"
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

  case 861:
#line 4936 "sql_parser.y"
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

  case 862:
#line 4951 "sql_parser.y"
    {
		sql_find_subtype(&(yyval.type), "geometrya", 0, 0 );
	}
    break;

  case 863:
#line 4954 "sql_parser.y"
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

  case 864:
#line 4974 "sql_parser.y"
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

  case 865:
#line 4986 "sql_parser.y"
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
#line 5002 "sql_parser.y"
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

  case 867:
#line 5016 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 868:
#line 5017 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (2)].sval); }
    break;

  case 869:
#line 5021 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 870:
#line 5022 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 871:
#line 5023 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 872:
#line 5026 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 873:
#line 5027 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (3)].sval); }
    break;

  case 876:
#line 5035 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 877:
#line 5036 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 878:
#line 5037 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 879:
#line 5038 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 880:
#line 5039 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 881:
#line 5040 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 882:
#line 5044 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 883:
#line 5045 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 884:
#line 5046 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 885:
#line 5047 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 886:
#line 5048 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 887:
#line 5049 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 888:
#line 5050 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 890:
#line 5055 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "large"); }
    break;

  case 891:
#line 5056 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "name"); }
    break;

  case 892:
#line 5057 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "object"); }
    break;

  case 893:
#line 5058 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "password"); }
    break;

  case 894:
#line 5059 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "path"); }
    break;

  case 895:
#line 5060 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "precision"); }
    break;

  case 896:
#line 5061 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
    break;

  case 897:
#line 5062 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "role"); }
    break;

  case 898:
#line 5063 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "size"); }
    break;

  case 899:
#line 5064 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "type"); }
    break;

  case 900:
#line 5065 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "release"); }
    break;

  case 901:
#line 5066 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "value"); }
    break;

  case 902:
#line 5067 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "zone"); }
    break;

  case 903:
#line 5069 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "action"); }
    break;

  case 904:
#line 5070 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "as"); }
    break;

  case 905:
#line 5071 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
    break;

  case 906:
#line 5072 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "column"); }
    break;

  case 907:
#line 5073 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
    break;

  case 908:
#line 5074 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
    break;

  case 909:
#line 5075 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "increment"); }
    break;

  case 910:
#line 5076 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
    break;

  case 911:
#line 5077 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
    break;

  case 912:
#line 5078 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "plan"); }
    break;

  case 913:
#line 5079 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "schema"); }
    break;

  case 914:
#line 5080 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "start"); }
    break;

  case 915:
#line 5081 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "statement"); }
    break;

  case 916:
#line 5082 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "table"); }
    break;

  case 917:
#line 5084 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "cache"); }
    break;

  case 918:
#line 5085 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "data"); }
    break;

  case 919:
#line 5086 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
    break;

  case 920:
#line 5087 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "match"); }
    break;

  case 921:
#line 5088 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "options"); }
    break;

  case 922:
#line 5089 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "row"); }
    break;

  case 923:
#line 5090 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "key"); }
    break;

  case 924:
#line 5091 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "language"); }
    break;

  case 925:
#line 5092 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "level"); }
    break;

  case 926:
#line 5093 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "session"); }
    break;

  case 927:
#line 5094 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "date"); }
    break;

  case 928:
#line 5095 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "time"); }
    break;

  case 929:
#line 5096 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
    break;

  case 930:
#line 5097 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "interval"); }
    break;

  case 931:
#line 5099 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
    break;

  case 932:
#line 5100 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "execute"); }
    break;

  case 933:
#line 5101 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "explain"); }
    break;

  case 934:
#line 5102 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "dot"); }
    break;

  case 935:
#line 5103 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "debug"); }
    break;

  case 936:
#line 5104 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "trace"); }
    break;

  case 937:
#line 5105 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "text"); }
    break;

  case 938:
#line 5106 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
    break;

  case 939:
#line 5107 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "no"); }
    break;

  case 940:
#line 5109 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "strip"); }
    break;

  case 941:
#line 5110 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
    break;

  case 942:
#line 5111 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "passing"); }
    break;

  case 943:
#line 5112 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "nil"); }
    break;

  case 944:
#line 5113 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "ref"); }
    break;

  case 945:
#line 5114 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "absent"); }
    break;

  case 946:
#line 5115 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "empty"); }
    break;

  case 947:
#line 5116 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "document"); }
    break;

  case 948:
#line 5117 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "element"); }
    break;

  case 949:
#line 5118 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "content"); }
    break;

  case 950:
#line 5119 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
    break;

  case 951:
#line 5120 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "returning"); }
    break;

  case 952:
#line 5121 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "location"); }
    break;

  case 953:
#line 5122 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "id"); }
    break;

  case 954:
#line 5123 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "according"); }
    break;

  case 955:
#line 5124 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "uri"); }
    break;

  case 956:
#line 5125 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "filter"); }
    break;

  case 957:
#line 5126 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
    break;

  case 958:
#line 5127 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "temp"); }
    break;

  case 959:
#line 5128 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
    break;

  case 960:
#line 5129 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
    break;

  case 961:
#line 5130 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "storage"); }
    break;

  case 962:
#line 5131 "sql_parser.y"
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
    break;

  case 963:
#line 5135 "sql_parser.y"
    { (yyval.l) = append_string(L(), (yyvsp[(1) - (1)].sval)); }
    break;

  case 964:
#line 5137 "sql_parser.y"
    { (yyval.l) = append_string((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sval)); }
    break;

  case 965:
#line 5141 "sql_parser.y"
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

  case 966:
#line 5160 "sql_parser.y"
    {
		  char *end = NULL, *s = (yyvsp[(1) - (1)].sval);
		  int l = _strlen(s);

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
#line 5182 "sql_parser.y"
    {
		  char *end = NULL, *s = (yyvsp[(1) - (1)].sval);
		  int l = _strlen(s);

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
#line 5201 "sql_parser.y"
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
#line 5234 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 970:
#line 5236 "sql_parser.y"
    { char *s = strconcat((yyvsp[(1) - (2)].sval),(yyvsp[(2) - (2)].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
    break;

  case 971:
#line 5244 "sql_parser.y"
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 972:
#line 5251 "sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (3)].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 973:
#line 5256 "sql_parser.y"
    { dlist *l = L();
  	  append_int(l, (yyvsp[(1) - (4)].i_val));
  	  append_list(l, (yyvsp[(3) - (4)].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
    break;

  case 974:
#line 5270 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 976:
#line 5275 "sql_parser.y"
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[(2) - (2)].l)); }
    break;

  case 979:
#line 5286 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 980:
#line 5288 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 992:
#line 5310 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
    break;

  case 993:
#line 5318 "sql_parser.y"
    { dlist *l = L();
	  append_list(l, (yyvsp[(3) - (5)].l));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
    break;

  case 994:
#line 5326 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
    break;

  case 995:
#line 5336 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_list(l, (yyvsp[(5) - (7)].l));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
    break;

  case 996:
#line 5346 "sql_parser.y"
    { (yyval.l) = NULL; }
    break;

  case 997:
#line 5348 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 998:
#line 5352 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 999:
#line 5356 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (6)].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(4) - (6)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(6) - (6)].l)); }
    break;

  case 1000:
#line 5360 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1001:
#line 5364 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (2)].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
    break;

  case 1002:
#line 5368 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[(2) - (4)].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[(4) - (4)].l)); }
    break;

  case 1003:
#line 5372 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[(2) - (2)].l)); }
    break;

  case 1005:
#line 5382 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1006:
#line 5386 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1007:
#line 5388 "sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1008:
#line 5398 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(2) - (2)].sval));
	  append_symbol(l, (yyvsp[(1) - (2)].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1009:
#line 5405 "sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1010:
#line 5406 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1013:
#line 5419 "sql_parser.y"
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[(1) - (2)].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[(2) - (2)].i_val)); 	}
    break;

  case 1014:
#line 5426 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (1)].sym)); }
    break;

  case 1015:
#line 5428 "sql_parser.y"
    { (yyval.l) = append_symbol((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].sym)); }
    break;

  case 1017:
#line 5436 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1018:
#line 5437 "sql_parser.y"
    { (yyval.i_val) = (yyvsp[(2) - (2)].i_val); }
    break;

  case 1019:
#line 5441 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1020:
#line 5442 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1021:
#line 5443 "sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1022:
#line 5444 "sql_parser.y"
    { (yyval.i_val) = 3; }
    break;

  case 1023:
#line 5445 "sql_parser.y"
    { (yyval.i_val) = 4; }
    break;

  case 1024:
#line 5452 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (7)].sym));
	  append_list(l, (yyvsp[(4) - (7)].l));
	  append_int(l, (yyvsp[(5) - (7)].i_val));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
    break;

  case 1025:
#line 5462 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1026:
#line 5463 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (2)].sym); }
    break;

  case 1027:
#line 5468 "sql_parser.y"
    { (yyval.l) = append_list(L(), (yyvsp[(1) - (1)].l)); }
    break;

  case 1028:
#line 5470 "sql_parser.y"
    { (yyval.l) = append_list((yyvsp[(1) - (3)].l), (yyvsp[(3) - (3)].l)); }
    break;

  case 1029:
#line 5475 "sql_parser.y"
    { (yyval.l) = append_symbol(L(), (yyvsp[(1) - (2)].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[(2) - (2)].sval)); }
    break;

  case 1030:
#line 5480 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1031:
#line 5484 "sql_parser.y"
    { (yyval.sval) = NULL; }
    break;

  case 1032:
#line 5485 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1033:
#line 5489 "sql_parser.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 1034:
#line 5496 "sql_parser.y"
    { dlist *l = L();
	  append_int(l, (yyvsp[(3) - (6)].i_val) );
	  append_symbol(l, (yyvsp[(4) - (6)].sym));
	  append_int(l, (yyvsp[(5) - (6)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
    break;

  case 1035:
#line 5503 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1036:
#line 5504 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1037:
#line 5511 "sql_parser.y"
    { dlist *l = L();
	  append_string(l, (yyvsp[(4) - (7)].sval));
	  append_symbol(l, (yyvsp[(5) - (7)].sym));
	  append_int(l, (yyvsp[(6) - (7)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
    break;

  case 1039:
#line 5523 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1040:
#line 5525 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); }
    break;

  case 1041:
#line 5536 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1056:
#line 5582 "sql_parser.y"
    { dlist *l = L();
	  append_symbol(l, (yyvsp[(3) - (5)].sym));
	  append_int(l, (yyvsp[(4) - (5)].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
    break;

  case 1057:
#line 5593 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1059:
#line 5598 "sql_parser.y"
    { (yyval.i_val) = 2; }
    break;

  case 1060:
#line 5602 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1061:
#line 5603 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1062:
#line 5607 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1063:
#line 5608 "sql_parser.y"
    { (yyval.i_val) = 0; }
    break;

  case 1064:
#line 5609 "sql_parser.y"
    { (yyval.i_val) = 1; }
    break;

  case 1065:
#line 5624 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(3) - (4)].sym); }
    break;

  case 1066:
#line 5628 "sql_parser.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); }
    break;

  case 1067:
#line 5630 "sql_parser.y"
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  	  append_symbol(l, (yyvsp[(3) - (3)].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
    break;

  case 1072:
#line 5653 "sql_parser.y"
    { char *s = strconcat("xmlns:", (yyvsp[(3) - (3)].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[(1) - (3)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1073:
#line 5662 "sql_parser.y"
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[(2) - (2)].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
    break;

  case 1074:
#line 5666 "sql_parser.y"
    { (yyval.sym) = NULL; }
    break;

  case 1104:
#line 5762 "sql_parser.y"
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
#line 13399 "y.tab.c"
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


#line 5783 "sql_parser.y"

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


