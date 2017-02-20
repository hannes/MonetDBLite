# MonetDBJavaLite

> **IMPORTANT** Before any further reading, remember that this software is still experimental, and it might crash
sometimes, although some testing was already been made on it :) To be 100% safe you can run MonetDBJavaLite, a
subprocess in the JVM, so if it crashes, your application in the main process will still be up!

After the MonetDBLite, MonetDBRLite and MonetDBPythonLite, MonetDBJavaLite is here! This project allows the integration
of MonetDB, a column-wise and high-scale OLAP relational database in the JVM! Unlike a traditional socket connection,
in an embedded connection, both the client and the server share the same process, which means there is no necessity to
serialize and deserialize data, making the connection much faster :)

The existing JDBC driver for MonetDB was extended to accommodate both a MAPI (regular socket connection) and an embedded
connection, while aiming at the simplicity of the integration of both connections.

## JNI C code

MonetDBJavaLite is heavily based and dependent on the generic one (i.e MonetDBLite). To interface Java with C it uses
JNI. JNI code comes with two complementing parts - Java and native C code. In the Java code it is declared as a function
`native`, which indicates that it is actually implemented in C. Later the implementation is written inside the native
library. This is where it's called the embedded C-level interface function from the Java code.

## Delivery and Installation

> The current version of MonetDBJavaLite is 2.24

There are two jars distributed: The new MonetDB JDBC driver jar (`monetdb-jdbc-new-<version>.jar`), and the
MonetDBJavaLite jar (`monetdb-java-lite-<version>.jar`). The former can be used independently, if only MAPI JDBC
connections are desired. The latter contains the server code. For both the Embedded API and the Embedded JDBC
connections, the second jar is also required in the `CLASSPATH`.

**Both jars require JDK 8 to be installed.** However we can still make it possible to run in the JDK 7 environment if
someone requests it. Currently, the `monetdb-java-lite-<version>.jar` **only supports 64-bit architectures**.

The `monetdb-jdbc-new-<version>.jar` is both CPU and Operating System independent. It can be obtained from .... - Soon!

The `monetdb-java-lite-<version>.jar` contains the JNI code for 64-bit Linux, Windows and Mac OS X. It can be obtained
from .... - Soon!

## Libraries

Packed in the `src/main/resources/libs` directory of the `monetdb-java-lite-<version>.jar` there are several
directories, containing the C-library of MonetDB for each supported operating system. The extension of the library
should either be the default for a dynamic libraries on the user's OS or the generic (for JNI) `.jnilib`. For this
reason the `monetdb-java-lite-<version>.jar` size is much larger than the average size of a `.jar` file. If the user
wants to save space, he might delete the unwanted versions of the native library in the `src/main/resources/libs`
directory, although it's not recommended to do so.

