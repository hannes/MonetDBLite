/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.tables;

import nl.cwi.monetdb.embedded.env.AbstractConnectionResult;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedException;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedConnection;
import nl.cwi.monetdb.embedded.mapping.MonetDBRow;
import nl.cwi.monetdb.embedded.mapping.MonetDBToJavaMapping;
import nl.cwi.monetdb.embedded.resultset.QueryResultSet;

import java.math.BigDecimal;

/**
 * Java representation of a MonetDB table. It's possible to perform several CRUD operations using the respective
 * provided interfaces.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class MonetDBTable extends AbstractConnectionResult {

    /** The table's schema */
    private final String tableSchema;

    /** The table's name */
    private final String tableName;

    /** The table's rounding mode for big decimals */
    private int roundingMode = BigDecimal.ROUND_HALF_EVEN;

    private MonetDBTable(MonetDBEmbeddedConnection connection, String tableSchema, String tableName) {
        super(connection);
        this.tableSchema = tableSchema;
        this.tableName = tableName;
    }

    @Override
    public native int getNumberOfColumns();

    /**
     * Gets the current number of rows in the table, or -1 if an error in the database has occurred.
     *
     * @return The number of rows in the table.
     */
    @Override
    public int getNumberOfRows() {
        int res;
        try {
            String query = "SELECT COUNT(*) FROM " + this.getTableSchema() + "." + this.getTableName() + ";";
            QueryResultSet eqr = this.getConnection().sendQuery(query);
            res = (int) eqr.getLongByColumnIndexAndRow(1, 1);
            eqr.close();
        } catch (MonetDBEmbeddedException ex) {
            res = -1;
        }
        return res;
    }

    protected native void getColumnNamesInternal(String[] input);

    protected native void getColumnTypesInternal(String[] input);

    protected native void getMappingsInternal(MonetDBToJavaMapping[] input);

    protected native void getColumnDigitsInternal(int[] input);

    protected native void getColumnScalesInternal(int[] input);

    protected native void getColumnNullableIndexesInternal(boolean[] input);

    protected native void getColumnDefaultValuesInternal(String[] input);

    /**
     * Gets the table schema name.
     *
     * @return The table schema name
     */
    public String getTableSchema() { return this.tableSchema; }

    /**
     * Gets the table name.
     *
     * @return The table name
     */
    public String getTableName() { return this.tableName; }

    /**
     * Gets the current rounding mode for decimals in this table.
     *
     * @return The current rounding mode for decimals in this table.
     */
    public int getRoundingMode() {
        return this.roundingMode;
    }

    /**
     * Sets the current rounding mode for decimals in this table, from the rounding modes in the BigDecimal class.
     * It has to be value between BigDecimal.ROUND_HALF_UP and BigDecimal.ROUND_HALF_EVEN.
     *
     * @param roundingMode The roundingMode mode value to set, between BigDecimal.ROUND_HALF_UP and
     *                     BigDecimal.ROUND_HALF_EVEN
     */
    public void setRoundingMode(int roundingMode) {
        if(roundingMode < BigDecimal.ROUND_HALF_UP || roundingMode > BigDecimal.ROUND_HALF_EVEN) {
            throw new IllegalArgumentException("Unexpected rounding mode!");
        }
        this.roundingMode = roundingMode;
    }

    @Override
    public void getColumnNames(String[] input) {
        this.checkMetadataArrayLength(input);
        this.getColumnNamesInternal(input);
    }

    @Override
    public void getColumnTypes(String[] input) {
        this.checkMetadataArrayLength(input);
        this.getColumnTypesInternal(input);
    }

    @Override
    public void getMappings(MonetDBToJavaMapping[] input) {
        this.checkMetadataArrayLength(input);
        this.getMappingsInternal(input);
    }

    @Override
    public void getColumnDigits(int[] input) {
        this.checkMetadataArrayLength(input);
        this.getColumnDigitsInternal(input);
    }

    @Override
    public void getColumnScales(int[] input) {
        this.checkMetadataArrayLength(input);
        this.getColumnScalesInternal(input);
    }

    /**
     * Gets the columns nullable indexes as an array.
     *
     * @param input The columns nullable indexes array to fill
     */
    public void getColumnNullableIndexes(boolean[] input) {
        this.checkMetadataArrayLength(input);
        this.getColumnNullableIndexesInternal(input);
    }

    /**
     * Gets the columns default values in an array.
     *
     * @param input The columns default values array to fill
     */
    public void getColumnDefaultValues(String[] input) {
        this.checkMetadataArrayLength(input);
        this.getColumnDefaultValuesInternal(input);
    }

    /**
     * Gets a column metadata by index.
     *
     * @param index The column index (starting from 1)
     * @return The column metadata, {@code null} if index not in bounds
     */
    public native MonetDBTableColumn getColumnMetadataByIndex(int index);

    /**
     * Gets a column metadata by name.
     *
     * @param name The column name
     * @return The column metadata, {@code null} if not found
     */
    public native MonetDBTableColumn getColumnMetadataByName(String name);

    /**
     * Gets all columns metadata.
     *
     * @return An array instance of columns metadata
     */
    public native MonetDBTableColumn[] getAllColumnsMetadata();

    /**
     * Private method to check the limits of iteration.
     *
     * @param iterator The iterator to check
     * @return An integer array with the limits fixed
     */
    private int[] prepareIterator(IMonetDBTableBaseIterator iterator) {
        int[] res = {iterator.getFirstRowToIterate(), iterator.getLastRowToIterate()};
        if(res[1] < res[0]) {
            res[0] ^= res[1];
            res[1] ^= res[0];
            res[0] ^= res[1];
        }
        if (res[0] < 1) {
            res[0] = 1;
        }
        int numberOfRows = this.getNumberOfRows();
        if (res[1] >= numberOfRows) {
            res[1] = numberOfRows;
        }
        return res;
    }

    /**
     * Iterate over the table using a {@link IMonetDBTableCursor} instance.
     *
     * @param cursor The iterator with the business logic
     * @return The number of rows iterated
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public int iterateTable(IMonetDBTableCursor cursor) throws MonetDBEmbeddedException {
        int[] limits = this.prepareIterator(cursor);
        int res = 0;
        String query = "SELECT * FROM " + this.getTableSchema() + "." + this.getTableName()
                + " LIMIT " + (limits[1] - limits[0] + 1) + " OFFSET " + (limits[0] - 1) + ";";

        QueryResultSet eqr = this.getConnection().sendQuery(query);
        MonetDBRow[] array = eqr.fetchAllRowValues().getAllRows();
        eqr.close();
        Object[][] data = new Object[eqr.getNumberOfRows()][this.getNumberOfColumns()];
        for(int i = 0 ; i < eqr.getNumberOfRows() ; i++) {
            data[i] = array[i].getAllColumns();
        }

        RowIterator ri = new RowIterator(this, data, limits[0], limits[1]);
        while(ri.hasMore()) {
            cursor.processNextRow(ri);
            ri.setNextIteration();
            res++;
        }
        return res;
    }

    /**
     * Appends new rows to the table column-wise.
     *
     * @param input An array of columns to append
     * @return The number of rows appended
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public int appendColumns(Object[] input) throws MonetDBEmbeddedException {
        int numberOfColumns = this.getNumberOfColumns();
        if (input.length != numberOfColumns) {
            throw new ArrayStoreException("The number of columns between the input and the table is not consistent!");
        }
        MonetDBToJavaMapping[] mappings = new MonetDBToJavaMapping[numberOfColumns];
        this.getMappings(mappings);
        int[] javaIndexes = new int[numberOfColumns];
        for (int i = 0; i < mappings.length; i++) {
            javaIndexes[i] = mappings[i].ordinal();
        }
        return this.appendColumnsInternal(input, javaIndexes, this.roundingMode);
    }

    @Override
    protected void closeResultImplementation() {} //Do Nothing!!!

    private native int appendColumnsInternal(Object[] data, int[] javaIndexes, int roundingMode)
            throws MonetDBEmbeddedException;
}
