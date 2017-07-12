/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.env;

import nl.cwi.monetdb.embedded.resultset.*;
import nl.cwi.monetdb.embedded.tables.MonetDBTable;
import nl.cwi.monetdb.embedded.utils.Randomizer;
import nl.cwi.monetdb.embedded.utils.StringEscaper;

import java.io.Closeable;
import java.sql.Savepoint;
import java.util.Hashtable;

/**
 * A single connection to a MonetDB database instance. Communication between Java and native C is done via JNI.
 * <br>
 * <strong>Note</strong>: You can have only one Embedded MonetDB database running per JVM process.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public class MonetDBEmbeddedConnection implements Closeable {

    /** The C connection pointer. */
    protected volatile long connectionPointer;

    /** A long value used to identify this connection. */
    private final long randomIdentifier;

    /** Hash table of query result sets. */
    private final Hashtable<Long, AbstractConnectionResult> results = new Hashtable<>();

    protected MonetDBEmbeddedConnection(long connectionPointer) {
        this.connectionPointer = connectionPointer;
        this.randomIdentifier = Randomizer.generateNextResultSetId();
    }

    /**
     * Retrieves a long number randomly generated, used to identify the connection uniquely.
     *
     * @return The random identifier
     */
    public long getRandomIdentifier() { return randomIdentifier; }

    /**
     * Tells if the connection has been closed or not.
     *
     * @return A boolean indicating if the connection has been cleaned or not
     */
    public boolean isClosed() { return this.connectionPointer == 0; }

    private void checkConnectionIsNotClosed() throws MonetDBEmbeddedException {
        if(this.isClosed()) {
            throw new MonetDBEmbeddedException("This connection is already closed!");
        }
    }

    /**
     * Retrieves the current schema set on the connection.
     *
     * @return A Java String with the name of the schema
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public String getSchema() throws MonetDBEmbeddedException {
        QueryResultSet eqr = this.executeQuery("SELECT current_schema FROM sys.var();");
        String res = eqr.getStringByColumnIndexAndRow(1, 1);
        eqr.close();
        return res;
    }

    /**
     * Sets the current schema for this connection.
     *
     * @param newSchema Java String with the name of the schema
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public void setSchema(String newSchema) throws MonetDBEmbeddedException {
        newSchema = StringEscaper.sqlStringEscape(newSchema);
        this.executeUpdate("SET SCHEMA " + newSchema + ";");
    }

    /**
     * Retrieves the current auto-commit mode for this connection.
     *
     * @return the current state of this Connection object's auto-commit mode
     * @throws MonetDBEmbeddedException if a database access error occurs
     */
    public boolean getAutoCommit() throws MonetDBEmbeddedException {
        return this.getAutoCommitInternal(this.connectionPointer);
    }

    /**
     * Sets this connection's auto-commit mode to the given state. If a connection is in auto-commit mode, then all its
     * SQL statements will be executed and committed as individual transactions. Otherwise, its SQL statements are
     * grouped into transactions that are terminated by a call to either the method commit or the method rollback.
     * By default, new connections are in auto-commit mode.
     *
     * NOTE: If this method is called during a transaction, the transaction is committed.
     *
     * @param autoCommit true to enable auto-commit mode; false to disable it
     * @throws MonetDBEmbeddedException if a database access error occurs
     */
    public void setAutoCommit(boolean autoCommit) throws MonetDBEmbeddedException {
        this.setAutoCommitInternal(this.connectionPointer, autoCommit);
    }

    /**
     * Begins a transaction.
     * WARNING Starting a transaction will turn the autocommit mode off!
     *
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public void startTransaction() throws MonetDBEmbeddedException {
        this.executeUpdate("START TRANSACTION;");
    }

    /**
     * Commits the current transaction. After committing a transaction the autocommit mode is turned back on.
     *
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public void commit() throws MonetDBEmbeddedException {
        this.executeUpdate("COMMIT;");
    }

    /**
     * Rollbacks the current transaction. After rollback a transaction the autocommit mode is turned back on.
     *
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public void rollback() throws MonetDBEmbeddedException {
        this.executeUpdate("ROLLBACK;");
    }

    /**
     * Creates an unnamed savepoint in the current transaction and returns the new Savepoint object that represents it.
     * WARNING You must turn the autocommit mode off (which is enabled by default to use Savepoints!)
     * or start a transaction.
     *
     * @return the new Savepoint object
     * @throws MonetDBEmbeddedException if a database access error occurs or this Connection object is currently in
     * auto-commit mode
     */
    public Savepoint setSavepoint() throws MonetDBEmbeddedException {
        MonetDBEmbeddedSavePoint sp = new MonetDBEmbeddedSavePoint();
        this.executeUpdate("SAVEPOINT " + sp.getName() + ";");
        return sp;
    }

    /**
     * Creates a savepoint with the given name in the current transaction and returns the new Savepoint object that
     * represents it. WARNING You must turn the autocommit mode off (which is enabled by default to use Savepoints!)
     * or start a transaction.
     *
     * @param name a String containing the name of the savepoint
     * @return the new Savepoint object
     * @throws MonetDBEmbeddedException if a database access error occurs or this connection object is currently in
     * auto-commit mode
     */
    public Savepoint setSavepoint(String name) throws MonetDBEmbeddedException {
        MonetDBEmbeddedSavePoint sp;
        try {
            sp = new MonetDBEmbeddedSavePoint(name);
        } catch (IllegalArgumentException e) {
            throw new MonetDBEmbeddedException(e.getMessage());
        }
        this.executeUpdate("SAVEPOINT " + sp.getName() + ";");
        return sp;
    }

    /**
     * Removes the given Savepoint object from the current transaction. Any reference to the savepoint after it have
     * been removed will cause an MonetDBEmbeddedException to be thrown.
     *
     * @param savepoint the Savepoint object to be removed
     * @throws MonetDBEmbeddedException if a database access error occurs or the given Savepoint object is not a valid
     * savepoint in the current transaction
     */
    public void releaseSavepoint(Savepoint savepoint) throws MonetDBEmbeddedException {
        if (!(savepoint instanceof MonetDBEmbeddedSavePoint)) {
            throw new MonetDBEmbeddedException("MonetDBLite can only handle savepoints that created itself");
        }
        MonetDBEmbeddedSavePoint sp = (MonetDBEmbeddedSavePoint) savepoint;
        this.executeUpdate("RELEASE SAVEPOINT " + sp.getName() + ";");
    }

    /**
     * Undoes all changes made after the given Savepoint object was set. This method should be used only when
     * auto-commit has been disabled.
     *
     * @param savepoint the Savepoint object to roll back to
     * @throws MonetDBEmbeddedException if a database access error occurs, the Savepoint object is no longer valid, or
     * this Connection object is currently in auto-commit mode
     */
    public void rollback(Savepoint savepoint) throws MonetDBEmbeddedException {
        if (!(savepoint instanceof MonetDBEmbeddedSavePoint)) {
            throw new MonetDBEmbeddedException("MonetDBLite can only handle savepoints that created itself");
        }
        MonetDBEmbeddedSavePoint sp = (MonetDBEmbeddedSavePoint) savepoint;
        this.executeUpdate("ROLLBACK TO SAVEPOINT " + sp.getName() + ";");
    }

    /**
     * Executes a SQL query without a result set, returning the number of rows it affected.
     *
     * @param query The SQL query string
     * @return The number of rows affected
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public int executeUpdate(String query) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        if (!query.endsWith(";")) {
            query += ";";
        }
        return this.sendUpdateInternal(this.connectionPointer, query, true);
    }

    /**
     * Executes a SQL query with a result set.
     * 
     * @param query The SQL query string
     * @return The query result object
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public QueryResultSet executeQuery(String query) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        if (!query.endsWith(";")) {
            query += ";";
        }
        QueryResultSet res = this.sendQueryInternal(this.connectionPointer, query, true);
        results.put(res.getRandomIdentifier(), res);
        return res;
    }

    /**
     * Starts a prepared statement.
     *
     * @param query The SQL query string
     * @return A prepared statement object where the user will set the parameters
     * @throws MonetDBEmbeddedException If an error in the database occurred
     * @since 2.30
     */
    public MonetDBEmbeddedPreparedStatement prepareStatement(String query) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        if (!query.endsWith(";")) {
            query += ";";
        }
        PreparedQueryResultSet res = this.prepareStatementInternal(this.connectionPointer, "PREPARE " + query,
                true);
        results.put(res.getRandomIdentifier(), res);
        return new MonetDBEmbeddedPreparedStatement(this, res);
    }

    /**
     * Executes a prepared statement.
     *
     * @param query The SQL query string
     * @return The boolean indicating if the query is a result set or not
     * @throws MonetDBEmbeddedException If an error in the database occurred
     * @since 2.30
     */
    ExecResultSet executePrepareStatement(String query) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        return this.executePrepareStatementInternal(this.connectionPointer, query, true);
    }

    /**
     * Executes a prepared statement, without returning the result.
     *
     * @param query The SQL query string
     * @throws MonetDBEmbeddedException If an error in the database occurred
     * @since 2.30
     */
    void executePreparedStatementAndIgnore(String query) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        this.executePrepareStatementAndIgnoreInternal(this.connectionPointer, query, true);
    }

    /**
     * Retrieves a database table for further operations on it such as appending data.
     *
     * @param schemaName The schema of the table
     * @param tableName The name of the table
     * @return A MonetDBTable instance with column details
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public MonetDBTable getMonetDBTable(String schemaName, String tableName) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        MonetDBTable res = this.getMonetDBTableInternal(this.connectionPointer, schemaName, tableName);
        results.put(res.getRandomIdentifier(), res);
        return res;
    }

    /**
     * Retrieves a MonetDB Table in the current schema for further operations.
     *
     * @param tableName The name of the table
     * @return A MonetDBTable instance with column details
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public MonetDBTable getMonetDBTable(String tableName) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        String schemaName = this.getSchema();
        MonetDBTable res = this.getMonetDBTableInternal(this.connectionPointer, schemaName, tableName);
        results.put(res.getRandomIdentifier(), res);
        return res;
    }

    /**
     * Performs a listing of the existing tables with schemas.
     *
     * @param listSystemTables List system's tables as well (default true)
     * @return The query result object, {@code null} if the database is not running
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public QueryResultSet listTables(boolean listSystemTables) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        String query = "select schemas.name as sn, tables.name as tn from sys.tables join sys.schemas on tables.schema_id=schemas.id";
        if (!listSystemTables) {
            query += " where tables.system=false order by sn, tn";
        }
        return this.executeQuery(query + ";");
    }

    /**
     * Check if a table exists in the database.
     *
     * @param schemaName The schema of the table
     * @param tableName The name of the table
     * @return If a the table exists or not
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public boolean checkIfTableExists(String schemaName, String tableName) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        schemaName = StringEscaper.sqlStringEscape(schemaName);
        tableName = StringEscaper.sqlStringEscape(tableName);
        String query =
                "select schemas.name as sn, tables.name as tn from sys.tables join sys.schemas on sys.tables.schema_id=schemas.id where tables.system=true order by sn, tn and schemas.name ='" +
                        schemaName + "' and tables.name ='" + tableName + "';";
        QueryResultSet eqr = this.executeQuery(query);
        eqr.close();
        return eqr.getNumberOfRows() > 0;
    }

    /**
     * Deletes a table if exists in the database.
     *
     * @param schemaName The schema of the table
     * @param tableName The name of the table
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public void removeTable(String schemaName, String tableName) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        schemaName = StringEscaper.sqlStringEscape(schemaName);
        tableName = StringEscaper.sqlStringEscape(tableName);
        String query = "drop table " + schemaName + "." + tableName + ";";
        this.executeUpdate(query);
    }

    /**
     * When the database shuts down, this method is called instead
     */
    protected void closeConnectionImplementation() {
        for(AbstractConnectionResult res : this.results.values()) {
            res.closeResultImplementation();
        }
        this.results.clear();
        if(!this.isClosed()) {
            this.closeConnectionInternal(this.connectionPointer);
            this.connectionPointer = 0;
        }
    }


    /**
     * A brief description of the connection.
     */
    @Override
    public String toString() {
        return "MonetDB EmbeddedConnection " + (this.isClosed() ? "disconnected" : "connected");
    }

    /**
     * Shuts down this connection. Any pending queries connections will be immediately closed as well.
     */
    @Override
    public void close() {
        if(!this.isClosed()) {
            this.closeConnectionImplementation();
            MonetDBEmbeddedDatabase.removeConnection(this, false);
        }
    }

    /**
     * Overriding the finalize method to close the connection
     */
    @Override
    protected void finalize() throws Throwable {
        this.close();
        super.finalize();
    }

    /**
     * Removes a query result from this connection.
     */
    void removeQueryResult(AbstractConnectionResult res) { this.results.remove(res.getRandomIdentifier()); }

    /**
     * Internal implementation of getAutocommit.
     */
    private native boolean getAutoCommitInternal(long connectionPointer) throws MonetDBEmbeddedException;

    /**
     * Internal implementation of setAutocommit.
     */
    private native void setAutoCommitInternal(long connectionPointer, boolean autoCommit)
            throws MonetDBEmbeddedException;

    /**
     * Internal implementation of executeUpdate.
     */
    private native int sendUpdateInternal(long connectionPointer, String query, boolean execute)
            throws MonetDBEmbeddedException;

    /**
     * Internal implementation of executeQuery.
     */
    private native QueryResultSet sendQueryInternal(long connectionPointer, String query, boolean execute)
            throws MonetDBEmbeddedException;

    /**
     * Internal implementation of prepareStatement.
     */
    private native PreparedQueryResultSet prepareStatementInternal(long connectionPointer, String query,
                                                                   boolean execute) throws MonetDBEmbeddedException;

    /**
     * Internal implementation of a prepared statement execution.
     */
    private native ExecResultSet executePrepareStatementInternal(long connectionPointer, String query,
                                                                 boolean execute) throws MonetDBEmbeddedException;

    /**
     * Internal implementation of a prepared statement execution without allocations.
     */
    private native void executePrepareStatementAndIgnoreInternal(long connectionPointer, String query,
                                                                 boolean execute) throws MonetDBEmbeddedException;

    /**
     * Internal implementation of getMonetDBTable.
     */
    private native MonetDBTable getMonetDBTableInternal(long connectionPointer, String schemaName, String tableName)
            throws MonetDBEmbeddedException;

    /**
     * Internal implementation to close a connection.
     */
    private native void closeConnectionInternal(long connectionPointer);
}
