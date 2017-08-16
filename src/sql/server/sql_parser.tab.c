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
#line 9 "src/sql/server/sql_parser.y" /* yacc.c:339  */

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


#line 162 "src/sql/server/sql_parser.tab.c" /* yacc.c:339  */

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
   by #include "sql_parser.tab.h".  */
#ifndef YY_SQL_SRC_SQL_SERVER_SQL_PARSER_TAB_H_INCLUDED
# define YY_SQL_SRC_SQL_SERVER_SQL_PARSER_TAB_H_INCLUDED
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 111 "src/sql/server/sql_parser.y" /* yacc.c:355  */

	int		i_val,bval;
	lng		l_val,operation;
	double		fval;
	char *		sval;
	symbol*		sym;
	dlist*		l;
	sql_subtype	type;

#line 870 "src/sql/server/sql_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sqlparse (mvc *m);

#endif /* !YY_SQL_SRC_SQL_SERVER_SQL_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 120 "src/sql/server/sql_parser.y" /* yacc.c:358  */

extern int sqllex( YYSTYPE *yylval, void *m );
/* enable to activate debugging support
int yydebug=1;
*/

#line 892 "src/sql/server/sql_parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  227
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   16686

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  348
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  407
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2095

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   584

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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
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
  "STDOUT", "FWF", "INDEX", "REPLACE", "AS", "TRIGGER", "OF", "BEFORE",
  "AFTER", "ROW", "STATEMENT", "sqlNEW", "OLD", "EACH", "REFERENCING",
  "OVER", "PARTITION", "CURRENT", "EXCLUDE", "FOLLOWING", "PRECEDING",
  "OTHERS", "TIES", "RANGE", "UNBOUNDED", "','", "'.'", "':'", "'['",
  "']'", "'?'", "$accept", "sqlstmt", "$@1", "$@2", "$@3", "$@4", "$@5",
  "create", "create_or_replace", "if_exists", "if_not_exists", "drop",
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
  "table_exp", "opt_from_clause", "table_ref_commalist", "table_ref",
  "$@6", "table_name", "opt_table_name", "opt_group_by_clause",
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
     583,   584,    44,    46,    58,    91,    93,    63
};
# endif

#define YYPACT_NINF -1824

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1824)))

