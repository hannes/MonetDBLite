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
#ifndef _EMBEDDED_LIB_
#define _EMBEDDED_LIB_

#include "monetdb_config.h"
#include "monet_options.h"
#include "mal.h"
#include "mal_client.h"
#include "mal_linker.h"
#include "gdk_utils.h"
#include "sql_scenario.h"
#include "sql_execute.h"
#include "sql.h"
#include "sql_mvc.h"
#include "res_table.h"

#include <stddef.h> /* only for size_t */

typedef struct append_data {
	char* colname;
	size_t batid; /* Disclaimer: this header is GDK-free */
} append_data;

char* monetdb_connect(Client* conn);
void monetdb_disconnect(Client conn);
char* monetdb_startup(char* dbdir, char silent, char sequential);
int   monetdb_is_initialized(void);
char* monetdb_query(Client conn, char* query, char execute, void** result);
char* monetdb_append(Client conn, const char* schema, const char* table, append_data *data, int ncols);
void  monetdb_cleanup_result(Client conn, void* output);
char* monetdb_get_columns(Client conn, const char* schema_name, const char *table_name, int *column_count, char ***column_names, int **column_types);
void  monetdb_shutdown(void);

char* monetdb_find_table(Client conn, sql_table** table, const char* schema_name, const char* table_name);
char* sendAutoCommitCommand(Client conn, int flag, int* result);
void sendReleaseCommand(Client conn, int commandId);
void sendCloseCommand(Client conn, int commandId);
void sendReplySizeCommand(Client conn, long size);
void getUpdateQueryData(Client conn, long* lastId, long* rowCount);
int getAutocommitFlag(Client conn);

int setMonetDB5LibraryPathEmbedded(const char* path);
void freeMonetDB5LibraryPathEmbedded(void);

#endif
/*

typedef struct monetdb_result_column {
	char* tablename;
	char* colname;
	char* typename;
	// internal
	int gdktype;
	int batid;
	void* data;
} monetdb_result_column;

typedef struct monetdb_result {
	size_t id;
	size_t nrows;
	size_t ncols;
	monetdb_result_column *columns;
} monetdb_result;


monetdb_get_value_long();
monetdb_get_value_string(monetdb_result *result, size_t col, size_t row);
monetdb_get_value_double();
*/
