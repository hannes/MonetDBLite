# MonetDBJavaLite

After the C-lite, R-Lite and Python-Lite, MonetDBJavaLite is here! This allows the integration of MonetDB, a column-wise and high-scale OLAP relational database integrated into the JVM! Unlike a traditional socket connection, in an embedded connection, both the client and the server share the same process, which means there is no necessity to serialize and deserialize data, making the connection much faster! :)

This integration was made as much as simple possible for performance reasons. At the same time, the existing JDBC driver for MonetDB was extended to accomodate both a MAPI (regular socket connetion) and an embedded connection with low overhead without breaking the JDBC specification.

## JNI C code
The embedded Java version of MonetDB is heavily based and dependent on the generic one (or MonetDBLite). To interface Java with C it's used JNI. JNI code comes with two complementing parts - Java and native (C in our case) code. In the Java code it's declared a function `native`, which indicates that it is actually implemented in C. Later it's implementation is written the native library. This is where it's called the embedded C-level interface function from the Java code.

## Libraries
Packed in the `src/main/resources/libs` directory of the `monetdb-java-lite-<version>.jar` there should be several directories, containing the C-library of MonetDB for each available operative system. The extension of the library should either be the default for a dynamic libraries on the user's OS or the generic (for JNI) `.jnilib`. For this reason the `monetdb-java-lite-<version>.jar` size is much larger than the average size of a `.jar` file. If the user wants to save space, he might delete the unwanted versions of the native library in the `src/main/resources/libs` directory, altough it's not recomended to do so.

In an IDE or when Maven runs tests from command line, the application will use the unpacked library, already present in the `src/main/resources/libs` dir (since there isn't a `.jar` yet). When running "in production" - from a `.jar`, the application will stream copy the library to a temp dir, and load the library from there. This is needed, since one cannot use the packed libraries in a `.jar` directly.

## Installation

TBD

## MonetDB database in the JVM

Due to the MonetDB internal implementation, we allow only one database per JVM process. If the user wants to use several databases, we recommend to create another processes of the JVM to do so. Due to this limitation, all the actions in MonetDBJavaLite turn around in a single database, which has to be loaded in order to perform operations.

In the original MonetDBLite, some less important features of MonetDB were turned off in order to shrink it's size. This also means that some features of the MonetDB JDBC driver won't be available in an embedded connection at the moment.

One important note is that all the following APIs are NOT thread-safe for performance reasons, and thread-safety not being part of the JDBC specification. If the user wants to use a multi-threading enviroment, we recommend to either create one connection for each thread or use proper synchronization primitives.

### Start the database and make connections

The MonetDB embedded database has to be loaded in order to perform all the operations. Due to the one database process restriction, the `MonetDBEmbeddedDatabase` class is a singleton. The `MonetDBEmbeddedDatabase` will create the MonetDB's farm if it's inexistent in the directory, otherwise will load the existing farm. The `MonetDBEmbeddedDatabase` exceptionally is thread-safe to avoid to threads to start the database and corrupting the existing process. To start the database:

```java
Path directoryPath = Files.createTempDirectory("monetdbjavalite");
boolean silentFlag = true;
boolean sequentialFlag = true;
MonetDBEmbeddedDatabase.StartDatabase(directoryPath.toString(), silentFlag, sequentialFlag);
```

After the database is loaded, connections can be performed to the database.

```java
MonetDBEmbeddedConnection connection = MonetDBEmbeddedDatabase.CreateConnection();
```

### MonetDB to Java Mappings

Being a strong typed language, an explicit mapping between MonetDB data types and Java classes/primitives was made. We favored the usage of Java primitives for the most common MonetDB data types, hence making less allocations. However for the more complex ones, we mapped them to Java Classes, while matching the JDBC specification.

One important feature of MonetDB is that the SQL `NULL` values are mapped into the system's minimum values (e.g. MonetDB Integer - 2^31 - 1 in a 64-bit machine). In MonetDBJavaLite, this feature is persisted, being converted into the JVM's minimum values for the primitives. However for the Java Classes mapping, `NULL` values are translated into null pointers, so be carefull!

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
| blob                                 | byte[]  (an object!)                                                                        | Null pointer          |

Notice that other more rare data types like `geometry`, `json` and `hugeint` are missing, because they were taken off the MonetDBLite to shrink the size of the library.

## Just the embbedded API

After a connection is made, regular queries can be sent to the embedded server and get the results immediately. 

### Regular Queries

For update queries (e.g. `INSERT`, `UPDATE` and `DELETE` queries), the method `sendUpdate` is used to send update queries to the server and get the number of rows affected.

```java
connection.startTransaction();
connection.sendUpdate("CREATE TABLE example (truth boolean, words text, counter int, fraction real, temporal timestamp)");
int numberOfInsertions = connection.sendUpdate("INSERT INTO example VALUES ('true', 'just one word', 1, 1.23, now()), ('false', 'another word', 2, -45.65467, now()), (null, null, null, null, null)");
connection.commit();
```

For queries with result sets, the method `sendQuery` sends a query to the server and retrieves the results immediately in a `QueryResultSet` instance. The column values can be retrieved using the `get#TYPE#ColumnByIndex` methods, with the column numbers starting from 1, alike in JDBC, or by name with `get#TYPE#ColumnByName` methods. An important note is that the pointer to the array is retrieved when the fetch is made, to save memory allocations, except when the type does not match the method (e.g call `getIntColumnByIndex` in a `short` column). If the user wants to re-use values, he should clone the arrays. The entire result set can be fetched with the `getTheFullResultSet` method.

For null values, the methods `getColumnNullMappingsByIndex` and `getColumnNullMappingsByName` can be used. The result set metada can be retrieved with the  `getNumberOfRows`, `getNumberOfColumns`, `getColumnNames` and `getColumnTypes` methods.

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
qrs.close(); //don't forget to close in the end!!!
```

### Appending to a Table

## JDBC

### Improved MAPI JDBC connection

### JDBC embedded connection

## Shutdown the database

## Benchmarks

## FAQs

## License

## Developer and support