#define YYTABLE_NINF -1097

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1498,   313, -1824,   583, 15775,    -3,   259,   616,   616, 15775,
     656,   660, -1824, 15775,   464,   567, -1824, 13439, 15775, -1824,
   -1824, -1824, -1824, -1824,   723, -1824,   405,   135,   504,    33,
     304,   790,   728,   626,  1132, 11979, 11687,   674, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824, -1824,   680,   686, -1824, 15775, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,   552,   533,
   -1824, -1824, -1824,  3965, 15775, -1824,   673,   673, -1824, 15775,
     991,    50, -1824,   711,    -3,  1031,   576, -1824, -1824, -1824,
   -1824,   715, -1824,   558,   711,  1563,  1563,  1498,  1498,  1563,
   -1824, -1824,   747, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824,   711,   711, -1824,   668, -1824,   711,   363,  -154,   665,
   -1824,   611,   702,   630, -1824, -1824, -1824,   724,   734,   375,
    1206,   918,   991, 14607, 15775, 15775, -1824,   599,   759,  1018,
     772, -1824,    52, -1824, -1824,   295, -1824, -1824,   486, 15775,
     545, -1824, -1824, 15775, -1824, -1824,   767,   776,   782,   795,
   15775, 15775,   745,   745, -1824, 15775, 15775,   750, -1824, -1824,
     799, -1824,   820, 15775, 15775, 15775, 15775, 15775, 15775,   853,
     710, 15775, 15775, 15775, 15775, 15775, 15775,   783,   783,   783,
   15775, 15775,   732, -1824, -1824, -1824,   868, 15775, 15775, 15775,
     803,   935,   937,   940,   854,   874,  1091,   805, -1824,   950,
   -1824, -1824,  1084,   242,   242,   242,   840, -1824,   919, 14899,
   15775,  1187,  1187,  1187,  1204,  1047,  1058,  1067, -1824, -1824,
   -1824, -1824, -1824,  1069,  1072,  1230, -1824, -1824, -1824,  1087,
    1087,  1087,  1087,  1087, -1824,  1111, -1824,  1114,  1168, 15775,
    1123,  1127,  1130,  1134,  1143,  1147,  1174,  1180,  1181,  1182,
    1183,  2181,  4308,  8614,  8614,  1185,  1186,  1188, -1824,  8614,
    1187,   121,   482,   386,  6658,  1189,  1195,  4308, -1824, -1824,
     381,   -66,  1170, -1824,  1605, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824, 15775, -1824, -1824, -1824,  9813, -1824, -1824, -1824,
    1046, -1824,  1040, -1824, -1824,  1042, -1824, -1824,  1214,  1216,
    1220,  1064, -1824, -1824, -1824, -1824, -1824, -1824,  1187,  1187,
     -22, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824,   307,   753, -1824,  1117, -1824,   763,
    1307,  1302, -1824,  1059, -1824, 15775, -1824, -1824,  1085, -1824,
    3965, -1824, -1824,  6984, 13439,  1103,  1275,  1276, -1824, -1824,
    1279,  4994, -1824, -1824, -1824, -1824, -1824, -1824,   128,  1206,
     128,  1100, 12271,   556,  1303,  1305,  1308,   -25,   991, -1824,
     672,   499,  1145,   741,  1240,   765, 15775, -1824,    47,  1156,
   15775,  1018,  1122, -1824, -1824,  1253, -1824, -1824,  1020,   745,
     745,   745,   745,  1194,  1254,  1250, 16067, 15775,   711,   689,
   15775,   745, 15775,  1262,  1263,  1264,  1273, -1824, -1824, 15775,
    1215, 15775, 15775, 15775, 15775,   732,  1274,  1274,  1274,  1274,
   -1824,  1343, 15775, 15775, 15775, -1824, -1824, -1824, -1824, -1824,
   15775,   181, -1824, -1824,    63,  1111, 15775,  4308, 15775,  1277,
    1280, -1824,   519, -1824, -1824, -1824,  1282,  1284, -1824, -1824,
   -1824, -1824, -1824,  1414, -1824,  1285, -1824, -1824, -1824,  1286,
    1288,   988, 15775, -1824, -1824, -1824,  1289,  1291,  1292,  1294,
    8614, -1824, -1824,  1300,  1300,  1300,    34,  1172,  4308, -1824,
    1297,    -1, -1824,  1298, -1824,  1128, -1824, -1824, -1824,  4308,
    4308,  1453,  1304, -1824, -1824, -1824, -1824, -1824,   276, -1824,
    1149,  1378, -1824,  8614,  8614,  8614,  1255,  1336,    10,  1257,
    1489,  8614,   819,  8614,  2181,  1324,  1326,  1327,   -18,  1332,
     228, -1824,   193,  1605,  2181,  1798,  1798,  8614,  8614,  8614,
    1636, -1824,   723,  1333,   723,  1333, -1824, -1824,  1187,  4308,
    9197, -1824,   328,  8614,  8614,  1605,  -185,  8916, 15775, -1824,
     919,  4308, 15775, -1824,  4308,  3279,  1003,  1003,  1330,  1335,
    8614,  8614,  8614,  8614,  3279,  1160,  8614,  8614,  8614,  8614,
    8614,  8614,  8614,  8614,  8614,  8614,  8614,  8614,  8614,  8614,
    8614,  8614,  8614,  8614,  8614,  8614,  8614,  8614,  8614,  8614,
      48,  1338,  1318,  3965,  1351,  5320,  8614, -1824, -1824, 12563,
   14023,  1248,  1324, -1824,   318, -1824, -1824,  1450,  1454, -1824,
   -1824, -1824,   774,   723,   991, -1824,  1361,  1424, -1824, -1824,
   12550,   269, -1824, -1824,    30,  1301, -1824, -1824, -1824,  2181,
   -1824,   277, -1824, -1824,   942, -1824,   -86, -1824, -1824, -1824,
      94, -1824,   853, 15775, -1824, -1824, -1824, -1824, -1824, -1824,
     128,   128, -1824, -1824, -1824,  1290,   672,  1265,  1272, -1824,
    1444,  1379,  1018,  1018, -1824, -1824, -1824, -1824,  1018,  2565,
    1145, -1824, -1824,   508,    86,  1271,   851, -1824,  1441,    32,
      32, 15775,   711,  1243,  1018,   672,  1383,  2565,  1020, -1824,
   -1824, 15775, 15775, 15775, 15775,  1322,  1306, -1824,  1455, 15775,
    1319,  1341,    -2,  1249, -1824, -1824,  1000,  1315, 15775,  1398,
   15191, 15191, 15191, 15191,  1274, 15775,   732,   732,   732,   732,
   -1824,  2485, -1824, -1824, -1824, -1824, -1824,   732,   732,   732,
   -1824, -1824, -1824,   976, -1824, -1824, -1824,  1384,   950,   723,
     723, -1824,  1550,   723,   723,   723, -1824,   607,  1333,  1333,
   -1824, -1824, -1824, -1824, -1824,  1288,  1286,  1309, -1824, -1824,
   -1824,   723,   723,   723,   723,  1241, -1824, 10740,  1478,   464,
     464,   464, -1824, -1824, -1824,    34,  1103,  1384,  1111, 14899,
     919,  4308, 15775,  1384,  1267,  1244, -1824, -1824, -1824, -1824,
    1480, 15775, 12550,   565, 12550, -1824,   -64, -1824,  1427, 15775,
    1416,  8614,  1251, -1824, -1824,  8614, 15775, -1824,  1446,   565,
   -1824,  8614, -1824,  1493,  8614,   290, -1824, -1824, -1824,  1036,
    4308, 13731,  1745, 11042,   966,  1422,  1310,  1187,  1425,  1187,
     988,   -16,  8614, -1824,   614,  8614, -1824,  1293,  2527,  1256,
     294,  4308, -1824, 12855,  2881, -1824, -1824,  1259,   962, 16359,
   16359, 16359,   203,    12, -1824, -1824,  1494,  1170, -1824,  1605,
   -1824, -1824, -1824,  1190,  4308, -1824, -1824,  4308,  4308,  7310,
    7310, -1824, 10122, -1824, -1824, -1824, -1824,  1111, -1824, 12550,
    1798,  1798,  1798,  1798,  1798,  1798,  1798,  1798,  1798,  1798,
    1270,  1270,  1270,  1636,   707,   707,   707,   707,  1470,  1470,
    1470,  1470,  1470, -1824,  1499,  1278, -1824, -1824, -1824,  8614,
    1434,  8614, 12550,  1436,   207,  1281,  1439,  1442,  1443, -1824,
     261, -1824,  1283, -1824, -1824, 15775,  1092,  1533, -1824, -1824,
   -1824, -1824,   356, -1824, -1824,  8614, -1824, -1824, -1824, -1824,
   -1824, -1824,  7310,  1363,   128,  1511,  1368,  1511, -1824,    17,
      17,  1187,  1375, 15775, 15775,  1018,   280, -1824, -1824, -1824,
   -1824, -1824, 15775, 15775, -1824, -1824, 15775,  1543,  1133, -1824,
   15775, 15775, 15483, 13439, -1824,  1524,  1321,  1524,   711,  1527,
   -1824, -1824,  1387,  1018, -1824, -1824,  1472,  1472,  1472,  1472,
   15775,   762, -1824, -1824, -1824,  1626,  1380, 15775,  1413, 14315,
    1551, -1824,  1331,   599, -1824,  1334, -1824,  1388, 15775,  1472,
   15191, -1824,  1485,  1320,  2565,  1486,  1487,  1490, -1824,   732,
   -1824, -1824, -1824, -1824, -1824,  1491,  1328, -1824, -1824, -1824,
   -1824,  1492, -1824,  1501, -1824,  1503,   310,  1506,  1340, -1824,
     322, -1824, -1824, -1824, -1824,  1382,  1247,  1512,  1346,  1515,
    1517,  1519,  8614, -1824, -1824, -1824,  1495, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824,  1384, -1824,  2565,  2565,
    8614, -1824,   398,  1520,  8614,  1522,  1523, -1824,  1357,  7636,
   12550,  -135, -1824,  1385, -1824,   376, -1824,  1358,  1600,  1427,
    1531,  1546,  1427,   338, -1824, -1824, -1824,  1536,  1537,  1538,
    1605,  8614,  8614,  8614,  8614, -1824,  1417, -1824, -1824, -1824,
   -1824,  8614,  3037, -1824,  1403, 12550, -1824,  8614,  8614, -1824,
    8614,  1605, 16359, 16359,  2881,  1324,  1542,  1545,  1558,   829,
     464,  8916, -1824, -1824, -1824,  1081,  1658, -1824,  8916,  1660,
    1667, 15775, -1824,  1568, -1824, -1824, -1824, 13439, 15775, -1824,
    1644,  1645,  1190,  1152,  1540,   340,   341,  1187, -1824, -1824,
    1648,  1580,  1653,  1584, -1824,  1585, -1824, 13147,  8614, 15775,
   -1824, -1824, -1824, -1824, -1824, -1824,  1496, -1824,   762, -1824,
    1497, -1824, -1824, -1824,  1744,  1187, -1824, -1824, -1824, -1824,
   -1824,   732,   732,   732, -1824, -1824, -1824,   -85, -1824, 15775,
   -1824, -1824, -1824,  -123,  1966, -1824,  1440, -1824,  1187, -1824,
    1654,    49,  1187, -1824, -1824, -1824,  1502, -1824, -1824, -1824,
   -1824, -1824,  1500, 15775,   739, -1824, -1824, 13439, 15775,   357,
   -1824, -1824, -1824, -1824,   216, 15775, -1824,   599,  1598, 15775,
   15775,  1603,  1508,  1597,  9517, 15775, -1824,  1541,  1539,  1548,
   -1824, -1824,  2565, -1824, -1824, -1824, -1824,   723, -1824,   723,
   -1824,   723,  1288, -1824, -1824, -1824,   723, -1824, -1824, -1824,
   -1824, 15775,  1604,  1607, 11352, -1824, -1824, -1824, -1824, -1824,
   -1824,  5646,  1427,  1529,  8614, 12550,   359, -1824,  1473, -1824,
   -1824,   858,  8614,  1427, 15775, -1824,  1656,  1657,  1623,  8614,
    1427,   568,  8614, -1824,  1600, -1824,  1525,  1627, -1824,  1630,
   -1824,  8614,  8614,  7310,  7310, 10432,  2495, 11675,  2583, -1824,
   -1824,  8614, -1824, 11967, -1824, -1824, -1824, -1824,   361, -1824,
   -1824, -1824,   257,   962,  1732,  8916,   385,  8916, -1824, -1824,
    1635, 15775,   271, -1824, 15775,  4308, -1824,  4308,  4308, -1824,
   -1824, -1824, 15775, -1824,  1706,    13, -1824, -1824,  1639,  1640,
   -1824, -1824, -1824, -1824,  1504,  1552, -1824, -1824, -1824,  1566,
     639, -1824,  1555,  1556,   711, -1824, -1824, -1824, -1824,   644,
   -1824,  1187,  1482,   473,  1187,  1652,  1652,  1488, -1824,  1589,
    1826, 15775, -1824,  1513, -1824,   972,  1295, -1824,   739, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, 14315,  1564,
    1829,  1663,  1608, -1824,  1516,  1507, 15775,  1758, -1824,  1602,
      -3,   656,   660,  1606, 13439,  3622,  7962,  4308,  1547, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824,  1535, -1824, -1824, -1824, -1824,
    1518,  2565,  2524,  1855,  2524, -1824,  1687, -1824,  1689,  1690,
   -1824,  1691,   373, -1824,  1526, -1824, -1824, -1824,  1693, 12550,
    1528, -1824,   342, -1824,  1532,  1697, -1824, -1824, -1824,  7636,
   15775,  1610,  1613,  1615,  1616, -1824, -1824,  1699, -1824, -1824,
   -1824, -1824, -1824,   569,  1708, -1824, -1824,   353,  1549, -1824,
   -1824, -1824,   410, -1824,  1705, -1824, -1824, -1824,   380,   389,
     390,  8614, -1824, -1824,  8614, -1824,  8614, -1824, -1824, -1824,
   16359,  8916, -1824,   711,  4308, -1824,   385, 15775,   408,  1553,
    1384,  1692,  1692,  1553,  8614, -1824, -1824, -1824,  4651, -1824,
   -1824,  1628,  1614, -1824,   546, -1824,  1780,  8614,   711,   711,
   -1824,  1764, -1824,  8614, -1824,   644, -1824, -1824, -1824, -1824,
     520, -1824,  1187,  1811,   415, 15775,    32,    32,  1187,  1187,
   -1824, -1824, 15775, -1824, -1824,  1726,  1727, -1824,    -7, -1824,
    1633,   897,  1789,   453,   142,  1664,  3965, 15775, -1824,  1736,
   -1824,  1738, -1824, -1824,  1384,  4308, -1824,   657,  9506,   215,
   -1824, 10753,  4308, -1824, -1824,  1739,  9826, -1824,  1226,   642,
   -1824, -1824, -1824, -1824, -1824, 15775, 15775,  8614,  8614,  8614,
   -1824,  8288, -1824, -1824, -1824, -1824,  1795,   590,  1804,  1806,
   -1824, -1824, 15775, -1824, -1824,  8614,  1655,  1661,  1743,   621,
   -1824, -1824, -1824, 12259, 12843, 13427, -1824, -1824, -1824,  1384,
   -1824,   466, -1824,  1241,  5972,  1592,  1582,  1586,  1587, -1824,
   -1824, -1824,  1187, 15775, -1824, -1824, -1824, -1824,  1426,  1649,
   -1824,  1612, -1824, -1824, -1824,  1817,  1755,  1665, 15775, -1824,
   -1824, -1824,  1593,  1702, -1824, -1824,   467, -1824,  1931,  1524,
    1524, -1824,  1694, -1824,   592,  1792, -1824, -1824,  -160,   153,
     897, -1824,  1638, -1824,  1668, -1824,  1880,  1881, -1824, 15775,
    1712, -1824,  1632,  8614,   667,   240, -1824, -1824,  1666,  8614,
   -1824,   725, -1824, 10753,  1843,   -81, 15775,  1741,  1972, -1824,
   -1824, -1824, -1824,  1746,  1976, -1824,  1642, 12550,   471, -1824,
    1662, -1824, -1824,  1646, -1824, -1824,  1833, -1824, -1824, -1824,
    1600, -1824,  1838,  1866, -1824,  1865, 15775,  2019,   588, -1824,
   -1824, -1824, -1824, -1824, -1824,  1834, -1824, -1824, -1824,    99,
   -1824, -1824, -1824, 15775,  1894, -1824,  4308, -1824,   711,  1187,
   -1824, -1824, 15775, -1824,  1967,  1967, 15775,   474, -1824, -1824,
    1440, -1824,  1440,  1440,  1440, -1824,   932,  1852, 11055, -1824,
   -1824, -1824, 15775,   483, 12550,  1854, -1824, 10135,  1730,  8904,
   -1824,  1719,  9208,  1899,  1721, -1824,   485,  2565, 15775,  1226,
   15775,  1226, -1824,  8614, 15775, -1824,  8614, -1824, -1824, -1824,
   -1824,  1876, -1824, -1824, -1824,  1876, -1824,  1882, 15775,  2019,
   -1824, -1824, -1824,  1883,  6315,  1701, -1824,  1711, -1824,   711,
    1867,   528,  1928, -1824, -1824, -1824,  1982,  1982, -1824, -1824,
     592, 15775, 15775, 15775, 15775, -1824, -1824, -1824,  4308,  1733,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824,  8614, -1824, 10135,  1911, -1824, -1824,  1747, -1824,
    4308,  1734,  1737, -1824, 10444, -1824, 15775, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824,  2019, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824,  1722,  1709,  1713, -1824,
   -1824, -1824, -1824,  1928,  1020, -1824, -1824,   729,  1786,  1991,
    1811,  1811, -1824, -1824, -1824, -1824, -1824,   629, -1824, 12550,
   -1824, 10135, -1824, 10135,   243,  1749, -1824,  1748,  2565, -1824,
   -1824, -1824, -1824, -1824,  1786,   640, -1824, -1824, -1824, -1824,
    1225,  1788,  1793, -1824, -1824, -1824,  1742, -1824, 11364, -1824,
   -1824, 15775, -1824, -1824, -1824,    71,    71,  1997, -1824,  1998,
   -1824,  1889, -1824, -1824,  1932,  9208, -1824, -1824, -1824, -1824,
    2023,   -11, -1824, -1824,  1018, -1824, -1824, -1824, -1824, -1824,
     488, -1824, -1824,  1018, -1824
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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
     512,     0,     0,   755,     0,     0,   618,   618,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     639,   637,   638,   615,     0,   619,   620,     0,     0,     0,
       0,   621,   625,   623,   622,   624,   614,     0,   644,   667,
     652,   653,   658,   668,   657,   672,   673,   674,   675,   748,
     654,   655,   656,   669,   659,   664,   662,   660,   661,   663,
     665,   666,   670,   628,     0,   702,   754,   751,   699,     0,
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
       0,     0,     0,   601,   602,   599,     0,   543,   544,   545,
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
     570,     0,   820,   541,     0,     0,   555,     0,     0,   629,
     630,   626,     0,   698,     0,   706,   768,   767,     0,     0,
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
       0,     0,   745,   746,     0,   747,     0,   836,   828,   646,
       0,     0,   515,     0,     0,   516,   519,     0,     0,   576,
     580,   616,   617,   703,     0,   708,   709,   701,     0,   766,
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
     495,   631,   632,     0,     0,     0,   568,   518,   528,   527,
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
    1104,   743,   744,   749,   569,     0,   714,   712,   715,     0,
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1824,  1121, -1824, -1824, -1824, -1824, -1824, -1225, -1824,  1037,
     187, -1189, -1824, -1824,   905, -1824,    15, -1824,    20,   419,
   -1824,   983, -1824, -1824, -1824,   584, -1824,   806,     1,  1869,
   -1824, -1824,   -45,     8, -1824, -1824,  1871, -1824,  1625, -1824,
   -1824, -1824,  1629,  -358,  1050,    55, -1824, -1824, -1824,   553,
      68, -1824,    67, -1824,  -768,  1325,  -393, -1824, -1824, -1824,
    -594, -1824,  2050, -1824, -1824,    14, -1824, -1824, -1824,  1026,
     591, -1824, -1824, -1824, -1824, -1824, -1824, -1579, -1824,   447,
   -1824, -1824, -1824, -1824, -1033,    28,    46,    51,    57, -1824,
      90, -1824, -1824, -1824,   -34, -1824, -1824,  -198,  -410, -1824,
    -156,   -19, -1824, -1293, -1018, -1824,   403, -1527, -1824, -1287,
      53, -1407, -1824,   534, -1824, -1824, -1824, -1824, -1824, -1824,
     293, -1824,   418, -1824,   298, -1824,    31, -1824, -1824, -1824,
   -1824,   566,  -721, -1824, -1824, -1824, -1824, -1824, -1824,   323,
    -634,   325, -1824, -1824, -1824, -1824, -1824,  1669,    93,  -407,
     770,  -401,    25,    37, -1824,  -134, -1824,  1411, -1824,  2108,
    1960, -1824, -1824, -1824, -1824,   643, -1824,   246,  -747, -1824,
   -1824, -1028,   245,   175,  -709,   650,   654, -1824, -1824, -1824,
    1435,  -664,   752,  -902, -1824,  -304,   754,  1124,  -158, -1824,
    1296,  -573,  -881,   933, -1824, -1824,   541,   126, -1824,  1750,
   -1824, -1824,    42,   132, -1824,   923,   103,  1033,   780,  -419,
    1219,  1595, -1824,  -615, -1824,  -912,  -857, -1824, -1007, -1824,
    -229,  1530,  1260, -1824, -1824,  1311,   540,  1025, -1824, -1824,
    -282, -1824, -1824,  1521, -1824,   549, -1824, -1824, -1824, -1824,
    1544, -1824, -1824,  1514, -1824,  1464,  -242,  -729,  1474,  -555,
    -479, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,   428,
   -1824, -1824, -1824, -1824, -1824, -1824,     7, -1824,  -408, -1824,
     953, -1824, -1824,  1534, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824,  -478,  -488,  -529, -1824,  -556, -1824, -1824, -1824, -1824,
    1258, -1824,  2138, -1824,  1650,    73, -1331, -1824,  1596, -1824,
   -1824, -1824,  1261, -1824,  1565, -1824,  1287,  -653,   190,  -688,
    -207, -1824,  -272, -1824,  -240, -1824, -1824,  -193,  -296,    79,
   -1824,    -4, -1824, -1377,  -476,    39,  -230, -1824, -1824, -1824,
   -1824, -1824,  -552, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
   -1824, -1824,   468, -1824,   267, -1824, -1824, -1824, -1593, -1824,
     472,   620, -1824, -1824, -1824, -1824,   801, -1824, -1824, -1824,
   -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824, -1824,
     476, -1824, -1824, -1824, -1824, -1824, -1824, -1824,  1611,  -791,
     831, -1824,   636, -1824,   832, -1824, -1824,   370, -1104, -1824,
   -1824, -1824, -1824, -1824, -1823,   287, -1824, -1824, -1824, -1824,
   -1824, -1824,   281, -1824, -1824, -1824, -1824
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
     364,   365,   366,   957,   367,   961,   368,   369,   610,   370,
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     149,    41,   289,   573,   693,   158,   430,   428,    42,   163,
    1075,   707,   467,   173,   149,    38,   281,   555,   435,   464,
      39,   839,   938,  1067,   170,    52,   712,  1232,  1012,  1293,
    1553,   283,   290,  1005,   879,   442,   443,    53,   883,  1299,
     445,   216,    61,   888,  1026,   216,   899,  1527,  1064,   556,
     301,   903,   301,  1216,  1618,    43,  1293,  1245,  1246,   609,
     613,   838,   149,   182,  1047,  1048,  1763,   946,    44,   762,
    1049,   576,   577,   578,  1393,   635,  1785,   148,   459,   469,
    1105,  1106,  1107,   589,  1236,  1033,   741,   862,   213,  1485,
     864,   174,   730,    51,  1162,  1165,   559,  1166,  1625,  2088,
     813,   814,   815,  1553,   810,   205,  2002,   641,  1180,  1088,
     637,  1553,   608,  2078,  2079,  1831,   164,   165,  1834,  1880,
     621,   822,   641,   637,  -778,  1486,    59,   448,  1268,   709,
    1462,  1381,    62,   184,   185,   186,   187,   188,   189,   298,
     -87,   -87,   -87,   -87,   -87,   -87,  1463,   919,   214,   400,
     149,  -731,  1042,  1057,  2080,   418,   908,   931,   993,  1464,
     382,   932,   893,  1813,   894,  1786,  1881,  1459,   687,   688,
     641,  1089,   641,  2039,  1058,   151,    41,    41,    41,    41,
      41,  1072,  1935,    42,    42,    42,    42,    42,   449,  1460,
      38,    38,    38,    38,    38,    39,    39,    39,    39,    39,
      52,    52,    52,    52,    52,  1878,  1796,  1382,  1936,   461,
     149,   149,    53,    53,    53,    53,    53,    61,    61,    61,
      61,    61,  1474,    14,   994,   475,  1797,   414,  1905,   149,
      43,    43,    43,    43,    43,  1027,   149,   484,   770,  2089,
    1741,   149,   149,    44,    44,    44,    44,    44,   152,   149,
     149,   149,   149,   497,   149,   642,  1034,   149,   149,   149,
     149,   149,   510,  1485,   773,  1036,   149,   149,    51,    51,
      51,    51,    51,   290,   522,   523,   864,   864,  1164,  1897,
     570,   712,   864,   825,   693,  1902,  1201,   462,   463,   205,
    1593,   216,  -778,   427,   622,   574,   575,  1155,   827,  1486,
    1416,    59,    59,    59,    59,    59,   478,    62,    62,    62,
      62,    62,   215,   483,   470,   216,  1134,   449,   488,   489,
     465,   689,   609,  1995,   742,   592,   493,   494,   495,   496,
     929,   498,   793,  1216,   505,   506,   507,   508,   509,   867,
    1175,   869,   164,   515,   516,  2081,  1253,  -467,  1255,  1181,
     873,   873,   823,  1626,  1238,   821,  1417,  1278,  1135,  1034,
    1132,  1133,   949,   953,   769,  1475,  -731,   762,   149,  1974,
     164,  2022,   966,   164,  1825,   608,  -731,   358,  1984,  1333,
    -731,   358,  1039,  1040,   164,   608,  1150,  1499,  1394,  -774,
    -262,  1399,   425,   207,  1798,   694,   208,  1108,   920,   725,
     921,  1613,   909,   641,  1814,  1110,  1111,  1112,  1113,  1527,
     184,   185,   186,   187,   188,   189,  1117,  1118,  1119,    40,
     561,   163,   164,   293,   294,   295,   400,  1619,   641,   486,
     713,   641,  1883,  1937,  -731,  1623,  1034,   382,  1938,   190,
     191,   192,   193,  1024,  -731,   655,    65,    13,   149,    14,
    2031,  1031,  2033,   588,  1222,  1223,  1224,  1391,  1225,  1226,
    1386,  1227,   149, -1096,  1186,  1293,   149,   606,  1209,   190,
     191,   192,   193,   607,   446,    13,   301,   217,    13,  1881,
     690,  1965,   791,   149,  1346,  -780,   797,  1050,   149,    13,
     608,    14,   637,   562,   828,   149,  1350,   149,   149,   149,
     149,  1599,  1600,   712, -1096,  1074,  1891,  1028,   149,   149,
     149, -1096,  1400,  1365,  1439,  1440,   820,  1812,  1387,   556,
    1726,   154,   826,   552,   290,   736,  1903,    13,   729,    14,
     164,  1497,  2075,  1568,    49,  1609,   911,   556,   218,   768,
     831,   832,  1896,   772,   724,  2059,  1237,  1704,   850,  1754,
    1257,  1418,  1366,   194,  1730,  1228,  1120,   691,  -262,   605,
     792,  1727,   211,  1731,  1732,   799,   559,  1071,   691,   864,
     910,   556,   804,   573,   806,   807,   808,   809,   626,   627,
    1353,  1565,  1742,   194,   559,   817,   818,   819,   556,  1775,
     692,   212,  1577,   471,    40,    40,    40,    40,    40,  1584,
    1184,   692,   219,  1610,  1259,  1449,  1423,  1131,  1381,   472,
     301,  1025,  1368,  1426,   872,  1988,  1069,  1990,   559,  1032,
     190,   191,   192,   193,   195,   447,  1153,  1795,  1190,   629,
    1764,   925,  1187,   942,   945,   559,  1210,    14,   948,  1215,
    1854,  1871,  1156,   638,   940,  1912,  1474,   196,  1949,  1211,
    1614,  1965,  1347,  -780,   195,   624,  1755,  1971,  1151,  1985,
    1129,   915,  2092,   918,  1351,   164,   781,   782,   783,   784,
     746,  1927,  1242,  1836,  1722,  1243,  1244,   196,   798,   400,
    1401,  1004,  1032,  1032,  1709,  1010,   290,  1197,   197,  1199,
     382,  1212,   833,  1585,    66, -1096,  1765,   155,  1736,  1498,
    1837,  1569,  2016,  1187,  1845,   473,   474,   465,  1340,    49,
      49,    49,    49,    49,   606,  1705,   641,  1586,   197,  1641,
     607,  1264,  1401,  1162,  1642,  1248,   776, -1061,   180,   149,
     606,  1032,  1032,   164,   181,   159,   607,  1052,  1634, -1083,
     606,  1928,  1020, -1061,  1929,   228,   607,   160,  1766,  1635,
    1662,  1874,  1875,   747,  -232,   166,   750,  1658,   752,   753,
     754,   755,   756,   757,   476,   477,   758,   149,  2046,  2047,
      13,  1641,   217,   748,   517,   518,  1642,   149,   149,   149,
     149,  1846,   292,   229,  1847,  1084,   230,  1053,  1054,  1767,
     227,   252,  1768,   165,   149,   552,  1104,  1104,  1104,  1104,
    2048,   149,  1769,  2057,  1279,   195,  1038,   291,  1662,  1872,
    1612,  1274,  1616,  1913,  2064,  1636,  1950,   641,  1309,   297,
    -232,  1289,   465,  1550,  1310,  1972,   299,  1986,   196,   712,
    2093,   231,  1336,   232,  1583,   696,   697,  1587,    13,  1280,
      14,   656,  1643,   233,  1068,   606,   293,   294,   295,   712,
     570,   607,   700,   701,  1076,  1077,  1078,  1079,   253,   254,
     255,   256,  1016,   415,   556,   574,  1303,   292,  1157,  1017,
    1018,  1099,  -232,  1289,  1128,   500,   300,   149,  1109,  1823,
    1456,  1457,  1458,  1824,   277,  1167,  1362,  1363,   433,  1637,
    1138,  1989,  1176,  1991,  1643,  1328,   432,  1410,  1222,  1223,
    1224,   434,  1225,  1226,  1414,  1227,  1415,  1010,  1758,  1779,
    1780,   559,  1300,  -232,  1758,   922,  -232,   925,   556,   556,
     441,   675,   676,   677,   678,   679,  -232,   743,   744,   173,
     942,   293,   294,   295,   900,  1233,  1233,  1233,   444,   431,
    1213,   940,   501,   502,   503,   504,   450,   234,   235,   236,
     237,   238,   239,   451,  1161,   529,   530,   531,  1685,   240,
    1806,   777,  1147,  1148,  1149,   559,   559,   452,  1571,    15,
     532,   893,   453,   894,   533,   534,   535,   315,   316,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   241,   228,
     454,    25,  1271,   763,  1272,  1273,  1737,    26,    27,  1228,
     455,   242,   545,   546,   547,   458,  1572,   243,  1573,  1574,
     244,  1260,   245,   794,   795,   764,    29,  1441,   765,   766,
    1123,   466,  1469,  1125,  1126,  1127,  1809,   229,  1806,   216,
     230,  1222,  1223,  1224,   468,  1225,  1226,  -519,  1227,  1276,
    1277,  1137,  1139,  1140,  1141,  1455,   479,  -172,  1281,  1282,
     246,   485,  1283,   492,   556,   480,  1287,   149,   574,   173,
    1217,   481,   724,   724,  1094,  1095,  1218,  1096,  1472,   490,
    1295,  1478,  1479,  1747,   482,   231,  1308,   232,   491,   419,
     436,   437,   420,  1084,   440,  1324,   499,   233,   421,   511,
    1304,  1305,  1306,  1307,   149,   520,  1104,  1184,  1184,   524,
     656,   559,   556,   955,   956,  1682,   776,  1607,   293,   294,
     295,  -937,   525,  1332,   526,  -937,  -937,   527,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  1501,
    1061,  1054,  1228,  -188,  1288,   724,   750,   566,   752,   753,
     754,   755,   756,   757,  -937,  -937,   758,   528,  1217,   559,
    1222,  1223,  1224,  -187,  1218,  1621,  1622,  1227,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   626,   627,
    1587,  1331,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,  1261,  1262,   257,   560,  1747,
     301,   234,   235,   236,   237,   238,   239,   293,   294,   295,
     963,   964,   965,   240,   568,   431,  1620,  -887,  1233,  1233,
     942,   184,   185,   186,   187,   188,   189,   942,  1188,  1189,
    -761,   940,  1285,  1286,   942,  1788,  1789,  1430,   940,   301,
    1820,  -763,   241,  1432,   945,   940,   548,   549,   550,   551,
    -759,  1651,   579,  1478,  1478,   580,  1951,   258,  1952,  1953,
    1954,   243,   581,  1010,   244,  1450,   245,  1800,  1955,  1956,
     582,   750,   751,   752,   753,   754,   755,   756,   757,  1694,
    1697,   758,  1697,   584,   585,   586,   587,  1075,   840,   841,
     842,   843,   844,   845,   588,  1461,  1684,   590,  1689,  2065,
    2066,  -172,   552,   591,   246,  1504,   593,   259,   438,   439,
     594,   556,   556,   595,   556,   513,   514,   596,  1194,  1482,
     260,  2055,  2056,   173,   149,  1490,   597,   465,  1060,  1062,
     598,  1500,  1491,  1422,  1495,   290,   149,   564,   565,   645,
    1540,  1541,   646,   647,   648,   649,   650,   651,   652,   653,
    1217,   777,  1437,   654,   860,   861,  1218,   599,   559,   559,
     257,   559,  1676,   600,   601,   602,   603,  1554,   617,   618,
     644,   619,   633,   261,   262,   263,   264,   265,   634,  1492,
     646,   647,   648,   649,   650,   651,   652,   653,   681,  2008,
    1578,   654,  1493,   682,   683,  1739,  1547,   684,  1548,   685,
    1549,  1496,   266,   686,  1895,  1551,  -700,   485,   698,   702,
     703,   704,   714,  1505,   656,   267,   706,  1494,   716,   717,
     258,   268,   718,   197,   767,   738,   269,   739,   771,   740,
     774,   942,  1772,   942,   775,   786,   788,  1482,  1781,  1782,
    1554,   785,   940,  -937,   940,   800,   801,   802,  1554,   840,
     841,   842,   843,   844,   878,  1640,   803,   811,   805,   816,
     829,   270,   836,   830,   271,   834,  1805,   835,   837,   622,
     259,   624,   851,  1815,   852,   853,   759,   854,  1822,   858,
     865,   872,  1673,   260,   868,   871,   876,  1661,   877,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,  1490,
     881,   890,   897,   889,  1665,   896,  1491,   904,   -14,     1,
     906,   907,   290,   959,   916,   357,   724,   724,   960,   645,
     942,   995,   646,   647,   648,   649,   650,   651,   652,   653,
    1907,   170,  1861,   654,   996,   998,   261,   262,   263,   264,
     265,  1011,  1014,  1015,  1022,   637,  -225,   840,   841,   842,
     843,   844,  1352,  1492,  1029,  1044,  1043,  1041,  1045,     2,
    1046,  1054,  1063,  -225,  1073,   266,  1493,  1070,  -225,  -225,
    1080,  1082,     3,     4,     5,     6,  1714,  1081,  1087,  1085,
    1093,  1100,   641,  1124,   268,     7,     8,     9,    10,   269,
    1098,  1494,  1146,  1142,    11,  1162,  1159,  1680,  1158,  1169,
    1136,  1160,  1178,  1174,  1738,   292,  1195,  1196,  1208,  1198,
    -225,  1221,  -225,  1240,   656,  1206,  1233,   942,  1254,  1249,
    1256,  1250,  -762,  1482,   270,  -764,  -760,   271,   940,  1759,
    1760,  1263,  1268,  1258,  1266,  1187,  1270,     3,     4,     5,
       6,    12,  1275,  1284,  1296,  1987,  1298,  1941,  1301,  1943,
       7,     8,     9,    10,  1302,  1089,  1312,  1317,  1313,    11,
    1325,  1778,  1327,  1330,  -225,  -225,  -225,  1329,  1783,  1334,
    1337,  1338,  1335,  -791,  1339,  1341,  1343,   556,  1361,    13,
    1342,    14,   400,  1802,  -633,  1344,  -225,  1345,  -225,  1822,
    1348,  1822,  1349,   382,  -225,  -225,  1355,  1540,  1356,  1357,
    2038,  1358,  1540,  1359,  1367,  -225,  1369,  1370,  -225,  1371,
    1389,  1554,  1826,  -225,  1391,  1395,  1384,  1396,  -225,  1402,
    1403,  1404,  1942,  1409,   559,  1412,  1419,   645,  1840,  1420,
     646,   647,   648,   649,   650,   651,   652,   653,    15,  2027,
    1438,   654,  1421,  1425,    13,  1427,    14,    16,    17,  1428,
      18,  1431,    19,    20,    21,    22,    23,    24,  1434,  1862,
      25,  2034,  1442,  1435,  1443,  1444,    26,    27,  1446,  1447,
    1454,  1470,  1451,  1453,   149,  1473,  2062,  1480,  -225,  1502,
     656,  1509,    28,  1507,  1481,    29,  1506,  1542,  1555,  1566,
    1543,  1556,   645,  2013,  1544,   646,   647,   648,   649,   650,
     651,   652,   653,    15,  1570,  1802,   654,  1582,   556,  1580,
    1581,  1595,    16,    17,  1596,    18,  1594,  1611,  1617,  1540,
    1624,    30,   574,  1629,  1630,    25,  1633,   615,   616,  1638,
    1639,    26,    27,   620,  1652,  1655,  1632,  1659,   630,  1660,
    1658,  1666,  1667,  1631,  1668,  1674,  1670,    28,  1671,  1675,
      29,  1868,  1922,  1692,  1677,   559,   671,   672,   673,   674,
     675,   676,   677,   678,   679,  1662,  1191,  1690,   552,   149,
    1698,  1700,  1693,  1701,  1702,  1703,  1707,  1729,  1778,  1706,
    1708,  1712,  1948,  1720,  1711,  1716,    30,  2091,  1717,   656,
    1718,  1719,  1721,   654,  1540,  1752,  2094,  1753,  1970,  1962,
    1756,  1725,  1761,  1540,  1773,  1705,  1963,  1499,  1540,  1787,
    1784,  1792,  1799,  1960,  1802,  1835,  1802,   710,  1961,  1803,
    1993,  1804,  1816,  1967,  1838,   710,  1839,  1844,  1856,  1857,
    1842,  1863,  1859,  1858,  2000,  1968,  1843,  1865,  1866,  1867,
    1969,  1870,   656,  1864,  1873,  1869,  1939,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,  2023,  2024,  2025,
    2026,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,  1879,  1889,  1890,  1876,  1886,  1887,
    1540,   529,   530,   531,   638,  1892,  1904,  1909,  1898,  1908,
    1540,  1911,   574,  1914,  1910,  1259,   532,  1917,  1916,  1919,
     533,   534,   535,   315,   316,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   667,   668,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,  1920,   545,   546,
     547,  1921,  1924,  1940,  1934,  1958,  1945,  1540,  1973,  1540,
    1976,  1978,  1982,  1983,   857,  1996,  1928,  2012,  1999,  2011,
    2014,  2017,  2019,  2028,  2030,  2042,  2035,  2032,  2041,  2036,
    2043,  2050,  2054,  2067,  1540,  2060,  2061,  2077,  2069,  1962,
    2071,  2065,  2084,  2066,  2087,  2085,  1963,   882,   884,   884,
    1316,  1540,  1663,  1960,  1452,   882,   731,   884,  1961,   457,
     456,  2045,   737,  1967,  1267,  1051,   288,  1192,  1290,  1664,
    1762,   912,   913,   914,  2083,  1968,  1466,  1467,  2070,  1819,
    1969,  2063,  2068,  2044,  1900,  1807,  2086,   928,   710,  1901,
    1699,  2074,  1545,  1885,  1884,  1021,   157,   417,  1944,  1657,
    1947,   735,  2021,  1653,   962,   962,   962,   962,  1654,  1013,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,   982,   983,   984,   985,   986,   987,   988,
     989,   990,   991,   992,  1598,  1597,  1265,  1740,  1424,  1002,
    1002,  1433,  1239,  1182,  1743,  1154,   870,  1360,   958,   968,
    1023,   947,  1855,   282,   824,   705,   875,  1152,  1200,  1833,
    1992,  1832,  1710,  1576,   301,  1203,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   926,   967,   313,
     314,  1841,  1564,    73,    74,  1713,  1567,    75,   315,   316,
    1918,  1204,  1998,   902,  2005,     0,     0,   997,     0,    76,
       0,     0,    77,     0,     0,   317,   318,   319,   320,   321,
     322,   323,     0,    78,     0,     0,   273,   274,   275,     0,
       0,     0,     0,   324,    79,     0,     0,   164,   167,     0,
     168,   169,   548,   549,   550,   551,     0,     0,     0,     0,
       0,    80,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,    87,   325,     0,     0,
       0,   326,     0,     0,    88,   327,     0,    89,     0,    90,
      91,    92,     0,     0,     0,   328,    93,    94,     0,     0,
       0,     0,     0,     0,     0,   329,   330,   331,   332,   333,
       0,   334,   335,    95,    96,   336,   337,    97,   338,    98,
      99,   100,   101,   102,   103,   104,     0,   105,   339,   106,
     107,   108,   109,     0,   110,   340,   111,     0,     0,     0,
       0,     0,    13,   112,   604,     0,   113,   342,     0,     0,
       0,     0,     0,     0,     0,  1170,     0,     0,     0,   882,
       0,     0,     0,   343,   344,   884,     0,     0,   710,     0,
       0,     0,     0,   345,   346,   347,     0,     0,     0,     0,
     349,     0,     0,     0,     0,     0,  1202,     0,     0,  1205,
     114,   115,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,   710,   710,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,   605,     0,     0,   350,   351,   352,
     353,     0,     0,  1002,     0,  1002,     0,   143,     0,     0,
       0,   354,     0,     0,     0,   355,   356,     0,     0,     0,
     529,   530,   531,     0,     0,     0,     0,     0,     0,   710,
       0,   144,   145,     0,     0,   532,   710,   146,   147,   533,
     534,   535,   315,   316,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,     0,     0,   357,     0,   358,   529,
     530,   531,     0,     0,     0,     0,     0,   545,   546,   547,
       0,     0,     0,     0,   532,     0,     0,     0,   533,   534,
     535,   315,   316,   536,   537,   538,   539,   540,   541,   542,
     543,   544,     0,     0,     0,     0,     0,     0,     0,     0,
     529,   530,   531,     0,     0,     0,   545,   546,   547,     0,
       0,     0,     0,     0,     0,   532,     0,     0,     0,   533,
     534,   535,   315,   316,   536,   537,   538,   539,   540,   541,
     542,   543,   544,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   857,   545,   546,   547,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   656,
       0,     0,     0,     0,  1364,     0,     0,     0,   884,     0,
       0,     0,     0,  1375,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1114,
       0,   656,     0,     0,     0,  1405,  1406,  1407,  1408,  1603,
       0,     0,     0,     0,     0,   710,     0,     0,     0,     0,
       0,  1413,   710,     0,   710,     0,     0,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,     0,     0,     0,
       0,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,     0,     0,     0,   656,     0,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,     0,
       0,     0,  1002,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   548,   549,   550,   551,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,     0,     0,     0,     0,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,     0,  1695,     0,     0,     0,     0,     0,     0,
     548,   549,   550,   551,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1604,     0,     0,
       0,     0,     0,     0,     0,  1559,     0,     0,  1375,     0,
       0,   548,   549,   550,   551,     0,  1170,     0,     0,     0,
       0,     0,     0,   882,     0,     0,   882,     0,     0,  1207,
       0,     0,     0,     0,     0,   710,   710,   710,   710,     0,
       0,     0,     0,     0,     0,   710,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,     0,    77,     0,     0,  1606,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,   164,   167,   933,
     168,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,    81,     0,     0,    82,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
    1688,     0,     0,     0,    88,     0,     0,    89,     0,    90,
      91,    92,     0,     0,     0,     0,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,     0,     0,    97,     0,    98,
      99,   100,   101,   102,   103,   104,     0,   105,     0,   106,
     107,   108,   109,  1375,   110,     0,   111,     0,     0,     0,
       0,     0,    13,   112,  1214,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1733,     0,     0,  1734,     0,
    1735,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   857,     0,
     114,   115,   882,     0,     0,     0,     0,     0,   116,     0,
       0,   882,   117,     0,     0,     0,     0,   882,     0,   118,
       0,     0,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,  1215,     0,     0,   139,   140,   141,
     142,   656,     0,     0,     0,     0,     0,   143,     0,     0,
       0,  1827,  1559,  1559,     0,  1559,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   882,
       0,   144,   145,     0,     0,     0,     0,   146,   147,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   882,     0,
       0,     0,     0,     0,     0,     0,   935,     0,     0,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,     0,
       0,     0,     0,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1894,     0,     0,
       0,     0,   301,  1899,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,     0,     0,   313,   314,     0,
       0,    73,    74,     0,     0,    75,   315,   316,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
      77,     0,     0,   317,   318,   319,   320,   321,   322,   323,
       0,    78,     0,     0,   273,   274,   275,     0,     0,  1411,
       0,   324,    79,     0,     0,     0,   167,     0,   168,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,    87,   325,     0,  1827,     0,   326,
    1559,     0,    88,   327,     0,    89,     0,    90,    91,    92,
       0,     0,     0,   328,    93,    94,     0,     0,   882,     0,
       0,     0,     0,   329,   330,   331,   332,   333,     0,   334,
     335,    95,    96,   336,   337,    97,   338,    98,    99,   100,
     101,   102,   103,   104,     0,   105,   339,   106,   107,   108,
     109,     0,   110,   340,   111,     0,  2029,     0,     0,     0,
       0,   112,   341,     0,   113,   342,     0,   950,   951,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   952,     0,
       0,   343,   344,     0,     0,     0,     0,     0,     0,     0,
       0,   345,   346,   347,     0,     0,     0,     0,   349,     0,
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
       0,     0,     0,     0,   324,    79,     0,     0,   164,   167,
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
       0,     0,     0,    13,   112,   604,     0,   113,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   344,     0,     0,     0,     0,
       0,     0,     0,     0,   345,   346,   347,     0,     0,     0,
       0,   349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,     0,     0,     0,     0,     0,   129,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,     0,   136,     0,     0,
       0,  1681,   138,     0,     0,     0,     0,     0,   350,   351,
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
      87,   325,     0,     0,     0,   326,     0,     0,    88,   327,
       0,    89,     0,    90,    91,    92,     0,     0,     0,   328,
      93,    94,     0,     0,     0,     0,     0,     0,     0,   329,
     330,   331,   332,   333,     0,   334,   335,    95,    96,   336,
     337,    97,   338,    98,    99,   100,   101,   102,   103,   104,
       0,   105,   339,   106,   107,   108,   109,     0,   110,   340,
     111,     0,     0,     0,     0,     0,     0,   112,   341,     0,
     113,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,   344,     0,
       0,     0,     0,     0,     0,     0,     0,   345,   346,   347,
       0,   348,     0,     0,   349,     0,     0,     0,     0,     0,
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
       0,   146,   147,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     357,   301,   358,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,   313,   314,     0,     0,
      73,    74,     0,     0,    75,   315,   316,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,    77,
       0,     0,   317,   318,   319,   320,   321,   322,   323,     0,
      78,     0,     0,   273,   274,   275,     0,     0,     0,     0,
     324,    79,     0,     0,     0,   167,     0,   168,   169,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,    87,   325,     0,     0,     0,   326,     0,
       0,    88,   327,     0,    89,     0,    90,    91,    92,     0,
       0,     0,   328,    93,    94,     0,     0,     0,     0,     0,
       0,     0,   329,   330,   331,   332,   333,     0,   334,   335,
      95,    96,   336,   337,    97,   338,    98,    99,   100,   101,
     102,   103,   104,     0,   105,   339,   106,   107,   108,   109,
       0,   110,   340,   111,     0,     0,     0,     0,     0,     0,
     112,   341,     0,   113,   342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   344,     0,     0,     0,     0,     0,     0,     0,     0,
     345,   346,   347,     0,     0,     0,     0,   349,     0,     0,
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
       0,     0,     0,     0,   146,   147,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   357,   301,   358,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,     0,     0,   313,
     314,     0,     0,    73,    74,     0,     0,    75,   315,   316,
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
       0,     0,     0,   112,   614,     0,   113,     0,     0,     0,
       0,     0,  1744,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   343,   344,     0,     0,     0,     0,     0,
       0,     0,     0,   345,   346,   347,     0,     0,     0,     0,
     349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,   350,   351,   352,
     353,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,   354,     0,     0,     0,   355,   356,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,   145,     0,     0,     0,     0,   146,   147,     0,
       0,     0,     0,     0,     0,  1745,     0,     0,     0,     0,
       0,     0,  1746,     0,     0,     0,     0,   301,   358,   302,
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
       0,     0,     0,     0,   326,     0,     0,    88,   327,     0,
      89,     0,    90,    91,    92,     0,     0,     0,   328,    93,
      94,     0,     0,     0,     0,     0,     0,     0,   329,   330,
     331,   332,   333,     0,   334,   335,    95,    96,   336,   337,
      97,   338,    98,    99,   100,   101,   102,   103,   104,     0,
     105,   339,   106,   107,   108,   109,     0,   110,   340,   111,
       0,     0,     0,     0,     0,     0,   112,   719,   720,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,   344,     0,     0,
       0,     0,     0,     0,     0,     0,   345,   346,   347,     0,
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
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
     326,     0,     0,    88,   327,     0,    89,     0,    90,    91,
      92,     0,     0,     0,   328,    93,    94,     0,     0,     0,
       0,     0,     0,     0,   329,   330,   331,   332,   333,     0,
     334,   335,    95,    96,   336,   337,    97,   338,    98,    99,
     100,   101,   102,   103,   104,     0,   105,   339,   106,   107,
     108,   109,     0,   110,   340,   111,     0,     0,     0,     0,
       0,     0,   112,   614,     0,   113,     0,     0,   999,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   343,   344,     0,     0,     0,     0,     0,     0,
       0,     0,   345,   346,   347,     0,  1000,     0,     0,   349,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     115,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,  1001,     0,     0,     0,     0,     0,   129,     0,     0,
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
     329,   330,   331,   332,   333,  1558,   334,   335,    95,    96,
     336,   337,    97,   338,    98,    99,   100,   101,   102,   103,
     104,   890,   105,   339,   106,   107,   108,   109,     0,   110,
     340,   111,     0,     0,     0,     0,     0,     0,   112,   614,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   344,
       0,     0,     0,     0,     0,     0,     0,     0,   345,   346,
     347,     0,     0,     0,     0,   349,     0,     0,     0,     0,
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
     333,     0,   334,   335,    95,    96,   336,   337,    97,   338,
      98,    99,   100,   101,   102,   103,   104,     0,   105,   339,
     106,   107,   108,   109,     0,   110,   340,   111,     0,     0,
       0,     0,     0,     0,   112,   614,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   344,     0,     0,     0,     0,
       0,     0,     0,     0,   345,   346,   347,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,  1745,     0,     0,     0,
       0,     0,     0,  1746,     0,     0,     0,     0,   301,   358,
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
     111,     0,     0,     0,     0,     0,     0,   112,   614,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,   344,     0,
       0,     0,     0,     0,     0,     0,     0,   345,   346,   347,
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
       0,   146,   147,     0,     0,     0,     0,     0,     0,  2006,
       0,     0,     0,     0,     0,     0,  2007,     0,     0,     0,
       0,   301,   358,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,     0,     0,   313,   314,     0,     0,
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
       0,   110,   340,   111,     0,     0,     0,     0,     0,     0,
     112,   614,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   344,     0,     0,     0,     0,     0,     0,     0,     0,
     345,   346,   347,     0,     0,     0,     0,   349,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   115,     0,
       0,     0,     0,     0,     0,   116,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
       0,     0,     0,     0,     0,   129,     0,     0,   130,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   135,     0,   136,     0,     0,     0,   137,   138,     0,
       0,     0,     0,     0,   350,   351,   352,   353,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   354,   629,
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
       0,     0,     0,     0,     0,     0,   112,   614,   708,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,   344,     0,     0,
       0,     0,     0,     0,     0,     0,   345,   346,   347,     0,
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
       0,     0,   324,    79,     0,     0,   164,   167,     0,   168,
     169,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    81,     0,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
     326,     0,     0,    88,   327,     0,    89,     0,    90,    91,
      92,     0,     0,     0,   328,    93,    94,     0,     0,     0,
       0,     0,     0,     0,   329,   330,   331,   332,   333,     0,
     334,   335,    95,    96,   336,   337,    97,   338,    98,    99,
     100,   101,   102,   103,   104,     0,   105,   339,   106,   107,
     108,   109,     0,   110,   340,   111,     0,     0,     0,     0,
       0,     0,   112,   719,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   343,   344,     0,     0,     0,     0,     0,     0,
       0,     0,   345,   346,   347,     0,     0,     0,     0,   349,
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
       0,     0,     0,     0,     0,     0,    80,     0,     0,  1373,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,   326,     0,     0,    88,
     327,     0,    89,     0,    90,    91,    92,     0,     0,     0,
     328,    93,    94,     0,     0,     0,     0,     0,     0,     0,
     329,   330,   331,   332,   333,     0,   334,   335,    95,    96,
     336,   337,    97,   338,    98,    99,   100,   101,   102,   103,
     104,     0,   105,   339,   106,   107,   108,   109,     0,   110,
     340,   111,     0,     0,     0,     0,     0,     0,   112,   614,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   344,
       0,     0,     0,     0,     0,     0,     0,     0,   345,   346,
     347,     0,     0,     0,     0,   349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   118,     0,     0,   119,   120,   121,
     122,   123,   124,   125,   126,   127,  1374,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
       0,   136,     0,     0,     0,   137,   138,     0,     0,     0,
       0,     0,   350,   351,   352,   353,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,   354,     0,     0,     0,
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
     333,     0,   334,   335,    95,    96,   336,   337,    97,   338,
      98,    99,   100,   101,   102,   103,   104,     0,   105,   339,
     106,   107,   108,   109,     0,   110,   340,   111,     0,     0,
       0,     0,     0,     0,   112,   614,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   344,     0,     0,     0,     0,
       0,     0,     0,     0,   345,   346,   347,     0,     0,     0,
       0,   349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,     0,     0,     0,     0,     0,   129,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
     133,     0,   134,     0,     0,   135,     0,   136,     0,     0,
       0,   137,   138,     0,     0,     0,     0,     0,   350,   351,
     352,   353,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,   354,  1685,     0,     0,   355,   356,     0,     0,
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
       0,     0,   329,   330,   331,   332,   333,  1558,   334,   335,
      95,    96,   336,   337,    97,   338,    98,    99,   100,   101,
     102,   103,   104,     0,   105,   339,   106,   107,   108,   109,
       0,   110,   340,   111,     0,     0,     0,     0,     0,     0,
     112,   614,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   344,     0,     0,     0,     0,     0,     0,     0,     0,
     345,   346,   347,     0,     0,     0,     0,   349,     0,     0,
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
       0,     0,     0,     0,     0,     0,   112,   614,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,   344,     0,     0,
       0,     0,     0,     0,     0,     0,   345,   346,   347,     0,
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
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,     0,   144,   145,     0,     0,    73,    74,
     146,   147,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    77,     0,     0,
       0,   358,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,   167,   933,   168,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,    81,
       0,     0,    82,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,    89,     0,    90,    91,    92,     0,   656,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
       0,     0,    97,     0,    98,    99,   100,   101,   102,   103,
     104,     0,   105,     0,   106,   107,   108,   109,     0,   110,
       0,   111,     0,     0,     0,     0,     0,     0,   112,   934,
       0,   113,     0,     0,     0,     0,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,     0,     0,     0,     0,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   118,     0,     0,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,     0,   129,     0,     0,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
       0,   136,     0,     0,     0,   137,   138,     0,     0,     0,
       0,     0,   139,   140,   141,   142,  1977,     0,     0,     0,
       0,     0,   143,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,     0,     0,    75,     0,   144,   145,     0,     0,
       0,     0,   146,   147,     0,     0,    76,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,   935,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     3,     4,  1510,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,  1511,     0,
       0,    81,     0,     0,  1512,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,    89,     0,    90,    91,    92,     0,
       0,   656,     0,    93,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,     0,     0,    97,     0,    98,    99,   100,   101,
     102,   103,   104,     0,   105,     0,   106,   107,   108,   109,
       0,   110,     0,   111,     0,     0,     0,     0,     0,     0,
     112,     0,     0,   113,     0,     0,     0,     0,     0,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,     0,
       0,     0,     0,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   115,     0,
       0,     0,     0,     0,     0,   116,     0,     0,    15,   117,
       0,     0,     0,     0,     0,     0,   118,    16,  1514,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
      25,     0,     0,     0,     0,   129,    26,    27,   130,     0,
       0,     0,   131,     0,     0,   132,   133,     0,   134,     0,
       0,   135,    28,   136,  1515,    29,     0,   137,   138,     0,
       0,     0,     0,     0,   139,   140,   141,   142,   922,     0,
       0,     0,     0,     0,   143,     0,     0,     0,  1516,     0,
       0,  1979,     0,     0,  1517,  1980,  -347,     0,     0,     0,
       0,    30,    67,    68,    69,    70,    71,    72,   144,   145,
       0,     0,     0,     0,   146,   147,     0,     0,     0,    73,
      74,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     3,     4,  1510,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,  1511,     0,     0,
      81,     0,     0,  1512,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    84,    85,    86,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,    89,     0,    90,    91,    92,     0,     0,
     656,     0,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      96,     0,     0,    97,     0,    98,    99,   100,   101,   102,
     103,   104,     0,   105,     0,   106,   107,   108,   109,     0,
     110,     0,   111,     0,     0,     0,     0,     0,     0,   112,
       0,     0,   113,     0,     0,     0,     0,     0,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,     0,     0,
       0,     0,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,   115,     0,     0,
       0,     0,     0,     0,   116,     0,     0,    15,   117,     0,
       0,     0,     0,     0,  1513,   118,    16,  1514,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,    25,
       0,     0,     0,     0,   129,    26,    27,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,    28,   136,  1515,    29,     0,   137,   138,     0,     0,
       0,     0,     0,   139,   140,   141,   142,  1809,     0,     0,
       0,     0,     0,   143,     0,     0,     0,  1516,     0,     0,
       0,     0,     0,  1517,     0,     0,     0,     0,  1518,     0,
      30,    67,    68,    69,    70,    71,    72,   144,   145,     0,
       0,     0,     0,   146,   147,     0,     0,     0,    73,    74,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       3,     4,  1510,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,  1511,     0,     0,    81,
       0,     0,  1512,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,    89,     0,    90,    91,    92,   656,     0,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
       0,     0,    97,     0,    98,    99,   100,   101,   102,   103,
     104,     0,   105,     0,   106,   107,   108,   109,     0,   110,
       0,   111,     0,     0,     0,     0,     0,     0,   112,     0,
       0,   113,     0,     0,     0,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,     0,     0,     0,     0,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,     0,   116,     0,     0,    15,   117,     0,     0,
       0,     0,     0,  1817,   118,    16,  1514,  1818,   120,   121,
     122,   123,   124,   125,   126,   127,   680,   128,    25,     0,
       0,     0,     0,   129,    26,    27,   130,     0,     0,     0,
     131,     0,     0,   132,   133,     0,   134,     0,     0,   135,
      28,   136,  1515,    29,     0,   137,   138,     0,     0,     0,
       0,     0,   139,   140,   141,   142,     0,     0,     0,     0,
       0,     0,   143,     0,     0,     0,  1516,     0,     0,     0,
       0,     0,  1517,     0,     0,     0,     0,  1518,     0,    30,
      67,    68,    69,    70,    71,    72,   144,   145,     0,     0,
       0,     0,   146,   147,     0,     0,     0,    73,    74,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     3,
       4,  1510,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1511,     0,     0,    81,     0,
       0,  1512,     0,     0,     0,     0,     0,    83,     0,  1247,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,    89,     0,    90,    91,    92,   656,     0,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,     0,
       0,    97,     0,    98,    99,   100,   101,   102,   103,   104,
       0,   105,     0,   106,   107,   108,   109,     0,   110,     0,
     111,     0,     0,     0,     0,     0,     0,   112,     0,     0,
     113,     0,     0,     0,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,     0,     0,     0,     0,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,   115,     0,     0,     0,     0,
       0,     0,   116,     0,     0,    15,   117,     0,     0,     0,
       0,     0,     0,   118,    16,  1514,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,    25,     0,     0,
       0,     0,   129,    26,    27,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,    28,
     136,  1515,    29,     0,   137,   138,     0,     0,     0,     0,
       0,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,  1516,     0,     0,     0,     0,
       0,  1517,     0,  -347,     0,     0,     0,     0,    30,    67,
      68,    69,    70,    71,    72,   144,   145,     0,     0,     0,
       0,   146,   147,     0,     0,     0,    73,    74,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     3,     4,
    1510,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1511,     0,     0,    81,     0,     0,
    1512,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,  1601,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
      89,     0,    90,    91,    92,     0,   656,     0,     0,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,     0,     0,
      97,     0,    98,    99,   100,   101,   102,   103,   104,     0,
     105,     0,   106,   107,   108,   109,  1602,   110,     0,   111,
       0,     0,     0,     0,     0,     0,   112,     0,     0,   113,
       0,     0,     0,     0,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,     0,     0,     0,     0,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   115,     0,     0,     0,     0,     0,
       0,   116,     0,     0,    15,   117,     0,     0,     0,     0,
       0,     0,   118,    16,  1514,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,    25,     0,     0,     0,
       0,   129,    26,    27,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,     0,     0,   135,    28,   136,
    1515,    29,     0,   137,   138,     0,     0,     0,     0,     0,
     139,   140,   141,   142,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,  1516,     0,     0,     0,     0,     0,
    1517,     0,     0,     0,     0,     0,  2037,    30,    67,    68,
      69,    70,    71,    72,   144,   145,     0,     0,     0,     0,
     146,   147,     0,     0,     0,    73,    74,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     3,     4,  1510,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,  1511,     0,     0,    81,     0,     0,  1512,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    89,
       0,    90,    91,    92,   656,     0,     0,     0,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0,    97,
       0,    98,    99,   100,   101,   102,   103,   104,     0,   105,
       0,   106,   107,   108,   109,     0,   110,     0,   111,     0,
       0,     0,     0,     0,     0,   112,     0,     0,   113,     0,
       0,     0,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,     0,     0,     0,     0,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,     0,
       0,     0,     0,     0,     0,  1143,  1144,     0,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     116,     0,     0,    15,   117,     0,     0,     0,     0,     0,
       0,   118,    16,  1514,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,   128,    25,     0,     0,     0,     0,
     129,    26,    27,   130,     0,     0,     0,   131,     0,     0,
     132,   133,     0,   134,     0,     0,   135,    28,   136,  1515,
      29,     0,   137,   138,     0,     0,     0,     0,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,  1516,     0,     0,     0,     0,     0,  1517,
      67,    68,    69,    70,    71,    72,    30,     0,     0,     0,
       0,     0,     0,   144,   145,     0,     0,    73,    74,   146,
     147,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     3,
       4,  1510,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,  1511,     0,     0,    81,     0,
       0,  1512,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,    89,     0,    90,    91,    92,   656,     0,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,     0,
       0,    97,     0,    98,    99,   100,   101,   102,   103,   104,
       0,   105,     0,   106,   107,   108,   109,     0,   110,     0,
     111,     0,     0,     0,     0,  1193,     0,   112,     0,     0,
     113,     0,     0,     0,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,     0,     0,     0,     0,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,   115,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,   117,     0,     0,     0,
       0,     0,     0,   118,    16,  1514,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,   128,     0,     0,     0,
       0,     0,   129,    26,    27,   130,     0,     0,     0,   131,
       0,     0,   132,   133,     0,   134,     0,     0,   135,    28,
     136,  1515,     0,     0,   137,   138,     0,     0,     0,     0,
       0,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   143,     0,     0,     0,  1516,     0,     0,     0,     0,
       0,  1517,     0,     0,     0,     0,  1959,     0,    30,    67,
      68,    69,    70,    71,    72,   144,   145,     0,     0,     0,
       0,   146,   147,     0,     0,     0,    73,    74,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     3,     4,
    1510,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     9,  1511,     0,     0,    81,     0,     0,
    1512,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    84,    85,    86,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
      89,     0,    90,    91,    92,     0,   656,     0,     0,    93,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,     0,     0,
      97,     0,    98,    99,   100,   101,   102,   103,   104,     0,
     105,     0,   106,   107,   108,   109,  1557,   110,     0,   111,
       0,     0,     0,     0,     0,     0,   112,     0,     0,   113,
       0,     0,     0,     0,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,     0,     0,     0,     0,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   115,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,   118,    16,  1514,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,     0,     0,     0,     0,
       0,   129,    26,    27,   130,     0,     0,     0,   131,     0,
       0,   132,   133,     0,   134,     0,     0,   135,    28,   136,
    1515,     0,     0,   137,   138,     0,     0,     0,     0,     0,
     139,   140,   141,   142,     0,     0,     0,     0,     0,     0,
     143,     0,     0,     0,  1516,     0,     0,     0,     0,     0,
    1517,     0,     0,     0,     0,     0,  2073,    30,     0,     0,
       0,     0,     0,     0,   144,   145,     0,     0,     0,     0,
     146,   147,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,   228,     0,     0,     0,     0,    73,
      74,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,   230,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
      81,     0,     0,    82,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    84,    85,    86,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,    89,     0,    90,    91,    92,     0,   656,
       0,     0,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      96,     0,     0,    97,     0,    98,    99,   100,   101,   102,
     103,   104,     0,   105,     0,   106,   107,   108,   109,  1605,
     110,     0,   111,     0,     0,     0,     0,     0,     0,   112,
       0,     0,   113,     0,     0,     0,     0,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,     0,     0,     0,
       0,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   284,   285,   236,   237,
     238,   239,     0,     0,   116,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,     0,
       0,   131,     0,     0,   132,   133,     0,   134,     0,     0,
     135,     0,   136,     0,     0,     0,   286,   138,     0,     0,
       0,     0,     0,   139,   140,   141,   142,     0,     0,     0,
       0,     0,     0,   143,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,    75,     0,   144,   145,     0,
       0,     0,     0,   146,   147,     0,     0,    76,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,   273,   274,   275,     0,     0,     0,
       0,     0,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,    89,     0,    90,    91,    92,
       0,   656,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,    96,     0,     0,    97,     0,    98,    99,   100,
     101,   102,   103,   104,     0,   105,     0,   106,   107,   108,
     109,  1608,   110,     0,   111,     0,     0,     0,     0,     0,
       0,   112,   277,     0,   113,     0,     0,     0,     0,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,     0,
       0,     0,     0,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,   115,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   278,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   279,     0,   136,     0,     0,     0,   137,   138,
       0,     0,     0,     0,     0,   139,   280,   141,   142,     0,
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
      91,    92,     0,   656,     0,     0,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,     0,     0,    97,     0,    98,
      99,   100,   101,   102,   103,   104,     0,   105,     0,   106,
     107,   108,   109,  1851,   110,     0,   732,     0,     0,     0,
       0,     0,     0,   112,     0,     0,   113,     0,     0,     0,
       0,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,     0,     0,     0,     0,   667,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,   117,   262,   263,   264,   265,     0,     0,   118,
       0,     0,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,   133,
       0,   134,     0,     0,   135,     0,   136,     0,     0,     0,
     733,   138,     0,     0,     0,     0,     0,   139,   140,   141,
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
       0,    90,    91,    92,   656,     0,     0,     0,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0,    97,
       0,    98,    99,   100,   101,   102,   103,   104,     0,   105,
       0,   106,   107,   108,   109,     0,   110,     0,   111,     0,
       0,     0,     0,     0,     0,   112,     0,     0,   113,     0,
       0,     0,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,     0,     0,     0,     0,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,  1009,
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
       0,    89,     0,    90,    91,    92,     0,   656,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,     0,
       0,    97,     0,    98,    99,   100,   101,   102,   103,   104,
       0,   105,     0,   106,   107,   108,   109,  1852,   110,     0,
     111,     0,     0,     0,     0,     0,     0,   112,   588,     0,
     113,     0,     0,     0,     0,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,     0,     0,     0,     0,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,     0,     0,     0,     0,     0,     0,     0,     0,
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
     110,     0,   111,     0,     0,     0,     0,     0,     0,   112,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1448,     0,     0,     0,     0,     0,     0,
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
       0,     0,    79,     0,     0,     0,   167,     0,   168,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,    81,     0,     0,    82,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,    89,     0,    90,    91,    92,
       0,   656,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,    96,     0,     0,    97,     0,    98,    99,   100,
     101,   102,   103,   104,     0,   105,     0,   106,   107,   108,
     109,  1853,   110,     0,   111,     0,     0,     0,     0,     0,
       0,   112,     0,     0,   113,     0,     0,     0,     0,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,     0,
       0,     0,     0,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,   115,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,   133,     0,   134,
       0,     0,   135,     0,   136,     0,     0,     0,   137,   138,
       0,     0,     0,     0,     0,   139,   140,   141,   142,     0,
       0,     0,     0,     0,     0,   143,    67,    68,    69,  1006,
    1007,  1008,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   112,     0,     0,   113,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,    79,     0,     0,   164,
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
       0,     0,     0,     0,     0,   112,    14,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     111,     0,     0,     0,     0,     0,     0,   112,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1318,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,   115,     0,     0,     0,     0,
       0,     0,   116,     0,  1289,     0,   117,     0,     0,     0,
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
     110,     0,   111,     0,     0,     0,     0,     0,     0,   112,
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
     135,   460,   136,     0,     0,     0,   137,   138,     0,     0,
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
       0,   112,   277,     0,   113,     0,     0,     0,     0,     0,
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
       0,     0,     0,   112,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1101,     0,     0,
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
       0,     0,     0,     0,     0,   112,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,     0,     0,
     116,     0,  1289,     0,   117,     0,     0,     0,     0,     0,
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
     111,     0,     0,     0,     0,     0,     0,   112,     0,     0,
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
     110,     0,   111,     0,     0,     0,     0,     0,     0,   112,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,   115,     0,     0,
       0,     0,     0,     0,   789,     0,     0,     0,   117,     0,
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
       0,   112,     0,     0,   113,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   144,
    1231,     0,     0,     0,     0,   146,   147
};

