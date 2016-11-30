/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         sqlparse
#define yylex           sqllex
#define yyerror         sqlerror
#define yydebug         sqldebug
#define yynerrs         sqlnerrs


/* Copy the first part of user declarations.  */
#line 9 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:339  */

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


#line 162 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_SQL_Y_TAB_H_INCLUDED
# define YY_SQL_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sqldebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    UNION = 421,
    EXCEPT = 422,
    INTERSECT = 423,
    CORRESPONDING = 424,
    UNIONJOIN = 425,
    WITH = 426,
    DATA = 427,
    FILTER_FUNC = 428,
    NOT = 429,
    ALL = 430,
    ANY = 431,
    NOT_BETWEEN = 432,
    BETWEEN = 433,
    NOT_IN = 434,
    sqlIN = 435,
    NOT_LIKE = 436,
    LIKE = 437,
    NOT_ILIKE = 438,
    ILIKE = 439,
    OR = 440,
    SOME = 441,
    AND = 442,
    COMPARISON = 443,
    LEFT_SHIFT = 444,
    RIGHT_SHIFT = 445,
    LEFT_SHIFT_ASSIGN = 446,
    RIGHT_SHIFT_ASSIGN = 447,
    CONCATSTRING = 448,
    SUBSTRING = 449,
    POSITION = 450,
    SPLIT_PART = 451,
    UMINUS = 452,
    GEOM_OVERLAP = 453,
    GEOM_OVERLAP_OR_ABOVE = 454,
    GEOM_OVERLAP_OR_BELOW = 455,
    GEOM_OVERLAP_OR_LEFT = 456,
    GEOM_OVERLAP_OR_RIGHT = 457,
    GEOM_BELOW = 458,
    GEOM_ABOVE = 459,
    GEOM_DIST = 460,
    GEOM_MBR_EQUAL = 461,
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
#define UNION 421
#define EXCEPT 422
#define INTERSECT 423
#define CORRESPONDING 424
#define UNIONJOIN 425
#define WITH 426
#define DATA 427
#define FILTER_FUNC 428
#define NOT 429
#define ALL 430
#define ANY 431
#define NOT_BETWEEN 432
#define BETWEEN 433
#define NOT_IN 434
#define sqlIN 435
#define NOT_LIKE 436
#define LIKE 437
#define NOT_ILIKE 438
#define ILIKE 439
#define OR 440
#define SOME 441
#define AND 442
#define COMPARISON 443
#define LEFT_SHIFT 444
#define RIGHT_SHIFT 445
#define LEFT_SHIFT_ASSIGN 446
#define RIGHT_SHIFT_ASSIGN 447
#define CONCATSTRING 448
#define SUBSTRING 449
#define POSITION 450
#define SPLIT_PART 451
#define UMINUS 452
#define GEOM_OVERLAP 453
#define GEOM_OVERLAP_OR_ABOVE 454
#define GEOM_OVERLAP_OR_BELOW 455
#define GEOM_OVERLAP_OR_LEFT 456
#define GEOM_OVERLAP_OR_RIGHT 457
#define GEOM_BELOW 458
#define GEOM_ABOVE 459
#define GEOM_DIST 460
#define GEOM_MBR_EQUAL 461
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 111 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:355  */

	int		i_val,bval;
	lng		l_val,operation;
	double		fval;
	char *		sval;
	symbol*		sym;
	dlist*		l;
	sql_subtype	type;

#line 868 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sqlparse (mvc *m);

#endif /* !YY_SQL_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 120 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:358  */

extern int sqllex( YYSTYPE *yylval, void *m );
/* enable to activate debugging support
int yydebug=1;
*/

#line 890 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  224
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   16650

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  347
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  403
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2067

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   583

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
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
    4257,  4258,  4262,  4268,  4332,  4363,  4424,  4463,  4480,  4496,
    4512,  4528,  4529,  4546,  4563,  4580,  4601,  4605,  4612,  4657,
    4658,  4662,  4673,  4676,  4680,  4688,  4694,  4702,  4706,  4711,
    4713,  4719,  4727,  4729,  4734,  4738,  4744,  4752,  4754,  4759,
    4767,  4769,  4774,  4775,  4779,  4784,  4795,  4806,  4816,  4826,
    4828,  4833,  4834,  4836,  4838,  4847,  4848,  4857,  4858,  4859,
    4860,  4861,  4863,  4864,  4877,  4895,  4896,  4910,  4930,  4931,
    4932,  4933,  4934,  4935,  4936,  4938,  4939,  4941,  4953,  4967,
    4981,  4988,  5003,  5018,  5025,  5045,  5057,  5072,  5087,  5088,
    5092,  5093,  5094,  5097,  5098,  5101,  5103,  5106,  5107,  5108,
    5109,  5110,  5111,  5115,  5116,  5117,  5118,  5119,  5120,  5121,
    5122,  5126,  5127,  5128,  5129,  5130,  5131,  5132,  5133,  5134,
    5135,  5136,  5137,  5138,  5140,  5141,  5142,  5143,  5144,  5145,
    5146,  5147,  5148,  5149,  5150,  5151,  5152,  5153,  5155,  5156,
    5157,  5158,  5159,  5160,  5161,  5162,  5163,  5164,  5165,  5166,
    5167,  5168,  5169,  5171,  5172,  5173,  5174,  5175,  5176,  5177,
    5178,  5180,  5181,  5182,  5183,  5184,  5185,  5186,  5187,  5188,
    5189,  5190,  5191,  5192,  5193,  5194,  5195,  5196,  5197,  5198,
    5199,  5200,  5201,  5202,  5206,  5207,  5212,  5235,  5256,  5288,
    5290,  5298,  5305,  5310,  5325,  5326,  5330,  5333,  5336,  5340,
    5342,  5347,  5351,  5352,  5353,  5354,  5355,  5356,  5357,  5358,
    5359,  5360,  5364,  5372,  5380,  5387,  5401,  5402,  5406,  5410,
    5414,  5418,  5422,  5426,  5433,  5437,  5441,  5442,  5452,  5460,
    5461,  5465,  5469,  5473,  5480,  5482,  5487,  5491,  5492,  5496,
    5497,  5498,  5499,  5500,  5504,  5517,  5518,  5522,  5524,  5529,
    5535,  5539,  5540,  5544,  5549,  5558,  5559,  5563,  5574,  5578,
    5579,  5584,  5594,  5597,  5599,  5603,  5607,  5608,  5612,  5613,
    5617,  5621,  5624,  5626,  5630,  5631,  5635,  5643,  5652,  5653,
    5657,  5658,  5662,  5663,  5664,  5679,  5683,  5684,  5694,  5695,
    5699,  5703,  5707,  5717,  5721,  5724,  5726,  5730,  5731,  5734,
    5736,  5740,  5745,  5746,  5750,  5751,  5755,  5759,  5762,  5764,
    5768,  5772,  5776,  5779,  5781,  5785,  5786,  5790,  5792,  5796,
    5800,  5801,  5805,  5809,  5813
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "ID", "ACCORDING", "XMLSCHEMA", "URI", "XMLAGG", "FILTER", "UNION",
  "EXCEPT", "INTERSECT", "CORRESPONDING", "UNIONJOIN", "WITH", "DATA",
  "'('", "')'", "FILTER_FUNC", "NOT", "'='", "ALL", "ANY", "NOT_BETWEEN",
  "BETWEEN", "NOT_IN", "sqlIN", "NOT_LIKE", "LIKE", "NOT_ILIKE", "ILIKE",
  "OR", "SOME", "AND", "COMPARISON", "'+'", "'-'", "'&'", "'|'", "'^'",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN",
  "CONCATSTRING", "SUBSTRING", "POSITION", "SPLIT_PART", "UMINUS", "'*'",
  "'/'", "'%'", "'~'", "GEOM_OVERLAP", "GEOM_OVERLAP_OR_ABOVE",
  "GEOM_OVERLAP_OR_BELOW", "GEOM_OVERLAP_OR_LEFT", "GEOM_OVERLAP_OR_RIGHT",
  "GEOM_BELOW", "GEOM_ABOVE", "GEOM_DIST", "GEOM_MBR_EQUAL", "TEMP",
  "TEMPORARY", "STREAM", "MERGE", "REMOTE", "REPLICA", "ASC", "DESC",
  "AUTHORIZATION", "CHECK", "CONSTRAINT", "CREATE", "TYPE", "PROCEDURE",
  "FUNCTION", "sqlLOADER", "AGGREGATE", "RETURNS", "EXTERNAL", "sqlNAME",
  "DECLARE", "CALL", "LANGUAGE", "ANALYZE", "MINMAX", "SQL_EXPLAIN",
  "SQL_PLAN", "SQL_DEBUG", "SQL_TRACE", "PREPARE", "EXECUTE", "DEFAULT",
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
  "$accept", "sqlstmt", "$@1", "$@2", "$@3", "$@4", "$@5", "create",
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
  "table_exp", "opt_from_clause", "table_ref_commalist", "table_ref",
  "$@6", "table_name", "opt_table_name", "opt_group_by_clause",
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
  "XML_aggregate", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -1602

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1602)))

