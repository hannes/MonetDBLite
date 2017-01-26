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
#line 9 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:339  */

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
#line 111 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:355  */

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
#line 120 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:358  */

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
#define YYLAST   16646

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  347
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  403
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2065

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

#define YYPACT_NINF -1603

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1603)))

#define YYTABLE_NINF -1086

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1553,   -15, -1603,    43, 15736,   262,  -121,    88,    88, 15736,
     332,   276, -1603, 15736,    99, -1603, -1603, 13108, 15736, -1603,
   -1603, -1603, -1603, -1603,   767, -1603,   731,   152,    66,   168,
     245,   414,  1242,   692, 13400, 11648,   329, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603,   773,   352, -1603, 15736, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603,   218,   153, -1603, -1603,
   -1603,  3934, 15736, -1603,   310,   310, -1603, 15736,   819,    55,
   -1603,   367,   262,   915, -1603, -1603, -1603, -1603,   381, -1603,
     267,   367,  1430,  1430,  1553,  1553,  1430, -1603, -1603,   464,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,   367,   367,
   -1603,   401, -1603,   367,   343,  -216,   408, -1603,   377,   462,
     419, -1603, -1603, -1603,   502,   511,   378,  1100,   746,   819,
   14568, 15736, 15736, -1603,   544,   540,   863,   581, -1603,    48,
   -1603, -1603,   249, -1603, -1603,   684, 15736,   701, -1603, -1603,
   15736,   648, -1603, -1603,   613,   616,   632,   654, 15736, 15736,
   15736, 15736, 15736, 15736, 16028, 15736, -1603, 15736, 15736,   558,
   -1603, -1603,   670, -1603, 15736, 15736,   666,   749, 15736, 15736,
   15736, 15736, 15736, 15736, 15736, 15736, 15736, 15736, 15736,   912,
   -1603, -1603, -1603,   752, 15736, 15736,   689,   835,   877,   710,
     761, 15736,   732, -1603,  1388, -1603, -1603,   971,   409,   409,
     409,   797, -1603,   802, 14860, 15736,  1114,  1114,  1114,  1124,
     959,   972,   985, -1603, -1603, -1603, -1603, -1603,   987,  1000,
    1108, -1603, -1603, -1603,  1053,  1053,  1053,  1053,  1053, -1603,
    1071, -1603,  1079,  1022, 15736,  1081,  1082,  1084,  1087,  1090,
    1092,  1093,  1094,  1095,  1096,  1099,  2147,  4276,  8569,  8569,
    1102,  1103,  1104, -1603,  8569,  1114,   266,   412,   242,  6619,
    1109,  1110,  4276, -1603, -1603,   346,   849,  1085, -1603,  1582,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, 15736, -1603, -1603,
   -1603,  9768, -1603, -1603, -1603,   953, -1603,   950, -1603, -1603,
     958, -1603, -1603,  1121,  1125,  1128,   977, -1603, -1603, -1603,
   -1603, -1603, -1603,  1114,  1114,   -51, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,   236,
     918, -1603,  1024, -1603,   938,  1220,  1218, -1603,   976, -1603,
   15736, -1603, -1603, 15736,   998, -1603,  3934, -1603,  6944, 13108,
    1021,  1188,  1190, -1603, -1603,  1192,  4960, -1603, -1603, -1603,
   -1603, -1603, -1603,   128,  1100,   128,  1014, 11940,   339,  1223,
    1226,  1219,    21,   819, -1603,   790,   457,   903,   611,  1170,
     764, 15736, -1603,    59,  1086, 15736,   863,  1052, -1603, -1603,
    1181, -1603, -1603,   633, 15736, 15736, 15736, 15736, 15736,  1116,
    1182,  1183,  1185,  1187,  1194, 15736,  1111,  1127,    34,   367,
     726, 15736, 15736, -1603, -1603, 15736,  1130, 15736, 15736, 15736,
   15736,   912,  1193,  1193,  1193,  1193, -1603,   912,   912,   912,
   -1603, -1603, -1603, -1603, -1603, 15736, -1603, -1603,    72, 15736,
    8569, 15736,  1197,  1198, -1603,   105, -1603, -1603, -1603,  1201,
    1202, -1603, -1603, -1603, -1603, -1603,  1329, -1603,  1203, -1603,
   -1603, -1603,  1224,  1225,   828, 15736, -1603, -1603, -1603,  1227,
    1228,  1229,  1230,  8569, -1603, -1603,  1235,  1235,  1235,    42,
    1098,  4276, -1603,  1215,    36, -1603,  1222, -1603,  1064, -1603,
   -1603, -1603,  4276,  4276,  1386,  1236, -1603, -1603, -1603, -1603,
   -1603,   387, -1603,   859,  1299, -1603,  8569,  8569,  8569,  1189,
    1271,   548,  1195,  1425,  8569,   660,  8569,  2147,  1257,  1258,
    1260,  1262,  1351,   -62, -1603,   -24,  1748,  2147,  1172,  1172,
    8569,  8569,  8569,   995, -1603,   767,  1266,   767,  1266, -1603,
   -1603,  1114,  4276,  3028, -1603,   614,  8569,  8569,  1748,   482,
    8870, 15736, -1603,   802, 15736, -1603,  4276,  3250,   969,   969,
    1270,  1272,  8569,  8569,  8569,  8569,  4276,  3250,  1105,  8569,
    8569,  8569,  8569,  8569,  8569,  8569,  8569,  8569,  8569,  8569,
    8569,  8569,  8569,  8569,  8569,  8569,  8569,  8569,  8569,  8569,
    8569,  8569,  8569,   436,  1274,  1233,  3934,  1276,  5285,  8569,
   -1603, -1603, 12232, 13984,  1161,  1257, -1603,   382, -1603, -1603,
    1374,  1378, -1603, -1603, -1603,   798,   767,   819, -1603,   227,
    1285,  1348, -1603, -1603, 12219,   277, -1603, -1603,    41,  1217,
   -1603, -1603, -1603,  2147, -1603,   278, -1603, -1603,   806, -1603,
     -16, -1603, -1603, -1603,   160, -1603,   666, 15736, -1603, -1603,
   -1603, -1603, -1603, -1603,   128,   128, -1603, -1603, -1603,  1210,
     790,  1191,  1196, -1603,  1364,  1300,   863,   863, -1603, -1603,
   -1603, -1603,   863,  1954,   903, -1603, -1603,  -112,   597,  1199,
     805, -1603,  1359,    38,    38, 15736,   367,  1166,   863,   790,
    1307,  1954,   633, -1603, -1603,  1308,  1310,  1310,  1310,  1310,
    1246, 15152, 15152, 15152, 15152,  1232, -1603, -1603, -1603,  1465,
    1237, 15736,  1252, 14276,  1389, -1603,  1171,  1180, -1603, -1603,
    1013,  1238,  1310,  1193, 15736,   912,   912,   912,   912, -1603,
    1545, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
     921, -1603, -1603, -1603,  1388,   767,   767, -1603,  1467,   767,
     767,   767, -1603,   117,  1266,  1266, -1603, -1603, -1603, -1603,
   -1603,  1225,  1224,  1231, -1603, -1603, -1603,   767,   767,   767,
     767,  1163, -1603, 10695,  1397,    99,    99,    99, -1603, -1603,
   -1603,    42,  1021, -1603,  1071, 14860,   802,  4276, 15736, -1603,
    1200,  1176, -1603, -1603, -1603, -1603,  1400, 15736, 12219,   473,
   12219, -1603,   -53, -1603,  1355, 15736,  1345,  8569,  1178, -1603,
   -1603,  8569, 15736, -1603,  1376,   473, -1603,  8569, -1603,  1421,
    8569,   281, -1603, -1603, -1603,   974,  4276, 13692,  2786, 11004,
    2925,  1353,  1243,  1114,  1370,  1114,   828,  1245,  8569, -1603,
     644,  8569, -1603,  1213,  2960,  1207,   282,  4276, -1603, 12524,
    2475, -1603, -1603,  1208,   735, 16320, 16320, 16320,   250,    37,
   -1603, -1603,  1420, -1603, -1603, -1603, -1603, -1603,   811,  4276,
   -1603, -1603,  4276,  4276,  7269,  7269, -1603, 10077, -1603, -1603,
   -1603, -1603, -1603,  1071, -1603, 12219,  1172,  1172,  1172,  1172,
    1172,  1172,  1172,  1172,  1172,  1172,   926,   926,   966,   995,
     601,   601,   601,   601,  1422,  1422,  1422,  1422,  1422, -1603,
    1445,  1251, -1603, -1603, -1603,  8569,  1384,  8569, 12219,  1385,
     253,  1221,  1387,  1391,  1394, -1603,   254, -1603,  1244, -1603,
   -1603, 15736,  1069,  1473, -1603, -1603, -1603, -1603, -1603,    99,
   -1603,  8569, -1603, -1603, -1603, -1603, -1603, -1603,  7269,  1323,
     128,  1457,  1331,  1457, -1603,    52,    52,  1114,  1330, 15736,
   15736,   863,   104, -1603, -1603, -1603, -1603, -1603, 15736, 15736,
   -1603, -1603, 15736,  1500,  1075, -1603, 15736, 15736, 15444, 13108,
   -1603,  1481,  1277,  1481,   367,  1482, -1603, -1603,  1337,   863,
   -1603, -1603, 15152, -1603, -1603,  1335, -1603, 15736, -1603,  1428,
    1254,  1954,  1433,  1434,  1435,   723,  1322, 15736,   596, -1603,
   -1603, 13108, 15736, 15736,   284, -1603, -1603, -1603, -1603, -1603,
     505, -1603,  1165,   129, 15736, -1603,   544,   544, -1603,  1289,
   -1603,  1349, 15736,  1350, -1603,   912, -1603, -1603, -1603, -1603,
   -1603,  1439,  1275, -1603,  1448, -1603,  1449, -1603,  1450,   293,
    1451,  1286, -1603,   304, -1603, -1603, -1603, -1603,  1347,   996,
    1452,  1288,  1460,  1461,  1462,  8569, -1603, -1603, -1603,  1468,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603,  1954,  1954,  8569, -1603,   715,  1464,  8569,  1466,  1471,
   -1603,  1301,  7594, 12219,   200, -1603,  1326, -1603,   440, -1603,
    1306,  1544,  1355,  1475,  1489,  1355,   307, -1603, -1603, -1603,
    1480,  1483,  1484,  1748,  8569,  8569,  8569,  8569, -1603,  1358,
   -1603, -1603, -1603, -1603,  8569,  8858, -1603,  1343, 12219, -1603,
    8569,  8569, -1603,  8569,  1748, 16320, 16320,  2475,  1485,   893,
      99,  8870, -1603, -1603, -1603,   961,  1586, -1603,  8870,  1587,
    1593, 15736, -1603,  1493, -1603, -1603, -1603, 13108, 15736, -1603,
    1563,  1560,   811,  1659,  1832,   308,   328,  1114, -1603, -1603,
    1567,  1499,  1577,  1506, -1603,  1507, -1603, 12816,  8569, 15736,
   -1603, -1603, -1603, -1603,  1510, -1603, -1603,  1419, -1603,   723,
   -1603,  1424, -1603, -1603, -1603,  1671,  1114, -1603, -1603, -1603,
   -1603, -1603,   912,   912,   912, -1603, -1603, -1603,   598, -1603,
   -1603, -1603,  1371, -1603,  1114, -1603,  1583,    63,  1114, -1603,
    1519,  1692, -1603,  9472, 15736, -1603,  1463,  1455,  1469, -1603,
   -1603, -1603, 15736, -1603,  1361, -1603,  2670,   783, -1603,   596,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   14276,  1436,  1442,   367, -1603, -1603, -1603, -1603,   618,  1441,
    1700,  1538,  1540, 15736, 15736,  1539,  1636, -1603, -1603, -1603,
    1954, -1603, -1603, -1603, -1603,   767, -1603,   767, -1603,   767,
    1225, -1603, -1603, -1603,   767, -1603, -1603, -1603, -1603, 15736,
    1541,  1546, 11314, -1603, -1603, -1603, -1603, -1603, -1603,  5610,
    1355,  1477,  8569, 12219,   331, -1603,  1398, -1603, -1603,   827,
    8569,  1355, 15736, -1603,  1578,  1580,  1551,  8569,  1355,   519,
    8569, -1603,  1544, -1603,  1453,  1556, -1603,  1557, -1603,  8569,
    8569,  7269,  7269, 10387,  2889, 11636,  2994, -1603, -1603,  8569,
   -1603, 11928, -1603, -1603, -1603, -1603, -1603,   -58,   735,  1657,
    8870,   456,  8870, -1603, -1603,  1562, 15736,   259, -1603, 15736,
    4276, -1603,  4276,  4276, -1603, -1603, -1603, 15736, -1603,  1632,
     -13, -1603, -1603,  1564,  1565, -1603, -1603, -1603, -1603, -1603,
    1409,  1472, -1603, -1603, -1603,  1490,   591, -1603,  1114,  1401,
     418,  1114,  1574,  1574,  1407, -1603,  1511,  1513, -1603,   262,
     332,   276,  1514, 13108,  3592,  7919,  4276,  1444, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603,  1443, -1603, -1603, -1603, -1603,  1413,
    1954,  2647,  1752,  2647, -1603, 15736, -1603, -1603,  1589,   367,
     367, -1603,  1630, -1603,  8569, -1603,   618, -1603, -1603, -1603,
   -1603,   504,  1597, -1603,    -6, -1603,  1543, -1603,  1438,  1446,
   15736,   365, -1603,  1600, -1603,  1603,  1606, -1603,  1607,   333,
   -1603,  1440, -1603, -1603, -1603,  1611, 12219,  1474, -1603,   338,
   -1603,  1476,  1614, -1603, -1603, -1603,  7594, 15736,  1524,  1525,
    1529,  1542, -1603, -1603,  1629, -1603, -1603, -1603, -1603, -1603,
     477,  1634, -1603, -1603,   239,  1478, -1603, -1603, -1603,   615,
   -1603,  1642, -1603, -1603, -1603,   335,   357,   362,  8569, -1603,
   -1603,  8569, -1603,  8569, -1603, -1603, 16320,  8870, -1603,   367,
    4276, -1603,   456, 15736,   371,  1488, -1603,  1615,  1615,  1488,
    8569, -1603, -1603, -1603,  4618, -1603, -1603,  1552,  1537, -1603,
     427, -1603,  1703,  8569, -1603,  1114,  1731,   383, 15736,    38,
      38,  1114,  1114,  1584,  3934, 15736, -1603,  1643, -1603,  1645,
   -1603, -1603, -1603,  4276, -1603,   667,  9461,  1521, -1603, 10708,
    4276, -1603, -1603,  1648,  9781, -1603,  1164,   594, -1603,  1554,
   -1603,  1504, -1603,  2679, -1603, -1603,  1715,  1662,  1573, 15736,
   -1603, -1603, -1603,   534,  1666, -1603,  1581,   860,  1739,   388,
    1768,  1770, -1603, -1603, -1603, -1603, -1603, -1603, 15736, 15736,
    8569,  8569,  8569, -1603,  8244, -1603, -1603, -1603, -1603,  1747,
      33,  1750,  1751, -1603, -1603, 15736, -1603, -1603,  8569,  1598,
    1602,  1684,   665, -1603, -1603, -1603, 12512, 13096, 13388, -1603,
   -1603, -1603, -1603, -1603,   393, -1603,  1163,  5935,  1548,  1532,
    1533,  1547, -1603, -1603, -1603,  1114, 15736, -1603, -1603, -1603,
   -1603,  1530,  1647, -1603, -1603,   402, -1603,  1871,  1481,  1481,
   -1603,  1604, 15736,  1616, -1603,  1550,  8569,   620,  1585, -1603,
   -1603,  1568,  8569, -1603,   706, -1603, 10708,  1746,  1575, 15736,
    1644,  1880, -1603, -1603, -1603, -1603,  1652,  1881, 15736,  1764,
   -1603,  4276, -1603,   367,   403, -1603, -1603, -1603,   437,   463,
     860, -1603,  1566, -1603,  1595, -1603, -1603, -1603, -1603,  1555,
   12219,   405, -1603,  1588, -1603, -1603,  1559, -1603, -1603,  1744,
   -1603, -1603, -1603,  1544, -1603,  1755,  1756, -1603,  1745, 15736,
    1899,   350, -1603, -1603, -1603, -1603, -1603, -1603,  1713, -1603,
   -1603, -1603,    31, -1603, -1603, -1603,  1114, -1603, -1603, 15736,
   -1603,  1851,  1851, 15736, -1603, 15736,   416, 12219,  1737, -1603,
   10090,  1612,  9151, -1603,  1601,  9163,  1782,  1605, -1603,   424,
    1954, 15736,  1164, 15736,  1164,   367,  1743,  1749,  1805, -1603,
     534,  1371, -1603,  1371,  1371,  1371, -1603,   896,  4276, 11017,
   -1603,  8569, 15736, -1603,  8569, -1603, -1603, -1603, -1603,  1761,
   -1603, -1603, -1603,  1761, -1603,  1766, 15736,  1899, -1603, -1603,
   -1603,  1771,  6277,  1590, -1603,  1617, -1603, -1603, -1603, -1603,
    1877,  1877, -1603, -1603, -1603,  8569, -1603, 10090,  1807, -1603,
   -1603,  1641, -1603,  4276,  1631,  1633, -1603, 10399, -1603, 15736,
   -1603, -1603, -1603, -1603, -1603,  1805,   633, -1603, -1603,   812,
    1679, -1603, 15736, 15736, 15736, 15736, -1603, -1603, -1603, -1603,
    1638, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603,  1899, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603,  1621,  1620,  1622, -1603, -1603,
   -1603, -1603,  1889,  1731,  1731, 12219, -1603, 10090, -1603, 10090,
    1654,  1651, -1603,  1655,  1954,  1679,   520, -1603, -1603, -1603,
   -1603,  1160,  1697,  1699, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603,  1650, -1603, -1603,
   15736, -1603, -1603, -1603,    46,    46,  1901, -1603,  1904, -1603,
   11326,  1793, -1603,  9163, -1603, -1603, -1603, -1603,  1929,   353,
   -1603, -1603, -1603,  1838,   863, -1603, -1603, -1603, -1603, -1603,
     428, -1603, -1603,   863, -1603
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
       0,     0,   640,   638,   668,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   827,
     832,     0,   831,     0,     0,     0,     0,     0,   636,     0,
       0,   560,   559,   550,   551,   558,   566,   566,   809,   549,
     533,   535,   568,   747,   574,   632,   630,   631,   608,     0,
     612,   613,     0,     0,     0,     0,   614,   618,   616,   615,
     617,   576,   607,     0,   637,   657,   642,   643,   648,   658,
     647,   662,   663,   664,   665,   738,   644,   645,   646,   659,
     649,   654,   652,   650,   651,   653,   655,   656,   660,   621,
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
     536,   537,   538,   585,   584,   532,   504,   502,   480,   503,
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
       0,   548,     0,     0,   622,   623,   619,     0,   688,     0,
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
    1063,     0,  1067,  1114,   490,     0,     0,     0,     0,   735,
     736,     0,   737,     0,   826,   818,     0,     0,   508,     0,
       0,   509,   512,     0,     0,   569,   573,   609,   610,   693,
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
       0,     0,     0,   488,   624,   625,     0,     0,     0,   561,
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
       0,  1103,  1092,  1093,   733,   734,   739,   562,     0,   704,
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1603,  1059, -1603, -1603, -1603, -1603, -1603,  -992,  -982, -1603,
   -1603,   832, -1603,    10, -1603,    15,   480, -1603,  1184, -1603,
   -1603, -1603,   653, -1603,   704,     0,  1769, -1603, -1603,  -177,
       5, -1603, -1603,  1786, -1603,  1531, -1603, -1603, -1603,  1549,
    -389,   963,    40, -1603, -1603, -1603,   483,    45, -1603,    49,
   -1603,  -761,  1240,  -394, -1603, -1603, -1603,  -598, -1603,  1964,
   -1603, -1603,   257, -1603, -1603, -1603,   943,   672, -1603, -1603,
   -1603, -1603, -1603, -1603, -1456, -1603,   370, -1603, -1603, -1603,
   -1603,  -749,   -31,    -8,    -2,     6, -1603,    79, -1603, -1603,
   -1603,   -34, -1603, -1603,  -188,  -405, -1603,  -142,  -281, -1603,
   -1176,  -808, -1603,   356, -1494, -1603, -1264,   -19, -1424, -1603,
     533, -1603, -1603, -1603, -1603, -1603, -1603,   251, -1603,   372,
   -1603,   252, -1603,   -12, -1603, -1603, -1603, -1603,   515,  -715,
   -1603, -1603, -1603, -1603, -1603, -1603,   230,  -925,   233, -1603,
   -1603, -1603, -1603, -1603,  1591,    58,  -423,   686,  -422,    20,
      25, -1603,  -148, -1603,  1340, -1603,  2036,  1891, -1603, -1603,
   -1603, -1603,   574, -1603,   199,  -743, -1603, -1603, -1036,   197,
     130,  -753,   582,   583, -1603, -1603, -1603,  1366,  1377,   646,
    -895, -1603,  -139,   652,  1035,  -153, -1603,  1204,  -549,  -873,
     839, -1603, -1603,   454,   123, -1603,  1656,  1048, -1603,    30,
      76, -1603,   830,    87,   957,   691,  -412,  1132,  1508, -1603,
    -608, -1603,  -907,  -866, -1603, -1295, -1603,  -205,  1429,  1179,
   -1603, -1603,  1259,   459,   932, -1603, -1603,  -239, -1603, -1603,
    1454, -1603,   481, -1603, -1603, -1603, -1603,  1437, -1603, -1603,
    1432, -1603,  -271, -1378,  1447,  -563,  -486, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603,   344, -1603, -1603, -1603, -1603,
   -1603, -1603,    57, -1603,  -392, -1603,   781, -1603, -1603,  1406,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603,  -528,  -494,  -511,
   -1603,  -545, -1603, -1603, -1603, -1603,  1167, -1603,  2051, -1603,
    1569,    74, -1328, -1603,  1515, -1603, -1603, -1603,  1174, -1603,
    1470, -1603,  1209,  -643,   484,  -652,  -198, -1603,  -260, -1603,
    -282, -1603, -1603,  -249,  -287,    17, -1603,    -1, -1603, -1329,
    -476,   -18,    75, -1603, -1603, -1603, -1603, -1603,  -546, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603, -1603, -1603,   420, -1603,
     195, -1603, -1603, -1603, -1602, -1603,   421,   561, -1603, -1603,
   -1603, -1603,   737, -1603, -1603, -1603, -1603, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603, -1603, -1603,   404, -1603, -1603, -1603,
   -1603, -1603, -1603, -1603,  1535,  -791,   753, -1603,   562, -1603,
     751, -1603, -1603,   311, -1078, -1603, -1603, -1603, -1603, -1603,
   -1525,   228, -1603, -1603, -1603, -1603, -1603, -1603,   224, -1603,
   -1603, -1603, -1603
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
     952,   362,   956,   363,   364,   603,   365,   949,   366,   629,
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,   284,   549,   147,   686,    41,   179,   566,   156,   426,
      37,  1071,   161,   563,   701,    38,   170,   147,   462,   424,
      51,  1063,   934,   879,   548,    52,   459,  1295,  1232,   430,
      60,   895,   835,   278,   285,   552,  1001,   706,   875,  1496,
      42,  1550,   884,   202,  1100,    43,   437,   438,   834,   582,
     899,   440,   213,   213,  1060,  1022,   724,  1218,    50,  1245,
    1246,   454,   296,   756,   147,   443,   296,  1082,  1083,  1084,
    1674,  1236,  1621,   858,   167,   464,    61,  1684,   146,   809,
     812,   813,   814,   860,   942,   815,   816,   817,  2046,  2047,
     915,  1168,   171,  1169,  1043,  1044,  1316,   602,   606,  1814,
    1045,   163,  1817,  1401,  1183,  1165,  1317,  1614,   288,   289,
     290,  1550,   905,   628,  1913,   213,  1819,  1048,    64,  1550,
     296,   162,  -721,    58,   208,   444,   827,   828,   687,  2048,
     819,   601,   735,   181,   182,   183,   184,   185,   186,   293,
    1914,   152,  1038,  1820,  1615,   792,  1673,   630,   630,  -721,
     395,   147,  1619,   209,    65,  1029,   413,   -80,   -80,   -80,
     -80,   -80,   -80,  1269,  1776,   162,  1685,  1049,  1050,   153,
    1132,  1068,    40,    40,    40,    40,    40,    41,    41,    41,
      41,    41,    37,    37,    37,    37,    37,    38,    38,    38,
      38,    38,    51,    51,    51,    51,    51,    52,    52,    52,
      52,    52,    60,    60,    60,    60,    60,   793,   377,   456,
     147,   147,    42,    42,    42,    42,    42,    43,    43,    43,
      43,    43,  1023,   210,   202,   470,   409,  1795,    14,   147,
      50,    50,    50,    50,    50,   422,  1471,   147,   147,   147,
     147,   147,   484,   487,   147,  -764,   147,   147,    61,    61,
      61,    61,    61,   493,   147,  1673,   213,   147,   147,   147,
     147,   147,   506,   147,   147,   147,   147,   147,   767,  -768,
     860,   860,    14,   516,   517,  1860,   860,   581,   829,   906,
     147,  1865,   686,   211,  1734,   457,   458,  1606,  1167,   703,
     706,   682,  1974,   567,   568,    58,    58,    58,    58,    58,
    1339,   460,   162,  -255,   473,   736,  1135,  1136,  1424,  1100,
     465,   162,   479,   480,   481,   482,   483,  1158,   907,   488,
    2049,   489,   490,   585,  1590,  1030,  1622,  1316,  1178,   494,
    1137,  1032,   501,   502,   503,   504,   505,  1317,   507,   508,
     509,   510,   511,  1399,  1218,  1035,  1036,   797,  1138, -1085,
    1425,  1184,  1253,  -460,  1255,   488,   863,  1300,   602,   935,
     756,   820,   444,   158,  1915,  1927,   147,   869,   869,  1916,
    1808,   569,   570,   571,  1937,  1153,   763,   865,  1238,  1472,
    1114,   823,  1981,  1116,  1117,  1118,  1119,   353,   353,  1279,
   -1085,  1402,   601,  1030,  1407,  1777,   420, -1085,   948,   719,
    1496,  1018,   601,   187,   188,   189,   190,    13,   962,   683,
     204,   157,   600,   205,   224,  -770,    13,   917,   214,   161,
     614,   296,   285,  -721,  1951,   395,  -721,  -721,   707,  1690,
    1747,   944,  -721,  1905,   619,   620,  1997,  -768,  1999,   615,
     149,   648,   187,   188,   189,   190,   147,   212,   162,  1691,
    2020,  1020,  1027,   162,   441,  1189,  1212,   630,  1329,   599,
     147,   723,   286,  2057,   147,  1966,  1389,  1354,   680,   681,
    -255,   549,  1609,   147,   147,   147,   147,   147,  1358,   215,
      39,  1408,  1444,   377,   788,   292,   684,   824,   925,   549,
     801,   147,   294,  1046,   147,   295,   147,   147,   147,   147,
     410,  1030,  1445,  1906,   552,  1565,  1907,  1697,   601,  1723,
    1024,  1070,  1866,   150,   818,   706,  1596,  1597,   822,   685,
     285,   730,   552,   718,  1394,  1222,  1223,  1224,   549,  1225,
    1226,  1724,  1227,    48,  2043,   762,  1725,  1748,   764,   766,
     423,  1390,   549,   216,   846,  1735,   989,   466,   775,   776,
     777,   778,   779,    13,   428,    14,   191,  1754,    13,  1715,
      14,   552,  1805,   467,  1123,   860,   802,  1837,   545,   803,
    1067,   805,   806,   807,   808,   552,  1848,  1879,   566,  1890,
   -1085,  1100,  1395,  -770,   563,   617,  1854,   554,   192,  1562,
    1924,  1471,  1237,  1156,  1361,  1257,  1259,   911,  1938,   914,
    1574,   868,  2062,  2058,  1389,   442,   770,  1581,   631,   429,
     162,   193,   990,  1428,  1675,  1454,  1966,  1692,  1021,  1028,
    1431,  1376,  1190,  1213,  1065,  1330,  1228,   192,   740,   938,
     941,  1165,   684,   943,  1355, -1050,   744,   436,   746,   747,
     748,   749,   750,   751,  1582,  1359,   752, -1072,  1409,  1028,
     193, -1050,    39,    39,    39,    39,    39,   600,  1215,   935,
     555,  1522,  1159,  1154,  1053,   685,  1523,  1193,  1583,  1028,
     598,   439,  1566,   600,  1698,   395,  1409,  1000,  1016,  1702,
    1676,  1006,   285,   600,   460,  1054,   162,   936,  1214,   445,
    1630,   194,  1248,  1348,  2033,  1941,   916,  1943,  1028,  1729,
     889,  1631,   890,  1028,   599,    48,    48,    48,    48,    48,
    1242,   741,  1515,  1243,  1244,    13,  1881,   214,   446,   770,
     599,  1610,  1851,  1852,  1641,  1719,   147,   447,  -225,   545,
     599,   742,  1677,   377,  1515,   649,   181,   182,   183,   184,
     185,   186,  1884,  1849,  1880,  1522,  1891,   254,  1828,   744,
    1523,   746,   747,   748,   749,   750,   751,  1925,  1331,   752,
     448,  1187,  1882,  1093,   147,  1939,  1720,  1632,   449,  2063,
     163,  1280,   177,  1678,  1332,   896,  1679,   450,   178,  1309,
    1081,  1081,  1081,  1081,  1524,  1310,  1680,  1333,  1882,   600,
     788,    13,  1103,    14,  -225,   187,   188,   189,   190,   549,
     460,  1034,   461,   147,  1222,  1223,  1224,   255,  1225,  1226,
    -512,  1227,   889,  1131,   890,   668,   669,   670,   671,   672,
     549,  1305,  1608,   927,  1612,  1829,    15,   928,  1830,  1141,
    1373,  1786,   552,   453,  1580,  1787,   599,  1584,   254,  1064,
     771,  1633,  1338,   463,  1281,   706,  -225,  1093,    25,  1547,
    1465,  2007,  2008,   552,    26,    27,  1272,   256,  1273,  1274,
    1462,  1463,  1464,   757,   567,   706,   287,  1160,  1524,  1374,
     257,  1299,  1466,    29,   213,   287,   147,   491,  1115,   549,
     549,   474,  1265,  2009,  1170,   758,  1012,  -225,   759,   760,
    -225,  1179,   475,  1013,  1014,   476,  1758,  1759,   255,   495,
    -225,  1370,  1371,   468,   469,  1228,  1006,   414,  1134,   191,
     415,   477,   552,   552,   496,   622,   416,   921,  1341,  1342,
     471,   472,  1296,   258,   259,   260,   261,   262,   170,   938,
     288,   289,   290,   478,  1233,  1233,  1233,  1568,   427,   288,
     289,   290,  1150,  1151,  1152,   918,   935,   921,   256,   492,
     935,  1164,   263,   771,   512,   513,  1952,   935,  1953,  1954,
    1955,   257,  1222,  1223,  1224,   264,  1225,  1226,  1653,  1227,
    1769,   265,   288,   289,   290,  1569,   266,  1570,  1571,   515,
     192,   497,   498,   499,   500,   518,  1216,   936,  1200,  -181,
    1202,   638,   639,   640,   641,   642,   643,   644,   645,  1730,
     689,   690,   647,   193,   431,   432,   600,  1772,   435,  1769,
    1260,   267,   519,   268,   258,   259,   260,   261,   262,   744,
     745,   746,   747,   748,   749,   750,   751,   693,   694,   752,
    1222,  1223,  1224,  1073,  1074,  1075,  1076,  1227,  1277,  1278,
    -180,   718,   718,   263,   194,   737,   738,  1282,  1283,   798,
     799,  1284,  1521,   599,   520,  1288,   147,   567,   170,  1113,
     649,  1740,   265,  1228,  1942,  1418,  1944,   266,   549,   950,
     951,  1081,  1422,   521,  1423,   553,  1302,  1108,  1109,  1650,
    1110,   288,   289,   290,  1057,  1050,  1313,   561,  1321,   427,
     170,   147,  1328,  1322,   559,   422,   577,   578,   579,   580,
     649,   552,   267,  1340,   268,   181,   182,   183,   184,   185,
     186,   147,  1275,   619,   620,   718,  1291,   296,   836,   837,
     838,   839,   840,   841,   958,   959,   960,  -877,  1323,   649,
     574,  1289,  -751,  1324,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,  -753,  1325,   584,  1326,   836,
     837,   838,   839,   840,   874,  1584,  1191,  1192,  -749,   935,
     572,   935,  1261,  1262,  1286,  1287,  1327,   296,  1783,   634,
     522,   523,   524,   573,  1740,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   525,  1345,  1798,  1799,   526,
     527,   528,   310,   311,   529,   530,   531,   532,   533,   534,
     535,   536,   537,  1617,  1618,   664,   665,   666,   667,   668,
     669,   670,   671,   672,  1233,  1233,   938,   538,   539,   540,
     938,  1956,  1957,   753,  2034,  2035,   575,   938,   549,   549,
    1435,   549,  1763,   433,   434,  1616,  1437,   941,  1669,  1670,
    2026,  2027,  1056,  1058,   581,  1071,   557,   558,   856,   857,
    1662,  1665,   583,  1665,   586,   587,  1006,   588,  1455,   225,
     589,   552,   552,   590,   552,   591,   592,   593,   594,   595,
    1187,  1187,   596,   636,   936,   610,   611,   612,   936,  1652,
    1604,  1657,   626,   627,   674,   936,   836,   837,   838,   839,
     840,  1360,   675,   600,   677,  1335,  1336,   226,   678,   676,
     227,   679,  1509,  1510,   460,   691,   649,  1427,  -690,  1538,
    1126,  1514,   695,  1128,  1129,  1130,   696,   697,   700,  1321,
     708,   710,  1446,   711,  1322,   712,  1644,   194,  1731,  1518,
     734,  1140,  1142,  1143,  1144,   732,   935,  1544,   733,  1545,
     599,  1546,   285,  1539,   761,   228,  1548,   229,   765,  1987,
     768,  1461,   769,   780,   791,   781,   782,   230,   783,  1323,
     784,   789,  1858,   804,  1324,   785,   810,   832,  1551,  1469,
     825,   826,  1475,  1476,   830,   831,   833,  1325,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,  1575,   864,   522,   523,   524,   861,   615,   617,   867,
     847,   848,   849,   850,   854,  1732,   868,   231,   525,   872,
     873,   877,   526,   527,   528,   310,   311,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   886,   885,   893,   938,
     900,   938,   902,   892,   903,  1313,   904,   912,  1551,   992,
     538,   539,   540,   954,  1007,   955,  1551,   991,  1768,   352,
     994,   541,   542,   543,   544,  1778,  1010,  1011,  1019,   630,
    1025,   232,   233,   234,   235,   236,   237,  1037,  1041,  1040,
    1059,  1042,  1039,   238,   239,   240,   241,   242,  1069,  1050,
    1066,  1072,   938,   793,  1077,  1086,  1091,   936,  1104,   936,
    1127,  1106,  1870,  1085,     3,     4,     5,     6,   718,   718,
    1107,  1149,   243,  1112,  1145,  1087,  1689,     7,     8,     9,
      10,  1163,  1139,  1165,  1668,   244,    11,  1162,  1172,  1177,
    1161,   245,  1181,   287,   246,  1209,   247,  1198,   637,  1240,
    1199,   638,   639,   640,   641,   642,   643,   644,   645,   285,
     167,   646,   647,  1634,  1201,  1475,  1475,  1204,  1211,  1221,
     522,   523,   524,   -14,     1,  1249,   649,  1648,  1254,  1256,
    -752,  1263,  1258,   248,  -754,   525,  1707,  -750,  1269,   526,
     527,   528,   310,   311,   529,   530,   531,   532,   533,   534,
     535,   536,   537,  1250,  1267,  1190,  1877,  1276,   549,  1271,
    1285,  1292,  1294,  1297,  1298,  1304,  1312,   538,   539,   540,
    1301,    13,  1303,    14,     2,  1233,   938,  1306,  1307,  1308,
    1940,  1343,  1313,  1349,  1344,  1346,  1350,     3,     4,     5,
       6,   552,  1351,  1352,  1353,  1356,  1363,  1357,  -781,  1364,
       7,     8,     9,    10,  1365,  1366,  1367,  1757,  1375,    11,
    1377,  1369,  1379,   395,  1765,  1378,  1392,  1397,  1399,  1403,
    1404,  1878,  2004,  1410,  1417,  1420,  1411,  1412,  1509,  1426,
      15,  1430,  1432,  1509,   936,  1433,  1436,  1439,  1440,    16,
      17,  1447,    18,  1448,   541,   542,   543,   544,   147,  1449,
    1451,  1452,    25,  1959,  1456,  1457,    12,  1460,    26,    27,
    1459,  1467,  -626,  1477,  1470,  1478,  1512,  1551,  1809,  1511,
    1519,   377,  1515,  1533,    28,  1513,  1520,    29,  1532,  1534,
    1751,  1536,  1540,  1541,  1823,  1552,  1760,  1761,  1567,  1120,
    1553,  1577,   549,  1578,    13,  1579,    14,  1563,  2000,   545,
    1592,  1593,  1607,  1945,  1591,  1613,  1620,  1627,  1625,  1626,
    1629,  1785,  1635,    30,  2031,  1845,  1628,  1638,  1641,  1642,
    1643,  1660,  1645,  1793,  1658,   552,  1661,  1666,  1671,   637,
    1339,  1765,   638,   639,   640,   641,   642,   643,   644,   645,
    1683,  1686,   646,   647,  1693,  1509,  1687,  1694,   567,   545,
    1695,  1696,  1699,    15,  1700,   608,   609,   147,  1705,  1709,
    1710,   613,    16,    17,  1711,    18,   623,    19,    20,    21,
      22,    23,    24,  1713,  1722,    25,   647,  1712,  1714,  1745,
    1746,    26,    27,  1749,  1752,  1701,  1766,  1704,  1767,  1718,
    1844,  1779,  1762,  1775,  1789,  1790,  1788,    28,  1900,  1698,
      29,   541,   542,   543,   544,  1791,   637,  1792,  1796,   638,
     639,   640,   641,   642,   643,   644,   645,  1797,  1757,  1442,
     647,  1802,  1922,  1806,  1923,  1807,  2061,  1818,  1827,  1509,
    1821,  1822,  1875,  1825,  1509,  2064,    30,  1826,  1840,  1841,
    1765,  1846,  1765,  1839,  1850,   704,  1847,  1853,   631,  1867,
    1861,  1842,  1871,   704,  1868,  1872,  1874,  1859,  1509,  1963,
    1873,  1972,  1855,  1876,  1964,  1887,  1888,  1259,  1895,  1961,
    1894,  1899,  1902,  1912,  1962,  1979,  1897,  1898,  1892,  1968,
    1919,  1926,  1929,  1931,  1969,  1935,  1946,  1936,  1949,  1970,
    1975,  1917,  1978,  1948,  1906,   637,  1509,  1990,   638,   639,
     640,   641,   642,   643,   644,   645,  1509,  1992,   567,   647,
    1996,  1998,  1991,  2001,  2011,  2002,  2022,  1785,  2019,  1785,
    2025,  2015,  2016,  2017,  2018,  2023,  2028,  2029,  2024,   522,
     523,   524,  2036,  2030,  2038,  2034,  2054,   704,  2041,  2035,
    2056,  2059,  1516,  1458,   525,  1090,   452,   725,   526,   527,
     528,   310,   311,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   451,  1268,  1047,  2006,  1509,   731,  1509,   283,
     853,  1290,  1517,  1750,  2051,  2039,   538,   539,   540,   637,
    2037,  2032,   638,   639,   640,   641,   642,   643,   644,   645,
    1782,  2053,  1443,   647,  2005,  1863,  1864,  1770,  1667,  2045,
    1886,  2055,  1885,   878,   880,   880,  1542,  1017,   729,  1509,
    1963,   878,  1509,   880,   155,  1964,   412,  1640,  1918,  1921,
    1961,  1994,  1636,  1009,  1637,  1962,  1595,   908,   909,   910,
    1968,  1594,  1008,  1266,  1429,  1969,  1733,  1264,  1438,  1157,
    1970,  1239,   866,   924,   704,   961,   698,  1368,  1185,  1736,
     964,  1838,   993,  1203,   963,   277,  1971,   821,   871,   957,
     957,   957,   957,   953,  1206,   922,   965,   966,   967,   968,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,   982,   983,   984,   985,   986,   987,   988,
    1703,  1155,  1824,  1815,  1816,   998,   998,  1573,  1706,  1207,
     898,  1977,  1561,  1564,  1896,  1984,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     296,     0,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,     0,     0,   308,   309,     0,     0,    72,
      73,     0,     0,    74,   310,   311,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,     0,    76,     0,
       0,   312,   313,   314,   315,   316,   317,   318,     0,    77,
       0,     0,   270,   271,   272,     0,     0,     0,     0,   319,
      78,     0,     0,   162,   164,     0,   165,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
      80,     0,     0,    81,     0,     0,     0,     0,     0,    82,
     541,   542,   543,   544,    83,    84,    85,     0,     0,     0,
       0,     0,    86,   320,     0,     0,     0,   321,     0,     0,
      87,   322,     0,    88,     0,    89,    90,    91,     0,     0,
       0,   323,    92,    93,     0,     0,     0,     0,     0,     0,
       0,   324,   325,   326,   327,   328,     0,   329,   330,    94,
      95,   331,   332,    96,   333,    97,    98,    99,   100,   101,
     102,   103,     0,   104,   334,   105,   106,   107,   108,     0,
     109,   335,   110,     0,     0,     0,     0,     0,    13,   111,
     597,     0,   112,   337,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1173,     0,     0,     0,   878,   338,
     339,     0,     0,     0,   880,     0,     0,   704,     0,   340,
     341,   342,     0,     0,     0,     0,   344,     0,     0,     0,
       0,     0,     0,     0,     0,  1205,   113,   114,  1208,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   116,     0,
       0,     0,     0,     0,     0,   117,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     0,   127,     0,
       0,   704,   704,     0,   128,     0,     0,   129,     0,     0,
       0,   130,     0,     0,   131,   132,     0,   133,     0,     0,
     134,     0,   135,     0,     0,     0,   136,   137,     0,     0,
     598,     0,     0,   345,   346,   347,   348,     0,     0,     0,
       0,     0,   998,   142,   998,     0,     0,   349,     0,     0,
       0,   350,   351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,   704,     0,
       0,     0,   144,   145,     0,   704,     0,     0,     0,     0,
      66,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,   352,     0,   353,     0,     0,     0,    72,    73,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,     0,     0,
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
     110,  1413,  1414,  1415,  1416,     0,    13,   111,  1217,     0,
     112,   704,   522,   523,   524,     0,     0,  1421,   704,     0,
     704,     0,     0,     0,     0,     0,     0,   525,     0,     0,
       0,   526,   527,   528,   310,   311,   529,   530,   531,   532,
     533,   534,   535,   536,   537,     0,     0,   225,     0,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,   538,
     539,   540,   115,     0,     0,   998,   116,     0,     0,     0,
       0,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   226,   127,     0,   227,     0,
       0,     0,   128,     0,     0,   129,     0,     0,     0,   130,
       0,     0,   131,   132,     0,   133,     0,     0,   134,     0,
     135,     0,     0,     0,   136,   137,     0,     0,   598,     0,
       0,   138,   139,   140,   141,     0,     0,     0,     0,     0,
       0,   142,     0,   228,     0,   229,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   230,     0,     0,     0,  -218,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
     144,   145,     0,     0,     0,     0,  -218,     0,     0,     0,
       0,  -218,  -218,     0,     0,     0,     0,     0,     0,   931,
       0,     0,     0,     0,     0,     0,  1556,     0,     0,  1383,
       0,     0,     0,     0,     0,   231,     0,  1173,     0,     0,
       0,     0,     0,     0,   878,     0,     0,   878,     0,     0,
       0,     0,     0,  -218,     0,  -218,   704,   704,   704,   704,
       0,     0,     0,     0,     0,     0,   704,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   232,
     233,   234,   235,   236,   237,     0,     0,  1194,     0,     0,
       0,   238,   239,   240,   241,   242,     0,  -218,  -218,  -218,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     649,     0,     0,     0,     0,     0,  1663,     0,     0,  -218,
     243,  -218,  1656,   541,   542,   543,   544,  -218,  -218,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -218,   245,
       0,  -218,   246,     0,   247,     0,  -218,     0,     0,     0,
       0,  -218,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   878,     0,     0,     0,     0,     0,     0,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,     0,     0,
       0,   248,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,     0,     0,     0,     0,     0,
       0,     0,     0,  1383,     0,     0,     0,     0,     0,     0,
    -218,     0,     0,   649,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1726,     0,     0,  1727,     0,
    1728,     0,     0,     0,     0,     0,     0,     0,     0,   649,
       0,     0,     0,  1600,     0,     0,     0,   853,     0,     0,
       0,   878,     0,     0,     0,     0,     0,     0,     0,     0,
     878,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,     0,     0,     0,   649,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,  1195,   649,     0,
       0,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,     0,     0,     0,  1810,  1556,  1556,
       0,  1556,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   649,     0,     0,   878,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,     0,
       0,     0,     0,     0,   878,     0,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,     0,     0,     0,     0,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,  1857,     0,     0,     0,     0,     0,  1862,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
    1601,     0,     0,     0,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,     0,     0,     0,
       0,     0,     0,   296,     0,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,  1197,     0,   308,   309,
       0,     0,    72,    73,     0,     0,    74,   310,   311,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,    76,     0,     0,   312,   313,   314,   315,   316,   317,
     318,  1210,    77,     0,     0,   270,   271,   272,     0,     0,
       0,     0,   319,    78,     0,     0,     0,   164,     0,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,   918,
      79,     0,     0,    80,     0,  1603,    81,     0,  1810,     0,
       0,  1556,    82,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,   320,     0,     0,   878,
     321,     0,     0,    87,   322,     0,    88,     0,    89,    90,
      91,     0,  1995,     0,   323,    92,    93,     0,     0,     0,
       0,     0,     0,     0,   324,   325,   326,   327,   328,     0,
     329,   330,    94,    95,   331,   332,    96,   333,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   334,   105,   106,
     107,   108,     0,   109,   335,   110,     0,     0,     0,     0,
       0,     0,   111,   336,     0,   112,   337,     0,   945,   946,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   947,
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
       0,     0,     0,     0,   319,    78,     0,     0,   162,   164,
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
       0,     0,     0,    13,   111,   597,     0,   112,   337,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   338,   339,     0,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   342,     0,     0,     0,
       0,   344,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   116,     0,     0,     0,     0,     0,     0,
     117,     0,     0,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,   127,     0,     0,     0,     0,     0,   128,
       0,     0,   129,     0,     0,     0,   130,     0,     0,   131,
     132,     0,   133,     0,     0,   134,     0,   135,     0,     0,
       0,  1649,   137,     0,     0,     0,     0,     0,   345,   346,
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
       0,   164,     0,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,    80,     0,     0,
      81,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,    86,
     320,     0,     0,     0,   321,     0,     0,    87,   322,     0,
      88,     0,    89,    90,    91,     0,     0,     0,   323,    92,
      93,     0,     0,     0,     0,     0,     0,     0,   324,   325,
     326,   327,   328,     0,   329,   330,    94,    95,   331,   332,
      96,   333,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   334,   105,   106,   107,   108,     0,   109,   335,   110,
       0,     0,     0,     0,     0,     0,   111,   336,     0,   112,
     337,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,   339,     0,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   342,     0,
     343,     0,     0,   344,     0,     0,     0,     0,     0,     0,
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
     335,   110,     0,     0,     0,     0,     0,     0,   111,   336,
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
       0,     0,     0,    86,     0,     0,     0,     0,   321,     0,
       0,    87,   322,     0,    88,     0,    89,    90,    91,     0,
       0,     0,   323,    92,    93,     0,     0,     0,     0,     0,
       0,     0,   324,   325,   326,   327,   328,     0,   329,   330,
      94,    95,   331,   332,    96,   333,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   334,   105,   106,   107,   108,
       0,   109,   335,   110,     0,     0,     0,     0,     0,     0,
     111,   607,     0,   112,     0,     0,     0,     0,     0,  1737,
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
       0,     0,     0,   144,   145,     0,     0,     0,     0,     0,
       0,  1738,     0,     0,     0,     0,     0,     0,  1739,     0,
       0,     0,     0,   296,   353,   297,   298,   299,   300,   301,
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
       0,     0,   111,   713,   714,   112,     0,     0,     0,     0,
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
     110,     0,     0,     0,     0,     0,     0,   111,   607,     0,
     112,     0,     0,   995,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   338,   339,     0,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
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
       0,     0,   111,   607,     0,   112,     0,     0,     0,     0,
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
     110,     0,     0,     0,     0,     0,     0,   111,   607,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   338,   339,     0,
       0,     0,     0,     0,     0,     0,     0,   340,   341,   342,
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
     109,   335,   110,     0,     0,     0,     0,     0,     0,   111,
     607,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   338,
     339,     0,     0,     0,     0,     0,     0,     0,     0,   340,
     341,   342,     0,     0,     0,     0,   344,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   111,   607,   702,   112,
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
       0,   111,   713,     0,   112,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   111,   607,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,   339,     0,     0,
       0,     0,     0,     0,     0,     0,   340,   341,   342,     0,
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
       0,     0,   111,   930,     0,   112,     0,     0,     0,     0,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
       0,     0,     0,     0,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,   127,     0,     0,     0,     0,     0,   128,     0,     0,
     129,     0,     0,     0,   130,     0,     0,   131,   132,     0,
     133,     0,     0,   134,     0,   135,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   138,   139,   140,   141,
    1419,     0,     0,     0,     0,     0,   142,     0,    66,    67,
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
       0,    89,    90,    91,     0,   649,     0,     0,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
       0,    97,    98,    99,   100,   101,   102,   103,     0,   104,
       0,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,     0,     0,     0,     0,   111,     0,     0,   112,     0,
       0,     0,     0,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,     0,     0,     0,     0,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,     0,     0,     0,
     115,     0,     0,    15,   116,     0,     0,     0,     0,     0,
       0,   117,    16,  1483,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,    25,     0,     0,     0,     0,
     128,    26,    27,   129,     0,     0,     0,   130,     0,     0,
     131,   132,     0,   133,     0,     0,   134,    28,   135,  1484,
      29,     0,   136,   137,     0,     0,     0,     0,     0,   138,
     139,   140,   141,  1930,     0,     0,     0,     0,     0,   142,
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
       0,     0,     0,     0,   111,     0,     0,   112,     0,     0,
       0,     0,     0,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,     0,     0,     0,     0,   660,   661,   662,
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
       0,     0,     0,    82,     0,     0,     0,     0,    83,    84,
      85,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    88,     0,    89,
      90,    91,   649,     0,     0,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,    96,     0,    97,
      98,    99,   100,   101,   102,   103,     0,   104,     0,   105,
     106,   107,   108,     0,   109,     0,   110,     0,     0,     0,
       0,     0,     0,   111,     0,     0,   112,     0,     0,     0,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
       0,     0,     0,     0,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,     0,     0,     0,     0,     0,     0,   115,     0,
       0,    15,   116,     0,     0,     0,     0,     0,  1780,   117,
      16,  1483,  1781,   119,   120,   121,   122,   123,   124,   125,
     126,   673,   127,    25,     0,     0,     0,     0,   128,    26,
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
       0,     0,    82,     0,  1247,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,    89,    90,
      91,   649,     0,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,     0,   109,     0,   110,     0,     0,     0,     0,
       0,     0,   111,     0,     0,   112,     0,     0,     0,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,     0,
       0,     0,     0,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,     0,     0,     0,     0,
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
       0,    82,     0,     0,     0,     0,    83,    84,    85,  1598,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,     0,    89,    90,    91,
       0,   649,     0,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,    96,     0,    97,    98,    99,
     100,   101,   102,   103,     0,   104,     0,   105,   106,   107,
     108,  1599,   109,     0,   110,     0,     0,     0,     0,     0,
       0,   111,     0,     0,   112,     0,     0,     0,     0,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,     0,
       0,     0,     0,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
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
       0,    87,     0,     0,    88,     0,    89,    90,    91,   649,
       0,     0,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,    96,     0,    97,    98,    99,   100,
     101,   102,   103,     0,   104,     0,   105,   106,   107,   108,
       0,   109,     0,   110,     0,     0,     0,     0,     0,     0,
     111,     0,     0,   112,     0,     0,     0,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,     0,     0,     0,
       0,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,     0,     0,     0,     0,     0,     0,
    1146,  1147,     0,     0,     0,     0,     0,   113,   114,     0,
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
      87,     0,     0,    88,     0,    89,    90,    91,   649,     0,
       0,     0,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,    96,     0,    97,    98,    99,   100,   101,
     102,   103,     0,   104,     0,   105,   106,   107,   108,     0,
     109,     0,   110,     0,     0,     0,     0,  1196,     0,   111,
       0,     0,   112,     0,     0,     0,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,     0,     0,     0,     0,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,     0,     0,     0,     0,     0,     0,     0,
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
     103,     0,   104,     0,   105,   106,   107,   108,  1554,   109,
       0,   110,     0,     0,     0,     0,     0,     0,   111,     0,
       0,   112,     0,     0,     0,     0,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,     0,     0,     0,     0,
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
    1602,   109,     0,   110,     0,     0,     0,     0,     0,     0,
     111,     0,     0,   112,     0,     0,     0,     0,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,     0,     0,
       0,     0,   660,   661,   662,   663,   664,   665,   666,   667,
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
     107,   108,  1605,   109,     0,   726,     0,     0,     0,     0,
       0,     0,   111,     0,     0,   112,     0,     0,     0,     0,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
       0,     0,     0,     0,   660,   661,   662,   663,   664,   665,
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
       0,     0,     0,     0,   111,     0,     0,   112,     0,     0,
       0,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,     0,     0,     0,     0,   660,   661,   662,   663,   664,
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
     104,     0,   105,   106,   107,   108,  1834,   109,     0,   110,
       0,     0,     0,     0,     0,     0,   111,   581,     0,   112,
       0,     0,     0,     0,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,     0,     0,     0,     0,   660,   661,
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
       0,   110,     0,     0,     0,     0,     0,     0,   111,     0,
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
    1835,   109,     0,   110,     0,     0,     0,     0,     0,     0,
     111,     0,     0,   112,     0,     0,     0,     0,   650,   651,
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
      91,     0,   649,     0,     0,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,     0,    97,    98,
      99,   100,   101,   102,   103,     0,   104,     0,   105,   106,
     107,   108,  1836,   109,     0,   110,     0,     0,     0,     0,
       0,     0,   111,     0,     0,   112,     0,     0,     0,     0,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
       0,     0,     0,     0,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   111,    14,     0,   112,
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
       0,  1092,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,   109,     0,   110,     0,     0,     0,     0,     0,     0,
     111,     0,     0,   112,     0,     0,     0,     0,     0,     0,
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
       0,     0,   111,   423,     0,   112,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   111,     0,     0,   112,
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
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1231,     0,     0,     0,     0,   144,   145
};