static const yytype_int16 yycheck[] =
{
       4,     0,    36,   299,   414,     9,   164,   163,     0,    13,
     778,   430,   219,    17,    18,     0,    35,   289,   174,   217,
       0,   550,   637,   770,    17,     0,   434,   939,   692,  1062,
    1361,    35,    36,   686,   590,   191,   192,     0,   593,  1067,
     196,    11,     0,   595,    14,    11,   601,  1334,    16,   289,
       3,   603,     3,   934,  1431,     0,  1089,   959,   960,   341,
     342,   549,    66,    24,   752,   753,  1645,   640,     0,   462,
     758,   301,   302,   303,  1178,   357,    83,     4,   212,    27,
     801,   802,   803,   325,   941,   171,   111,   566,    55,  1314,
     566,    18,   450,     0,   158,   886,   289,   888,    85,   110,
     507,   508,   509,  1434,   505,    26,  1929,   188,   899,   111,
     111,  1442,   341,    42,    43,  1708,    66,    14,  1711,   279,
     350,    58,   188,   111,     3,  1314,     0,   281,   111,   433,
     253,   266,     0,     5,     6,     7,     8,     9,    10,    66,
       5,     6,     7,     8,     9,    10,   269,   625,   115,   153,
     154,   173,   746,    67,    83,   159,   174,   342,   110,   282,
     153,   346,   152,  1690,   154,   172,   326,   252,   398,   399,
     188,   173,   188,  1996,    88,   178,   175,   176,   177,   178,
     179,   775,    83,   175,   176,   177,   178,   179,   342,   274,
     175,   176,   177,   178,   179,   175,   176,   177,   178,   179,
     175,   176,   177,   178,   179,  1784,    64,   342,   109,   213,
     214,   215,   175,   176,   177,   178,   179,   175,   176,   177,
     178,   179,   173,   173,   176,   229,    84,   154,   309,   233,
     175,   176,   177,   178,   179,   714,   240,   241,   468,   250,
    1617,   245,   246,   175,   176,   177,   178,   179,   251,   253,
     254,   255,   256,   257,   258,   321,   342,   261,   262,   263,
     264,   265,   266,  1488,   471,   171,   270,   271,   175,   176,
     177,   178,   179,   277,   278,   279,   752,   753,   342,  1806,
     299,   689,   758,   525,   694,  1812,   302,   214,   215,   210,
    1394,    11,   171,   161,   173,   299,   300,   870,   527,  1488,
    1212,   175,   176,   177,   178,   179,   233,   175,   176,   177,
     178,   179,   279,   240,   262,    11,   845,   342,   245,   246,
     217,   343,   604,  1916,   458,   329,   253,   254,   255,   256,
     634,   258,   488,  1214,   261,   262,   263,   264,   265,   568,
     895,   342,    66,   270,   271,   274,   999,   315,  1001,   901,
     579,   580,   289,   340,   342,   174,  1213,  1045,   846,   342,
     838,   839,   644,   645,   317,   316,   173,   760,   372,  1896,
      66,  1950,   654,    66,  1705,   604,   173,   347,  1905,  1100,
     173,   347,   740,   741,    66,   614,   865,   171,  1179,     3,
     174,  1182,   342,   258,   252,   414,   261,   804,   628,   271,
     629,    16,   174,   188,  1691,   806,   807,   808,   809,  1696,
       5,     6,     7,     8,     9,    10,   817,   818,   819,     0,
     178,   425,    66,   166,   167,   168,   430,  1434,   188,   242,
     434,   188,   279,   334,   173,  1442,   342,   430,   339,    64,
      65,    66,    67,   174,   173,   372,   133,   171,   452,   173,
    1977,   174,  1979,   173,    69,    70,    71,   104,    73,    74,
      84,    76,   466,   110,   174,  1498,   470,   341,   174,    64,
      65,    66,    67,   341,   111,   171,     3,   173,   171,   326,
     173,  1888,   486,   487,   174,     3,   490,   759,   492,   171,
     719,   173,   111,   251,   528,   499,   174,   501,   502,   503,
     504,  1403,  1404,   911,   151,   777,  1799,   714,   512,   513,
     514,   158,   174,   115,   174,   174,   520,   302,   142,   759,
     110,   262,   526,   342,   528,   452,  1813,   171,   449,   173,
      66,   174,  2059,   174,     0,   174,   343,   777,   234,   466,
      21,    22,   302,   470,   441,   302,   343,   174,   552,     3,
     343,  1215,   154,   178,   174,   170,   828,   250,   342,   283,
     487,   151,    58,   174,   174,   492,   759,   774,   250,  1045,
     342,   811,   499,   869,   501,   502,   503,   504,   192,   193,
    1136,  1372,   174,   178,   777,   512,   513,   514,   828,   174,
     283,    87,  1383,   298,   175,   176,   177,   178,   179,  1390,
     904,   283,   298,   346,   343,  1258,  1221,   837,   266,   314,
       3,   342,  1164,  1228,   343,  1908,   772,  1910,   811,   342,
      64,    65,    66,    67,   249,   262,   868,   174,   910,   301,
     110,   303,   342,   637,   638,   828,   342,   173,   642,   283,
     174,   174,   871,   262,   637,   174,   173,   272,   174,   931,
     265,  2058,   342,   171,   249,   173,   110,   174,   865,   174,
      53,   622,   174,   624,   342,    66,   479,   480,   481,   482,
     171,    83,   954,    83,   321,   957,   958,   272,   491,   683,
     342,   685,   342,   342,   342,   689,   690,   917,   313,   919,
     683,   933,   173,   125,   111,   342,   176,    81,  1610,   342,
     110,   342,   174,   342,    83,   219,   220,   604,  1109,   175,
     176,   177,   178,   179,   588,   342,   188,   149,   313,   127,
     588,  1025,   342,   158,   132,   967,    86,   158,     5,   733,
     604,   342,   342,    66,    11,    79,   604,   229,    99,   174,
     614,   153,   703,   174,   156,    17,   614,    87,   228,   110,
     342,  1779,  1780,   254,   110,   188,   116,   342,   118,   119,
     120,   121,   122,   123,   219,   220,   126,   771,    39,    40,
     171,   127,   173,   274,    42,    43,   132,   781,   782,   783,
     784,   160,   102,    55,   163,   789,    58,   279,   280,   269,
       0,   165,   272,   690,   798,   342,   800,   801,   802,   803,
      71,   805,   282,   174,  1046,   249,   733,   133,   342,   342,
    1425,  1041,  1427,   342,   174,   176,   342,   188,    56,   133,
     176,   229,   719,  1352,    62,   342,   274,   342,   272,  1237,
     342,   103,  1104,   105,  1389,    82,    83,  1392,   171,  1046,
     173,   134,   250,   115,   771,   719,   166,   167,   168,  1257,
     869,   719,    89,    90,   781,   782,   783,   784,   232,   233,
     234,   235,    88,   190,  1104,   869,  1073,   102,   872,    95,
      96,   798,   228,   229,   835,   165,   343,   881,   805,   237,
    1281,  1282,  1283,   241,   173,   889,  1158,  1159,   173,   250,
     851,  1909,   896,  1911,   250,  1093,   320,  1201,    69,    70,
      71,   343,    73,    74,  1208,    76,  1210,   911,  1637,  1656,
    1657,  1104,  1068,   269,  1643,   301,   272,   303,  1158,  1159,
     173,   214,   215,   216,   217,   218,   282,   255,   256,   933,
     934,   166,   167,   168,   115,   939,   940,   941,   270,   174,
     933,   934,   232,   233,   234,   235,   281,   219,   220,   221,
     222,   223,   224,   342,   881,     5,     6,     7,   301,   231,
     303,   321,   859,   860,   861,  1158,  1159,   265,   110,   230,
      20,   152,   342,   154,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,   260,    17,
     266,   252,  1037,   252,  1039,  1040,  1611,   258,   259,   170,
     266,   273,    52,    53,    54,    87,   148,   279,   150,   151,
     282,  1015,   284,   324,   325,   274,   277,  1247,   277,   278,
     830,   262,  1294,   833,   834,   835,   301,    55,   303,    11,
      58,    69,    70,    71,   262,    73,    74,    75,    76,  1043,
    1044,   851,   852,   853,   854,  1275,   279,   319,  1052,  1053,
     322,   306,  1056,   233,  1294,   279,  1060,  1061,  1062,  1063,
     934,   279,   959,   960,    64,    65,   934,    67,  1298,   319,
    1063,  1301,  1302,  1628,   279,   103,  1080,   105,   279,    88,
     175,   176,    91,  1087,   179,  1089,   233,   115,    97,   306,
    1076,  1077,  1078,  1079,  1098,   227,  1100,  1401,  1402,   296,
     134,  1294,  1342,   100,   101,  1515,    86,  1411,   166,   167,
     168,    20,   177,  1099,   177,    24,    25,   177,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,  1327,
     279,   280,   170,   279,  1061,  1032,   116,   297,   118,   119,
     120,   121,   122,   123,    53,    54,   126,   342,  1022,  1342,
      69,    70,    71,   279,  1022,  1437,  1438,    76,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   192,   193,
    1725,  1098,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,    93,    94,    55,   104,  1744,
       3,   219,   220,   221,   222,   223,   224,   166,   167,   168,
     651,   652,   653,   231,   285,   174,  1435,     3,  1212,  1213,
    1214,     5,     6,     7,     8,     9,    10,  1221,   182,   183,
     173,  1214,    89,    90,  1228,   328,   329,  1231,  1221,     3,
       4,   173,   260,  1237,  1238,  1228,   286,   287,   288,   289,
     173,  1471,   173,  1473,  1474,   173,  1880,   115,  1882,  1883,
    1884,   279,    22,  1257,   282,  1259,   284,  1676,   326,   327,
     173,   116,   117,   118,   119,   120,   121,   122,   123,  1541,
    1542,   126,  1544,   320,   321,   322,   323,  2045,   290,   291,
     292,   293,   294,   295,   173,  1289,  1515,   173,  1517,    64,
      65,   319,   342,   125,   322,  1329,   173,   165,   177,   178,
     173,  1541,  1542,   173,  1544,   268,   269,   173,   342,  1313,
     178,  2020,  2021,  1317,  1318,  1314,   173,  1214,   765,   766,
     173,  1325,  1314,  1220,  1317,  1329,  1330,   294,   295,   177,
    1334,  1335,   180,   181,   182,   183,   184,   185,   186,   187,
    1214,   321,   190,   191,   564,   565,  1214,   173,  1541,  1542,
      55,  1544,  1510,   173,   173,   173,   173,  1361,   173,   173,
     190,   173,   173,   231,   232,   233,   234,   235,   173,  1314,
     180,   181,   182,   183,   184,   185,   186,   187,   332,  1934,
    1384,   191,  1314,   343,   342,  1614,  1347,   173,  1349,   173,
    1351,  1318,   260,   173,  1804,  1356,   332,   306,   281,    92,
      98,   342,   299,  1330,   134,   273,   321,  1314,   133,   133,
     115,   279,   133,   313,   174,   112,   284,   112,   262,   111,
     298,  1425,  1652,  1427,   171,   171,   176,  1431,  1658,  1659,
    1434,   237,  1425,   342,  1427,   173,   173,   173,  1442,   290,
     291,   292,   293,   294,   295,  1464,   173,   173,   233,   106,
     173,   319,    38,   173,   322,   173,  1685,   173,   173,   173,
     165,   173,   173,  1692,   173,   173,   321,   173,  1698,   169,
     298,   343,  1506,   178,   177,   177,    23,  1481,   174,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,  1488,
     112,   155,     3,   238,  1498,   238,  1488,   173,     0,     1,
     174,   174,  1506,   173,   171,   345,  1403,  1404,   173,   177,
    1514,   173,   180,   181,   182,   183,   184,   185,   186,   187,
    1816,  1514,  1752,   191,   206,   174,   231,   232,   233,   234,
     235,   283,    82,    79,   173,   111,   110,   290,   291,   292,
     293,   294,   295,  1488,   243,   273,   281,   257,   104,    51,
     171,   280,   111,   127,   171,   260,  1488,   314,   132,   133,
     238,   106,    64,    65,    66,    67,  1570,   261,   227,   250,
     321,   173,   188,    23,   279,    77,    78,    79,    80,   284,
     265,  1488,   104,   342,    86,   158,   342,  1514,   321,   173,
     281,   111,   146,   342,  1613,   102,   174,   287,   342,   174,
     174,   342,   176,   109,   134,   312,  1610,  1611,   174,   110,
     174,   333,   173,  1617,   319,   173,   173,   322,  1611,  1638,
    1639,    88,   111,   342,   261,   342,   258,    64,    65,    66,
      67,   133,   257,    90,   110,  1907,   315,  1866,   111,  1869,
      77,    78,    79,    80,   257,   173,    20,   234,   268,    86,
      99,  1655,   321,   265,   228,   229,   230,   323,  1662,   174,
     174,   174,   342,   281,   174,   174,   174,  1907,   173,   171,
     342,   173,  1676,  1677,   342,   174,   250,   174,   252,  1909,
     174,  1911,   342,  1676,   258,   259,   174,  1691,   342,   174,
    1986,   174,  1696,   174,   174,   269,   174,   174,   272,   342,
     342,  1705,  1706,   277,   104,   174,   321,   161,   282,   173,
     173,   173,  1868,   296,  1907,   312,   174,   177,  1722,   174,
     180,   181,   182,   183,   184,   185,   186,   187,   230,  1958,
     190,   191,   174,    75,   171,    75,   173,   239,   240,    72,
     242,   173,   244,   245,   246,   247,   248,   249,   104,  1753,
     252,  1980,   104,   108,   174,   102,   258,   259,   174,   174,
      16,   321,   266,   266,  1768,   111,  2038,   265,   342,   171,
     134,   174,   274,   265,   274,   277,   173,   236,   174,   250,
     241,   174,   177,  1939,   236,   180,   181,   182,   183,   184,
     185,   186,   187,   230,   321,  1799,   191,   174,  2038,   143,
     143,   174,   239,   240,   174,   242,   281,    75,   173,  1813,
     104,   313,  1816,   174,   174,   252,   250,   343,   344,   264,
     264,   258,   259,   349,   342,   173,   274,   238,   354,     3,
     342,   267,     3,   329,   171,    77,   228,   274,   331,   237,
     277,  1768,  1846,   308,   238,  2038,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   342,   111,   310,   342,  1863,
       5,   174,   344,   174,   174,   174,   173,   162,  1872,   343,
     342,   174,  1876,   174,   342,   265,   313,  2084,   265,   134,
     265,   265,   174,   191,  1888,   257,  2093,   273,  1892,  1888,
     110,   342,   128,  1897,    83,   342,  1888,   171,  1902,   266,
     173,   112,   238,  1888,  1908,   110,  1910,   433,  1888,   173,
    1914,   173,   173,  1888,   110,   441,   110,   174,   326,   337,
     265,   272,   335,   337,  1928,  1888,   265,   110,   173,   264,
    1888,   229,   134,   321,     3,   342,  1863,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,  1951,  1952,  1953,
    1954,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   172,    85,    85,   273,   330,   301,
    1974,     5,     6,     7,   262,   343,   133,     5,   312,   238,
    1984,     5,  1986,   321,   238,   343,    20,   154,   342,   151,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   151,    52,    53,
      54,   156,     3,   129,   190,   173,    59,  2031,   174,  2033,
     300,   312,   133,   312,   560,   159,   153,   326,   156,   338,
     173,   113,    60,   310,   133,   336,   312,   300,   326,   312,
     337,   265,    61,   265,  2058,   306,   308,  2061,   265,  2058,
     318,    64,   173,    65,    41,   133,  2058,   593,   594,   595,
    1087,  2075,  1488,  2058,  1268,   601,   451,   603,  2058,   210,
     209,  2014,   453,  2058,  1034,   760,    36,   342,  1062,  1498,
    1643,   617,   618,   619,  2066,  2058,   130,   131,  2052,  1696,
    2058,  2044,  2051,  2013,  1811,  1687,  2075,   633,   634,  1811,
    1544,  2058,  1342,  1790,  1789,   704,     8,   157,  1872,  1476,
    1875,   452,  1947,  1473,   650,   651,   652,   653,  1474,   694,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,  1402,  1401,  1032,  1616,  1225,   685,
     686,  1238,   943,   903,  1624,   869,   571,  1142,   647,   655,
     706,   641,  1744,    35,   524,   425,   580,   866,   920,  1711,
    1913,  1709,  1562,  1382,     3,   924,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,   632,   654,    18,
      19,  1725,  1371,    22,    23,  1569,  1374,    26,    27,    28,
    1840,   924,  1925,   602,  1933,    -1,    -1,   683,    -1,    38,
      -1,    -1,    41,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,    -1,
      69,    70,   286,   287,   288,   289,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,   114,    -1,   116,    -1,   118,
     119,   120,    -1,    -1,    -1,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,    -1,   163,   164,   165,    -1,    -1,    -1,
      -1,    -1,   171,   172,   173,    -1,   175,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   891,    -1,    -1,    -1,   895,
      -1,    -1,    -1,   192,   193,   901,    -1,    -1,   904,    -1,
      -1,    -1,    -1,   202,   203,   204,    -1,    -1,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    -1,   922,    -1,    -1,   925,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,   959,   960,    -1,    -1,    -1,   257,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
      -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,
     279,   280,    -1,    -1,   283,    -1,    -1,   286,   287,   288,
     289,    -1,    -1,   999,    -1,  1001,    -1,   296,    -1,    -1,
      -1,   300,    -1,    -1,    -1,   304,   305,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,  1025,
      -1,   320,   321,    -1,    -1,    20,  1032,   326,   327,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,   345,    -1,   347,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1142,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
      -1,    -1,    -1,    -1,  1160,    -1,    -1,    -1,  1164,    -1,
      -1,    -1,    -1,  1169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,
      -1,   134,    -1,    -1,    -1,  1191,  1192,  1193,  1194,   174,
      -1,    -1,    -1,    -1,    -1,  1201,    -1,    -1,    -1,    -1,
      -1,  1207,  1208,    -1,  1210,    -1,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,    -1,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,    -1,   134,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,    -1,
      -1,    -1,  1258,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   286,   287,   288,   289,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,    -1,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1371,    -1,    -1,  1374,    -1,
      -1,   286,   287,   288,   289,    -1,  1382,    -1,    -1,    -1,
      -1,    -1,    -1,  1389,    -1,    -1,  1392,    -1,    -1,   342,
      -1,    -1,    -1,    -1,    -1,  1401,  1402,  1403,  1404,    -1,
      -1,    -1,    -1,    -1,    -1,  1411,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    -1,   342,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
    1516,    -1,    -1,    -1,   113,    -1,    -1,   116,    -1,   118,
     119,   120,    -1,    -1,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,    -1,   158,
     159,   160,   161,  1569,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,   171,   172,   173,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1601,    -1,    -1,  1604,    -1,
    1606,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1624,    -1,
     219,   220,  1628,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,  1637,   231,    -1,    -1,    -1,    -1,  1643,    -1,   238,
      -1,    -1,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,
      -1,   260,    -1,    -1,    -1,   264,    -1,    -1,   267,   268,
      -1,   270,    -1,    -1,   273,    -1,   275,    -1,    -1,    -1,
     279,   280,    -1,    -1,   283,    -1,    -1,   286,   287,   288,
     289,   134,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
      -1,  1707,  1708,  1709,    -1,  1711,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1725,
      -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1744,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,    -1,
      -1,    -1,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1803,    -1,    -1,
      -1,    -1,     3,  1809,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,   302,
      -1,    62,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,   106,    -1,  1913,    -1,   110,
    1916,    -1,   113,   114,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,   124,   125,   126,    -1,    -1,  1934,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,    -1,   163,   164,   165,    -1,  1972,    -1,    -1,    -1,
      -1,   172,   173,    -1,   175,   176,    -1,   178,   179,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,
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
     321,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   345,     3,   347,     5,     6,     7,
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
     105,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,   114,
      -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,    -1,   163,   164,
     165,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,
     175,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,
      -1,   326,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     345,     3,   347,     5,     6,     7,     8,     9,    10,    11,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,
      -1,    -1,    -1,    -1,   326,   327,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   345,     3,   347,     5,     6,     7,     8,
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
      -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
      -1,    -1,   341,    -1,    -1,    -1,    -1,     3,   347,     5,
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
      -1,    -1,   172,   173,    -1,   175,    -1,    -1,   178,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   202,   203,   204,    -1,   206,    -1,    -1,   209,
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
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,    -1,   163,
     164,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,
      -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     138,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,    -1,   163,   164,   165,    -1,    -1,
      -1,    -1,    -1,    -1,   172,   173,    -1,   175,    -1,    -1,
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
      -1,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,   327,
      -1,    -1,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,     3,   347,
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
      -1,    -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,
      -1,   326,   327,    -1,    -1,    -1,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,
      -1,     3,   347,     5,     6,     7,     8,     9,    10,    11,
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
      -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,   301,
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
      -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,    -1,
     326,   327,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      -1,   347,    22,    23,    -1,    -1,    26,    27,    28,    -1,
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
     164,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,
      -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,
     204,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,
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
     138,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,    -1,   163,   164,   165,    -1,    -1,
      -1,    -1,    -1,    -1,   172,   173,    -1,   175,    -1,    -1,
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
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    22,    23,
     326,   327,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,    -1,   118,   119,   120,    -1,   134,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,    -1,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,    -1,   158,   159,   160,   161,    -1,   163,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,
      -1,   175,    -1,    -1,    -1,    -1,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,    -1,    -1,    -1,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,    -1,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,    -1,    -1,
      -1,    -1,    -1,   257,    -1,    -1,   260,    -1,    -1,    -1,
     264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,
      -1,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,    -1,
      -1,    -1,   286,   287,   288,   289,   302,    -1,    -1,    -1,
      -1,    -1,   296,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,   320,   321,    -1,    -1,
      -1,    -1,   326,   327,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,    -1,
      -1,   134,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,    -1,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,    -1,   158,   159,   160,   161,
      -1,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,    -1,
      -1,    -1,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,    -1,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,   230,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
     252,    -1,    -1,    -1,    -1,   257,   258,   259,   260,    -1,
      -1,    -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,
      -1,   273,   274,   275,   276,   277,    -1,   279,   280,    -1,
      -1,    -1,    -1,    -1,   286,   287,   288,   289,   301,    -1,
      -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,   300,    -1,
      -1,   303,    -1,    -1,   306,   307,   308,    -1,    -1,    -1,
      -1,   313,     5,     6,     7,     8,     9,    10,   320,   321,
      -1,    -1,    -1,    -1,   326,   327,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
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
      -1,    -1,    -1,    -1,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,   252,
      -1,    -1,    -1,    -1,   257,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,    -1,   267,   268,    -1,   270,    -1,    -1,
     273,   274,   275,   276,   277,    -1,   279,   280,    -1,    -1,
      -1,    -1,    -1,   286,   287,   288,   289,   301,    -1,    -1,
      -1,    -1,    -1,   296,    -1,    -1,    -1,   300,    -1,    -1,
      -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,   311,    -1,
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
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
      -1,   175,    -1,    -1,    -1,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,    -1,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,   230,   231,    -1,    -1,
      -1,    -1,    -1,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   263,   251,   252,    -1,
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
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,   107,
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
      -1,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,   252,    -1,    -1,
      -1,    -1,   257,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,   274,
     275,   276,   277,    -1,   279,   280,    -1,    -1,    -1,    -1,
      -1,   286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,
      -1,   306,    -1,   308,    -1,    -1,    -1,    -1,   313,     5,
       6,     7,     8,     9,    10,   320,   321,    -1,    -1,    -1,
      -1,   326,   327,    -1,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,   112,    -1,    -1,    -1,    -1,   105,
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
      -1,   227,    -1,    -1,   230,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,   252,    -1,    -1,    -1,
      -1,   257,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
      -1,   267,   268,    -1,   270,    -1,    -1,   273,   274,   275,
     276,   277,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,
     306,    -1,    -1,    -1,    -1,    -1,   312,   313,     5,     6,
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
      -1,   118,   119,   120,   134,    -1,    -1,    -1,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
      -1,   158,   159,   160,   161,    -1,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,
      -1,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    -1,    -1,    -1,    -1,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,    -1,
      -1,    -1,    -1,    -1,    -1,   225,   226,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,   230,   231,    -1,    -1,    -1,    -1,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,   252,    -1,    -1,    -1,    -1,
     257,   258,   259,   260,    -1,    -1,    -1,   264,    -1,    -1,
     267,   268,    -1,   270,    -1,    -1,   273,   274,   275,   276,
     277,    -1,   279,   280,    -1,    -1,    -1,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,   306,
       5,     6,     7,     8,     9,    10,   313,    -1,    -1,    -1,
      -1,    -1,    -1,   320,   321,    -1,    -1,    22,    23,   326,
     327,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     165,    -1,    -1,    -1,    -1,   183,    -1,   172,    -1,    -1,
     175,    -1,    -1,    -1,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,    -1,    -1,    -1,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    -1,
      -1,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,    -1,    -1,    -1,
      -1,    -1,   257,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,    -1,   267,   268,    -1,   270,    -1,    -1,   273,   274,
     275,   276,    -1,    -1,   279,   280,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,   175,
      -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,    -1,    -1,    -1,    -1,   206,   207,
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
     306,    -1,    -1,    -1,    -1,    -1,   312,   313,    -1,    -1,
      -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,    -1,
     326,   327,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,    -1,   118,   119,   120,    -1,   134,
      -1,    -1,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,    -1,   146,    -1,   148,   149,   150,   151,   152,
     153,   154,    -1,   156,    -1,   158,   159,   160,   161,   174,
     163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,   175,    -1,    -1,    -1,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,    -1,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,   221,   222,
     223,   224,    -1,    -1,   227,    -1,    -1,    -1,   231,    -1,
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
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,    -1,   118,   119,   120,
      -1,   134,    -1,    -1,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,    -1,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,    -1,   158,   159,   160,
     161,   174,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,   172,   173,    -1,   175,    -1,    -1,    -1,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,    -1,
      -1,    -1,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,    -1,    -1,    -1,    -1,
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
     119,   120,    -1,   134,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,    -1,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,    -1,   158,
     159,   160,   161,   174,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,    -1,    -1,    -1,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,   231,   232,   233,   234,   235,    -1,    -1,   238,
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
      -1,   118,   119,   120,   134,    -1,    -1,    -1,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,    -1,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
      -1,   158,   159,   160,   161,    -1,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,
      -1,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    -1,    -1,    -1,    -1,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   206,
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
      -1,   116,    -1,   118,   119,   120,    -1,   134,    -1,    -1,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
      -1,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,    -1,   158,   159,   160,   161,   174,   163,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,
     175,    -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,    -1,    -1,    -1,    -1,   206,
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
     163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,
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
      -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,
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
      -1,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
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
      -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,    -1,
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
     165,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,   229,    -1,   231,    -1,    -1,    -1,
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
     163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,
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
     273,   274,   275,    -1,    -1,    -1,   279,   280,    -1,    -1,
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
      -1,   172,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,   229,    -1,   231,    -1,    -1,    -1,    -1,    -1,
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
     165,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,
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
     163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,
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
      -1,   172,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
     321,    -1,    -1,    -1,    -1,   326,   327
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    51,    64,    65,    66,    67,    77,    78,    79,
      80,    86,   133,   171,   173,   230,   239,   240,   242,   244,
     245,   246,   247,   248,   249,   252,   258,   259,   274,   277,
     313,   349,   355,   356,   359,   360,   361,   362,   364,   366,
     367,   376,   381,   393,   398,   399,   405,   450,   453,   461,
     482,   496,   500,   501,   502,   510,   525,   526,   527,   545,
     549,   550,   551,   554,   675,   133,   111,     5,     6,     7,
       8,     9,    10,    22,    23,    26,    38,    41,    52,    63,
      80,    83,    86,    92,    97,    98,    99,   105,   113,   116,
     118,   119,   120,   125,   126,   142,   143,   146,   148,   149,
     150,   151,   152,   153,   154,   156,   158,   159,   160,   161,
     163,   165,   172,   175,   219,   220,   227,   231,   238,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   251,   257,
     260,   264,   267,   268,   270,   273,   275,   279,   280,   286,
     287,   288,   289,   296,   320,   321,   326,   327,   643,   669,
     670,   178,   251,   536,   262,    81,   507,   507,   669,    79,
      87,   546,   547,   669,    66,   554,   188,    67,    69,    70,
     614,   615,   616,   669,   643,   352,   351,   353,   354,   350,
       5,    11,   673,   676,     5,     6,     7,     8,     9,    10,
      64,    65,    66,    67,   178,   249,   272,   313,   377,   384,
     385,   386,   388,   389,   390,   667,   668,   258,   261,   382,
     383,    58,    87,    55,   115,   279,    11,   173,   234,   298,
     445,   446,   518,   545,   551,   658,   672,     0,    17,    55,
      58,   103,   105,   115,   219,   220,   221,   222,   223,   224,
     231,   260,   273,   279,   282,   284,   322,   406,   407,   410,
     411,   444,   165,   232,   233,   234,   235,    55,   115,   165,
     178,   231,   232,   233,   234,   235,   260,   273,   279,   284,
     319,   322,   495,    55,    56,    57,    63,   173,   260,   273,
     287,   449,   640,   669,   219,   220,   279,   365,   410,   442,
     669,   133,   102,   166,   167,   168,   570,   133,   643,   274,
     343,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    18,    19,    27,    28,    44,    45,    46,
      47,    48,    49,    50,    62,   106,   110,   114,   124,   134,
     135,   136,   137,   138,   140,   141,   144,   145,   147,   157,
     164,   173,   176,   192,   193,   202,   203,   204,   206,   209,
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
     104,   178,   251,   555,   555,   555,   297,   571,   285,   539,
     449,   537,   538,   666,   669,   669,   674,   674,   674,   173,
     173,    22,   173,   618,   618,   618,   618,   618,   173,   594,
     173,   125,   669,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   283,   545,   551,   568,   578,
     586,   614,   669,   578,   173,   596,   596,   173,   173,   173,
     596,   674,   173,   630,   173,   631,   192,   193,   628,   301,
     596,   652,   653,   173,   173,   578,   590,   111,   262,   558,
     559,   188,   321,   622,   190,   177,   180,   181,   182,   183,
     184,   185,   186,   187,   191,   643,   134,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     263,   332,   343,   342,   173,   173,   173,   674,   674,   343,
     173,   250,   283,   446,   449,   528,    82,    83,   281,   509,
      89,    90,    92,    98,   342,   547,   321,   557,   174,   533,
     596,   648,   616,   669,   299,   573,   133,   133,   133,   173,
     174,   531,   533,   535,   554,   271,   391,   392,   667,   667,
     391,   386,   165,   279,   387,   495,   643,   390,   112,   112,
     111,   111,   503,   255,   256,   408,   171,   254,   274,   394,
     116,   117,   118,   119,   120,   121,   122,   123,   126,   321,
     401,   403,   404,   252,   274,   277,   278,   174,   643,   317,
     674,   262,   643,   658,   298,   171,    86,   321,   400,   402,
     404,   358,   358,   358,   358,   237,   171,   374,   176,   227,
     368,   669,   643,   448,   324,   325,   483,   669,   358,   643,
     173,   173,   173,   173,   643,   233,   643,   643,   643,   643,
     499,   173,   497,   497,   497,   497,   106,   643,   643,   643,
     669,   174,    58,   289,   642,   594,   669,   568,   442,   173,
     173,    21,    22,   173,   173,   173,    38,   173,   630,   631,
     290,   291,   292,   293,   294,   295,   633,   635,   637,   638,
     669,   173,   173,   173,   173,   574,   575,   596,   169,   556,
     556,   556,   598,   657,   672,   298,   572,   568,   177,   342,
     559,   177,   343,   568,   646,   646,    23,   174,   295,   633,
     634,   112,   596,   597,   596,   680,   681,   682,   680,   238,
     155,   702,   728,   152,   154,   726,   238,     3,   714,   597,
     115,   725,   726,   680,   173,   529,   174,   174,   174,   174,
     342,   343,   596,   596,   596,   673,   171,   629,   673,   629,
     674,   568,   301,   650,   651,   303,   652,   654,   596,   533,
     649,   342,   346,    68,   173,   345,   540,   560,   561,   593,
     614,   643,   669,   552,   553,   669,   539,   569,   669,   578,
     178,   179,   189,   578,   588,   100,   101,   581,   581,   173,
     173,   583,   596,   583,   583,   583,   578,   588,   591,   596,
     596,   596,   596,   596,   596,   596,   596,   596,   596,   596,
     596,   596,   596,   596,   596,   596,   596,   596,   596,   596,
     596,   596,   596,   110,   176,   173,   206,   621,   174,   178,
     206,   251,   596,   655,   669,   655,     8,     9,    10,   206,
     669,   283,   529,   528,    82,    79,    88,    95,    96,   506,
     673,   505,   173,   593,   174,   342,    14,   598,   658,   243,
     363,   174,   342,   171,   342,   379,   171,   378,   643,   391,
     391,   257,   408,   281,   273,   104,   171,   657,   657,   657,
     660,   403,   229,   279,   280,   396,   397,    67,    88,   395,
     397,   279,   397,   111,    16,   516,   517,   516,   643,   448,
     314,   658,   408,   171,   660,   402,   643,   643,   643,   643,
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
     727,   680,   570,   530,   533,   534,   174,   342,   182,   183,
     578,   111,   342,   183,   342,   174,   287,   674,   174,   674,
     638,   302,   596,   650,   654,   596,   312,   342,   342,   174,
     342,   578,   594,   614,   173,   283,   540,   545,   551,   561,
     562,   342,    69,    70,    71,    73,    74,    76,   170,   541,
     543,   321,   563,   669,   563,   564,   564,   343,   342,   558,
     109,   565,   578,   578,   578,   531,   531,   107,   594,   110,
     333,   601,   602,   655,   174,   655,   174,   343,   342,   343,
     669,    93,    94,    88,   533,   535,   261,   392,   111,   380,
     258,   380,   380,   380,   674,   257,   669,   669,   657,   594,
     658,   669,   669,   669,    90,    89,    90,   669,   643,   229,
     417,   420,   431,   432,   666,   614,   110,   519,   315,   519,
     448,   111,   257,   658,   413,   413,   413,   413,   669,    56,
      62,   375,    20,   268,   677,   678,   369,   234,   185,   416,
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
     669,   173,   669,   553,   104,   108,   567,   190,   190,   174,
     174,   674,   104,   174,   102,   603,   174,   174,   206,   655,
     669,   266,   375,   266,    16,   674,   499,   499,   499,   252,
     274,   669,   253,   269,   282,   440,   130,   131,   419,   660,
     321,   488,   674,   111,   173,   316,   523,   524,   674,   674,
     265,   274,   669,   671,   679,   355,   359,   371,   372,   373,
     376,   381,   393,   398,   496,   614,   643,   174,   342,   171,
     669,   445,   171,   447,   442,   643,   173,   265,   412,   174,
      66,    80,    86,   237,   240,   276,   300,   306,   311,   364,
     366,   367,   376,   381,   393,   398,   454,   457,   459,   460,
     461,   465,   467,   473,   475,   476,   496,   500,   501,   550,
     669,   669,   236,   241,   236,   498,   659,   673,   673,   673,
     631,   673,   566,   644,   669,   174,   174,   174,   139,   596,
     690,   696,   697,   698,   728,   727,   250,   732,   174,   342,
     321,   110,   148,   150,   151,   700,   704,   727,   669,   707,
     143,   143,   174,   597,   727,   125,   149,   597,   717,   718,
     719,   720,   721,   736,   281,   174,   174,   534,   530,   531,
     531,   112,   174,   174,   342,   174,   342,   533,   174,   174,
     346,    75,   561,    16,   265,   544,   561,   173,   671,   566,
     568,   578,   578,   566,   104,    85,   340,   604,   605,   174,
     174,   329,   274,   250,    99,   110,   176,   250,   264,   264,
     449,   127,   132,   250,   421,   422,   425,   426,   428,   429,
     432,   674,   342,   523,   524,   173,   513,   513,   342,   238,
       3,   669,   342,   373,   418,   669,   267,     3,   171,   415,
     228,   331,   485,   442,    77,   237,   536,   238,   462,   463,
     643,   279,   446,   466,   568,   301,   470,   471,   596,   568,
     310,   455,   308,   344,   660,   279,   479,   660,     5,   479,
     174,   174,   174,   174,   174,   342,   343,   173,   342,   342,
     699,   342,   174,   730,   669,   731,   265,   265,   265,   265,
     174,   174,   321,   735,   736,   342,   110,   151,   722,   162,
     174,   174,   174,   596,   596,   596,   563,   561,   449,   568,
     544,   671,   174,   574,   181,   334,   341,   597,   606,   607,
     608,   609,   257,   273,     3,   110,   110,   427,   595,   449,
     449,   128,   427,   425,   110,   176,   228,   269,   272,   282,
     439,   441,   674,    83,   522,   174,   514,   515,   669,   516,
     516,   674,   674,   669,   173,    83,   172,   266,   328,   329,
     486,   487,   112,   490,   491,   174,    64,    84,   252,   238,
     557,   451,   669,   173,   173,   568,   303,   470,   472,   301,
     468,   469,   302,   455,   457,   568,   173,   237,   241,   454,
       4,   452,   674,   237,   241,   644,   669,   596,   691,   692,
     694,   696,   698,   690,   696,   110,    83,   110,   110,   110,
     669,   718,   265,   265,   174,    83,   160,   163,   739,   740,
     745,   174,   174,   174,   174,   607,   326,   337,   337,   335,
     612,   674,   669,   272,   321,   110,   173,   264,   643,   342,
     229,   174,   342,     3,   519,   519,   273,   424,   425,   172,
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
#line 620 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (m->sym) {
			append_symbol(m->sym->data.lval, (yyval.sym));
			(yyval.sym) = m->sym;
		} else {
			m->sym = (yyval.sym) = (yyvsp[-1].sym);
		}
		YYACCEPT;
	}