#define YYTABLE_NINF -1086

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2436,   -23, -1602,    60, 15740,   -81,  -108,    78,    78, 15740,
     359,   369, -1602, 15740,   293, -1602, -1602, 13112, 15740, -1602,
   -1602, -1602, -1602, -1602,   788, -1602,   387,   157,   401,   168,
     258,   502,  1402,   475, 13404, 11652,   404, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602,   750,   512, -1602, 15740, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602,   353,   308, -1602, -1602,
   -1602,  3938, 15740, -1602,   525,   525, -1602, 15740,   896,    34,
   -1602,   551,   -81,   842, -1602, -1602, -1602, -1602,   587, -1602,
     468,   551,   891,   891,  2436,  2436,   891, -1602, -1602,   658,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,   551,   551,
   -1602,   579, -1602,   551,   291,   182,   634, -1602,   578,   697,
     611, -1602, -1602, -1602,   706,   709,   496,  1109,   901,   896,
   14572, 15740, 15740, -1602,   513,   741,  1008,   767, -1602,    55,
   -1602, -1602,  -157, -1602, -1602,   651, 15740,   831, -1602, -1602,
   15740,   799, -1602, -1602,   759,   781,   786,   797, 15740, 15740,
   15740, 15740, 15740, 15740, 16032, 15740, -1602, 15740, 15740,   769,
   -1602, -1602,   811, -1602, 15740, 15740,   836,   592, 15740, 15740,
   15740, 15740, 15740, 15740, 15740, 15740, 15740, 15740, 15740,   885,
   -1602, -1602, -1602,   868, 15740, 15740,   803,   932,   934,   841,
     849, 15740,   793, -1602,  1546, -1602, -1602,  1038,   264,   264,
     264,   862, -1602,   861, 14864, 15740,  1145,  1145,  1145,  1154,
     993,   998,  1000, -1602, -1602, -1602, -1602, -1602,  1013,  1021,
    1199, -1602, -1602, -1602,  1052,  1052,  1052,  1052,  1052, -1602,
    1055, -1602,  1061,  1098, 15740,  1062,  1063,  1067,  1071,  1074,
    1078,  1081,  1083,  1084,  1095,  1114,  2139,  4280,  8573,  8573,
    1115,  1116,  1120, -1602,  8573,  1145,   294,   434,   106,  6623,
    1121,  1123,  4280, -1602, -1602,   296,   943,  1094, -1602,  1352,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, 15740, -1602, -1602,
   -1602,  9772, -1602, -1602, -1602,   968, -1602,   959, -1602, -1602,
     962, -1602, -1602,  1133,  1137,  1139,   976, -1602, -1602, -1602,
   -1602, -1602, -1602,  1145,  1145,   -87, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,   358,
     972, -1602,  1033, -1602,   990,  1223,  1219, -1602,   977, -1602,
   15740, -1602, -1602, 15740,  1005, -1602,  3938, -1602,  6948, 13112,
    1029,  1187,  1196, -1602, -1602,  1201,  4964, -1602, -1602, -1602,
   -1602, -1602, -1602,   112,  1109,   112,  1022, 11944,    59,  1228,
    1229,  1231,   -13,   896, -1602,   882,   329,   621,   687,  1169,
     766, 15740, -1602,    57,  1085, 15740,  1008,  1053, -1602, -1602,
    1181, -1602, -1602,    26, 15740, 15740, 15740, 15740, 15740,  1117,
    1183,  1184,  1185,  1186,  1191, 15740,  1110,  1138,   520,   551,
     816, 15740, 15740, -1602, -1602, 15740,  1131, 15740, 15740, 15740,
   15740,   885,  1195,  1195,  1195,  1195, -1602,   885,   885,   885,
   -1602, -1602, -1602, -1602, -1602, 15740, -1602, -1602,    21, 15740,
    8573, 15740,  1200,  1203, -1602,   487, -1602, -1602, -1602,  1204,
    1205, -1602, -1602, -1602, -1602, -1602,  1331, -1602,  1242, -1602,
   -1602, -1602,  1247,  1256,   832, 15740, -1602, -1602, -1602,  1257,
    1261,  1262,  1263,  8573, -1602, -1602,  1245,  1245,  1245,    38,
    1140,  4280, -1602,  1215,     3, -1602,  1264, -1602,  1030, -1602,
   -1602, -1602,  4280,  4280,  1416,  1269, -1602, -1602, -1602, -1602,
   -1602,   414, -1602,   898,  1332, -1602,  8573,  8573,  8573,  1207,
    1291,   483,  1209,  1446,  8573,   664,  8573,  2139,  1278,  1279,
     879,  1280,   840,   -59, -1602,   -66,  1241,  2139,  1593,  1593,
    8573,  8573,  8573,  1308, -1602,   788,  1287,   788,  1287, -1602,
   -1602,  1145,  4280,  9156, -1602,   576,  8573,  8573,  1241,   297,
    8874, 15740, -1602,   861, 15740, -1602,  4280,  3254,  1044,  1044,
    1288,  1289,  8573,  8573,  8573,  8573,  4280,  3254,  1119,  8573,
    8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,
    8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,  8573,
    8573,  8573,  8573,    48,  1292,  1258,  3938,  1293,  5289,  8573,
   -1602, -1602, 12236, 13988,  1197,  1278, -1602,   361, -1602, -1602,
    1397,  1403, -1602, -1602, -1602,   787,   788,   896, -1602,   129,
    1310,  1370, -1602, -1602, 12223,   206, -1602, -1602,    54,  1243,
   -1602, -1602, -1602,  2139, -1602,   235, -1602, -1602,   846, -1602,
     -60, -1602, -1602, -1602,   -16, -1602,   836, 15740, -1602, -1602,
   -1602, -1602, -1602, -1602,   112,   112, -1602, -1602, -1602,  1230,
     882,  1208,  1212, -1602,  1384,  1319,  1008,  1008, -1602, -1602,
   -1602, -1602,  1008,  3061,   621, -1602, -1602,   575,   635,  1222,
     872, -1602,  1393,    43,    43, 15740,   551,  1192,  1008,   882,
    1338,  3061,    26, -1602, -1602,  1337,  1339,  1339,  1339,  1339,
    1273, 15156, 15156, 15156, 15156,  1252, -1602, -1602, -1602,  1494,
    1259, 15740,  1281, 14280,  1429, -1602,  1211,  1220, -1602, -1602,
     847,  1284,  1339,  1195, 15740,   885,   885,   885,   885, -1602,
    2967, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
     961, -1602, -1602, -1602,  1546,   788,   788, -1602,  1521,   788,
     788,   788, -1602,   594,  1287,  1287, -1602, -1602, -1602, -1602,
   -1602,  1256,  1247,  1265, -1602, -1602, -1602,   788,   788,   788,
     788,  1213, -1602, 10699,  1451,   293,   293,   293, -1602, -1602,
   -1602,    38,  1029, -1602,  1055, 14864,   861,  4280, 15740, -1602,
    1236,  1216, -1602, -1602, -1602, -1602,  1439, 15740, 12223,   385,
   12223, -1602,   -54, -1602,  1400, 15740,  1387,  8573,  1221, -1602,
   -1602,  8573, 15740, -1602,  1415,   385, -1602,  8573, -1602,  1461,
     907,  8573,   259, -1602, -1602, -1602,   979,  4280, 13696,  2365,
   11008,  2830,  1390,  1282,  1145,  1391,  1145,   832,  1285,  8573,
   -1602,   593,  8573, -1602,  1272,  2966,  1244,   269,  4280, -1602,
   12528,  2664, -1602, -1602,  1248,  1027, 16324, 16324, 16324,   -35,
      22, -1602, -1602,  1477, -1602, -1602, -1602, -1602, -1602,  1090,
    4280, -1602, -1602,  4280,  4280,  7273,  7273, -1602, 10081, -1602,
   -1602, -1602, -1602, -1602,  1055, -1602, 12223,  1593,  1593,  1593,
    1593,  1593,  1593,  1593,  1593,  1593,  1593,  1260,  1260,  1283,
    1308,   672,   672,   672,   672,  1454,  1454,  1454,  1454,  1454,
   -1602,  1481,  1271, -1602, -1602, -1602,  8573,  1418,  8573, 12223,
    1419,    97,  1253,  1422,  1423,  1428, -1602,   177, -1602,  1268,
   -1602, -1602, 15740,  1070,  1516, -1602, -1602, -1602, -1602, -1602,
     293, -1602,  8573, -1602, -1602, -1602, -1602, -1602, -1602,  7273,
    1344,   112,  1495,  1353,  1495, -1602,   117,   117,  1145,  1356,
   15740, 15740,  1008,   132, -1602, -1602, -1602, -1602, -1602, 15740,
   15740, -1602, -1602, 15740,  1520,  1080, -1602, 15740, 15740, 15448,
   13112, -1602,  1505,  1301,  1505,   551,  1506, -1602, -1602,  1361,
    1008, -1602, -1602, 15156, -1602, -1602,  1354, -1602, 15740, -1602,
    1455,  1290,  3061,  1456,  1458,  1464,   782,  1346, 15740,   708,
   -1602, -1602, 13112, 15740, 15740,   274, -1602, -1602, -1602, -1602,
   -1602,   533, -1602,  2499,   -40, 15740, -1602,   513,   513, -1602,
    1306, -1602,  1375, 15740,  1376, -1602,   885, -1602, -1602, -1602,
   -1602, -1602,  1468,  1303, -1602,  1473, -1602,  1474, -1602,  1475,
     275,  1476,  1311, -1602,   276, -1602, -1602, -1602, -1602,  1372,
    1118,  1480,  1314,  1482,  1483,  1484,  8573, -1602, -1602, -1602,
    1488, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602,  3061,  3061,  8573, -1602,    14,  1485,  8573,  1500,
    1504, -1602,  1341,  7598, 12223,   320, -1602,  1359, -1602,   572,
   -1602,  1342,  1581,  1400,  1513,  1527,  1400,  1039,   283, -1602,
   -1602, -1602,  1517,  1518,  1519,  1241,  8573,  8573,  8573,  8573,
   -1602,  1399, -1602, -1602, -1602, -1602,  8573,  1766, -1602,  1377,
   12223, -1602,  8573,  8573, -1602,  8573,  1241, 16324, 16324,  2664,
    1522,   789,   293,  8874, -1602, -1602, -1602,   930,  1618, -1602,
    8874,  1622,  1626, 15740, -1602,  1529, -1602, -1602, -1602, 13112,
   15740, -1602,  1599,  1605,  1090,  1486,  1524,   321,   339,  1145,
   -1602, -1602,  1613,  1547,  1620,  1552, -1602,  1555, -1602, 12820,
    8573, 15740, -1602, -1602, -1602, -1602,  1556, -1602, -1602,  1465,
   -1602,   782, -1602,  1466, -1602, -1602, -1602,  1704,  1145, -1602,
   -1602, -1602, -1602, -1602,   885,   885,   885, -1602, -1602, -1602,
     230, -1602, -1602, -1602,  1413, -1602,  1145, -1602,  1623,   105,
    1145, -1602,  1561,  1734, -1602,  9476, 15740, -1602,  1502,  1499,
    1508, -1602, -1602, -1602, 15740, -1602,  1401, -1602,  1711,   486,
   -1602,   708, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602, 14280,  1487,  1489,   551, -1602, -1602, -1602, -1602,
     681,  1478,  1738,  1577,  1578, 15740, 15740,  1579,  1673, -1602,
   -1602, -1602,  3061, -1602, -1602, -1602, -1602,   788, -1602,   788,
   -1602,   788,  1256, -1602, -1602, -1602,   788, -1602, -1602, -1602,
   -1602, 15740,  1580,  1582, 11318, -1602, -1602, -1602, -1602, -1602,
   -1602,  5614,  1400,  1507,  8573, 12223,   350, -1602,  1438, -1602,
   -1602,   775,  8573,  1400, 15740, -1602,  1616,  1617,  1587,  8573,
    1400,   717,  8573, -1602,  1581, -1602,  1490,  1588, -1602,  1590,
   -1602,  8573,  8573,  7273,  7273, 10391,  1189, 11640,  8861, -1602,
   -1602,  8573, -1602, 11932, -1602, -1602, -1602, -1602, -1602,   268,
    1027,  1690,  8874,   596,  8874, -1602, -1602,  1594, 15740,   226,
   -1602, 15740,  4280, -1602,  4280,  4280, -1602, -1602, -1602, 15740,
   -1602,  1664,     8, -1602, -1602,  1596,  1598, -1602, -1602, -1602,
   -1602, -1602,  1445,  1501, -1602, -1602, -1602,  1526,   674, -1602,
    1145,  1433,   233,  1145,  1606,  1606,  1437, -1602,  1543,  1545,
   -1602,   -81,   359,   369,  1548, 13112,  3596,  7923,  4280,  1503,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602,  1509, -1602, -1602, -1602,
   -1602,  1440,  3061,  3096,  1779,  3096, -1602, 15740, -1602, -1602,
    1614,   551,   551, -1602,  1662, -1602,  8573, -1602,   681, -1602,
   -1602, -1602, -1602,   746,  1619, -1602,   331, -1602,  1563, -1602,
    1453,  1467, 15740,   346, -1602,  1621, -1602,  1638,  1641, -1602,
    1644,   362, -1602,  1479, -1602, -1602, -1602,  1646, 12223,  1496,
   -1602,   433, -1602,  1497,  1649, -1602, -1602, -1602,  7598, 15740,
    1531,  1559,  1560,  1562, -1602, -1602,  1654, -1602, -1602, -1602,
   -1602, -1602,   494,  1655, -1602, -1602,   375,  1498, -1602, -1602,
   -1602,   335, -1602,  1658, -1602, -1602, -1602,   371,   372,   381,
    8573, -1602, -1602,  8573, -1602,  8573, -1602, -1602, 16324,  8874,
   -1602,   551,  4280, -1602,   596, 15740,   415,  1510, -1602,  1640,
    1640,  1510,  8573, -1602, -1602, -1602,  4622, -1602, -1602,  1583,
    1568, -1602,   524, -1602,  1726,  8573, -1602,  1145,  1759,   417,
   15740,    43,    43,  1145,  1145,  1607,  3938, 15740, -1602,  1670,
   -1602,  1671, -1602, -1602, -1602,  4280, -1602,   689,  9465,  1544,
   -1602, 10712,  4280, -1602, -1602,  1674,  9785, -1602,  1172,   582,
   -1602,  1576, -1602,  1532, -1602,  1050, -1602, -1602,  1739,  1680,
    1591, 15740, -1602, -1602, -1602,   645,  1685, -1602,  1597,   851,
    1747,   420,  1775,  1777, -1602, -1602, -1602, -1602, -1602, -1602,
   15740, 15740,  8573,  8573,  8573, -1602,  8248, -1602, -1602, -1602,
   -1602,  1755,   731,  1758,  1760, -1602, -1602, 15740, -1602, -1602,
    8573,  1604,  1608,  1697,   615, -1602, -1602, -1602, 12516, 13100,
   13392, -1602, -1602, -1602, -1602, -1602,   422, -1602,  1213,  5939,
    1550,  1542,  1553,  1549, -1602, -1602, -1602,  1145, 15740, -1602,
   -1602, -1602, -1602,  1538,  1651, -1602, -1602,   428, -1602,  1878,
    1505,  1505, -1602,  1609, 15740,  1624, -1602,  1557,  8573,   516,
    1586, -1602, -1602,  1572,  8573, -1602,   693, -1602, 10712,  1761,
    1589, 15740,  1657,  1887, -1602, -1602, -1602, -1602,  1659,  1897,
   15740,  1774, -1602,  4280, -1602,   551,   435, -1602, -1602, -1602,
     367,   492,   851, -1602,  1575, -1602,  1611, -1602, -1602, -1602,
   -1602,  1566, 12223,   444, -1602,  1585, -1602, -1602,  1569, -1602,
   -1602,  1763, -1602, -1602, -1602,  1581, -1602,  1762,  1764, -1602,
    1753, 15740,  1911,   679, -1602, -1602, -1602, -1602, -1602, -1602,
    1728, -1602, -1602, -1602,    23, -1602, -1602, -1602,  1145, -1602,
   -1602, 15740, -1602,  1860,  1860, 15740, -1602, 15740,   446, 12223,
    1746, -1602, 10094,  1625,  3034, -1602,  1610,  9167,  1791,  1615,
   -1602,   447,  3061, 15740,  1172, 15740,  1172,   551,  1756,  1752,
    1823, -1602,   645,  1413, -1602,  1413,  1413,  1413, -1602,   859,
    4280, 11021, -1602,  8573, 15740, -1602,  8573, -1602, -1602, -1602,
   -1602,  1778, -1602, -1602, -1602,  1778, -1602,  1783, 15740,  1911,
   -1602, -1602, -1602,  1788,  6281,  1631, -1602,  1627, -1602, -1602,
   -1602, -1602,  1888,  1888, -1602, -1602, -1602,  8573, -1602, 10094,
    1814, -1602, -1602,  1650, -1602,  4280,  1645,  1675, -1602, 10403,
   -1602, 15740, -1602, -1602, -1602, -1602, -1602,  1823,    26, -1602,
   -1602,   758,  1705, -1602, 15740, 15740, 15740, 15740, -1602, -1602,
   -1602, -1602,  1676, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602,  1911, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602,  1660,  1653,  1656,
   -1602, -1602, -1602, -1602,  1928,  1759,  1759, 12223, -1602, 10094,
   -1602, 10094,  1689,  1688, -1602,  1691,  3061,  1705,   860, -1602,
   -1602, -1602, -1602,  1134,  1731,  1732, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,  1683,
   -1602, -1602, 15740, -1602, -1602, -1602,    53,    53,  1939, -1602,
    1940, -1602, 11330,  1831, -1602,  9167, -1602, -1602, -1602, -1602,
    1965,    50, -1602, -1602, -1602,  1874,  1008, -1602, -1602, -1602,
   -1602, -1602,   454, -1602, -1602,  1008, -1602
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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
       0,     0,   530,   505,     0,   745,     0,     0,   611,   611,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   640,   638,   668,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     827,   832,     0,   831,     0,     0,     0,     0,     0,   636,
       0,     0,   560,   559,   550,   551,   558,   566,   566,   809,
     549,   533,   535,   568,   747,   574,   632,   630,   631,   608,
       0,   612,   613,     0,     0,     0,     0,   614,   618,   616,
     615,   617,   576,   607,     0,   637,   657,   642,   643,   648,
     658,   647,   662,   663,   664,   665,   738,   644,   645,   646,
     659,   649,   654,   652,   650,   651,   653,   655,   656,   660,
     621,     0,   692,   744,   741,   689,     0,     0,   919,   834,
       0,   812,     0,   897,   898,   899,   743,   813,   484,   485,
     482,   436,     0,     0,     0,   432,   427,   428,   424,   267,
       0,   718,     0,   588,   589,   587,    33,    30,   983,     0,
       0,     0,    74,     0,    74,    88,    74,    74,     0,     0,
       0,     0,     0,     0,   156,   154,   158,   148,   144,     0,
       0,   128,   109,     0,     0,     0,   108,     0,     0,   225,
       0,   461,   467,     0,   467,   265,     0,   465,   466,     0,
       0,   145,   142,   350,   175,   176,     0,   177,     0,   349,
       0,   348,     0,     0,     0,     0,     0,     0,     0,    53,
     985,    49,     0,     0,     0,     0,   200,   196,   198,   201,
     199,     0,   202,     0,   885,     0,   173,     0,     0,   357,
     358,   356,     0,     0,   186,   382,   404,   391,   388,   392,
     390,   401,     0,   402,    37,     0,   835,     0,   882,     0,
       0,     0,   835,   875,     0,   876,   772,   773,   785,   784,
       0,     0,   835,     0,     0,     0,     0,   594,   595,   592,
       0,   536,   537,   538,   585,   584,   532,   504,   502,   480,
     503,   811,     0,     0,     0,   679,     0,     0,     0,     0,
       0,  1014,  1006,     0,  1040,  1027,  1037,  1041,  1036,   641,
    1048,  1049,     0,  1072,     0,  1089,  1072,   638,     0,   495,
     489,   639,     0,     0,     0,   627,     0,     0,     0,     0,
     767,     0,   799,   769,   800,   808,     0,     0,   828,     0,
     833,   821,     0,     0,   819,     0,   635,     0,   566,     0,
     559,   512,     0,     0,   517,   518,   519,   512,     0,   513,
       0,     0,   515,   915,   556,   565,   567,   554,   553,     0,
       0,   531,     0,   572,   629,     0,     0,     0,     0,     0,
     628,   620,     0,     0,   694,     0,   755,     0,   759,     0,
       0,     0,   439,   429,   430,   431,     0,   823,   492,     0,
     103,     0,    67,     0,    66,    76,    77,     0,     0,   114,
     117,   153,   151,   150,   404,   404,   404,   111,   112,   110,
       0,   107,   106,   442,   368,   445,     0,   444,     0,     0,
       0,   146,     0,     0,   268,   340,     0,   352,     0,     0,
       0,    64,    65,    63,     0,   974,   987,   986,   165,     0,
      45,    54,    55,    57,    58,    61,    59,    60,   174,   257,
     226,   190,   225,     0,     0,     0,   224,   203,   204,   206,
     207,     0,     0,   193,   263,     0,     0,     0,     0,   179,
     389,   400,     0,   869,   864,   842,   853,     0,   856,     0,
     871,     0,   770,   782,   786,   866,     0,   843,   844,   846,
     591,     0,     0,     0,     0,  1074,  1073,  1002,   990,  1003,
    1004,     0,  1072,   950,     0,  1081,     0,  1076,     0,  1078,
    1079,     0,     0,  1072,     0,  1039,     0,     0,     0,     0,
    1072,     0,     0,  1055,  1062,  1066,     0,     0,  1090,     0,
     487,     0,     0,     0,     0,     0,     0,     0,     0,   765,
     829,     0,   820,     0,   824,   825,   557,   555,   507,     0,
     552,     0,     0,   512,     0,   516,   514,   563,     0,   810,
     534,     0,     0,   548,     0,     0,   622,   623,   619,     0,
     688,     0,   696,   758,   757,     0,     0,   814,   526,    73,
      75,    71,     0,   116,   126,   127,   125,     0,     0,   369,
       0,   457,     0,     0,   450,   450,   475,   477,     0,     0,
     178,   498,   911,   925,     0,     0,     0,     0,     0,   284,
     296,   297,   290,   291,   292,   295,   293,   279,   281,   298,
     309,   308,   313,   312,   311,   310,     0,   294,   289,   288,
     299,     0,     0,     0,     0,     0,    52,     0,    56,   197,
     885,     0,     0,   251,     0,   221,     0,   205,   208,   209,
     214,   215,   216,     0,     0,   172,     0,   192,     0,   258,
     359,   360,     0,     0,   403,     0,   838,     0,     0,   783,
       0,     0,   570,   812,   815,   816,   725,     0,  1026,  1011,
    1013,  1027,  1024,  1007,     0,  1084,  1083,  1075,     0,     0,
       0,     0,     0,     0,  1028,  1038,     0,  1043,  1042,  1045,
    1046,  1044,   641,     0,  1088,  1087,   641,  1054,  1056,  1058,
    1059,     0,  1063,     0,  1067,  1114,   490,     0,     0,     0,
       0,   735,   736,     0,   737,     0,   826,   818,     0,     0,
     508,     0,     0,   509,   512,     0,     0,   569,   573,   609,
     610,   693,     0,   698,   699,   691,     0,   756,   760,     0,
       0,   122,     0,   120,     0,     0,   468,     0,   473,     0,
       0,   456,   456,     0,     0,     0,     0,     0,   314,     0,
     317,   927,   322,   321,   323,     0,   331,   333,     0,     0,
     284,   340,     0,   341,   351,     0,   340,   347,     0,     0,
     975,     0,   252,     0,   217,   669,   210,   246,     0,     0,
       0,     0,   247,   219,   250,   225,     0,   195,     0,     0,
     373,     0,     0,     0,   189,   854,   857,   872,   867,   546,
       0,     0,     0,     0,     0,  1023,     0,  1005,  1077,  1080,
    1082,     0,     0,     0,     0,  1034,  1047,     0,  1060,  1086,
       0,     0,     0,     0,     0,   488,   624,   625,     0,     0,
       0,   561,   511,   521,   520,   510,     0,   564,   695,     0,
       0,     0,   641,   711,   700,   703,   701,     0,     0,   123,
     124,   121,   119,   458,     0,   443,   476,     0,   452,   454,
     467,   467,   478,     0,     0,     0,   278,     0,   318,     0,
       0,   284,   332,     0,     0,   328,   333,   284,   340,     0,
       0,     0,     0,   935,   273,   270,   280,   271,     0,     0,
       0,     0,   245,     0,   248,   265,     0,   212,   194,   264,
     370,   370,   361,   362,     0,   353,   377,   161,   187,   188,
     571,   813,  1021,     0,  1016,  1019,  1012,  1025,  1008,  1010,
    1029,     0,  1032,  1031,  1030,  1085,  1057,     0,     0,  1051,
       0,     0,     0,  1103,  1092,  1093,   733,   734,   739,   562,
       0,   704,   702,   705,     0,   697,   115,   118,     0,   474,
     451,     0,   455,   469,   469,     0,   275,     0,     0,   319,
       0,   284,   334,     0,     0,   329,     0,   336,     0,   285,
     284,     0,     0,     0,     0,     0,     0,   265,   222,     0,
     243,   211,   225,   368,   371,   368,   368,   368,   363,     0,
       0,   340,  1015,     0,     0,  1018,     0,  1033,  1061,  1064,
    1065,  1098,  1102,  1101,  1097,  1098,  1096,     0,     0,     0,
    1091,  1104,  1105,  1107,     0,     0,   713,     0,   714,   459,
     453,   470,   471,   471,   167,   269,   316,     0,   324,   330,
       0,   326,   284,     0,   284,     0,     0,   285,   282,   340,
     346,     0,   344,   272,   274,   276,   277,   243,     0,   220,
     254,   239,   234,   213,     0,     0,     0,     0,   375,   376,
     374,   378,     0,   304,   305,   302,   303,   379,   306,   372,
     301,   300,   307,  1017,  1022,  1020,  1009,     0,  1095,  1094,
    1110,  1113,  1109,  1112,  1111,  1106,  1108,     0,     0,   641,
     706,   708,   715,   712,     0,   473,   473,   320,   285,   327,
     325,   337,     0,     0,   283,     0,     0,   234,     0,   241,
     242,   240,   244,     0,   235,   236,   249,   367,   365,   366,
     364,   286,  1100,  1099,   709,   707,   710,   472,   441,   446,
     284,   335,   342,   345,   253,   223,     0,     0,     0,   238,
       0,   237,   340,     0,   440,   336,   339,   343,   228,   229,
       0,     0,   233,   232,   380,     0,     0,   338,   227,   230,
     231,   287,     0,   448,   447,     0,   449
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1602,  1028, -1602, -1602, -1602, -1602, -1602,  -976,  -961, -1602,
   -1602,   728, -1602,    10, -1602,    15,   557, -1602,  1217, -1602,
   -1602, -1602,   688, -1602,   739,     0,  1804, -1602, -1602,   -92,
       5, -1602, -1602,  1806, -1602,  1567, -1602, -1602, -1602,  1570,
    -344,   983,    40, -1602, -1602, -1602,   449,    46, -1602,    67,
   -1602,  -749,  1266,  -402, -1602, -1602, -1602,   100, -1602,  1981,
   -1602, -1602,   265, -1602, -1602, -1602,   958,   690, -1602, -1602,
   -1602, -1602, -1602, -1602, -1477, -1602,   384, -1602, -1602, -1602,
   -1602,  -748,   -14,     6,    11,    17, -1602,    79, -1602, -1602,
   -1602,   -34, -1602, -1602,  -187,  -403, -1602,  -152,  -272, -1602,
   -1139,  -808, -1602,   363, -1354, -1602, -1253,   -15, -1410, -1602,
     577, -1602, -1602, -1602, -1602, -1602, -1602,   252, -1602,   373,
   -1602,   257, -1602,    -7, -1602, -1602, -1602, -1602,   519,  -709,
   -1602, -1602, -1602, -1602, -1602, -1602,   237,  -850,   239, -1602,
   -1602, -1602, -1602, -1602,  1601,    58,  -414,   694,  -438,    20,
      25, -1602,  -110, -1602,  1357, -1602,  2041,  1895, -1602, -1602,
   -1602, -1602,   580, -1602,   200,  -736, -1602, -1602, -1033,   199,
     133,  -784,   586,   590, -1602, -1602, -1602,  1378,  1379,   654,
    -908, -1602,  -211,   659,  1040,  -151, -1602,  1206,  -548,  -870,
     850, -1602, -1602,   459,    76, -1602,  1661,  1054, -1602,    30,
     116, -1602,   838,    42,   925,   662,  -419,  1142,  1515, -1602,
    -604, -1602,  -897,  -861, -1602, -1288, -1602,  -196,  1434,  1188,
   -1602, -1602,  1224,   461,   938, -1602, -1602,  -249, -1602, -1602,
    1450, -1602,   441, -1602, -1602, -1602, -1602,  1441, -1602, -1602,
    1442, -1602,  -276, -1123,  1449,  -565,  -429, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602,   356, -1602, -1602, -1602, -1602,
   -1602, -1602,    18, -1602,  -386, -1602,   790, -1602, -1602,  1409,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602,  -373,  -489,  -511,
   -1602,  -545, -1602, -1602, -1602, -1602,  1179, -1602,  2063, -1602,
    1612,    74, -1314, -1602,  1551, -1602, -1602, -1602,  1202, -1602,
    1511, -1602,  1210,  -617,   436,  -680,  -198, -1602,  -260, -1602,
    -282, -1602, -1602,  -270,  -290,    28, -1602,    -1, -1602, -1211,
    -475,   -11,    75, -1602, -1602, -1602, -1602, -1602,  -546, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602, -1602, -1602,   416, -1602,
     232, -1602, -1602, -1602, -1601, -1602,   425,   565, -1602, -1602,
   -1602, -1602,   740, -1602, -1602, -1602, -1602, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602, -1602, -1602,   413, -1602, -1602, -1602,
   -1602, -1602, -1602, -1602,  1539,  -801,   754, -1602,   569, -1602,
     755, -1602, -1602,   313, -1102, -1602, -1602, -1602, -1602, -1602,
   -1522,   236, -1602, -1602, -1602, -1602, -1602, -1602,   227, -1602,
   -1602, -1602, -1602
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,   176,   173,   172,   174,   175,    32,    33,    34,
      35,    36,  1027,  1490,   282,  1491,  1492,   486,   787,   790,
    1320,  1321,  1322,   786,  1313,  1493,   195,  1034,  1032,  1272,
    1494,   206,   207,   196,   197,   198,   728,   199,   200,   201,
     720,   721,  1495,   743,  1056,  1052,  1053,  1496,    44,   772,
     754,   773,   755,   774,    45,   249,   250,   739,  1106,   251,
     252,  1349,   794,   795,  1537,  1095,  1096,  1097,  1339,  1098,
    1527,  1528,  1099,  1796,  1529,  1530,  1674,  1531,  1532,  1949,
    1100,  1533,  2052,  2014,  2015,  2016,  2012,  1952,  1683,  1336,
    1684,   699,  1102,   253,   217,   218,  1539,   796,   425,    46,
    1766,  1786,    47,  1497,  1661,  2042,  1930,  1967,  1499,  1500,
    1501,  1648,  1649,  1858,  1502,  1653,  1503,  1775,  1776,  1656,
    1657,  1773,  1504,  1936,  1505,  1506,  2046,  1871,  1666,  1080,
    1081,    49,   800,  1112,  1690,  1802,  1803,  1470,  1885,  1805,
    1806,  1960,  1891,  1969,   269,  1507,   811,  1122,   514,  1508,
    1509,    53,   417,   418,   419,  1016,   154,   411,   692,    54,
    2044,  2062,  1641,  1757,  1758,  1062,  1063,   219,  1295,  1922,
    1995,  1755,  1475,  1476,    55,    56,    57,   688,   902,  1188,
     715,   354,   716,  1190,   717,   151,   564,   565,   562,   933,
    1231,  1436,  1232,  1613,   220,   159,   160,   421,    59,  1510,
     221,   940,   941,    62,   556,   855,   355,   632,   633,   934,
    1221,  1222,  1236,  1237,  1243,  1551,  1443,   356,   357,   291,
     560,   862,   709,   851,   852,  1149,   358,   359,   360,   361,
     953,   362,   957,   363,   364,   603,   365,   950,   366,   629,
     367,   368,   369,   370,   371,   372,   373,   374,   375,  1253,
    1254,  1452,  1625,  1626,  1743,  1744,  1745,  1746,  1990,  1991,
    1845,   376,   604,   168,   169,   378,   576,   379,   380,   381,
     635,   382,   383,   384,   385,   386,   621,   914,   616,   618,
     546,   842,   876,   843,  1364,   844,   845,   547,   387,   388,
     389,   938,   390,   391,   870,   392,   705,   927,   920,   921,
     624,   625,   924,  1000,  1125,   859,   222,  1545,  1123,  1134,
     393,   550,   551,   394,  1103,   722,   203,   605,   148,  1316,
     223,  1126,   396,    63,   180,  1089,  1090,  1317,   881,   882,
     883,   397,   398,   399,   400,   401,  1382,  1172,  1559,  1813,
    1814,  1895,  1815,  1975,  1560,  1561,  1562,  1393,  1574,   402,
     887,  1175,  1176,  1177,  1395,  1578,   403,  1398,   404,  1181,
    1400,   405,   894,  1183,  1402,  1587,  1588,  1589,  1590,  1591,
    1723,   406,   407,   897,   891,  1167,   888,  1386,  1387,  1710,
    1388,  1389,  1390,  1718,  1719,  1407,  1408,  1833,  1834,  1905,
    1906,  1978,  2023,  1835,  1903,  1910,  1911,  1985,  1912,  1913,
    1984,  1982,   408
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,   284,   549,   147,   566,    41,   686,   701,   156,   424,
      37,   426,   161,   179,   552,    38,   170,   147,   462,   430,
      51,   879,   563,  1072,   548,    52,   935,   459,  1064,   895,
      60,  1297,   835,   278,   285,   167,   437,   438,   875,  1234,
      42,   440,   884,   706,   582,  1101,    43,  1247,  1248,   213,
     899,  1676,  1498,   834,   202,   756,   163,  1552,    50,  1061,
     296,  1220,  1002,   809,   147,   213,  1044,  1045,  1023,   815,
     816,   817,  1046,  1083,  1084,  1085,    58,  1238,   146,   819,
    1403,  1169,   464,  1170,   860,   943,  -721,   602,   606,   812,
     813,   814,   171,  1623,  1184,  2048,  2049,   149,   735,   454,
     162,   724,  1816,   628,  1166,  1819,  1915,  -721,   296,  -764,
      64,  1030,   770,  1318,   630,   906,    61,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,  1552,  1319,  1375,
     858,  1341,  1916,   630,  -255,  1552,  2050,   687,  -721,   293,
     601,   466,   744,   213,   746,   747,   748,   749,   750,   751,
     395,   147,   752,  1617,   152,  1033,   413,   467,   990,   153,
    2059,  1621,   -80,   -80,   -80,   -80,   -80,   -80,  1376,   377,
     150,    65,    40,    40,    40,    40,    40,    41,    41,    41,
      41,    41,    37,    37,    37,    37,    37,    38,    38,    38,
      38,    38,    51,    51,    51,    51,    51,    52,    52,    52,
      52,    52,    60,    60,    60,    60,    60,    14,  1797,   456,
     147,   147,    42,    42,    42,    42,    42,   703,    43,    43,
      43,    43,    43,   210,   991,   470,   409,  1616,  1271,   147,
      50,    50,    50,    50,    50,   202,   296,   147,   147,   147,
     147,   147,   484,   487,   147,   916,   147,   147,    58,    58,
      58,    58,    58,   493,   147,   682,   460,   147,   147,   147,
     147,   147,   506,   147,   147,   147,   147,   147,   767,   213,
    -721,   860,   860,   516,   517,   422,   908,   860,  1473,  1024,
     147,  1031,   907,   211,   686,   457,   458,  1168,    61,    61,
      61,    61,    61,   567,   568,  1976,   706,  -768,   619,   620,
    2060,  -255,  1592,  1019,   473,   581,  1778,  1239,   192,   823,
     820,  1101,   479,   480,   481,   482,   483,   465,  1159,   488,
    1426,   489,   490,   585,   162,  1031,  1179,  2051,   444,   494,
    1138,   193,   501,   502,   503,   504,   505,   797,   507,   508,
     509,   510,   511,   736,   865,  1318,   771,  1624,   602,  1220,
    -721,  1185,   756,  1139,   936,   488,  1917,  1427,  -460,   162,
    1319,  1918,  1281,  1240,  1302,   863,   147,  1117,  1118,  1119,
    1120,   569,   570,   571,   763,   420,   869,   869,   600,  1255,
    1021,  1257,  1404,   719,   353,  1409,  1810,  1983,   949,  1115,
    1036,  1037,   181,   182,   183,   184,   185,   186,   963,  -721,
     353,   601,   441,  1675,  1736,  1953,  1473,   630,  1779,  1028,
    1692,   601,   599,  1498,  1686,   204,   926,  1862,   205,   161,
     614,  1474,   285,  1867,   162,   395,   918,   162,   707,    13,
    1693,   214,  1154,  1191,   288,   289,   290,  -770,   157,  1259,
     945,   648,   554,  1214,   377,  1721,   147,   212,  1331,  1356,
    1360,   187,   188,   189,   190,  2022,   158,  1410,  1031,   208,
     147,  1136,  1137,   443,   147,  -768,    14,   615,   680,   681,
     545,   549,   723,   147,   147,   147,   147,   147,   718,  1401,
     162,  1968,  1467,   552,   788, -1085,  1722,   824,   209,   549,
     801,   147,   215,  1047,   147,  1446,   147,   147,   147,   147,
     740,   552,   224,  1687,  1468,  1598,  1599,  1929,   827,   828,
    1025,  1071,  1675,  1447,   818,   555,  1939,   601,   822,  1261,
     285,   730,   706,   444,  1567,  1868, -1085,  1749,   549,    13,
     254,   683,    13, -1085,    14,   762,  1699,   286,   764,   766,
     552,   254,   549,  1166,   846,  1725,  1726,  1022,   775,   776,
     777,   778,   779,   442,   552,  1727,   216,    39,   631, -1072,
     187,   188,   189,   190,  1124,   191,   802,   860,   868,   803,
    1068,   805,   806,   807,   808,   566,  1029,    48,  1999,   162,
    2001,  1564,   162,   741,  1101,    13,  1391,    14,  1157,  1737,
     255,  1756,  1576,   563,  1807,  1363,  1839,   296,  1694,  1583,
    1192,   255,  1850,   742,   912,  -770,   915,   617,   684,  1881,
    1215,   684,  1611,  1608,  1066,  1332,  1357,  1361,  1892,  1430,
    1926,  1940,  1378,   600,  1411,  1856,  1433,   294,  2064,   939,
     942,   792,  1968,   944,  1750,   889,   192,   890,   928,   900,
     256,   685,   929,  1456,   685,   292,  1883,  1133,   937,   600,
     295,   256, -1050,   257,  1217,   936,  1396,   599,  1195,   193,
     829,  1392,  1029,  1155,   257,  1224,  1225,  1226, -1050,  1227,
    1228,  1160,  1229,   599,   191,   395,  2045,  1001,  1350,  1216,
    1029,  1007,   285,   599,    13,  1017,   214,    13,  1250,    14,
    1189,  1568,  1884,   793,   377,  1717,   917,   598,  1830,  1391,
     194,  1244,  1054,  1700,  1245,  1246,   258,   259,   260,   261,
     262,  1731,  1411,  1029,  1397,   410, -1085,   258,   259,   260,
     261,   262,  1029,  1055,   423,   163,   147,  1853,  1854,    39,
      39,    39,    39,    39,  1943,   263,  1945,   744,   745,   746,
     747,   748,   749,   750,   751,   192,   263,   752,   264,    48,
      48,    48,    48,    48,   265,   900,  1517,   496,  1643,   266,
     428,   545,  1907,  1517,   147,   265,  1230,  1282,   193,  1851,
     266,  1886,  1524,  1632,  1704,  1831,  1882,  1525,  1832,   896,
    1082,  1082,  1082,  1082,  1633,  1893,  1333,  1927,  1941,   599,
     788,  -225,  1104,   177,   267,  2065,   268,  2009,  2010,   178,
     549,  1035,  1334,   147,  1049,   267,   649,   268,  1524,   194,
     429,  1267,   552,  1525,  1821,  1335,   889,  1884,   890,  1788,
    1132,   549,  1307,  1789,   497,   498,   499,   500,  1610,  2011,
    1614,   436,  1908,   552,  1582,  1909,  1142,  1586,  1311,  1065,
    1039,  1822,  1584,  1340,  1312,  1283,  1464,  1465,  1466,   439,
    1634,  1549,   287,   706,  1050,  1051,  1677,  -225,  1224,  1225,
    1226,  1612,  1227,  1228,   567,  1229,  1585,  1161,   287,  1069,
     468,   469,  1301,   706,  1094,  1013,   147,   622,  1116,   922,
     549,   549,  1014,  1015,  1171,  1570,   668,   669,   670,   671,
     672,  1180,   552,   552,   919,  1526,   922,  1151,  1152,  1153,
     431,   432,  1372,  1373,   435,  1760,  1761,  1007,  1135,  -225,
    1094,  1109,  1110,  1298,  1111,   445,   288,   289,   290,   446,
    1343,  1344,  1678,  1571,  1635,  1572,  1573,   512,   513,   170,
     939,  1526,   288,   289,   290,  1235,  1235,  1235,    15,   757,
     427,   753,  1274,   936,  1275,  1276,   770,   936,  1218,   937,
    -225,  1165,   448,  -225,   936,     3,     4,     5,     6,  1230,
      25,   758,   447,  -225,   759,   760,    26,    27,     7,     8,
       9,    10,   449,   600,  1679,   450,   744,    11,   746,   747,
     748,   749,   750,   751,   414,    29,   752,   415,   453,  1202,
    1655,  1204,  1771,   416,  1774,  1420,  1771,   718,   718,  1224,
    1225,  1226,  1424,   461,  1425,  1732,  1229,   599,   288,   289,
     290,  1262,   288,   289,   290,  1680,   427,   637,  1681,   213,
     638,   639,   640,   641,   642,   643,   644,   645,  1682,   463,
     646,   647,   474,  1954,  2035,  1955,  1956,  1957,   475,  1279,
    1280,  1074,  1075,  1076,  1077,   288,   289,   290,  1284,  1285,
     471,   472,  1286,   904,   689,   690,  1290,   147,   567,   170,
     476,  1742,    13,  1523,    14,   477,  1944,  1114,  1946,   495,
     549,   718,  1082,   288,   289,   290,   478,  1304,  1293,   693,
     694,  1187,   552,  1652,   959,   960,   961,  1315,   491,  1323,
     492,   170,   147,  1330,  1324,   515,  1224,  1225,  1226,   518,
    1227,  1228,  -512,  1229,  1342,   577,   578,   579,   580,   519,
    1328,   520,   147,  1277,   181,   182,   183,   184,   185,   186,
    -181,    15,   836,   837,   838,   839,   840,   841,  -180,  1325,
      16,    17,  1291,    18,   521,  1326,   422,   737,   738,   798,
     799,  -539,   553,    25,   951,   952,   561,  1327,   296,    26,
      27,  1058,  1051,   619,   620,  1586,   936,  -877,   936,   559,
    -218,  1193,  1194,  1263,  1264,    28,  -751,  1329,    29,  1288,
    1289,  -753,  -539,  -749,  1742,   296,  1785,  -218,  1800,  1801,
     771,  -626,  -218,  -218,  1958,  1959,   572,  1347,   836,   837,
     838,   839,   840,   874,   573,  1619,  1620,  1230,  2036,  2037,
    1189,  1189,   433,   434,    30,  -539,  -539,  -539,  1057,  1059,
    1606,  2028,  2029,  -539,   557,   558,  1235,  1235,   939,   856,
     857,   574,   939,   584,  -218,   575,  -218,  1765,   581,   939,
     549,   549,  1437,   549,   583,   586,   587,   937,  1439,   942,
     588,   937,   552,   552,   589,   552,  1618,   590,   937,  1671,
    1672,   591,  1664,  1667,   592,  1667,   593,   594,  1007,  1072,
    1457,   900,  1127,   634,  1429,  1129,  1130,  1131,   595,  -539,
     638,   639,   640,   641,   642,   643,   644,   645,  -218,  -218,
    -218,   647,   636,  1141,  1143,  1144,  1145,   596,   610,   611,
    1654,  -539,  1659,   612,   626,   599,   627,  -539,  -539,   674,
    -218,   675,  -218,   676,  1511,  1512,   677,  -690,  -218,  -218,
     678,  1540,   679,  1516,   691,   695,  -539,   696,   697,  -218,
     710,  1323,  -218,   649,  1448,   700,  1324,  -218,   708,   711,
    1646,  1520,  -218,   936,   712,   194,  -539,  -539,  -539,  1733,
     732,   733,   734,   761,   285,  1541,  1546,   765,  1547,  1989,
    1548,   768,   769,  1463,   780,  1550,   781,   782,   783,   784,
     789,  1325,   785,  1602,   804,   791,  1860,  1326,   810,   832,
    1553,  1471,   868,   825,  1477,  1478,   826,   830,   831,  1327,
    -539,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,  -218,   864,  1577,   649,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   836,   837,
     838,   839,   840,  1362,   854,   833,  1734,   649,   637,   225,
     615,   638,   639,   640,   641,   642,   643,   644,   645,   617,
     847,   939,   647,   939,   848,   849,   850,  1315,   861,   872,
    1553,   867,   649,   873,   877,   885,   886,   892,  1553,   893,
     937,   901,   937,   903,   905,   718,   718,   226,   913,  1770,
     227,   955,   956,   352,   993,   992,  1780,   995,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,  1011,
    1008,   630,  1012,  1020,   939,  1041,  1026,  1038,  1042,  1040,
    1043,  1872,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,  1051,   167,  1060,   228,  1067,   229,  1691,  1070,
    1073,  1078,   793,  1086,  1087,  1092,  1670,   230,   664,   665,
     666,   667,   668,   669,   670,   671,   672,  1088,  1105,   637,
    1603,  1107,   638,   639,   640,   641,   642,   643,   644,   645,
    1108,   285,   646,   647,  1128,  1636,  1140,  1477,  1477,  1113,
    1164,   522,   523,   524,  1146,  1150,  1162,  1163,  1166,  1650,
    1173,  1182,  1178,   287,  1200,  1203,   525,   231,  1709,  1201,
     526,   527,   528,   310,   311,   529,   530,   531,   532,   533,
     534,   535,   536,   537,  1211,  1213,  1242,  1206,   649,  1223,
     549,  1251,  1256,  1258,  1260,  -752,  -754,  1879,   538,   539,
     540,  -750,   552,  1252,  1265,  1269,  1271,  1235,   939,  1192,
    1287,  1273,  1942,  1278,  1315,  1294,  1296,  1299,  1300,  1303,
    1314,   232,   233,   234,   235,   236,   237,   937,  1345,  1305,
    1308,  1306,  1309,   238,   239,   240,   241,   242,  1310,  1759,
    1346,  1348,  1351,  1880,  1352,   395,  1767,  1353,  1354,  1355,
    1358,  2006,  1359,  -781,  1365,  1366,  1367,  1368,  1369,  1377,
    1511,  1371,   243,   637,   377,  1511,   638,   639,   640,   641,
     642,   643,   644,   645,  1379,   244,  1444,   647,  1380,  1394,
     147,   245,  1381,  1399,   246,  1401,   247,  1405,  1406,  1422,
    1412,  1413,  1414,  1432,  1961,  1419,  1428,  1434,  1435,  1553,
    1811,   637,  1438,  1441,   638,   639,   640,   641,   642,   643,
     644,   645,  1753,  1442,  1445,   647,  1825,  1449,  1762,  1763,
    1462,  1450,  1451,   248,   549,  1947,  1453,   649,   225,  1454,
    1458,  1459,  1461,  1469,  1472,  1479,   552,  1480,  1513,  2002,
    1514,  1535,  1517,  1787,  1515,  1534,  2033,  1847,  1536,  1538,
    1543,  1521,  1542,  1522,  1554,  1795,  1555,  1565,  1569,  1579,
    1580,  1581,  1594,  1767,  1595,  1609,   226,  1615,  1622,   227,
    1627,  1593,  1628,  1629,  1637,  1630,  1631,  1511,  1643,  1640,
     567,  1644,  1645,  1663,  1668,  1341,  1647,   608,   609,   147,
    1673,  1688,  1685,   613,   545,  1695,  1711,  1689,   623,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,  1696,  1660,   228,  1697,   229,  1662,  1698,  1702,
    1724,  1701,  1846,  1707,  1712,  1713,   230,  1714,  1715,  1716,
    1902,   647,   541,   542,   543,   544,  1751,  1703,  1706,  1720,
    1747,  1748,  1754,  1768,  1769,  1764,  1777,  1781,  1790,  1792,
    1759,  1700,  1791,  1793,  1924,  1794,  1925,  1798,  2063,  1804,
    1808,  1511,  1809,  1799,  1877,  1820,  1511,  2066,  1823,  1827,
    1824,  1829,  1767,  1828,  1767,  1841,   231,   704,  1842,  1848,
    1849,  1852,  1855,  1844,  1863,   704,   631,   545,  1861,  1843,
    1511,  1965,  1874,  1974,  1869,  1873,  1966,  1875,  1870,  1857,
     649,  1963,  1876,  1878,  1889,  1894,  1964,  1981,  1261,  1901,
    1896,  1970,  1890,  1899,  1904,  1900,  1971,  1897,  1914,  1921,
    1928,  1972,  1933,  1919,  1937,  1931,  1950,  1938,  1511,  1948,
     232,   233,   234,   235,   236,   237,  1951,  1977,  1511,  1980,
     567,  1908,   238,   239,   240,   241,   242,  1998,  1994,  1787,
    2000,  1787,  1993,  2017,  2018,  2019,  2020,  2003,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,  1992,   704,
    2013,   243,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,  2024,  2021,  2004,  2025,  2027,
     245,  2030,  2026,   246,  2031,   247,  2038,  2040,  1511,  2032,
    1511,  2043,   853,  2036,  2056,  2037,  2058,  2061,  1091,  1518,
    1460,   452,   451,   725,  1270,  2008,   283,  1292,   731,  1752,
    1048,  2041,  1519,  2053,  2034,  2039,  2007,  2055,  1865,  1784,
    1772,  2047,   248,  1866,  1669,   878,   880,   880,  2057,  1888,
    1887,  1511,  1965,   878,  1511,   880,  1544,  1966,   729,   155,
     412,  1920,  1963,  1923,  1018,  1642,  1996,  1964,  1638,   909,
     910,   911,  1970,  1639,  1009,  1010,  1597,  1971,  1421,  1268,
    1596,  1158,  1972,  1735,  1266,   925,   704,  1431,  1440,   866,
     962,   698,  1241,  1738,  1370,   994,  1156,  1186,   964,   954,
     965,   958,   958,   958,   958,  1840,  1205,   277,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,  1818,  1208,   871,  1973,  1705,   999,   999,  1817,
     821,  1209,  1575,  1826,   898,  1563,   923,  1708,  1898,  1566,
    1986,  1979,   296,     0,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,     0,     0,   308,   309,     0,
       0,    72,    73,     0,     0,    74,   310,   311,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
      76,     0,     0,   312,   313,   314,   315,   316,   317,   318,
       0,    77,     0,     0,   270,   271,   272,     0,     0,     0,
       0,   319,    78,     0,     0,   162,   164,     0,   165,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    80,     0,     0,    81,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     0,     0,    86,   320,     0,     0,     0,   321,
       0,     0,    87,   322,     0,    88,     0,    89,    90,    91,
       0,     0,     0,   323,    92,    93,     0,     0,     0,     0,
       0,     0,     0,   324,   325,   326,   327,   328,     0,   329,
     330,    94,    95,   331,   332,    96,   333,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   334,   105,   106,   107,
     108,     0,   109,   335,   110,     0,     0,     0,     0,     0,
      13,   111,   597,     0,   112,   337,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,   339,     0,     0,     0,  1174,     0,     0,     0,
     878,   340,   341,   342,     0,     0,   880,     0,   344,     0,
     704,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,  1207,     0,
     116,  1210,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     127,     0,     0,     0,     0,     0,   128,     0,     0,   129,
       0,     0,     0,   130,   704,   704,   131,   132,     0,   133,
       0,     0,   134,     0,   135,     0,     0,     0,   136,   137,
       0,     0,   598,     0,     0,   345,   346,   347,   348,     0,
       0,     0,     0,     0,     0,   142,   -14,     1,     0,   349,
       0,     0,     0,   350,   351,   999,     0,   999,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,   144,   145,     0,     0,     0,     0,
       0,   704,     0,     0,     0,     0,  1196,     0,   704,     0,
       0,     0,     0,   352,     0,   353,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   649,
       3,     4,     5,     6,   522,   523,   524,     0,     0,     0,
       0,     0,     0,     7,     8,     9,    10,     0,     0,   525,
       0,     0,    11,   526,   527,   528,   310,   311,   529,   530,
     531,   532,   533,   534,   535,   536,   537,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   538,   539,   540,     0,     0,     0,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,     0,     0,    12,
       0,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   853,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,    14,
       0,     0,     0,  1374,     0,     0,     0,   880,     0,     0,
       0,     0,  1385,     0,     0,     0,     0,     0,     0,  1337,
    1338,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1415,  1416,  1417,  1418,     0,
       0,     0,     0,     0,     0,   704,     0,     0,     0,     0,
       0,  1423,   704,     0,   704,     0,    15,     0,     0,    66,
      67,    68,    69,    70,    71,    16,    17,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    72,    73,    25,     0,
      74,     0,     0,     0,    26,    27,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,  1197,     0,     0,   999,
      28,     0,     0,    29,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
     162,   164,   930,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,    30,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,    89,    90,    91,   541,   542,   543,   544,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,     0,   109,     0,   110,
    1558,     0,     0,  1385,     0,    13,   111,  1219,     0,   112,
       0,  1174,     0,     0,     0,     0,     0,     0,   878,     0,
       0,   878,     0,     0,     0,     0,     0,     0,     0,     0,
     704,   704,   704,   704,     0,     0,     0,     0,     0,     0,
     704,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,  1658,   134,     0,   135,
       0,     0,     0,   136,   137,     0,     0,   598,     0,     0,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,   649,     0,     0,     0,     0,     0,
       0,     0,   522,   523,   524,   878,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,   525,     0,   144,
     145,   526,   527,   528,   310,   311,   529,   530,   531,   532,
     533,   534,   535,   536,   537,     0,     0,     0,   932,     0,
       0,     0,     0,     0,     0,     0,     0,  1385,     0,   538,
     539,   540,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,     0,     0,     0,     0,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,  1728,
       0,     0,  1729,     0,  1730,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   522,   523,   524,     0,
       0,   853,     0,     0,     0,   878,     0,     0,     0,     0,
       0,   525,     0,     0,   878,   526,   527,   528,   310,   311,
     529,   530,   531,   532,   533,   534,   535,   536,   537,     0,
     649,   522,   523,   524,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   538,   539,   540,   525,     0,     0,     0,
     526,   527,   528,   310,   311,   529,   530,   531,   532,   533,
     534,   535,   536,   537,     0,     0,     0,     0,     0,     0,
       0,  1121,     0,     0,     0,     0,     0,     0,   538,   539,
     540,  1812,  1558,  1558,     0,  1558,     0,     0,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   649,   878,
       0,  1199,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,     0,     0,     0,   878,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1859,     0,     0,
       0,     0,     0,  1864,     0,     0,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,     0,     0,     0,     0,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   541,   542,   543,   544,   296,     0,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
       0,     0,   308,   309,     0,     0,    72,    73,     0,     0,
      74,   310,   311,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,   312,   313,
     314,   315,   316,   317,   318,     0,    77,  1212,     0,   270,
     271,   272,     0,     0,     0,     0,   319,    78,     0,     0,
       0,   164,     0,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,  1932,    80,     0,     0,
      81,     0,  1812,     0,     0,  1558,    82,   541,   542,   543,
     544,    83,    84,    85,     0,     0,     0,     0,     0,    86,
     320,     0,     0,   878,   321,     0,     0,    87,   322,     0,
      88,     0,    89,    90,    91,  1665,  1997,     0,   323,    92,
      93,     0,   541,   542,   543,   544,     0,     0,   324,   325,
     326,   327,   328,     0,   329,   330,    94,    95,   331,   332,
      96,   333,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   334,   105,   106,   107,   108,     0,   109,   335,   110,
       0,     0,     0,     0,     0,     0,   111,   336,     0,   112,
     337,     0,   946,   947,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   948,     0,     0,   338,   339,     0,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   342,     0,
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
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   352,   296,
     353,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,     0,     0,   308,   309,     0,     0,    72,    73,
       0,     0,    74,   310,   311,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,    76,     0,     0,
     312,   313,   314,   315,   316,   317,   318,     0,    77,     0,
       0,   270,   271,   272,     0,     0,     0,     0,   319,    78,
       0,     0,   162,   164,     0,   165,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,    80,
       0,     0,    81,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    83,    84,    85,     0,     0,     0,     0,
       0,    86,   320,     0,     0,     0,   321,     0,     0,    87,
     322,     0,    88,     0,    89,    90,    91,     0,     0,     0,
     323,    92,    93,     0,     0,     0,     0,     0,     0,     0,
     324,   325,   326,   327,   328,     0,   329,   330,    94,    95,
     331,   332,    96,   333,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   334,   105,   106,   107,   108,     0,   109,
     335,   110,     0,     0,     0,     0,     0,    13,   111,   597,
       0,   112,   337,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   338,   339,
       0,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,     0,     0,     0,     0,   344,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     0,   127,     0,     0,
       0,     0,     0,   128,     0,     0,   129,     0,     0,     0,
     130,     0,     0,   131,   132,     0,   133,     0,     0,   134,
       0,   135,     0,     0,     0,  1651,   137,     0,     0,     0,
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
       0,   109,   335,   110,     0,     0,     0,     0,     0,     0,
     111,   336,     0,   112,   337,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     338,   339,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,     0,   343,     0,     0,   344,     0,     0,
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
       0,     0,   319,    78,     0,     0,     0,   164,     0,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,   320,     0,     0,     0,
     321,     0,     0,    87,   322,     0,    88,     0,    89,    90,
      91,     0,     0,     0,   323,    92,    93,     0,     0,     0,
       0,     0,     0,     0,   324,   325,   326,   327,   328,     0,
     329,   330,    94,    95,   331,   332,    96,   333,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   334,   105,   106,
     107,   108,     0,   109,   335,   110,     0,     0,     0,     0,
       0,     0,   111,   336,     0,   112,   337,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,   339,     0,     0,     0,     0,     0,     0,
       0,     0,   340,   341,   342,     0,     0,     0,     0,   344,
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
      84,    85,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,   321,     0,     0,    87,   322,     0,    88,     0,
      89,    90,    91,     0,     0,     0,   323,    92,    93,     0,
       0,     0,     0,     0,     0,     0,   324,   325,   326,   327,
     328,     0,   329,   330,    94,    95,   331,   332,    96,   333,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   334,
     105,   106,   107,   108,     0,   109,   335,   110,     0,     0,
       0,     0,     0,     0,   111,   607,     0,   112,     0,     0,
       0,     0,     0,  1739,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   338,   339,     0,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   342,     0,     0,     0,
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
       0,     0,     0,     0,     0,  1740,     0,     0,     0,     0,
       0,     0,  1741,     0,     0,     0,     0,   296,   353,   297,
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
       0,     0,     0,     0,   321,     0,     0,    87,   322,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   323,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   324,   325,
     326,   327,   328,     0,   329,   330,    94,    95,   331,   332,
      96,   333,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   334,   105,   106,   107,   108,     0,   109,   335,   110,
       0,     0,     0,     0,     0,     0,   111,   713,   714,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,   339,     0,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   342,     0,
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
       0,   111,   607,     0,   112,     0,     0,   996,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,   339,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,     0,   997,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     116,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
     998,     0,     0,     0,     0,     0,   128,     0,     0,   129,
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
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,   321,     0,     0,    87,   322,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   323,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   324,   325,
     326,   327,   328,  1557,   329,   330,    94,    95,   331,   332,
      96,   333,    97,    98,    99,   100,   101,   102,   103,   886,
     104,   334,   105,   106,   107,   108,     0,   109,   335,   110,
       0,     0,     0,     0,     0,     0,   111,   607,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,   339,     0,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   342,     0,
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
       0,   111,   607,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,   339,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,     0,     0,     0,     0,   344,     0,
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
       0,     0,     0,     0,   144,   145,     0,     0,     0,     0,
       0,     0,  1740,     0,     0,     0,     0,     0,     0,  1741,
       0,     0,     0,     0,   296,   353,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,     0,     0,   308,
     309,     0,     0,    72,    73,     0,     0,    74,   310,   311,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,    76,     0,     0,   312,   313,   314,   315,   316,
     317,   318,     0,    77,     0,     0,   270,   271,   272,     0,
       0,     0,     0,   319,    78,     0,     0,     0,   164,     0,
     165,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,    80,     0,     0,    81,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,   321,     0,     0,    87,   322,     0,    88,     0,    89,
      90,    91,     0,     0,     0,   323,    92,    93,     0,     0,
       0,     0,     0,     0,     0,   324,   325,   326,   327,   328,
       0,   329,   330,    94,    95,   331,   332,    96,   333,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   334,   105,
     106,   107,   108,     0,   109,   335,   110,     0,     0,     0,
       0,     0,     0,   111,   607,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   338,   339,     0,     0,     0,     0,     0,
       0,     0,     0,   340,   341,   342,     0,     0,     0,     0,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   128,     0,
       0,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   134,     0,   135,     0,     0,     0,
     136,   137,     0,     0,     0,     0,     0,   345,   346,   347,
     348,     0,     0,     0,     0,     0,     0,   142,     0,     0,
       0,   349,     0,     0,     0,   350,   351,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,   144,   145,     0,     0,
       0,     0,     0,     0,  1987,     0,     0,     0,     0,     0,
       0,  1988,     0,     0,     0,     0,   296,   353,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,     0,
       0,   308,   309,     0,     0,    72,    73,     0,     0,    74,
     310,   311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    76,     0,     0,   312,   313,   314,
     315,   316,   317,   318,     0,    77,     0,     0,   270,   271,
     272,     0,     0,     0,     0,   319,    78,     0,     0,     0,
     164,     0,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,   321,     0,     0,    87,   322,     0,    88,
       0,    89,    90,    91,     0,     0,     0,   323,    92,    93,
       0,     0,     0,     0,     0,     0,     0,   324,   325,   326,
     327,   328,     0,   329,   330,    94,    95,   331,   332,    96,
     333,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     334,   105,   106,   107,   108,     0,   109,   335,   110,     0,
       0,     0,     0,     0,     0,   111,   607,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   338,   339,     0,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,     0,     0,
       0,     0,   344,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,     0,     0,     0,     0,     0,
     128,     0,     0,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,     0,   135,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,   345,
     346,   347,   348,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,   349,   622,     0,     0,   350,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,   144,   145,
       0,   296,     0,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,     0,     0,   308,   309,     0,   353,
      72,    73,     0,     0,    74,   310,   311,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
       0,     0,   312,   313,   314,   315,   316,   317,   318,     0,
      77,     0,     0,   270,   271,   272,     0,     0,     0,     0,
     319,    78,     0,     0,     0,   164,     0,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,    80,     0,     0,    81,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,   321,     0,
       0,    87,   322,     0,    88,     0,    89,    90,    91,     0,
       0,     0,   323,    92,    93,     0,     0,     0,     0,     0,
       0,     0,   324,   325,   326,   327,   328,     0,   329,   330,
      94,    95,   331,   332,    96,   333,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   334,   105,   106,   107,   108,
       0,   109,   335,   110,     0,     0,     0,     0,     0,     0,
     111,   607,   702,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     338,   339,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,     0,     0,     0,     0,   344,     0,     0,
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
       0,     0,     0,   144,   145,     0,   296,     0,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,     0,
       0,   308,   309,     0,   353,    72,    73,     0,     0,    74,
     310,   311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    76,     0,     0,   312,   313,   314,
     315,   316,   317,   318,     0,    77,     0,     0,   270,   271,
     272,     0,     0,     0,     0,   319,    78,     0,     0,   162,
     164,     0,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,   321,     0,     0,    87,   322,     0,    88,
       0,    89,    90,    91,     0,     0,     0,   323,    92,    93,
       0,     0,     0,     0,     0,     0,     0,   324,   325,   326,
     327,   328,     0,   329,   330,    94,    95,   331,   332,    96,
     333,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     334,   105,   106,   107,   108,     0,   109,   335,   110,     0,
       0,     0,     0,     0,     0,   111,   713,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   338,   339,     0,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,     0,     0,
       0,     0,   344,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,     0,     0,     0,     0,     0,
     128,     0,     0,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,     0,   135,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,   345,
     346,   347,   348,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,   349,     0,     0,     0,   350,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,   144,   145,
       0,   296,     0,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,     0,     0,   308,   309,     0,   353,
      72,    73,     0,     0,    74,   310,   311,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
       0,     0,   312,   313,   314,   315,   316,   317,   318,     0,
      77,     0,     0,   270,   271,   272,     0,     0,     0,     0,
     319,    78,     0,     0,     0,   164,     0,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,  1383,     0,     0,    81,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,   321,     0,
       0,    87,   322,     0,    88,     0,    89,    90,    91,     0,
       0,     0,   323,    92,    93,     0,     0,     0,     0,     0,
       0,     0,   324,   325,   326,   327,   328,     0,   329,   330,
      94,    95,   331,   332,    96,   333,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   334,   105,   106,   107,   108,
       0,   109,   335,   110,     0,     0,     0,     0,     0,     0,
     111,   607,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     338,   339,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,     0,     0,     0,     0,   344,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,  1384,   127,
       0,     0,     0,     0,     0,   128,     0,     0,   129,     0,
       0,     0,   130,     0,     0,   131,   132,     0,   133,     0,
       0,   134,     0,   135,     0,     0,     0,   136,   137,     0,
       0,     0,     0,     0,   345,   346,   347,   348,     0,     0,
       0,     0,     0,     0,   142,     0,     0,     0,   349,     0,
       0,     0,   350,   351,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,   144,   145,     0,   296,     0,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,     0,
       0,   308,   309,     0,   353,    72,    73,     0,     0,    74,
     310,   311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    76,     0,     0,   312,   313,   314,
     315,   316,   317,   318,     0,    77,     0,     0,   270,   271,
     272,     0,     0,     0,     0,   319,    78,     0,     0,     0,
     164,     0,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,   321,     0,     0,    87,   322,     0,    88,
       0,    89,    90,    91,     0,     0,     0,   323,    92,    93,
       0,     0,     0,     0,     0,     0,     0,   324,   325,   326,
     327,   328,     0,   329,   330,    94,    95,   331,   332,    96,
     333,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     334,   105,   106,   107,   108,     0,   109,   335,   110,     0,
       0,     0,     0,     0,     0,   111,   607,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   338,   339,     0,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,     0,     0,
       0,     0,   344,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,     0,     0,     0,     0,     0,
     128,     0,     0,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,     0,   135,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,   345,
     346,   347,   348,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,   349,  1655,     0,     0,   350,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,   144,   145,
       0,   296,     0,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,     0,     0,   308,   309,     0,   353,
      72,    73,     0,     0,    74,   310,   311,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    76,
       0,     0,   312,   313,   314,   315,   316,   317,   318,     0,
      77,     0,     0,   270,   271,   272,     0,     0,     0,     0,
     319,    78,     0,     0,     0,   164,     0,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,    80,     0,     0,    81,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,   321,     0,
       0,    87,   322,     0,    88,     0,    89,    90,    91,     0,
       0,     0,   323,    92,    93,     0,     0,     0,     0,     0,
       0,     0,   324,   325,   326,   327,   328,  1557,   329,   330,
      94,    95,   331,   332,    96,   333,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   334,   105,   106,   107,   108,
       0,   109,   335,   110,     0,     0,     0,     0,     0,     0,
     111,   607,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     338,   339,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   341,   342,     0,     0,     0,     0,   344,     0,     0,
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
       0,     0,     0,   144,   145,     0,   296,     0,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,     0,
       0,   308,   309,     0,   353,    72,    73,     0,     0,    74,
     310,   311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    76,     0,     0,   312,   313,   314,
     315,   316,   317,   318,     0,    77,     0,     0,   270,   271,
     272,     0,     0,     0,     0,   319,    78,     0,     0,     0,
     164,     0,   165,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    80,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,   321,     0,     0,    87,   322,     0,    88,
       0,    89,    90,    91,     0,     0,     0,   323,    92,    93,
       0,     0,     0,     0,     0,     0,     0,   324,   325,   326,
     327,   328,     0,   329,   330,    94,    95,   331,   332,    96,
     333,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     334,   105,   106,   107,   108,     0,   109,   335,   110,     0,
       0,     0,     0,     0,     0,   111,   607,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   338,   339,     0,     0,     0,
       0,     0,     0,     0,     0,   340,   341,   342,     0,     0,
       0,     0,   344,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   116,     0,     0,     0,     0,     0,
       0,   117,     0,     0,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,     0,     0,     0,     0,     0,
     128,     0,     0,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,     0,   135,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,   345,
     346,   347,   348,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,   349,     0,     0,     0,   350,   351,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,    72,    73,   144,   145,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,     0,   353,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,   164,   930,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,    89,    90,    91,   649,     0,     0,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,     0,   109,     0,   110,
       0,     0,     0,     0,     0,     0,   111,   931,     0,   112,
       0,     0,     0,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,     0,     0,     0,     0,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,     0,   135,
       0,     0,     0,   136,   137,     0,     0,     0,     0,     0,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
     142,     0,    66,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,     0,     0,    74,   143,     0,     0,     0,     0,   144,
     145,     0,  1605,     0,     0,    75,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   932,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     3,     4,  1481,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,  1482,     0,     0,
      80,     0,     0,  1483,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    83,    84,    85,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,    88,     0,    89,    90,    91,     0,     0,
     649,     0,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,    96,     0,    97,    98,    99,   100,   101,
     102,   103,     0,   104,     0,   105,   106,   107,   108,     0,
     109,     0,   110,     0,     0,     0,     0,     0,     0,   111,
       0,     0,   112,     0,     0,     0,     0,     0,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,     0,     0,
       0,     0,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   114,     0,     0,
       0,     0,     0,     0,   115,     0,     0,    15,   116,     0,
       0,     0,     0,     0,     0,   117,    16,  1485,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,    25,
       0,     0,     0,     0,   128,    26,    27,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,    28,   135,  1486,    29,     0,   136,   137,     0,     0,
       0,     0,     0,   138,   139,   140,   141,   919,     0,     0,
       0,     0,     0,   142,     0,     0,     0,  1487,     0,     0,
    1934,     0,     0,  1488,  1935,  -340,     0,     0,     0,     0,
      30,    66,    67,    68,    69,    70,    71,   143,     0,     0,
       0,     0,   144,   145,     0,     0,     0,     0,    72,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       3,     4,  1481,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,  1482,     0,     0,    80,
       0,     0,  1483,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    83,    84,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,    89,    90,    91,     0,     0,   649,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,     0,   111,     0,
       0,   112,     0,     0,     0,     0,     0,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,     0,     0,     0,
       0,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,   115,     0,     0,    15,   116,     0,     0,
       0,     0,     0,  1484,   117,    16,  1485,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     0,   127,    25,     0,
       0,     0,     0,   128,    26,    27,   129,     0,     0,     0,
     130,     0,     0,   131,   132,     0,   133,     0,     0,   134,
      28,   135,  1486,    29,     0,   136,   137,     0,     0,     0,
       0,     0,   138,   139,   140,   141,  1774,     0,     0,     0,
       0,     0,   142,     0,     0,     0,  1487,     0,     0,     0,
       0,     0,  1488,     0,     0,     0,     0,  1489,     0,    30,
      66,    67,    68,    69,    70,    71,   143,     0,     0,     0,
       0,   144,   145,     0,     0,     0,     0,    72,    73,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     3,
       4,  1481,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1482,     0,     0,    80,     0,
       0,  1483,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,    88,     0,    89,    90,    91,   649,     0,     0,     0,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,     0,
       0,    96,     0,    97,    98,    99,   100,   101,   102,   103,
       0,   104,     0,   105,   106,   107,   108,     0,   109,     0,
     110,     0,     0,     0,     0,     0,     0,   111,     0,     0,
     112,     0,     0,     0,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,     0,     0,     0,     0,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
       0,     0,   115,     0,     0,    15,   116,     0,     0,     0,
       0,     0,  1782,   117,    16,  1485,  1783,   119,   120,   121,
     122,   123,   124,   125,   126,   673,   127,    25,     0,     0,
       0,     0,   128,    26,    27,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,    28,
     135,  1486,    29,     0,   136,   137,     0,     0,     0,     0,
       0,   138,   139,   140,   141,     0,     0,     0,     0,     0,
       0,   142,     0,     0,     0,  1487,     0,     0,     0,     0,
       0,  1488,     0,     0,     0,     0,  1489,     0,    30,    66,
      67,    68,    69,    70,    71,   143,     0,     0,     0,     0,
     144,   145,     0,     0,     0,     0,    72,    73,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     3,     4,
    1481,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1482,     0,     0,    80,     0,     0,
    1483,     0,     0,     0,     0,     0,    82,     0,  1249,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,    89,    90,    91,   649,     0,     0,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,     0,   109,     0,   110,
       0,     0,     0,     0,     0,     0,   111,     0,     0,   112,
       0,     0,     0,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,     0,     0,     0,     0,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,    15,   116,     0,     0,     0,     0,
       0,     0,   117,    16,  1485,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,    25,     0,     0,     0,
       0,   128,    26,    27,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,    28,   135,
    1486,    29,     0,   136,   137,     0,     0,     0,     0,     0,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,  1487,     0,     0,     0,     0,     0,
    1488,     0,  -340,     0,     0,     0,     0,    30,    66,    67,
      68,    69,    70,    71,   143,     0,     0,     0,     0,   144,
     145,     0,     0,     0,     0,    72,    73,     0,     0,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     3,     4,  1481,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1482,     0,     0,    80,     0,     0,  1483,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      83,    84,    85,  1600,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,    88,
       0,    89,    90,    91,     0,   649,     0,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,  1601,   109,     0,   110,     0,
       0,     0,     0,     0,     0,   111,     0,     0,   112,     0,
       0,     0,     0,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,     0,     0,     0,     0,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,    15,   116,     0,     0,     0,     0,     0,
       0,   117,    16,  1485,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,    25,     0,     0,     0,     0,
     128,    26,    27,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,    28,   135,  1486,
      29,     0,   136,   137,     0,     0,     0,     0,     0,   138,
     139,   140,   141,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,  1487,     0,     0,     0,     0,     0,  1488,
       0,     0,     0,     0,     0,  2005,    30,    66,    67,    68,
      69,    70,    71,   143,     0,     0,     0,     0,   144,   145,
       0,     0,     0,     0,    72,    73,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     3,     4,  1481,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,  1482,     0,     0,    80,     0,     0,  1483,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,   649,     0,     0,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,     0,   109,     0,   110,     0,     0,
       0,     0,     0,     0,   111,     0,     0,   112,     0,     0,
       0,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,     0,     0,     0,     0,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,     0,     0,
       0,     0,     0,     0,  1147,  1148,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,    15,   116,     0,     0,     0,     0,     0,     0,
     117,    16,  1485,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   127,    25,     0,     0,     0,     0,   128,
      26,    27,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,    28,   135,  1486,    29,
       0,   136,   137,     0,     0,     0,     0,     0,   138,   139,
     140,   141,     0,     0,     0,     0,     0,     0,   142,     0,
       0,     0,  1487,     0,     0,     0,     0,     0,  1488,     0,
       0,     0,     0,     0,     0,    30,    66,    67,    68,    69,
      70,    71,   143,     0,     0,     0,     0,   144,   145,     0,
       0,     0,     0,    72,    73,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     3,     4,  1481,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,  1482,     0,     0,    80,     0,     0,  1483,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    88,     0,    89,
      90,    91,   649,     0,     0,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,     0,   105,
     106,   107,   108,     0,   109,     0,   110,     0,     0,     0,
       0,  1198,     0,   111,     0,     0,   112,     0,     0,     0,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
       0,     0,     0,     0,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   116,     0,     0,     0,     0,     0,     0,   117,
      16,  1485,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,   127,     0,     0,     0,     0,     0,   128,    26,
      27,   129,     0,     0,     0,   130,     0,     0,   131,   132,
       0,   133,     0,     0,   134,    28,   135,  1486,     0,     0,
     136,   137,     0,     0,     0,     0,     0,   138,   139,   140,
     141,     0,     0,     0,     0,     0,     0,   142,     0,     0,
       0,  1487,     0,     0,     0,     0,     0,  1488,     0,     0,
       0,     0,  1962,     0,    30,    66,    67,    68,    69,    70,
      71,   143,     0,     0,     0,     0,   144,   145,     0,     0,
       0,     0,    72,    73,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     3,     4,  1481,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
    1482,     0,     0,    80,     0,     0,  1483,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,     0,   649,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,  1556,   109,     0,   110,     0,     0,     0,     0,
       0,     0,   111,     0,     0,   112,     0,     0,     0,     0,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
       0,     0,     0,     0,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,   117,    16,
    1485,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,    26,    27,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,    28,   135,  1486,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   138,   139,   140,   141,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
    1487,     0,     0,     0,     0,     0,  1488,     0,     0,     0,
       0,     0,  2054,    30,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,     0,   144,   145,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,   225,
       0,     0,     0,     0,    72,    73,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
     227,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,    80,     0,     0,    81,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,     0,   649,     0,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,  1604,   109,     0,   110,     0,     0,
       0,     0,     0,     0,   111,     0,     0,   112,     0,     0,
       0,     0,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,     0,     0,     0,     0,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   279,   280,   234,   235,   236,   237,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   127,     0,     0,     0,     0,     0,   128,
       0,     0,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,     0,   135,     0,     0,
       0,   281,   137,     0,     0,     0,     0,     0,   138,   139,
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
      88,     0,    89,    90,    91,     0,   649,     0,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,  1607,   109,     0,   726,
       0,     0,     0,     0,     0,     0,   111,     0,     0,   112,
       0,     0,     0,     0,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,     0,     0,     0,     0,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,   259,   260,   261,   262,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   129,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   134,     0,   135,
       0,     0,     0,   727,   137,     0,     0,     0,     0,     0,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
     142,    66,    67,    68,  1003,  1004,  1005,     0,     0,     0,
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
       0,     0,    88,     0,    89,    90,    91,   649,     0,     0,
       0,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,     0,    97,    98,    99,   100,   101,   102,
     103,     0,   104,     0,   105,   106,   107,   108,     0,   109,
       0,   110,     0,     0,     0,     0,     0,     0,   111,     0,
       0,   112,     0,     0,     0,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,     0,     0,     0,     0,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,  1006,     0,     0,     0,     0,     0,     0,     0,
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
    1836,   109,     0,   110,     0,     0,     0,     0,     0,     0,
     111,   581,     0,   112,     0,     0,     0,     0,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,     0,     0,
       0,     0,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,   127,
       0,     0,     0,     0,     0,   128,     0,     0,   129,     0,
       0,     0,   130,     0,     0,   131,   132,     0,   133,     0,
       0,   134,     0,   135,     0,     0,     0,   136,   137,     0,
       0,     0,     0,     0,   138,   139,   140,   141,     0,     0,
       0,     0,     0,     0,   142,    66,    67,    68,  1003,  1004,
    1005,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,     0,     0,    74,     0,   143,     0,
       0,     0,     0,   144,   145,     0,     0,     0,    75,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,   164,     0,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,     0,     0,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,     0,   109,     0,   110,     0,     0,     0,     0,
       0,     0,   111,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1455,     0,     0,     0,
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
       0,     0,     0,     0,     0,    78,     0,     0,     0,   164,
       0,   165,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,    80,     0,     0,    81,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    88,     0,
      89,    90,    91,     0,   649,     0,     0,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    96,     0,
      97,    98,    99,   100,   101,   102,   103,     0,   104,     0,
     105,   106,   107,   108,  1837,   109,     0,   110,     0,     0,
       0,     0,     0,     0,   111,     0,     0,   112,     0,     0,
       0,     0,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,     0,     0,     0,     0,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,     0,
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
       0,     0,     0,     0,     0,     0,    77,     0,     0,   270,
     271,   272,     0,     0,     0,     0,     0,   273,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,    89,    90,    91,     0,   649,     0,     0,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
      96,     0,    97,    98,    99,   100,   101,   102,   103,     0,
     104,     0,   105,   106,   107,   108,  1838,   109,     0,   110,
       0,     0,     0,     0,     0,     0,   111,     0,     0,   112,
       0,     0,     0,     0,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,     0,     0,     0,     0,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,   116,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,   127,     0,     0,     0,     0,
       0,   128,     0,     0,   274,     0,     0,     0,   130,     0,
       0,   131,   132,     0,   133,     0,     0,   275,     0,   135,
       0,     0,     0,   136,   137,     0,     0,     0,     0,     0,
     138,   276,   140,   141,     0,     0,     0,     0,     0,     0,
     142,    66,    67,    68,  1003,  1004,  1005,     0,     0,     0,
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
       0,   110,     0,     0,     0,     0,     0,     0,   111,     0,
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
       0,    78,     0,     0,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,    80,     0,     0,    81,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    83,    84,    85,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    88,     0,    89,    90,    91,     0,
       0,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,     0,     0,     0,     0,     0,     0,
     111,    14,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,   111,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1093,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,  1094,
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
       0,     0,     0,     0,   111,     0,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   127,     0,     0,     0,     0,     0,   128,
       0,     0,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,   455,   135,     0,     0,
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
       0,     0,     0,     0,     0,     0,   111,   423,     0,   112,
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
       0,   110,     0,     0,     0,     0,     0,     0,   111,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1079,     0,     0,     0,     0,     0,     0,     0,
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
       0,   109,     0,   110,     0,     0,     0,     0,     0,     0,
     111,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,   115,     0,  1094,     0,   116,
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
       0,     0,   111,     0,     0,   112,     0,     0,     0,     0,
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
       0,     0,     0,     0,   111,     0,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   485,
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
       0,     0,     0,     0,     0,     0,   111,     0,     0,   112,
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
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1233,     0,     0,     0,     0,   144,
     145
};

