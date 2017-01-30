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

Due to the MonetDB internal representation, we allow only one database per process. If the user wants to use several databases, we recommend to create another processes of the JVM to do so. Due to this limitation, all the actions in MonetDBJavaLite turn around in a single database, which has to be loaded in order to perform operations.

In the original MonetDBLite, some less important features of MonetDB were turned off in order to shrink it's size. This also means that some features of the MonetDB JDBC driver won't be available in an embedded connection at the moment.

One important note is that all the following APIs are NOT thread-safe for performance reasons, and thread-safety not being part of the JDBC specification. If the user wants to use a multi-threading enviroment, we recommend to either create one connection for each thread or use proper synchronization primitives.

### Start the database

The MonetDB embedded database has to be loaded in order to perform all the operations. Due to the one database process restriction, the `MonetDBEmbeddedDatabase` class is a singleton. The `MonetDBEmbeddedDatabase` will create the MonetDB's farm if it's inexistent in the directory, otherwise will load the existing farm. The `MonetDBEmbeddedDatabase` exceptionally is thread-safe to avoid to threads to start the database and corrupting the existing process. To start the database:

```java
Path directoryPath = Files.createTempDirectory("monetdbjavalite");
boolean silentFlag = true;
boolean sequentialFlag = true;
MonetDBEmbeddedDatabase.StartDatabase(directoryPath.toString(), silentFlag, sequentialFlag);
```

### Connections

After the database is loaded, several connections

### Mappings

null values

## Just the embbedded API

### Regular Queries

### Appending to a Table

## JDBC

### Improved MAPI JDBC connection

### JDBC embedded connection

## Shutdown the database

## Benchmarks

## FAQs

## License

## Developer and support
