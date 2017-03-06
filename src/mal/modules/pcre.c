/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

/*
 * N. Nes
 * PCRE library interface
 * The  PCRE library is a set of functions that implement regular
 * expression pattern matching using the same syntax  and  semantics  as  Perl,
 * with  just  a  few  differences.  The  current  implementation of PCRE
 * (release 4.x) corresponds approximately with Perl 5.8, including  support
 * for  UTF-8  encoded  strings.   However,  this support has to be
 * explicitly enabled; it is not the default.
 *
 * ftp://ftp.csx.cam.ac.uk/pub/software/programming/pcre
 */
#include "monetdb_config.h"
#include <string.h>

#include "mal.h"
#include "mal_exception.h"

#include "str.h"


// pretend we have a regex type
typedef void pcre;

mal_export str pcre_init(void *ret);

mal_export str PCREquote(str *r, const str *v);
mal_export str PCREmatch(bit *ret, const str *val, const str *pat);
mal_export str PCREimatch(bit *ret, const str *val, const str *pat);
mal_export str PCREindex(int *ret, const pcre *pat, const str *val);
mal_export str PCREpatindex(int *ret, const str *pat, const str *val);
mal_export str PCREreplace_wrap(str *res, const str *or, const str *pat, const str *repl, const str *flags);
mal_export str PCREreplace_bat_wrap(bat *res, const bat *or, const str *pat, const str *repl, const str *flags);
mal_export str PCREsql2pcre(str *ret, const str *pat, const str *esc);

mal_export str PCRElike3(bit *ret, const str *s, const str *pat, const str *esc);
mal_export str PCRElike2(bit *ret, const str *s, const str *pat);
mal_export str PCREnotlike3(bit *ret, const str *s, const str *pat, const str *esc);
mal_export str PCREnotlike2(bit *ret, const str *s, const str *pat);
mal_export str BATPCRElike(bat *ret, const bat *b, const str *pat, const str *esc);
mal_export str BATPCRElike2(bat *ret, const bat *b, const str *pat);
mal_export str BATPCREnotlike(bat *ret, const bat *b, const str *pat, const str *esc);
mal_export str BATPCREnotlike2(bat *ret, const bat *b, const str *pat);
mal_export str PCREilike3(bit *ret, const str *s, const str *pat, const str *esc);
mal_export str PCREilike2(bit *ret, const str *s, const str *pat);
mal_export str PCREnotilike3(bit *ret, const str *s, const str *pat, const str *esc);
mal_export str PCREnotilike2(bit *ret, const str *s, const str *pat);
mal_export str BATPCREilike(bat *ret, const bat *b, const str *pat, const str *esc);
mal_export str BATPCREilike2(bat *ret, const bat *b, const str *pat);
mal_export str BATPCREnotilike(bat *ret, const bat *b, const str *pat, const str *esc);
mal_export str BATPCREnotilike2(bat *ret, const bat *b, const str *pat);

mal_export str PCRElikeselect2(bat *ret, const bat *bid, const bat *sid, const str *pat, const str *esc, const bit *caseignore, const bit *anti);
mal_export str PCRElikeselect1(bat *ret, const bat *bid, const bat *cid, const str *pat, const str *esc, const bit *anti);
mal_export str PCRElikeselect3(bat *ret, const bat *bid, const bat *sid, const str *pat, const str *esc, const bit *anti);
mal_export str PCRElikeselect4(bat *ret, const bat *bid, const bat *cid, const str *pat, const bit *anti);
mal_export str PCRElikeselect5(bat *ret, const bat *bid, const bat *sid, const str *pat, const bit *anti);

mal_export str LIKEjoin(bat *r1, bat *r2, const bat *lid, const bat *rid, const str *esc, const bat *slid, const bat *srid, const bit *nil_matches, const lng *estimate);
mal_export str LIKEjoin1(bat *r1, bat *r2, const bat *lid, const bat *rid, const bat *slid, const bat *srid, const bit *nil_matches, const lng *estimate);
mal_export str ILIKEjoin(bat *r1, bat *r2, const bat *lid, const bat *rid, const str *esc, const bat *slid, const bat *srid, const bit *nil_matches, const lng *estimate);
mal_export str ILIKEjoin1(bat *r1, bat *r2, const bat *lid, const bat *rid, const bat *slid, const bat *srid, const bit *nil_matches, const lng *estimate);


