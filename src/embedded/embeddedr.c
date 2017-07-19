#include "monetdb_config.h"

#ifdef HAVE_EMBEDDED_R
#include "embeddedr.h"
#include "R_ext/Random.h"
#include "R_ext/Rallocators.h"
#include <R_ext/Rdynload.h>
#include <R_ext/Connections.h>
#include <R_ext/Parse.h>

#include <Rdefines.h>
#include <Rinternals.h>

#include "monet_options.h"
#include "mal.h"
#include "mmath.h"
#include "mal_client.h"
#include "mal_linker.h"
#include "sql_scenario.h"
#include "gdk_utils.h"

#include "locale.h"


/* we need the BAT-SEXP-BAT conversion in two places, here and in RAPI */
#include "converters.c.h"

int embedded_r_rand(void) {
	int ret;
	ret = (int) (unif_rand() * RAND_MAX);
	return ret;
}

static SEXP monetdb_error_R(char* err) {
	SEXP retChr = NULL, retVec = NA_STRING;
	if (!err) {
		return retVec;
	}
	PROTECT(retChr = RSTR(err));
	if (retChr) {
		retVec = ScalarString(retChr);
	}
	UNPROTECT(1);
	return retVec;
}

static char* monetdb_progress_boxchar = "#";
static char* monetdb_progress_barchar = "_";
static size_t monetdb_progress_width = 0;


static void printf_str_repeat(char* str, size_t n) {
	size_t plen = strlen(str), i;
	char *buf = malloc(n * plen + 1);
	if (!buf) {
		return;
	}
	for (i = 0; i < n; i++) {
		memcpy(buf + plen * i, str, plen);
	}
	buf[n * plen] = '\0';
	REprintf("%s", buf);
	free(buf);
}

static int monetdb_progress_R(void* conn, void* data, size_t num_statements, size_t num_completed_statement, float percentage_done) {
	(void) conn;
	(void) data;
	(void) num_statements;
	(void) num_completed_statement;
	size_t barwidth = monetdb_progress_width - 7;
	size_t bars = (size_t) round(barwidth * percentage_done);

	if (!data) {
		return 0;
	}
	long ts = *((long*) data);
	if (ts <= 0) {
		*((long*) data) = GDKusec();
		return 0;
	}
	if ((GDKusec() - ts) < 500000) {
		return 0;
	}
	printf_str_repeat("\b", monetdb_progress_width);
	if (num_completed_statement >= num_statements) {
		printf_str_repeat(" ", monetdb_progress_width);
		printf_str_repeat("\b", monetdb_progress_width);
		return 0;
	}

	printf_str_repeat(monetdb_progress_boxchar, bars);
	printf_str_repeat(monetdb_progress_barchar, barwidth - bars);
	REprintf(" %3i%% ", (int) (percentage_done*100));
	return 0;
}



