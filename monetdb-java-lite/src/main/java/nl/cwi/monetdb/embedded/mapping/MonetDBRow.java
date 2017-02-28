/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.mapping;

import java.util.Arrays;
import java.util.ListIterator;

/**
 * A single MonetDB row in a result set.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class MonetDBRow implements Iterable {

    /**
     * The original row result set from this row.
     */
    private final AbstractRowSet originalSet;

    /**
     * The columns values as Java objects.
     */
    private Object[] columns;

    MonetDBRow(AbstractRowSet originalSet, Object[] columns) {
        this.originalSet = originalSet;
        this.columns = columns;
    }

    /**
     * Gets the original row result set from this row.
     *
     * @return The original row result set from this row
     */
    public AbstractRowSet getRowSet() { return originalSet; }

    /**
     * Gets the columns values as Java objects.
     *
     * @return The columns values as Java objects
     */
    public Object[] getAllColumns() { return columns; }

    /**
     * Sets all columns values as Java objects. Warning - this method does not override the contents in the database!
     *
     * @param values An object array of the elements to update
     */
    public void setAllColumns(Object[] values) {
        if(values.length != this.columns.length)
            throw new ArrayStoreException("The values array and the columns length differ!");
        this.columns = values;
    }

    /**
     * Gets the number of columns.
     *
     * @return The number of columns
     */
    public int getNumberOfColumns() { return columns.length; }

    /**
     * Gets a column value as a Java class.
     *
     * @param <T> A Java class mapped to a MonetDB data type
     * @param index The index of the column
     * @param javaClass The Java class
     * @return The column value as a Java class
     */
    public <T> T getColumnByIndex(int index, Class<T> javaClass) { return javaClass.cast(columns[index - 1]); }

    /**
     * Gets a column value as a Java class using the default mapping.
     *
     * @param <T> A Java class mapped to a MonetDB data type
     * @param index The index of the column
     * @return The column value as a Java class
     */
    public <T> T getColumnByIndex(int index) {
        Class<T> javaClass = this.originalSet.mappings[index - 1].getJavaClass();
        return javaClass.cast(columns[index - 1]);
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
        int index =  this.getRowSet().getColumnIndexByName(columnName);
        return javaClass.cast(columns[index - 1]);
    }

    /**
     * Gets a column value as a Java class using the default mapping.
     *
     * @param <T> A Java class mapped to a MonetDB data type
     * @param columnName The name of the column
     * @return The column value as a Java class
     */
    public <T> T getColumnByName(String columnName) {
        int index =  this.getRowSet().getColumnIndexByName(columnName);
        Class<T> javaClass = this.originalSet.mappings[index - 1].getJavaClass();
        return javaClass.cast(columns[index - 1]);
    }

    /**
     * Sets a column value as a Java class. Warning - this method does not override the contents in the database!
     *
     * @param <T> A Java class mapped to a MonetDB data type
     * @param index The index of the column
     * @param value The value to set
     */
    public <T> void setColumnByIndex(int index, T value) {
        this.columns[index - 1] = this.originalSet.mappings[index - 1].getJavaClass().cast(value);
    }

    /**
     * Sets a column value as a Java class. Warning - this method does not override the contents in the database!
     *
     * @param <T> A Java class mapped to a MonetDB data type
     * @param index The index of the column
     * @param javaClass The Java class
     * @param value The value to set
     */
    public <T> void setColumnByIndex(int index, Class<T> javaClass, T value) {
        this.columns[index - 1] = javaClass.cast(value);
    }

    /**
     * Sets a column value as a Java class. Warning - this method does not override the contents in the database!
     *
     * @param <T> A Java class mapped to a MonetDB data type
     * @param columnName The name of the column
     * @param value The value to set
     */
    public <T> void setColumnByName(String columnName, T value) {
        int index =  this.getRowSet().getColumnIndexByName(columnName);
        this.columns[index - 1] = this.originalSet.mappings[index - 1].getJavaClass().cast(value);
    }

    /**
     * Sets a column value as a Java class. Warning - this method does not override the contents in the database!
     *
     * @param <T> A Java class mapped to a MonetDB data type
     * @param columnName The name of the column
     * @param javaClass The Java class
     * @param value The value to set
     */
    public <T> void setColumnByName(String columnName, Class<T> javaClass, T value) {
        int index =  this.getRowSet().getColumnIndexByName(columnName);
        this.columns[index - 1] = javaClass.cast(value);
    }

    @Override
    public ListIterator<Object> iterator() { return Arrays.asList(this.columns).listIterator(); }
}
