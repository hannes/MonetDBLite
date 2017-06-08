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
	sqres = monetdb_query(conn, "SELECT * FROM tables;", 1, &res);
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

char* monetdb_query(Client conn, char* query, char execute, void** result) {
	str res = MAL_SUCCEED;
	mvc* m;
	conn->querySpecialType = 0;
	conn->lastNumberOfRows = -2; //Keep consistence with the JDBC driver
	*result = NULL;
	if (!monetdb_is_initialized()) {
		return GDKstrdup("Embedded MonetDB is not started");
	}
	if (!MCvalid(conn)) {
		return GDKstrdup("Invalid connection");
	}
	m = ((backend *) conn->sqlcontext)->mvc;

	while (*query == ' ' || *query == '\t') query++;
	if (strncasecmp(query, "START", 5) == 0) { // START TRANSACTION
		m->session->auto_commit = 0;
		m->session->status = 0;
		conn->lastQueryType = Q_TRANS;
		conn->lastNumberOfRows = 0;
	} else if (strncasecmp(query, "ROLLBACK", 8) == 0 && strncasecmp(query + 8, " TO SAVEPOINT", 13) != 0) {
		m->session->status = -1;
		m->session->auto_commit = 1;
		conn->lastQueryType = Q_TRANS;
		conn->lastNumberOfRows = 0;
	} else if (strncasecmp(query, "COMMIT", 6) == 0) {
		if(m->session->auto_commit == 1) {
			res = GDKstrdup("COMMIT: not allowed in auto commit mode");
		} else {
			m->session->auto_commit = 1;
			conn->lastQueryType = Q_TRANS;
			conn->lastNumberOfRows = 0;
		}
	} else if (m->session->status < 0 && m->session->auto_commit == 0) {
		res = GDKstrdup("Current transaction is aborted (please ROLLBACK)");
	} else if(m->session->auto_commit == 1 && strncasecmp(query, "SAVEPOINT", 9) == 0) {
		res = GDKstrdup("SAVEPOINT: not allowed in auto commit mode");
	} else if (strncasecmp(query, "PREPARE", 7) == 0 || strncasecmp(query, "EXEC", 4) == 0) {
		conn->querySpecialType = 1;
		// prepared statements are VERY COMPLICATED indeed. First we use the SQLPreparedStatementParser to check
		// the query string and prepare the engine
		// Then we execute the query. It it's a PREPARE, we get the res_table*, and set the lastQueryType to Q_PREPARE
		// else (it's an EXEC) we set the output type depending if we have a res_table* or not (in a update we have not)
		res = SQLPreparedStatementParser(conn, &query, (res_table **) result);
		if(res == MAL_SUCCEED) {
			res = SQLengineIntern(conn, (backend *) conn->sqlcontext);
		}
		if(res == MAL_SUCCEED) {
			if(strncasecmp(query, "EXEC", 4) == 0) {
				*result = res_tables_find(m->results, conn->lastResultSetID);
				conn->lastQueryType = (*result) ? Q_TABLE : Q_UPDATE;
			} else { //PREPARE
				conn->lastQueryType = Q_PREPARE;
			}
		}
	} else {
		if(strncasecmp(query, "COPY", 7)) {
			conn->querySpecialType = 2; //more engineering :)
		}
		res = SQLstatementIntern(conn, &query, "main", execute, 0, (res_table **) result);
	}
	//It's important to set the last auto_commit for the JDBC embedded connection
	conn->lastAutoCommitStatus = m->session->auto_commit;
	SQLautocommit(conn, m);
	return res;
}

char* monetdb_append(Client conn, const char* schema, const char* table, append_data *data, int ncols) {
	Client c = (Client) conn;
	mvc* m;
	InstrPtr q;
	MalBlkPtr mb;
	int mvc_var, i;
	str res = MAL_SUCCEED;

	if (!monetdb_is_initialized()) {
		return GDKstrdup("Embedded MonetDB is not started");
	}
	if(table == NULL || data == NULL || ncols < 1) {
		return GDKstrdup("Invalid parameters");
	}
	if (!MCvalid(conn)) {
		return GDKstrdup("Invalid connection");
	}
	if ((res = getSQLContext(c, NULL, &m, NULL)) != MAL_SUCCEED) {
		return res;
	}
	if (m->session->status < 0 && m->session->auto_commit == 0){
		return GDKstrdup("Current transaction is aborted (please ROLLBACK)");
	}

	SQLtrans(m);

	MSinitClientPrg(c, "user", "monetdb_append");
	mb = copyMalBlk(c->curprg->def);
	q = newStmt(mb, sqlRef, mvcRef);
	mvc_var = getDestVar(q);

	for (i = 0; i < ncols; i++) {
		append_data ad = data[i];
		ValRecord v;
		v.vtype = TYPE_bat;
		v.val.bval = ad.batid;
		q = newStmt(mb, sqlRef, appendRef);
		q = pushArgument(mb, q, mvc_var);

		getArg(q, 0) = mvc_var = newTmpVariable(mb, TYPE_int);
		q = pushStr(mb, q, schema);
		q = pushStr(mb, q, table);
		q = pushStr(mb, q, ad.colname);
		q = pushValue(mb, q, &v);
	}
	pushEndInstruction(mb);
	res = optimizeMALBlock(c, mb);
	if (res != MAL_SUCCEED) {
		return res;
	}
	res = runMAL(c, mb, 0, 0);
	freeMalBlk(mb);

	SQLautocommit(c, m);
	return res;
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

	return msg;
}

void sendReleaseCommand(Client conn, int commandId) {
	mvc* m = ((backend *) conn->sqlcontext)->mvc;
	cq *q = qc_find(m->qc, commandId);

	if (q) {
		qc_delete(m->qc, q);
	}
}

void sendCloseCommand(Client conn, int tableID) {
	mvc* m = ((backend *) conn->sqlcontext)->mvc;
	res_table *t = res_tables_find(m->results, tableID);

	if (t) {
		m->results = res_tables_remove(m->results, t);
	}
}

void sendReplySizeCommand(Client conn, long size) {
	mvc* m = ((backend *) conn->sqlcontext)->mvc;

	if(size >= -1) {
		m->reply_size = size;
	}
}

void getUpdateQueryData(Client conn, long* lastId, long* rowCount) {
	mvc* m = ((backend *) conn->sqlcontext)->mvc;

	*lastId = m->last_id;
	*rowCount = conn->lastNumberOfRows;
}

int getAutocommitFlag(Client conn) {
	return conn->lastAutoCommitStatus;
}

void setAutocommitFlag(Client conn, int autoCommit) {
	mvc* m = ((backend *) conn->sqlcontext)->mvc;
	m->session->auto_commit = autoCommit;
	conn->lastAutoCommitStatus = autoCommit;

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
