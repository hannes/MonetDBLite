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
	sqres = monetdb_query(c, "SELECT * FROM tables;", 1, &res, NULL);
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


char* monetdb_query(void* conn, char* query, char execute, void** result, long* affected_rows) {
	str res = MAL_SUCCEED;
	Client c = (Client) conn;
	mvc* m;
	if (!monetdb_is_initialized()) {
		return GDKstrdup("Embedded MonetDB is not started");
	}
	if (!MCvalid((Client) conn)) {
		return GDKstrdup("Invalid connection");
	}
	m = ((backend *) c->sqlcontext)->mvc;

	while (*query == ' ' || *query == '\t') query++;
	if (strncasecmp(query, "START", 5) == 0) { // START TRANSACTION
		m->session->auto_commit = 0;
		m->session->status = 0;
	}
	else if (strncasecmp(query, "ROLLBACK", 8) == 0) {
		m->session->status = -1;
		m->session->auto_commit = 1;
	}
	else if (strncasecmp(query, "COMMIT", 6) == 0) {
		m->session->auto_commit = 1;
	}
	else if (strncasecmp(query, "SHIBBOLEET", 10) == 0) {
		res = GDKstrdup("\x46\x6f\x72\x20\x69\x6d\x6d\x65\x64\x69\x61\x74\x65\x20\x74\x65\x63\x68\x6e\x69\x63\x61\x6c\x20\x73\x75\x70\x70\x6f\x72\x74\x20\x63\x61\x6c\x6c\x20\x2b\x33\x31\x20\x32\x30\x20\x35\x39\x32\x20\x34\x30\x33\x39");
	}
	else if (m->session->status < 0 && m->session->auto_commit == 0){
		res = GDKstrdup("Current transaction is aborted (please ROLLBACK)");
	} else {
		res = SQLstatementIntern(c, &query, "main", execute, 0, (res_table **) result);
		if (!*result && m->rowcnt >= 0 && affected_rows) {
			*affected_rows = m->rowcnt;
		}
	}
	SQLautocommit(c, m);
	return res;
}

char* monetdb_append(void* conn, const char* schema, const char* table, append_data *data, int ncols) {
	int i;
	str res = MAL_SUCCEED;
	Client c = (Client) conn;
	InstrPtr q;

	if (!monetdb_is_initialized()) {
		return GDKstrdup("Embedded MonetDB is not started");
	}
	if(table == NULL || data == NULL || ncols < 1) {
		return GDKstrdup("Invalid parameters");
	}
	if (!MCvalid((Client) conn)) {
		return GDKstrdup("Invalid connection");
	}

	backend *be = ((backend *) c->sqlcontext);
	if (!be->mvc->session->active) mvc_trans(be->mvc);

	MSinitClientPrg(c, "user", "monetdb_append");
	be->mb = copyMalBlk(c->curprg->def);
	q = newStmt(be->mb, sqlRef, mvcRef);
	be->mvc_var = getDestVar(q);

	for (i = 0; i < ncols; i++) {
		append_data ad = data[i];
		ValRecord v;
		v.vtype = TYPE_bat;
		v.val.bval = ad.batid;
		q = newStmt(be->mb, sqlRef, appendRef);
		q = pushArgument(be->mb, q, be->mvc_var);

		getArg(q, 0) = be->mvc_var = newTmpVariable(be->mb, TYPE_int);
		q = pushStr(be->mb, q, schema);
		q = pushStr(be->mb, q, table);
		q = pushStr(be->mb, q, ad.colname);
		q = pushValue(be->mb, q, &v);
	}
	pushEndInstruction(be->mb);
	res = optimizeMALBlock(c, be->mb);
	if (res != MAL_SUCCEED) {
		return res;
	}
	res = runMAL(c, be->mb, 0, 0);
	freeMalBlk(be->mb);

	if (res == MAL_SUCCEED) {
		sqlcleanup(be->mvc, 0);
	}

	return res;
}

void  monetdb_cleanup_result(void* conn, void* output) {
	(void) conn; // not needing conn here (but perhaps someday)
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

	if ((msg = getSQLContext(c, NULL, &m, NULL)) != NULL)
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

void monetdb_shutdown(void) {
	if (monetdb_embedded_initialized) {
		mserver_reset(0);
		fclose(embedded_stdout);
		monetdb_embedded_initialized = 0;
	}
}