#line 6592 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 630 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emode = m_prepare; 
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6602 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 635 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 6616 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 644 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emode = m_plan;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6626 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 649 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 6640 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 659 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emod |= mod_explain;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6650 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 664 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->sym) {
				append_symbol(m->sym->data.lval, (yyvsp[-1].sym));
				(yyval.sym) = m->sym;
			  } else {
				m->sym = (yyval.sym) = (yyvsp[-1].sym);
			  }
			  YYACCEPT;
			}
#line 6664 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 674 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			  if (m->scanner.mode == LINE_1) {
				yyerror(m, "SQL debugging only supported in interactive mode");
				YYABORT;
			  }
		  	  m->emod |= mod_debug;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6678 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 683 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); YYACCEPT; }
#line 6684 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 684 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  m->emod |= mod_trace;
			  m->scanner.as = m->scanner.yycur; 
			  m->scanner.key = 0;
			}
#line 6694 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 689 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); YYACCEPT; }
#line 6700 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 690 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = (yyvsp[-1].sym); YYACCEPT; }
#line 6706 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 691 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 6712 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 692 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 6718 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 693 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYACCEPT; }
#line 6724 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 694 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->sym = (yyval.sym) = NULL; YYABORT; }
#line 6730 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 699 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 6736 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 703 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 6742 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 707 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 6748 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 708 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 6754 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 711 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 6760 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 712 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 6766 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 735 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-3].l));
		append_list(l, (yyvsp[-2].l));
		append_symbol(l, (yyvsp[-1].sym));
		append_int(l, (yyvsp[0].i_val));
		(yyval.sym) = _symbol_create_list( SQL_ANALYZE, l); }
