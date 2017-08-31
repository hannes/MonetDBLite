/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2015 MonetDB B.V.
 */

/*
 * H. Muehleisen, M. Raasveldt
 * Inverse RAPI
 */

#include "embedded.h"

#include "monetdb_config.h"
#include "monet_options.h"
#include "mal.h"
#include "mal_client.h"
#include "mal_builder.h"

#include "mal_linker.h"
#include "sql_scenario.h"
#include "gdk_utils.h"
#include "sql_scenario.h"
#include "sql_execute.h"
#include "sql.h"
#include "sql_mvc.h"
#include "res_table.h"
#include "sql_scenario.h"
#include "opt_prelude.h"
#include "rel_semantic.h"
#include "sql_gencode.h"
#include "sql_optimizer.h"
#include "rel_exp.h"
#include "rel_rel.h"
#include "rel_updates.h"

#include "mtime.h"
#include "blob.h"

#include "decompress.c"
#include "inlined_scripts.c"

#include <locale.h>

static int monetdb_embedded_initialized = 0;

FILE* embedded_stdout;
FILE* embedded_stderr;

static void monetdb_destroy_column(monetdb_column* column);

typedef struct {
	monetdb_result res;
	res_table *monetdb_resultset;
	monetdb_column **converted_columns;
} monetdb_result_internal;

monetdb_connection monetdb_connect(void) {
	Client conn = NULL;
	str msg;
	mvc *m;
	if (!monetdb_embedded_initialized) {
		return NULL;
	}
	conn = MCforkClient(&mal_clients[0]);
	if (!MCvalid((Client) conn)) {
		return NULL;
	}
	if (SQLinitClient(conn) != MAL_SUCCEED) {
		return NULL;
	}
	if ((msg = getSQLContext(conn, NULL, &m, NULL)) != MAL_SUCCEED)
		return msg;
	m->session->auto_commit = 1;

	return conn;
}

void monetdb_disconnect(monetdb_connection conn) {
	if (!MCvalid((Client) conn)) {
		return;
	}
	SQLexitClient((Client) conn);
	MCcloseClient((Client) conn);
}

#ifdef NATIVE_WIN32
#define NULLFILE "nul"
#else
#define NULLFILE "/dev/null"
#endif

#define EMBEDDED_SCRIPT_SIZE_MAX 10485760 // 10 MB

char* monetdb_startup(char* dbdir, char silent, char sequential) {
	opt *set = NULL;
	volatile int setlen = 0;
	str retval = MAL_SUCCEED;
	char* sqres = NULL;
	monetdb_result* res = NULL;
	void* c;

	GDKfataljumpenable = 1;
	if(setjmp(GDKfataljump) != 0) {
		retval = GDKfatalmsg;
		// we will get here if GDKfatal was called.
		if (retval == NULL) {
			retval = GDKstrdup("GDKfatal() with unspecified error?");
		}
		goto cleanup;
	}

	if (monetdb_embedded_initialized) goto cleanup;

	// decompress scripts
	if (!mal_init_inline) {
		mz_ulong decompress_len_mal = EMBEDDED_SCRIPT_SIZE_MAX;
		mz_ulong decompress_len_sql = EMBEDDED_SCRIPT_SIZE_MAX;
		mal_init_inline = GDKzalloc(decompress_len_mal);
		createdb_inline = GDKzalloc(decompress_len_sql);
		if (!mal_init_inline || !createdb_inline) {
			retval = GDKstrdup("Memory allocation failed");
			goto cleanup;
		}
		if (mz_uncompress(mal_init_inline, &decompress_len_mal, mal_init_inline_arr, sizeof(mal_init_inline_arr)) != 0 ||
			mz_uncompress(createdb_inline, &decompress_len_sql, createdb_inline_arr, sizeof(createdb_inline_arr)) != 0) {
			retval = GDKstrdup("Script decompression failed");
			goto cleanup;
		}
	}

	embedded_stdout = fopen(NULLFILE, "w");
	embedded_stderr = embedded_stdout;

	setlen = mo_builtin_settings(&set);
	if (dbdir) {
		setlen = mo_add_option(&set, setlen, opt_cmdline, "gdk_dbpath", dbdir);
		BBPaddfarm(dbdir, (1 << PERSISTENT) | (1 << TRANSIENT));
	}
	if (GDKinit(set, setlen) == 0) {
		retval = GDKstrdup("GDKinit() failed");
		goto cleanup;
	}
	GDKsetenv("monet_mod_path", "");
	GDKsetenv("max_clients", "256");

	GDKsetenv("mapi_disable", "true");
	if (sequential) {
		GDKsetenv("sql_optimizer", "sequential_pipe");
	}

	if (silent) {
		close_stream((stream*) THRdata[0]);
		THRdata[0] = stream_blackhole_create();
	}

	if (mal_init() != 0) {
		retval = GDKstrdup("mal_init() failed");
		goto cleanup;
	}
	if (!SQLisInitialized()) {
		retval = GDKstrdup("SQL initialization failed");
		goto cleanup;
	}

	if (silent) mal_clients[0].fdout = THRdata[0];

	monetdb_embedded_initialized = true;
	c = monetdb_connect();
	if (c == NULL) {
		monetdb_embedded_initialized = false;
		retval = GDKstrdup("Failed to initialize client");
		goto cleanup;
	}
	GDKfataljumpenable = 0;

	// we do not want to jump after this point, since we cannot do so between threads
	// sanity check, run a SQL query
	sqres = monetdb_query(c, "SELECT * FROM tables;", 1, &res, NULL, NULL);
	if (sqres != NULL) {
		monetdb_embedded_initialized = false;
		retval = sqres;
		goto cleanup;
	}
	monetdb_cleanup_result(c, res);
	monetdb_disconnect(c);


cleanup:
	mo_free_options(set, setlen);
	return retval;
}

