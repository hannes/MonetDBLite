
static R_altrep_class_t bat_integer_class;

//static R_altrep_class_t bat_real_class;
//static R_altrep_class_t bat_string_class; // TODO


static BAT* bataddr(SEXP x) {
    BAT *addr = (BAT*) R_ExternalPtrAddr(R_altrep_data1(x));
    if (addr == NULL)
	error("object has been unmapped");
    return addr;
}

static R_xlen_t monetdb_altrep_length(SEXP x) {
    return BATcount(bataddr(x));
}

static void *monetdb_altrep_dataptr(SEXP x, Rboolean writeable) {
	(void) x;
	(void) writeable;
	error("cannot access data pointer for this bat");
	return NULL;
}


static int monetdb_altrep_elt_integer(SEXP x, R_xlen_t i) {
	int raw = ((int*) bataddr(x)->theap.base)[i];;
	return raw == int_nil ? NA_INTEGER : raw;
}


static Rboolean monetdb_altrep_inspect(SEXP x, int pre, int deep, int pvec,
		      void (*inspect_subtree)(SEXP, int, int, int))
{
	(void) x;
	(void) pre;
	(void) deep;
	(void) pvec;
	(void) inspect_subtree;

	error("inspect() called but not supported");
	return TRUE;
}

static void *monetdb_altrep_dataptr_or_null(SEXP x, Rboolean writeable) {
	(void) x;
	(void) writeable;
	return NULL;
}


static
R_xlen_t monetdb_altrep_region_integer(SEXP sx, R_xlen_t i, R_xlen_t n, int *buf)
{
	(void) sx;
	(void) i;
	(void) n;
	(void) buf;
	error("region_integer() called but not supported");

    return 0;
}

static int monetdb_altrep_is_sorted(SEXP x) {
	BAT* b = bataddr(x);
	return b->tsorted;
}


static int monetdb_altrep_no_na(SEXP x) {
	BAT* b = bataddr(x);
	return b->tnonil && !b->tnil;
}


static void InitMmapIntegerClass(DllInfo *dll)
{
    R_altrep_class_t cls =
	R_make_altinteger_class("bat_integer", "MonetDBLite", dll);
    bat_integer_class = cls;

    /* override ALTREP methods */
   R_set_altrep_Inspect_method(cls, monetdb_altrep_inspect);
    R_set_altrep_Length_method(cls, monetdb_altrep_length);

    /* override ALTVEC methods */
    R_set_altvec_Dataptr_method(cls, monetdb_altrep_dataptr);
    R_set_altvec_Dataptr_or_null_method(cls, monetdb_altrep_dataptr_or_null);

    /* override ALTINTEGER methods */
    R_set_altinteger_Elt_method(cls, monetdb_altrep_elt_integer);
    R_set_altinteger_Get_region_method(cls, monetdb_altrep_region_integer);
    R_set_altinteger_Is_sorted_method(cls, monetdb_altrep_is_sorted);
    R_set_altinteger_No_NA_method(cls, monetdb_altrep_no_na);
}

//static void InitMmapRealClass(DllInfo *dll)
//{
//    R_altrep_class_t cls =
//	R_make_altreal_class("bat_real", "MonetDBLite", dll);
//    bat_real_class = cls;
//
//    /* override ALTREP methods */
//    /*R_set_altrep_Unserialize_method(cls, mmap_Unserialize);
//    R_set_altrep_Serialized_state_method(cls, mmap_Serialized_state);
//    R_set_altrep_Inspect_method(cls, mmap_Inspect);*/
//    R_set_altrep_Length_method(cls, monetdb_altrep_length);
//
//    /* override ALTVEC methods */
//    R_set_altvec_Dataptr_method(cls, monetdb_altrep_dataptr);
//   // R_set_altvec_Dataptr_or_null_method(cls, mmap_Dataptr_or_null);
//
//    /* override ALTREAL methods */
//    R_set_altreal_Elt_method(cls, monetdb_altrep_elt_real);
// //   R_set_altreal_Get_region_method(cls, monetdb_altrep_region_real);
//}



static SEXP monetdb_r_altrep(BAT *b, SEXPTYPE target_type) {
    SEXP eptr = PROTECT(R_MakeExternalPtr(b, R_NilValue, R_NilValue));
    R_altrep_class_t class;
    switch(target_type) {
    case INTSXP:
	class = bat_integer_class;
	break;
//    case REALSXP:
//	class = bat_real_class;
//	break;
    default: error("altrep for %s not supported yet", type2char(target_type));
    }
    SEXP ans = R_new_altrep(class, eptr, R_NilValue);
	MARK_NOT_MUTABLE(ans);
    UNPROTECT(1);
    return ans;
}