static const yytype_int16 yycheck[] =
{
       0,    35,   284,     4,   409,     0,    24,   294,     9,   162,
       0,   772,    13,   294,   426,     0,    17,    18,   216,   161,
       0,   764,   630,   586,   284,     0,   214,  1063,   935,   171,
       0,   594,   543,    34,    35,   284,   679,   429,   583,  1303,
       0,  1369,   588,    26,   793,     0,   188,   189,   542,   320,
     596,   193,    11,    11,    16,    14,   445,   930,     0,   954,
     955,   209,     3,   457,    65,   281,     3,   782,   783,   784,
    1526,   937,    85,   559,    17,    27,     0,    83,     4,   501,
     503,   504,   505,   559,   633,   507,   508,   509,    42,    43,
     618,   882,    18,   884,   746,   747,  1088,   336,   337,  1701,
     752,    14,  1704,  1181,   895,   158,  1088,  1436,   166,   167,
     168,  1439,   174,   352,    83,    11,    83,   229,   133,  1447,
       3,    66,   173,     0,    58,   341,    21,    22,   409,    83,
      58,   336,   111,     5,     6,     7,     8,     9,    10,    65,
     109,   262,   740,   110,  1439,   111,  1524,   111,   111,   173,
     151,   152,  1447,    87,   111,   171,   157,     5,     6,     7,
       8,     9,    10,   111,  1658,    66,   172,   279,   280,    81,
      53,   769,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   172,   173,   174,   175,   176,   173,   151,   210,
     211,   212,   172,   173,   174,   175,   176,   172,   173,   174,
     175,   176,   708,    55,   207,   226,   152,  1683,   173,   230,
     172,   173,   174,   175,   176,   159,   173,   238,   239,   240,
     241,   242,   243,   244,   245,     3,   247,   248,   172,   173,
     174,   175,   176,   254,   255,  1633,    11,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   466,     3,
     746,   747,   173,   274,   275,  1769,   752,   173,   173,   341,
     281,  1775,   687,   115,  1613,   211,   212,   345,   341,   428,
     682,   342,  1894,   294,   295,   172,   173,   174,   175,   176,
     171,   214,    66,   174,   230,   453,   834,   835,  1215,  1058,
     262,    66,   238,   239,   240,   241,   242,   866,   342,   245,
     274,   247,   248,   324,  1402,   341,   339,  1319,   891,   255,
     841,   171,   258,   259,   260,   261,   262,  1319,   264,   265,
     266,   267,   268,   104,  1217,   734,   735,   489,   842,   110,
    1216,   897,   995,   315,   997,   281,   561,  1072,   597,   630,
     754,   289,   341,    87,   333,  1859,   367,   572,   573,   338,
    1698,   296,   297,   298,  1868,   861,   317,   341,   341,   316,
     803,   520,  1907,   805,   806,   807,   808,   346,   346,  1041,
     151,  1182,   597,   341,  1185,  1659,   341,   158,   637,   271,
    1664,   174,   607,    64,    65,    66,    67,   171,   647,   173,
     258,    79,   336,   261,     0,     3,   171,   622,   173,   420,
     345,     3,   423,   173,  1880,   426,   173,   173,   429,    64,
       3,   636,   173,    83,   192,   193,  1930,   171,  1932,   173,
     178,   367,    64,    65,    66,    67,   447,   279,    66,    84,
    1975,   174,   174,    66,   111,   174,   174,   111,   174,   336,
     461,   444,   133,   110,   465,  1889,   266,   174,   393,   394,
     341,   753,    16,   474,   475,   476,   477,   478,   174,   234,
       0,   174,   174,   426,   485,   133,   250,   521,   627,   771,
     491,   492,   274,   753,   495,   342,   497,   498,   499,   500,
     190,   341,   174,   153,   753,   174,   156,   174,   713,   174,
     708,   771,  1776,   251,   515,   907,  1411,  1412,   519,   283,
     521,   447,   771,   436,    84,    69,    70,    71,   810,    73,
      74,   174,    76,     0,  2028,   461,   174,   110,   463,   465,
     173,   341,   824,   298,   545,   174,   110,   298,   474,   475,
     476,   477,   478,   171,   173,   173,   178,   174,   171,   320,
     173,   810,   174,   314,   824,  1041,   492,   174,   341,   495,
     768,   497,   498,   499,   500,   824,   174,   174,   865,   174,
     341,  1330,   142,   171,   865,   173,  1762,   178,   249,  1380,
     174,   173,   342,   864,  1139,   342,   342,   615,   174,   617,
    1391,   342,   174,   250,   266,   262,    86,  1398,   262,   342,
      66,   272,   176,  1221,   110,  1258,  2040,   252,   341,   341,
    1228,  1167,   341,   341,   766,   341,   170,   249,   171,   630,
     631,   158,   250,   634,   341,   158,   116,   173,   118,   119,
     120,   121,   122,   123,   125,   341,   126,   174,   341,   341,
     272,   174,   172,   173,   174,   175,   176,   581,   929,   930,
     251,   127,   867,   861,    67,   283,   132,   906,   149,   341,
     283,   270,   341,   597,   341,   676,   341,   678,   696,   341,
     176,   682,   683,   607,   597,    88,    66,   630,   927,   281,
      99,   313,   963,  1115,   174,  1871,   621,  1873,   341,  1606,
     152,   110,   154,   341,   581,   172,   173,   174,   175,   176,
     949,   254,   341,   952,   953,   171,   279,   173,   341,    86,
     597,   265,  1758,  1759,   341,   110,   727,   265,   110,   341,
     607,   274,   228,   676,   341,   134,     5,     6,     7,     8,
       9,    10,   279,   341,   341,   127,   341,    55,    83,   116,
     132,   118,   119,   120,   121,   122,   123,   341,   253,   126,
     341,   900,   325,   229,   765,   341,   151,   176,   266,   341,
     683,  1042,     5,   269,   269,   115,   272,   266,    11,    56,
     781,   782,   783,   784,   250,    62,   282,   282,   325,   713,
     791,   171,   793,   173,   176,    64,    65,    66,    67,  1081,
     713,   727,   262,   804,    69,    70,    71,   115,    73,    74,
      75,    76,   152,   831,   154,   214,   215,   216,   217,   218,
    1102,  1081,  1430,   341,  1432,   160,   230,   345,   163,   847,
     115,   237,  1081,    87,  1397,   241,   713,  1400,    55,   765,
     320,   250,  1102,   262,  1042,  1237,   228,   229,   252,  1360,
     252,    39,    40,  1102,   258,   259,  1033,   165,  1035,  1036,
    1282,  1283,  1284,   252,   865,  1257,   102,   868,   250,   154,
     178,  1069,   274,   277,    11,   102,   877,   319,   804,  1161,
    1162,   233,  1021,    71,   885,   274,    88,   269,   277,   278,
     272,   892,   279,    95,    96,   279,  1639,  1640,   115,   233,
     282,  1161,  1162,   219,   220,   170,   907,    88,   833,   178,
      91,   279,  1161,  1162,   165,   301,    97,   303,  1106,  1107,
     219,   220,  1064,   231,   232,   233,   234,   235,   929,   930,
     166,   167,   168,   279,   935,   936,   937,   110,   174,   166,
     167,   168,   855,   856,   857,   301,  1217,   303,   165,   279,
    1221,   877,   260,   320,    42,    43,  1881,  1228,  1883,  1884,
    1885,   178,    69,    70,    71,   273,    73,    74,   301,    76,
     303,   279,   166,   167,   168,   148,   284,   150,   151,   227,
     249,   232,   233,   234,   235,   296,   929,   930,   913,   279,
     915,   180,   181,   182,   183,   184,   185,   186,   187,  1607,
      82,    83,   191,   272,   172,   173,   930,   301,   176,   303,
    1011,   319,   177,   321,   231,   232,   233,   234,   235,   116,
     117,   118,   119,   120,   121,   122,   123,    89,    90,   126,
      69,    70,    71,   776,   777,   778,   779,    76,  1039,  1040,
     279,   954,   955,   260,   313,   255,   256,  1048,  1049,   323,
     324,  1052,  1333,   930,   177,  1056,  1057,  1058,  1059,   802,
     134,  1624,   279,   170,  1872,  1204,  1874,   284,  1350,   100,
     101,  1072,  1211,   341,  1213,   104,  1077,    64,    65,  1484,
      67,   166,   167,   168,   279,   280,  1087,   285,  1088,   174,
    1091,  1092,  1093,  1088,   297,  1019,   315,   316,   317,   318,
     134,  1350,   319,  1104,   321,     5,     6,     7,     8,     9,
      10,  1112,  1037,   192,   193,  1028,  1059,     3,   290,   291,
     292,   293,   294,   295,   643,   644,   645,     3,  1088,   134,
      22,  1057,   173,  1088,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   173,  1088,   125,  1091,   290,
     291,   292,   293,   294,   295,  1718,   182,   183,   173,  1430,
     173,  1432,    93,    94,    89,    90,  1092,     3,     4,   320,
       5,     6,     7,   173,  1737,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    20,  1112,   327,   328,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,  1442,  1443,   210,   211,   212,   213,   214,
     215,   216,   217,   218,  1215,  1216,  1217,    52,    53,    54,
    1221,   325,   326,   320,    64,    65,   173,  1228,  1510,  1511,
    1231,  1513,  1644,   174,   175,  1440,  1237,  1238,  1519,  1520,
    1993,  1994,   759,   760,   173,  2006,   289,   290,   557,   558,
    1510,  1511,   173,  1513,   173,   173,  1257,   173,  1259,    17,
     173,  1510,  1511,   173,  1513,   173,   173,   173,   173,   173,
    1409,  1410,   173,   188,  1217,   173,   173,   173,  1221,  1484,
    1419,  1486,   173,   173,   331,  1228,   290,   291,   292,   293,
     294,   295,   342,  1217,   173,   130,   131,    55,   173,   341,
      58,   173,  1303,  1304,  1217,   281,   134,  1220,   331,  1343,
     826,  1312,    92,   829,   830,   831,    98,   341,   320,  1319,
     299,   133,  1247,   133,  1319,   133,  1479,   313,  1609,  1330,
     111,   847,   848,   849,   850,   112,  1607,  1355,   112,  1357,
    1217,  1359,  1343,  1344,   174,   103,  1364,   105,   262,  1912,
     298,  1276,   171,   237,   227,   173,   173,   115,   173,  1319,
     173,   250,  1767,   233,  1319,   171,   173,    38,  1369,  1294,
     173,   173,  1297,  1298,   173,   173,   173,  1319,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,  1392,   177,     5,     6,     7,   298,   173,   173,   177,
     173,   173,   173,   173,   169,  1610,   342,   165,    20,    23,
     174,   112,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,   155,   238,     3,  1430,
     173,  1432,   174,   238,   174,  1436,   174,   171,  1439,   206,
      52,    53,    54,   173,   283,   173,  1447,   173,  1653,   344,
     174,   286,   287,   288,   289,  1660,    82,    79,   173,   111,
     243,   219,   220,   221,   222,   223,   224,   257,   104,   273,
     111,   171,   281,   231,   232,   233,   234,   235,   171,   280,
     314,   173,  1483,   173,   238,    20,   234,  1430,    99,  1432,
      23,   320,  1779,   261,    64,    65,    66,    67,  1411,  1412,
     320,   104,   260,   265,   341,   268,  1540,    77,    78,    79,
      80,   111,   281,   158,  1515,   273,    86,   341,   173,   341,
     320,   279,   146,   102,   282,   312,   284,   174,   177,   109,
     287,   180,   181,   182,   183,   184,   185,   186,   187,  1540,
    1483,   190,   191,  1468,   174,  1470,  1471,   302,   341,   341,
       5,     6,     7,     0,     1,   110,   134,  1483,   174,   174,
     173,    88,   341,   321,   173,    20,  1567,   173,   111,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,   332,   261,   341,  1791,   257,  1870,   258,
      90,   110,   315,   111,   257,   341,   274,    52,    53,    54,
     265,   171,   174,   173,    51,  1606,  1607,   174,   174,   174,
    1870,   322,  1613,   174,   265,   265,   341,    64,    65,    66,
      67,  1870,   174,   174,   174,   174,   174,   341,   281,   341,
      77,    78,    79,    80,   174,   174,   174,  1638,   174,    86,
     174,   173,   341,  1644,  1645,   174,   320,   341,   104,   174,
     161,  1793,  1939,   173,   296,   312,   173,   173,  1659,   174,
     230,    75,    75,  1664,  1607,    72,   173,   104,   108,   239,
     240,   104,   242,   174,   286,   287,   288,   289,  1679,   102,
     174,   174,   252,  1888,   174,   266,   133,    16,   258,   259,
     266,   320,   341,   174,   111,     3,   241,  1698,  1699,   236,
     264,  1644,   341,     3,   274,   236,   264,   277,   267,   171,
    1635,   171,   173,    77,  1715,   174,  1641,  1642,   320,   174,
     174,   143,  2004,   143,   171,   174,   173,   250,  1933,   341,
     174,   174,    75,  1875,   281,   173,   104,   328,   174,   174,
     250,  1666,   341,   313,  2004,  1746,   274,   173,   341,   238,
     237,   308,   238,  1679,   310,  2004,   343,     5,   128,   177,
     171,  1762,   180,   181,   182,   183,   184,   185,   186,   187,
     173,   228,   190,   191,   174,  1776,   330,   174,  1779,   341,
     174,   174,   342,   230,   173,   338,   339,  1788,   174,   265,
     265,   344,   239,   240,   265,   242,   349,   244,   245,   246,
     247,   248,   249,   174,   162,   252,   191,   265,   174,   257,
     273,   258,   259,   110,    83,   341,   173,   341,   173,   341,
    1745,   173,   238,   302,   320,   110,   272,   274,  1829,   341,
     277,   286,   287,   288,   289,   173,   177,   264,   172,   180,
     181,   182,   183,   184,   185,   186,   187,   266,  1849,   190,
     191,   112,  1853,    85,  1855,    85,  2054,   110,   174,  1860,
     110,   110,  1788,   265,  1865,  2063,   313,   265,   336,   336,
    1871,   341,  1873,   325,     3,   428,   229,   273,   262,   133,
     312,   334,   238,   436,   309,     5,     5,   302,  1889,  1889,
     238,  1892,   342,   129,  1889,   329,   301,   342,   154,  1889,
     341,   156,     3,   190,  1889,  1906,   151,   151,   320,  1889,
      59,   174,   300,   312,  1889,   133,   173,   312,   113,  1889,
     159,  1846,   156,   174,   153,   177,  1927,   337,   180,   181,
     182,   183,   184,   185,   186,   187,  1937,    60,  1939,   191,
     133,   300,   325,   312,   265,   312,   325,  1872,   310,  1874,
      61,  1952,  1953,  1954,  1955,   335,   302,   306,   336,     5,
       6,     7,   265,   308,   265,    64,   173,   520,   318,    65,
      41,   133,  1319,  1269,    20,   791,   207,   446,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,   206,  1030,   754,  1946,  1997,   448,  1999,    35,
     553,  1058,  1330,  1633,  2035,  2013,    52,    53,    54,   177,
    2012,  2005,   180,   181,   182,   183,   184,   185,   186,   187,
    1664,  2040,   190,   191,  1945,  1774,  1774,  1655,  1513,  2030,
    1800,  2043,  1799,   586,   587,   588,  1350,   697,   447,  2040,
    2040,   594,  2043,   596,     8,  2040,   155,  1473,  1849,  1852,
    2040,  1921,  1470,   687,  1471,  2040,  1410,   610,   611,   612,
    2040,  1409,   685,  1028,  1225,  2040,  1612,  1019,  1238,   865,
    2040,   939,   564,   626,   627,   646,   420,  1145,   899,  1620,
     648,  1737,   676,   916,   647,    34,  1891,   518,   573,   642,
     643,   644,   645,   639,   920,   625,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
    1559,   862,  1718,  1702,  1704,   678,   679,  1390,  1566,   920,
     595,  1903,  1379,  1382,  1823,  1911,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    19,    -1,    -1,    22,
      23,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
     286,   287,   288,   289,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,   114,    -1,   116,    -1,   118,   119,   120,    -1,    -1,
      -1,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,    -1,
     163,   164,   165,    -1,    -1,    -1,    -1,    -1,   171,   172,
     173,    -1,   175,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   887,    -1,    -1,    -1,   891,   192,
     193,    -1,    -1,    -1,   897,    -1,    -1,   900,    -1,   202,
     203,   204,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   918,   219,   220,   921,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,
      -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,    -1,
      -1,   954,   955,    -1,   257,    -1,    -1,   260,    -1,    -1,
      -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,
     273,    -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,
     283,    -1,    -1,   286,   287,   288,   289,    -1,    -1,    -1,
      -1,    -1,   995,   296,   997,    -1,    -1,   300,    -1,    -1,
      -1,   304,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,  1021,    -1,
      -1,    -1,   325,   326,    -1,  1028,    -1,    -1,    -1,    -1,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,   344,    -1,   346,    -1,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
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
      33,    34,    35,    36,    37,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    52,
      53,    54,   227,    -1,    -1,  1258,   231,    -1,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    55,   251,    -1,    58,    -1,
      -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,   264,
      -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,    -1,
     275,    -1,    -1,    -1,   279,   280,    -1,    -1,   283,    -1,
      -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,   103,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,
     325,   326,    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,
      -1,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,   344,
      -1,    -1,    -1,    -1,    -1,    -1,  1379,    -1,    -1,  1382,
      -1,    -1,    -1,    -1,    -1,   165,    -1,  1390,    -1,    -1,
      -1,    -1,    -1,    -1,  1397,    -1,    -1,  1400,    -1,    -1,
      -1,    -1,    -1,   174,    -1,   176,  1409,  1410,  1411,  1412,
      -1,    -1,    -1,    -1,    -1,    -1,  1419,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,   221,   222,   223,   224,    -1,    -1,   111,    -1,    -1,
      -1,   231,   232,   233,   234,   235,    -1,   228,   229,   230,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,   279,    -1,    -1,   250,
     260,   252,  1485,   286,   287,   288,   289,   258,   259,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   269,   279,
      -1,   272,   282,    -1,   284,    -1,   277,    -1,    -1,    -1,
      -1,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1524,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,    -1,    -1,
      -1,   321,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1566,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1598,    -1,    -1,  1601,    -1,
    1603,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
      -1,    -1,    -1,   174,    -1,    -1,    -1,  1620,    -1,    -1,
      -1,  1624,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1633,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,    -1,    -1,    -1,   134,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   341,   134,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,    -1,  1700,  1701,  1702,
      -1,  1704,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   134,    -1,    -1,  1718,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,    -1,
      -1,    -1,    -1,    -1,  1737,    -1,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,    -1,    -1,    -1,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,  1766,    -1,    -1,    -1,    -1,    -1,  1772,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     341,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   341,    -1,    18,    19,
      -1,    -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,   341,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   301,
      80,    -1,    -1,    83,    -1,   341,    86,    -1,  1891,    -1,
      -1,  1894,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,    -1,  1912,
     110,    -1,    -1,   113,   114,    -1,   116,    -1,   118,   119,
     120,    -1,  1925,    -1,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,
      -1,    -1,   172,   173,    -1,   175,   176,    -1,   178,   179,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
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
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,
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
      -1,    -1,    -1,   171,   172,   173,    -1,   175,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   344,     3,   346,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,   105,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,    -1,   163,   164,   165,
      -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,    -1,
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
     164,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,
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
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,   110,    -1,
      -1,   113,   114,    -1,   116,    -1,   118,   119,   120,    -1,
      -1,    -1,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,   181,
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
      -1,    -1,    -1,   325,   326,    -1,    -1,    -1,    -1,    -1,
      -1,   333,    -1,    -1,    -1,    -1,    -1,    -1,   340,    -1,
      -1,    -1,    -1,     3,   346,     5,     6,     7,     8,     9,
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
      -1,    -1,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
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
     165,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,
     175,    -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
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
      -1,    -1,   172,   173,    -1,   175,    -1,    -1,    -1,    -1,
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
     165,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
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
     163,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,
     173,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,
     203,   204,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,    -1,
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
      -1,    -1,   172,   173,    -1,   175,    -1,    -1,    -1,    -1,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
      -1,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
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
      -1,   118,   119,   120,    -1,   134,    -1,    -1,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
      -1,   158,   159,   160,   161,    -1,   163,    -1,   165,    -1,
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
     287,   288,   289,   302,    -1,    -1,    -1,    -1,    -1,   296,
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
      -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,    -1,    -1,    -1,    -1,   206,   207,   208,
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
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,
     119,   120,   134,    -1,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,    -1,   158,
     159,   160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
      -1,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,   230,   231,    -1,    -1,    -1,    -1,    -1,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   263,   251,   252,    -1,    -1,    -1,    -1,   257,   258,
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
      -1,    -1,    92,    -1,   107,    -1,    -1,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,
     120,   134,    -1,    -1,    -1,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,    -1,   158,   159,
     160,   161,    -1,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,    -1,
      -1,    -1,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,
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
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,   112,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,
      -1,   134,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,    -1,   158,   159,   160,
     161,   174,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,    -1,
      -1,    -1,    -1,   206,   207,   208,   209,   210,   211,   212,
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
      -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,   134,
      -1,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,    -1,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,    -1,   158,   159,   160,   161,
      -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,   175,    -1,    -1,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,    -1,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
     225,   226,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,
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
     113,    -1,    -1,   116,    -1,   118,   119,   120,   134,    -1,
      -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,    -1,   146,    -1,   148,   149,   150,   151,   152,
     153,   154,    -1,   156,    -1,   158,   159,   160,   161,    -1,
     163,    -1,   165,    -1,    -1,    -1,    -1,   183,    -1,   172,
      -1,    -1,   175,    -1,    -1,    -1,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,    -1,    -1,    -1,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      -1,   175,    -1,    -1,    -1,    -1,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,    -1,    -1,    -1,    -1,
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
     174,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,   175,    -1,    -1,    -1,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,    -1,    -1,
      -1,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
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
      -1,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
      -1,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
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
      -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,    -1,    -1,    -1,    -1,   206,   207,   208,   209,   210,
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
      -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,
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
     174,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,   175,    -1,    -1,    -1,    -1,   192,   193,
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
      -1,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
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
      -1,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
      -1,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,    -1,    -1,    -1,
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
      -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   172,   173,    -1,   175,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,   175,
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
     547,   564,   574,   582,   609,   664,   574,   173,   591,   591,
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
     173,   525,   174,   174,   174,   174,   341,   342,   591,   591,
     591,   668,   171,   624,   668,   624,   669,   564,   301,   645,
     646,   303,   647,   649,   591,   529,   644,   341,   345,    68,
     173,   344,   536,   556,   557,   589,   609,   638,   664,   548,
     549,   664,   535,   664,   564,   178,   179,   189,   574,   584,
     100,   101,   577,   577,   173,   173,   579,   591,   579,   579,
     579,   565,   574,   584,   587,   591,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   591,   110,
     176,   173,   206,   616,   174,   178,   206,   251,   591,   650,
     664,   650,     8,     9,    10,   206,   664,   283,   525,   524,
      82,    79,    88,    95,    96,   502,   668,   501,   174,   173,
     174,   341,    14,   593,   653,   243,   359,   174,   341,   171,
     341,   375,   171,   374,   638,   387,   387,   257,   404,   281,
     273,   104,   171,   652,   652,   652,   655,   399,   229,   279,
     280,   392,   393,    67,    88,   391,   393,   279,   393,   111,
      16,   512,   513,   512,   638,   444,   314,   653,   404,   171,
     655,   398,   173,   409,   409,   409,   409,   238,   206,   476,
     477,   664,   476,   476,   476,   261,    20,   268,   672,   673,
     365,   234,   185,   229,   412,   413,   414,   416,   419,   427,
     428,   439,   661,   664,    99,   405,   320,   320,    64,    65,
      67,   480,   265,   409,   493,   638,   495,   495,   495,   495,
     174,   494,   655,   655,   651,   668,   651,    23,   651,   651,
     651,   668,    53,   656,   669,   624,   624,   626,   625,   281,
     651,   668,   651,   651,   651,   341,   225,   226,   572,   104,
     550,   550,   550,   593,   653,   569,   589,   534,   535,   564,
     664,   320,   341,   111,   638,   158,   722,   341,   722,   722,
     664,   684,   173,   591,   698,   699,   700,   341,   592,   664,
     706,   146,   710,   722,   675,   566,   526,   529,   530,   174,
     341,   182,   183,   574,   111,   341,   183,   341,   174,   287,
     669,   174,   669,   633,   302,   591,   645,   649,   591,   312,
     341,   341,   174,   341,   574,   589,   609,   173,   536,   557,
     558,   341,    69,    70,    71,    73,    74,    76,   170,   537,
     539,   320,   559,   664,   559,   560,   560,   342,   341,   554,
     109,   561,   574,   574,   574,   527,   527,   107,   589,   110,
     332,   596,   597,   650,   174,   650,   174,   342,   341,   342,
     664,    93,    94,    88,   544,   529,   531,   261,   388,   111,
     376,   258,   376,   376,   376,   669,   257,   664,   664,   652,
     589,   653,   664,   664,   664,    90,    89,    90,   664,   638,
     413,   609,   110,   515,   315,   515,   444,   111,   257,   653,
     476,   265,   664,   174,   341,   655,   174,   174,   174,    56,
      62,   371,   274,   664,   666,   674,   354,   355,   367,   368,
     369,   372,   377,   389,   394,   492,   609,   638,   664,   174,
     341,   253,   269,   282,   436,   130,   131,   415,   655,   171,
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
     108,   563,   190,   190,   174,   174,   669,   104,   174,   102,
     598,   174,   174,   206,   650,   664,   174,   266,   371,   266,
      16,   669,   495,   495,   495,   252,   274,   320,   484,   669,
     111,   173,   316,   519,   520,   669,   669,   174,     3,    66,
      80,    86,   237,   240,   276,   300,   306,   311,   360,   362,
     363,   372,   377,   389,   394,   450,   453,   455,   456,   457,
     461,   463,   469,   471,   472,   492,   496,   497,   546,   664,
     664,   236,   241,   236,   664,   341,   369,   414,   664,   264,
     264,   445,   127,   132,   250,   417,   418,   421,   422,   424,
     425,   428,   267,     3,   171,   411,   171,   443,   438,   664,
     173,    77,   494,   654,   668,   668,   668,   626,   668,   562,
     639,   664,   174,   174,   174,   139,   591,   685,   691,   692,
     693,   723,   722,   250,   727,   174,   341,   320,   110,   148,
     150,   151,   695,   699,   722,   664,   702,   143,   143,   174,
     592,   722,   125,   149,   592,   712,   713,   714,   715,   716,
     731,   281,   174,   174,   530,   526,   527,   527,   112,   174,
     174,   341,   174,   341,   529,   174,   345,    75,   557,    16,
     265,   540,   557,   173,   666,   562,   564,   574,   574,   562,
     104,    85,   339,   599,   600,   174,   174,   328,   274,   250,
      99,   110,   176,   250,   669,   341,   519,   520,   173,   509,
     509,   341,   238,   237,   532,   238,   458,   459,   638,   279,
     442,   462,   564,   301,   466,   467,   591,   564,   310,   451,
     308,   343,   655,   279,   475,   655,     5,   475,   664,   445,
     445,   128,   423,   590,   421,   110,   176,   228,   269,   272,
     282,   435,   437,   173,    83,   172,   228,   330,   481,   438,
      64,    84,   252,   174,   174,   174,   174,   174,   341,   342,
     173,   341,   341,   694,   341,   174,   725,   664,   726,   265,
     265,   265,   265,   174,   174,   320,   730,   731,   341,   110,
     151,   717,   162,   174,   174,   174,   591,   591,   591,   559,
     557,   445,   564,   540,   666,   174,   570,   181,   333,   340,
     592,   601,   602,   603,   604,   257,   273,     3,   110,   110,
     423,   669,    83,   518,   174,   510,   511,   664,   512,   512,
     669,   669,   238,   553,   447,   664,   173,   173,   564,   303,
     466,   468,   301,   464,   465,   302,   451,   453,   564,   173,
     237,   241,   450,     4,   448,   669,   237,   241,   272,   320,
     110,   173,   264,   638,   420,   421,   172,   266,   327,   328,
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
#line 616 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (m->sym) {
			append_symbol(m->sym->data.lval, (yyval.sym));
			(yyval.sym) = m->sym;
		} else {
			m->sym = (yyval.sym) = (yyvsp[-1].sym);
		}
		YYACCEPT;
	}