static const yytype_int16 yycheck[] =
{
       0,    35,   284,     4,   294,     0,   409,   426,     9,   161,
       0,   162,    13,    24,   284,     0,    17,    18,   216,   171,
       0,   586,   294,   772,   284,     0,   630,   214,   764,   594,
       0,  1064,   543,    34,    35,    17,   188,   189,   583,   936,
       0,   193,   588,   429,   320,   793,     0,   955,   956,    11,
     596,  1528,  1305,   542,    26,   457,    14,  1371,     0,    16,
       3,   931,   679,   501,    65,    11,   746,   747,    14,   507,
     508,   509,   752,   782,   783,   784,     0,   938,     4,    58,
    1182,   882,    27,   884,   559,   633,   173,   336,   337,   503,
     504,   505,    18,    85,   895,    42,    43,   178,   111,   209,
      66,   445,  1703,   352,   158,  1706,    83,   173,     3,     3,
     133,   171,    86,  1089,   111,   174,     0,     5,     6,     7,
       8,     9,    10,    64,    65,    66,    67,  1441,  1089,   115,
     559,   171,   109,   111,   174,  1449,    83,   409,   173,    65,
     336,   298,   116,    11,   118,   119,   120,   121,   122,   123,
     151,   152,   126,  1441,   262,   171,   157,   314,   110,    81,
     110,  1449,     5,     6,     7,     8,     9,    10,   154,   151,
     251,   111,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   173,  1685,   210,
     211,   212,   172,   173,   174,   175,   176,   428,   172,   173,
     174,   175,   176,    55,   176,   226,   152,  1438,   111,   230,
     172,   173,   174,   175,   176,   207,     3,   238,   239,   240,
     241,   242,   243,   244,   245,   618,   247,   248,   172,   173,
     174,   175,   176,   254,   255,   342,   214,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   466,    11,
     173,   746,   747,   274,   275,   159,   342,   752,   173,   708,
     281,   341,   341,   115,   687,   211,   212,   341,   172,   173,
     174,   175,   176,   294,   295,  1896,   682,     3,   192,   193,
     250,   341,  1404,   174,   230,   173,  1660,   342,   249,   520,
     289,  1059,   238,   239,   240,   241,   242,   262,   866,   245,
    1217,   247,   248,   324,    66,   341,   891,   274,   341,   255,
     841,   272,   258,   259,   260,   261,   262,   489,   264,   265,
     266,   267,   268,   453,   341,  1321,   320,   339,   597,  1219,
     173,   897,   754,   842,   630,   281,   333,  1218,   315,    66,
    1321,   338,  1042,   341,  1073,   561,   367,   805,   806,   807,
     808,   296,   297,   298,   317,   341,   572,   573,   336,   996,
     174,   998,  1183,   271,   346,  1186,  1700,  1909,   637,   803,
     734,   735,     5,     6,     7,     8,     9,    10,   647,   173,
     346,   597,   111,  1526,  1615,  1882,   173,   111,  1661,   174,
      64,   607,   336,  1666,    83,   258,   627,  1771,   261,   420,
     345,   316,   423,  1777,    66,   426,   622,    66,   429,   171,
      84,   173,   861,   174,   166,   167,   168,     3,    79,   342,
     636,   367,   178,   174,   426,   110,   447,   279,   174,   174,
     174,    64,    65,    66,    67,  1977,    87,   174,   341,    58,
     461,   834,   835,   281,   465,   171,   173,   173,   393,   394,
     341,   753,   444,   474,   475,   476,   477,   478,   436,   104,
      66,  1891,   252,   753,   485,   110,   151,   521,    87,   771,
     491,   492,   234,   753,   495,   174,   497,   498,   499,   500,
     171,   771,     0,   172,   274,  1413,  1414,  1861,    21,    22,
     708,   771,  1635,   174,   515,   251,  1870,   713,   519,   342,
     521,   447,   908,   341,   174,  1778,   151,     3,   810,   171,
      55,   173,   171,   158,   173,   461,   174,   133,   463,   465,
     810,    55,   824,   158,   545,   174,   174,   341,   474,   475,
     476,   477,   478,   262,   824,   174,   298,     0,   262,   174,
      64,    65,    66,    67,   824,   178,   492,  1042,   342,   495,
     768,   497,   498,   499,   500,   865,   341,     0,  1932,    66,
    1934,  1382,    66,   254,  1332,   171,   266,   173,   864,   174,
     115,   174,  1393,   865,   174,  1140,   174,     3,   252,  1400,
     341,   115,   174,   274,   615,   171,   617,   173,   250,   174,
     341,   250,    16,   345,   766,   341,   341,   341,   174,  1223,
     174,   174,  1168,   581,   341,  1764,  1230,   274,   174,   630,
     631,   111,  2042,   634,   110,   152,   249,   154,   341,   597,
     165,   283,   345,  1260,   283,   133,   279,    53,   630,   607,
     342,   165,   158,   178,   930,   931,    84,   581,   907,   272,
     173,   341,   341,   861,   178,    69,    70,    71,   174,    73,
      74,   867,    76,   597,   178,   676,  2030,   678,  1116,   928,
     341,   682,   683,   607,   171,   696,   173,   171,   964,   173,
     901,   341,   325,   173,   676,   320,   621,   283,    83,   266,
     313,   950,    67,   341,   953,   954,   231,   232,   233,   234,
     235,  1608,   341,   341,   142,   190,   341,   231,   232,   233,
     234,   235,   341,    88,   173,   683,   727,  1760,  1761,   172,
     173,   174,   175,   176,  1873,   260,  1875,   116,   117,   118,
     119,   120,   121,   122,   123,   249,   260,   126,   273,   172,
     173,   174,   175,   176,   279,   713,   341,   165,   341,   284,
     173,   341,    83,   341,   765,   279,   170,  1043,   272,   341,
     284,   279,   127,    99,   341,   160,   341,   132,   163,   115,
     781,   782,   783,   784,   110,   341,   253,   341,   341,   713,
     791,   110,   793,     5,   319,   341,   321,    39,    40,    11,
    1082,   727,   269,   804,   229,   319,   134,   321,   127,   313,
     342,  1022,  1082,   132,    83,   282,   152,   325,   154,   237,
     831,  1103,  1082,   241,   232,   233,   234,   235,  1432,    71,
    1434,   173,   153,  1103,  1399,   156,   847,  1402,    56,   765,
     740,   110,   125,  1103,    62,  1043,  1284,  1285,  1286,   270,
     176,  1362,   102,  1239,   279,   280,   110,   176,    69,    70,
      71,   265,    73,    74,   865,    76,   149,   868,   102,   769,
     219,   220,  1070,  1259,   229,    88,   877,   301,   804,   303,
    1162,  1163,    95,    96,   885,   110,   214,   215,   216,   217,
     218,   892,  1162,  1163,   301,   250,   303,   855,   856,   857,
     172,   173,  1162,  1163,   176,  1641,  1642,   908,   833,   228,
     229,    64,    65,  1065,    67,   281,   166,   167,   168,   341,
    1107,  1108,   176,   148,   250,   150,   151,    42,    43,   930,
     931,   250,   166,   167,   168,   936,   937,   938,   230,   252,
     174,   320,  1034,  1219,  1036,  1037,    86,  1223,   930,   931,
     269,   877,   341,   272,  1230,    64,    65,    66,    67,   170,
     252,   274,   265,   282,   277,   278,   258,   259,    77,    78,
      79,    80,   266,   931,   228,   266,   116,    86,   118,   119,
     120,   121,   122,   123,    88,   277,   126,    91,    87,   914,
     301,   916,   303,    97,   301,  1206,   303,   955,   956,    69,
      70,    71,  1213,   262,  1215,  1609,    76,   931,   166,   167,
     168,  1012,   166,   167,   168,   269,   174,   177,   272,    11,
     180,   181,   182,   183,   184,   185,   186,   187,   282,   262,
     190,   191,   233,  1883,   174,  1885,  1886,  1887,   279,  1040,
    1041,   776,   777,   778,   779,   166,   167,   168,  1049,  1050,
     219,   220,  1053,   174,    82,    83,  1057,  1058,  1059,  1060,
     279,  1626,   171,  1335,   173,   279,  1874,   802,  1876,   233,
    1352,  1029,  1073,   166,   167,   168,   279,  1078,  1060,    89,
      90,   174,  1352,  1486,   643,   644,   645,  1088,   319,  1089,
     279,  1092,  1093,  1094,  1089,   227,    69,    70,    71,   296,
      73,    74,    75,    76,  1105,   315,   316,   317,   318,   177,
    1092,   177,  1113,  1038,     5,     6,     7,     8,     9,    10,
     279,   230,   290,   291,   292,   293,   294,   295,   279,  1089,
     239,   240,  1058,   242,   341,  1089,  1020,   255,   256,   323,
     324,   102,   104,   252,   100,   101,   285,  1089,     3,   258,
     259,   279,   280,   192,   193,  1720,  1432,     3,  1434,   297,
     110,   182,   183,    93,    94,   274,   173,  1093,   277,    89,
      90,   173,   133,   173,  1739,     3,     4,   127,   327,   328,
     320,   341,   132,   133,   325,   326,   173,  1113,   290,   291,
     292,   293,   294,   295,   173,  1444,  1445,   170,    64,    65,
    1411,  1412,   174,   175,   313,   166,   167,   168,   759,   760,
    1421,  1995,  1996,   174,   289,   290,  1217,  1218,  1219,   557,
     558,    22,  1223,   125,   174,   173,   176,  1646,   173,  1230,
    1512,  1513,  1233,  1515,   173,   173,   173,  1219,  1239,  1240,
     173,  1223,  1512,  1513,   173,  1515,  1442,   173,  1230,  1521,
    1522,   173,  1512,  1513,   173,  1515,   173,   173,  1259,  2008,
    1261,  1219,   826,   320,  1222,   829,   830,   831,   173,   230,
     180,   181,   182,   183,   184,   185,   186,   187,   228,   229,
     230,   191,   188,   847,   848,   849,   850,   173,   173,   173,
    1486,   252,  1488,   173,   173,  1219,   173,   258,   259,   331,
     250,   342,   252,   341,  1305,  1306,   173,   331,   258,   259,
     173,  1345,   173,  1314,   281,    92,   277,    98,   341,   269,
     133,  1321,   272,   134,  1249,   320,  1321,   277,   299,   133,
    1481,  1332,   282,  1609,   133,   313,   297,   298,   299,  1611,
     112,   112,   111,   174,  1345,  1346,  1357,   262,  1359,  1914,
    1361,   298,   171,  1278,   237,  1366,   173,   173,   173,   173,
     250,  1321,   171,   174,   233,   227,  1769,  1321,   173,    38,
    1371,  1296,   342,   173,  1299,  1300,   173,   173,   173,  1321,
     341,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   341,   177,  1394,   134,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   290,   291,
     292,   293,   294,   295,   169,   173,  1612,   134,   177,    17,
     173,   180,   181,   182,   183,   184,   185,   186,   187,   173,
     173,  1432,   191,  1434,   173,   173,   173,  1438,   298,    23,
    1441,   177,   134,   174,   112,   238,   155,   238,  1449,     3,
    1432,   173,  1434,   174,   174,  1413,  1414,    55,   171,  1655,
      58,   173,   173,   344,   206,   173,  1662,   174,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,    82,
     283,   111,    79,   173,  1485,   273,   243,   257,   104,   281,
     171,  1781,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   280,  1485,   111,   103,   314,   105,  1542,   171,
     173,   238,   173,   261,    20,   234,  1517,   115,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   268,    99,   177,
     341,   320,   180,   181,   182,   183,   184,   185,   186,   187,
     320,  1542,   190,   191,    23,  1470,   281,  1472,  1473,   265,
     111,     5,     6,     7,   341,   104,   320,   341,   158,  1485,
     173,   146,   341,   102,   174,   174,    20,   165,  1569,   287,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,   312,   341,   109,   302,   134,   341,
    1872,   110,   174,   174,   341,   173,   173,  1793,    52,    53,
      54,   173,  1872,   332,    88,   261,   111,  1608,  1609,   341,
      90,   258,  1872,   257,  1615,   110,   315,   111,   257,   265,
     274,   219,   220,   221,   222,   223,   224,  1609,   322,   174,
     174,   341,   174,   231,   232,   233,   234,   235,   174,  1640,
     265,   265,   174,  1795,   341,  1646,  1647,   174,   174,   174,
     174,  1941,   341,   281,   174,   341,   174,   174,   174,   174,
    1661,   173,   260,   177,  1646,  1666,   180,   181,   182,   183,
     184,   185,   186,   187,   174,   273,   190,   191,   174,   320,
    1681,   279,   341,   341,   282,   104,   284,   174,   161,   312,
     173,   173,   173,    75,  1890,   296,   174,    75,    72,  1700,
    1701,   177,   173,   104,   180,   181,   182,   183,   184,   185,
     186,   187,  1637,   108,   190,   191,  1717,   104,  1643,  1644,
      16,   174,   102,   321,  2006,  1877,   174,   134,    17,   174,
     174,   266,   266,   320,   111,   174,  2006,     3,   236,  1935,
     241,     3,   341,  1668,   236,   267,  2006,  1748,   171,   171,
      77,   264,   173,   264,   174,  1681,   174,   250,   320,   143,
     143,   174,   174,  1764,   174,    75,    55,   173,   104,    58,
     174,   281,   174,   328,   341,   274,   250,  1778,   341,   173,
    1781,   238,   237,   343,     5,   171,   238,   338,   339,  1790,
     128,   228,   173,   344,   341,   174,   265,   330,   349,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   174,   310,   103,   174,   105,   308,   174,   173,
     162,   342,  1747,   174,   265,   265,   115,   265,   174,   174,
    1831,   191,   286,   287,   288,   289,   110,   341,   341,   341,
     257,   273,    83,   173,   173,   238,   302,   173,   272,   110,
    1851,   341,   320,   173,  1855,   264,  1857,   172,  2056,   112,
      85,  1862,    85,   266,  1790,   110,  1867,  2065,   110,   265,
     110,   174,  1873,   265,  1875,   325,   165,   428,   336,   341,
     229,     3,   273,   334,   312,   436,   262,   341,   302,   336,
    1891,  1891,     5,  1894,   133,   238,  1891,   238,   309,   342,
     134,  1891,     5,   129,   329,   320,  1891,  1908,   342,   156,
     341,  1891,   301,   151,     3,   151,  1891,   154,   190,    59,
     174,  1891,   312,  1848,   133,   300,   174,   312,  1929,   173,
     219,   220,   221,   222,   223,   224,   113,   159,  1939,   156,
    1941,   153,   231,   232,   233,   234,   235,   133,    60,  1874,
     300,  1876,   325,  1954,  1955,  1956,  1957,   312,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   337,   520,
     265,   260,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   325,   310,   312,   335,    61,
     279,   302,   336,   282,   306,   284,   265,   265,  1999,   308,
    2001,   318,   553,    64,   173,    65,    41,   133,   791,  1321,
    1271,   207,   206,   446,  1031,  1948,    35,  1059,   448,  1635,
     754,  2015,  1332,  2037,  2007,  2014,  1947,  2042,  1776,  1666,
    1657,  2032,   321,  1776,  1515,   586,   587,   588,  2045,  1802,
    1801,  2042,  2042,   594,  2045,   596,  1352,  2042,   447,     8,
     155,  1851,  2042,  1854,   697,  1475,  1923,  2042,  1472,   610,
     611,   612,  2042,  1473,   685,   687,  1412,  2042,   302,  1029,
    1411,   865,  2042,  1614,  1020,   626,   627,  1227,  1240,   564,
     646,   420,   940,  1622,  1146,   676,   862,   899,   647,   639,
     648,   642,   643,   644,   645,  1739,   917,    34,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,  1706,   921,   573,  1893,  1561,   678,   679,  1704,
     518,   921,  1392,  1720,   595,  1381,   625,  1568,  1825,  1384,
    1913,  1905,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    67,    -1,    69,    70,
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
     171,   172,   173,    -1,   175,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,    -1,    -1,    -1,   887,    -1,    -1,    -1,
     891,   202,   203,   204,    -1,    -1,   897,    -1,   209,    -1,
     901,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,   919,    -1,
     231,   922,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,
      -1,    -1,    -1,   264,   955,   956,   267,   268,    -1,   270,
      -1,    -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,
      -1,    -1,   283,    -1,    -1,   286,   287,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,     0,     1,    -1,   300,
      -1,    -1,    -1,   304,   305,   996,    -1,   998,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
      -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,    -1,
      -1,  1022,    -1,    -1,    -1,    -1,   111,    -1,  1029,    -1,
      -1,    -1,    -1,   344,    -1,   346,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
      64,    65,    66,    67,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    -1,    -1,    20,
      -1,    -1,    86,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    -1,    -1,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,    -1,    -1,   133,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,
      -1,    -1,    -1,  1164,    -1,    -1,    -1,  1168,    -1,    -1,
      -1,    -1,  1173,    -1,    -1,    -1,    -1,    -1,    -1,   130,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1196,  1197,  1198,  1199,    -1,
      -1,    -1,    -1,    -1,    -1,  1206,    -1,    -1,    -1,    -1,
      -1,  1212,  1213,    -1,  1215,    -1,   230,    -1,    -1,     5,
       6,     7,     8,     9,    10,   239,   240,    -1,   242,    -1,
     244,   245,   246,   247,   248,   249,    22,    23,   252,    -1,
      26,    -1,    -1,    -1,   258,   259,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,   341,    -1,    -1,  1260,
     274,    -1,    -1,   277,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,   313,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,   118,   119,   120,   286,   287,   288,   289,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,    -1,   158,   159,   160,   161,    -1,   163,    -1,   165,
    1381,    -1,    -1,  1384,    -1,   171,   172,   173,    -1,   175,
      -1,  1392,    -1,    -1,    -1,    -1,    -1,    -1,  1399,    -1,
      -1,  1402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1411,  1412,  1413,  1414,    -1,    -1,    -1,    -1,    -1,    -1,
    1421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,  1487,   273,    -1,   275,
      -1,    -1,    -1,   279,   280,    -1,    -1,   283,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,  1526,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,    -1,    -1,    20,    -1,   325,
     326,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,   344,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1568,    -1,    52,
      53,    54,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    -1,    -1,    -1,    -1,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,  1600,
      -1,    -1,  1603,    -1,  1605,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      -1,  1622,    -1,    -1,    -1,  1626,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,  1635,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
     134,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,  1702,  1703,  1704,    -1,  1706,    -1,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   134,  1720,
      -1,   341,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    -1,    -1,    -1,  1739,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1768,    -1,    -1,
      -1,    -1,    -1,  1774,    -1,    -1,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,    -1,    -1,    -1,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   286,   287,   288,   289,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,   341,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,   302,    83,    -1,    -1,
      86,    -1,  1893,    -1,    -1,  1896,    92,   286,   287,   288,
     289,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
     106,    -1,    -1,  1914,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,   118,   119,   120,   279,  1927,    -1,   124,   125,
     126,    -1,   286,   287,   288,   289,    -1,    -1,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,    -1,   163,   164,   165,
      -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,
     176,    -1,   178,   179,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   189,    -1,    -1,   192,   193,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,
     204,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,
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
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,   173,    -1,   175,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,   203,   204,    -1,   206,    -1,    -1,   209,    -1,    -1,
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
      -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,
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
      -1,    -1,   172,   173,    -1,   175,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   202,   203,   204,    -1,    -1,    -1,    -1,   209,
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
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,
     118,   119,   120,    -1,    -1,    -1,   124,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,    -1,   163,   164,   165,    -1,    -1,
      -1,    -1,    -1,    -1,   172,   173,    -1,   175,    -1,    -1,
      -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   202,   203,   204,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,    -1,
      -1,    -1,   340,    -1,    -1,    -1,    -1,     3,   346,     5,
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
      -1,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,    -1,   163,   164,   165,
      -1,    -1,    -1,    -1,    -1,    -1,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,    -1,
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
      -1,   172,   173,    -1,   175,    -1,    -1,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   202,   203,   204,    -1,   206,    -1,    -1,   209,    -1,
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
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,    -1,   163,   164,   165,
      -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,    -1,
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
      -1,   172,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   202,   203,   204,    -1,    -1,    -1,    -1,   209,    -1,
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
      -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,    -1,
      -1,    -1,   333,    -1,    -1,    -1,    -1,    -1,    -1,   340,
      -1,    -1,    -1,    -1,     3,   346,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,
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
      -1,    -1,    -1,   172,   173,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   202,   203,   204,    -1,    -1,    -1,    -1,
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
      -1,   320,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,
      -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,    -1,    -1,
      -1,   340,    -1,    -1,    -1,    -1,     3,   346,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
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
      -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   202,   203,   204,    -1,    -1,
      -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,
      -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,   301,    -1,    -1,   304,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,   325,   326,
      -1,     3,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,   346,
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
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,   203,   204,    -1,    -1,    -1,    -1,   209,    -1,    -1,
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
      -1,    -1,    -1,   325,   326,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   346,    22,    23,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    66,
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
      -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   202,   203,   204,    -1,    -1,
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
      -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,   325,   326,
      -1,     3,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,   346,
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
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,   203,   204,    -1,    -1,    -1,    -1,   209,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,    -1,
      -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,
      -1,   273,    -1,   275,    -1,    -1,    -1,   279,   280,    -1,
      -1,    -1,    -1,    -1,   286,   287,   288,   289,    -1,    -1,
      -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,    -1,
      -1,    -1,   304,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,
      -1,    -1,    -1,   325,   326,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   346,    22,    23,    -1,    -1,    26,
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
      -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   202,   203,   204,    -1,    -1,
      -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,
      -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,   301,    -1,    -1,   304,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,   325,   326,
      -1,     3,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    -1,   346,
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
      -1,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,   203,   204,    -1,    -1,    -1,    -1,   209,    -1,    -1,
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
      -1,    -1,    -1,   325,   326,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,   346,    22,    23,    -1,    -1,    26,
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
      -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   202,   203,   204,    -1,    -1,
      -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,
     257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,    -1,
      -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,    -1,    -1,    -1,   304,   305,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,    -1,    -1,    22,    23,   325,   326,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,   346,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,   118,   119,   120,   134,    -1,    -1,    -1,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,    -1,   158,   159,   160,   161,    -1,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,
      -1,    -1,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,    -1,    -1,    -1,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,   320,    -1,    -1,    -1,    -1,   325,
     326,    -1,   341,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,    -1,   118,   119,   120,    -1,    -1,
     134,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,    -1,   146,    -1,   148,   149,   150,   151,   152,
     153,   154,    -1,   156,    -1,   158,   159,   160,   161,    -1,
     163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,    -1,    -1,
      -1,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,   230,   231,    -1,
      -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,   252,
      -1,    -1,    -1,    -1,   257,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,
     273,   274,   275,   276,   277,    -1,   279,   280,    -1,    -1,
      -1,    -1,    -1,   286,   287,   288,   289,   301,    -1,    -1,
      -1,    -1,    -1,   296,    -1,    -1,    -1,   300,    -1,    -1,
     303,    -1,    -1,   306,   307,   308,    -1,    -1,    -1,    -1,
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
      -1,    -1,   116,    -1,   118,   119,   120,    -1,    -1,   134,
      -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,    -1,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,    -1,   158,   159,   160,   161,    -1,   163,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      -1,   175,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,    -1,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,   230,   231,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,   252,    -1,
      -1,    -1,    -1,   257,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,
     274,   275,   276,   277,    -1,   279,   280,    -1,    -1,    -1,
      -1,    -1,   286,   287,   288,   289,   301,    -1,    -1,    -1,
      -1,    -1,   296,    -1,    -1,    -1,   300,    -1,    -1,    -1,
      -1,    -1,   306,    -1,    -1,    -1,    -1,   311,    -1,   313,
       5,     6,     7,     8,     9,    10,   320,    -1,    -1,    -1,
      -1,   325,   326,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,   118,   119,   120,   134,    -1,    -1,    -1,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
      -1,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,    -1,   158,   159,   160,   161,    -1,   163,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,
     175,    -1,    -1,    -1,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,    -1,    -1,    -1,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,    -1,   230,   231,    -1,    -1,    -1,
      -1,    -1,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   263,   251,   252,    -1,    -1,
      -1,    -1,   257,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,   274,
     275,   276,   277,    -1,   279,   280,    -1,    -1,    -1,    -1,
      -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,
      -1,   306,    -1,    -1,    -1,    -1,   311,    -1,   313,     5,
       6,     7,     8,     9,    10,   320,    -1,    -1,    -1,    -1,
     325,   326,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,   175,
      -1,    -1,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,    -1,    -1,    -1,    -1,   206,   207,   208,
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
     296,    -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,
     306,    -1,   308,    -1,    -1,    -1,    -1,   313,     5,     6,
       7,     8,     9,    10,   320,    -1,    -1,    -1,    -1,   325,
     326,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
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
      -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,
      -1,    -1,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,    -1,    -1,    -1,    -1,   206,   207,   208,
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
     118,   119,   120,   134,    -1,    -1,    -1,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,    -1,
     158,   159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,    -1,    -1,    -1,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,   225,   226,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      -1,    -1,   230,   231,    -1,    -1,    -1,    -1,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,   252,    -1,    -1,    -1,    -1,   257,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,
     268,    -1,   270,    -1,    -1,   273,   274,   275,   276,   277,
      -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,
      -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,   306,    -1,
      -1,    -1,    -1,    -1,    -1,   313,     5,     6,     7,     8,
       9,    10,   320,    -1,    -1,    -1,    -1,   325,   326,    -1,
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
     119,   120,   134,    -1,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,    -1,   158,
     159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,
      -1,   183,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
      -1,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,    -1,    -1,    -1,
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
      10,   320,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,
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
      -1,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
      -1,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
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
     320,    -1,    -1,    -1,    -1,   325,   326,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,
     118,   119,   120,    -1,   134,    -1,    -1,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,    -1,
     158,   159,   160,   161,   174,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,
      -1,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    -1,    -1,    -1,    -1,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,   221,   222,   223,   224,    -1,    -1,   227,
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
     116,    -1,   118,   119,   120,    -1,   134,    -1,    -1,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,    -1,   158,   159,   160,   161,   174,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,   175,
      -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,    -1,    -1,    -1,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,   231,   232,   233,   234,   235,
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
      -1,    -1,   116,    -1,   118,   119,   120,   134,    -1,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,    -1,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,    -1,   158,   159,   160,   161,    -1,   163,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      -1,   175,    -1,    -1,    -1,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,    -1,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     174,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,   173,    -1,   175,    -1,    -1,    -1,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,    -1,    -1,
      -1,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
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
      -1,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
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
     320,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      98,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,
     118,   119,   120,    -1,   134,    -1,    -1,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,    -1,
     158,   159,   160,   161,   174,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,
      -1,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    -1,    -1,    -1,    -1,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,    -1,   118,   119,   120,    -1,   134,    -1,    -1,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,    -1,   158,   159,   160,   161,   174,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,   175,
      -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,    -1,    -1,    -1,    -1,   206,   207,
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
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
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
      -1,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,    -1,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,    -1,   158,   159,   160,   161,
      -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,   229,
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
      -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,
      -1,    -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,
     268,    -1,   270,    -1,    -1,   273,   274,   275,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,
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
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
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
      -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,   227,    -1,   229,    -1,   231,
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
      -1,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,   175,
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
     296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,   325,
     326
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    64,    65,    66,    67,    77,    78,    79,
      80,    86,   133,   171,   173,   230,   239,   240,   242,   244,
     245,   246,   247,   248,   249,   252,   258,   259,   274,   277,
     313,   348,   354,   355,   356,   357,   358,   360,   362,   363,
     372,   377,   389,   394,   395,   401,   446,   449,   457,   478,
     492,   496,   497,   498,   506,   521,   522,   523,   541,   545,
     546,   547,   550,   670,   133,   111,     5,     6,     7,     8,
       9,    10,    22,    23,    26,    38,    41,    52,    63,    80,
      83,    86,    92,    97,    98,    99,   105,   113,   116,   118,
     119,   120,   125,   126,   142,   143,   146,   148,   149,   150,
     151,   152,   153,   154,   156,   158,   159,   160,   161,   163,
     165,   172,   175,   219,   220,   227,   231,   238,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   251,   257,   260,
     264,   267,   268,   270,   273,   275,   279,   280,   286,   287,
     288,   289,   296,   320,   325,   326,   638,   664,   665,   178,
     251,   532,   262,    81,   503,   503,   664,    79,    87,   542,
     543,   664,    66,   550,    67,    69,    70,   609,   610,   611,
     664,   638,   351,   350,   352,   353,   349,     5,    11,   668,
     671,     5,     6,     7,     8,     9,    10,    64,    65,    66,
      67,   178,   249,   272,   313,   373,   380,   381,   382,   384,
     385,   386,   662,   663,   258,   261,   378,   379,    58,    87,
      55,   115,   279,    11,   173,   234,   298,   441,   442,   514,
     541,   547,   653,   667,     0,    17,    55,    58,   103,   105,
     115,   165,   219,   220,   221,   222,   223,   224,   231,   232,
     233,   234,   235,   260,   273,   279,   282,   284,   321,   402,
     403,   406,   407,   440,    55,   115,   165,   178,   231,   232,
     233,   234,   235,   260,   273,   279,   284,   319,   321,   491,
      55,    56,    57,    63,   260,   273,   287,   635,   664,   219,
     220,   279,   361,   406,   438,   664,   133,   102,   166,   167,
     168,   566,   133,   638,   274,   342,     3,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    18,    19,
      27,    28,    44,    45,    46,    47,    48,    49,    50,    62,
     106,   110,   114,   124,   134,   135,   136,   137,   138,   140,
     141,   144,   145,   147,   157,   164,   173,   176,   192,   193,
     202,   203,   204,   206,   209,   286,   287,   288,   289,   300,
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
     658,   659,   660,   104,   178,   251,   551,   551,   551,   297,
     567,   285,   535,   445,   533,   534,   661,   664,   664,   669,
     669,   669,   173,   173,    22,   173,   613,   613,   613,   613,
     613,   173,   589,   173,   125,   664,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   283,   541,
     550,   564,   574,   582,   609,   664,   574,   173,   591,   591,
     173,   173,   173,   591,   669,   173,   625,   173,   626,   192,
     193,   623,   301,   591,   647,   648,   173,   173,   574,   586,
     111,   262,   554,   555,   320,   617,   188,   177,   180,   181,
     182,   183,   184,   185,   186,   187,   190,   191,   638,   134,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   263,   331,   342,   341,   173,   173,   173,
     669,   669,   342,   173,   250,   283,   442,   445,   524,    82,
      83,   281,   505,    89,    90,    92,    98,   341,   543,   438,
     320,   553,   174,   529,   591,   643,   611,   664,   299,   569,
     133,   133,   133,   173,   174,   527,   529,   531,   550,   271,
     387,   388,   662,   662,   387,   382,   165,   279,   383,   491,
     638,   386,   112,   112,   111,   111,   499,   255,   256,   404,
     171,   254,   274,   390,   116,   117,   118,   119,   120,   121,
     122,   123,   126,   320,   397,   399,   400,   252,   274,   277,
     278,   174,   638,   317,   669,   262,   638,   653,   298,   171,
      86,   320,   396,   398,   400,   638,   638,   638,   638,   638,
     237,   173,   173,   173,   173,   171,   370,   365,   664,   250,
     366,   227,   111,   173,   409,   410,   444,   444,   323,   324,
     479,   664,   638,   638,   233,   638,   638,   638,   638,   495,
     173,   493,   493,   493,   493,   495,   495,   495,   664,    58,
     289,   637,   664,   529,   438,   173,   173,    21,    22,   173,
     173,   173,    38,   173,   625,   626,   290,   291,   292,   293,
     294,   295,   628,   630,   632,   633,   664,   173,   173,   173,
     173,   570,   571,   591,   169,   552,   552,   552,   593,   652,
     667,   298,   568,   564,   177,   341,   555,   177,   342,   564,
     641,   641,    23,   174,   295,   628,   629,   112,   591,   592,
     591,   675,   676,   677,   675,   238,   155,   697,   723,   152,
     154,   721,   238,     3,   709,   592,   115,   720,   721,   675,
     550,   173,   525,   174,   174,   174,   174,   341,   342,   591,
     591,   591,   668,   171,   624,   668,   624,   669,   564,   301,
     645,   646,   303,   647,   649,   591,   529,   644,   341,   345,
      68,   173,   344,   536,   556,   557,   589,   609,   638,   664,
     548,   549,   664,   535,   664,   564,   178,   179,   189,   574,
     584,   100,   101,   577,   577,   173,   173,   579,   591,   579,
     579,   579,   565,   574,   584,   587,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   591,   591,
     110,   176,   173,   206,   616,   174,   178,   206,   251,   591,
     650,   664,   650,     8,     9,    10,   206,   664,   283,   525,
     524,    82,    79,    88,    95,    96,   502,   668,   501,   174,
     173,   174,   341,    14,   593,   653,   243,   359,   174,   341,
     171,   341,   375,   171,   374,   638,   387,   387,   257,   404,
     281,   273,   104,   171,   652,   652,   652,   655,   399,   229,
     279,   280,   392,   393,    67,    88,   391,   393,   279,   393,
     111,    16,   512,   513,   512,   638,   444,   314,   653,   404,
     171,   655,   398,   173,   409,   409,   409,   409,   238,   206,
     476,   477,   664,   476,   476,   476,   261,    20,   268,   672,
     673,   365,   234,   185,   229,   412,   413,   414,   416,   419,
     427,   428,   439,   661,   664,    99,   405,   320,   320,    64,
      65,    67,   480,   265,   409,   493,   638,   495,   495,   495,
     495,   174,   494,   655,   655,   651,   668,   651,    23,   651,
     651,   651,   668,    53,   656,   669,   624,   624,   626,   625,
     281,   651,   668,   651,   651,   651,   341,   225,   226,   572,
     104,   550,   550,   550,   593,   653,   569,   589,   534,   535,
     564,   664,   320,   341,   111,   638,   158,   722,   341,   722,
     722,   664,   684,   173,   591,   698,   699,   700,   341,   592,
     664,   706,   146,   710,   722,   675,   566,   174,   526,   529,
     530,   174,   341,   182,   183,   574,   111,   341,   183,   341,
     174,   287,   669,   174,   669,   633,   302,   591,   645,   649,
     591,   312,   341,   341,   174,   341,   574,   589,   609,   173,
     536,   557,   558,   341,    69,    70,    71,    73,    74,    76,
     170,   537,   539,   320,   559,   664,   559,   560,   560,   342,
     341,   554,   109,   561,   574,   574,   574,   527,   527,   107,
     589,   110,   332,   596,   597,   650,   174,   650,   174,   342,
     341,   342,   664,    93,    94,    88,   544,   529,   531,   261,
     388,   111,   376,   258,   376,   376,   376,   669,   257,   664,
     664,   652,   589,   653,   664,   664,   664,    90,    89,    90,
     664,   638,   413,   609,   110,   515,   315,   515,   444,   111,
     257,   653,   476,   265,   664,   174,   341,   655,   174,   174,
     174,    56,    62,   371,   274,   664,   666,   674,   354,   355,
     367,   368,   369,   372,   377,   389,   394,   492,   609,   638,
     664,   174,   341,   253,   269,   282,   436,   130,   131,   415,
     655,   171,   664,   441,   441,   322,   265,   638,   265,   408,
     495,   174,   341,   174,   174,   174,   174,   341,   174,   341,
     174,   341,   295,   628,   631,   174,   341,   174,   174,   174,
     571,   173,   655,   655,   591,   115,   154,   174,   675,   174,
     174,   341,   683,    83,   250,   591,   724,   725,   727,   728,
     729,   266,   341,   694,   320,   701,    84,   142,   704,   341,
     707,   104,   711,   731,   722,   174,   161,   732,   733,   722,
     174,   341,   173,   173,   173,   591,   591,   591,   591,   296,
     529,   302,   312,   591,   529,   529,   559,   560,   174,   550,
     557,   537,    75,   557,    75,    72,   538,   664,   173,   664,
     549,   104,   108,   563,   190,   190,   174,   174,   669,   104,
     174,   102,   598,   174,   174,   206,   650,   664,   174,   266,
     371,   266,    16,   669,   495,   495,   495,   252,   274,   320,
     484,   669,   111,   173,   316,   519,   520,   669,   669,   174,
       3,    66,    80,    86,   237,   240,   276,   300,   306,   311,
     360,   362,   363,   372,   377,   389,   394,   450,   453,   455,
     456,   457,   461,   463,   469,   471,   472,   492,   496,   497,
     546,   664,   664,   236,   241,   236,   664,   341,   369,   414,
     664,   264,   264,   445,   127,   132,   250,   417,   418,   421,
     422,   424,   425,   428,   267,     3,   171,   411,   171,   443,
     438,   664,   173,    77,   494,   654,   668,   668,   668,   626,
     668,   562,   639,   664,   174,   174,   174,   139,   591,   685,
     691,   692,   693,   723,   722,   250,   727,   174,   341,   320,
     110,   148,   150,   151,   695,   699,   722,   664,   702,   143,
     143,   174,   592,   722,   125,   149,   592,   712,   713,   714,
     715,   716,   731,   281,   174,   174,   530,   526,   527,   527,
     112,   174,   174,   341,   174,   341,   529,   174,   345,    75,
     557,    16,   265,   540,   557,   173,   666,   562,   564,   574,
     574,   562,   104,    85,   339,   599,   600,   174,   174,   328,
     274,   250,    99,   110,   176,   250,   669,   341,   519,   520,
     173,   509,   509,   341,   238,   237,   532,   238,   458,   459,
     638,   279,   442,   462,   564,   301,   466,   467,   591,   564,
     310,   451,   308,   343,   655,   279,   475,   655,     5,   475,
     664,   445,   445,   128,   423,   590,   421,   110,   176,   228,
     269,   272,   282,   435,   437,   173,    83,   172,   228,   330,
     481,   438,    64,    84,   252,   174,   174,   174,   174,   174,
     341,   342,   173,   341,   341,   694,   341,   174,   725,   664,
     726,   265,   265,   265,   265,   174,   174,   320,   730,   731,
     341,   110,   151,   717,   162,   174,   174,   174,   591,   591,
     591,   559,   557,   445,   564,   540,   666,   174,   570,   181,
     333,   340,   592,   601,   602,   603,   604,   257,   273,     3,
     110,   110,   423,   669,    83,   518,   174,   510,   511,   664,
     512,   512,   669,   669,   238,   553,   447,   664,   173,   173,
     564,   303,   466,   468,   301,   464,   465,   302,   451,   453,
     564,   173,   237,   241,   450,     4,   448,   669,   237,   241,
     272,   320,   110,   173,   264,   638,   420,   421,   172,   266,
     327,   328,   482,   483,   112,   486,   487,   174,    85,    85,
     639,   664,   591,   686,   687,   689,   691,   693,   685,   691,
     110,    83,   110,   110,   110,   664,   713,   265,   265,   174,
      83,   160,   163,   734,   735,   740,   174,   174,   174,   174,
     602,   325,   336,   336,   334,   607,   669,   664,   341,   229,
     174,   341,     3,   515,   515,   273,   447,   342,   460,   591,
     442,   302,   451,   312,   591,   464,   468,   451,   453,   133,
     309,   474,   661,   238,     5,   238,     5,   638,   129,   564,
     444,   174,   341,   279,   325,   485,   279,   485,   483,   329,
     301,   489,   174,   341,   320,   688,   341,   154,   730,   151,
     151,   156,   664,   741,     3,   736,   737,    83,   153,   156,
     742,   743,   745,   746,   190,    83,   109,   333,   338,   669,
     511,    59,   516,   516,   664,   664,   174,   341,   174,   451,
     453,   300,   302,   312,   303,   307,   470,   133,   312,   451,
     174,   341,   655,   447,   448,   447,   448,   444,   173,   426,
     174,   113,   434,   421,   484,   484,   484,   484,   325,   326,
     488,   564,   311,   360,   362,   372,   377,   454,   455,   490,
     496,   497,   546,   687,   664,   690,   691,   159,   738,   738,
     156,   664,   748,   737,   747,   744,   745,   333,   340,   592,
     605,   606,   337,   325,    60,   517,   517,   591,   133,   451,
     300,   451,   564,   312,   312,   312,   661,   434,   396,    39,
      40,    71,   433,   265,   430,   431,   432,   664,   664,   664,
     664,   310,   737,   739,   325,   335,   336,    61,   518,   518,
     302,   306,   308,   655,   432,   174,    64,    65,   265,   431,
     265,   430,   452,   318,   507,   451,   473,   664,    42,    43,
      83,   274,   429,   429,   312,   454,   173,   470,    41,   110,
     250,   133,   508,   653,   174,   341,   653
};

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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (m, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, m); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvc *m)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (m);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvc *m)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, m);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, mvc *m)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , m);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, m); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, mvc *m)
{
  YYUSE (yyvaluep);
  YYUSE (m);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (mvc *m)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, m);
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 616 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (m->sym) {
			append_symbol(m->sym->data.lval, (yyval.sym));
			(yyval.sym) = m->sym;
		} else {
			m->sym = (yyval.sym) = (yyvsp[-1].sym);
		}
		YYACCEPT;
	}