SEXP monetdb_query_R(SEXP connsexp, SEXP querysexp, SEXP executesexp, SEXP resultconvertsexp, SEXP progressbarsexp) {
	res_table* output = NULL;
	long affected_rows = 0, prepare_id = 0;
	char* err = NULL;
	void* connptr = R_ExternalPtrAddr(connsexp);
	GetRNGstate();
	monetdb_unregister_progress(connptr);
	if (LOGICAL(progressbarsexp)[0]) {
		monetdb_progress_width = Rf_GetOptionWidth();
		if (monetdb_progress_width < 20) {
			monetdb_progress_width = 80;
		}
		void* tsdata = malloc(sizeof(long));
		if (!tsdata) {
			return monetdb_error_R("Memory allocation failed");
		}
		monetdb_register_progress(connptr, monetdb_progress_R, tsdata);
	}
	err = monetdb_query(connptr,
			(char*)CHAR(STRING_ELT(querysexp, 0)), LOGICAL(executesexp)[0], (void**)&output, &affected_rows, &prepare_id);
	if (err) { // there was an error
		PutRNGstate();
		return monetdb_error_R(err);
	}

	if (output && output->nr_cols > 0) {
		int i = 0, ncols = output->nr_cols;
		ssize_t nrows = -1;
		SEXP retlist = NULL, names = NULL;
		PROTECT(retlist = allocVector(VECSXP, ncols));
		if (!retlist) {
			UNPROTECT(1);
			return monetdb_error_R("Memory allocation failed");
		}
		PROTECT(names = NEW_STRING(ncols));
		if (!names) {
			UNPROTECT(2);
			return monetdb_error_R("Memory allocation failed");
		}

		for (i = 0; i < ncols; i++) {
			BAT* b = BATdescriptor(output->cols[i].b);
			SEXP varvalue = NULL;
			SEXP varname = PROTECT(RSTR(output->cols[i].name));
			int unfix = 1;
			if (!varname) {
				UNPROTECT(i * 2 + 3);
				return monetdb_error_R("Memory allocation failed");
			}
			if (nrows < 0) {
				nrows = BATcount(b);
			}
			if (!LOGICAL(resultconvertsexp)[0]) {
				BATsetcount(b, 0); // hehe
			}
			if (!(varvalue = bat_to_sexp(b, &output->cols[i].type, &unfix))) {
				UNPROTECT(i * 2 + 4);
				PutRNGstate();
				return monetdb_error_R("Conversion error");
			}
			SET_VECTOR_ELT(retlist, i, varvalue);
			SET_STRING_ELT(names, i, varname);
			if (unfix) {
				BBPunfix(b->batCacheid);
			}
		}
		SET_ATTR(retlist, install("__rows"), Rf_ScalarReal(nrows));
		if (prepare_id > 0) {
			SET_ATTR(retlist, install("__prepare"), Rf_ScalarReal(prepare_id));
		}

		monetdb_cleanup_result(R_ExternalPtrAddr(connsexp), output);
		SET_NAMES(retlist, names);
		UNPROTECT(ncols * 2 + 2);
		PutRNGstate();
		return retlist;
	}
	PutRNGstate();
	return ScalarReal(affected_rows);
}

SEXP monetdb_startup_R(SEXP dbdirsexp, SEXP silentsexp, SEXP sequentialsexp) {
	char* res = NULL;

	char* locale = setlocale(LC_ALL, NULL);
	if (locale && (strstr(locale, "UTF-8") != 0 || strstr(locale, "UTF8") != 0 ||
			strstr(locale, "utf-8") != 0 || strstr(locale, "utf8") != 0)) {

		monetdb_progress_boxchar = "\xE2\x96\x88";
		monetdb_progress_barchar = "\xE2\x96\x91";
	}

	if (monetdb_is_initialized()) {
		error("MonetDBLite already initialized");
	}

	GetRNGstate();
	res = monetdb_startup((char*) CHAR(STRING_ELT(dbdirsexp, 0)),
		LOGICAL(silentsexp)[0], LOGICAL(sequentialsexp)[0]);
	PutRNGstate();
	if (!res) {
		return ScalarLogical(1);
	}  else {
		return monetdb_error_R(res);
	}
}