int monetdb_is_initialized(void) {
	return monetdb_embedded_initialized > 0;
}


char* monetdb_query(monetdb_connection conn, char* query, char execute, monetdb_result** result, long* affected_rows, long* prepare_id) {
	str res = MAL_SUCCEED;
	int sres;
	Client c = (Client) conn;
	mvc* m;
	backend *b;
	char* qname = "somequery";
	size_t query_len = strlen(query) + 3;
	char* nq;
	buffer query_buf;
	stream *query_stream;

	// TODO what about execute flag?! remove when result set is there for prepared stmts
	(void) execute;

	if (!monetdb_is_initialized()) {
		return GDKstrdup("Embedded MonetDB is not started");
	}
	if (!MCvalid(c)) {
		return GDKstrdup("Invalid connection");
	}

	b = (backend *) c->sqlcontext;
	m = b->mvc;

	query_stream = buffer_rastream(&query_buf, qname);
	if (!query_stream) {
		return GDKstrdup( "WARNING: could not setup query stream.");
	}

	nq = GDKmalloc(query_len);
	if (!nq) {
		return GDKstrdup( "WARNING: could not setup query stream.");
	}
	sprintf(nq, "%s\n;", query);

	query_buf.pos = 0;
	query_buf.len = query_len;
	query_buf.buf = nq;

	c->fdin = bstream_create(query_stream, query_len);
	if (!c->fdin) {
		close_stream(query_stream);
		return GDKstrdup( "WARNING: could not setup query stream.");
	}
	bstream_next(c->fdin);

	b->language = 'S';
	m->scanner.mode = LINE_N;
	m->scanner.rs = c->fdin;
	b->output_format = OFMT_NONE;
	m->user_id = m->role_id = USER_MONETDB;
	m->errstr[0] = '\0';

	if (result) {
		m->reply_size = -2; /* do not clean up result tables */
	}

	MSinitClientPrg(c, "user", qname);
	res = SQLparser(c);
	if (res != MAL_SUCCEED) {
		goto cleanup;
	}

	if (prepare_id && m->emode == m_prepare) {
		*prepare_id = b->q->id;
	}

	res = SQLengine(c);
	if (res != MAL_SUCCEED) {
		goto cleanup;
	}

	if (!m->results && m->rowcnt >= 0 && affected_rows) {
		*affected_rows = m->rowcnt;
	}


	if (result && m->results) {
		monetdb_result_internal *res_internal = GDKzalloc(sizeof(monetdb_result_internal));
		if (!res_internal) {
			res = GDKstrdup("Malloc fail");
			goto cleanup;
		}
		res_internal->res.ncols = m->results->nr_cols;
		if (m->results->nr_cols > 0) {
			res_internal->res.nrows = BATcount(BATdescriptor(m->results->cols[0].b));
			BBPunfix(m->results->cols[0].b);
		}
		res_internal->monetdb_resultset = m->results;
		res_internal->converted_columns = GDKzalloc(sizeof(monetdb_column*) * res_internal->res.ncols);
		if (!res_internal->converted_columns) {
			res = GDKstrdup("Malloc fail");
			GDKfree(res_internal);
			goto cleanup;
		}
		*result  = (monetdb_result*) res_internal;

		// tODO: check alloc
		m->results = NULL;
	}

cleanup:

	GDKfree(nq);
	MSresetInstructions(c->curprg->def, 1);
	bstream_destroy(c->fdin);
	c->fdin = NULL;

	sres = SQLautocommit(c, m);
	if (!sres && !res) {
		return GDKstrdup("Cannot COMMIT/ROLLBACK without a valid transaction.");
	}
	return res;
}