#line 6571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 626 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 631 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 6595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 640 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 645 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 6619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 655 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 660 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 6643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 670 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->scanner.mode == LINE_1) {
				yyerror(m, "SQL debugging only supported in interactive mode");
				YYABORT;
			  }
		  	  m->emod |= mod_debug;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 679 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); YYACCEPT; }
#line 6663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 680 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 685 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); YYACCEPT; }
#line 6679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 686 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = (yyvsp[-1].sym); YYACCEPT; }
#line 6685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 687 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 6691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 688 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 6697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 689 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 6703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 690 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYABORT; }
#line 6709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 717 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-3].l));
		append_list(l, (yyvsp[-2].l));
		append_symbol(l, (yyvsp[-1].sym));
		append_int(l, (yyvsp[0].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
#line 6720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 727 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 6726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 728 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 6732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 733 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[0].l)); }
#line 6738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 734 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 6744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 739 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l) );
		append_type(l, &(yyvsp[0].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
#line 6753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 744 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l) );
		append_type(l, &(yyvsp[0].type) );
		(yyval.l) = append_symbol((yyvsp[-3].l), _symbol_create_list( SQL_DECLARE, l)); }
#line 6762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 752 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, (yyvsp[-2].sval) );
		append_symbol(l, (yyvsp[0].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 757 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 765 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 773 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 781 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 789 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 795 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[0].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 804 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-3].l));
		append_symbol(l, (yyvsp[-2].sym));
		append_symbol(l, (yyvsp[-1].sym));
		append_list(l, (yyvsp[0].l));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
#line 6849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 811 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_int(l, (yyvsp[0].i_val));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
#line 6858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 819 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[0].sval) );
	  append_string((yyval.l), NULL ); }
#line 6866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 823 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[0].sval) ); }
#line 6874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 827 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[-2].sval) );
	  append_string((yyval.l), (yyvsp[0].sval) ); }