#line 6777 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 745 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 6783 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 746 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 6789 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 751 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DECLARE, (yyvsp[0].l)); }
#line 6795 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 752 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 6801 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 757 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l) );
		append_type(l, &(yyvsp[0].type) );
		(yyval.l) = append_symbol(L(), _symbol_create_list( SQL_DECLARE, l)); }
#line 6810 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 762 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l) );
		append_type(l, &(yyvsp[0].type) );
		(yyval.l) = append_symbol((yyvsp[-3].l), _symbol_create_list( SQL_DECLARE, l)); }
#line 6819 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 771 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, (yyvsp[-2].sval) );
		append_symbol(l, (yyvsp[0].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6828 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 776 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  	append_list(l, (yyvsp[-2].l));
	  	append_symbol(l, (yyvsp[0].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_SET, l ); }
#line 6837 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 781 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
	        sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6849 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 789 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_schema"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6861 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 797 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0 );
		append_string(l, sa_strdup(SA, "current_user"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6873 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 805 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  sql_subtype t;
		sql_find_subtype(&t, "char", UTF8_strlen((yyvsp[0].sval)), 0);
		append_string(l, sa_strdup(SA, "current_role"));
		append_symbol(l,
			_newAtomNode( _atom_string(&t, sql2str((yyvsp[0].sval)))) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6885 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 813 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, _symbol_create_list( SQL_OP, append_list(L(),
			append_string( L(), sa_strdup(SA, "local_timezone")))));
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6895 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 819 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_string(l, sa_strdup(SA, "current_timezone"));
		append_symbol(l, (yyvsp[0].sym) );
		(yyval.sym) = _symbol_create_list( SQL_SET, l); }
#line 6904 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 828 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-3].l));
		append_symbol(l, (yyvsp[-2].sym));
		append_symbol(l, (yyvsp[-1].sym));
		append_list(l, (yyvsp[0].l));
		append_int(l, (yyvsp[-4].bval));
		(yyval.sym) = _symbol_create_list( SQL_CREATE_SCHEMA, l); }
#line 6916 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 836 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_int(l, (yyvsp[0].i_val));
		append_int(l, (yyvsp[-2].bval));
		(yyval.sym) = _symbol_create_list( SQL_DROP_SCHEMA, l); }
#line 6926 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 845 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[0].sval) );
	  append_string((yyval.l), NULL ); }
#line 6934 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 849 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), NULL );
	  append_string((yyval.l), (yyvsp[0].sval) ); }