#line 6569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 626 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 631 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 6593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 640 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 645 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 6617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 655 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 660 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 6641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 670 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->scanner.mode == LINE_1) {
				yyerror(m, "SQL debugging only supported in interactive mode");
				YYABORT;
			  }
		  	  m->emod |= mod_debug;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 679 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); YYACCEPT; }
#line 6661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 680 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 685 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); YYACCEPT; }
#line 6677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 686 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = (yyvsp[-1].sym); YYACCEPT; }
#line 6683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 687 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 6689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 688 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 6695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 689 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 6701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 690 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYABORT; }
#line 6707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 717 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-3].l));
		append_list(l, (yyvsp[-2].l));
		append_symbol(l, (yyvsp[-1].sym));
		append_int(l, (yyvsp[0].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
#line 6718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 727 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 6724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 728 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 6730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 733 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[0].l)); }
#line 6736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 734 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 6742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 739 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l) );
		append_type(l, &(yyvsp[0].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
#line 6751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 744 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l) );
		append_type(l, &(yyvsp[0].type) );
		(yyval.l) = append_symbol((yyvsp[-3].l), _symbol_create_list( SQL_DECLARE, l)); }
#line 6760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 752 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, (yyvsp[-2].sval) );
		append_symbol(l, (yyvsp[0].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 757 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 765 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 773 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 781 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 789 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 795 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[0].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 804 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-3].l));
		append_symbol(l, (yyvsp[-2].sym));
		append_symbol(l, (yyvsp[-1].sym));
		append_list(l, (yyvsp[0].l));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
#line 6847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 811 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_int(l, (yyvsp[0].i_val));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
#line 6856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 819 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[0].sval) );
	  append_string((yyval.l), NULL ); }
#line 6864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 823 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[0].sval) ); }
#line 6872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 827 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[-2].sval) );
	  append_string((yyval.l), (yyvsp[0].sval) ); }
