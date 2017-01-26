/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.resultset;

import nl.cwi.monetdb.embedded.env.AbstractConnectionResult;
import nl.cwi.monetdb.embedded.mapping.AbstractResultTable;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedConnection;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedException;
import nl.cwi.monetdb.embedded.mapping.MonetDBRow;
import nl.cwi.monetdb.embedded.mapping.MonetDBToJavaMapping;

import java.math.BigDecimal;
import java.sql.Date;
import java.sql.Time;
import java.sql.Timestamp;
import java.util.Arrays;
import java.util.ListIterator;

/**
 * Embedded MonetDB query result. The query result columns are eagerly copied from the native code to Java.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class QueryResultSet extends AbstractConnectionResult implements Iterable, AbstractResultTable {

    /** The column names. */
    private final String columnNames[];

    /** The column types. */
    private final String columnTypes[];

    /** The column digits. */
    private final int columnDigits[];

    /** The column scales. */
    private final int columnScales[];

    /** The array to keep the data in */
    private final Object[] data;

    /** The number of rows in the query result. */
    private final int numberOfRows;

    private QueryResultSet(MonetDBEmbeddedConnection connection, long tablePointer, String[] columnNames,
                          String[] columnTypes, int[] columnDigits, int[] columnScales, Object[] data,
                          int numberOfRows) {
        super(connection, tablePointer);
        this.columnNames = columnNames;
        this.columnTypes = columnTypes;
        this.columnDigits = columnDigits;
        this.columnScales = columnScales;
        this.data = data;
        this.numberOfRows = numberOfRows;
    }

    @Override
    public int getNumberOfRows() { return this.numberOfRows; }

    @Override
    public int getNumberOfColumns() { return this.columnNames.length; }

    @Override
    public String[] getColumnNames() {
        return columnNames;
    }

    @Override
    public String[] getColumnTypes() {
        return columnTypes;
    }

    @Override
    public MonetDBToJavaMapping[] getMappings() {
        int i = 0;
        MonetDBToJavaMapping[] result = new MonetDBToJavaMapping[this.getNumberOfColumns()];
        for(String col : this.columnTypes) {
            result[i] = MonetDBToJavaMapping.GetJavaMappingFromMonetDBString(col);
        }
        return result;
    }

    @Override
    public int[] getColumnDigits() {
        return columnDigits;
    }

    @Override
    public int[] getColumnScales() {
        return columnScales;
    }

    /**
     * Gets a column index from the result set by name
     *
     * @param columnName AbstractQueryResultSetColumn name
     * @return The index number
     */
    public int getColumnIndexByName(String columnName) {
        int index = 0;
        for (String col : this.columnNames) {
            if (col.equals(columnName)) {
                return index;
            }
            index++;
        }
        throw new ArrayIndexOutOfBoundsException("The column is not present in the result set!");
    }

    /**
     * Gets the current row value as a Java Boolean.
     *
     * @param column The column index starting from 0
     * @return A Java Boolean if the column is a boolean, otherwise a ClassCastException is thrown
     */
    public boolean[] getBooleanColumnByIndex(int column) {
        byte[] bytes = (byte[]) this.data[column];
        boolean[] result = new boolean[this.numberOfRows];
        for(int i = 0 ; i < this.numberOfRows; i++) {
            switch (bytes[i]) {
                case Byte.MIN_VALUE:
                case 0:
                    result[i] = false;
                    break;
                default:
                    result[i] = true;
            }
        }
        return result;
    }

    /**
     * Gets a column as a Java Byte.
     *
     * @param column The column index starting from 0
     * @return A Java Byte column if the column is a tinyint, otherwise a ClassCastException is thrown
     */
    public byte[] getByteColumnByIndex(int column) {
        return (byte[]) this.data[column];
    }

    /**
     * Gets a column as a Java Short.
     *
     * @param column The column index starting from 0
     * @return A Java Short column if the column is a smallint, otherwise a ClassCastException is thrown
     */
    public short[] getShortColumnByIndex(int column) {
        return (short[]) this.data[column];
    }

    /**
     * Gets a column as a Java Integer.
     *
     * @param column The column index starting from 0
     * @return A Java Integer column if the column is an integer or month_interval, otherwise a ClassCastException is
     * thrown
     */
    public int[] getIntColumnByIndex(int column) {
        return (int[]) this.data[column];
    }

    /**
     * Gets a column as a Java Long.
     *
     * @param column The column index starting from 0
     * @return A Java Long column if the column is a bigint or second_interval, otherwise a ClassCastException is thrown
     */
    public long[] getLongColumnByIndex(int column) {
        return (long[]) this.data[column];
    }

    /**
     * Gets a column as a Java Float.
     *
     * @param column The column index starting from 0
     * @return A Java Float column if the column is a real, otherwise a ClassCastException is thrown
     */
    public float[] getFloatColumnByIndex(int column) {
        return (float[]) this.data[column];
    }

    /**
     * Gets a column as a Java Double.
     *
     * @param column The column index starting from 0
     * @return A Java Double column if the column is a double, otherwise a ClassCastException is thrown
     */
    public double[] getDoubleColumnByIndex(int column) {
        return (double[]) this.data[column];
    }

    /**
     * Gets a column as a Java String.
     *
     * @param column The column index starting from 0
     * @return A Java String column if the column is a Char, Varchar or CLOB, otherwise a ClassCastException is thrown
     */
    public String[] getStringColumnByIndex(int column) {
        return (String[]) this.data[column];
    }

    /**
     * Gets a column as a Java byte[] (BLOBs).
     *
     * @param column The column index starting from 0
     * @return A Java byte[] column if the column is a BLOB, otherwise a ClassCastException is thrown
     */
    public byte[][] getBlobColumnByIndex(int column) {
        return (byte[][]) this.data[column];
    }

    /**
     * Gets a column as a Java SQL Date.
     *
     * @param column The column index starting from 0
     * @return A Java SQL Date if the column is a Date, otherwise a ClassCastException is thrown
     */
    public Date[] getDateColumnByIndex(int column) {
        return (Date[]) this.data[column];
    }

    /**
     * Gets a column as a Java SQL Time.
     *
     * @param column The column index starting from 0
     * @return A Java SQL Time if the column is a Time, otherwise a ClassCastException is thrown
     */
    public Time[] getTimeColumnByIndex(int column) {
        return (Time[]) this.data[column];
    }

    /**
     * Gets a column as a Java SQL Timestamp.
     *
     * @param column The column index starting from 0
     * @return A Java SQL Timestamp if the column is a Timestamp, otherwise a ClassCastException is thrown
     */
    public Timestamp[] getTimestampColumnByIndex(int column) {
        return (Timestamp[]) this.data[column];
    }

    /**
     * Gets a column as a Java BigDecimal
     *
     * @param column The column index starting from 0
     * @return A Java BigDecimal column if the column is a Decimal, otherwise a ClassCastException is thrown
     */
    public BigDecimal[] getDecimalColumnByIndex(int column) {
        return (BigDecimal[]) this.data[column];
    }

    /**
     * Gets a Java Boolean column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Boolean if the column is a boolean, otherwise a ClassCastException is thrown
     */
    public boolean[] getBooleanColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getBooleanColumnByIndex(index);
    }

    /**
     * Gets a Java Byte column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Byte column if the column is a tinyint, otherwise a ClassCastException is thrown
     */
    public byte[] getByteColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getByteColumnByIndex(index);
    }

    /**
     * Gets a Java Short column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Short column if the column is a smallint, otherwise a ClassCastException is thrown
     */
    public short[] getShortColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getShortColumnByIndex(index);
    }

    /**
     * Gets a Java Int column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Integer column if the column is an integer or month_interval, otherwise a ClassCastException is
     * thrown
     */
    public int[] getIntColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getIntColumnByIndex(index);
    }

    /**
     * Gets a long column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Long column if the column is a bigint or second_interval, otherwise a ClassCastException is thrown
     */
    public long[] getLongColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getLongColumnByIndex(index);
    }

    /**
     * Gets a float column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Float column if the column is a real, otherwise a ClassCastException is thrown
     */
    public float[] getFloatColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getFloatColumnByIndex(index);
    }

    /**
     * Gets a double column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Double column if the column is a double, otherwise a ClassCastException is thrown
     */
    public double[] getDoubleColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getDoubleColumnByIndex(index);
    }

    /**
     * Gets a String column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java String column if the column is a Char, Varchar or CLOB, otherwise a ClassCastException is thrown
     */
    public String[] getStringColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getStringColumnByIndex(index);
    }

    /**
     * Gets a byte[] column (BLOB) from the result set by name.
     *
     * @param columnName The column name
     * @return A Java byte[] column if the column is a BLOB, otherwise a ClassCastException is thrown
     */
    public byte[][] getBlobColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getBlobColumnByIndex(index);
    }

    /**
     * Gets a Date column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java SQL Date if the column is a Date, otherwise a ClassCastException is thrown
     */
    public Date[] getDateColumnByIndex(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getDateColumnByIndex(index);
    }

    /**
     * Gets a Time column from the result set by name.
     *
     * @param columnName The column name
     * @return  A Java SQL Time if the column is a Time, otherwise a ClassCastException is thrown
     */
    public Time[] getTimeColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getTimeColumnByIndex(index);
    }

    /**
     * Gets a Timestamp column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java SQL Timestamp if the column is a Timestamp, otherwise a ClassCastException is thrown
     */
    public Timestamp[] getTimestampColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getTimestampColumnByIndex(index);
    }

    /**
     * Gets a BigDecimal column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java BigDecimal column if the column is a Decimal, otherwise a ClassCastException is thrown
     */
    public BigDecimal[] getDecimalColumnByIndex(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getDecimalColumnByIndex(index);
    }

    /**
     * Tests if a boolean in the result set is a null value.
     *
     * @param column The column index starting from 0
     * @param row The row index in the column starting from 0
     * @return A boolean indicating if the value is null
     */
    public boolean checkBooleanIsNull(int column, int row) {
        if (row < 0) {
            throw new ArrayIndexOutOfBoundsException("An row smaller than 0?");
        } else if (row > this.numberOfRows) {
            throw new ArrayIndexOutOfBoundsException("The row is larger than the number of rows!");
        }
        return ((byte[])this.data[column])[row] == Byte.MIN_VALUE;
    }

    /**
     * Gets the null mapping of a column by index.
     *
     * @param column The column index starting from 0
     * @return An array of booleans, indicating if the values of the column are null or not.
     */
    public boolean[] getColumnNullMappingsByIndex(int column) {
        boolean[] res = new boolean[this.numberOfRows];
        switch (this.columnTypes[column]) {
            case "boolean":
            case "tinyint":
                byte[] data1 = (byte[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data1[i] == Byte.MIN_VALUE;
                }
                break;
            case "smallint":
                short[] data2 = (short[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data2[i] == Short.MIN_VALUE;
                }
                break;
            case "int":
            case "month_interval":
                int[] data3 = (int[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data3[i] == Integer.MIN_VALUE;
                }
                break;
            case "bigint":
            case "sec_interval":
                long[] data4 = (long[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data4[i] == Long.MIN_VALUE;
                }
                break;
            case "real":
                float[] data5 = (float[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data5[i] == Float.MIN_VALUE;
                }
                break;
            case "double":
                double[] data6 = (double[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data6[i] == Double.MIN_VALUE;
                }
                break;
            default:
                Object[] data7 = (Object[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data7[i] == null;
                }
        }
        return res;
    }

    /**
     * Gets the null mapping of a column by name
     *
     * @param columnName The column name
     * @return An array of booleans, indicating if the values of the column are null or not.
     */
    public boolean[] getNullMappingByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getColumnNullMappingsByIndex(index);
    }

    /**
     * Maps a column to a Java Object representation of the array by index. This is method is used by the
     * fetchResultSetRows to iterate row-wise. Warning! This method creates an Object array for the column and a object
     * for each value which is inefficient for te number of memory allocations it has to make.
     *
     * @param column The column index starting from 0
     * @return An Object array representation of the column.
     */
    public Object[] mapColumnToObjectByIndex(int column) {
        Object[] res;
        switch (this.columnTypes[column]) {
            case "boolean":
                res = new Object[this.numberOfRows];
                byte[] data0 = (byte[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data0[i] == 1;
                }
                break;
            case "tinyint":
                res = new Object[this.numberOfRows];
                byte[] data1 = (byte[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data1[i];
                }
                break;
            case "smallint":
                res = new Object[this.numberOfRows];
                short[] data2 = (short[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data2[i];
                }
                break;
            case "int":
            case "month_interval":
                res = new Object[this.numberOfRows];
                int[] data3 = (int[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data3[i];
                }
                break;
            case "bigint":
            case "sec_interval":
                res = new Object[this.numberOfRows];
                long[] data4 = (long[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data4[i];
                }
                break;
            case "real":
                res = new Object[this.numberOfRows];
                float[] data5 = (float[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data5[i];
                }
                break;
            case "double":
                res = new Object[this.numberOfRows];
                double[] data6 = (double[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data6[i];
                }
                break;
            default:
                res = (Object[]) this.data[column];
        }
        return res;
    }

    /**
     * Maps a column to a Java Object representation of the array by name.
     *
     * @param columnName The column name
     * @return An Object array representation of the column.
     */
    public Object[] mapColumnToObjectByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.mapColumnToObjectByIndex(index);
    }

    /**
     * Fetches rows from the result set.
     *
     * @param startIndex The first row index to retrieve
     * @param endIndex The last row index to retrieve
     * @return The rows as {@code AbstractRowSet}
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
	public QueryResultRowSet fetchResultSetRows(int startIndex, int endIndex) throws MonetDBEmbeddedException {
        if(endIndex < startIndex) {
            int aux = startIndex;
            startIndex = endIndex;
            endIndex = aux;
        }
        if (startIndex < 0) {
            throw new ArrayIndexOutOfBoundsException("The start index must be larger than 0!");
        } else if (endIndex > this.numberOfRows) {
            throw new ArrayIndexOutOfBoundsException("The index must be smaller than the number of elements in the columns!");
        } else if(startIndex == endIndex) {
            throw new ArrayIndexOutOfBoundsException("Retrieving 0 rows?");
        }
        int numberOfRowsToRetrieve = endIndex - startIndex;
        Object[][] temp = new Object[numberOfRowsToRetrieve][this.getNumberOfColumns()];
		for (int i = 0 ; i < this.getNumberOfColumns(); i++) {
		    Object[] aux = this.mapColumnToObjectByIndex(i);
            Object[] nextColumn = Arrays.copyOfRange(aux, startIndex, endIndex);
            for(int j = 0; j < numberOfRowsToRetrieve; j++) {
                temp[j][i] = nextColumn[j];
			}
		}
        return new QueryResultRowSet(this, this.getMappings(), temp);
	}

    /**
     * Fetches the first N rows from the result set.
     *
     * @param n The last row index to retrieve
     * @return The rows as {@code AbstractRowSet}
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public QueryResultRowSet fetchFirstNRowValues(int n) throws MonetDBEmbeddedException {
        return this.fetchResultSetRows(0, n);
    }

    /**
     * Fetches all rows from the result set.
     *
     * @return The rows as {@code AbstractRowSet}
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public QueryResultRowSet fetchAllRowValues() throws MonetDBEmbeddedException {
        return this.fetchResultSetRows(0, this.numberOfRows);
    }

    @Override
    public ListIterator<MonetDBRow> iterator() {
        try {
            return Arrays.asList(this.fetchAllRowValues().getAllRows()).listIterator();
        } catch (MonetDBEmbeddedException ex) {
            return null;
        }
    }
}