#line 6882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 836 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 6888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 837 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[0].sval) ); }
#line 6894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 841 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 6900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 846 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 6906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 848 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym) ); }
#line 6912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 854 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 6918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 855 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 6924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 859 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 6930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 860 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_role; }
#line 6936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 865 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
#line 6948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 875 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
#line 6959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 884 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 6965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 886 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 6971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 890 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 6977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 891 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 6983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 895 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 6989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 896 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 6995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 901 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 7001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 902 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 7007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 907 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[-4].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
#line 7019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 915 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[-4].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
#line 7030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 924 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 925 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 929 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 930 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 935 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[0].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
#line 7062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 939 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[-2].l));
	  append_symbol((yyval.l), (yyvsp[0].sym)); }
#line 7070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 945 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(L(), (yyvsp[0].i_val)); }
#line 7076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 947 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(append_int(L(), (yyvsp[-2].i_val)), (yyvsp[0].i_val)); }
#line 7082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 951 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
#line 7088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 952 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
#line 7094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 956 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[0].l)); }
#line 7100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 957 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[0].l)); }
#line 7106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 958 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[0].l)); }
#line 7112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 969 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 970 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 975 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 977 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 7136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 981 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
#line 7142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 982 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
#line 7148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 983 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[0].l)); }
#line 7154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 984 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[0].l)); }
#line 7160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 985 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[0].l)); }
#line 7166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 986 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
#line 7172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 990 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 7178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 992 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 7184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 996 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 7190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 997 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 7196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1005 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1010 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, (yyvsp[0].l)));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1015 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1020 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1025 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1030 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1035 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1040 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
#line 7268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1045 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
#line 7277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1050 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  dlist *p = L();
	  append_string(l, NULL);
	  append_string(p, (yyvsp[-4].sval));
	  append_string(p, NULL);
	  append_int(p, (yyvsp[-6].i_val));
	  append_string(p, (yyvsp[0].sval));
	  append_list(l, p);
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
#line 7291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1062 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, (yyvsp[0].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[-2].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1068 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[0].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1075 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, (yyvsp[-3].sval));
				  append_string(l, (yyvsp[0].sval));
				  append_int(l, (yyvsp[-5].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1085 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
#line 7333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1090 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-2].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
#line 7341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1094 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
#line 7349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1098 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[-2].sval)); }
#line 7355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1100 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  if (!strlen((yyvsp[0].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
#line 7367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1108 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
#line 7376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1116 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
#line 7385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1121 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
#line 7394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1126 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
#line 7403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1133 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1134 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1138 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1139 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1140 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1162 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_list(l, (yyvsp[0].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
#line 7445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1173 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[0].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
#line 7455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1190 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_list(l, (yyvsp[0].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
#line 7466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1199 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1200 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-1].l), (yyvsp[0].sym)); }
#line 7478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1204 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1205 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-1].l), (yyvsp[0].sym)); }
#line 7490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1209 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 7496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1210 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[0].l_val)); }
#line 7502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1211 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1215 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 7514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1216 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
#line 7520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1217 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[0].l_val)));  }
#line 7526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1218 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[0].sym)));  }
#line 7532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1219 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1223 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[0].l_val)); }
#line 7544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1224 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[0].l_val)); }
#line 7550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1225 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
#line 7556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1226 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[0].l_val)); }
#line 7562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1227 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
#line 7568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1228 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[0].l_val)); }
#line 7574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1229 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
#line 7580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1230 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
#line 7586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1238 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-5].sval));
	  append_int(l, (yyvsp[-7].i_val));
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
#line 7597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1247 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = hash_idx; }
#line 7603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1248 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ordered_idx; }
#line 7609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1249 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imprints_idx; }
#line 7615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1250 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = hash_idx; }
#line 7621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1271 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval));
	  append_int(l, (yyvsp[0].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
#line 7630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1276 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-8].sval));
	  append_string(l, (yyvsp[-4].sval));
	  append_string(l, (yyvsp[-2].sval));
	  append_string(l, (yyvsp[0].sval));
	  append_int(l, (yyvsp[-6].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
#line 7642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1286 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
#line 7648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1287 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
#line 7654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1288 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
#line 7660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1292 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1293 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_string(L(), (yyvsp[-1].sval)), (yyvsp[0].sval)); }
#line 7672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1298 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, SQL_PERSIST);
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1309 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
      dlist *l = L();
      append_list(l, (yyvsp[-3].l));
      append_symbol(l, (yyvsp[0].sym));
      (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE_LOADER, l);
    }
#line 7698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1316 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_STREAM;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1326 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_MERGE_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1336 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_REPLICA_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1349 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_REMOTE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, commit_action);
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1359 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, (yyvsp[-4].i_val));
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  if ((yyvsp[-4].i_val) != SQL_PERSIST)
		commit_action = (yyvsp[0].i_val);
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1373 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 7776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1374 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 7782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1375 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 7788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1376 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 7794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1377 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
#line 7800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1378 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
#line 7806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1382 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_COMMIT; }
#line 7812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1383 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_DELETE; }
#line 7818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1384 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_PRESERVE; }
#line 7824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1385 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_DROP; }
#line 7830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1389 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[-1].l)); }
#line 7836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1390 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[0].l)); }
#line 7842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1398 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[-3].l));
			  append_symbol((yyval.l), (yyvsp[-1].sym)); 
			  append_int((yyval.l), (yyvsp[0].i_val)); }
#line 7850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1404 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 7856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1405 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1406 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 7868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1411 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1413 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 7880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1420 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1421 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 7892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1426 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			dlist *l = L();
			append_string(l, (yyvsp[-2].sval));
			append_type(l, &(yyvsp[-1].type));
			append_list(l, (yyvsp[0].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
#line 7904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1434 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
			if ((yyvsp[0].i_val) == 1)
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
			append_string(l, (yyvsp[-1].sval));
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
#line 7958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1486 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1492 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 7970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1494 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym) ); }
#line 7976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1500 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-5].sval) );
	  append_list(l, (yyvsp[-1].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
#line 7985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1508 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 7991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1510 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 7997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1516 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[0].sym)); }
#line 8003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1520 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 8009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1526 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_symbol(l, (yyvsp[0].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
#line 8018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1534 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
		if (!(yyvsp[0].l))
			(yyvsp[0].l) = L();
		sql_find_subtype(&it, "int", 32, 0);
    		append_symbol((yyvsp[0].l), _symbol_create_list(SQL_TYPE, append_type(L(),&it)));

		/* finally all the options */
		append_list(l, (yyvsp[0].l));
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
#line 8051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1563 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1600 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1601 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 8102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1608 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_symbol(l, (yyvsp[0].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
#line 8111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1617 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 8117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1618 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 8123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1622 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1623 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1624 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 8141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1625 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 3; }
#line 8147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1626 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 4; }
#line 8153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1630 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ((yyvsp[0].i_val) << 8); }
#line 8159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1634 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1638 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
#line 8171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1639 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1640 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1641 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val) + (yyvsp[0].i_val); }
#line 8189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1642 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val) + (yyvsp[0].i_val); }
#line 8195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1646 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1647 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1648 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 8213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1649 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1653 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1654 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1658 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
#line 8237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1659 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
#line 8243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1660 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
#line 8249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1661 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
#line 8255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1664 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, (yyvsp[-3].l) );
			  append_list(l, (yyvsp[-2].l) );
			  append_int(l, (yyvsp[-1].i_val) );
			  append_int(l, (yyvsp[0].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
#line 8266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1677 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[0].l)); }
#line 8272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1679 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[0].l)); }
#line 8278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1683 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, (yyvsp[-3].l) );
			  append_list(l, (yyvsp[-5].l) );
			  append_list(l, (yyvsp[-2].l) );
			  append_int(l, (yyvsp[-1].i_val) );
			  append_int(l, (yyvsp[0].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
#line 8290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1695 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 8296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1700 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 8302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1702 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string( (yyvsp[-2].l), (yyvsp[0].sval) ); }
#line 8308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1706 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[0].l) ); }
#line 8314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1711 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {  dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, (yyvsp[0].bval));
	  append_int(l, TRUE);	/* persistent view */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
#line 8327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1723 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 8333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1732 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 8339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1733 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 8345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1737 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1742 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 8357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1747 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				append_list(l, (yyvsp[-3].l));
				append_string(l, (yyvsp[0].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
#line 8366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1754 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval)); }
#line 8372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1769 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-8].l));
				append_list(f, (yyvsp[-6].l));
				append_symbol(f, (yyvsp[-3].sym));
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_MAL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1782 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l));
				append_symbol(f, (yyvsp[-1].sym));
				append_list(f, NULL);
				append_list(f, (yyvsp[0].l));
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_SQL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1794 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[-1].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p')
            {
                if (strcasecmp((yyvsp[-1].sval), "PYTHON_MAP") == 0)
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

			append_list(f, (yyvsp[-8].l));
			append_list(f, (yyvsp[-6].l));
			append_symbol(f, (yyvsp[-3].sym));
			append_list(f, NULL); 
			append_list(f, append_string(L(), (yyvsp[0].sval)));
			append_int(f, F_FUNC);
			append_int(f, lang);
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1828 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l)); 
				/* no returns - use OID */
				append_symbol(f, NULL); 
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_FILT);
				append_int(f, FUNC_LANG_MAL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1842 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-8].l));
				append_list(f, (yyvsp[-6].l));
				append_symbol(f, (yyvsp[-3].sym));
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_AGGR);
				append_int(f, FUNC_LANG_MAL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1854 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[-1].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p')
            {
                if (strcasecmp((yyvsp[-1].sval), "PYTHON_MAP") == 0)
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

			append_list(f, (yyvsp[-8].l));
			append_list(f, (yyvsp[-6].l));
			append_symbol(f, (yyvsp[-3].sym));
			append_list(f, NULL);
			append_list(f, append_string(L(), (yyvsp[0].sval)));
			append_int(f, F_AGGR);
			append_int(f, lang);
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1889 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_MAL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1901 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-4].l));
				append_list(f, (yyvsp[-2].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, NULL); 
				append_list(f, (yyvsp[0].l));
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_SQL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1912 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[-1].sval);
			/* other languages here if we ever get to it */
			if (l == 'P' || l == 'p')
            {
                lang = FUNC_LANG_PY;
            }
			else
				yyerror(m, sql_message("Language name P(ython) expected, received '%c'", l));

			append_list(f, (yyvsp[-6].l));
			append_list(f, (yyvsp[-4].l));
			append_symbol(f, NULL);
			append_list(f, NULL); 
			append_list(f, append_string(L(), (yyvsp[0].sval)));
			append_int(f, F_LOADER);
			append_int(f, lang);
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1936 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[0].sym)); }
#line 8560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1940 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-3].l),(yyvsp[-2].sym)); }
#line 8566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1944 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-3].l),(yyvsp[-2].sym)); }
#line 8572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1959 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 8578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1961 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l),(yyvsp[-1].sym));}
#line 8584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1965 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 8590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1967 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l),(yyvsp[-1].sym));}
#line 8596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 2015 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 8602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2019 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[0].sym));}
#line 8608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2024 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L(); 
		  append_list( l, (yyvsp[-3].l));
		  append_list( l, (yyvsp[-1].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
#line 8619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2035 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = L();}
#line 8625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2036 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 8631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2038 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 8637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2043 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[0].sym)); }
#line 8643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2050 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[-1].sym)); }
#line 8649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2055 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[-4].sym)),(yyvsp[-3].l)),(yyvsp[-2].l))); }
#line 8659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2061 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[-3].l)),(yyvsp[-2].l))); }
#line 8668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2069 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].l))); }
#line 8677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2077 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 8683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2079 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 8689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2084 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].l))); }
#line 8698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2092 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 8704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2094 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 8710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2098 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2099 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 8722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2109 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_list(l, (yyvsp[-3].l));
		  append_symbol(l, (yyvsp[-2].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
#line 8733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2120 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 8739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2122 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[0].l)); }
#line 8745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2125 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_list(l, (yyvsp[-1].l));
		  append_symbol(l, (yyvsp[0].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
#line 8756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2139 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l;
		  char *label = (yyvsp[-7].sval)?(yyvsp[-7].sval):(yyvsp[0].sval);
		  if ((yyvsp[-7].sval) && (yyvsp[0].sval) && strcmp((yyvsp[-7].sval), (yyvsp[0].sval)) != 0) {
			(yyval.sym) = NULL;
			yyerror(m, "WHILE: labels should match");
			YYABORT;
		  }
 		  l = L();
		  append_symbol(l, (yyvsp[-5].sym)); /* condition */
		  append_list(l, (yyvsp[-3].l));	/* statements */
		  append_string(l, label);
		  (yyval.sym) = _symbol_create_list(SQL_WHILE, l);
		}
#line 8774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2155 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 8780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2160 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 8786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2166 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[-1].sval));
			  	  append_type((yyval.l), &(yyvsp[0].type));
				}
#line 8795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2171 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
				  append_string((yyval.l), (yyvsp[-1].sval));
			  	  append_type((yyval.l), &(yyvsp[0].type));
				}
#line 8804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2179 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[-1].l)); }
#line 8810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2181 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 8816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2186 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
#line 8825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2190 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2195 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *p = L();
			  append_string(p, (yyvsp[-1].sval));
			  append_type(p, &(yyvsp[0].type));
			  (yyval.l) = append_list((yyvsp[-3].l), p); }
#line 8840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2200 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[-1].sval));
			  append_type(p, &(yyvsp[0].type));
			  (yyval.l) = append_list(l, p); }
#line 8850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 2250 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-6].l));
	  append_int(l, (yyvsp[-5].i_val));
	  append_symbol(l, (yyvsp[-4].sym));
	  append_string(l, (yyvsp[-2].sval));
	  append_list(l, (yyvsp[-1].l));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list(SQL_CREATE_TRIGGER, l); 
	}
#line 8864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 2262 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 2263 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 2267 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
#line 8882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 2268 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
#line 8888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 2269 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
#line 8894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 2270 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[0].l)); }
#line 8900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 2274 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 2275 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 8912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 2279 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 8918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 2281 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-1].l), (yyvsp[0].l)); }
#line 8924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 2286 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[0].sval)); }
#line 8930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2287 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[0].sval)); }
#line 8936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2288 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[0].sval)); }
#line 8942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2289 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[0].sval)); }
#line 8948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2304 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[-2].i_val));
	  append_symbol((yyval.l), (yyvsp[-1].sym));
	  append_list((yyval.l), (yyvsp[0].l));
	}
#line 8958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2311 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2312 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2316 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2317 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2321 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 8988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 2322 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 8994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 2327 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 9000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 2330 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 2335 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
#line 9016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 2341 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
#line 9026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 2347 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
#line 9036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 2353 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
#line 9046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 2359 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_LOADER );
	  (yyval.l) = l; }