char* monetdb_append(monetdb_connection conn, const char* schema, const char* table, append_data *data, int ncols) {
	Client c = (Client) conn;
	mvc* m;

	int i;
	str res = MAL_SUCCEED;

	if (!monetdb_is_initialized()) {
		return GDKstrdup("Embedded MonetDB is not started");
	}
	if(table == NULL || data == NULL || ncols < 1) {
		return GDKstrdup("Invalid parameters");
	}
	if (!MCvalid(c)) {
		return GDKstrdup("Invalid connection");
	}
	if ((res = getSQLContext(c, NULL, &m, NULL)) != MAL_SUCCEED) {
		return res;
	}
	if (m->session->status < 0 && m->session->auto_commit == 0){
		return GDKstrdup("Current transaction is aborted (please ROLLBACK)");
	}

	SQLtrans(m);
	if (!m->sa) { // unclear why this is required
		m->sa = sa_create();
	}
	{
		sql_rel *rel;
		node *n;

		list *exps = sa_list(m->sa), *args = sa_list(m->sa), *types = sa_list(m->sa);
		sql_schema *s = mvc_bind_schema(m, schema);
		sql_table *t = mvc_bind_table(m, s, table);
		sql_subfunc *f = sql_find_func(m->sa, mvc_bind_schema(m, "sys"), "append", 1, F_UNION, NULL);

		if (!t) {
			return GDKstrdup("Can't find table.");
		}
		if (ncols != list_length(t->columns.set)) {
			return GDKstrdup("Incorrect number of columns.");
		}
		for (i = 0, n = t->columns.set->h; i < ncols && n; i++, n = n->next) {
			sql_column *c = n->data;
			append(args, exp_atom_lng(m->sa, data[i].batid));
			append(exps, exp_column(m->sa, t->base.name, c->base.name, &c->type, CARD_MULTI, c->null, 0));
			append(types, &c->type);
		}

		f->res = types;
		rel = rel_insert(m, rel_basetable(m, t, t->base.name), rel_table_func(m->sa, NULL, exp_op(m->sa,  args, f), exps, 1));
		m->scanner.rs = NULL;
		m->errstr[0] = '\0';

		if (rel && backend_dumpstmt((backend *) c->sqlcontext, c->curprg->def, rel, 1, 1, "append") < 0) {
			return GDKstrdup("Append plan generation failure");
		}
		if ((res = SQLoptimizeQuery(c, c->curprg->def)) != MAL_SUCCEED ||
				c->curprg->def->errors || (res = SQLengine(c)) != MAL_SUCCEED) {
			return(res);
		}
	}
	SQLautocommit(c, m);
	return NULL;
}

