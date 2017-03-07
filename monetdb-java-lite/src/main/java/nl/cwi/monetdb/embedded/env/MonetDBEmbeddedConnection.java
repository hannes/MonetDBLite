/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.env;

import nl.cwi.monetdb.embedded.resultset.*;
import nl.cwi.monetdb.embedded.tables.MonetDBTable;
import nl.cwi.monetdb.embedded.utils.Randomizer;
import nl.cwi.monetdb.embedded.utils.StringEscaper;

import java.io.Closeable;
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
        this.randomIdentifier = Randomizer.GenerateNextLong() + connectionPointer;
	}

    /**
     * Gets a long number randomly generated, used to identify the result set.
     *
     * @return A random long identifier
     */
    public long getRandomIdentifier() { return randomIdentifier; }

    /**
     * Tells if the connection has been closed or not.
     *
     * @return A boolean indicating if the connection has been cleaned or not
     */
    public boolean isConnectionClosed() { return this.connectionPointer == 0; }

    private void checkConnectionIsNotClosed() throws MonetDBEmbeddedException {
        if(this.isConnectionClosed()) {
            throw new MonetDBEmbeddedException("This connection is already closed!");
        }
    }

    /**
     * Gets the current schema set on the connection.
     *
     * @return A Java String with the name of the schema
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public String getCurrentSchema() throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        QueryResultSet eqr = this.sendQuery("SELECT current_schema FROM sys.var();");
        String res = eqr.getStringByColumnIndexAndRow(1, 1);
        eqr.close();
        return res;
    }

    /**
     * Sets the current schema on the connection.
     *
     * @param newSchema Java String with the name of the schema
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public void setCurrentSchema(String newSchema) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        newSchema = StringEscaper.SQLStringEscape(newSchema);
        this.sendUpdate("SET SCHEMA " + newSchema + ";");
    }

    /**
     * Begins a transaction.
     *
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public void startTransaction() throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        this.sendUpdate("START TRANSACTION;");
    }

    /**
     * Commits the current transaction.
     *
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public void commit() throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        this.sendUpdate("COMMIT;");
    }

    /**
     * Rollbacks the current transaction.
     *
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public void rollback() throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        this.sendUpdate("ROLLBACK;");
    }

    /**
     * Executes a SQL query without a result set.
     *
     * @param query The SQL query string
     * @return The number of rows affected
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public int sendUpdate(String query) throws MonetDBEmbeddedException {
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
	public QueryResultSet sendQuery(String query) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
		if (!query.endsWith(";")) {
            query += ";";
		}
        QueryResultSet res = this.sendQueryInternal(this.connectionPointer, query, true);
        results.put(res.getRandomIdentifier(), res);
        return res;
	}

    /**
     * Retrieves a MonetDB Table for further operations
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
     * Retrieves a MonetDB Table in the current schema for further operations
     *
     * @param tableName The name of the table
     * @return A MonetDBTable instance with column details
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public MonetDBTable getMonetDBTable(String tableName) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        String schemaName = this.getCurrentSchema();
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
        return this.sendQuery(query + ";");
    }

    /**
     * Check if a table it exists.
     *
     * @param schemaName The schema of the table
     * @param tableName The name of the table
     * @return If a the table exists or not
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public boolean checkIfTableExists(String schemaName, String tableName) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        schemaName = StringEscaper.SQLStringEscape(schemaName);
        tableName = StringEscaper.SQLStringEscape(tableName);
        String query =
                "select schemas.name as sn, tables.name as tn from sys.tables join sys.schemas on sys.tables.schema_id=schemas.id where tables.system=true order by sn, tn and schemas.name ='" +
                        schemaName + "' and tables.name ='" + tableName + "';";
        QueryResultSet eqr = this.sendQuery(query);
        eqr.close();
        return eqr.getNumberOfRows() > 0;
    }

    /**
     * Deletes a table if it exists.
     *
     * @param schemaName The schema of the table
     * @param tableName The name of the table
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public void removeTable(String schemaName, String tableName) throws MonetDBEmbeddedException {
        this.checkConnectionIsNotClosed();
        schemaName = StringEscaper.SQLStringEscape(schemaName);
        tableName = StringEscaper.SQLStringEscape(tableName);
        String query = "drop table " + schemaName + "." + tableName + ";";
        this.sendUpdate(query);
    }

    /**
     * When the database shuts down, this method is called instead
     */
    protected void closeConnectionImplementation() {
        for(AbstractConnectionResult res : this.results.values()) {
            res.closeResultImplementation();
        }
        this.results.clear();
        if(!this.isConnectionClosed()) {
            this.closeConnectionInternal(this.connectionPointer);
            this.connectionPointer = 0;
        }
    }

    /**
     * Shuts down this connection. Any pending queries connections will be immediately closed as well.
     */
    @Override
    public void close() {
        if(!this.isConnectionClosed()) {
            this.closeConnectionImplementation();
            MonetDBEmbeddedDatabase.RemoveConnection(this, false);
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
     * Internal implementation of sendUpdate.
     */
    private native int sendUpdateInternal(long connectionPointer, String query, boolean execute)
            throws MonetDBEmbeddedException;

    /**
     * Internal implementation of sendQuery.
     */
    private native QueryResultSet sendQueryInternal(long connectionPointer, String query, boolean execute)
            throws MonetDBEmbeddedException;

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