#line 9056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2368 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
#line 9065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2373 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = (yyvsp[-1].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2378 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 2386 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 2394 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2402 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2410 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_LOADER );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 2418 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
#line 9143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 2423 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
#line 9152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 2427 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[0].sval) ); }
#line 9158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 2428 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[0].sval) ); }
#line 9164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 2429 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[0].l) ); }
#line 9170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2430 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, (yyvsp[0].l) ); }
#line 9176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2434 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = NULL;}
#line 9182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 2435 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = (yyvsp[-1].l);}
#line 9188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 2436 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = L(); }
#line 9194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 2440 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_type(l, &(yyvsp[0].type) );
				  (yyval.l)= l; }
#line 9202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 2443 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { append_type((yyvsp[0].l), &(yyvsp[-2].type));
				  (yyval.l) = (yyvsp[0].l); }
#line 9209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 2448 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 2449 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 2450 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 2469 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	  (yyval.sym) = (yyvsp[0].sym);
	  m->type = Q_TRANS;					}
#line 9235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 2476 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[0].bval));  }
#line 9241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 2478 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[0].sval)); }
#line 9247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 2480 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[0].sval)); }
#line 9253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 2482 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[-1].bval)), (yyvsp[0].sval) )); }
#line 9261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 2486 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[0].i_val)); }
#line 9267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 2488 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[0].i_val)); }
#line 9273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 2490 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[0].i_val)); }
#line 9279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 2494 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_none; }
#line 9285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 2500 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 9291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 2502 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ((yyvsp[-2].i_val) | (yyvsp[0].i_val)); }
#line 9297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 2507 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_readonly; }
#line 9303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 2508 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_writable; }
#line 9309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 2509 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_serializable; }
#line 9315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 2510 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_none; /* not supported */ }
#line 9321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2521 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2522 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2526 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 9339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2527 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2528 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2532 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2533 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 9363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2538 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-10].l));
	  append_list(l, (yyvsp[-9].l));
	  append_list(l, (yyvsp[-7].l));
	  append_list(l, (yyvsp[-6].l));
	  append_list(l, (yyvsp[-5].l));
	  append_list(l, (yyvsp[-12].l));
	  append_string(l, (yyvsp[-4].sval));
	  append_int(l, (yyvsp[-3].bval));
	  append_int(l, (yyvsp[-2].bval));
	  append_int(l, (yyvsp[-1].bval));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
