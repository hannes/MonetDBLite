/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2015 MonetDB B.V.
 */

/*
 * @a M. Raasveldt
 * MonetDB embedded in Python library.
 */

#ifndef _EMBEDDEDPY_LIB_
#define _EMBEDDEDPY_LIB_

#include "pyheader.h"

//! Initializes MonetDB with the specified directory
pyapi_export PyObject* python_monetdb_init(char* directory, int silent);
//! Performs a SQL query, monetdb_init must be called first
pyapi_export PyObject* python_monetdb_sql(PyObject* client, char* query);
//! Inserts values into a SQL table, monetdb_init must be called first and "args" must be either (table_name, dictionary) or (table_name, list(column_names), list(values))
pyapi_export PyObject* python_monetdb_insert(PyObject* client, char* schema, char* table_name, PyObject* values);
//! Creates a new MonetDB client context and returns it as a PyClientObject
pyapi_export PyObject* python_monetdb_client(void);
//! Disconnect a MonetDB client context
pyapi_export PyObject* python_monetdb_disconnect(PyObject* client);
//! Shuts down the database in-process so python_monetdb_init can be called again
pyapi_export PyObject* python_monetdb_shutdown(void);


pyapi_export void python_monetdblite_init(void);

#endif /* _EMBEDDEDPY_LIB_ */