void monetdb_cleanup_result(monetdb_connection conn, monetdb_result* result) {
	monetdb_result_internal* res = (monetdb_result_internal *) result;

	if (!monetdb_is_initialized()) {
		return;
	}
	if (!MCvalid((Client) conn)) {
		return;
	}
	if (!result) {
		return;
	}
	if (res->monetdb_resultset) {
		res_tables_destroy(res->monetdb_resultset);
	}
	if (res->converted_columns) {
		size_t i;
		for (i = 0; i < res->res.ncols; i++) {
			monetdb_destroy_column(res->converted_columns[i]);
		}
	}
	GDKfree(res->converted_columns);
	GDKfree(res);

}

str monetdb_get_columns(monetdb_connection conn, const char* schema_name, const char *table_name, int *column_count, char ***column_names, int **column_types) {
	mvc *m;
	sql_schema *s;
	sql_table *t;
	char *msg = MAL_SUCCEED;
	int columns;
	node *n;
	Client c = (Client) conn;

	assert(column_count != NULL && column_names != NULL && column_types != NULL);

	if ((msg = getSQLContext(c, NULL, &m, NULL)) != MAL_SUCCEED)
		return msg;

	s = mvc_bind_schema(m, schema_name);
	if (s == NULL)
		return createException(MAL, "embedded", "Missing schema!");
	t = mvc_bind_table(m, s, table_name);
	if (t == NULL)
		return createException(MAL, "embedded", "Could not find table %s", table_name);

	columns = t->columns.set->cnt;
	*column_count = columns;
	*column_names = GDKzalloc(sizeof(char*) * columns);
	*column_types = GDKzalloc(sizeof(int) * columns);

	if (*column_names == NULL || *column_types == NULL) {
		return MAL_MALLOC_FAIL;
	}

	for (n = t->columns.set->h; n; n = n->next) {
		sql_column *c = n->data;
		(*column_names)[c->colnr] = c->base.name;
		(*column_types)[c->colnr] = c->type.type->localtype;
	}

	return msg;
}


void monetdb_register_progress(monetdb_connection conn, monetdb_progress_callback callback, void* data) {
	Client c = (Client) conn;
	if (!MCvalid(c)) {
		return;
	}
	MT_lock_set(&c->progress_lock);
	c->progress_callback = callback;
	c->progress_data = data;
	MT_lock_unset(&c->progress_lock);

}

void monetdb_unregister_progress(monetdb_connection conn) {
	Client c = (Client) conn;
	if (!MCvalid(c)) {
		return;
	}
	MT_lock_set(&c->progress_lock);
	c->progress_callback = NULL;
	if(c->progress_data)
		free(c->progress_data);
	c->progress_data = NULL;
	MT_lock_unset(&c->progress_lock);
}

void monetdb_shutdown(void) {
	if (monetdb_embedded_initialized) {
		SQLepilogue(NULL); // just do it here, i don't trust mserver_reset to call this
		mserver_reset(0);
		fclose(embedded_stdout);
		monetdb_embedded_initialized = 0;
	}
}


#define GENERATE_BASE_HEADERS(type, tpename)                                   \
	static int tpename##_is_null(type value)

#define GENERATE_BASE_FUNCTIONS(tpe, tpename, mname)                                  \
	GENERATE_BASE_HEADERS(tpe, tpename);                                       \
	static int tpename##_is_null(tpe value) { return value == mname##_nil; }

GENERATE_BASE_FUNCTIONS(int8_t, int8_t, bte)
GENERATE_BASE_FUNCTIONS(int16_t, int16_t, sht)
GENERATE_BASE_FUNCTIONS(int32_t, int32_t, int)
GENERATE_BASE_FUNCTIONS(int64_t, int64_t, lng)
GENERATE_BASE_FUNCTIONS(size_t, size_t, oid)

GENERATE_BASE_FUNCTIONS(float, float, flt)
GENERATE_BASE_FUNCTIONS(double, double, dbl)

GENERATE_BASE_HEADERS(char*, str);
GENERATE_BASE_HEADERS(monetdb_data_blob, blob);

GENERATE_BASE_HEADERS(monetdb_data_date, date);
GENERATE_BASE_HEADERS(monetdb_data_time, time);
GENERATE_BASE_HEADERS(monetdb_data_timestamp, timestamp);