#line 9381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2552 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-9].l));
	  append_list(l, (yyvsp[-8].l));
	  append_list(l, NULL);
	  append_list(l, (yyvsp[-5].l));
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-11].l));
	  append_string(l, (yyvsp[-3].sval));
	  append_int(l, (yyvsp[-2].bval));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].bval));
	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_COPYFROM, l ); }
#line 9399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 2566 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_COPYLOADER, l ); }
#line 9408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 2571 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  if ((yyvsp[-7].l) != NULL) {
	  	yyerror(m, "COPY INTO: cannot pass number of records when using binary COPY INTO");
		YYABORT;
	  }
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[0].bval));
	  (yyval.sym) = _symbol_create_list( SQL_BINCOPYFROM, l ); }
#line 9423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 2582 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_string(l, (yyvsp[-2].sval));
	  append_list(l, (yyvsp[-1].l));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
#line 9434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 2589 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[-1].l));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
#line 9445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 2600 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 2601 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2606 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(L(), (yyvsp[0].l_val)); }
#line 9463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2608 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng((yyvsp[-2].l), (yyvsp[0].l_val)); }
#line 9469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2613 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 2614 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 2618 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 9487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 2619 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-2].l), (yyvsp[0].l)); }
#line 9493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 2624 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_string(l, (yyvsp[0].sval) );
			  (yyval.l) = l; }
#line 9501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 2628 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_string(l, (yyvsp[-1].sval) );
			  append_string(l, (yyvsp[0].sval) );
			  (yyval.l) = l; }
#line 9510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 2636 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
#line 9519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 2641 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[0].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
#line 9528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 2646 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[-2].sval));
				  append_string(l, (yyvsp[0].sval));
				  (yyval.l) = l; }
#line 9537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 2651 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[-4].sval));
				  append_string(l, (yyvsp[-2].sval));
				  append_string(l, sql2str((yyvsp[0].sval)));
				  (yyval.l) = l; }
#line 9547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 2659 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 2660 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 2664 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 2665 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-1].l_val)), 0); }
#line 9571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 2666 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[0].l_val)); }
#line 9577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 2668 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-3].l_val)), (yyvsp[-1].l_val)); }
#line 9583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 2670 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-3].l_val)), (yyvsp[0].l_val)); }
#line 9589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 2674 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 2675 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 9601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 2679 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 2680 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 9613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 2684 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 2685 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 9625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 2689 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 9631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 2690 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 2694 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 9643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 2695 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 2699 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 9655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 2701 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 9661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 2707 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
#line 9670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 2716 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
#line 9681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 2758 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
#line 9691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 2766 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
#line 9701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 2775 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
#line 9707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 2777 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
#line 9713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 2779 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[0].l)); }
#line 9719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 2785 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[-1].l)); }
#line 9725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 2787 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-4].l), (yyvsp[-1].l)); }
#line 9731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 2791 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 9737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 2793 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 9743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 2797 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 9749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 2799 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 9755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 2804 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 9772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 2833 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 2834 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 2835 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 9790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 2839 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 9796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 2841 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 9802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 2846 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym) );
	  append_string(l, (yyvsp[-2].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
#line 9811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 2851 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym));
	  append_list(l, (yyvsp[-2].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
#line 9820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 2858 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 9826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 2859 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 9832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 2866 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 9838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 2868 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
#line 9847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 2873 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
#line 9859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 2881 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[-3].i_val));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
#line 9871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 2889 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[-2].i_val));
	  append_symbol(l, (yyvsp[0].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
#line 9883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 2899 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 2900 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 2901 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1 + (yyvsp[-1].i_val); }
#line 9901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 2905 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 2906 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 2910 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 2911 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 2912 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 9931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 2916 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 9937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 2918 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[0].l)); }
#line 9943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 2942 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[-1].l));
	  	append_symbol(l, (yyvsp[0].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
#line 9954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 2951 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 9960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 2952 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 9966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 2957 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[-5].sval)));
	  append_list(l, (yyvsp[-4].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
#line 9979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 2980 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = newSelectNode( SA, (yyvsp[-2].bval), (yyvsp[-1].l), NULL,
		(yyvsp[0].l)->h->data.sym,
		(yyvsp[0].l)->h->next->data.sym,
		(yyvsp[0].l)->h->next->next->data.sym,
		(yyvsp[0].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
#line 9991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 2991 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = newSelectNode( SA, (yyvsp[-4].bval), (yyvsp[-3].l), (yyvsp[-1].l),
		(yyvsp[0].l)->h->data.sym,
		(yyvsp[0].l)->h->next->data.sym,
		(yyvsp[0].l)->h->next->next->data.sym,
		(yyvsp[0].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
#line 10003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 3002 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
	  (yyval.sym) = (yyvsp[-4].sym);
	  if ((yyvsp[-3].sym) || (yyvsp[-2].sym) || (yyvsp[-1].sym) || (yyvsp[0].sym)) {
	  	if ((yyvsp[-4].sym) != NULL &&
		    ((yyvsp[-4].sym)->token == SQL_SELECT ||
		     (yyvsp[-4].sym)->token == SQL_UNION  ||
		     (yyvsp[-4].sym)->token == SQL_EXCEPT ||
		     (yyvsp[-4].sym)->token == SQL_INTERSECT)) {
			if ((yyvsp[-4].sym)->token == SQL_SELECT) {
	 			SelectNode *s = (SelectNode*)(yyvsp[-4].sym);
	
	  			s -> orderby = (yyvsp[-3].sym);
	  			s -> limit = (yyvsp[-2].sym);
	  			s -> offset = (yyvsp[-1].sym);
	  			s -> sample = (yyvsp[0].sym);
			} else { /* Add extra select * from .. in case of UNION, EXCEPT, INTERSECT */
				(yyval.sym) = newSelectNode( 
					SA, 0, 
					append_symbol(L(), _symbol_create_list(SQL_TABLE, append_string(append_string(L(),NULL),NULL))), NULL,
					_symbol_create_list( SQL_FROM, append_symbol(L(), (yyvsp[-4].sym))), NULL, NULL, NULL, (yyvsp[-3].sym), _symbol_create_list(SQL_NAME, append_list(append_string(L(),"inner"),NULL)), (yyvsp[-2].sym), (yyvsp[-1].sym), (yyvsp[0].sym));
			}
	  	} else {
			yyerror(m, "missing SELECT operator");
			YYABORT;
	  	}
	 } 
	}
#line 10035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 3032 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 10041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 3034 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 10047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 3044 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
#line 10058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 3053 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
#line 10069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 3062 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
#line 10080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 3068 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 3073 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 3074 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 3075 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 3080 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 10110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 3082 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 10116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 3084 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 3094 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[-3].sym));
	  append_symbol((yyval.l), (yyvsp[-2].sym));
	  append_symbol((yyval.l), (yyvsp[-1].sym));
	  append_symbol((yyval.l), (yyvsp[0].sym)); }
#line 10132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 3102 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 3103 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[0].l)); }
#line 10144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 3107 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 3109 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 3113 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_list(l, (yyvsp[-1].l));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 3118 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[-1].sym));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  	  	  append_int(l, 0);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
#line 10175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 3124 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[-1].sym));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  	  	  append_int(l, 1);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
#line 10185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 3130 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  (yyval.sym) = (yyvsp[-1].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[-1].sym);
				  	sn->name = (yyvsp[0].sym);
				  } else {
				  	append_symbol((yyvsp[-1].sym)->data.lval, (yyvsp[0].sym));
				  }
				}
#line 10199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 3140 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  (yyval.sym) = (yyvsp[-1].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[-1].sym);
				  	sn->name = (yyvsp[0].sym);
					sn->lateral = 1;
				  } else {
				  	append_symbol((yyvsp[-1].sym)->data.lval, (yyvsp[0].sym));
	  				append_int((yyvsp[-1].sym)->data.lval, 1);
				  }
				}
#line 10215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 3152 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
#line 10224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 3156 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym);
				  append_symbol((yyvsp[0].sym)->data.lval, NULL); }
#line 10231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 3160 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->caching = 0; }
#line 10237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 3162 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[-2].sym));
		append_symbol(op, (yyvsp[0].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
#line 10249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 3173 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[-3].sval));
		  	  	  append_list(l, (yyvsp[-1].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 3178 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[0].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 3183 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[-3].sval));
		  	  	  append_list(l, (yyvsp[-1].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 3188 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[0].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 3195 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 3196 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 3200 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 3201 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[0].l) );}
#line 10309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 3205 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[0].l))); }
#line 10316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 3208 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[0].l))); }
#line 10323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 3213 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 3214 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 3220 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
#line 10344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 3224 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 3229 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
#line 10359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 3233 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 3237 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 3239 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[0].l)); }
#line 10377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 3243 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 3244 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val))); 
			}
#line 10392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 3248 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 3252 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 3253 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val))); 
			}
#line 10413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 3257 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 3261 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 3262 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val)));
			}
#line 10434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 3266 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[0].sval),NULL)));
			}
#line 10443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 3270 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 3274 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 3276 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 10461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 3281 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, (yyvsp[0].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
#line 10470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 3289 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 3290 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 3291 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 3308 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym);

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
			(yyval.sym) = _symbol_create_symbol(SQL_NOT, (yyvsp[0].sym)); }
#line 10509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 3324 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 3329 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-2].sym));
		  append_string(l, (yyvsp[-1].sval));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 10526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 3336 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-2].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 10537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 3346 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_int(l, (yyvsp[-3].i_val));
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
#line 10548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 3353 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_int(l, (yyvsp[-3].i_val));
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
#line 10559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 3362 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 3363 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 3364 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 10577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 3369 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 10588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 3376 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 10599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 3383 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 10610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 3390 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 10621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 3400 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
#line 10629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 3404 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { const char *s = sql2str((yyvsp[0].sval));
	  if (_strlen(s) != 1) {
		yyerror(m, "\b22025!ESCAPE must be one character");
		(yyval.sym) = NULL;
		YYABORT;
	  } else {
		dlist *l = L();
		append_symbol(l, (yyvsp[-2].sym));
		append_string(l, s);
		(yyval.sym) = _symbol_create_list(SQL_ESCAPE, l);
	  }
	}
#line 10646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 3419 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[-3].sym) );}
#line 10652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 3420 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[-2].sym) ); }
#line 10658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 3425 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-4].sym));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
#line 10668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 3431 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-4].sym));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
#line 10678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 3437 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-5].l));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
#line 10687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 3442 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-5].l));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
#line 10696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 3450 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 10702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 3452 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 3458 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_string(l, (yyvsp[-2].sval));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, (yyvsp[-1].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 10719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 3465 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, (yyvsp[-1].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 10730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 3474 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 3475 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 3476 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 10748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 3480 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[0].sym) ); }
#line 10754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 3484 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 3485 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym));  }
#line 10766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 3489 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 3494 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-2].l));
		  append_list(l, (yyvsp[-1].l));
		  append_list(l, (yyvsp[0].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
#line 10782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 3502 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 3504 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[-1].l)); }
#line 10794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 3506 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 3513 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 3520 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 3527 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 3534 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 3541 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3548 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3555 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[-2].sym));
			  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3562 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3569 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3576 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3583 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3590 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 3596 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 3603 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 3610 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 3617 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 3624 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 3631 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 3638 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 3645 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
#line 11018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 3651 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 3658 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 3665 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 3672 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 3679 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 3681 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
 			  (yyval.sym) = NULL;
			  assert((yyvsp[0].sym)->token != SQL_COLUMN || (yyvsp[0].sym)->data.lval->h->type != type_lng);
			  if ((yyvsp[0].sym)->token == SQL_COLUMN && (yyvsp[0].sym)->data.lval->h->type == type_int) {
				atom *a = sql_bind_arg(m, (yyvsp[0].sym)->data.lval->h->data.i_val);
				if (!atom_neg(a)) {
					(yyval.sym) = (yyvsp[0].sym);
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
	  		  	append_symbol(l, (yyvsp[0].sym));
	  		  	(yyval.sym) = _symbol_create_list( SQL_UNOP, l ); 
			  }
			}
#line 11094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 3702 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 3706 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3712 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
#line 11113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3714 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
#line 11120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3717 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[0].l)); }
#line 11126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 3721 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[0].l)); }
#line 11132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 3733 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
#line 11143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 3803 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[-4].sym)), (yyvsp[-1].l))); }
#line 11150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 3808 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[-2].l) ); }
#line 11156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 3814 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[-2].sym)), (yyvsp[-1].sym)), (yyvsp[0].sym)); }
#line 11162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 3818 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 3820 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[0].l) ); }
#line 11174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 3824 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 3826 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[0].l) ); }
#line 11186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 3830 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 3832 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[-1].l), (yyvsp[-2].i_val)), (yyvsp[0].i_val))); }
#line 11198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 3836 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = FRAME_ROWS; }
#line 11204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 3837 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = FRAME_RANGE; }
#line 11210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 700:
#line 3841 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[0].sym)), _symbol_create_int(SQL_FRAME, -1)); }
#line 11216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 701:
#line 3842 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 11222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 3846 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
#line 11228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 703:
#line 3847 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 704:
#line 3848 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
#line 11240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 705:
#line 3852 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 706:
#line 3857 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[-2].sym)), (yyvsp[0].sym)); }
#line 11252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 707:
#line 3861 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
#line 11258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 708:
#line 3862 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 709:
#line 3863 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
#line 11270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 710:
#line 3867 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 711:
#line 3871 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_NONE; }
#line 11282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 712:
#line 3872 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
#line 11288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 713:
#line 3873 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_GROUP; }
#line 11294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 714:
#line 3874 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_TIES; }
#line 11300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 715:
#line 3875 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
#line 11306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 716:
#line 3879 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[0].sval) ); }
#line 11312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 717:
#line 3884 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_list(l, (yyvsp[-2].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 3888 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_list(l, (yyvsp[-3].l));
	  if (dlist_length((yyvsp[-1].l)) == 1) {
  	  	append_symbol(l, (yyvsp[-1].l)->h->data.sym);
	  	(yyval.sym) = _symbol_create_list( SQL_UNOP, l ); 
	  } else if (dlist_length((yyvsp[-1].l)) == 2) {
  	  	append_symbol(l, (yyvsp[-1].l)->h->data.sym);
  	  	append_symbol(l, (yyvsp[-1].l)->h->next->data.sym);
	  	(yyval.sym) = _symbol_create_list( SQL_BINOP, l ); 
	  } else {
  	  	append_list(l, (yyvsp[-1].l));
	  	(yyval.sym) = _symbol_create_list( SQL_NOP, l ); 
	  }
	}
#line 11339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 719:
#line 3915 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 720:
#line 3916 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 721:
#line 3921 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 11358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 3922 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "left"); }
#line 11364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 723:
#line 3923 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "right"); }
#line 11370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 724:
#line 3924 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "insert"); }
#line 11376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 725:
#line 3929 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[-3].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
#line 11387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 726:
#line 3936 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 727:
#line 3941 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 728:
#line 3946 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 729:
#line 3951 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 730:
#line 3956 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 731:
#line 3963 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 11438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 732:
#line 3964 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 11444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 733:
#line 3969 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 11458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 734:
#line 3979 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 11472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 735:
#line 3989 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 736:
#line 3996 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 737:
#line 4003 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 738:
#line 4010 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[-2].sym));
  		  	  append_symbol(l, (yyvsp[0].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 739:
#line 4017 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "splitpart")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 11530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 740:
#line 4029 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 11536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 741:
#line 4031 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 11542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 742:
#line 4036 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 11551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 743:
#line 4041 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_string(l, (yyvsp[-2].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 11560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 744:
#line 4046 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[-2].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 11569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 745:
#line 4051 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[-1].sym));
  		  append_string(l, (yyvsp[0].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
#line 11578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 746:
#line 4058 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 11584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 747:
#line 4059 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 11590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 748:
#line 4064 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
	  if (m->emode == m_normal && m->caching) { 
	  	/* replace by argument */
	  	AtomNode *an = (AtomNode*)(yyvsp[0].sym);
	
	  	sql_add_arg( m, an->a);
		an->a = NULL;
	  	/* we miss use SQL_COLUMN also for param's, maybe
	     		change SQL_COLUMN to SQL_IDENT */
 	  	(yyval.sym) = _symbol_create_list( SQL_COLUMN,
			append_int(L(), m->argc-1));
	   } else {
	  	AtomNode *an = (AtomNode*)(yyvsp[0].sym);
		atom *a = an->a; 
		an->a = atom_dup(SA, a); 
		(yyval.sym) = (yyvsp[0].sym);
	   }
	}
#line 11613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 749:
#line 4085 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 750:
#line 4086 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 751:
#line 4091 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 752:
#line 4092 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 753:
#line 4097 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 754:
#line 4098 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 755:
#line 4105 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-3].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 756:
#line 4111 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-5].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 757:
#line 4117 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-4].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 758:
#line 4123 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-4].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 759:
#line 4129 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-3].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 760:
#line 4135 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-5].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-3].sym));
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 762:
#line 4145 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 11719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 763:
#line 4146 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = -1; }
#line 11725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 764:
#line 4147 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 11731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 765:
#line 4151 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 11737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 766:
#line 4152 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 11743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 767:
#line 4163 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val)+1; }
#line 11749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 768:
#line 4165 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0+1; }
#line 11755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 769:
#line 4169 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val)+1; }
#line 11761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 770:
#line 4171 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 6+1; }
#line 11767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 771:
#line 4175 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
#line 11773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 772:
#line 4177 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[-1].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[-1].i_val), 0); 
			}
#line 11783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 773:
#line 4183 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[-1].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[-1].i_val), 0); 
			}
#line 11793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 774:
#line 4191 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iyear; }
#line 11799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 775:
#line 4192 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imonth; }
#line 11805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 776:
#line 4193 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iday; }
#line 11811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 777:
#line 4194 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ihour; }
#line 11817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 778:
#line 4195 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imin; }
#line 11823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 780:
#line 4200 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = isec; }
#line 11829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 781:
#line 4205 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[-1].i_val)), (yyvsp[0].i_val)-1);  }
#line 11836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 782:
#line 4211 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[0].i_val)), 0);  }
#line 11843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 783:
#line 4214 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[0].i_val)-1);  }
#line 11850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 784:
#line 4220 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[-1].i_val)), (yyvsp[0].i_val)-1);  }
#line 11857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 785:
#line 4223 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[0].i_val)-1);  }
#line 11864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 786:
#line 4229 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[-2].l)), (yyvsp[0].l) ); }
#line 11871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 787:
#line 4232 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) =  append_list( L(), (yyvsp[0].l)); }
#line 11877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 788:
#line 4236 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		int sk, ek, sp, ep;
	  	int tpe;

		(yyval.type).type = NULL;
	  	if ( (tpe = parse_interval_qualifier( m, (yyvsp[0].l), &sk, &ek, &sp, &ep )) < 0){
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
#line 11899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 792:
#line 4262 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { const char *s = sql2str((yyvsp[0].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
#line 11909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 793:
#line 4268 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int len = _strlen((yyvsp[0].sval)), i = 2, err = 0;
		  char * hexa = (yyvsp[0].sval);
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
			char *msg = sql_message("\b22003!invalid hexadecimal number or hexadecimal too large (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
			(yyval.sym) = _newAtomNode( atom_int(SA, &t, res));
		  }
		}
#line 11978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 794:
#line 4333 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int err = 0, len = sizeof(lng);
		  lng value, *p = &value;
		  sql_subtype t;

		  lngFromStr((yyvsp[0].sval), &len, &p);
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
			char *msg = sql_message("\b22003!OID value too large or not a number (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode( atom_int(SA, &t, value));
		  }
		}
#line 12013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 795:
#line 4364 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int digits = _strlen((yyvsp[0].sval)), err = 0;
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
		  hgeFromStr((yyvsp[0].sval), &len, &p);
		  if (value == hge_nil)
		  	err = 2;
#else
		  lngFromStr((yyvsp[0].sval), &len, &p);
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
			char *msg = sql_message("\b22003!integer value too large or not a number (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode( atom_int(SA, &t, value));
		  }
		}