#line 6942 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 853 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_string((yyval.l), (yyvsp[-2].sval) );
	  append_string((yyval.l), (yyvsp[0].sval) ); }
#line 6950 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 862 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 6956 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 863 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_CHARSET, (yyvsp[0].sval) ); }
#line 6962 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 867 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 6968 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 872 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 6974 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 874 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym) ); }
#line 6980 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 880 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 6986 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 881 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 6992 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 885 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 6998 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 886 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_role; }
#line 7004 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 891 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT, l);
	}
#line 7016 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 901 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_GRANT_ROLES, l); }
#line 7027 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 910 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 7033 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 912 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 7039 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 916 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7045 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 917 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7051 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 921 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7057 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 922 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7063 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 927 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = cur_user; }
#line 7069 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 928 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 7075 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 933 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[-4].bval)); /* GRANT OPTION FOR */
	  append_int(l, 0);
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE, l); }
#line 7087 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 941 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  append_int(l, (yyvsp[-4].bval));
	  append_int(l, (yyvsp[0].i_val));
	(yyval.sym) = _symbol_create_list( SQL_REVOKE_ROLES, l); }
#line 7098 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 950 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7104 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 951 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7110 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 955 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 7116 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 956 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 7122 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 961 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[0].l));
	  append_symbol((yyval.l), _symbol_create(SQL_GRANT, NULL)); }
#line 7130 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 965 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_list((yyval.l), (yyvsp[-2].l));
	  append_symbol((yyval.l), (yyvsp[0].sym)); }
#line 7138 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 971 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(L(), (yyvsp[0].i_val)); }
#line 7144 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 973 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(append_int(L(), (yyvsp[-2].i_val)), (yyvsp[0].i_val)); }
#line 7150 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 977 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = PRIV_COPYFROMFILE; }
#line 7156 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 978 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = PRIV_COPYINTOFILE; }
#line 7162 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 982 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[0].l)); }
#line 7168 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 983 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_NAME, (yyvsp[0].l)); }
#line 7174 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 984 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_FUNC, (yyvsp[0].l)); }
#line 7180 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 995 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7186 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 996 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7192 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1001 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7198 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1003 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 7204 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1007 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_INSERT,NULL); }
#line 7210 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1008 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_DELETE,NULL); }
#line 7216 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1009 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE,(yyvsp[0].l)); }
#line 7222 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1010 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[0].l)); }
#line 7228 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1011 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_SELECT,(yyvsp[0].l)); }
#line 7234 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1012 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create(SQL_EXECUTE,NULL); }
#line 7240 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1016 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 7246 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1018 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 7252 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1022 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 7258 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1023 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 7264 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1031 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7273 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1036 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_list( SQL_TABLE, (yyvsp[0].l)));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7282 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1041 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7291 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1046 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7300 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1051 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_readonly));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7309 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1056 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_append));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7318 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1061 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, _symbol_create_int(SQL_ALTER_TABLE, tr_writable));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_TABLE, l ); }
#line 7327 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1066 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
#line 7336 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1071 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_RENAME_USER, l ); }
#line 7345 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1076 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  dlist *p = L();
	  append_string(l, NULL);
	  append_string(p, (yyvsp[-4].sval));
	  append_string(p, NULL);
	  append_int(p, (yyvsp[-6].i_val));
	  append_string(p, (yyvsp[0].sval));
	  append_list(l, p);
	  (yyval.sym) = _symbol_create_list( SQL_ALTER_USER, l ); }
#line 7359 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1088 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, (yyvsp[0].sval));
				  append_string(l, NULL);
				  append_int(l, (yyvsp[-2].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7370 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1094 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, NULL);
				  append_string(l, (yyvsp[0].sval));
				  append_int(l, 0);
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7381 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1101 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist * l = L();
				  append_string(l, (yyvsp[-3].sval));
				  append_string(l, (yyvsp[0].sval));
				  append_int(l, (yyvsp[-5].i_val));
				  append_string(l, NULL);
				  (yyval.l) = l; }
#line 7392 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1111 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DEFAULT, l); }
#line 7401 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1116 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-2].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NULL, l); }
#line 7409 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1120 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  (yyval.sym) = _symbol_create_list( SQL_NOT_NULL, l); }
#line 7417 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1124 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_DEFAULT, (yyvsp[-2].sval)); }
#line 7423 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1126 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  if (!strlen((yyvsp[0].sval)))
	  	append_string(l, NULL);
	  else
	  	append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
#line 7435 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1134 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_string(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_STORAGE, l); }
#line 7444 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1142 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_COLUMN, l ); }
#line 7453 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1147 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_CONSTRAINT, l ); }
#line 7462 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1152 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_int(l, (yyvsp[0].i_val) );
	  append_int(l, 0);
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
#line 7472 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1160 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7478 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1161 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7484 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1165 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7490 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1166 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7496 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1167 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7502 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1189 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_list(l, (yyvsp[0].l));
		append_int(l, 0); /* to be dropped */
		(yyval.sym) = _symbol_create_list(SQL_CREATE_SEQ, l);
	}
#line 7514 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1200 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[0].l));
		(yyval.sym) = _symbol_create_list(SQL_DROP_SEQ, l);
	}
#line 7524 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1217 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
		append_list(l, (yyvsp[-1].l));
		append_list(l, (yyvsp[0].l)); 
		(yyval.sym) = _symbol_create_list(SQL_ALTER_SEQ, l);
	}
#line 7535 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1226 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7541 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1227 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-1].l), (yyvsp[0].sym)); }
#line 7547 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1231 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7553 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1232 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-1].l), (yyvsp[0].sym)); }
#line 7559 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1236 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 7565 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1237 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_START, (yyvsp[0].l_val)); }
#line 7571 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1238 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7577 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1242 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 7583 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1243 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_int(L(),0)); /* plain restart now */ }
#line 7589 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1244 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_lng(append_int(L(),2), (yyvsp[0].l_val)));  }
#line 7595 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1245 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_START, append_symbol(append_int(L(),1), (yyvsp[0].sym)));  }
#line 7601 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1246 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 7607 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1250 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_INC, (yyvsp[0].l_val)); }
#line 7613 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1251 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, (yyvsp[0].l_val)); }
#line 7619 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1252 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MINVALUE, 0); }
#line 7625 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1253 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, (yyvsp[0].l_val)); }
#line 7631 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1254 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_MAXVALUE, 0); }
#line 7637 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1255 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_lng(SQL_CACHE, (yyvsp[0].l_val)); }
#line 7643 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1256 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 1); }
#line 7649 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1257 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_CYCLE, 0); }
#line 7655 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1265 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-5].sval));
	  append_int(l, (yyvsp[-7].i_val));
	  append_list(l, (yyvsp[-3].l));
	  append_list(l, (yyvsp[-1].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_INDEX, l); }
#line 7666 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1274 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = hash_idx; }
#line 7672 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1275 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ordered_idx; }
#line 7678 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1276 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imprints_idx; }
#line 7684 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1277 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = hash_idx; }
#line 7690 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1298 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval));
	  append_int(l, (yyvsp[0].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_ROLE, l ); }
#line 7699 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1303 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-8].sval));
	  append_string(l, (yyvsp[-4].sval));
	  append_string(l, (yyvsp[-2].sval));
	  append_string(l, (yyvsp[0].sval));
	  append_int(l, (yyvsp[-6].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_USER, l ); }
#line 7711 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1313 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
#line 7717 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1314 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_UNENCRYPTED; }
#line 7723 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1315 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_PW_ENCRYPTED; }
#line 7729 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1319 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 7735 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1320 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_string(L(), (yyvsp[-1].sval)), (yyvsp[0].sval)); }
#line 7741 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1325 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, SQL_PERSIST);
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[-3].bval));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7757 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1337 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
      dlist *l = L();
      append_list(l, (yyvsp[-3].l));
      append_symbol(l, (yyvsp[0].sym));
      (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE_LOADER, l);
    }
#line 7768 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1344 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_STREAM;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[-2].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7783 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1355 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_MERGE_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[-2].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7798 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1366 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_REPLICA_TABLE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[-2].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7813 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1380 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT, tpe = SQL_REMOTE;
	  dlist *l = L();

	  append_int(l, tpe);
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, commit_action);
	  append_string(l, (yyvsp[0].sval));
	  append_int(l, (yyvsp[-4].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7828 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1391 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { int commit_action = CA_COMMIT;
	  dlist *l = L();

	  append_int(l, (yyvsp[-5].i_val));
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  if ((yyvsp[-5].i_val) != SQL_PERSIST)
		commit_action = (yyvsp[0].i_val);
	  append_int(l, commit_action);
	  append_string(l, NULL);
	  append_int(l, (yyvsp[-3].bval));
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, l ); }
#line 7845 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1406 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 7851 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1407 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 7857 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1408 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 7863 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1409 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_LOCAL_TEMP; }
#line 7869 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1410 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
#line 7875 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1411 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = SQL_GLOBAL_TEMP; }
#line 7881 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1415 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_COMMIT; }
#line 7887 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1416 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_DELETE; }
#line 7893 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1417 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_PRESERVE; }
#line 7899 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1418 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = CA_DROP; }
#line 7905 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1422 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_CREATE_TABLE, (yyvsp[-1].l)); }
#line 7911 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1423 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_SELECT, (yyvsp[0].l)); }
#line 7917 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1431 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[-3].l));
			  append_symbol((yyval.l), (yyvsp[-1].sym)); 
			  append_int((yyval.l), (yyvsp[0].i_val)); }
#line 7925 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1437 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 7931 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1438 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7937 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1439 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 7943 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1444 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 7949 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1446 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 7955 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1453 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 7961 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1454 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 7967 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1459 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
			dlist *l = L();
			append_string(l, (yyvsp[-2].sval));
			append_type(l, &(yyvsp[-1].type));
			append_list(l, (yyvsp[0].l));
			(yyval.sym) = _symbol_create_list(SQL_COLUMN, l);
		}
#line 7979 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1467 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8033 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1519 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8039 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1525 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 8045 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1527 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym) ); }
#line 8051 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1533 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-5].sval) );
	  append_list(l, (yyvsp[-1].l) );
	  (yyval.sym) = _symbol_create_list( SQL_COLUMN_OPTIONS, l ); }
#line 8060 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1541 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 8066 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1543 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 8072 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1549 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_DEFAULT, (yyvsp[0].sym)); }
#line 8078 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1553 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 8084 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1559 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_symbol(l, (yyvsp[0].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
#line 8093 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1567 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8126 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1596 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8165 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1633 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8171 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1634 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 8177 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1641 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-1].sval) );
	  append_symbol(l, (yyvsp[0].sym) );
	  (yyval.sym) = _symbol_create_list( SQL_CONSTRAINT, l ); }
#line 8186 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1650 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 8192 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1651 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 8198 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1655 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8204 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1656 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8210 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1657 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 8216 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1658 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 3; }
#line 8222 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1659 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 4; }
#line 8228 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1663 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ((yyvsp[0].i_val) << 8); }
#line 8234 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1667 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8240 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1671 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (2 << 8) + 2; /* defaults are RESTRICT */ }
#line 8246 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1672 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8252 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1673 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8258 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1674 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val) + (yyvsp[0].i_val); }
#line 8264 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1675 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val) + (yyvsp[0].i_val); }
#line 8270 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1679 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8276 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1680 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8282 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1681 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 8288 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1682 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8294 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1686 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8300 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1687 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 8306 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1691 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NOT_NULL, NULL); }
#line 8312 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1692 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NULL, NULL); }
#line 8318 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1693 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_UNIQUE, NULL ); }
#line 8324 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1694 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_PRIMARY_KEY, NULL ); }
#line 8330 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1697 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, (yyvsp[-3].l) );
			  append_list(l, (yyvsp[-2].l) );
			  append_int(l, (yyvsp[-1].i_val) );
			  append_int(l, (yyvsp[0].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
#line 8341 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1710 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_UNIQUE, (yyvsp[0].l)); }
#line 8347 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1712 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_PRIMARY_KEY, (yyvsp[0].l)); }
#line 8353 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1716 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, (yyvsp[-3].l) );
			  append_list(l, (yyvsp[-5].l) );
			  append_list(l, (yyvsp[-2].l) );
			  append_int(l, (yyvsp[-1].i_val) );
			  append_int(l, (yyvsp[0].i_val) );
			  (yyval.sym) = _symbol_create_list( SQL_FOREIGN_KEY, l); }
#line 8365 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1728 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 8371 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1733 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 8377 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1735 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string( (yyvsp[-2].l), (yyvsp[0].sval) ); }
#line 8383 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1739 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_LIKE, (yyvsp[0].l) ); }
#line 8389 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1744 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {  dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-3].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, (yyvsp[0].bval));
	  append_int(l, TRUE);	/* persistent view */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
#line 8402 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1756 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 8408 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1765 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 8414 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1766 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 8420 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1770 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8426 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1775 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 8432 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1780 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				append_list(l, (yyvsp[-3].l));
				append_string(l, (yyvsp[0].sval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_TYPE, l ); }
#line 8441 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1787 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval)); }
#line 8447 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1802 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-8].l));
				append_list(f, (yyvsp[-6].l));
				append_symbol(f, (yyvsp[-3].sym));
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[-10].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8462 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1816 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l));
				append_symbol(f, (yyvsp[-1].sym));
				append_list(f, NULL);
				append_list(f, (yyvsp[0].l));
				append_int(f, F_FUNC);
				append_int(f, FUNC_LANG_SQL);
				append_int(f, (yyvsp[-8].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8477 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1829 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[-1].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p')
            {
            	// code does not get cleaner than this people
                if (strcasecmp((yyvsp[-1].sval), "PYTHON_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY;
                } else if (strcasecmp((yyvsp[-1].sval), "PYTHON3_MAP") == 0) {
                	lang = FUNC_LANG_MAP_PY3;
                } else if (strcasecmp((yyvsp[-1].sval), "PYTHON3") == 0) {
                	lang = FUNC_LANG_PY3;
                } else if (strcasecmp((yyvsp[-1].sval), "PYTHON2_MAP") == 0) {
                	lang = FUNC_LANG_MAP_PY2;
                } else if (strcasecmp((yyvsp[-1].sval), "PYTHON2") == 0) {
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

			append_list(f, (yyvsp[-8].l));
			append_list(f, (yyvsp[-6].l));
			append_symbol(f, (yyvsp[-3].sym));
			append_list(f, NULL); 
			append_list(f, append_string(L(), (yyvsp[0].sval)));
			append_int(f, F_FUNC);
			append_int(f, lang);
			append_int(f, (yyvsp[-10].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8525 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1875 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l)); 
				/* no returns - use OID */
				append_symbol(f, NULL); 
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_FILT);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[-9].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8541 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1890 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-8].l));
				append_list(f, (yyvsp[-6].l));
				append_symbol(f, (yyvsp[-3].sym));
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_AGGR);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[-10].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8556 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1903 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
			int lang = 0;
			dlist *f = L();
			char l = *(yyvsp[-1].sval);

			if (l == 'R' || l == 'r')
				lang = FUNC_LANG_R;
			else if (l == 'P' || l == 'p')
            {
                if (strcasecmp((yyvsp[-1].sval), "PYTHON_MAP") == 0) {
					lang = FUNC_LANG_MAP_PY;
                } else if (strcasecmp((yyvsp[-1].sval), "PYTHON3_MAP") == 0) {
                	lang = FUNC_LANG_MAP_PY3;
                } else if (strcasecmp((yyvsp[-1].sval), "PYTHON3") == 0) {
                	lang = FUNC_LANG_PY3;
                } else if (strcasecmp((yyvsp[-1].sval), "PYTHON2_MAP") == 0) {
                	lang = FUNC_LANG_MAP_PY2;
                } else if (strcasecmp((yyvsp[-1].sval), "PYTHON2") == 0) {
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

			append_list(f, (yyvsp[-8].l));
			append_list(f, (yyvsp[-6].l));
			append_symbol(f, (yyvsp[-3].sym));
			append_list(f, NULL);
			append_list(f, append_string(L(), (yyvsp[0].sval)));
			append_int(f, F_AGGR);
			append_int(f, lang);
			append_int(f, (yyvsp[-10].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8603 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1949 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-6].l));
				append_list(f, (yyvsp[-4].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, (yyvsp[0].l));
				append_list(f, NULL);
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_MAL);
				append_int(f, (yyvsp[-8].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8618 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1962 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *f = L();
				append_list(f, (yyvsp[-4].l));
				append_list(f, (yyvsp[-2].l));
				append_symbol(f, NULL); /* no result */
				append_list(f, NULL); 
				append_list(f, (yyvsp[0].l));
				append_int(f, F_PROC);
				append_int(f, FUNC_LANG_SQL);
				append_int(f, (yyvsp[-6].bval));
			  (yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8633 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1974 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
			append_int(f, (yyvsp[-8].bval));
			(yyval.sym) = _symbol_create_list( SQL_CREATE_FUNC, f ); }
#line 8659 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1999 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); append_symbol( (yyval.l), (yyvsp[0].sym)); }
#line 8665 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 2003 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-3].l),(yyvsp[-2].sym)); }
#line 8671 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2007 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-3].l),(yyvsp[-2].sym)); }
#line 8677 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2022 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 8683 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2024 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l),(yyvsp[-1].sym));}
#line 8689 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2028 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 8695 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2030 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l),(yyvsp[-1].sym));}
#line 8701 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2078 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 8707 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2082 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.sym) = _symbol_create_symbol(SQL_CALL, (yyvsp[0].sym));}
#line 8713 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2087 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L(); 
		  append_list( l, (yyvsp[-3].l));
		  append_list( l, (yyvsp[-1].l));
		  assert(0);
		  (yyval.sym) = _symbol_create_list( SQL_FUNC, l);
		}
#line 8724 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2098 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = L();}
#line 8730 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2099 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 8736 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2101 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 8742 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2106 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_RETURN, (yyvsp[0].sym)); }
#line 8748 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2113 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol(SQL_TABLE, (yyvsp[-1].sym)); }
#line 8754 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2118 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[-4].sym)),(yyvsp[-3].l)),(yyvsp[-2].l))); }
#line 8764 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2124 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_list(
		    append_list(
		     L(),(yyvsp[-3].l)),(yyvsp[-2].l))); }
#line 8773 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2132 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].l))); }
#line 8782 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2140 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 8788 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2142 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 8794 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2147 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_list(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].l))); }
#line 8803 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2155 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 8809 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2157 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 8815 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2161 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8821 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2162 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 8827 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2172 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_list(l, (yyvsp[-3].l));
		  append_symbol(l, (yyvsp[-2].sym));
		  (yyval.sym) = _symbol_create_list(SQL_IF, l);
		}
#line 8838 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2183 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 8844 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2185 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_ELSE, (yyvsp[0].l)); }
#line 8850 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2188 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_list(l, (yyvsp[-1].l));
		  append_symbol(l, (yyvsp[0].sym));
		  { (yyval.sym) = _symbol_create_list(SQL_IF, l); }
		}
#line 8861 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2202 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 8879 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2218 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 8885 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2223 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 8891 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2229 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
				  append_string((yyval.l), (yyvsp[-1].sval));
			  	  append_type((yyval.l), &(yyvsp[0].type));
				}
#line 8900 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2234 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
				  append_string((yyval.l), (yyvsp[-1].sval));
			  	  append_type((yyval.l), &(yyvsp[0].type));
				}
#line 8909 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 2242 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TABLE, (yyvsp[-1].l)); }
#line 8915 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 2244 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_TYPE, append_type(L(),&(yyvsp[0].type))); }
#line 8921 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 2249 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *vararg = L();
			  append_string(vararg, "*");
			  append_type(vararg, NULL);
			  (yyval.l) = append_list(L(), vararg); }
#line 8930 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 2253 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 8936 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 2258 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *p = L();
			  append_string(p, (yyvsp[-1].sval));
			  append_type(p, &(yyvsp[0].type));
			  (yyval.l) = append_list((yyvsp[-3].l), p); }
#line 8945 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 2263 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *p = L();
			  append_string(p, (yyvsp[-1].sval));
			  append_type(p, &(yyvsp[0].type));
			  (yyval.l) = append_list(l, p); }
#line 8955 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 2313 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-6].l));
	  append_int(l, (yyvsp[-5].i_val));
	  append_symbol(l, (yyvsp[-4].sym));
	  append_list(l, (yyvsp[-2].l));
	  append_list(l, (yyvsp[-1].l));
	  append_list(l, (yyvsp[0].l));
	  (yyval.sym) = _symbol_create_list(SQL_CREATE_TRIGGER, l); 
	}
#line 8969 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 2325 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 8975 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 2326 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 8981 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 2331 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_INSERT, NULL); }
#line 8987 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 2332 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_DELETE, NULL); }
#line 8993 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2333 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, NULL); }
#line 8999 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2334 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_UPDATE, (yyvsp[0].l)); }
#line 9005 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2338 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9011 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2339 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 9017 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2343 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 9023 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 2345 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-1].l), (yyvsp[0].l)); }
#line 9029 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 2350 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[0].sval)); }
#line 9035 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2351 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[0].sval)); }
#line 9041 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2352 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 0), (yyvsp[0].sval)); }
#line 9047 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2353 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(append_int(L(), 1), (yyvsp[0].sval)); }
#line 9053 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 2368 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_int((yyval.l), (yyvsp[-2].i_val));
	  append_symbol((yyval.l), (yyvsp[-1].sym));
	  append_list((yyval.l), (yyvsp[0].l));
	}
#line 9063 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 2375 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9069 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 2376 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 9075 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 2380 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9081 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 2381 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9087 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 2385 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 9093 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 2386 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 9099 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2391 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 9105 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2394 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9111 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2399 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FUNC );
	  (yyval.l) = l; }
#line 9121 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 2405 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_FILT );
	  (yyval.l) = l; }
#line 9131 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 2411 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_AGGR );
	  (yyval.l) = l; }
#line 9141 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2417 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_PROC );
	  (yyval.l) = l; }
#line 9151 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2423 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );	
	  append_list(l, (yyvsp[0].l) );
	  append_int(l, F_LOADER );
	  (yyval.l) = l; }
#line 9161 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 2432 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  append_int(l, (yyvsp[-2].bval));
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TABLE, l ); }
#line 9171 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 2438 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = (yyvsp[-1].l);
	  append_int(l, 0 ); /* not all */
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9180 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 2443 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_FUNC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9192 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 2451 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_FILT );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9204 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 2459 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_AGGR );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9216 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2467 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_PROC );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9228 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2475 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_list(l, NULL );
	  append_int(l, F_LOADER );
	  append_int(l, 1 );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_FUNC, l ); }
#line 9240 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 2483 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  append_int(l, (yyvsp[-2].bval) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_VIEW, l ); }
#line 9250 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 2489 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l) );
	  append_int(l, (yyvsp[0].i_val) );
	  (yyval.sym) = _symbol_create_list( SQL_DROP_TYPE, l ); }
#line 9259 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 2493 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_ROLE, (yyvsp[0].sval) ); }
#line 9265 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 2494 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_DROP_USER, (yyvsp[0].sval) ); }
#line 9271 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 2495 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DROP_INDEX, (yyvsp[0].l) ); }
#line 9277 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 2496 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_DROP_TRIGGER, (yyvsp[0].l) ); }
#line 9283 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 2500 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = NULL;}
#line 9289 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 2501 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = (yyvsp[-1].l);}
#line 9295 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 2502 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {(yyval.l) = L(); }
#line 9301 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 2506 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_type(l, &(yyvsp[0].type) );
				  (yyval.l)= l; }
