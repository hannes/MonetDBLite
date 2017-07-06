/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2017 MonetDB B.V.
 */

/*
 * H. Muehleisen, M. Raasveldt, Pedro Ferreira
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
#include "sql_execute.h"
#include "sql.h"
#include "sql_mvc.h"
#include "res_table.h"
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

char* monetdb_connect(Client* conn) {
	str retval = MAL_SUCCEED;
	if (!monetdb_embedded_initialized) {
		retval = GDKstrdup("The embedded database is not initialized!");
	}
	*conn = MCforkClient(&mal_clients[0]);
	if (!MCvalid(*conn)) {
		retval = GDKstrdup("The client fork failed!");
	}
	retval = SQLinitClient(*conn);
	if(!retval) {
		Client cc = *conn;
		((backend *) cc->sqlcontext)->mvc->session->auto_commit = 1;
	}
	return retval;
}

void monetdb_disconnect(Client conn) {
	if (!MCvalid(conn)) {
		return;
	}
	SQLexitClient(conn);
	MCcloseClient(conn);
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
	Client conn;

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

	why_you_use_global_variables_without_locks();

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
	retval = monetdb_connect(&conn);
	if (retval != MAL_SUCCEED) {
		monetdb_embedded_initialized = false;
		retval = GDKstrdup("Failed to initialize client");
		goto cleanup;
	}
	GDKfataljumpenable = 0;

	// we do not want to jump after this point, since we cannot do so between threads
	// sanity check, run a SQL query
	sqres = monetdb_query(conn, "SELECT * FROM tables;", 1, &res, NULL, NULL, NULL, NULL);
	if (sqres != NULL) {
		monetdb_embedded_initialized = false;
		retval = sqres;
		goto cleanup;
	}
	monetdb_cleanup_result(conn, res);
	monetdb_disconnect(conn);
	cleanup:
	mo_free_options(set, setlen);
	return retval;
}

int monetdb_is_initialized(void) {
	return monetdb_embedded_initialized > 0;
}

char* monetdb_query(Client c, char* query, char execute, void** result, int* query_type, lng* last_id, lng* affected_rows, lng* prepare_id) {
	str res = MAL_SUCCEED;
	int sres;
	mvc* m;
	backend *b;
	char* qname = "somequery", *nq;
	size_t query_len;
	buffer query_buf;
	stream* query_stream;

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

	query_len = strlen(query) + 3;
	nq = GDKmalloc(query_len);
	if (!nq) {
		return GDKstrdup( "WARNING: could not setup query stream.");
	}
	sprintf(nq, "%s\n;", query);

	query_stream = buffer_rastream(&query_buf, qname);
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
	m->cache = DEFAULT_CACHESIZE;

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
	}
	if(query_type) {
		if (m->emode == m_execute) {
			*query_type = (*result) ? Q_TABLE: Q_UPDATE; //for JDBC
		} else if (m->emode & m_prepare) {
			*query_type = Q_PREPARE;
		} else {
			*query_type = m->type;
		}
	}
	if(last_id) {
		*last_id = m->last_id;
	}
	if(affected_rows) {
		*affected_rows = m->rowcnt;
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

char* monetdb_append(Client c, const char* schema, const char* table, append_data *data, int ncols) {
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
		list *exps, *args, *types;
		sql_schema *s;
		sql_table *t;
		sql_subfunc *f;

		if(!m->sa)
			m->sa = sa_create();
		if(!m->sa)
			return GDKstrdup("Ups not enough memory to allocate the buffer!");

		exps = sa_list(m->sa);
		args = sa_list(m->sa);
		types = sa_list(m->sa);
		s = mvc_bind_schema(m, schema);
		t = mvc_bind_table(m, s, table);
		f = sql_find_func(m->sa, mvc_bind_schema(m, "sys"), "append", 1, F_UNION, NULL);

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

void  monetdb_cleanup_result(Client conn, void* output) { //Don't forget to set to null
	mvc* m;
	if (!monetdb_is_initialized()) {
		return;
	}
	if (MCvalid((Client) conn)) {
		m = ((backend *) conn->sqlcontext)->mvc;
		m->results = NULL;
		res_tables_destroy((res_table*) output);
	}
}

str monetdb_get_columns(Client conn, const char* schema_name, const char *table_name, int *column_count, char ***column_names, int **column_types) {
	mvc *m;
	sql_schema *s;
	sql_table *t;
	char *msg = MAL_SUCCEED;
	int columns;
	node *n;
	sql_column *col;

	assert(column_count != NULL && column_names != NULL && column_types != NULL);

	if ((msg = getSQLContext(conn, NULL, &m, NULL)) != MAL_SUCCEED)
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
		col = n->data;
		(*column_names)[col->colnr] = col->base.name;
		(*column_types)[col->colnr] = col->type.type->localtype;
	}

	return msg;
}

void monetdb_shutdown(void) {
	if (monetdb_embedded_initialized) {
		mserver_reset(0);
		fclose(embedded_stdout);
		monetdb_embedded_initialized = 0;
	}
}

char* monetdb_find_table(Client conn, sql_table** table, const char* schema_name, const char* table_name) {
	mvc *m;
	sql_schema *s;
	char *msg = MAL_SUCCEED;

	if ((msg = getSQLContext(conn, NULL, &m, NULL)) != NULL)
		return msg;
	s = mvc_bind_schema(m, schema_name);
	if (s == NULL)
		return createException(MAL, "embedded", "Missing schema!");
	*table = mvc_bind_table(m, s, table_name);
	if ((*table) == NULL)
		return createException(MAL, "embedded", "Could not find table %s", table_name);
	return NULL;
}

char* sendAutoCommitCommand(Client conn, int flag, int* result) {
	mvc* m = ((backend *) conn->sqlcontext)->mvc;
	char *msg = MAL_SUCCEED;
	int commit = (!m->session->auto_commit && flag);

	m->session->auto_commit = (flag) != 0;
	m->session->ac_on_commit = m->session->auto_commit;
	*result = m->session->auto_commit;
	if (m->session->active) {
		if (commit && mvc_commit(m, 0, NULL) < 0) {
			msg = createException(MAL, "embedded", "auto_commit (commit) failed");
		} else if (!commit && mvc_rollback(m, 0, NULL) < 0) {
			msg = createException(MAL, "embedded", "auto_commit (rollback) failed");
		}
	}
	SQLautocommit(conn, m);

	return msg;
}

void sendReleaseCommand(Client conn, int commandId) {
	mvc* m = ((backend *) conn->sqlcontext)->mvc;

	if(m->qc) {
		cq *q = qc_find(m->qc, commandId);
		if (q) {
			qc_delete(m->qc, q);
		}
	}
}

void sendCloseCommand(Client conn, int tableID) {
	mvc* m = ((backend *) conn->sqlcontext)->mvc;
	res_table *t = res_tables_find(m->results, tableID);

	if (t) {
		m->results = res_tables_remove(m->results, t);
	}
}

void sendReplySizeCommand(Client conn, lng size) {
	mvc* m = ((backend *) conn->sqlcontext)->mvc;

	if(size >= -1) {
		m->reply_size = size;
	}
}

int getAutocommitFlag(Client conn) {
	mvc* m = ((backend *) conn->sqlcontext)->mvc;
	return m->session->auto_commit;
}

void setAutocommitFlag(Client conn, int autoCommit) {
	mvc* m = ((backend *) conn->sqlcontext)->mvc;

	m->session->auto_commit = autoCommit;
	if(autoCommit == 0) {
		m->session->status = 0;
	}
	SQLautocommit(conn, m);
}

int setMonetDB5LibraryPathEmbedded(const char* path) {
	return setMonetDB5LibraryPath(path);
}

void freeMonetDB5LibraryPathEmbedded(void) {
	freeMonetDB5LibraryPath();
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