#line 12078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 796:
#line 4425 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strip_extra_zeros(sa_strdup(SA, (yyvsp[0].sval)));
		  char *dot = strchr(s, '.');
		  int digits = _strlen(s) - 1;
		  int scale = digits - (int) (dot-s);
		  sql_subtype t;

		  if (digits <= 0)
			digits = 1;
		  if (digits <= MAX_DEC_DIGITS) {
		  	double val = strtod((yyvsp[0].sval),NULL);
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
			char *p = (yyvsp[0].sval);
			double val;

			errno = 0;
			val = strtod((yyvsp[0].sval),&p);
			if (p == (yyvsp[0].sval) || val == dbl_nil || (errno == ERANGE && (val < -1 || val > 1))) {
				char *msg = sql_message("\b22003!double value too large or not a number (%s)", (yyvsp[0].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.sym) = NULL;
				YYABORT;
			}
		  	sql_find_subtype(&t, "double", 51, 0 );
		  	(yyval.sym) = _newAtomNode(atom_float(SA, &t, val));
		   }
		}
#line 12121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 797:
#line 4464 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
  		  char *p = (yyvsp[0].sval);
		  double val;

		  errno = 0;
 		  val = strtod((yyvsp[0].sval),&p);
		  if (p == (yyvsp[0].sval) || val == dbl_nil || (errno == ERANGE && (val < -1 || val > 1))) {
			char *msg = sql_message("\b22003!double value too large or not a number (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  }
		  sql_find_subtype(&t, "double", 51, 0 );
		  (yyval.sym) = _newAtomNode(atom_float(SA, &t, val)); }
#line 12142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 798:
#line 4481 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a;
		  int r;

 		  r = sql_find_subtype(&t, "date", 0, 0 );
		  if (!r || (a = atom_general(SA, &t, (yyvsp[0].sval))) == NULL) {
			char *msg = sql_message("\b22007!incorrect date value (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
#line 12162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 799:
#line 4497 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a;
		  int r;

	          r = sql_find_subtype(&t, ((yyvsp[-1].bval))?"timetz":"time", (yyvsp[-2].i_val), 0);
		  if (!r || (a = atom_general(SA, &t, (yyvsp[0].sval))) == NULL) {
			char *msg = sql_message("\b22007!incorrect time value (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
#line 12182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 800:
#line 4513 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a;
		  int r;

 		  r = sql_find_subtype(&t, ((yyvsp[-1].bval))?"timestamptz":"timestamp",(yyvsp[-2].i_val),0);
		  if (!r || (a = atom_general(SA, &t, (yyvsp[0].sval))) == NULL) {
			char *msg = sql_message("\b22007!incorrect timestamp value (%s)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sym) = NULL;
			YYABORT;
		  } else {
		  	(yyval.sym) = _newAtomNode(a);
		} }
#line 12202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 802:
#line 4530 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a= 0;
		  int r;

		  (yyval.sym) = NULL;
 		  r = sql_find_subtype(&t, "blob", 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[0].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message("\b22M28!incorrect blob %s", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
#line 12223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 803:
#line 4547 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  atom *a= 0;
		  int r;

		  (yyval.sym) = NULL;
		  r = sql_find_subtype(&t, (yyvsp[-1].sval), 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[0].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message("\b22000!incorrect %s %s", (yyvsp[-1].sval), (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
#line 12244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 804:
#line 4564 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t; 
		  atom *a = 0;
		  int r;

		  (yyval.sym) = NULL;
		  r = sql_find_subtype(&t, (yyvsp[-1].sval), 0, 0);
	          if (r && (a = atom_general(SA, &t, (yyvsp[0].sval))) != NULL)
			(yyval.sym) = _newAtomNode(a);
		  if (!(yyval.sym)) {
			char *msg = sql_message("\b22000!incorrect %s %s", (yyvsp[-1].sval), (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
#line 12265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 805:
#line 4581 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  sql_type *t = mvc_bind_type(m, (yyvsp[-1].sval));
		  atom *a;

		  (yyval.sym) = NULL;
		  if (t) {
		  	sql_subtype tpe;
			sql_init_subtype(&tpe, t, 0, 0);
			a = atom_general(SA, &tpe, (yyvsp[0].sval));
			if (a)
				(yyval.sym) = _newAtomNode(a);
		  }
		  if (!t || !(yyval.sym)) {
			char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[-1].sval));

			yyerror(m, msg);
			_DELETE(msg);
			YYABORT;
		  }
		}
#line 12290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 806:
#line 4602 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
#line 12298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 807:
#line 4606 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
#line 12306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 808:
#line 4612 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		sql_subtype t;
		int sk, ek, sp, ep, tpe;
	  	lng i = 0;
		int r = 0;

		(yyval.sym) = NULL;
	  	if ( (tpe = parse_interval_qualifier( m, (yyvsp[0].l), &sk, &ek, &sp, &ep )) < 0){
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
	  	if (!r || (tpe = parse_interval( m, (yyvsp[-2].i_val), (yyvsp[-1].sval), sk, ek, sp, ep, &i)) < 0) { 
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
#line 12351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 809:
#line 4657 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 12357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 810:
#line 4658 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  m->scanner.schema = (yyvsp[-2].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 811:
#line 4662 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  m->scanner.schema = (yyvsp[-4].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[-4].sval)), 
						(yyvsp[-2].sval)), 
					(yyvsp[0].sval))
				;}
#line 12379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 812:
#line 4673 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				L(), (yyvsp[0].sval)); }
#line 12386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 813:
#line 4676 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 814:
#line 4681 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[-4].sval)), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 815:
#line 4689 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_type(l, &(yyvsp[-1].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
#line 12412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 816:
#line 4695 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_type(l, &(yyvsp[-1].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
#line 12421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 818:
#line 4707 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[-3].sym)), (yyvsp[-1].sym))); }
#line 12430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 819:
#line 4712 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[-1].l)); }
#line 12436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 820:
#line 4714 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[-3].sym)),(yyvsp[-2].l)),(yyvsp[-1].sym))); }
#line 12446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 821:
#line 4720 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[-2].l)),(yyvsp[-1].sym))); }
#line 12455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 822:
#line 4728 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 12461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 823:
#line 4730 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 12467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 824:
#line 4735 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[-2].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[0].sym));
			}
#line 12475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 825:
#line 4739 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 12481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 826:
#line 4745 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].sym))); }
#line 12490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 827:
#line 4753 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 12496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 828:
#line 4755 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 12502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 829:
#line 4760 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].sym))); }
#line 12511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 830:
#line 4768 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 12517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 831:
#line 4770 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 12523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 832:
#line 4774 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 12529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 833:
#line 4775 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 12535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 835:
#line 4785 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
#line 12547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 836:
#line 4796 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l_val) = (yyvsp[0].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
#line 12559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 837:
#line 4806 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l_val) = (yyvsp[0].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
#line 12571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 838:
#line 4816 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
#line 12583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 839:
#line 4827 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
#line 12589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 840:
#line 4829 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
#line 12598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 841:
#line 4833 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
#line 12604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 842:
#line 4835 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[-1].i_val), 0); }
#line 12610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 843:
#line 4837 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[-1].i_val), 0); }
#line 12616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 844:
#line 4839 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[-1].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
#line 12629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 845:
#line 4847 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
#line 12635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 846:
#line 4849 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[-1].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
#line 12648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 847:
#line 4857 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
#line 12654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 848:
#line 4858 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
#line 12660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 849:
#line 4859 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
#line 12666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 850:
#line 4860 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
#line 12672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 851:
#line 4861 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
#line 12678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 852:
#line 4863 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
#line 12684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 853:
#line 4865 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			  int d = (yyvsp[-1].i_val);
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
#line 12701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 854:
#line 4878 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			  int d = (yyvsp[-3].i_val);
			  int s = (yyvsp[-1].i_val);
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
#line 12723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 855:
#line 4895 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 12729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 856:
#line 4897 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].i_val) > 0 && (yyvsp[-1].i_val) <= 24) {
				sql_find_subtype(&(yyval.type), "real", (yyvsp[-1].i_val), 0);
			  } else if ((yyvsp[-1].i_val) > 24 && (yyvsp[-1].i_val) <= 53) {
				sql_find_subtype(&(yyval.type), "double", (yyvsp[-1].i_val), 0);
			  } else {
				char *msg = sql_message("\b22003!number of digits for FLOAT values should be between 1 and 53");

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  }
			}
#line 12747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 857:
#line 4911 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].i_val) >= (yyvsp[-3].i_val)) {
				char *msg = sql_message("\b22003!precision(%d) should be less than number of digits(%d)", (yyvsp[-1].i_val), (yyvsp[-3].i_val));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else if ((yyvsp[-3].i_val) > 0 && (yyvsp[-3].i_val) <= 24) {
				sql_find_subtype(&(yyval.type), "real", (yyvsp[-3].i_val), (yyvsp[-1].i_val));
			  } else if ((yyvsp[-3].i_val) > 24 && (yyvsp[-3].i_val) <= 53) {
				sql_find_subtype(&(yyval.type), "double", (yyvsp[-3].i_val), (yyvsp[-1].i_val));
			  } else {
				char *msg = sql_message("\b22003!number of digits for FLOAT values should be between 1 and 53");
				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  }
			}
#line 12771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 858:
#line 4930 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 12777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 859:
#line 4931 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 12783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 860:
#line 4932 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
#line 12789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 863:
#line 4935 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[0].sval), 0, 0); }
#line 12795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 864:
#line 4937 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[-3].sval), (yyvsp[-1].i_val), 0); }
#line 12801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 865:
#line 4938 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[0].sval), 0, 0); }
#line 12807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 866:
#line 4940 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[-3].sval), (yyvsp[-1].i_val), 0); }
#line 12813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 867:
#line 4942 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].i_val) >= (yyvsp[-3].i_val)) {
				char *msg = sql_message("\b22003!precision(%d) should be less than number of digits(%d)", (yyvsp[-1].i_val), (yyvsp[-3].i_val));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
			 	sql_find_subtype(&(yyval.type), (yyvsp[-5].sval), (yyvsp[-3].i_val), (yyvsp[-1].i_val));
			  }
			}
#line 12829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 868:
#line 4953 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  sql_type *t = mvc_bind_type(m, (yyvsp[0].sval));
			  if (!t) {
				char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[0].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_init_subtype(&(yyval.type), t, 0, 0);
			  }
			}
#line 12847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 869:
#line 4968 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  sql_type *t = mvc_bind_type(m, (yyvsp[-3].sval));
			  if (!t) {
				char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[-3].sval));

				yyerror(m, msg);
				_DELETE(msg);
				(yyval.type).type = NULL;
				YYABORT;
			  } else {
				sql_init_subtype(&(yyval.type), t, (yyvsp[-1].i_val), 0);
			  }
			}
#line 12865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 870:
#line 4981 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (!sql_find_subtype(&(yyval.type), "geometry", 0, 0 )) {
			yyerror(m, "\b22000!type (geometry) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
#line 12877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 871:
#line 4988 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		int geoSubType = (yyvsp[-1].i_val); 

		if(geoSubType == 0) {
			(yyval.type).type = NULL;
			YYABORT;
		} else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, 0 )) {
			char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[-3].sval));
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.type).type = NULL;
			YYABORT;
		}
		
	}
#line 12897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 872:
#line 5003 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		int geoSubType = (yyvsp[-3].i_val); 
		int srid = (yyvsp[-1].i_val); 

		if(geoSubType == 0) {
			(yyval.type).type = NULL;
			YYABORT;
		} else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, srid )) {
			char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[-5].sval));
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
#line 12917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 873:
#line 5018 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (!sql_find_subtype(&(yyval.type), "geometrya", 0, 0 )) {
			yyerror(m, "\b22000!type (geometrya) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
#line 12929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 874:
#line 5025 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	int geoSubType = find_subgeometry_type((yyvsp[0].sval));

	if(geoSubType == 0) {
		char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[0].sval));
		(yyval.type).type = NULL;
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	}  else if (!sql_find_subtype(&(yyval.type), "geometry", geoSubType, 0 )) {
		char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[0].sval));
		yyerror(m, msg);
		_DELETE(msg);
		(yyval.type).type = NULL;
		YYABORT;
	}
}
#line 12951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 875:
#line 5045 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	int subtype = find_subgeometry_type((yyvsp[0].sval));
	char* geoSubType = (yyvsp[0].sval);

	if(subtype == 0) {
		char *msg = sql_message("\b22000!type (%s) unknown", geoSubType);
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} 
	(yyval.i_val) = subtype;	
}
#line 12968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 876:
#line 5057 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	int subtype = find_subgeometry_type((yyvsp[0].sval));
	char* geoSubType = (yyvsp[0].sval);

	if(subtype == 0) {
		char *msg = sql_message("\b22000!type (%s) unknown", geoSubType);
		yyerror(m, msg);
		_DELETE(msg);
		YYABORT;
	} 
	(yyval.i_val) = subtype;	
}
#line 12985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 877:
#line 5073 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 	char *t = sql_bind_alias((yyvsp[0].sval));
	  	if (!t) {
			char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.sval) = NULL;
			YYABORT;
		}
		(yyval.sval) = t;
	}
#line 13001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 878:
#line 5087 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 879:
#line 5088 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-1].sval); }
#line 13013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 880:
#line 5092 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 881:
#line 5093 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 882:
#line 5094 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-2].sval); }
#line 13031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 883:
#line 5097 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 884:
#line 5098 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-2].sval); }
#line 13043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 887:
#line 5106 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 888:
#line 5107 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 889:
#line 5108 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 890:
#line 5109 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 891:
#line 5110 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 892:
#line 5111 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 893:
#line 5115 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 894:
#line 5116 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 895:
#line 5117 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 896:
#line 5118 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 897:
#line 5119 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 898:
#line 5120 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 899:
#line 5121 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 901:
#line 5126 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "large"); }
#line 13127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 902:
#line 5127 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "name"); }
#line 13133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 903:
#line 5128 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "object"); }
#line 13139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 904:
#line 5129 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "password"); }
#line 13145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 905:
#line 5130 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "path"); }
#line 13151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 906:
#line 5131 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "precision"); }
#line 13157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 907:
#line 5132 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
#line 13163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 908:
#line 5133 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "role"); }
#line 13169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 909:
#line 5134 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "size"); }
#line 13175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 910:
#line 5135 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "type"); }
#line 13181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 911:
#line 5136 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "release"); }
#line 13187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 912:
#line 5137 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "value"); }
#line 13193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 913:
#line 5138 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "zone"); }
#line 13199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 914:
#line 5140 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "action"); }
#line 13205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 915:
#line 5141 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "as"); }
#line 13211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 916:
#line 5142 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
#line 13217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 917:
#line 5143 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "column"); }
#line 13223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 918:
#line 5144 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
#line 13229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 919:
#line 5145 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
#line 13235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 920:
#line 5146 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "increment"); }
#line 13241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 921:
#line 5147 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
#line 13247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 922:
#line 5148 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
#line 13253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 923:
#line 5149 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "plan"); }
#line 13259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 924:
#line 5150 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "schema"); }
#line 13265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 925:
#line 5151 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "start"); }
#line 13271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 926:
#line 5152 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "statement"); }
#line 13277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 927:
#line 5153 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "table"); }
#line 13283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 928:
#line 5155 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "cache"); }
#line 13289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 929:
#line 5156 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "data"); }
#line 13295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 930:
#line 5157 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
#line 13301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 931:
#line 5158 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "match"); }
#line 13307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 932:
#line 5159 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "options"); }
#line 13313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 933:
#line 5160 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "row"); }
#line 13319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 934:
#line 5161 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "key"); }
#line 13325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 935:
#line 5162 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "language"); }
#line 13331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 936:
#line 5163 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "level"); }
#line 13337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 937:
#line 5164 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "session"); }
#line 13343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 938:
#line 5165 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "date"); }
#line 13349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 939:
#line 5166 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "time"); }
#line 13355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 940:
#line 5167 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
#line 13361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 941:
#line 5168 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "interval"); }
#line 13367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 942:
#line 5169 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
#line 13373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 943:
#line 5171 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
#line 13379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 944:
#line 5172 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "execute"); }
#line 13385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 945:
#line 5173 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "explain"); }
#line 13391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 946:
#line 5174 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "debug"); }
#line 13397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 947:
#line 5175 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "trace"); }
#line 13403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 948:
#line 5176 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "text"); }
#line 13409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 949:
#line 5177 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
#line 13415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 950:
#line 5178 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "no"); }
#line 13421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 951:
#line 5180 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "strip"); }
#line 13427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 952:
#line 5181 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
#line 13433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 953:
#line 5182 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "passing"); }
#line 13439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 954:
#line 5183 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "nil"); }
#line 13445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 955:
#line 5184 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "ref"); }
#line 13451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 956:
#line 5185 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "absent"); }
#line 13457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 957:
#line 5186 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "empty"); }
#line 13463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 958:
#line 5187 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "document"); }
#line 13469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 959:
#line 5188 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "element"); }
#line 13475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 960:
#line 5189 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "content"); }
#line 13481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 961:
#line 5190 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
#line 13487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 962:
#line 5191 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "returning"); }
#line 13493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 963:
#line 5192 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "location"); }
#line 13499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 964:
#line 5193 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "id"); }
#line 13505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 965:
#line 5194 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "according"); }
#line 13511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 966:
#line 5195 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "uri"); }
#line 13517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 967:
#line 5196 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "filter"); }
#line 13523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 968:
#line 5197 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
#line 13529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 969:
#line 5198 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "temp"); }
#line 13535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 970:
#line 5199 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
#line 13541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 971:
#line 5200 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
#line 13547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 972:
#line 5201 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "storage"); }
#line 13553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 973:
#line 5202 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
#line 13559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 974:
#line 5206 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 13565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 975:
#line 5208 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 13571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 976:
#line 5213 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  char *end = NULL, *s = (yyvsp[0].sval);
		  int l = _strlen(s);
		  // errno might be non-zero due to other people's code
		  errno = 0;
		  if (l <= 19) {
		  	(yyval.l_val) = strtoll(s,&end,10);
		  } else {
			(yyval.l_val) = 0;
		  }
		  if (s+l != end || errno == ERANGE) {
			char *msg = sql_message("\b22003!integer value too large or not a number (%s)", (yyvsp[0].sval));

			errno = 0;
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.l_val) = 0;
			YYABORT;
		  }
		}
#line 13596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 977:
#line 5236 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  char *end = NULL, *s = (yyvsp[0].sval);
		  int l = _strlen(s);
		  // errno might be non-zero due to other people's code
		  errno = 0;
		  if (l <= 10) {
		  	(yyval.i_val) = strtol(s,&end,10);
		  } else {
			(yyval.i_val) = 0;
		  }
		  if (s+l != end || errno == ERANGE) {
			char *msg = sql_message("\b22003!integer value too large or not a number (%s)", (yyvsp[0].sval));

			errno = 0;
			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		}
#line 13621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 978:
#line 5256 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  char *name = (yyvsp[0].sval);
		  sql_subtype *tpe;

		  if (!stack_find_var(m, name)) {
			char *msg = sql_message("\b22000!constant (%s) unknown", (yyvsp[0].sval));

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
			char *msg = sql_message("\b22000!constant (%s) has wrong type (number expected)", (yyvsp[0].sval));

			yyerror(m, msg);
			_DELETE(msg);
			(yyval.i_val) = 0;
			YYABORT;
		  }
		}
#line 13655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 979:
#line 5289 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 980:
#line 5291 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strconcat((yyvsp[-1].sval),(yyvsp[0].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
#line 13670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 981:
#line 5299 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[0].sym); }
#line 13678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 982:
#line 5306 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_int(l, (yyvsp[-2].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 13687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 983:
#line 5311 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_int(l, (yyvsp[-3].i_val));
  	  append_list(l, (yyvsp[-1].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 13696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 984:
#line 5325 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 13702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 986:
#line 5330 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[0].l)); }
#line 13708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 989:
#line 5341 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 13714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 990:
#line 5343 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 13720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 5365 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
#line 13729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 5373 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
#line 13738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 5381 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
#line 13747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 5391 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
#line 13758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 5401 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 13764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 5403 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 13772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 5407 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-2].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[0].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 13780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 5411 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-4].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[-2].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 13788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 5415 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-2].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 13796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 5419 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[0].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 13804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 5423 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[-2].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 13812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 5427 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 13820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 5437 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 13826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 5441 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 13832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 5443 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[-2].sym));
	  	  append_symbol(l, (yyvsp[0].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 13843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 5453 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[0].sval));
	  append_symbol(l, (yyvsp[-1].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 13852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 5460 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 13858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 5461 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 5474 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[-1].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[0].i_val)); 	}
#line 13872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 5481 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 13878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 5483 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 13884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 5491 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 13890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 5492 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 13896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 5496 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 13902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 5497 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 13908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 5498 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 13914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 5499 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 3; }
#line 13920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 5500 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 4; }
#line 13926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 5507 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_list(l, (yyvsp[-3].l));
	  append_int(l, (yyvsp[-2].i_val));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
#line 13938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 5517 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 13944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 5518 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 13950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 5523 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 13956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 5525 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-2].l), (yyvsp[0].l)); }
#line 13962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 5530 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-1].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[0].sval)); }
#line 13969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 5535 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 13975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 5539 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 13981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 5540 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 5544 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 5551 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_int(l, (yyvsp[-3].i_val) );
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
#line 14003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 5558 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 5559 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 5566 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
#line 14025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 5578 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 5580 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 5591 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 5637 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
#line 14052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 5648 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 5653 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 14064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 5657 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 5658 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 5662 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 5663 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 5664 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 5679 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 14100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 5683 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 5685 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[-2].sym));
	  	  append_symbol(l, (yyvsp[0].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 14117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 5708 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strconcat("xmlns:", (yyvsp[0].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[-2].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 5717 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[0].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 5721 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 5817 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
          dlist *aggr = L();

          if ((yyvsp[-2].sym)) {
	  	if ((yyvsp[-3].sym) != NULL && (yyvsp[-3].sym)->token == SQL_SELECT) {
			SelectNode *s = (SelectNode*)(yyvsp[-3].sym);
	
			s->orderby = (yyvsp[-2].sym);
	  	} else {
			yyerror(m, "ORDER BY: missing select operator");
			YYABORT;
		}
	  }
          append_list(aggr, append_string(append_string(L(), "sys"), "xmlagg"));
  	  append_int(aggr, FALSE);
	  append_symbol(aggr, (yyvsp[-3].sym));
	  /* int returning not used */
	  (yyval.sym) = _symbol_create_list( SQL_AGGR, aggr);
	}
#line 14167 "y.tab.c" /* yacc.c:1646  */
    break;


#line 14171 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (m, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (m, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (m, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, m);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 5838 "/Users/myth/Programs/MonetDBLite/src/sql/server/sql_parser.y" /* yacc.c:1906  */

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