#line 9309 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 2509 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { append_type((yyvsp[0].l), &(yyvsp[-2].type));
				  (yyval.l) = (yyvsp[0].l); }
#line 9316 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 2514 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9322 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 2515 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9328 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 2516 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 9334 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 2535 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	  (yyval.sym) = (yyvsp[0].sym);
	  m->type = Q_TRANS;					}
#line 9342 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 2542 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_COMMIT, (yyvsp[0].bval));  }
#line 9348 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 2544 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( TR_SAVEPOINT, (yyvsp[0].sval)); }
#line 9354 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 2546 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( TR_RELEASE, (yyvsp[0].sval)); }
#line 9360 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 2548 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( TR_ROLLBACK,
		   append_string(
			append_int(L(), (yyvsp[-1].bval)), (yyvsp[0].sval) )); }
#line 9368 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 2552 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_START, (yyvsp[0].i_val)); }
#line 9374 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 2554 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[0].i_val)); }
#line 9380 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 2556 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int( TR_MODE, (yyvsp[0].i_val)); }
#line 9386 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 2560 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_none; }
#line 9392 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 2566 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 9398 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 2568 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ((yyvsp[-2].i_val) | (yyvsp[0].i_val)); }
#line 9404 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 2573 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_readonly; }
#line 9410 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2574 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_writable; }
#line 9416 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2575 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_serializable; }
#line 9422 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2576 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = tr_none; /* not supported */ }
#line 9428 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2587 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9434 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2588 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9440 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 2592 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 9446 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 2593 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9452 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 2594 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 9458 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 2598 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9464 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 2599 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 9470 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 2604 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 9488 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2618 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 9506 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2632 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_COPYLOADER, l ); }
#line 9515 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2637 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 9530 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 2648 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_string(l, (yyvsp[-2].sval));
	  append_list(l, (yyvsp[-1].l));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
#line 9541 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 2655 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_string(l, NULL);
	  append_list(l, (yyvsp[-1].l));
	  append_string(l, (yyvsp[0].sval));
	  (yyval.sym) = _symbol_create_list( SQL_COPYTO, l ); }
#line 9552 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 2666 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9558 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 2667 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9564 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 2672 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(L(), (yyvsp[0].l_val)); }
#line 9570 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 2674 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng((yyvsp[-2].l), (yyvsp[0].l_val)); }
#line 9576 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 2679 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9582 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 2680 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9588 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 2684 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 9594 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 2685 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-2].l), (yyvsp[0].l)); }
#line 9600 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 2690 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_string(l, (yyvsp[0].sval) );
			  (yyval.l) = l; }
#line 9608 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 2694 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_string(l, (yyvsp[-1].sval) );
			  append_string(l, (yyvsp[0].sval) );
			  (yyval.l) = l; }
#line 9617 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 2702 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, sa_strdup(SA, "|"));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
#line 9626 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 2707 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[0].sval));
				  append_string(l, sa_strdup(SA, "\\n"));
				  (yyval.l) = l; }
#line 9635 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 2712 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[-2].sval));
				  append_string(l, (yyvsp[0].sval));
				  (yyval.l) = l; }
#line 9644 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 2717 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
				  append_string(l, (yyvsp[-4].sval));
				  append_string(l, (yyvsp[-2].sval));
				  append_string(l, sql2str((yyvsp[0].sval)));
				  (yyval.l) = l; }
#line 9654 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 2725 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9660 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 2726 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9666 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 2730 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 9672 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 2731 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-1].l_val)), 0); }
#line 9678 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 2732 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), -1), (yyvsp[0].l_val)); }
#line 9684 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 2734 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-3].l_val)), (yyvsp[-1].l_val)); }
#line 9690 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 2736 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_lng(append_lng(L(), (yyvsp[-3].l_val)), (yyvsp[0].l_val)); }
#line 9696 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 2740 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 9702 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 2741 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 9708 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 2745 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9714 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 2746 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 9720 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 2750 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9726 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 2751 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 9732 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 2755 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 9738 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 2756 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9744 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 2760 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 9750 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 2761 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 9756 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 2765 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 9762 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 2767 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 9768 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 2773 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_DELETE, l ); }
#line 9777 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 2782 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-4].l));
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UPDATE, l ); }
#line 9788 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 2824 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-1].l));
	  append_list(l, NULL);
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
#line 9798 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 2832 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INSERT, l ); }
#line 9808 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 2841 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
#line 9814 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 2843 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, L()); }
#line 9820 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 2845 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[0].l)); }
#line 9826 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 2851 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[-1].l)); }
#line 9832 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 2853 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-4].l), (yyvsp[-1].l)); }
#line 9838 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 2857 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 9844 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 2859 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 9850 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 2863 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 9856 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 2865 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 9862 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 2870 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 9879 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 2899 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9885 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 2900 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 9891 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 507:
#line 2901 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 9897 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 2905 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 9903 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 2907 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 9909 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 2912 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym) );
	  append_string(l, (yyvsp[-2].sval));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l); }
#line 9918 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 2917 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym));
	  append_list(l, (yyvsp[-2].l));
	  (yyval.sym) = _symbol_create_list( SQL_ASSIGN, l ); }
#line 9927 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 2924 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 9933 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 2925 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 9939 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 2932 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 9945 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 2934 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_CROSS, l); }
#line 9954 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 2939 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_int(l, 0);
	  append_int(l, 4);
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNIONJOIN, l); }
#line 9966 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 2947 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, 0);
	  append_int(l, (yyvsp[-3].i_val));
	  append_symbol(l, (yyvsp[-1].sym));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
#line 9978 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 518:
#line 2955 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, 1);
	  append_int(l, (yyvsp[-2].i_val));
	  append_symbol(l, (yyvsp[0].sym));
	  append_symbol(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_JOIN, l); }
#line 9990 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 2965 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 9996 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 2966 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10002 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 2967 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1 + (yyvsp[-1].i_val); }
#line 10008 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 2971 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10014 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 2972 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10020 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 2976 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10026 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 2977 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 10032 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 2978 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 10038 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 2982 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10044 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 2984 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_USING, (yyvsp[0].l)); }
#line 10050 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 3008 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *l = L();
	  	append_list(l, (yyvsp[-1].l));
	  	append_symbol(l, (yyvsp[0].sym));
	  	(yyval.sym) = _symbol_create_list( SQL_WITH, l ); 
	}
#line 10061 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 3017 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10067 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 3018 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10073 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 3023 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {  dlist *l = L();
	  append_list(l, append_string(L(), (yyvsp[-3].sval)));
	  append_list(l, (yyvsp[-2].l));
	  append_symbol(l, (yyvsp[0].sym));
	  append_int(l, FALSE);	/* no with check */
	  append_int(l, FALSE);	/* inlined view  (ie not persistent) */
	  (yyval.sym) = _symbol_create_list( SQL_CREATE_VIEW, l ); 
	}
#line 10086 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 3046 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = newSelectNode( SA, (yyvsp[-2].bval), (yyvsp[-1].l), NULL,
		(yyvsp[0].l)->h->data.sym,
		(yyvsp[0].l)->h->next->data.sym,
		(yyvsp[0].l)->h->next->next->data.sym,
		(yyvsp[0].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
#line 10098 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 3057 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = newSelectNode( SA, (yyvsp[-4].bval), (yyvsp[-3].l), (yyvsp[-1].l),
		(yyvsp[0].l)->h->data.sym,
		(yyvsp[0].l)->h->next->data.sym,
		(yyvsp[0].l)->h->next->next->data.sym,
		(yyvsp[0].l)->h->next->next->next->data.sym,
		NULL, NULL, NULL, NULL, NULL);
	}
#line 10110 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 3068 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 10142 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 3098 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 10148 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 3100 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 10154 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 3110 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_UNION, l); }
#line 10165 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 544:
#line 3119 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_EXCEPT, l); }
#line 10176 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 545:
#line 3128 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_int(l, (yyvsp[-2].bval));
	  append_list(l, (yyvsp[-1].l));
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list( SQL_INTERSECT, l); }
#line 10187 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 546:
#line 3134 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10193 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 548:
#line 3139 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10199 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 549:
#line 3140 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10205 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 550:
#line 3141 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10211 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 551:
#line 3146 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 10217 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 552:
#line 3148 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L(); }
#line 10223 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 553:
#line 3150 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10229 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 555:
#line 3160 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
	  append_symbol((yyval.l), (yyvsp[-3].sym));
	  append_symbol((yyval.l), (yyvsp[-2].sym));
	  append_symbol((yyval.l), (yyvsp[-1].sym));
	  append_symbol((yyval.l), (yyvsp[0].sym)); }
#line 10239 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 556:
#line 3168 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10245 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 557:
#line 3169 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_FROM, (yyvsp[0].l)); }
#line 10251 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 558:
#line 3173 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10257 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 559:
#line 3175 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10263 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 560:
#line 3179 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_list(l, (yyvsp[-1].l));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10272 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 561:
#line 3184 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[-1].sym));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  	  	  append_int(l, 0);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
#line 10282 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 562:
#line 3190 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_symbol(l, (yyvsp[-1].sym));
		  	  	  append_symbol(l, (yyvsp[0].sym));
		  	  	  append_int(l, 1);
		  		  (yyval.sym) = _symbol_create_list(SQL_TABLE, l); }
#line 10292 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 563:
#line 3196 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  (yyval.sym) = (yyvsp[-1].sym);
				  if ((yyval.sym)->token == SQL_SELECT) {
				  	SelectNode *sn = (SelectNode*)(yyvsp[-1].sym);
				  	sn->name = (yyvsp[0].sym);
				  } else {
				  	append_symbol((yyvsp[-1].sym)->data.lval, (yyvsp[0].sym));
				  }
				}
#line 10306 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 564:
#line 3206 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 10322 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 565:
#line 3218 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL;
				  yyerror(m, "subquery table reference needs alias, use AS xxx");
				  YYABORT;
				}
#line 10331 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 566:
#line 3222 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym);
				  append_symbol((yyvsp[0].sym)->data.lval, NULL); }
#line 10338 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 567:
#line 3226 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { m->caching = 0; }
#line 10344 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 568:
#line 3228 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		dlist *op = L();

 	  	append_symbol(op, (yyvsp[-2].sym));
		append_symbol(op, (yyvsp[0].sym));
		(yyval.sym) = _symbol_create_list(SQL_TABLE_OPERATOR, op); 
	}
#line 10356 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 569:
#line 3239 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[-3].sval));
		  	  	  append_list(l, (yyvsp[-1].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10365 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 570:
#line 3244 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[0].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10374 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 571:
#line 3249 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[-3].sval));
		  	  	  append_list(l, (yyvsp[-1].l));
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10383 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 572:
#line 3254 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  		  append_string(l, (yyvsp[0].sval));
		  	  	  append_list(l, NULL);
		  		  (yyval.sym) = _symbol_create_list(SQL_NAME, l); }
#line 10392 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 573:
#line 3261 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10398 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 574:
#line 3262 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10404 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 575:
#line 3266 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10410 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 576:
#line 3267 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[0].l) );}
#line 10416 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 577:
#line 3271 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[0].l))); }
#line 10423 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 578:
#line 3274 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l),
			       _symbol_create_list(SQL_COLUMN,(yyvsp[0].l))); }
#line 10430 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 579:
#line 3279 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10436 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 3280 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10442 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 581:
#line 3286 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_OR, l ); }
#line 10451 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 582:
#line 3290 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10457 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 583:
#line 3295 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_AND, l ); }
#line 10466 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 584:
#line 3299 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10472 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 585:
#line 3303 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10478 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 586:
#line 3305 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[0].l)); }
#line 10484 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 587:
#line 3309 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10490 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 588:
#line 3310 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val))); 
			}
#line 10499 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 589:
#line 3314 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10505 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 590:
#line 3318 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10511 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 591:
#line 3319 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val))); 
			}
#line 10520 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 592:
#line 3323 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10526 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 593:
#line 3327 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 10532 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 594:
#line 3328 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  sql_subtype *t = sql_bind_localtype("lng");
			  (yyval.sym) = _newAtomNode( atom_int(SA, t, (yyvsp[0].l_val)));
			}
#line 10541 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 595:
#line 3332 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  	  sql_subtype *t = sql_bind_localtype("dbl");
			  (yyval.sym) = _newAtomNode( atom_float(SA, t, strtod((yyvsp[0].sval),NULL)));
			}
#line 10550 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 596:
#line 3336 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10556 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 597:
#line 3340 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10562 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 598:
#line 3342 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 10568 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 599:
#line 3347 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-1].sym));
	  append_int(l, (yyvsp[0].bval));
	  (yyval.sym) = _symbol_create_list(SQL_COLUMN, l ); }
#line 10577 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 600:
#line 3355 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10583 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 601:
#line 3356 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = TRUE; }
#line 10589 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 602:
#line 3357 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = FALSE; }
#line 10595 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 612:
#line 3374 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 10616 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 613:
#line 3390 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 10622 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 614:
#line 3395 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-2].sym));
		  append_string(l, (yyvsp[-1].sval));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 10633 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 615:
#line 3402 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-2].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 10644 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 616:
#line 3412 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_int(l, (yyvsp[-3].i_val));
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_BETWEEN, l ); }
#line 10655 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 617:
#line 3419 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-5].sym));
		  append_int(l, (yyvsp[-3].i_val));
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  (yyval.sym) = _symbol_create_list(SQL_BETWEEN, l ); }
#line 10666 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 618:
#line 3428 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10672 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 619:
#line 3429 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10678 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 620:
#line 3430 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 10684 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 621:
#line 3435 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 10695 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 622:
#line 3442 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, TRUE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 10706 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 623:
#line 3449 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, FALSE);  /* case sensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 10717 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 624:
#line 3456 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-2].sym));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, TRUE);  /* case insensitive */
		  append_int(l, FALSE);  /* anti */
		  (yyval.sym) = _symbol_create_list( SQL_LIKE, l ); }
#line 10728 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 625:
#line 3466 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[0].sym));
	  (yyval.sym) = _symbol_create_list(SQL_ESCAPE, l ); }
#line 10736 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 626:
#line 3470 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 10753 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 627:
#line 3485 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NOT_NULL, (yyvsp[-3].sym) );}
#line 10759 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 628:
#line 3486 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_IS_NULL, (yyvsp[-2].sym) ); }
#line 10765 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 629:
#line 3491 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-4].sym));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
#line 10775 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 630:
#line 3497 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();

		  append_symbol(l, (yyvsp[-4].sym));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
#line 10785 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 631:
#line 3503 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-5].l));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_NOT_IN, l ); }
#line 10794 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 632:
#line 3508 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-5].l));
		  append_list(l, (yyvsp[-1].l));
		  (yyval.sym) = _symbol_create_list(SQL_IN, l ); }
#line 10803 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 633:
#line 3516 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 10809 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 634:
#line 3518 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 10815 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 635:
#line 3524 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_string(l, (yyvsp[-2].sval));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, (yyvsp[-1].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 10826 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 636:
#line 3531 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_symbol(l, (yyvsp[-3].sym));
		  append_string(l, sa_strdup(SA, "="));
		  append_symbol(l, (yyvsp[0].sym));
		  append_int(l, (yyvsp[-1].i_val));
		  (yyval.sym) = _symbol_create_list(SQL_COMPARE, l ); }
#line 10837 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 637:
#line 3540 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10843 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 638:
#line 3541 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 10849 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 639:
#line 3542 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 10855 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 640:
#line 3546 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_symbol( SQL_EXISTS, (yyvsp[0].sym) ); }
#line 10861 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 641:
#line 3550 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 10867 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 642:
#line 3551 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym));  }
#line 10873 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 643:
#line 3555 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[-1].l); }
#line 10879 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 644:
#line 3560 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, (yyvsp[-2].l));
		  append_list(l, (yyvsp[-1].l));
		  append_list(l, (yyvsp[0].l));
		  (yyval.sym) = _symbol_create_list(SQL_FILTER, l ); }
#line 10889 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 645:
#line 3569 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10895 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 646:
#line 3571 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[-1].l)); }
#line 10901 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3573 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10907 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3577 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10913 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3579 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_VALUES, (yyvsp[-1].l)); }
#line 10919 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3581 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 10925 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3588 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_add")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10936 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3595 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_sub")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10947 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 654:
#line 3602 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_mul")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10958 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 655:
#line 3609 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "sql_div")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10969 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 656:
#line 3616 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "mod")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10980 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 657:
#line 3623 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_xor")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 10991 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 658:
#line 3630 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_and")));
	  		  append_symbol(l, (yyvsp[-2].sym));
			  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11002 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 659:
#line 3637 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11013 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 660:
#line 3644 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_left")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11024 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 661:
#line 3651 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_right")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11035 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 662:
#line 3658 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_below")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11046 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 663:
#line 3665 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, append_string(L(), sa_strdup(SA, "mbr_below")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11056 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 664:
#line 3671 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_overlap_or_above")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11067 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 665:
#line 3678 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_above")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11078 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 666:
#line 3685 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_distance")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11089 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 667:
#line 3692 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contained")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11100 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 668:
#line 3699 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_or")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11111 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 669:
#line 3706 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_contains")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11122 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 670:
#line 3713 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(L(), sa_strdup(SA, "mbr_equal")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11133 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 671:
#line 3720 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "bit_not")));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
#line 11143 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3726 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11154 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3733 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11165 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 674:
#line 3740 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "left_shift_assign")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11176 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3747 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l, 
			  	append_string(append_string(L(), sa_strdup(SA, "sys")), sa_strdup(SA, "right_shift_assign")));
	  		  append_symbol(l, (yyvsp[-2].sym));
	  		  append_symbol(l, (yyvsp[0].sym));
	  		  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11187 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 676:
#line 3754 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11193 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 677:
#line 3756 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 11219 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 678:
#line 3777 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11225 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 679:
#line 3781 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11231 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 682:
#line 3787 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_user"))); }
#line 11238 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 683:
#line 3789 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, 
			  append_string(L(), sa_strdup(SA, "current_role"))); }
#line 11245 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 685:
#line 3792 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_COLUMN, (yyvsp[0].l)); }
#line 11251 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 689:
#line 3796 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_NEXT, (yyvsp[0].l)); }
#line 11257 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 697:
#line 3808 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { 
	  int nr = (m->params)?list_length(m->params):0;

	  sql_add_param(m, NULL, NULL);
	  (yyval.sym) = _symbol_create_int( SQL_PARAMETER, nr ); 
	}
#line 11268 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 698:
#line 3878 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_RANK, 
		append_list(append_symbol(L(), (yyvsp[-4].sym)), (yyvsp[-1].l))); }
#line 11275 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 699:
#line 3883 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_RANK, (yyvsp[-2].l) ); }
#line 11281 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 701:
#line 3889 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(append_symbol(L(), (yyvsp[-2].sym)), (yyvsp[-1].sym)), (yyvsp[0].sym)); }
#line 11287 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 702:
#line 3893 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11293 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 703:
#line 3895 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_GROUPBY, (yyvsp[0].l) ); }
#line 11299 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 704:
#line 3899 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11305 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 705:
#line 3901 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_ORDERBY, (yyvsp[0].l) ); }
#line 11311 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 706:
#line 3905 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 11317 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 707:
#line 3907 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_FRAME, append_int(append_int((yyvsp[-1].l), (yyvsp[-2].i_val)), (yyvsp[0].i_val))); }
#line 11323 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 708:
#line 3911 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = FRAME_ROWS; }
#line 11329 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 709:
#line 3912 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = FRAME_RANGE; }
#line 11335 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 710:
#line 3916 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[0].sym)), _symbol_create_int(SQL_FRAME, -1)); }
#line 11341 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 711:
#line 3917 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = (yyvsp[0].l); }
#line 11347 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 712:
#line 3921 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
#line 11353 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 713:
#line 3922 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11359 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 714:
#line 3923 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
#line 11365 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 715:
#line 3927 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11371 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 716:
#line 3932 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(append_symbol(L(), (yyvsp[-2].sym)), (yyvsp[0].sym)); }
#line 11377 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 717:
#line 3936 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, -1); }
#line 11383 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 718:
#line 3937 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 11389 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 719:
#line 3938 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_int(SQL_FRAME, 0); }
#line 11395 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 720:
#line 3942 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 11401 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 721:
#line 3946 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_NONE; }
#line 11407 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 722:
#line 3947 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_CURRENT_ROW; }
#line 11413 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 723:
#line 3948 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_GROUP; }
#line 11419 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 724:
#line 3949 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_TIES; }
#line 11425 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 725:
#line 3950 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = EXCLUDE_NO_OTHERS; }
#line 11431 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 726:
#line 3954 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create( SQL_NAME, (yyvsp[0].sval) ); }
#line 11437 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 727:
#line 3959 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_list(l, (yyvsp[-2].l));
	  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11445 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 728:
#line 3963 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 11464 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 729:
#line 3990 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11470 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 730:
#line 3991 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
					append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11477 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 731:
#line 3996 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 11483 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 732:
#line 3997 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "left"); }
#line 11489 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 733:
#line 3998 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "right"); }
#line 11495 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 734:
#line 3999 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "insert"); }
#line 11501 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 735:
#line 4004 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  const char *ident = datetime_field((itype)(yyvsp[-3].i_val));
			  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, ident)));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_UNOP, l ); }
#line 11512 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 736:
#line 4011 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_date")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11521 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 737:
#line 4016 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_time")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11530 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 738:
#line 4021 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "current_timestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11539 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 739:
#line 4026 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtime")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11548 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 740:
#line 4031 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  append_list(l,
			  	append_string(L(), sa_strdup(SA, "localtimestamp")));
	  		  (yyval.sym) = _symbol_create_list( SQL_OP, l ); }
#line 11557 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 741:
#line 4038 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 11563 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 742:
#line 4039 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 11569 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 743:
#line 4044 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 11583 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 744:
#line 4054 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 11597 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 745:
#line 4064 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11608 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 746:
#line 4071 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "substring")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11619 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 747:
#line 4078 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "locate")));
  		  	  append_symbol(l, (yyvsp[-3].sym));
  		  	  append_symbol(l, (yyvsp[-1].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11630 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 748:
#line 4085 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  	  append_list(l,
  		  	  	append_string(L(), sa_strdup(SA, "concat")));
  		  	  append_symbol(l, (yyvsp[-2].sym));
  		  	  append_symbol(l, (yyvsp[0].sym));
		  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 11641 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 749:
#line 4092 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
			  dlist *ops = L();
  		  	  append_list(l,
				append_string(L(), sa_strdup(SA, "splitpart")));
  		  	  append_symbol(ops, (yyvsp[-5].sym));
  		  	  append_symbol(ops, (yyvsp[-3].sym));
  		  	  append_symbol(ops, (yyvsp[-1].sym));
			  append_list(l, ops);
		  	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 11655 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 750:
#line 4104 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym) ); }
#line 11661 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 751:
#line 4106 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym) ); }
#line 11667 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 752:
#line 4111 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_string(l, NULL);
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 11676 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 753:
#line 4116 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_string(l, (yyvsp[-2].sval));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 11685 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 754:
#line 4121 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[-2].sym));
  		  append_string(l, NULL);
  		  (yyval.sym) = _symbol_create_list( SQL_TABLE, l ); }