#line 6880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 836 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 6886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 837 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[0].sval) ); }
#line 6892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 841 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 6898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 846 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 6904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 848 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym) ); }
#line 6910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 854 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 6916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 855 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 6922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 859 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 6928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 860 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_role; }
#line 6934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 865 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
#line 6946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 875 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
#line 6957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 884 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 6963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 886 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 6969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 890 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 6975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 891 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 6981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 895 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 6987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 896 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 6993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 901 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 6999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 902 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 7005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 907 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[-4].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
#line 7017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 915 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[-4].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
#line 7028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 924 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 925 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 929 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 930 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 935 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[0].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
#line 7060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 939 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[-2].l));
	  append_symbol((yyval.l), (yyvsp[0].sym)); }
#line 7068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 945 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(L(), (yyvsp[0].i_val)); }
#line 7074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 947 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(append_int(L(), (yyvsp[-2].i_val)), (yyvsp[0].i_val)); }
#line 7080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 951 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
#line 7086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 952 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
#line 7092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 956 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[0].l)); }
#line 7098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 957 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[0].l)); }
#line 7104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 958 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[0].l)); }
#line 7110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 969 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 970 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 975 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 977 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 7134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 981 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
#line 7140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 982 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
#line 7146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 983 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[0].l)); }
#line 7152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 984 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[0].l)); }
#line 7158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 985 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[0].l)); }
#line 7164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 986 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
#line 7170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 990 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 7176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 992 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 7182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 996 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 7188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 997 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 7194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1005 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1010 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, (yyvsp[0].l)));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1015 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1020 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1025 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1030 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1035 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1040 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
#line 7266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1045 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
#line 7275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1050 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  dlist *p = L();
	  append_string(l, NULL);
	  append_string(p, (yyvsp[-4].sval));
	  append_string(p, NULL);
	  append_int(p, (yyvsp[-6].i_val));
	  append_string(p, (yyvsp[0].sval));
	  append_list(l, p);
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
#line 7289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1062 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, (yyvsp[0].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[-2].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1068 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[0].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1075 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, (yyvsp[-3].sval));
				  append_string(l, (yyvsp[0].sval));
				  append_int(l, (yyvsp[-5].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1085 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
#line 7331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1090 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-2].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
#line 7339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1094 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
#line 7347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1098 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[-2].sval)); }
#line 7353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1100 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  if (!strlen((yyvsp[0].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
#line 7365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1108 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
#line 7374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1116 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
#line 7383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1121 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
#line 7392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1126 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
#line 7401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1133 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1134 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1138 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1139 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1140 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1162 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_list(l, (yyvsp[0].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
#line 7443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1173 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[0].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
#line 7453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1190 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_list(l, (yyvsp[0].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
#line 7464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1199 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1200 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-1].l), (yyvsp[0].sym)); }
#line 7476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1204 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1205 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-1].l), (yyvsp[0].sym)); }
#line 7488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1209 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 7494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1210 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[0].l_val)); }
#line 7500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1211 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1215 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 7512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1216 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
#line 7518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1217 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[0].l_val)));  }
#line 7524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1218 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[0].sym)));  }
#line 7530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1219 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1223 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[0].l_val)); }
#line 7542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1224 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[0].l_val)); }
#line 7548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1225 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
#line 7554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1226 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[0].l_val)); }
#line 7560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1227 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
#line 7566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1228 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[0].l_val)); }
#line 7572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1229 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
#line 7578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1230 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
#line 7584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1238 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-5].sval));
	  append_int(l, (yyvsp[-7].i_val));
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
#line 7595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1247 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = hash_idx; }
#line 7601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1248 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ordered_idx; }
#line 7607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1249 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imprints_idx; }
#line 7613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1250 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = hash_idx; }
#line 7619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1271 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval));
	  append_int(l, (yyvsp[0].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
#line 7628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1276 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-8].sval));
	  append_string(l, (yyvsp[-4].sval));
	  append_string(l, (yyvsp[-2].sval));
	  append_string(l, (yyvsp[0].sval));
	  append_int(l, (yyvsp[-6].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
#line 7640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1286 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
#line 7646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1287 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
#line 7652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1288 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
#line 7658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1292 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1293 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_string(L(), (yyvsp[-1].sval)), (yyvsp[0].sval)); }
#line 7670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1298 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, SQL_PERSIST);
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1309 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
      dlist *l = L();
      append_list(l, (yyvsp[-3].l));
      append_symbol(l, (yyvsp[0].sym));
      (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE_LOADER, l);
    }
#line 7696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1316 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_STREAM;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1326 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_MERGE_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1336 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_REPLICA_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1349 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_REMOTE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, commit_action);
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1359 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 7768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1373 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 7774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1374 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 7780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1375 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 7786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1376 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 7792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1377 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
#line 7798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1378 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
#line 7804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1382 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_COMMIT; }
#line 7810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1383 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_DELETE; }
#line 7816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1384 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_PRESERVE; }
#line 7822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1385 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_DROP; }
#line 7828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1389 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[-1].l)); }
#line 7834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1390 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[0].l)); }
#line 7840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1398 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[-3].l));
			  append_symbol((yyval.l), (yyvsp[-1].sym)); 
			  append_int((yyval.l), (yyvsp[0].i_val)); }
#line 7848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1404 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 7854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1405 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1406 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 7866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1411 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1413 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 7878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1420 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1421 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 7890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1426 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			dlist *l = L();
			append_string(l, (yyvsp[-2].sval));
			append_type(l, &(yyvsp[-1].type));
			append_list(l, (yyvsp[0].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
#line 7902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1434 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 7956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1486 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1492 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 7968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1494 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym) ); }
#line 7974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1500 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-5].sval) );
	  append_list(l, (yyvsp[-1].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
#line 7983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1508 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 7989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1510 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 7995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1516 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[0].sym)); }
#line 8001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1520 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 8007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1526 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_symbol(l, (yyvsp[0].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
#line 8016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1534 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1563 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1600 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1601 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 8100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1608 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_symbol(l, (yyvsp[0].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
#line 8109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1617 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 8115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1618 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 8121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1622 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1623 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1624 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 8139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1625 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 3; }
#line 8145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1626 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 4; }
#line 8151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1630 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ((yyvsp[0].i_val) << 8); }
#line 8157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1634 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1638 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
#line 8169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1639 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1640 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1641 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val) + (yyvsp[0].i_val); }
#line 8187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1642 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val) + (yyvsp[0].i_val); }
#line 8193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1646 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1647 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1648 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 8211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1649 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1653 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1654 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1658 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
#line 8235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1659 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
#line 8241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1660 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
#line 8247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1661 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
#line 8253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1664 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, (yyvsp[-3].l) );
			  append_list(l, (yyvsp[-2].l) );
			  append_int(l, (yyvsp[-1].i_val) );
			  append_int(l, (yyvsp[0].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
#line 8264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1677 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[0].l)); }
#line 8270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1679 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[0].l)); }
#line 8276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1683 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, (yyvsp[-3].l) );
			  append_list(l, (yyvsp[-5].l) );
			  append_list(l, (yyvsp[-2].l) );
			  append_int(l, (yyvsp[-1].i_val) );
			  append_int(l, (yyvsp[0].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
#line 8288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1695 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 8294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1700 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 8300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1702 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string( (yyvsp[-2].l), (yyvsp[0].sval) ); }
#line 8306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1706 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[0].l) ); }
#line 8312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1711 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {  dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, (yyvsp[0].bval));
	  append_int(l, TRUE);	/* persistent view */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
#line 8325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1723 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 8331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1732 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 8337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1733 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 8343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1737 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1742 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 8355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1747 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				append_list(l, (yyvsp[-3].l));
				append_string(l, (yyvsp[0].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
#line 8364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1754 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval)); }
#line 8370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1769 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-8].l));
				append_list(f, (yyvsp[-6].l));
				append_symbol(f, (yyvsp[-3].sym));
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_MAL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1782 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l));
				append_symbol(f, (yyvsp[-1].sym));
				append_list(f, NULL);
				append_list(f, (yyvsp[0].l));
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_SQL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1794 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1828 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1842 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-8].l));
				append_list(f, (yyvsp[-6].l));
				append_symbol(f, (yyvsp[-3].sym));
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_AGGR);
				append_int(f, FUNC_LANG_MAL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1854 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1889 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_MAL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1901 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-4].l));
				append_list(f, (yyvsp[-2].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, NULL); 
				append_list(f, (yyvsp[0].l));
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_SQL);
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1912 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1936 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[0].sym)); }
#line 8558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1940 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-3].l),(yyvsp[-2].sym)); }
#line 8564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1944 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-3].l),(yyvsp[-2].sym)); }
#line 8570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1959 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 8576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1961 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l),(yyvsp[-1].sym));}
#line 8582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1965 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 8588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1967 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l),(yyvsp[-1].sym));}
#line 8594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 2015 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 8600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2019 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[0].sym));}
#line 8606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2024 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L(); 
		  append_list( l, (yyvsp[-3].l));
		  append_list( l, (yyvsp[-1].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
#line 8617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2035 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = L();}
#line 8623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2036 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 8629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2038 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 8635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2043 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[0].sym)); }
#line 8641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2050 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[-1].sym)); }
#line 8647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2055 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[-4].sym)),(yyvsp[-3].l)),(yyvsp[-2].l))); }
#line 8657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2061 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[-3].l)),(yyvsp[-2].l))); }
#line 8666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2069 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].l))); }
#line 8675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2077 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 8681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2079 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 8687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2084 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].l))); }
#line 8696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2092 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 8702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2094 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 8708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2098 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2099 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 8720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2109 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_list(l, (yyvsp[-3].l));
		  append_symbol(l, (yyvsp[-2].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
#line 8731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2120 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 8737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2122 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[0].l)); }
#line 8743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2125 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_list(l, (yyvsp[-1].l));
		  append_symbol(l, (yyvsp[0].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
#line 8754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2139 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2155 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 8778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2160 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 8784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2166 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[-1].sval));
			  	  append_type((yyval.l), &(yyvsp[0].type));
				}
#line 8793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2171 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
				  append_string((yyval.l), (yyvsp[-1].sval));
			  	  append_type((yyval.l), &(yyvsp[0].type));
				}
#line 8802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2179 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[-1].l)); }
#line 8808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2181 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 8814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2186 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
#line 8823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2190 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2195 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *p = L();
			  append_string(p, (yyvsp[-1].sval));
			  append_type(p, &(yyvsp[0].type));
			  (yyval.l) = append_list((yyvsp[-3].l), p); }
#line 8838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2200 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[-1].sval));
			  append_type(p, &(yyvsp[0].type));
			  (yyval.l) = append_list(l, p); }
#line 8848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 2250 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-6].l));
	  append_int(l, (yyvsp[-5].i_val));
	  append_symbol(l, (yyvsp[-4].sym));
	  append_string(l, (yyvsp[-2].sval));
	  append_list(l, (yyvsp[-1].l));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list(SQL_CREATE_TRIGGER, l); 
	}
#line 8862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 2262 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 2263 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 2267 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
#line 8880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 2268 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
#line 8886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 2269 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
#line 8892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 2270 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[0].l)); }
#line 8898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 2274 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 2275 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 8910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 2279 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 8916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 2281 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-1].l), (yyvsp[0].l)); }
#line 8922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 2286 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[0].sval)); }
#line 8928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2287 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[0].sval)); }
#line 8934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2288 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[0].sval)); }
#line 8940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2289 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[0].sval)); }
#line 8946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2304 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[-2].i_val));
	  append_symbol((yyval.l), (yyvsp[-1].sym));
	  append_list((yyval.l), (yyvsp[0].l));
	}
#line 8956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2311 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2312 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2316 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2317 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2321 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 8986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 2322 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 8992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 2327 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 8998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 2330 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 2335 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
#line 9014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 2341 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
#line 9024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 2347 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
#line 9034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 2353 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
#line 9044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 2359 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_LOADER );
	  (yyval.l) = l; }
#line 9054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2368 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
#line 9063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2373 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = (yyvsp[-1].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2378 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 2386 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 2394 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2402 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2410 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_LOADER );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 2418 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
#line 9141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 2423 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
#line 9150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 2427 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[0].sval) ); }
#line 9156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 2428 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[0].sval) ); }
#line 9162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 2429 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[0].l) ); }
#line 9168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2430 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, (yyvsp[0].l) ); }
#line 9174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2434 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = NULL;}
#line 9180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 2435 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = (yyvsp[-1].l);}
#line 9186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 2436 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = L(); }
#line 9192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 2440 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_type(l, &(yyvsp[0].type) );
				  (yyval.l)= l; }
#line 9200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 2443 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { append_type((yyvsp[0].l), &(yyvsp[-2].type));
				  (yyval.l) = (yyvsp[0].l); }