SEXP monetdb_append_R(SEXP connsexp, SEXP schemasexp, SEXP namesexp, SEXP tabledatasexp) {
	const char *schema = NULL, *name = NULL;
	str msg;
	int col_ct, i;
	BAT *b = NULL;
	append_data *ad = NULL;
	int t_column_count;
	char** t_column_names = NULL;
	int* t_column_types = NULL;

	if (!IS_CHARACTER(schemasexp) || !IS_CHARACTER(namesexp)) {
		return ScalarInteger(-1);
	}
	GetRNGstate();
	schema = CHAR(STRING_ELT(schemasexp, 0));
	name = CHAR(STRING_ELT(namesexp, 0));
	col_ct = LENGTH(tabledatasexp);

	msg = monetdb_get_columns(R_ExternalPtrAddr(connsexp), schema, name, &t_column_count, &t_column_names, &t_column_types);
	if (msg != MAL_SUCCEED)
		goto wrapup;

	if (t_column_count != col_ct) {
		msg = GDKstrdup("Unequal number of columns");
		goto wrapup;
	}

	ad = GDKmalloc(col_ct * sizeof(append_data));
	assert(ad);

	for (i = 0; i < col_ct; i++) {
		const char* df_colname = CHAR(STRING_ELT(GET_NAMES(tabledatasexp), i));
		SEXP ret_col = VECTOR_ELT(tabledatasexp, i);
		int bat_type = t_column_types[i];
		if (strcmp(df_colname, t_column_names[i]) != 0) {
			msg = createException(MAL, "embedded", "Append column name mismatch %s <> %s ", t_column_names[i], df_colname);
			goto wrapup;
		}
		b = sexp_to_bat(ret_col, bat_type);
		if (b == NULL) {
			msg = createException(MAL, "embedded", "Could not convert column %i %s to type %i ", i, t_column_names[i], bat_type);
			goto wrapup;
		}
		ad[i].colname = t_column_names[i];
		ad[i].batid = b->batCacheid;
	}

	msg = monetdb_append(R_ExternalPtrAddr(connsexp), schema, name, ad, col_ct);

	wrapup:
		PutRNGstate();
		if (ad) {
			GDKfree(ad);
		}
		if (t_column_names) {
			GDKfree(t_column_names);
		}
		if (t_column_types) {
			GDKfree(t_column_types);
		}
		if (!msg) {
			return ScalarLogical(1);
		}
		return monetdb_error_R(msg);
}

static SEXP monetdb_finalize_R(SEXP connsexp) {
	void* addr = R_ExternalPtrAddr(connsexp);
	if (R_ExternalPtrAddr(connsexp)) {
		warning("Connection is garbage-collected, use dbDisconnect() to avoid this.");
		monetdb_disconnect(addr);
		R_ClearExternalPtr(connsexp);
	}
	return R_NilValue;
}


SEXP monetdb_connect_R(void) {
	void* llconn = monetdb_connect();
	SEXP conn = NULL;
	if (!llconn) {
		error("Could not create connection.");
	}
	monetdb_register_progress(llconn, monetdb_progress_R, NULL);

	conn = PROTECT(R_MakeExternalPtr(llconn, R_NilValue, R_NilValue));
	R_RegisterCFinalizer(conn, (void (*)(SEXP)) monetdb_finalize_R);

	UNPROTECT(1);
	return conn;
}

SEXP monetdb_disconnect_R(SEXP connsexp) {
	void* addr = R_ExternalPtrAddr(connsexp);
	if (addr) {
		monetdb_disconnect(addr);
		R_ClearExternalPtr(connsexp);
	} else {
		warning("Connection was already disconnected.");
	}
	return R_NilValue;
}

SEXP monetdb_shutdown_R(void) {
	monetdb_shutdown();
	return R_NilValue;
}

// ehem
#include "mapisplit-r.h"

// R native routine registration
#define CALLDEF(name, n)  {#name, (DL_FUNC) &name, n}
static const R_CallMethodDef R_CallDef[] = {
   CALLDEF(monetdb_startup_R, 3),
   CALLDEF(monetdb_connect_R, 0),
   CALLDEF(monetdb_query_R, 5),
   CALLDEF(monetdb_append_R, 4),
   CALLDEF(monetdb_disconnect_R, 1),
   CALLDEF(monetdb_shutdown_R, 0),
   CALLDEF(mapi_split, 2),
   {NULL, NULL, 0}
};

void R_init_libmonetdb5(DllInfo *dll) {
	monetdb_lib_path = strdup(*((char**) dll)); // not evil at all
	R_registerRoutines(dll, NULL, R_CallDef, NULL, NULL);
	R_useDynamicSymbols(dll, FALSE);
}


#endif
