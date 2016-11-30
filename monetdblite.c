/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2008-2015 MonetDB B.V.
 */

/*
 * @a M. Raasveldt
 * The actual MonetDBLite Python module that holds the functions. 
 * Just a wrapper, the actual functions are declared in src/embedded/embeddedpy.c
 */

#include <Python.h>
// FIXME: wrap dlopen/dlsym/dlerror for Windows users
#include <dlfcn.h>

#if PY_MAJOR_VERSION >= 3
#define IS_PY3K
#define INITERROR return NULL
#else
#define INITERROR return
#endif


//! Initializes MonetDB with the specified directory, "args" must be a PyStringObject
PyObject *monetdb_init(PyObject *self, PyObject *args);
//! Performs a SQL query, monetdb_init must be called first and "args" must be a PyStringObject
PyObject *monetdb_sql(PyObject *self, PyObject *args, PyObject *keywds);
//! Creates a SQL table, monetdb_init must be called first and "args" must be either (table_name, dictionary) or (table_name, list(column_names), list(values))
PyObject *monetdb_create(PyObject *self, PyObject *args, PyObject *keywds);
//! Inserts values into a SQL table, monetdb_init must be called first and "args" must be either (table_name, dictionary) or (table_name, list(column_names), list(values))
PyObject *monetdb_insert(PyObject *self, PyObject *args, PyObject *keywds);
//! Creates a new MonetDB client context and returns it as a PyClientObject
PyObject *monetdb_client(PyObject *self);

static char module_docstring[] =
    "This module provides an embedded MonetDB database within the Python process (similar to SQLite).";
static char init_docstring[] =
    "monetdblite.init(directory) => Initialize the SQL client with the given database directory.";
static char sql_docstring[] =
    "monetdblite.sql(query) => Execute a SQL query on the database. Returns the result as a dictionary of Numpy Arrays.";
static char create_docstring[] =
    "monetdblite.create(tablename, dictionary), monetdblite.create(tablename, column_names, values) => Create a SQL table from the given Python objects, objects must either be a (column name, value) dictionary or a list of column names and a list of values";
static char insert_docstring[] =
    "monetdblite.insert(tablename, dictionary), monetdblite.insert(tablename, column_names, values) => Insert a set of values into a SQL table";
static char connect_docstring[] =
    "monetdblite.connect() => Create a connection object to the monetdblite database.";

static PyMethodDef module_methods[] = {
    {"init", monetdb_init, METH_O, init_docstring},
    {"sql", (PyCFunction)monetdb_sql, METH_VARARGS|METH_KEYWORDS, sql_docstring},
    {"create", (PyCFunction)monetdb_create, METH_VARARGS|METH_KEYWORDS, create_docstring},
    {"insert", (PyCFunction)monetdb_insert, METH_VARARGS|METH_KEYWORDS, insert_docstring},
    {"connect", (PyCFunction)monetdb_client, METH_NOARGS, connect_docstring},
    {NULL, NULL, 0, NULL}
};

PyObject* (*monetdb_init_ptr)(PyObject *self, PyObject *args) = NULL;
PyObject* (*monetdb_sql_ptr)(PyObject *self, PyObject *args, PyObject *keywds) = NULL;
PyObject* (*monetdb_create_ptr)(PyObject *self, PyObject *args, PyObject *keywds) = NULL;
PyObject* (*monetdb_insert_ptr)(PyObject *self, PyObject *args, PyObject *keywds) = NULL;
PyObject* (*monetdb_client_ptr)(PyObject *self) = NULL;

PyObject *monetdb_init(PyObject *self, PyObject *args) {
    if (!monetdb_init_ptr) {
        PyErr_SetString(PyExc_Exception, "MonetDBLite was not loaded correctly.");
        return NULL;
    }
    return (monetdb_init_ptr)(self, args);
}

PyObject *monetdb_sql(PyObject *self, PyObject *args, PyObject *keywds) {
    if (!monetdb_sql_ptr) {
        PyErr_SetString(PyExc_Exception, "MonetDBLite was not loaded correctly.");
        return NULL;
    }
    return (monetdb_sql_ptr)(self, args, keywds);
}

PyObject *monetdb_create(PyObject *self, PyObject *args, PyObject *keywds) {
    if (!monetdb_create_ptr) {
        PyErr_SetString(PyExc_Exception, "MonetDBLite was not loaded correctly.");
        return NULL;
    }
    return (monetdb_create_ptr)(self, args, keywds);
}

PyObject *monetdb_insert(PyObject *self, PyObject *args, PyObject *keywds) {
    if (!monetdb_insert_ptr) {
        PyErr_SetString(PyExc_Exception, "MonetDBLite was not loaded correctly.");
        return NULL;
    }
    return (monetdb_insert_ptr)(self, args, keywds);
}

PyObject *monetdb_client(PyObject *self) {
    if (!monetdb_client_ptr) {
        PyErr_SetString(PyExc_Exception, "MonetDBLite was not loaded correctly.");
        return NULL;
    }
    return (monetdb_client_ptr)(self);
}

#ifdef IS_PY3K
static struct PyModuleDef moduledef = {
        PyModuleDef_HEAD_INIT,
        "monetdblite",
        module_docstring,
        -1,
        module_methods,
        NULL,
        NULL,
        NULL,
        NULL
};
#endif

#ifdef IS_PY3K
PyMODINIT_FUNC
PyInit_monetdblite(void)
#else
PyMODINIT_FUNC
initmonetdblite(void)
#endif
{
    //initialize module
#ifdef IS_PY3K
    PyObject *m = PyModule_Create(&moduledef);
#else
    PyObject *m = Py_InitModule3("monetdblite", module_methods, module_docstring);
#endif
    if (m == NULL)
        INITERROR;

    void* dll = dlopen(MONETDBLITE_LIBRARY_PATH, RTLD_NOW);
    if (!dll) {
        printf("Failed to open libmonetdb5: %s\n", dlerror());
        INITERROR;
    }
    monetdb_init_ptr               = dlsym(dll, "monetdb_init");
    monetdb_sql_ptr                = dlsym(dll, "monetdb_sql");
    monetdb_create_ptr             = dlsym(dll, "monetdb_create");
    monetdb_insert_ptr             = dlsym(dll, "monetdb_insert");
    monetdb_client_ptr             = dlsym(dll, "monetdb_client");
    void (*monetdblite_init_ptr)() = dlsym(dll, "monetdblite_init");
    if (!monetdb_init_ptr || !monetdb_sql_ptr || 
        !monetdb_create_ptr || !monetdb_insert_ptr || 
        !monetdb_client_ptr || !monetdblite_init_ptr) {
        printf("Failed to load functions from libmonetdb5: %s\n", dlerror());
        INITERROR;
    }

    //import numpy stuff
    (monetdblite_init_ptr)();

#if PY_MAJOR_VERSION >= 3
    return m;
#endif
}
