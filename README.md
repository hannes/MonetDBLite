
[![Build Status](https://travis-ci.org/hannesmuehleisen/MonetDBLite.svg?branch=Dec2016Lite-Python)](https://travis-ci.org/hannesmuehleisen/MonetDBLite)

# MonetDBLite for Python

[MonetDBLite](https://www.monetdb.org/blog/monetdblite-r) is a serverless SQL database that runs inside of your Python process and does not require the installation of any external software. MonetDBLite is based on free and open-source [MonetDB](https://www.monetdb.org/Home), a product of the [Centrum Wiskunde & Informatica](http://www.cwi.nl).

MonetDBLite for Python requires ```numpy``` to be installed.

## Installation

* The latest released version can be downloaded using pip.

```pip install monetdblite```

* The latest development version can be downloaded by cloning this github repository, and running ```python setup.py install```

If you encounter a bug, please file a minimal reproducible example on [github](https://github.com/hannesmuehleisen/MonetDBLite/issues). For questions and other discussion, please use [stack overflow](http://stackoverflow.com/questions/tagged/monetdblite) with the tag `monetdblite`.  The development version of MonetDBLite endures [sisyphean perpetual testing](http://monetdb.cwi.nl/testweb/web/sisyphus/) on both unix and windows machines.

## Usage

To initialize monetdblite, run the ```monetdblite.init``` command with a directory name. The directory name is where the data in the database is stored. Use an empty folder to create a new database, or an existing folder to load an old database.

```python
import monetdblite
monetdblite.init('/path/to/database')
```

### Retrieving Data

After the database is successfully initialized, the database can be queried using SQL with the following syntax.

```python
monetdblite.sql('SELECT * FROM tables')
```

The return value of this function is the result of the query encoded as a dictionary of NumPy masked arrays, where the keys are the column names and the values are the actual values. The result can be converted to a Pandas DataFrame using the ```pandas.DataFrame.from_dict``` function.

### Inserting Data

New tables can be created using the ```monetdblite.create``` command. The command takes a table name and a dictionary of NumPy arrays to insert into the database. Each column has to be the same length.

```python
# create the integers table with a single column (i)
# and insert 100 values into the column
monetdblite.create('integers', {'i': numpy.arange(100)})
# retrieve the column again
monetdblite.sql('SELECT * FROM integers')
```

In the same way, data can be inserted using the ```monetdblite.insert``` command.

```python
# insert 100 values into the table 'integers' that we created in the previous example
monetdblite.insert('integers', {'i': numpy.arange(100)})
```

Changes made to the database will automatically be written to disk as they are made, unless they are wrapped in a transaction.

### Shutdown
Only a single monetdblite instance can be active within your Python process. It is however possible to shutdown the currently running monetdblite instance and relaunch it using a different directory. This can be done using the ```monetdblite.shutdown``` command. 

```python
# shutdown the currently running monetdblite instance
monetdblite.shutdown()
# initialize monetdblite again with a different database
monetdblite.init('/path/to/different/database')
```

### Multiple Clients
By default, monetdblite uses a single client for each query. A single client can only run a single query at a time within a single transaction. It is possible to separate queries with different clients, allowing you to run multiple queries and transactions in parallel.

First, a client must be created with the ```monetdblite.connect``` command. The client can then be passed to subsequent queries using the optional client parameter.

```python
# create a new client connection
conn = monetdblite.connect()
# use the connection in a query
monetdblite.sql('SELECT * FROM table', client = conn)
# close the connection
del conn
```