#ifndef HAVE_STRCASESTR
static const char *
strcasestr(const char *haystack, const char *needle)
{
	const char *p, *np = 0, *startn = 0;

	for (p = haystack; *p; p++) {
		if (np) {
			if (toupper(*p) == toupper(*np)) {
				if (!*++np)
					return startn;
			} else
				np = 0;
		} else if (toupper(*p) == toupper(*needle)) {
			np = needle + 1;
			startn = p;
			if (!*np)
				return startn;
		}
	}

	return 0;
}
#endif

#define m2p(p) (pcre*)(((size_t*)p)+1)
#define p2m(p) (pcre*)(((size_t*)p)-1)


/* these two defines are copies from gdk_select.c */

/* scan select loop with candidates */
#define candscanloop(TEST)										\
	do {														\
		ALGODEBUG fprintf(stderr,								\
			    "#BATselect(b=%s#"BUNFMT",s=%s,anti=%d): "	\
			    "scanselect %s\n", BATgetId(b), BATcount(b),	\
			    s ? BATgetId(s) : "NULL", anti, #TEST);			\
		while (p < q) {											\
			o = *candlist++;									\
			r = (BUN) (o - off);								\
			v = BUNtail(bi, r);									\
			if (TEST)											\
				bunfastapp(bn, &o);								\
			p++;												\
		}														\
	} while (0)

/* scan select loop without candidates */
#define scanloop(TEST)											\
	do {														\
		ALGODEBUG fprintf(stderr,								\
			    "#BATselect(b=%s#"BUNFMT",s=%s,anti=%d): "	\
			    "scanselect %s\n", BATgetId(b), BATcount(b),	\
			    s ? BATgetId(s) : "NULL", anti, #TEST);			\
		while (p < q) {											\
			v = BUNtail(bi, p-off);								\
			if (TEST) {											\
				o = (oid) p;									\
				bunfastapp(bn, &o);								\
			}													\
			p++;												\
		}														\
	} while (0)

static str
pcre_likeselect(BAT **bnp, BAT *b, BAT *s, const char *pat, int caseignore, int anti)
{
	BATiter bi = bat_iterator(b);
	BAT *bn;
	BUN p, q;
	oid o, off;
	const char *v;

	assert(ATOMstorage(b->ttype) == TYPE_str);
	assert(anti == 0 || anti == 1);

	bn = COLnew(0, TYPE_oid, s ? BATcount(s) : BATcount(b), TRANSIENT);
	if (bn == NULL) {
		throw(MAL, "pcre.likeselect", MAL_MALLOC_FAIL);
	}
	off = b->hseqbase;

	if (s && !BATtdense(s)) {
		const oid *candlist;
		BUN r;

		assert(s->ttype == TYPE_oid || s->ttype == TYPE_void);
		assert(s->tsorted);
		assert(s->tkey);
		/* setup candscanloop loop vars to only iterate over
		 * part of s that has values that are in range of b */
		o = b->hseqbase + BATcount(b);
		q = SORTfndfirst(s, &o);
		p = SORTfndfirst(s, &b->hseqbase);
		candlist = (const oid *) Tloc(s, p);


		if (anti)
			candscanloop(v && *v != '\200' && !STRlike(pat, v, caseignore, '\0'));
		else
			candscanloop(v && *v != '\200' && STRlike(pat, v, caseignore, '\0'));
	} else {
		if (s) {
			assert(BATtdense(s));
			p = (BUN) s->tseqbase;
			q = p + BATcount(s);
			if ((oid) p < b->hseqbase)
				p = b->hseqbase;
			if ((oid) q > b->hseqbase + BATcount(b))
				q = b->hseqbase + BATcount(b);
		} else {
			p = off;
			q = BUNlast(b) + off;
		}
		if (anti)
			scanloop(v && *v != '\200' && !STRlike(pat, v, caseignore, '\0'));
		else
			scanloop(v && *v != '\200' && STRlike(pat, v, caseignore, '\0'));
	}
	BATsetcount(bn, BATcount(bn)); /* set some properties */
	bn->tsorted = 1;
	bn->trevsorted = bn->batCount <= 1;
	bn->tkey = 1;
	bn->tdense = bn->batCount <= 1;
	if (bn->batCount == 1)
		bn->tseqbase =  * (oid *) Tloc(bn, 0);
	*bnp = bn;
	return MAL_SUCCEED;

  bunins_failed:
	BBPreclaim(bn);
	*bnp = NULL;
	throw(MAL, "pcre.likeselect", OPERATION_FAILED);
}


#define MAX_NR_CAPTURES  1024 /* Maximal number of captured substrings in one original string */

static str
pcre_replace(str *res, const char *origin_str, const char *pattern, const char *replacement, const char *flags)
{
	(void) res;
	(void) origin_str;
	(void) pattern;
	(void) replacement;
	(void) flags;
	throw(MAL,"pcre.replace", "Database was compiled without PCRE support.");
}

static str
pcre_replace_bat(BAT **res, BAT *origin_strs, const char *pattern, const char *replacement, const char *flags)
{
	(void) res;
	(void) origin_strs;
	(void) pattern;
	(void) replacement;
	(void) flags;
	throw(MAL,"pcre.replace_bat", "Database was compiled without PCRE support.");
}

str
pcre_init(void *ret)
{
	(void) ret;
	return NULL;
}


/*
 * @+ Wrapping
 */
#include "mal.h"
str
PCREreplace_wrap(str *res, const str *or, const str *pat, const str *repl, const str *flags){
	return pcre_replace(res,*or,*pat,*repl,*flags);
}

str
PCREreplace_bat_wrap(bat *res, const bat *bid, const str *pat, const str *repl, const str *flags){
	BAT *b,*bn = NULL;
	str msg;
	if ((b = BATdescriptor(*bid)) == NULL)
		throw(MAL, "pcre.replace", RUNTIME_OBJECT_MISSING);

	msg = pcre_replace_bat(&bn,b,*pat,*repl,*flags);
	if( msg == MAL_SUCCEED){
		*res= bn->batCacheid;
		BBPkeepref(*res);
	}
	BBPunfix(b->batCacheid);
	return msg;
}

str
PCREmatch(bit *ret, const str *val, const str *pat)
{
	(void) ret;
	(void) val;
	(void) pat;
	throw(MAL,"pcre.index", "Database was compiled without PCRE support.");
}

str
PCREimatch(bit *ret, const str *val, const str *pat)
{
	(void) ret;
	(void) val;
	(void) pat;
	throw(MAL,"pcre.index", "Database was compiled without PCRE support.");
}

str
PCREindex(int *res, const pcre *pattern, const str *s)
{
	(void) res;
	(void) pattern;
	(void) s;
	throw(MAL,"pcre.index", "Database was compiled without PCRE support.");
}


str
PCREpatindex(int *ret, const str *pat, const str *val)
{
	(void) ret;
	(void) val;
	(void) pat;
	throw(MAL,"pcre.index", "Database was compiled without PCRE support.");
}

str
PCREquote(str *ret, const str *val)
{
	(void) ret;
	(void) val;
	throw(MAL,"pcre.index", "Database was compiled without PCRE support.");
}


str
PCREsql2pcre(str *ret, const str *pat, const str *esc)
{
	(void) ret;
	(void) esc;
	(void) pat;
	throw(MAL,"pcre.index", "Database was compiled without PCRE support.");
}

static str
PCRElike4(bit *ret, const str *s, const str *pat, const str *esc, const bit *isens)
{
	*ret = STRlike(*pat, *s, *isens, **esc);
	return MAL_SUCCEED;
}

str
PCRElike3(bit *ret, const str *s, const str *pat, const str *esc)
{
	bit no = FALSE;

	return(PCRElike4(ret, s, pat, esc, &no));
}

str
PCRElike2(bit *ret, const str *s, const str *pat)
{
	char *esc = "";

	return PCRElike3(ret, s, pat, &esc);
}

str
PCREnotlike3(bit *ret, const str *s, const str *pat, const str *esc)
{
	str tmp;
	bit r;

	rethrow("str.not_like", tmp, PCRElike3(&r, s, pat, esc));
	*ret = !r;
	return(MAL_SUCCEED);
}

str
PCREnotlike2(bit *ret, const str *s, const str *pat)
{
	str tmp;
	bit r;

	rethrow("str.not_like", tmp, PCRElike2(&r, s, pat));
	*ret = !r;
	return(MAL_SUCCEED);
}

str
PCREilike3(bit *ret, const str *s, const str *pat, const str *esc)
{
	bit yes = TRUE;

	return(PCRElike4(ret, s, pat, esc, &yes));
}

str
PCREilike2(bit *ret, const str *s, const str *pat)
{
	char *esc = "\\";

	return PCREilike3(ret, s, pat, &esc);
}

str
PCREnotilike3(bit *ret, const str *s, const str *pat, const str *esc)
{
	str tmp;
	bit r;

	rethrow("str.not_ilike", tmp, PCREilike3(&r, s, pat, esc));
	*ret = !r;
	return(MAL_SUCCEED);
}

str
PCREnotilike2(bit *ret, const str *s, const str *pat)
{
	str tmp;
	bit r;

	rethrow("str.not_ilike", tmp, PCREilike2(&r, s, pat));
	*ret = !r;
	return(MAL_SUCCEED);
}

static str
BATPCRElike3(bat *ret, const bat *bid, const str *pat, const str *esc, const bit *isens, const bit *not)
{
	char *ppat = NULL;
	str res = MAL_SUCCEED;

	BAT *strs = BATdescriptor(*bid);
	BATiter strsi;
	BAT *r;
	bit *br;
	BUN p, q, i = 0;

	if (strs == NULL) {
		GDKfree(ppat);
		throw(MAL, "batstr.like", OPERATION_FAILED);
	}

	r = COLnew(strs->hseqbase, TYPE_bit, BATcount(strs), TRANSIENT);
	if( r==NULL) {
		GDKfree(ppat);
		throw(MAL,"pcre.like3",MAL_MALLOC_FAIL);
	}
	br = (bit*)Tloc(r, 0);
	strsi = bat_iterator(strs);

	if (strcmp(ppat, str_nil) == 0) {
		BATloop(strs, p, q) {
			const char *s = (str)BUNtail(strsi, p);

			if (strcmp(s, *pat) == 0)
				br[i] = TRUE;
			else
				br[i] = FALSE;
			if (*not)
				br[i] = !br[i];
			i++;
		}
	} else {

		BATloop(strs, p, q) {
			const char *s = (str)BUNtail(strsi, p);

			if (*s == *str_nil) {
				br[i] = bit_nil;
				r->tnonil = 0;
				r->tnil = 1;
			} else {
				bit retval = STRlike(*pat, s, *isens, **esc);
				br[i] = *not ? !retval:retval;
			}
			i++;
		}

	}
	BATsetcount(r, i);
	r->tsorted = 0;
	r->trevsorted = 0;
	BATkey(r,FALSE);

	BBPkeepref(*ret = r->batCacheid);
	BBPunfix(strs->batCacheid);
	GDKfree(ppat);

	return res;
}

str
BATPCRElike(bat *ret, const bat *bid, const str *pat, const str *esc)
{
	bit no = FALSE;

	return(BATPCRElike3(ret, bid, pat, esc, &no, &no));
}

str
BATPCRElike2(bat *ret, const bat *bid, const str *pat)
{
	char *esc = "\\";

	return BATPCRElike(ret, bid, pat, &esc);
}

str
BATPCREnotlike(bat *ret, const bat *bid, const str *pat, const str *esc)
{
	bit no = FALSE;
	bit yes = TRUE;

	return(BATPCRElike3(ret, bid, pat, esc, &no, &yes));
}

str
BATPCREnotlike2(bat *ret, const bat *bid, const str *pat)
{
	char *esc = "\\";

	return(BATPCREnotlike(ret, bid, pat, &esc));
}

str
BATPCREilike(bat *ret, const bat *bid, const str *pat, const str *esc)
{
	bit yes = TRUE;
	bit no = FALSE;

	return(BATPCRElike3(ret, bid, pat, esc, &yes, &no));
}

str
BATPCREilike2(bat *ret, const bat *bid, const str *pat)
{
	char *esc = "\\";

	return BATPCREilike(ret, bid, pat, &esc);
}

str
BATPCREnotilike(bat *ret, const bat *bid, const str *pat, const str *esc)
{
	bit yes = TRUE;

	return(BATPCRElike3(ret, bid, pat, esc, &yes, &yes));
}

str
BATPCREnotilike2(bat *ret, const bat *bid, const str *pat)
{
	char *esc = "\\";

	return(BATPCREnotilike(ret, bid, pat, &esc));
}

str
PCRElikeselect2(bat *ret, const bat *bid, const bat *sid, const str *pat, const str *esc, const bit *caseignore, const bit *anti)
{
	BAT *b, *s = NULL, *bn = NULL;
	str res;

	if ((b = BATdescriptor(*bid)) == NULL) {
		throw(MAL, "algebra.likeselect", RUNTIME_OBJECT_MISSING);
	}
	if (sid && (*sid) != bat_nil && *sid && (s = BATdescriptor(*sid)) == NULL) {
		BBPunfix(b->batCacheid);
		throw(MAL, "algebra.likeselect", RUNTIME_OBJECT_MISSING);
	}
	(void) esc;
	res = pcre_likeselect(&bn, b, s, *pat, *caseignore, *anti);

	BBPunfix(b->batCacheid);
	if (s)
		BBPunfix(s->batCacheid);
	if (res != MAL_SUCCEED)
		return res;
	assert(bn);
	*ret = bn->batCacheid;
	BBPkeepref(bn->batCacheid);
	return MAL_SUCCEED;
}

str
PCRElikeselect1(bat *ret, const bat *bid, const bat *cid, const str *pat, const str *esc, const bit *anti)
{
	const bit f = TRUE;
	return PCRElikeselect2(ret, bid, cid, pat, esc, &f, anti);
}

str
PCRElikeselect3(bat *ret, const bat *bid, const bat *sid, const str *pat, const str *esc, const bit *anti)
{
	const bit f = FALSE;
	return PCRElikeselect2(ret, bid, sid, pat, esc, &f, anti);
}

str
PCRElikeselect4(bat *ret, const bat *bid, const bat *cid, const str *pat, const bit *anti)
{
	const bit f = TRUE;
	const str esc ="";
	return PCRElikeselect2(ret, bid, cid, pat, &esc, &f, anti);
}

str
PCRElikeselect5(bat *ret, const bat *bid, const bat *sid, const str *pat, const bit *anti)
{
	const bit f = FALSE;
	const str esc ="";
	return PCRElikeselect2(ret, bid, sid, pat, &esc, &f, anti);
}

#include "gdk_cand.h"

#define APPEND(b, o)	(((oid *) b->theap.base)[b->batCount++] = (o))
#define VALUE(s, x)		(s##vars + VarHeapVal(s##vals, (x), s##width))

static char *
pcrejoin(BAT *r1, BAT *r2, BAT *l, BAT *r, BAT *sl, BAT *sr,
			const char *esc, int caseignore)
{
	BUN lstart, lend, lcnt;
	const oid *lcand = NULL, *lcandend = NULL;
	BUN rstart, rend, rcnt;
	const oid *rcand = NULL, *rcandend = NULL;
	const char *lvals, *rvals;
	const char *lvars, *rvars;
	int lwidth, rwidth;
	const char *vl, *vr;
	const oid *p;
	oid lastl = 0;		/* last value inserted into r1 */
	BUN n, nl;
	BUN newcap;
	oid lo, ro;
	int rskipped = 0;	/* whether we skipped values in r */
	char *msg = MAL_SUCCEED;

	ALGODEBUG fprintf(stderr, "#pcrejoin(l=%s#" BUNFMT "[%s]%s%s,"
					  "r=%s#" BUNFMT "[%s]%s%s,sl=%s#" BUNFMT "%s%s,"
					  "sr=%s#" BUNFMT "%s%s)\n",
					  BATgetId(l), BATcount(l), ATOMname(l->ttype),
					  l->tsorted ? "-sorted" : "",
					  l->trevsorted ? "-revsorted" : "",
					  BATgetId(r), BATcount(r), ATOMname(r->ttype),
					  r->tsorted ? "-sorted" : "",
					  r->trevsorted ? "-revsorted" : "",
					  sl ? BATgetId(sl) : "NULL", sl ? BATcount(sl) : 0,
					  sl && sl->tsorted ? "-sorted" : "",
					  sl && sl->trevsorted ? "-revsorted" : "",
					  sr ? BATgetId(sr) : "NULL", sr ? BATcount(sr) : 0,
					  sr && sr->tsorted ? "-sorted" : "",
					  sr && sr->trevsorted ? "-revsorted" : "");

	assert(ATOMtype(l->ttype) == ATOMtype(r->ttype));
	assert(ATOMtype(l->ttype) == TYPE_str);
	assert(sl == NULL || sl->tsorted);
	assert(sr == NULL || sr->tsorted);

	CANDINIT(l, sl, lstart, lend, lcnt, lcand, lcandend);
	CANDINIT(r, sr, rstart, rend, rcnt, rcand, rcandend);

	lvals = (const char *) Tloc(l, 0);
	rvals = (const char *) Tloc(r, 0);
	assert(r->tvarsized && r->ttype);
	lvars = l->tvheap->base;
	rvars = r->tvheap->base;
	lwidth = l->twidth;
	rwidth = r->twidth;

	r1->tkey = 1;
	r1->tsorted = 1;
	r1->trevsorted = 1;
	r2->tkey = 1;
	r2->tsorted = 1;
	r2->trevsorted = 1;

	/* nested loop implementation for PCRE join */
	for (;;) {

		if (rcand) {
			if (rcand == rcandend)
				break;
			ro = *rcand++;
			vr = VALUE(r, ro - r->hseqbase);
		} else {
			if (rstart == rend)
				break;
			vr = VALUE(r, rstart);
			ro = rstart++ + r->hseqbase;
		}
		if (strcmp(vr, str_nil) == 0)
			continue;
		nl = 0;
		p = lcand;
		n = lstart;
		for (;;) {
			int retval;
			if (lcand) {
				if (p == lcandend)
					break;
				lo = *p++;
				vl = VALUE(l, lo - l->hseqbase);
			} else {
				if (n == lend)
					break;
				vl = VALUE(l, n);
				lo = n++ + l->hseqbase;
			}
			if (strcmp(vl, str_nil) == 0)
				continue;


			retval = STRlike(vr, vl, caseignore, *esc);
			if (retval == 0) {
				continue;
			}
			if (BUNlast(r1) == BATcapacity(r1)) {
				newcap = BATgrows(r1);
				BATsetcount(r1, BATcount(r1));
				BATsetcount(r2, BATcount(r2));
				if (BATextend(r1, newcap) != GDK_SUCCEED ||
					BATextend(r2, newcap) != GDK_SUCCEED) {
					msg = createException(MAL, "pcre.join", MAL_MALLOC_FAIL);
					goto bailout;
				}
				assert(BATcapacity(r1) == BATcapacity(r2));
			}
			if (BATcount(r1) > 0) {
				if (lastl + 1 != lo)
					r1->tdense = 0;
				if (nl == 0) {
					r2->trevsorted = 0;
					if (lastl > lo) {
						r1->tsorted = 0;
						r1->tkey = 0;
					} else if (lastl < lo) {
						r1->trevsorted = 0;
					} else {
						r1->tkey = 0;
					}
				}
			}
			APPEND(r1, lo);
			APPEND(r2, ro);
			lastl = lo;
			nl++;
		}
		if (nl > 1) {
			r2->tkey = 0;
			r2->tdense = 0;
			r1->trevsorted = 0;
		} else if (nl == 0) {
			rskipped = BATcount(r2) > 0;
		} else if (rskipped) {
			r2->tdense = 0;
		}
	}
	assert(BATcount(r1) == BATcount(r2));
	/* also set other bits of heap to correct value to indicate size */
	BATsetcount(r1, BATcount(r1));
	BATsetcount(r2, BATcount(r2));
	if (BATcount(r1) > 0) {
		if (r1->tdense)
			r1->tseqbase = ((oid *) r1->theap.base)[0];
		if (r2->tdense)
			r2->tseqbase = ((oid *) r2->theap.base)[0];
	}
	ALGODEBUG fprintf(stderr, "#pcrejoin(l=%s,r=%s)=(%s#"BUNFMT"%s%s,%s#"BUNFMT"%s%s\n",
					  BATgetId(l), BATgetId(r),
					  BATgetId(r1), BATcount(r1),
					  r1->tsorted ? "-sorted" : "",
					  r1->trevsorted ? "-revsorted" : "",
					  BATgetId(r2), BATcount(r2),
					  r2->tsorted ? "-sorted" : "",
					  r2->trevsorted ? "-revsorted" : "");
	return MAL_SUCCEED;

  bailout:

	assert(msg != MAL_SUCCEED);
	return msg;
}

static str
PCREjoin(bat *r1, bat *r2, bat lid, bat rid, bat slid, bat srid,
			const char *esc, int caseignore)
{
	BAT *left = NULL, *right = NULL, *candleft = NULL, *candright = NULL;
	BAT *result1 = NULL, *result2 = NULL;
	char *msg = MAL_SUCCEED;

	if ((left = BATdescriptor(lid)) == NULL)
		goto fail;
	if ((right = BATdescriptor(rid)) == NULL)
		goto fail;
	if (slid != bat_nil && (candleft = BATdescriptor(slid)) == NULL)
		goto fail;
	if (srid != bat_nil && (candright = BATdescriptor(srid)) == NULL)
		goto fail;
	result1 = COLnew(0, TYPE_oid, BATcount(left), TRANSIENT);
	result2 = COLnew(0, TYPE_oid, BATcount(left), TRANSIENT);
	if (result1 == NULL || result2 == NULL) {
		msg = createException(MAL, "pcre.join", MAL_MALLOC_FAIL);
		goto fail;
	}
	result1->tnil = 0;
	result1->tnonil = 1;
	result1->tkey = 1;
	result1->tsorted = 1;
	result1->trevsorted = 1;
	result1->tdense = 1;
	result2->tnil = 0;
	result2->tnonil = 1;
	result2->tkey = 1;
	result2->tsorted = 1;
	result2->trevsorted = 1;
	result2->tdense = 1;
	msg = pcrejoin(result1, result2, left, right, candleft, candright,
					  esc, caseignore);
	if (msg)
		goto fail;
	*r1 = result1->batCacheid;
	*r2 = result2->batCacheid;
	BBPkeepref(*r1);
	BBPkeepref(*r2);
	BBPunfix(left->batCacheid);
	BBPunfix(right->batCacheid);
	if (candleft)
		BBPunfix(candleft->batCacheid);
	if (candright)
		BBPunfix(candright->batCacheid);
	return MAL_SUCCEED;

  fail:
	if (left)
		BBPunfix(left->batCacheid);
	if (right)
		BBPunfix(right->batCacheid);
	if (candleft)
		BBPunfix(candleft->batCacheid);
	if (candright)
		BBPunfix(candright->batCacheid);
	if (result1)
		BBPunfix(result1->batCacheid);
	if (result2)
		BBPunfix(result2->batCacheid);
	if (msg)
		return msg;
	throw(MAL, "pcre.join", RUNTIME_OBJECT_MISSING);
}

str
LIKEjoin(bat *r1, bat *r2, const bat *lid, const bat *rid, const str *esc, const bat *slid, const bat *srid, const bit *nil_matches, const lng *estimate)
{
	(void)nil_matches;
	(void)estimate;
	return PCREjoin(r1, r2, *lid, *rid, slid ? *slid : 0, srid ? *srid : 0, *esc, 0);
}

str
LIKEjoin1(bat *r1, bat *r2, const bat *lid, const bat *rid, const bat *slid, const bat *srid, const bit *nil_matches, const lng *estimate)
{
	const str esc = "";
	return LIKEjoin(r1, r2, lid, rid, &esc, slid, srid, nil_matches, estimate);
}

str
ILIKEjoin(bat *r1, bat *r2, const bat *lid, const bat *rid, const str *esc, const bat *slid, const bat *srid, const bit *nil_matches, const lng *estimate)
{
	(void)nil_matches;
	(void)estimate;
	return PCREjoin(r1, r2, *lid, *rid, slid ? *slid : 0, srid ? *srid : 0, *esc, 1);
}

str
ILIKEjoin1(bat *r1, bat *r2, const bat *lid, const bat *rid, const bat *slid, const bat *srid, const bit *nil_matches, const lng *estimate)
{
	const str esc = "";
	return ILIKEjoin(r1, r2, lid, rid, &esc, slid,srid,nil_matches, estimate);
}