#define GENERATE_BAT_INPUT_BASE(tpe)                                           \
	monetdb_column_##tpe *bat_data =                                  \
		GDKzalloc(sizeof(monetdb_column_##tpe));                      \
	if (!bat_data) {                                                           \
		msg = GDKstrdup("Malloc failure!");                                    \
		goto wrapup;                                                           \
	}                                                                          \
	bat_data->type = monetdb_##tpe;                                            \
	bat_data->is_null = tpe##_is_null;                                         \
	bat_data->scale = pow(10, sqltpe->scale);                                  \
	column_result = (monetdb_column*) bat_data;

#define GENERATE_BAT_INPUT(b, tpe, mtype)                                             \
	{                                                                          \
		GENERATE_BAT_INPUT_BASE(tpe);                                          \
		bat_data->count = BATcount(b);                                         \
		bat_data->null_value = mtype##_nil;                                    \
		bat_data->data = GDKmalloc(                                            \
			bat_data->count * sizeof(bat_data->null_value));                   \
		if (!bat_data->data) {                                                 \
			msg = GDKstrdup("Malloc failure!");                                \
			goto wrapup;                                                       \
		}                                                                      \
		if (b->tdense && !b->tnodense) {                                       \
			size_t it = 0;                                                     \
			tpe val = b->T.seq;                                                \
			/* bat is dense, materialize it */                                 \
			for (it = 0; it < bat_data->count; it++) {                         \
				bat_data->data[it] = val++;                                    \
			}                                                                  \
		} else {                                                               \
			/* bat is not dense, copy it */                                    \
			tpe* baseptr = (tpe *)Tloc(b, 0);                                  \
			memcpy(bat_data->data, baseptr,                                    \
				bat_data->count * sizeof(bat_data->null_value));               \
		}                                                                      \
	}


static void data_from_date(date d, monetdb_data_date *ptr);
static void data_from_time(daytime d, monetdb_data_time *ptr);
static void data_from_timestamp(timestamp d, monetdb_data_timestamp *ptr);

monetdb_column* monetdb_result_fetch(monetdb_result* res, size_t column_index) {
	BAT* b = NULL;
	int bat_type;
	str msg = NULL;
	monetdb_result_internal* result = (monetdb_result_internal*) res;
	sql_subtype* sqltpe = NULL;
	monetdb_column* column_result = NULL;
	size_t j = 0;
	if (column_index >= res->ncols) {
		msg = GDKstrdup("Index out of range!");
		goto wrapup;
	}
	// check if we have the column converted already
	if (result->converted_columns[column_index]) {
		return result->converted_columns[column_index];
	}
	// otherwise we have to convert the column
	b = BATdescriptor(result->monetdb_resultset->cols[column_index].b);
	if (!b) {
		msg = GDKstrdup("Malloc failure!");
		goto wrapup;
	}
	bat_type = b->ttype;
	sqltpe = &result->monetdb_resultset->cols[column_index].type;

	if (bat_type == TYPE_bit || bat_type == TYPE_bte) {
		GENERATE_BAT_INPUT(b, int8_t, bte);
	} else if (bat_type == TYPE_sht) {
		GENERATE_BAT_INPUT(b, int16_t, sht);
	} else if (bat_type == TYPE_int) {
		GENERATE_BAT_INPUT(b, int32_t, int);
	} else if (bat_type == TYPE_oid) {
		GENERATE_BAT_INPUT(b, size_t, oid);
	} else if (bat_type == TYPE_lng) {
		GENERATE_BAT_INPUT(b, int64_t, lng);
	} else if (bat_type == TYPE_flt) {
		GENERATE_BAT_INPUT(b, float, flt);
	} else if (bat_type == TYPE_dbl) {
		GENERATE_BAT_INPUT(b, double, dbl);
	} else if (bat_type == TYPE_str) {
		BATiter li;
		BUN p = 0, q = 0;
		GENERATE_BAT_INPUT_BASE(str);
		bat_data->count = BATcount(b);
		bat_data->data = GDKzalloc(sizeof(char *) * bat_data->count);
		bat_data->null_value = NULL;
		if (!bat_data->data) {
			msg = createException(MAL, "cudf.eval", MAL_MALLOC_FAIL);
			goto wrapup;
		}

		j = 0;
		li = bat_iterator(b);
		BATloop(b, p, q)
		{
			char *t = (char *)BUNtail(li, p);
			if (strcmp(t, str_nil) == 0) {
				bat_data->data[j] = NULL;
			} else {
				bat_data->data[j] = GDKstrdup(t);
				if (!bat_data->data[j]) {
					goto wrapup;
				}
			}
			j++;
		}
	} else if (bat_type == TYPE_date) {
		date *baseptr;
		GENERATE_BAT_INPUT_BASE(date);
		bat_data->count = BATcount(b);
		bat_data->data =
			GDKmalloc(sizeof(bat_data->null_value) * bat_data->count);
		if (!bat_data->data) {
			msg = GDKstrdup("Malloc failure!");
			goto wrapup;
		}

		baseptr = (date *)Tloc(b, 0);
		for (j = 0; j < bat_data->count; j++) {
			data_from_date(baseptr[j], bat_data->data + j);
		}
		data_from_date(date_nil, &bat_data->null_value);
	} else if (bat_type == TYPE_daytime) {
		daytime *baseptr;
		GENERATE_BAT_INPUT_BASE(time);
		bat_data->count = BATcount(b);
		bat_data->data =
			GDKmalloc(sizeof(bat_data->null_value) * bat_data->count);
		if (!bat_data->data) {
			msg = GDKstrdup("Malloc failure!");
			goto wrapup;
		}

		baseptr = (daytime *)Tloc(b, 0);
		for (j = 0; j < bat_data->count; j++) {
			data_from_time(baseptr[j], bat_data->data + j);
		}
		data_from_time(daytime_nil, &bat_data->null_value);
	} else if (bat_type == TYPE_timestamp) {
		timestamp *baseptr;
		GENERATE_BAT_INPUT_BASE(timestamp);
		bat_data->count = BATcount(b);
		bat_data->data =
			GDKmalloc(sizeof(bat_data->null_value) * bat_data->count);
		if (!bat_data->data) {
			msg = GDKstrdup("Malloc failure!");
			goto wrapup;
		}

		baseptr = (timestamp *)Tloc(b, 0);
		for (j = 0; j < bat_data->count; j++) {
			data_from_timestamp(baseptr[j], bat_data->data + j);
		}
		data_from_timestamp(*timestamp_nil, &bat_data->null_value);
	} else if (bat_type == TYPE_blob || bat_type == TYPE_sqlblob) {
		BATiter li;
		BUN p = 0, q = 0;
		size_t j;
		GENERATE_BAT_INPUT_BASE(blob);
		bat_data->count = BATcount(b);
		bat_data->data =
			GDKmalloc(sizeof(monetdb_data_blob) * bat_data->count);
		if (!bat_data->data) {
			msg = GDKstrdup("Malloc failure!");
			goto wrapup;
		}
		j = 0;

		li = bat_iterator(b);
		BATloop(b, p, q)
		{
			blob *t = (blob *)BUNtail(li, p);
			if (t->nitems == ~(size_t)0) {
				bat_data->data[j].size = 0;
				bat_data->data[j].data = NULL;
			} else {
				bat_data->data[j].size = t->nitems;
				bat_data->data[j].data = GDKmalloc(t->nitems);
				if (!bat_data->data[j].data) {
					msg = GDKstrdup("Malloc failure!");
					goto wrapup;
				}
				memcpy(bat_data->data[j].data, t->data, t->nitems);
			}
			j++;
		}
		bat_data->null_value.size = 0;
		bat_data->null_value.data = NULL;
	} else {
		// unsupported type: convert to string
		BATiter li;
		BUN p = 0, q = 0;
		GENERATE_BAT_INPUT_BASE(str);
		bat_data->count = BATcount(b);
		bat_data->null_value = NULL;
		bat_data->data = GDKzalloc(sizeof(char *) * bat_data->count);
		if (!bat_data->data) {
			msg = GDKstrdup("Malloc failure!");
			goto wrapup;
		}
		j = 0;

		li = bat_iterator(b);
		BATloop(b, p, q)
		{
			void *t = BUNtail(li, p);
			if (BATatoms[bat_type].atomCmp(
					t, BATatoms[bat_type].atomNull) == 0) {
				bat_data->data[j] = NULL;
			} else {
				char *result = NULL;
				int length = 0;
				if (BATatoms[bat_type].atomToStr(&result, &length, t) ==
					0) {
					msg = GDKstrdup("Failed to convert element to string");
					goto wrapup;
				}
				bat_data->data[j] = result;
			}
			j++;
		}
	}
	BBPunfix(b->batCacheid);
	result->converted_columns[column_index] = column_result;
	return result->converted_columns[column_index];
wrapup:
	if (b) {
		BBPunfix(b->batCacheid);
	}
	monetdb_destroy_column(column_result);
	if (msg) {
		// FIXME: show message somehow?
		GDKfree(msg);
	}
	return NULL;
}

void* monetdb_result_fetch_rawcol(monetdb_result* res, size_t column_index) {
	monetdb_result_internal* result = (monetdb_result_internal*) res;
	if (column_index >= res->ncols) // index out of range
		return NULL;
	return &(result->monetdb_resultset->cols[column_index]);
}

void data_from_date(date d, monetdb_data_date *ptr)
{
	int day, month, year;
	MTIMEfromdate(d, &day, &month, &year);
	ptr->day = day;
	ptr->month = month;
	ptr->year = year;
}

void data_from_time(daytime d, monetdb_data_time *ptr)
{
	int hour, min, sec, msec;
	MTIMEfromtime(d, &hour, &min, &sec, &msec);
	ptr->hours = hour;
	ptr->minutes = min;
	ptr->seconds = sec;
	ptr->ms = msec;
}

void data_from_timestamp(timestamp d, monetdb_data_timestamp *ptr)
{
	data_from_date(d.payload.p_days, &ptr->date);
	data_from_time(d.payload.p_msecs, &ptr->time);
}

static date date_from_data(monetdb_data_date *ptr)
{
	return MTIMEtodate(ptr->day, ptr->month, ptr->year);
}

static daytime time_from_data(monetdb_data_time *ptr)
{
	return MTIMEtotime(ptr->hours, ptr->minutes, ptr->seconds, ptr->ms);
}

static timestamp timestamp_from_data(monetdb_data_timestamp *ptr)
{
	timestamp d;
	d.payload.p_days = date_from_data(&ptr->date);
	d.payload.p_msecs = time_from_data(&ptr->time);
	return d;
}

int date_is_null(monetdb_data_date value)
{
	monetdb_data_date null_value;
	data_from_date(date_nil, &null_value);
	return value.year == null_value.year && value.month == null_value.month &&
		   value.day == null_value.day;
}

int time_is_null(monetdb_data_time value)
{
	monetdb_data_time null_value;
	data_from_time(daytime_nil, &null_value);
	return value.hours == null_value.hours &&
		   value.minutes == null_value.minutes &&
		   value.seconds == null_value.seconds && value.ms == null_value.ms;
}

int timestamp_is_null(monetdb_data_timestamp value)
{
	return ts_isnil(timestamp_from_data(&value));
}

int str_is_null(char *value) {
	return value == NULL;
}

int blob_is_null(monetdb_data_blob value) {
	return value.data == NULL;
}

void monetdb_destroy_column(monetdb_column* column) {
	size_t j;
	if (!column) {
		return;
	}

	if (column->type == monetdb_str) {
		// FIXME: clean up individual strings
		char** data = (char**)column->data;
		for(j = 0; j < column->count; j++) {
			if (data[j]) {
				GDKfree(data[j]);
			}
		}
	} else if (column->type == monetdb_blob) {
		monetdb_data_blob* data = (monetdb_data_blob*)column->data;
		for(j = 0; j < column->count; j++) {
			if (data[j].data) {
				GDKfree(data[j].data);
			}
		}
	}
	GDKfree(column->data);
	GDKfree(column);
}