#line 9207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 2448 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 2449 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 2450 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 2469 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	  (yyval.sym) = (yyvsp[0].sym);
	  m->type = Q_TRANS;					}
#line 9233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 2476 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[0].bval));  }
#line 9239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 2478 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[0].sval)); }
#line 9245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 2480 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[0].sval)); }
#line 9251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 2482 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[-1].bval)), (yyvsp[0].sval) )); }
#line 9259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 2486 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[0].i_val)); }
#line 9265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 2488 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[0].i_val)); }
#line 9271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 2490 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[0].i_val)); }
#line 9277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 2494 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_none; }
#line 9283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 2500 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 9289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 2502 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ((yyvsp[-2].i_val) | (yyvsp[0].i_val)); }
#line 9295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 2507 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_readonly; }
#line 9301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 2508 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_writable; }
#line 9307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 2509 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_serializable; }
#line 9313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 2510 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_none; /* not supported */ }
#line 9319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2521 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2522 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2526 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 9337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2527 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2528 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2532 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2533 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 9361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2538 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 9379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2552 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 9397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 2566 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_COPYLOADER, l ); }
#line 9406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 2571 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 9421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 2582 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_string(l, (yyvsp[-2].sval));
	  append_list(l, (yyvsp[-1].l));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
#line 9432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 2589 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[-1].l));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
#line 9443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 2600 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 2601 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2606 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(L(), (yyvsp[0].l_val)); }
#line 9461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2608 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng((yyvsp[-2].l), (yyvsp[0].l_val)); }
#line 9467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2613 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 2614 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 2618 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 9485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 2619 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-2].l), (yyvsp[0].l)); }
#line 9491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 2624 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_string(l, (yyvsp[0].sval) );
			  (yyval.l) = l; }
