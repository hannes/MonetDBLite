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

#include "decompress.c"
#include "inlined_scripts.c"

#include <locale.h>

static int monetdb_embedded_initialized = 0;

FILE* embedded_stdout;
FILE* embedded_stderr;

void* monetdb_connect(void) {
	Client conn = NULL;
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
	((backend *) conn->sqlcontext)->mvc->session->auto_commit = 1;

	return conn;
}

void monetdb_disconnect(void* conn) {
	if (!MCvalid((Client) conn)) {
		return;
	}
	SQLexitClient((Client) conn);
	MCcloseClient((Client) conn);
}

#ifdef WIN32
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
	void* res = NULL;
	void* c;

// we probably don't want this.
//	if (setlocale(LC_CTYPE, "") == NULL) {
//		retval = GDKstrdup("setlocale() failed");
//		goto cleanup;
//	}
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
	setlen = mo_add_option(&set, setlen, opt_cmdline, "gdk_dbpath", dbdir);

	BBPaddfarm(dbdir, (1 << PERSISTENT) | (1 << TRANSIENT));
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


char* monetdb_query(void* conn, char* query, char execute, void** result, long* affected_rows, long* prepare_id) {
	str res = MAL_SUCCEED;
	int sres;
	Client c = (Client) conn;
	mvc* m;
	backend *b;
	char* qname = "somequery";
	if (!monetdb_is_initialized()) {
		return GDKstrdup("Embedded MonetDB is not started");
	}
	if (!MCvalid(c)) {
		return GDKstrdup("Invalid connection");
	}

	b = (backend *) c->sqlcontext;
	m = b->mvc;

	// TODO what about execute flag?! remove when result set is there for prepared stmts
	(void) execute;

	size_t query_len = strlen(query) + 3;
	char* nq = GDKmalloc(query_len);
	if (!nq) {
		return GDKstrdup( "WARNING: could not setup query stream.");
	}
	sprintf(nq, "%s\n;", query);

	buffer query_buf;
	stream* query_stream = buffer_rastream(&query_buf, qname);
	if (!query_stream) {
		return GDKstrdup( "WARNING: could not setup query stream.");
	}

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
	m->cache = 0;
	m->errstr[0] = '\0';

	if (result) {
		m->reply_size = -2; /* do not clean up result tables */
	}

	MSinitClientPrg(c, "user", qname);
	res = SQLparser(c);
	if (res != MAL_SUCCEED) {
		goto cleanup;
	}

	if (prepare_id && (m->emode & m_prepare)) {
		*prepare_id = b->q->id;
	}

	res = SQLengine(c);
	if (res != MAL_SUCCEED) {
		goto cleanup;
	}

	if (result) {
		*result = m->results;
		m->results = NULL;
		if (!*result && m->rowcnt >= 0 && affected_rows) {
			*affected_rows = m->rowcnt;
		}
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

char* monetdb_append(void* conn, const char* schema, const char* table, append_data *data, int ncols) {
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

void monetdb_cleanup_result(void* conn, void* output) {
	if (!monetdb_is_initialized()) {
		return;
	}
	if (!MCvalid((Client) conn)) {
		return;
	}
	res_tables_destroy((res_table*) output);
}

str monetdb_get_columns(void* conn, const char* schema_name, const char *table_name, int *column_count, char ***column_names, int **column_types) {
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


void monetdb_register_progress(void* conn, monetdb_progress_callback callback, void* data) {
	Client c = (Client) conn;
	if (!MCvalid(c)) {
		return;
	}

	c->progress_callback = callback;
	c->progress_data = data;
}

void monetdb_unregister_progress(void* conn) {
	Client c = (Client) conn;
	if (!MCvalid(c)) {
		return;
	}

	c->progress_callback = NULL;
	if(c->progress_data)
		free(c->progress_data);
	c->progress_data = NULL;
}



void monetdb_shutdown(void) {
	if (monetdb_embedded_initialized) {
		mserver_reset(0);
		fclose(embedded_stdout);
		monetdb_embedded_initialized = 0;
	}
}
