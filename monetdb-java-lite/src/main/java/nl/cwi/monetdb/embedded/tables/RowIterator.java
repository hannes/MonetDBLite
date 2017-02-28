/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.tables;

import nl.cwi.monetdb.embedded.mapping.AbstractRowSet;
import nl.cwi.monetdb.embedded.mapping.MonetDBRow;

/**
 * The iterator class for a MonetDB table. It's possible to inspect the current currentColumns in the row as well
 * their mappings.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class RowIterator extends AbstractRowSet {

    /**
     * The current table row number on the fetched set.
     */
    private int currentIterationNumber = 0;

    /**
     * The first row in the table to iterate.
     */
    private final int firstIndex;

    /**
     * The last row in the table to iterate.
     */
    private final int lastIndex;

    RowIterator(MonetDBTable table, Object[][] rows, int firstIndex, int lastIndex) {
        super(table, rows);
        this.firstIndex = firstIndex;
        this.lastIndex = lastIndex;
    }

    @Override
    public int getColumnIndexByName(String columnName) {
        int numberOfColumns = this.getQueryResultTable().getNumberOfColumns();
        String[] columnNames = new String[numberOfColumns];
        this.getQueryResultTable().getColumnNames(columnNames);
        int index = 0;
        for (String colName : columnNames) {
            if (columnName.equals(colName)) {
                return this.getColumnByIndex(index + 1);
            }
            index++;
        }
        throw new ArrayIndexOutOfBoundsException("The column is not present in the result set!");
    }

    /**
     * Gets the original table of this iterator.
     *
     * @return The original table of this iterator
     */
    public MonetDBTable getTable() { return (MonetDBTable) this.getQueryResultTable(); }

    /**
     * Gets the first index used on this iteration.
     *
     * @return The first index used on this iteration
     */
    public int getFirstIndex() { return firstIndex; }

    /**
     * Gets the last index used on this iteration.
     *
     * @return The last index used on this iteration
     */
    public int getLastIndex() { return lastIndex; }

    /**
     * Gets the current iteration number.
     *
     * @return The current iteration number
     */
    public int getCurrentIterationNumber() { return currentIterationNumber; }

    /**
     * Gets the current row number of the table in the iteration.
     *
     * @return The current row number of the table in the iteration
     */
    public int getCurrentTableRowNumber() { return this.firstIndex + this.currentIterationNumber; }

    /**
     * Gets the current row currentColumns values as Java objects.
     *
     * @return The current row currentColumns values as Java objects
     */
    public MonetDBRow getCurrentRow() { return this.rows[this.currentIterationNumber]; }

    /**
     * Checks if there are more rows to iterate after the current one.
     *
     * @return There are more rows to iterate
     */
    public boolean hasMore() { return this.firstIndex + this.currentIterationNumber <= this.lastIndex; }

    /**
     * Gets a column value as a Java class.
     *
     * @param <T> A Java class mapped to a MonetDB data type
     * @param index The index of the column
     * @param javaClass The Java class
     * @return The column value as a Java class
     */
    public <T> T getColumnByIndex(int index, Class<T> javaClass) {
        return javaClass.cast(this.getCurrentRow().getColumnByIndex(index, javaClass));
    }

    /**
     * Gets a column value as a Java class using the default mapping.
     *
     * @param <T> A Java class mapped to a MonetDB data type
     * @param index The index of the column
     * @return The column value as a Java class
     */
    public <T> T getColumnByIndex(int index) {
        Class<T> javaClass = this.mappings[index - 1].getJavaClass();
        return javaClass.cast(this.getCurrentRow().getColumnByIndex(index));
    }

    /**
     * Gets a column value as a Java class.
     *
     * @param <T> A Java class mapped to a MonetDB data type
     * @param columnName The name of the column
     * @param javaClass The Java class
     * @return The column value as a Java class
     */
    public <T> T getColumnByName(String columnName, Class<T> javaClass) {
        int index = this.getColumnIndexByName(columnName);
        return this.getColumnByIndex(index, javaClass);
    }

    /**
     * Gets a column value as a Java class using the default mapping.
     *
     * @param <T> A Java class mapped to a MonetDB data type
     * @param columnName The name of the column
     * @return The column value as a Java class
     */
    public <T> T getColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getColumnByIndex(index);
    }

    /**
     * Sets the next value to iterate.
     */
    void setNextIteration() { this.currentIterationNumber++; }
}