#line 9499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 2628 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_string(l, (yyvsp[-1].sval) );
			  append_string(l, (yyvsp[0].sval) );
			  (yyval.l) = l; }
#line 9508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 2636 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
#line 9517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 2641 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[0].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
#line 9526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 2646 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[-2].sval));
				  append_string(l, (yyvsp[0].sval));
				  (yyval.l) = l; }
#line 9535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 2651 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[-4].sval));
				  append_string(l, (yyvsp[-2].sval));
				  append_string(l, sql2str((yyvsp[0].sval)));
				  (yyval.l) = l; }
#line 9545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 2659 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 2660 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 2664 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 2665 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-1].l_val)), 0); }
#line 9569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 2666 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[0].l_val)); }
#line 9575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 2668 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-3].l_val)), (yyvsp[-1].l_val)); }
#line 9581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 2670 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-3].l_val)), (yyvsp[0].l_val)); }
#line 9587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 2674 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 2675 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 9599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 2679 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 2680 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 9611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 2684 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 2685 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 9623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 2689 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 9629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 2690 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 2694 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 9641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 2695 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 2699 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 9653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 2701 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 9659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 2707 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
#line 9668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 2716 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
#line 9679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 2758 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
#line 9689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 2766 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
#line 9699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 2775 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
#line 9705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 2777 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
#line 9711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 2779 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[0].l)); }
#line 9717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 2785 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[-1].l)); }
#line 9723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 2787 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-4].l), (yyvsp[-1].l)); }
#line 9729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 2791 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 9735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 2793 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 9741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 2797 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 9747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 2799 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 9753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 2804 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 9770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 2833 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 2834 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 2835 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 9788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 2839 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 9794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 2841 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 9800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 2846 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym) );
	  append_string(l, (yyvsp[-2].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
#line 9809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 2851 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym));
	  append_list(l, (yyvsp[-2].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
#line 9818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 2858 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 9824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 2859 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 9830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 2866 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 9836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 2868 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
#line 9845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 2873 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
#line 9857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 2881 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[-3].i_val));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
#line 9869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 2889 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[-2].i_val));
	  append_symbol(l, (yyvsp[0].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
#line 9881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 2899 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 2900 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 2901 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1 + (yyvsp[-1].i_val); }
#line 9899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 2905 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 2906 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 2910 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 2911 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 2912 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 9929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 2916 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 9935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 2918 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[0].l)); }
#line 9941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 2942 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[-1].l));
	  	append_symbol(l, (yyvsp[0].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
#line 9952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 2951 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 9958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 2952 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 9964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 2957 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[-5].sval)));
	  append_list(l, (yyvsp[-4].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
#line 9977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 2980 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = newSelectNode( SA, (yyvsp[-2].bval), (yyvsp[-1].l), NULL,
		(yyvsp[0].l)->h->data.sym,
		(yyvsp[0].l)->h->next->data.sym,
		(yyvsp[0].l)->h->next->next->data.sym,
		(yyvsp[0].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
#line 9989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 2991 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = newSelectNode( SA, (yyvsp[-4].bval), (yyvsp[-3].l), (yyvsp[-1].l),
		(yyvsp[0].l)->h->data.sym,
		(yyvsp[0].l)->h->next->data.sym,
		(yyvsp[0].l)->h->next->next->data.sym,
		(yyvsp[0].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
#line 10001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 3002 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 10033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 3032 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 10039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 3034 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 10045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 3044 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
#line 10056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 3053 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
#line 10067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 3062 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
#line 10078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 3068 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 3073 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 3074 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 3075 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 3080 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 10108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 3082 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 10114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 3084 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 3094 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[-3].sym));
	  append_symbol((yyval.l), (yyvsp[-2].sym));
	  append_symbol((yyval.l), (yyvsp[-1].sym));
	  append_symbol((yyval.l), (yyvsp[0].sym)); }
#line 10130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 3102 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 3103 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[0].l)); }
#line 10142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 3107 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 3109 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 3113 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_list(l, (yyvsp[-1].l));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 554:
#line 3118 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[-1].sym));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  	  	  append_int(l, 0);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
#line 10173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 3124 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[-1].sym));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  	  	  append_int(l, 1);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
#line 10183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 3130 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  (yyval.sym) = (yyvsp[-1].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[-1].sym);
				  	sn->name = (yyvsp[0].sym);
				  } else {
				  	append_symbol((yyvsp[-1].sym)->data.lval, (yyvsp[0].sym));
				  }
				}
#line 10197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 3140 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 10213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 3152 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
#line 10222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 3156 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym);
				  append_symbol((yyvsp[0].sym)->data.lval, NULL); }
#line 10229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 3160 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->caching = 0; }
#line 10235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 3162 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[-2].sym));
		append_symbol(op, (yyvsp[0].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
#line 10247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 3173 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[-3].sval));
		  	  	  append_list(l, (yyvsp[-1].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 3178 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[0].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 3183 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[-3].sval));
		  	  	  append_list(l, (yyvsp[-1].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 3188 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[0].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 3195 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 3196 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 3200 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 3201 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[0].l) );}
#line 10307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 3205 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[0].l))); }
#line 10314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 3208 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[0].l))); }
#line 10321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 3213 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 3214 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 3220 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
#line 10342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 3224 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 3229 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
#line 10357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 3233 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 3237 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 3239 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[0].l)); }
#line 10375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 3243 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 3244 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val))); 
			}
#line 10390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 3248 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 3252 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 3253 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val))); 
			}
#line 10411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 3257 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 3261 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 3262 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val)));
			}
#line 10432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 3266 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[0].sval),NULL)));
			}
#line 10441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 3270 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 3274 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 3276 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 10459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 3281 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, (yyvsp[0].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
#line 10468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 3289 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 3290 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 3291 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 605:
#line 3308 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 10507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 606:
#line 3324 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 607:
#line 3329 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-2].sym));
		  append_string(l, (yyvsp[-1].sval));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 10524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 608:
#line 3336 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-2].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 10535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 609:
#line 3346 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_int(l, (yyvsp[-3].i_val));
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
#line 10546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 610:
#line 3353 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_int(l, (yyvsp[-3].i_val));
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
#line 10557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 611:
#line 3362 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 3363 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 3364 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 10575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 3369 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 10586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 3376 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 10597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 3383 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 10608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 3390 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 10619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 3400 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
#line 10627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 3404 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 10644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 3419 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[-3].sym) );}
#line 10650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 3420 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[-2].sym) ); }
#line 10656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 3425 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-4].sym));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
#line 10666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 3431 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-4].sym));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
#line 10676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 3437 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-5].l));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
#line 10685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 3442 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-5].l));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
#line 10694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 3450 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 10700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 3452 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 3458 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_string(l, (yyvsp[-2].sval));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, (yyvsp[-1].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 10717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 3465 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, (yyvsp[-1].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 10728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 3474 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 3475 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 3476 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 10746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 3480 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[0].sym) ); }
#line 10752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 3484 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 3485 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym));  }
#line 10764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 3489 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 3494 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-2].l));
		  append_list(l, (yyvsp[-1].l));
		  append_list(l, (yyvsp[0].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
#line 10780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 3502 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 3504 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[-1].l)); }
#line 10792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 3506 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 3513 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 3520 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 3527 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 3534 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 3541 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3548 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3555 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[-2].sym));
			  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3562 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3569 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3576 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3583 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3590 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 3596 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 3603 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 3610 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 3617 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 3624 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 3631 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 3638 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 3645 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
#line 11016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 3651 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 3658 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 3665 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 3672 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 3679 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 3681 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 11092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 3702 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 3706 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3712 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
#line 11111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3714 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
#line 11118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3717 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[0].l)); }
#line 11124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 3721 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[0].l)); }
#line 11130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 687:
#line 3733 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
#line 11141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 688:
#line 3803 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[-4].sym)), (yyvsp[-1].l))); }
#line 11148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 3808 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[-2].l) ); }
#line 11154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 691:
#line 3814 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[-2].sym)), (yyvsp[-1].sym)), (yyvsp[0].sym)); }
#line 11160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 692:
#line 3818 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 693:
#line 3820 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[0].l) ); }
#line 11172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 694:
#line 3824 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 695:
#line 3826 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[0].l) ); }
#line 11184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 696:
#line 3830 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 3832 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[-1].l), (yyvsp[-2].i_val)), (yyvsp[0].i_val))); }
#line 11196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 3836 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = FRAME_ROWS; }
#line 11202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 3837 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = FRAME_RANGE; }
#line 11208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 700:
#line 3841 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[0].sym)), _symbol_create_int(SQL_FRAME, -1)); }
#line 11214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 701:
#line 3842 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 11220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 3846 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
#line 11226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 703:
#line 3847 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 704:
#line 3848 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
#line 11238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 705:
#line 3852 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 706:
#line 3857 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[-2].sym)), (yyvsp[0].sym)); }
#line 11250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 707:
#line 3861 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
#line 11256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 708:
#line 3862 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 709:
#line 3863 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
#line 11268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 710:
#line 3867 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 711:
#line 3871 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_NONE; }
#line 11280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 712:
#line 3872 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
#line 11286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 713:
#line 3873 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_GROUP; }
#line 11292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 714:
#line 3874 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_TIES; }
#line 11298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 715:
#line 3875 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
#line 11304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 716:
#line 3879 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[0].sval) ); }
#line 11310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 717:
#line 3884 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_list(l, (yyvsp[-2].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 3888 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 11337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 719:
#line 3915 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 720:
#line 3916 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 721:
#line 3921 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 11356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 3922 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "left"); }
#line 11362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 723:
#line 3923 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "right"); }
#line 11368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 724:
#line 3924 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "insert"); }
#line 11374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 725:
#line 3929 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[-3].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
#line 11385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 726:
#line 3936 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 727:
#line 3941 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 728:
#line 3946 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 729:
#line 3951 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 730:
#line 3956 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 731:
#line 3963 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 11436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 732:
#line 3964 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 11442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 733:
#line 3969 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 11456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 734:
#line 3979 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 11470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 735:
#line 3989 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 736:
#line 3996 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 737:
#line 4003 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 738:
#line 4010 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[-2].sym));
  		  	  append_symbol(l, (yyvsp[0].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 739:
#line 4017 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "splitpart")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 11528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 740:
#line 4029 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 11534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 741:
#line 4031 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 11540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 742:
#line 4036 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 11549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 743:
#line 4041 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_string(l, (yyvsp[-2].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 11558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 744:
#line 4046 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[-2].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 11567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 745:
#line 4051 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[-1].sym));
  		  append_string(l, (yyvsp[0].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
#line 11576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 746:
#line 4058 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 11582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 747:
#line 4059 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 11588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 748:
#line 4064 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 11611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 749:
#line 4085 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 750:
#line 4086 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 751:
#line 4091 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 752:
#line 4092 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 753:
#line 4097 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 754:
#line 4098 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 755:
#line 4105 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-3].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 756:
#line 4111 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-5].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 757:
#line 4117 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-4].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 758:
#line 4123 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-4].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 759:
#line 4129 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-3].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 760:
#line 4135 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-5].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-3].sym));
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 762:
#line 4145 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 11717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 763:
#line 4146 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = -1; }
#line 11723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 764:
#line 4147 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 11729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 765:
#line 4151 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 11735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 766:
#line 4152 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 11741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 767:
#line 4163 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val)+1; }
#line 11747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 768:
#line 4165 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0+1; }
#line 11753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 769:
#line 4169 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val)+1; }
#line 11759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 770:
#line 4171 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 6+1; }
#line 11765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 771:
#line 4175 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
#line 11771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 772:
#line 4177 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[-1].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[-1].i_val), 0); 
			}
#line 11781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 773:
#line 4183 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[-1].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[-1].i_val), 0); 
			}
#line 11791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 774:
#line 4191 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iyear; }
#line 11797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 775:
#line 4192 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imonth; }
#line 11803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 776:
#line 4193 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iday; }
#line 11809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 777:
#line 4194 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ihour; }
#line 11815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 778:
#line 4195 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imin; }
#line 11821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 780:
#line 4200 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = isec; }
#line 11827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 781:
#line 4205 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[-1].i_val)), (yyvsp[0].i_val)-1);  }
#line 11834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 782:
#line 4211 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[0].i_val)), 0);  }
#line 11841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 783:
#line 4214 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[0].i_val)-1);  }
#line 11848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 784:
#line 4220 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[-1].i_val)), (yyvsp[0].i_val)-1);  }
#line 11855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 785:
#line 4223 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[0].i_val)-1);  }
#line 11862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 786:
#line 4229 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[-2].l)), (yyvsp[0].l) ); }
#line 11869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 787:
#line 4232 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) =  append_list( L(), (yyvsp[0].l)); }
#line 11875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 788:
#line 4236 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 11897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 792:
#line 4262 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { const char *s = sql2str((yyvsp[0].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
#line 11907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 793:
#line 4268 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 11976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 794:
#line 4333 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 795:
#line 4364 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4427 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4466 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4483 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4499 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4515 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4532 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4549 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4566 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4583 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4604 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
#line 12298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 807:
#line 4608 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
#line 12306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 808:
#line 4614 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4659 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 12357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 810:
#line 4660 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  m->scanner.schema = (yyvsp[-2].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 811:
#line 4664 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4675 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				L(), (yyvsp[0].sval)); }
#line 12386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 813:
#line 4678 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 814:
#line 4683 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[-4].sval)), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 815:
#line 4691 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_type(l, &(yyvsp[-1].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
#line 12412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 816:
#line 4697 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_type(l, &(yyvsp[-1].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
#line 12421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 818:
#line 4709 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[-3].sym)), (yyvsp[-1].sym))); }
#line 12430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 819:
#line 4714 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[-1].l)); }
#line 12436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 820:
#line 4716 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[-3].sym)),(yyvsp[-2].l)),(yyvsp[-1].sym))); }
#line 12446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 821:
#line 4722 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[-2].l)),(yyvsp[-1].sym))); }
#line 12455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 822:
#line 4730 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 12461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 823:
#line 4732 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 12467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 824:
#line 4737 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[-2].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[0].sym));
			}
#line 12475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 825:
#line 4741 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 12481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 826:
#line 4747 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].sym))); }
#line 12490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 827:
#line 4755 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 12496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 828:
#line 4757 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 12502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 829:
#line 4762 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].sym))); }
#line 12511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 830:
#line 4770 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 12517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 831:
#line 4772 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 12523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 832:
#line 4776 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 12529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 833:
#line 4777 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 12535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 835:
#line 4787 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4798 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4808 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4818 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4829 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
#line 12589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 840:
#line 4831 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
#line 12598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 841:
#line 4835 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
#line 12604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 842:
#line 4837 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[-1].i_val), 0); }
#line 12610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 843:
#line 4839 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[-1].i_val), 0); }
#line 12616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 844:
#line 4841 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4849 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
#line 12635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 846:
#line 4851 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4859 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
#line 12654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 848:
#line 4860 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
#line 12660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 849:
#line 4861 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
#line 12666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 850:
#line 4862 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
#line 12672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 851:
#line 4863 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
#line 12678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 852:
#line 4865 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
#line 12684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 853:
#line 4867 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4880 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4897 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 12729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 856:
#line 4899 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4913 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4932 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 12777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 859:
#line 4933 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 12783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 860:
#line 4934 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
#line 12789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 863:
#line 4937 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[0].sval), 0, 0); }
#line 12795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 864:
#line 4939 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[-3].sval), (yyvsp[-1].i_val), 0); }
#line 12801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 865:
#line 4940 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[0].sval), 0, 0); }
#line 12807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 866:
#line 4942 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[-3].sval), (yyvsp[-1].i_val), 0); }
#line 12813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 867:
#line 4944 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4955 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4970 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4983 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 4990 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 5005 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 5020 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 5027 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 5047 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 5059 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 5075 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 5089 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 879:
#line 5090 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-1].sval); }
#line 13013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 880:
#line 5094 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 881:
#line 5095 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 882:
#line 5096 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-2].sval); }
#line 13031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 883:
#line 5099 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 884:
#line 5100 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-2].sval); }
#line 13043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 887:
#line 5108 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 888:
#line 5109 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 889:
#line 5110 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 890:
#line 5111 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 891:
#line 5112 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 892:
#line 5113 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 893:
#line 5117 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 894:
#line 5118 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 895:
#line 5119 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 896:
#line 5120 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 897:
#line 5121 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 898:
#line 5122 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 899:
#line 5123 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 901:
#line 5128 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "large"); }
#line 13127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 902:
#line 5129 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "name"); }
#line 13133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 903:
#line 5130 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "object"); }
#line 13139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 904:
#line 5131 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "password"); }
#line 13145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 905:
#line 5132 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "path"); }
#line 13151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 906:
#line 5133 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "precision"); }
#line 13157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 907:
#line 5134 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
#line 13163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 908:
#line 5135 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "role"); }
#line 13169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 909:
#line 5136 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "size"); }
#line 13175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 910:
#line 5137 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "type"); }
#line 13181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 911:
#line 5138 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "release"); }
#line 13187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 912:
#line 5139 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "value"); }
#line 13193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 913:
#line 5140 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "zone"); }
#line 13199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 914:
#line 5142 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "action"); }
#line 13205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 915:
#line 5143 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "as"); }
#line 13211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 916:
#line 5144 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
#line 13217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 917:
#line 5145 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "column"); }
#line 13223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 918:
#line 5146 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
#line 13229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 919:
#line 5147 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
#line 13235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 920:
#line 5148 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "increment"); }
#line 13241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 921:
#line 5149 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
#line 13247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 922:
#line 5150 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
#line 13253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 923:
#line 5151 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "plan"); }
#line 13259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 924:
#line 5152 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "schema"); }
#line 13265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 925:
#line 5153 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "start"); }
#line 13271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 926:
#line 5154 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "statement"); }
#line 13277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 927:
#line 5155 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "table"); }
#line 13283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 928:
#line 5157 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "cache"); }
#line 13289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 929:
#line 5158 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "data"); }
#line 13295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 930:
#line 5159 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
#line 13301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 931:
#line 5160 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "match"); }
#line 13307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 932:
#line 5161 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "options"); }
#line 13313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 933:
#line 5162 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "row"); }
#line 13319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 934:
#line 5163 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "key"); }
#line 13325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 935:
#line 5164 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "language"); }
#line 13331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 936:
#line 5165 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "level"); }
#line 13337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 937:
#line 5166 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "session"); }
#line 13343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 938:
#line 5167 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "date"); }
#line 13349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 939:
#line 5168 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "time"); }
#line 13355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 940:
#line 5169 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
#line 13361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 941:
#line 5170 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "interval"); }
#line 13367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 942:
#line 5171 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
#line 13373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 943:
#line 5173 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
#line 13379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 944:
#line 5174 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "execute"); }
#line 13385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 945:
#line 5175 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "explain"); }
#line 13391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 946:
#line 5176 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "debug"); }
#line 13397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 947:
#line 5177 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "trace"); }
#line 13403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 948:
#line 5178 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "text"); }
#line 13409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 949:
#line 5179 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
#line 13415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 950:
#line 5180 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "no"); }
#line 13421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 951:
#line 5182 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "strip"); }
#line 13427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 952:
#line 5183 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
#line 13433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 953:
#line 5184 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "passing"); }
#line 13439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 954:
#line 5185 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "nil"); }
#line 13445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 955:
#line 5186 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "ref"); }
#line 13451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 956:
#line 5187 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "absent"); }
#line 13457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 957:
#line 5188 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "empty"); }
#line 13463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 958:
#line 5189 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "document"); }
#line 13469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 959:
#line 5190 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "element"); }
#line 13475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 960:
#line 5191 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "content"); }
#line 13481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 961:
#line 5192 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
#line 13487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 962:
#line 5193 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "returning"); }
#line 13493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 963:
#line 5194 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "location"); }
#line 13499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 964:
#line 5195 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "id"); }
#line 13505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 965:
#line 5196 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "according"); }
#line 13511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 966:
#line 5197 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "uri"); }
#line 13517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 967:
#line 5198 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "filter"); }
#line 13523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 968:
#line 5199 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
#line 13529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 969:
#line 5200 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "temp"); }
#line 13535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 970:
#line 5201 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
#line 13541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 971:
#line 5202 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
#line 13547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 972:
#line 5203 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "storage"); }
#line 13553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 973:
#line 5204 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
#line 13559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 974:
#line 5208 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 13565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 975:
#line 5210 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 13571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 976:
#line 5215 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 5238 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 5258 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 5291 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 980:
#line 5293 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strconcat((yyvsp[-1].sval),(yyvsp[0].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
#line 13670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 981:
#line 5301 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[0].sym); }
#line 13678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 982:
#line 5308 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_int(l, (yyvsp[-2].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 13687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 983:
#line 5313 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_int(l, (yyvsp[-3].i_val));
  	  append_list(l, (yyvsp[-1].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 13696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 984:
#line 5327 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 13702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 986:
#line 5332 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[0].l)); }
#line 13708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 989:
#line 5343 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 13714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 990:
#line 5345 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 13720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 5367 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
#line 13729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 5375 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
#line 13738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 5383 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
#line 13747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 5393 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
#line 13758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 5403 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 13764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 5405 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 13772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 5409 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-2].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[0].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 13780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 5413 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-4].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[-2].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 13788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 5417 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-2].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 13796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 5421 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[0].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 13804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 5425 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[-2].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 13812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 5429 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 13820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 5439 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 13826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 5443 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 13832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 5445 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[-2].sym));
	  	  append_symbol(l, (yyvsp[0].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 13843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 5455 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[0].sval));
	  append_symbol(l, (yyvsp[-1].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 13852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 5462 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 13858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 5463 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 5476 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[-1].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[0].i_val)); 	}
#line 13872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 5483 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 13878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 5485 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 13884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 5493 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 13890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 5494 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 13896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 5498 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 13902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 5499 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 13908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 5500 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 13914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 5501 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 3; }
#line 13920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 5502 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 4; }
#line 13926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 5509 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 5519 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 13944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 5520 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 13950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 5525 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 13956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 5527 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-2].l), (yyvsp[0].l)); }
#line 13962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 5532 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-1].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[0].sval)); }
#line 13969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 5537 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 13975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 5541 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 13981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 5542 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 5546 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 5553 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_int(l, (yyvsp[-3].i_val) );
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
#line 14003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 5560 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 5561 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 5568 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
#line 14025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 5580 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 5582 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 5593 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 5639 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
#line 14052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 5650 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 5655 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 14064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 5659 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 5660 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 5664 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 5665 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 5666 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 5681 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 14100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 5685 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 5687 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[-2].sym));
	  	  append_symbol(l, (yyvsp[0].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 14117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 5710 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strconcat("xmlns:", (yyvsp[0].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[-2].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 5719 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[0].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 5723 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 5819 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 5840 "/home/ferreira/MonetDBLiteJava/src/sql/server/sql_parser.y" /* yacc.c:1906  */

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