In an IDE or when Maven runs tests from the command line, the application will use the unpacked library, already present
in the `src/main/resources/libs` dir (since there isn't a `.jar` yet). When running "in production" - from a `.jar`, the
application will stream copy the library to a temp dir, and load the library from there. This is needed, since one
cannot use the packed libraries in a `.jar` directly.

## MonetDB database in the JVM

**Due to the MonetDB internal implementation, we allow only one database per JVM process.** If the user wants to use
several databases, we recommend to create another processes of the JVM to do so. Due to this limitation, all the actions
in MonetDBJavaLite turn around in a single database, which has to be loaded in order to perform operations.

**Note that all the following APIs are NOT thread-safe for performance reasons, and thread-safety not being part of the
JDBC specification!** If the user wants to use a multi-threading environment, we recommend to either create one
connection for each thread or use proper synchronization primitives in the Java application code.

Other note is that the `async` API is absent, because no IO operations are made in an embedded connection. At the same
time they are absent in the JDBC and MonetDB uses multiple threads in its query plans, making it very CPU core
efficient. However if the user still wants to use `async` operations, this API can be embedded easily with the
[CompletableFuture<T>](https://docs.oracle.com/javase/8/docs/api/java/util/concurrent/CompletableFuture.html) class in
Java 8.

### Start the database and make connections

**The MonetDB Embedded Database has to be loaded in order to perform all the operations!** Due to the one database
process restriction, the `MonetDBEmbeddedDatabase` class is a singleton. The `MonetDBEmbeddedDatabase` will create the
MonetDB's farm if it's nonexistent in the directory, otherwise it will initialize the existing one. The
`MonetDBEmbeddedDatabase` is thread-safe to avoid to threads to start the database and corrupting the existing process.
To start the database:

```java
Path directoryPath = Files.createTempDirectory("monetdbjavalite");
boolean silentFlag = true, sequentialFlag = false;
MonetDBEmbeddedDatabase.StartDatabase(directoryPath.toString(), silentFlag, sequentialFlag);
```

The `silent` and `sequential` flags are left for debugging purposes. They should be left as `true` and `false`
respectively. After the database is loaded, connections can be performed to the database.

```java
MonetDBEmbeddedConnection connection = MonetDBEmbeddedDatabase.CreateConnection();
//the session goes...
//Don't forget to close the connection at the end!!
connection.close();
```

**Before exiting the JVM it is VERY important to shutdown the database, otherwise the program will cause many memory
leaks!** The `void MonetDBEmbeddedDatabase.StopDatabase()` class method shuts down the embedded database and any pending
connections if existing. The class method `boolean MonetDBEmbeddedDatabase.IsDatabaseRunning()` checks if the database
is running and `int MonetDBEmbeddedDatabase.GetNumberOfConnections()` retrieves the number of connections in the
database.

### MonetDB to Java Mappings 

The Java programming language is a strong typed language, thus an explicit mapping between MonetDB SQL types and Java
classes/primitives was made. We favored the usage of Java primitives for the most common MonetDB SQL types, hence making
less object allocations. However for the more complex SQL types, we mapped them to Java Classes, while matching the JDBC
specification.

One important feature of MonetDB is that the SQL `NULL` values are mapped into the system's minimum values (e.g. MonetDB
Integer - 2^31 - 1 in a 64-bit machine). In MonetDBJavaLite, this feature persists, being converted into the JVM's
minimum values for the primitives. **However for the Java Classes mapping, SQL NULL values are translated into null
objects, so be careful!**

| MonetDB Type                         | Java Primitive/Class                                                                        | Null Value            |
| :----------------------------------- | :------------------------------------------------------------------------------------------ | :-------------------- |
| boolean                              | boolean                                                                                     | Minimum byte value    |
| tinyint                              | byte                                                                                        | Minimum byte value    |
| smallint                             | short                                                                                       | Minimum short value   |
| integer                              | int                                                                                         | Minimum integer value |
| bigint                               | long                                                                                        | Minimum long value    |
| real                                 | float                                                                                       | Minimum float value   |
| double                               | double                                                                                      | Minimum double value  |
| decimal/numeric                      | [java.math.BigDecimal](https://docs.oracle.com/javase/8/docs/api/java/math/BigDecimal.html) | Null pointer          |
| char/varchar/clob                    | [java.lang.String](https://docs.oracle.com/javase/8/docs/api/java/lang/String.html)         | Null pointer          |
| date                                 | [java.sql.Date](https://docs.oracle.com/javase/8/docs/api/java/sql/Date.html)               | Null pointer          |
| time (with or without timezone)      | [java.sql.Time](https://docs.oracle.com/javase/8/docs/api/java/sql/Time.html)               | Null pointer          |
| timestamp (with or without timezone) | [java.sql.Timestamp](https://docs.oracle.com/javase/8/docs/api/java/sql/Timestamp.html)     | Null pointer          |
| month interval                       | int                                                                                         | Minimum integer value |
| second interval                      | long                                                                                        | Minimum long value    |
| blob                                 | byte&#91;&#93; &#40;an object&#33;&#41;                                                     | Null pointer          |

Notice that other more rare data types like `geometry`, `json` and `hugeint` are still missing, because they were taken
off from MonetDBLite to shrink the size of the library.

## Just the Embedded API

After a connection is made, regular queries can be sent to the embedded database, then retrieving the results.
The methods `void startTransaction()`, `void commit()` and `void rollback()`, can be used for the transaction
management.

### Update Queries

For update queries (e.g. `INSERT`, `UPDATE` and `DELETE` queries), the method `int sendUpdate(String query)` is used to
send update queries to the server and get the number of rows affected.

```java
connection.startTransaction();
connection.sendUpdate("CREATE TABLE example (truth boolean, words text, counter int, fraction real, temporal timestamp)");
int numberOfInsertions = connection.sendUpdate("INSERT INTO example VALUES ('true', 'just one word', 1, 1.23, now()), ('false', 'another word', 2, -45.65467, now()), (null, null, null, null, null)");
connection.commit();
```

### Queries with result sets

For queries with result sets, the method `QueryResultSet sendQuery(String query)` sends a query to the server, and
retrieves the results immediately in a `QueryResultSet` instance. The column values can be retrieved using the
`T[] get#TYPE#ColumnByIndex(int n)` methods, with the column numbers starting from 1, alike in JDBC, or by name with
`T[] get#TYPE#ColumnByName(String name)` methods. An important note is that the pointer to the array is retrieved when
the fetch is made, to save memory allocations, except when the type does not match the method (e.g call
`getIntColumnByIndex` in a `short` column). If the user wants to re-use values, he should clone the arrays. The entire
result set can be fetched with the `Object[] getTheFullResultSet()` method.

For `NULL` values, the methods `boolean[] getColumnNullMappingsByIndex(int n)` and
`boolean[] getColumnNullMappingsByName (String name)` can be used. The result set metada can be retrieved with the
`int getNumberOfRows()`, `int getNumberOfColumns()`, `String[] getColumnNames()` and `String[] getColumnTypes()`
methods.

```java
QueryResultSet qrs = connection.sendQuery("SELECT * FROM example");

//gets ['truth', 'words', 'counter', 'fraction', 'temporal']
String[] columnNames = qrs.getColumnNames();
int numberOfRows = qrs.getNumberOfRows();

boolean[] truthValues = qrs.getBooleanColumnByIndex(1);
String[] wordValues = qrs.getStringColumnByIndex(2);
int[] counterValues = qrs.getIntColumnByIndex(3);
float[] fractionValues = qrs.getFloatColumnByIndex(4);
Timestamp[] temporalValues = qrs.getTimestampColumnByIndex(5);
int[] theSameCounterValues = qrs.getIntColumnByName("counter"); //got it by name

//gets the null mappings of column, in this case: [false, false, true]
boolean[] truthNullMappings = qrs.getColumnNullMappingsByIndex(1);
//gets the pointer to the result set matrix, be carefull!!
Object[] result set = qrs.getFullResultSet();
qrs.close(); //don't forget to close in the end!!! ;)
```
A single value can be checked if it's `NULL` with the `NullMappings` class `boolean Check#Type#IsNull(T value)` static
methods, except for `booleans`, in which the `boolean checkBooleanIsNull(int column, int row)` in the `QueryResultSet`
should be used instead.

If it is desired to iterate row-wise, the methods `QueryResultRowSet fetchResultSetRows(int startIndex, int endIndex)`,
`QueryResultRowSet fetchFirstNRowValues(int n)` and `QueryResultRowSet fetchAllRowValues()` can be used. However as of
now, these methods convert all the values including primitives into Java Objects, which causes slightly more memory
allocations. The `MonetDBRow` class instance holds the data of a single retrieved row.

```java
QueryResultSet qrs = connection.sendQuery("SELECT truth, words, counter FROM example");

QueryResultRowSet rows = qrs.fetchAllRowValues();
MonetDBRow[] arrayRep = rows.getAllRows();
for (MonetDBRow singleRow : arrayRep) {
   System.out.println(singleRow.getColumnByIndex(1).toString() + singleRow.getColumnByIndex(2)
                      + singleRow.getColumnByIndex(3));
}

qrs.close(); //don't forget ;)
```

### Utilities methods

In the `MonetDBEmbeddedConnection` class there are other utility methods, that can used to manage the current connection.

* `String getCurrentSchema()` - Returns the current schema name.
* `void setCurrentSchema(String newSchema)` - Sets the current schema.
* `QueryResultSet listTables(boolean listSystemTables)` - Lists the existing tables details in the SQL catalog.
* `boolean checkIfTableExists(String schemaName, String tableName)` - Self explanatory :)
* `void removeTable(String schemaName, String tableName)` - Self explanatory :)
* `boolean isConnectionClosed()` - Just a check :)

## Interacting with Tables

Another important feature of MonetDBLite is the ability to interact with database tables easily. This featured is also
present in MonetDBJavaLite. A single table data can be retrieved using the methods
`MonetDBTable getMonetDBTable(String schemaName, String tableName)` and `MonetDBTable getMonetDBTable(String tableName)`
in a `MonetDBEmbeddedConnection` class instance.

Much alike the `QueryResultSet` class, the tables' metadata information can be retrieved with the same methods of above.

### Iterate a table

To iterate a table, (e.g. for exporting), the method `int iterateTable(IMonetDBTableCursor cursor)` can be used. The
`IMonetDBTableCursor` interface instance must implement the methods `int getFirstRowToIterate()`, where the first row in
the table is specified (starting from 1), `int getLastRowToIterate()` the last one, and
`void processNextRow(RowIterator rowIterator)`, containing the business logic of the iteration. The `rowIterator` has
information about the iteration itself, as well the current row.

```java
connection.sendUpdate("CREATE TABLE iterateMe (oneValue short, information char(10), justADate date)");
connection.sendUpdate("INSERT INTO iterateMe VALUES (1, 'iterate', now()), (2, 'a', '2014-10-02'), (3, 'table', '1950-12-12')");

MonetDBTable iterateMe = connection.getMonetDBTable("iterateMe");
iterateMe.iterateTable(new IMonetDBTableCursor() {
    @Override
    public void processNextRow(RowIterator rowIterator) {
        System.out.println(rowIterator.getColumnByIndex(1, Short.class)
                           + " " + rowIterator.getColumnByIndex(2, String.class)
                           + " " + rowIterator.getColumnByIndex(3, Date.class));
    }

    @Override
    public int getFirstRowToIterate() {
        return 1;
    }

    @Override
    public int getLastRowToIterate() {
        return iterateMe.getNumberOfRows();
    }
});
```

### Append data to a table

To append new data to the table, the method `int appendColumns(Object[] data)` is used. The `data` is an array of
columns, where each column has the same number of rows, and each array class corresponds to the mapping defined above.
To insert null values, use the `T Get#Type#NullConstant()` constant in the `NullMappings` class. Due to the limitations
of the representation of `booleans` in Java, to append to a `boolean` column, a `byte` array should be used instead, as
shown in the example. For all the other types, there are no changes.

For `decimals`, a rounding mode must be set before appending. The method `void setRoundingMode(int roundingMode)` has
that purpose [click here for details](https://docs.oracle.com/javase/7/docs/api/java/math/BigDecimal.html#setScale(int,%20int)).

```java
connection.sendUpdate("CREATE TABLE interactWithMe (dutchGoodies text, justNumbers int, truth boolean, huge blob)");
MonetDBTable interactWithMe = connection.getMonetDBTable("interactWithMe");

String[] goodies = new String[]{"eerlijk", "lekker", "smullen", "smaak", NullMappings.GetObjectNullConstant<String>() };
int[] numbers = new int[]{2, 3, NullMappings.GetIntNullConstant(), -1122100, -23123};
byte[] truths = new byte[]{NullMappings.GetBooleanNullConstant(), 1, 1, 0, 0};
byte[][] justBlobs = new byte[][]{new byte[]{1,2,5,7}, NullMappings.GetObjectNullConstant<byte[]>(),
                                  new byte[]{-1,-2,-3,-4,-5,-6}, new byte[]{127}, new byte[]{0,0,0,0,0}};
Object[] appends = new Object[]{goodies, numbers, truths, justBlobs};
interactWithMe.appendColumns(appends);

QueryResultSet qrs = connection.sendQuery("SELECT * FROM interactWithMe");
//checking the values....
```

## JDBC

The existing MonetDB JDBC driver was extended to support both a MAPI and an Embedded connection! At the same time, the
MAPI connection was improved with [ByteBuffers](https://docs.oracle.com/javase/8/docs/api/java/nio/ByteBuffer.html) in
the lower layers of the driver for memory saving, thus less garbage collection is now performed.

### JDBC Embedded connection

There are several tutorials about the JDBC in the Internet, hence here will be explained just how to start an embedded
connection. In the JDBC specification, an URL is provided to the
[DriverManager](https://docs.oracle.com/javase/8/docs/api/java/sql/DriverManager.html) identifying the driver's vendor
and the most important properties of the connection.

**To start an JDBC Embedded connection the JDBC URL must provided in the format	`jdbc:monetdb:embedded:<directory>`,
where directory is the location of the database.** The following example shows how it can be done. In contrast the 
JDBC MAPI connection URL has the format `jdbc:monetdb://<host>[:<port>]/<database>[query]`.

```java
Connection con = DriverManager.getConnection("jdbc:monetdb:embedded:/home/user/myfarm") //Unix
//Connection con = DriverManager.getConnection("jdbc:monetdb:embedded:C:\\user\\myfarm") //Windows

//just a JDBC statement and result set
Statement st = con.createStatement();
st.executeUpdate("CREATE TABLE jdbcTest (justAnInteger int, justAString varchar(32))");
st.executeUpdate("INSERT INTO jdbcTest VALUES (1, 'testing!')");
ResultSet rs = st.executeQuery("SELECT * from test1;");
while (rs.next()) {
    int justAnInteger = rs.getInt(1);
    String justAString = rs.getString(2);
    System.out.println(justAnInteger + " " + justAString); //just showing!
}
rs.close(); //Don't forget! :)
con.close(); //Don't forget! :)
```

As seen in the example, the `MonetDBEmbeddedDatabase` calls were not required for better portability of the JDBC
Embedded connection. What really happens is when starting a JDBC Embedded connection, it checks if there is a
`MonetDBEmbeddedDatabase` instance running in the provided directory, otherwise an exception is thrown. While closing,
if it's the last connection, the `MonetDBEmbeddedDatabase` will shut down.

It is made possible to use the the Embedded API in the JDBC Embedded connection, although it is completely separated
from the JDBC specification.

```java
Connection con = DriverManager.getConnection("jdbc:monetdb:embedded:/home/user/myfarm")
MonetDBEmbeddedConnection cast = ((EmbeddedConnection)con).getAsMonetDBEmbeddedConnection();
connection.sendUpdate("SELECT * FROM somewhere WHERE field=1");
//do as a MonetDBEmbeddedConnection...
con.close(); //Don't forget! ;)
```

### Differences between the JDBC MAPI and Embedded connections

In the original MonetDBLite, some less important features of MonetDB were turned off in order to shrink its size. This
also means that some features of the MonetDB JDBC driver won't be available in a JDBC Embedded connection at the moment.

* The [PreparedStatement](https://docs.oracle.com/javase/8/docs/api/java/sql/PreparedStatement.html) implementation is
missing in the Embedded connection, because the
[PREPARED STATEMENT](https://www.monetdb.org/Documentation/Manuals/SQLreference/PrepareExec) of MonetDB was removed in
MonetDBLite. However if enough interest is made, this feature can be added to MonetDBLite.
* In the JDBC specification a [Fetch Size](https://docs.oracle.com/cd/A87860_01/doc/java.817/a83724/resltse5.htm)
attribute allows to fetch a result set in blocks. This feature is favorable in a socket connection (MAPI) where the
client and the server might not be in the same machine, thus fetching the results incrementally in blocks. However in
the Embedded connection, this feature is less favorable as both the client and the server are in the same machine.
Therefore the result set is always retrieved with a single block, making the
[`void setFetchSize(int rows)`](https://docs.oracle.com/javase/8/docs/api/java/sql/Statement.html#getFetchSize) and
[`int getFetchSize()`](https://docs.oracle.com/javase/8/docs/api/java/sql/Statement.html#setFetchSize-int-) methods
depreciated in a Embedded connection (they do nothing).
* As mentioned before, some MonetDB data types are not featured in MonetDBLite, so existing queries with those types in
a MAPI connection can't be ported to the Embedded connection version of it.
* As mentioned before, the authentication scheme is nonexistent in the Embedded connection.
* The methods [`void setNetworkTimeout(Executor executor, int millis)`](https://docs.oracle.com/javase/8/docs/api/java/sql/Connection.html#setNetworkTimeout-java.util.concurrent.Executor-int-)
and [`int getNetworkTimeout()`](https://docs.oracle.com/javase/8/docs/api/java/sql/Connection.html#getNetworkTimeout--)
are insignificant as there is no network involved in the Embedded connection.
* [Batch Processing](https://www.tutorialspoint.com/jdbc/jdbc-batch-processing.htm) is not possible in a Embedded
connection, due to its removal from MonetDBLite.
* The [Savepoints](https://docs.oracle.com/javase/8/docs/api/java/sql/Savepoint.html) feature is not working properly in
the Embedded connection due to MonetDBLite's architecture. However if enough interest is made, this feature can be fixed
in MonetDBLite.

## FAQs

### 1. I am getting the MonetDBEmbeddedException: "The MonetDB Embedded database is still running!"

Due to the internal representation of MonetDB, we allow only **ONE** embedded database per process. Check if you are
calling the class method `boolean StartDatabase(String dbDirectory, boolean silentFlag, boolean sequentialFlag)` more
than once in your code without any `void StopDatabase()` call in between. If you still need more than one database in
your program, we recommend to create a sub JVM process. It can be easily achieved with the
[`exec family of methods in the Runtime class`](https://docs.oracle.com/javase/8/docs/api/java/lang/Runtime.html).

### 2. I am having race conditions, can you tell me why?

As said before, this API is not thread-safe for performance reasons. If you want to keep data integrity, implement a
synchronization mechanism, or a pool of connections much alike Java EE does with JDBC.

### 3. Despite no IO, I still want to run this API asynchronously, can you do that?

That can be easily achieved with
[CompletableFuture<T>](https://docs.oracle.com/javase/8/docs/api/java/util/concurrent/CompletableFuture.html) in Java 8.
For older versions of Java you can use [Future<T>](https://docs.oracle.com/javase/7/docs/api/java/util/concurrent/Future.html)
instead. An example to run a query asynchronously:

```java
CompletableFuture<QueryResultSet> asyncFetch = CompletableFuture.supplyAsync(() -> {
    try {
        return connection.sendQuery("SELECT * FROM exampleTable");
    } catch (MonetDBEmbeddedException ex) {
        //log the exception...
        return null;
    }
});
// later...
QueryResultSet resultSet = asyncFetch.join();
```

**Note** For better transparency of using Java Checked Exceptions with Functional Interfaces
[check here](http://codingjunkie.net/functional-iterface-exceptions/). Then you can use the
[`CompletableFuture<T> exceptionally(Function<Throwable,? extends T> fn)`](https://docs.oracle.com/javase/8/docs/api/java/util/concurrent/CompletableFuture.html#exceptionally-java.util.function.Function-)
method to handle the exceptions.

### 4. I am getting very low negative numbers and/or NullPointer exceptions in the QueryResultSet!

You are getting SQL `NULL` values in your query result sets. As explained above, for the primitive MonetDB SQL types we
map them to the JVM minimum values. For the more complex MonetDB SQL types like `CHAR` and `DATE` we map to Java
Objects, and thus in SQL `NULL` values are represented with null Java Objects. The `NullMappings` class has class
methods to check if a value is null or not. At the same time, the SQL standard has the
[COALESCE](https://www.w3schools.com/sql/sql_isnull.asp) function to return a default value when a value is null in the
result set.

### 5. If I modify a value in one array of QueryResultSet, it changes the value in the result set as well right?

Yes, as I explained above the `QueryResultSet` `T[] get#TYPE#ColumnByIndex(int n)` and
`T[] get#TYPE#ColumnByName(String name)` methods returns the pointer to the array of the column if the type matches with
the one of the `QueryResultSet`. This was done to save memory allocations, which is useful in some use case scenarios.
If you to preserve the `QueryResultSet` data, use the
[Arrays.copyOf](https://docs.oracle.com/javase/8/docs/api/java/util/Arrays.html#i19) family of methods.

### 6. While starting a JDBC connection, I am getting the SQLException: "Unable to connect (localhost:50000): Connection refused"!

The new MonetDB JDBC driver creates a MAPI connection by default, as the most common use case of it. To start an
embedded connection you **MUST** provide JDBC URL specifying the embedded connection and the directory. Check the
example above how it can be done.

### 7. Is there a way to know if a JDBC connection is MAPI or Embedded after it has started?

Yes there is! In JDBC specification you can call the
[`String getClientInfo(String name)`](https://docs.oracle.com/javase/8/docs/api/java/sql/Connection.html#getClientInfo-java.lang.String-)
method to get a provided property at the beginning of the connection. You can do:

```java
String embeddedString = connection.getClientInfo("embedded");
boolean isEmbedded = (embeddedString != null && embeddedString.equals("true"));
```

### 8. I don't like Java that much, can I use this for another programming languages for the JVM?

Yes you can! You can easily import Java libraries for other JVM programming languages like Scala. The following example
creates a JDBC Embedded connection in Scala:

```scala
var connection:Connection = null
try {
    connection = DriverManager.getConnection("jdbc:monetdb:embedded:/home/user/myfarm")
    val statement = connection.createStatement()
    statement.executeUpdate("CREATE TABLE example (counter int, justAString varchar(32), floatingPoint real)")
    statement.executeUpdate("INSERT INTO example VALUES (1, 'Scala', 3.223)")
    statement.executeUpdate("INSERT INTO example VALUES (2, 'is', -1000)")
    statement.executeUpdate("INSERT INTO example VALUES (3, 'cool', -743.858)")
    val resultSet = statement.executeQuery("SELECT * FROM example")
    while (resultSet.next()) {
        val counterValue = resultSet.getInt(1)
        val stringValue = resultSet.getString(2)
        val floatingPointValue = resultSet.getFloat(3)
        //process the results...
    }
    resultSet.close() //Don't forget! ;)
    statement.executeUpdate("DROP TABLE example")
} catch {
    case e: Throwable => e.printStackTrace()
}
connection.close() //Don't forget! ;)
```

### 9. Any tips for additional performance of MonetDBJavaLite regarding the JVM?

We haven't dug into the settings of the JVM with MonetDBJavaLite yet, although we can do that in JNI. However we must
remember that the best setting may vary with the underlying JVM, and MonetDBJavaLite will be just a part of the running
application. One possible optimization is to run the JVM in `server` mode instead of `client` mode, although it should
be benchmarked as it might not provide better performance results in some applications. You can check the Stack Overflow
question [here](https://stackoverflow.com/questions/198577/real-differences-between-java-server-and-java-client).

## License

This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
distributed with this file, You can obtain one at [https://mozilla.org/MPL/2.0/](https://mozilla.org/MPL/2.0/).

Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.

## Developer and support

The MonetDBJavaLite is being supported by [Pedro Ferreira](mailto://pedro.ferreira@monetdbsolutions.com), a developer
at [MonetDBSolutions](https://monetdbsolutions.com/)! Feel free to create an issue, a pull request or
[just send an e-mail](mailto://pedro.ferreira@monetdbsolutions.com)! You can also create a question on
[Stack Overflow](https://stackoverflow.com/) with the tag `monetdblite`.

As you could see I like emoticons! :) Just one more :)
