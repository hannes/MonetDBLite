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
#include "mal_linker.h"
#include "gdk_utils.h"
#include "sql_scenario.h"
#include "sql_execute.h"
#include "sql_mvc.h"
#include "res_table.h"

#include "decompress.c"
#include "inlined_scripts.c"

//#include <locale.h>

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
	} else if (strncasecmp(query, "ROLLBACK", 8) == 0 && strncasecmp(query + 8, " TO SAVEPOINT", 13) != 0) {
		m->session->status = -1;
		m->session->auto_commit = 1;
	} else if (strncasecmp(query, "COMMIT", 6) == 0) {
		if(m->session->auto_commit == 1) {
			res = GDKstrdup("COMMIT: not allowed in auto commit mode");
		} else {
			m->session->auto_commit = 1;
		}
	} else if (m->session->status < 0 && m->session->auto_commit == 0) {
		res = GDKstrdup("Current transaction is aborted (please ROLLBACK)");
    } else if(m->session->auto_commit == 1 && strncasecmp(query, "SAVEPOINT", 9) == 0) {
		 res = GDKstrdup("SAVEPOINT: not allowed in auto commit mode");
	} else if (strncasecmp(query, "SHIBBOLEET", 10) == 0) {
		res = GDKstrdup("\x46\x6f\x72\x20\x69\x6d\x6d\x65\x64\x69\x61\x74\x65\x20\x74\x65\x63\x68\x6e\x69\x63\x61\x6c\x20\x73\x75\x70\x70\x6f\x72\x74\x20\x63\x61\x6c\x6c\x20\x2b\x33\x31\x20\x32\x30\x20\x35\x39\x32\x20\x34\x30\x33\x39");
	} else {
		res = SQLstatementIntern(conn, &query, "main", execute, 0, (res_table **) result);
	}
	SQLautocommit(conn, m);
	return res;
}

char* monetdb_append(Client conn, const char* schema, const char* table, append_data *data, int ncols) {
	int i;
	int nvar = 6; // variables we need to make up
	MalBlkRecord mb;
	MalStack*     stk = NULL;
	InstrRecord*  pci = NULL;
	str res = MAL_SUCCEED;
	VarRecord bat_varrec;
	mvc* m;

	if (!monetdb_is_initialized()) {
		return GDKstrdup("Embedded MonetDB is not started");
	}
	if(table == NULL || data == NULL || ncols < 1) {
		return GDKstrdup("Invalid parameters");
	}
	if (!MCvalid(conn)) {
		return GDKstrdup("Invalid connection");
	}
	m = ((backend *) conn->sqlcontext)->mvc;

	// very black MAL magic below
	mb.var = GDKmalloc(nvar * sizeof(VarRecord*));
	stk = GDKmalloc(sizeof(MalStack) + nvar * sizeof(ValRecord));
	pci = GDKmalloc(sizeof(InstrRecord) + nvar * sizeof(int));
	assert(mb.var != NULL && stk != NULL && pci != NULL); // cough, cough
	bat_varrec.type = TYPE_bat;
	for (i = 0; i < nvar; i++) {
		pci->argv[i] = i;
	}
	stk->stk[0].vtype = TYPE_int;
	stk->stk[2].val.sval = (str) schema;
	stk->stk[2].vtype = TYPE_str;
	stk->stk[3].val.sval = (str) table;
	stk->stk[3].vtype = TYPE_str;
	stk->stk[4].vtype = TYPE_str;
	stk->stk[5].vtype = TYPE_bat;
	mb.var[5] = &bat_varrec;
	if (!m->session->active) mvc_trans(m);
	for (i=0; i < ncols; i++) {
		append_data ad = data[i];
		stk->stk[4].val.sval = ad.colname;
		stk->stk[5].val.bval = ad.batid;

		res = mvc_append_wrap(conn, &mb, stk, pci);
		if (res != NULL) {
			break;
		}
	}
	if (res == MAL_SUCCEED) {
		sqlcleanup(m, 0);
	}
	GDKfree(mb.var);
	GDKfree(stk);
	GDKfree(pci);
	return res;
}

void  monetdb_cleanup_result(Client conn, void* output) {
	(void) conn; // not needing conn here (but perhaps someday)
	res_tables_destroy((res_table*) output);
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

	if ((msg = getSQLContext(conn, NULL, &m, NULL)) != NULL)
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
		mserver_reset();
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
    Client c = (Client) conn;
    mvc* m = ((backend *) conn->sqlcontext)->mvc;

    *lastId = m->last_id;
    *rowCount = c->lastNumberOfRows;
}

int getAutocommitFlag(Client conn) {
    mvc* m = ((backend *) conn->sqlcontext)->mvc;
    return m->session->auto_commit;
}

int setMonetDB5LibraryPathEmbedded(const char* path) {
    return setMonetDB5LibraryPath(path);
}

void freeMonetDB5LibraryPathEmbedded(void) {
    freeMonetDB5LibraryPath();
}