#line 11694 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 755:
#line 4126 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_symbol(l, (yyvsp[-1].sym));
  		  append_string(l, (yyvsp[0].sval));
  		  (yyval.sym) = _symbol_create_list( SQL_COLUMN, l ); }
#line 11703 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 756:
#line 4133 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 11709 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 757:
#line 4134 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 11715 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 758:
#line 4139 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 11738 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 759:
#line 4160 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11744 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 760:
#line 4161 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11751 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 761:
#line 4166 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11757 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 762:
#line 4167 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11764 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 763:
#line 4172 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 11770 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 764:
#line 4173 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
			  append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 11777 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 765:
#line 4180 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-3].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11787 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 766:
#line 4186 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-5].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, NULL);
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11797 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 767:
#line 4192 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-4].l));
  		  append_int(l, TRUE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11807 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 768:
#line 4198 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-4].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11817 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 769:
#line 4204 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-3].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11827 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 770:
#line 4210 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  		  append_list(l, (yyvsp[-5].l));
  		  append_int(l, FALSE);
  		  append_symbol(l, (yyvsp[-3].sym));
  		  append_symbol(l, (yyvsp[-1].sym));
		  (yyval.sym) = _symbol_create_list( SQL_AGGR, l ); }
#line 11838 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 772:
#line 4220 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 11844 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 773:
#line 4221 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = -1; }
#line 11850 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 774:
#line 4222 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 11856 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 775:
#line 4226 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 1; }
#line 11862 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 776:
#line 4227 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = 0; }
#line 11868 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 777:
#line 4238 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val)+1; }
#line 11874 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 778:
#line 4240 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0+1; }
#line 11880 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 779:
#line 4244 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[-1].i_val)+1; }
#line 11886 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 780:
#line 4246 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 6+1; }
#line 11892 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 781:
#line 4250 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "date", 0, 0); }
#line 11898 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 782:
#line 4252 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].bval))
				sql_find_subtype(&(yyval.type), "timetz", (yyvsp[-1].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "time", (yyvsp[-1].i_val), 0); 
			}
#line 11908 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 783:
#line 4258 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { if ((yyvsp[0].bval))
				sql_find_subtype(&(yyval.type), "timestamptz", (yyvsp[-1].i_val), 0); 
			  else
				sql_find_subtype(&(yyval.type), "timestamp", (yyvsp[-1].i_val), 0); 
			}
#line 11918 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 784:
#line 4266 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iyear; }
#line 11924 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 785:
#line 4267 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imonth; }
#line 11930 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 786:
#line 4268 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = iday; }
#line 11936 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 787:
#line 4269 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = ihour; }
#line 11942 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 788:
#line 4270 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = imin; }
#line 11948 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 790:
#line 4275 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = isec; }
#line 11954 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 791:
#line 4280 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[-1].i_val)), (yyvsp[0].i_val)-1);  }
#line 11961 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 792:
#line 4286 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[0].i_val)), 0);  }
#line 11968 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 793:
#line 4289 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[0].i_val)-1);  }
#line 11975 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 794:
#line 4295 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), (yyvsp[-1].i_val)), (yyvsp[0].i_val)-1);  }
#line 11982 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 795:
#line 4298 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_int(
			 	append_int( L(), isec), (yyvsp[0].i_val)-1);  }
#line 11989 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 796:
#line 4304 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) =  append_list(
			append_list( L(), (yyvsp[-2].l)), (yyvsp[0].l) ); }
#line 11996 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 797:
#line 4307 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) =  append_list( L(), (yyvsp[0].l)); }
#line 12002 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 798:
#line 4311 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12024 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 802:
#line 4337 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { const char *s = sql2str((yyvsp[0].sval));
		  int len = UTF8_strlen(s);
		  sql_subtype t;
		  sql_find_subtype(&t, "char", len, 0 );
		  (yyval.sym) = _newAtomNode( _atom_string(&t, s)); }
#line 12034 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 803:
#line 4343 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12103 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 804:
#line 4408 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12138 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 805:
#line 4439 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12205 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 806:
#line 4502 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12248 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 807:
#line 4541 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12269 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 808:
#line 4558 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12289 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 809:
#line 4574 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12309 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 810:
#line 4590 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12329 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 812:
#line 4607 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12350 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 813:
#line 4624 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12371 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 814:
#line 4641 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12392 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 815:
#line 4658 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12417 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 816:
#line 4679 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, FALSE)); }
#line 12425 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 817:
#line 4683 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_subtype t;
		  sql_find_subtype(&t, "boolean", 0, 0 );
		  (yyval.sym) = _newAtomNode( atom_bool(SA, &t, TRUE)); }
#line 12433 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 818:
#line 4689 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12478 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 819:
#line 4734 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 12484 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 820:
#line 4735 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  m->scanner.schema = (yyvsp[-2].sval);
				  (yyval.l) = append_string(
					append_string(L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12493 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 821:
#line 4739 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
				  m->scanner.schema = (yyvsp[-4].sval);
				  (yyval.l) = append_string(
					append_string(
						append_string(L(), (yyvsp[-4].sval)), 
						(yyvsp[-2].sval)), 
					(yyvsp[0].sval))
				;}
#line 12506 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 822:
#line 4750 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				L(), (yyvsp[0].sval)); }
#line 12513 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 823:
#line 4753 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				append_string(
				 L(), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12521 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 824:
#line 4758 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(
				append_string(
				 append_string(
				  L(), (yyvsp[-4].sval)), (yyvsp[-2].sval)), (yyvsp[0].sval));}
#line 12530 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 825:
#line 4766 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_type(l, &(yyvsp[-1].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
#line 12539 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 826:
#line 4772 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-3].sym));
	  append_type(l, &(yyvsp[-1].type));
	  (yyval.sym) = _symbol_create_list( SQL_CAST, l ); }
#line 12548 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 828:
#line 4784 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_NULLIF,
		   append_symbol(
		    append_symbol(
		     L(), (yyvsp[-3].sym)), (yyvsp[-1].sym))); }
#line 12557 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 829:
#line 4789 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_COALESCE, (yyvsp[-1].l)); }
#line 12563 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 830:
#line 4791 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     append_symbol(
		      L(),(yyvsp[-3].sym)),(yyvsp[-2].l)),(yyvsp[-1].sym))); }
#line 12573 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 831:
#line 4797 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list(SQL_CASE,
		   append_symbol(
		    append_list(
		     L(),(yyvsp[-2].l)),(yyvsp[-1].sym))); }
#line 12582 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 832:
#line 4805 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 12588 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 833:
#line 4807 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 12594 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 834:
#line 4812 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[-2].sym));
			  (yyval.l) = append_symbol( (yyval.l), (yyvsp[0].sym));
			}
#line 12602 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 835:
#line 4816 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-2].l), (yyvsp[0].sym)); }
#line 12608 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 836:
#line 4822 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].sym))); }
#line 12617 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 837:
#line 4830 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym));}
#line 12623 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 838:
#line 4832 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 12629 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 839:
#line 4837 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_WHEN,
			   append_symbol(
			    append_symbol(
			     L(), (yyvsp[-2].sym)),(yyvsp[0].sym))); }
#line 12638 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 840:
#line 4845 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( L(), (yyvsp[0].sym)); }
#line 12644 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 841:
#line 4847 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol( (yyvsp[-1].l), (yyvsp[0].sym)); }
#line 12650 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 842:
#line 4851 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 12656 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 843:
#line 4852 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 12662 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 845:
#line 4862 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val);
		  if ((yyval.i_val) <= 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
#line 12674 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 846:
#line 4873 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l_val) = (yyvsp[0].l_val);
		  if ((yyval.l_val) <= 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value greater than 0 expected");
			YYABORT;
		  }
		}
#line 12686 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 847:
#line 4883 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l_val) = (yyvsp[0].l_val);
		  if ((yyval.l_val) < 0) {
			(yyval.l_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
#line 12698 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 848:
#line 4893 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val);
		  if ((yyval.i_val) < 0) {
			(yyval.i_val) = -1;
			yyerror(m, "Positive value expected");
			YYABORT;
		  }
		}
#line 12710 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 849:
#line 4904 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "char", 1, 0); }
#line 12716 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 850:
#line 4906 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.type).type = NULL;
			  yyerror(m, "CHARACTER VARYING needs a mandatory length specification");
			  YYABORT;
			}
#line 12725 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 851:
#line 4910 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "clob", 0, 0); }
#line 12731 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 852:
#line 4912 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "char", (yyvsp[-1].i_val), 0); }
#line 12737 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 853:
#line 4914 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "varchar", (yyvsp[-1].i_val), 0); }
#line 12743 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 854:
#line 4916 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "clob", (yyvsp[-1].i_val), 0);
			  /* NOTE: CLOB may be called as CLOB(2K) which is equivalent
			   *       to CLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 125 SQL-99
			   */
			}
#line 12756 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 855:
#line 4924 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "blob", 0, 0); }
#line 12762 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 856:
#line 4926 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "blob", (yyvsp[-1].i_val), 0);
			  /* NOTE: BLOB may be called as BLOB(2K) which is equivalent
			   *       to BLOB(2048).  Due to 'nonzero' it is not possible
			   *       to enter this as the parser rejects it.  However it
			   *       might be a ToDo for the future.
			   *       See p. 85 SQL-99
			   */
			}
#line 12775 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 857:
#line 4934 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "tinyint", 0, 0); }
#line 12781 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 858:
#line 4935 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "smallint", 0, 0); }
#line 12787 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 859:
#line 4936 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "int", 0, 0); }
#line 12793 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 860:
#line 4937 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "bigint", 0, 0); }
#line 12799 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 861:
#line 4938 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "hugeint", 0, 0); }
#line 12805 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 862:
#line 4940 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "decimal", 18, 3); }
#line 12811 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 863:
#line 4942 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12828 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 864:
#line 4955 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12850 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 865:
#line 4972 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 12856 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 866:
#line 4974 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12874 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 867:
#line 4988 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12898 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 868:
#line 5007 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 12904 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 869:
#line 5008 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "double", 0, 0); }
#line 12910 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 870:
#line 5009 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), "real", 0, 0); }
#line 12916 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 873:
#line 5012 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[0].sval), 0, 0); }
#line 12922 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 874:
#line 5014 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[-3].sval), (yyvsp[-1].i_val), 0); }
#line 12928 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 875:
#line 5015 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[0].sval), 0, 0); }
#line 12934 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 876:
#line 5017 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { sql_find_subtype(&(yyval.type), (yyvsp[-3].sval), (yyvsp[-1].i_val), 0); }
#line 12940 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 877:
#line 5019 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12956 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 878:
#line 5030 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12974 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 879:
#line 5045 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 12992 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 880:
#line 5058 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (!sql_find_subtype(&(yyval.type), "geometry", 0, 0 )) {
			yyerror(m, "\b22000!type (geometry) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
#line 13004 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 881:
#line 5065 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 13024 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 882:
#line 5080 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 13044 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 883:
#line 5095 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		if (!sql_find_subtype(&(yyval.type), "geometrya", 0, 0 )) {
			yyerror(m, "\b22000!type (geometrya) unknown");
			(yyval.type).type = NULL;
			YYABORT;
		}
	}
#line 13056 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 884:
#line 5102 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	int geoSubType = find_subgeometry_type((yyvsp[0].sval));

	if(geoSubType == 0) {
		char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[0].sval));
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
		char *msg = sql_message("\b22000!type (%s) unknown", (yyvsp[0].sval));
		yyerror(m, msg);
		_DELETE(msg);
		(yyval.type).type = NULL;
		YYABORT;
	}
}
#line 13084 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 885:
#line 5128 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	int subtype = find_subgeometry_type((yyvsp[0].sval));
	char* geoSubType = (yyvsp[0].sval);

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
#line 13106 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 886:
#line 5145 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
	int subtype = find_subgeometry_type((yyvsp[0].sval));
	char* geoSubType = (yyvsp[0].sval);

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
#line 13128 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 887:
#line 5166 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 13144 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 888:
#line 5180 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13150 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 889:
#line 5181 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-1].sval); }
#line 13156 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 890:
#line 5185 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13162 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 891:
#line 5186 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13168 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 892:
#line 5187 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-2].sval); }
#line 13174 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 893:
#line 5190 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13180 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 894:
#line 5191 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[-2].sval); }
#line 13186 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 897:
#line 5199 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13192 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 898:
#line 5200 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13198 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 899:
#line 5201 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13204 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 900:
#line 5202 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13210 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 901:
#line 5203 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13216 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 902:
#line 5204 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13222 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 903:
#line 5208 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13228 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 904:
#line 5209 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13234 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 905:
#line 5210 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13240 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 906:
#line 5211 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13246 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 907:
#line 5212 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13252 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 908:
#line 5213 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13258 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 909:
#line 5214 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13264 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 911:
#line 5219 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "large"); }
#line 13270 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 912:
#line 5220 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "name"); }
#line 13276 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 913:
#line 5221 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "object"); }
#line 13282 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 914:
#line 5222 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "password"); }
#line 13288 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 915:
#line 5223 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "path"); }
#line 13294 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 916:
#line 5224 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "precision"); }
#line 13300 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 917:
#line 5225 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "privileges"); }
#line 13306 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 918:
#line 5226 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "role"); }
#line 13312 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 919:
#line 5227 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "size"); }
#line 13318 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 920:
#line 5228 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "type"); }
#line 13324 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 921:
#line 5229 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "release"); }
#line 13330 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 922:
#line 5230 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "value"); }
#line 13336 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 923:
#line 5231 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "zone"); }
#line 13342 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 924:
#line 5233 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "action"); }
#line 13348 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 925:
#line 5234 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "as"); }
#line 13354 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 926:
#line 5235 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "authorization"); }
#line 13360 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 927:
#line 5236 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "column"); }
#line 13366 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 928:
#line 5237 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "cycle"); }
#line 13372 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 929:
#line 5238 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "distinct"); }
#line 13378 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 930:
#line 5239 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "increment"); }
#line 13384 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 931:
#line 5240 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "maxvalue"); }
#line 13390 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 932:
#line 5241 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "minvalue"); }
#line 13396 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 933:
#line 5242 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "plan"); }
#line 13402 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 934:
#line 5243 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "schema"); }
#line 13408 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 935:
#line 5244 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "start"); }
#line 13414 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 936:
#line 5245 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "statement"); }
#line 13420 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 937:
#line 5246 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "table"); }
#line 13426 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 938:
#line 5248 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "cache"); }
#line 13432 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 939:
#line 5249 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "data"); }
#line 13438 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 940:
#line 5250 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "diagnostics"); }
#line 13444 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 941:
#line 5251 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "match"); }
#line 13450 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 942:
#line 5252 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "options"); }
#line 13456 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 943:
#line 5253 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "row"); }
#line 13462 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 944:
#line 5254 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "key"); }
#line 13468 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 945:
#line 5255 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "language"); }
#line 13474 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 946:
#line 5256 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "level"); }
#line 13480 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 947:
#line 5257 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "session"); }
#line 13486 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 948:
#line 5258 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "date"); }
#line 13492 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 949:
#line 5259 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "time"); }
#line 13498 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 950:
#line 5260 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "timestamp"); }
#line 13504 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 951:
#line 5261 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "interval"); }
#line 13510 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 952:
#line 5262 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "imprints"); }
#line 13516 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 953:
#line 5264 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "prepare"); }
#line 13522 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 954:
#line 5265 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "execute"); }
#line 13528 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 955:
#line 5266 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "explain"); }
#line 13534 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 956:
#line 5267 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "debug"); }
#line 13540 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 957:
#line 5268 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "trace"); }
#line 13546 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 958:
#line 5269 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "text"); }
#line 13552 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 959:
#line 5270 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "auto_commit"); }
#line 13558 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 960:
#line 5271 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "no"); }
#line 13564 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 961:
#line 5273 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "strip"); }
#line 13570 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 962:
#line 5274 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "whitespace"); }
#line 13576 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 963:
#line 5275 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "passing"); }
#line 13582 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 964:
#line 5276 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "nil"); }
#line 13588 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 965:
#line 5277 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "ref"); }
#line 13594 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 966:
#line 5278 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "absent"); }
#line 13600 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 967:
#line 5279 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "empty"); }
#line 13606 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 968:
#line 5280 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "document"); }
#line 13612 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 969:
#line 5281 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "element"); }
#line 13618 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 970:
#line 5282 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "content"); }
#line 13624 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 971:
#line 5283 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "namespace"); }
#line 13630 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 972:
#line 5284 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "returning"); }
#line 13636 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 973:
#line 5285 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "location"); }
#line 13642 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 974:
#line 5286 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "id"); }
#line 13648 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 975:
#line 5287 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "according"); }
#line 13654 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 976:
#line 5288 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "uri"); }
#line 13660 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 977:
#line 5289 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "filter"); }
#line 13666 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 978:
#line 5290 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "temporary"); }
#line 13672 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 979:
#line 5291 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "temp"); }
#line 13678 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 980:
#line 5292 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "analyze"); }
#line 13684 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 981:
#line 5293 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "MinMax"); }
#line 13690 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 982:
#line 5294 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "storage"); }
#line 13696 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 983:
#line 5295 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "geometry"); }
#line 13702 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 984:
#line 5296 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = sa_strdup(SA, "replace"); }
#line 13708 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 985:
#line 5300 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string(L(), (yyvsp[0].sval)); }
#line 13714 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 986:
#line 5302 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_string((yyvsp[-2].l), (yyvsp[0].sval)); }
#line 13720 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 987:
#line 5307 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 13745 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 988:
#line 5330 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 13770 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 989:
#line 5350 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 13804 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 990:
#line 5383 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 13810 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 991:
#line 5385 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strconcat((yyvsp[-1].sval),(yyvsp[0].sval)); 
	 	  (yyval.sval) = sa_strdup(SA, s);	
		  _DELETE(s);
		}
#line 13819 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 992:
#line 5393 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    {
		  m->emode = m_execute;
		  (yyval.sym) = (yyvsp[0].sym); }
#line 13827 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 993:
#line 5400 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_int(l, (yyvsp[-2].i_val));
  	  append_list(l, NULL);
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 13836 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 994:
#line 5405 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
  	  append_int(l, (yyvsp[-3].i_val));
  	  append_list(l, (yyvsp[-1].l));
	  (yyval.sym) = _symbol_create_list( SQL_NOP, l ); }
#line 13845 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 995:
#line 5419 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 13851 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 997:
#line 5424 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = _symbol_create_list( SQL_PATH, (yyvsp[0].l)); }
#line 13857 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 5435 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 13863 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 5437 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 13869 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 5459 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCOMMENT, l); }
#line 13878 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 5467 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLCONCAT, l); }
#line 13887 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 5475 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLDOCUMENT, l); }
#line 13896 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 5485 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_list(l, (yyvsp[-2].l));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLELEMENT, l);
	}
#line 13907 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 5495 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = NULL; }
#line 13913 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 5497 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 13921 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 5501 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-2].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[0].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 13929 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 5505 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-4].sym));
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[-2].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 13937 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 5509 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-2].sym));
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 13945 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 5513 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[0].sym));
	  (yyval.l) = append_list((yyval.l), NULL); }
#line 13953 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 5517 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), (yyvsp[-2].sym));
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 13961 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 5521 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), NULL);
	  (yyval.l) = append_symbol((yyval.l), NULL);
	  (yyval.l) = append_list((yyval.l), (yyvsp[0].l)); }
#line 13969 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 5531 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 13975 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 5535 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 13981 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 5537 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[-2].sym));
	  	  append_symbol(l, (yyvsp[0].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 13992 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 5547 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[0].sval));
	  append_symbol(l, (yyvsp[-1].sym));
	  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14001 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 5554 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 14007 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 5555 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 14013 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 5568 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = L();
		  (yyval.l) = append_list((yyval.l), (yyvsp[-1].l));
		  (yyval.l) = append_int((yyval.l), (yyvsp[0].i_val)); 	}
#line 14021 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 5575 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[0].sym)); }
#line 14027 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 5577 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol((yyvsp[-2].l), (yyvsp[0].sym)); }
#line 14033 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 5585 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14039 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 5586 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = (yyvsp[0].i_val); }
#line 14045 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 5590 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14051 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 5591 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14057 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 5592 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 14063 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 5593 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 3; }
#line 14069 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 5594 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 4; }
#line 14075 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 5601 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-4].sym));
	  append_list(l, (yyvsp[-3].l));
	  append_int(l, (yyvsp[-2].i_val));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLFOREST, l);
	}
#line 14087 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 5611 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14093 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 5612 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 14099 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 5617 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list(L(), (yyvsp[0].l)); }
#line 14105 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 5619 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_list((yyvsp[-2].l), (yyvsp[0].l)); }
#line 14111 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 5624 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.l) = append_symbol(L(), (yyvsp[-1].sym));
		  (yyval.l) = append_string((yyval.l), (yyvsp[0].sval)); }
#line 14118 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 5629 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14124 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 5633 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = NULL; }
#line 14130 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 5634 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 14136 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 5638 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 14142 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 5645 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_int(l, (yyvsp[-3].i_val) );
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPARSE, l); }
#line 14152 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 5652 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14158 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 5653 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14164 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 5660 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_string(l, (yyvsp[-3].sval));
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLPI, l); }
#line 14174 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 5672 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14180 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 5674 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14186 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 5685 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14192 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 5731 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  append_symbol(l, (yyvsp[-2].sym));
	  append_int(l, (yyvsp[-1].i_val));
	  (yyval.sym) = _symbol_create_list( SQL_XMLTEXT, l); }
#line 14201 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 5742 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14207 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 5747 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 2; }
#line 14213 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 5751 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14219 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 5752 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14225 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 5756 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14231 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 5757 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 0; }
#line 14237 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 5758 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.i_val) = 1; }
#line 14243 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 5773 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[-1].sym); }
#line 14249 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 5777 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 14255 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 5779 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
		  append_list(l, 
		  	append_string(L(), sa_strdup(SA, "concat")));
	  	  append_symbol(l, (yyvsp[-2].sym));
	  	  append_symbol(l, (yyvsp[0].sym));
	  	  (yyval.sym) = _symbol_create_list( SQL_BINOP, l ); }
#line 14266 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 5802 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { char *s = strconcat("xmlns:", (yyvsp[0].sval));
				  dlist *l = L();
	  			  append_string(l, sa_strdup(SA, s));
				  _DELETE(s);
	  			  append_symbol(l, (yyvsp[-2].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14277 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 5811 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { dlist *l = L();
	  			  append_string(l, sa_strdup(SA, "xmlns" ));
	  			  append_symbol(l, (yyvsp[0].sym));
	  			  (yyval.sym) = _symbol_create_list( SQL_XMLATTRIBUTE, l ); }
#line 14286 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 5815 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
    { (yyval.sym) = NULL; }
#line 14292 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 5911 "src/sql/server/sql_parser.y" /* yacc.c:1646  */
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
#line 14316 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
    break;


#line 14320 "src/sql/server/sql_parser.tab.c" /* yacc.c:1646  */
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
#line 5932 "src/sql/server/sql_parser.y" /* yacc.c:1906  */

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

