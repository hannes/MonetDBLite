/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.resultset;

import nl.cwi.monetdb.embedded.env.AbstractConnectionResult;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedConnection;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedException;
import nl.cwi.monetdb.embedded.mapping.MonetDBRow;
import nl.cwi.monetdb.embedded.mapping.MonetDBToJavaMapping;
import nl.cwi.monetdb.embedded.mapping.NullMappings;

import java.lang.reflect.Array;
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
public strictfp final class QueryResultSet extends AbstractConnectionResult implements Iterable {

    /**
     * Get the string representation of a typesID
     *
     * @param typeID - The typeID to convert
     * @return The String representation of it
     */
    private static String TypeIDToString(int typeID) {
        switch (typeID) {
            case 1:
                return "boolean";
            case 2:
                return "tinyint";
            case 3:
                return "smallint";
            case 4:
                return "int";
            case 5:
                return "bigint";
            case 6:
                return "real";
            case 7:
                return "double";
            case 8:
                return "char";
            case 9:
                return "date";
            case 10:
                return "timestamp";
            case 11:
                return "time";
            case 12:
                return "blob";
            case 13:
                return "decimal";
            default:
                return "unknown";
        }
    }

    /** The C structPointer */
    private volatile long structPointer;

    /** The number of columns in the query result. */
    private final int numberOfColumns;

    /** The number of rows in the query result. */
    private final int numberOfRows;

    /** The column names. */
    private String[] columnNames;

    /** For debugging only */
    private int[] typesIDs;

    private QueryResultSet(MonetDBEmbeddedConnection connection, long structPointer, int numberOfColumns,
                           int numberOfRows, int[] typesIDs) {
        super(connection);
        this.structPointer = structPointer;
        this.numberOfColumns = numberOfColumns;
        this.numberOfRows = numberOfRows;
        this.typesIDs = typesIDs;
        this.columnNames = null;
    }

    /**
     * Tells if the connection of this statement result has been closed or not.
     *
     * @return A boolean indicating if the statement result has been cleaned or not
     */
    public boolean isQueryResultSetClosed() { return this.structPointer == 0; }

    private void checkQueryResultSetIsNotClosed() throws MonetDBEmbeddedException {
        if(this.isQueryResultSetClosed()) {
            throw new MonetDBEmbeddedException("This QueryResultSet is already closed!");
        }
    }

    @Override
    public int getNumberOfRows() { return this.numberOfRows; }

    @Override
    public int getNumberOfColumns() { return this.numberOfColumns; }

    private native void getColumnNamesInternal(long tablePointer, String[] input);

    private native void getColumnTypesInternal(long tablePointer, String[] input);

    private native void getMappingsInternal(long tablePointer,  MonetDBToJavaMapping[] input);

    private native void getColumnDigitsInternal(long tablePointer, int[] input);

    private native void getColumnScalesInternal(long tablePointer, int[] input);

    @Override
    public void getColumnNames(String[] input) throws MonetDBEmbeddedException {
        this.checkQueryResultSetIsNotClosed();
        this.checkMetadataArrayLength(input);
        this.getColumnNamesInternal(this.structPointer, input);
    }

    @Override
    public void getColumnTypes(String[] input) throws MonetDBEmbeddedException {
        this.checkQueryResultSetIsNotClosed();
        this.checkMetadataArrayLength(input);
        this.getColumnTypesInternal(this.structPointer, input);
    }

    @Override
    public void getMappings(MonetDBToJavaMapping[] input) throws MonetDBEmbeddedException {
        this.checkQueryResultSetIsNotClosed();
        this.checkMetadataArrayLength(input);
        this.getMappingsInternal(this.structPointer, input);
    }

    @Override
    public void getColumnDigits(int[] input) throws MonetDBEmbeddedException {
        this.checkQueryResultSetIsNotClosed();
        this.checkMetadataArrayLength(input);
        this.getColumnDigitsInternal(this.structPointer, input);
    }

    @Override
    public void getColumnScales(int[] input) throws MonetDBEmbeddedException {
        this.checkQueryResultSetIsNotClosed();
        this.checkMetadataArrayLength(input);
        this.getColumnScalesInternal(this.structPointer, input);
    }

    /**
     * Gets a column index from the result set by name
     *
     * @param columnName AbstractQueryResultSetColumn name
     * @return The index number
     */
    public int getColumnIndexByName(String columnName) {
        if(this.columnNames == null) { //instantiate if it not exists yet
            this.columnNames = new String[this.numberOfColumns];
            this.getColumnNamesInternal(this.structPointer, this.columnNames);
        }
        int index = 0;
        for (String col : this.columnNames) {
            if (col.equals(columnName)) {
                return index + 1;
            }
            index++;
        }
        throw new ArrayIndexOutOfBoundsException("The column with the name " + columnName + " is not present in the result set!");
    }

    private native byte getByteByColumnAndRowInternal(long structPointer, int column, int row);

    private native short getShortByColumnAndRowInternal(long structPointer, int column, int row);

    private native int getIntegerByColumnAndRowInternal(long structPointer, int column, int row);

    private native long getLongByColumnAndRowInternal(long structPointer, int column, int row);

    private native float getFloatByColumnAndRowInternal(long structPointer, int column, int row);

    private native double getDoubleByColumnAndRowInternal(long structPointer, int column, int row);

    private native String getStringByColumnAndRowInternal(long structPointer, int column, int row);

    private native Date getDateByColumnAndRowInternal(long structPointer, int column, int row);

    private native Timestamp getTimestampByColumnAndRowInternal(long structPointer, int column, int row);

    private native Time getTimeByColumnAndRowInternal(long structPointer, int column, int row);

    private native BigDecimal getDecimalByColumnAndRowInternal(long structPointer, int column, int row);

    private native byte[] getBlobByColumnAndRowInternal(long structPointer, int column, int row);

    private void checkRangesScalars(int column, int row) throws MonetDBEmbeddedException {
        this.checkQueryResultSetIsNotClosed();
        if(column < 1) {
            throw new ArrayIndexOutOfBoundsException("The column index is smaller than 1?");
        } else if(column > this.numberOfColumns) {
            throw new ArrayIndexOutOfBoundsException("The column index is larger than the number of columns? "
                    + column + " > " + this.numberOfColumns);
        } else if(row < 1) {
            throw new ArrayIndexOutOfBoundsException("The row index is smaller than 1?");
        } else if(row > this.numberOfRows) {
            throw new ArrayIndexOutOfBoundsException("The row index is larger than the number of rows?"
                    + row + " > " + this.numberOfRows);
        }
    }

    /**
     * Retrieves a single boolean value in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The boolean value
     */
    public boolean getBooleanByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                return this.getByteByColumnAndRowInternal(this.structPointer, column, row) != 0;
            case 3:
                return this.getShortByColumnAndRowInternal(this.structPointer, column, row) != 0;
            case 4:
                return this.getIntegerByColumnAndRowInternal(this.structPointer, column, row) != 0;
            case 5:
                return this.getLongByColumnAndRowInternal(this.structPointer, column, row) != 0;
            case 6:
                return this.getFloatByColumnAndRowInternal(this.structPointer, column, row) != 0.0f;
            case 7:
                return this.getDoubleByColumnAndRowInternal(this.structPointer, column, row) != 0.0d;
            case 8:
                String aux6 = this.getStringByColumnAndRowInternal(this.structPointer, column, row);
                return Boolean.parseBoolean(aux6);
            case 13:
                BigDecimal aux7 = this.getDecimalByColumnAndRowInternal(this.structPointer, column, row);
                return (aux7 != null) && !aux7.equals(BigDecimal.ZERO);
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to boolean!");
        }
    }

    /**
     * Retrieves a single byte value in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The byte value
     */
    public byte getByteByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                return this.getByteByColumnAndRowInternal(this.structPointer, column, row);
            case 3:
                short aux1 = this.getShortByColumnAndRowInternal(this.structPointer, column, row);
                return (aux1 == NullMappings.getShortNullConstant()) ? NullMappings.getByteNullConstant() : (byte) aux1;
            case 4:
                int aux2 = this.getIntegerByColumnAndRowInternal(this.structPointer, column, row);
                return (aux2 == NullMappings.getIntNullConstant()) ? NullMappings.getByteNullConstant() : (byte) aux2;
            case 5:
                long aux3 = this.getLongByColumnAndRowInternal(this.structPointer, column, row);
                return (aux3 == NullMappings.getLongNullConstant()) ? NullMappings.getByteNullConstant() : (byte) aux3;
            case 6:
                float aux4 = this.getFloatByColumnAndRowInternal(this.structPointer, column, row);
                return (aux4 == NullMappings.getFloatNullConstant()) ? NullMappings.getByteNullConstant() : (byte) Math.round(aux4);
            case 7:
                double aux5 = this.getDoubleByColumnAndRowInternal(this.structPointer, column, row);
                return (aux5 == NullMappings.getDoubleNullConstant()) ? NullMappings.getByteNullConstant() : (byte) Math.round(aux5);
            case 8:
                String aux6 = this.getStringByColumnAndRowInternal(this.structPointer, column, row);
                return aux6 == null ? NullMappings.getByteNullConstant() : Byte.parseByte(aux6);
            case 13:
                BigDecimal aux7 = this.getDecimalByColumnAndRowInternal(this.structPointer, column, row);
                return aux7 == null ? NullMappings.getByteNullConstant() : aux7.byteValue();
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to byte!");
        }
    }

    /**
     * Retrieves a single short value in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The short value
     */
    public short getShortByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte aux1 = this.getByteByColumnAndRowInternal(this.structPointer, column, row);
                return (aux1 == NullMappings.getByteNullConstant()) ? NullMappings.getShortNullConstant() : aux1;
            case 3:
                return this.getShortByColumnAndRowInternal(this.structPointer, column, row);
            case 4:
                int aux2 = this.getIntegerByColumnAndRowInternal(this.structPointer, column, row);
                return (aux2 == NullMappings.getIntNullConstant()) ? NullMappings.getShortNullConstant() : (short) aux2;
            case 5:
                long aux3 = this.getLongByColumnAndRowInternal(this.structPointer, column, row);
                return (aux3 == NullMappings.getLongNullConstant()) ? NullMappings.getShortNullConstant() : (short) aux3;
            case 6:
                float aux4 = this.getFloatByColumnAndRowInternal(this.structPointer, column, row);
                return (aux4 == NullMappings.getFloatNullConstant()) ? NullMappings.getShortNullConstant() : (short) Math.round(aux4);
            case 7:
                double aux5 = this.getDoubleByColumnAndRowInternal(this.structPointer, column, row);
                return (aux5 == NullMappings.getDoubleNullConstant()) ? NullMappings.getShortNullConstant() : (short) Math.round(aux5);
            case 8:
                String aux6 = this.getStringByColumnAndRowInternal(this.structPointer, column, row);
                return aux6 == null ? NullMappings.getShortNullConstant() : Short.parseShort(aux6);
            case 13:
                BigDecimal aux7 = this.getDecimalByColumnAndRowInternal(this.structPointer, column, row);
                return aux7 == null ? NullMappings.getShortNullConstant() : aux7.shortValue();
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to short!");
        }
    }

    /**
     * Retrieves a single integer value in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The integer value
     */
    public int getIntegerByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte aux1 = this.getByteByColumnAndRowInternal(this.structPointer, column, row);
                return (aux1 == NullMappings.getByteNullConstant()) ? NullMappings.getIntNullConstant() : aux1;
            case 3:
                short aux2 = this.getShortByColumnAndRowInternal(this.structPointer, column, row);
                return (aux2 == NullMappings.getShortNullConstant()) ? NullMappings.getIntNullConstant() : aux2;
            case 4:
                return this.getIntegerByColumnAndRowInternal(this.structPointer, column, row);
            case 5:
                long aux3 = this.getLongByColumnAndRowInternal(this.structPointer, column, row);
                return (aux3 == NullMappings.getLongNullConstant()) ? NullMappings.getIntNullConstant() : (int) aux3;
            case 6:
                float aux4 = this.getFloatByColumnAndRowInternal(this.structPointer, column, row);
                return (aux4 == NullMappings.getFloatNullConstant()) ? NullMappings.getIntNullConstant() : Math.round(aux4);
            case 7:
                double aux5 = this.getDoubleByColumnAndRowInternal(this.structPointer, column, row);
                return (aux5 == NullMappings.getDoubleNullConstant()) ? NullMappings.getIntNullConstant() : (int) Math.round(aux5);
            case 8:
                String aux6 = this.getStringByColumnAndRowInternal(this.structPointer, column, row);
                return aux6 == null ? NullMappings.getIntNullConstant() : Integer.parseInt(aux6);
            case 13:
                BigDecimal aux7 = this.getDecimalByColumnAndRowInternal(this.structPointer, column, row);
                return aux7 == null ? NullMappings.getIntNullConstant() : aux7.intValue();
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to int!");
        }
    }

    /**
     * Retrieves a single long value in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The long value
     */
    public long getLongByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte aux1 = this.getByteByColumnAndRowInternal(this.structPointer, column, row);
                return (aux1 == NullMappings.getByteNullConstant()) ? NullMappings.getLongNullConstant() : aux1;
            case 3:
                short aux2 = this.getShortByColumnAndRowInternal(this.structPointer, column, row);
                return (aux2 == NullMappings.getShortNullConstant()) ? NullMappings.getLongNullConstant() : aux2;
            case 4:
                int aux3 = this.getIntegerByColumnAndRowInternal(this.structPointer, column, row);
                return (aux3 == NullMappings.getIntNullConstant()) ? NullMappings.getLongNullConstant() : aux3;
            case 5:
                return this.getLongByColumnAndRowInternal(this.structPointer, column, row);
            case 6:
                float aux4 = this.getFloatByColumnAndRowInternal(this.structPointer, column, row);
                return (aux4 == NullMappings.getFloatNullConstant()) ? NullMappings.getLongNullConstant() : Math.round(aux4);
            case 7:
                double aux5 = this.getDoubleByColumnAndRowInternal(this.structPointer, column, row);
                return (aux5 == NullMappings.getDoubleNullConstant()) ? NullMappings.getLongNullConstant() : Math.round(aux5);
            case 8:
                String aux6 = this.getStringByColumnAndRowInternal(this.structPointer, column, row);
                return aux6 == null ? NullMappings.getLongNullConstant() : Long.parseLong(aux6);
            case 13:
                BigDecimal aux7 = this.getDecimalByColumnAndRowInternal(this.structPointer, column, row);
                return aux7 == null ? NullMappings.getLongNullConstant() : aux7.longValue();
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to long!");
        }
    }

    /**
     * Retrieves a single float value in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The float value
     */
    public float getFloatByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte aux1 = this.getByteByColumnAndRowInternal(this.structPointer, column, row);
                return (aux1 == NullMappings.getByteNullConstant()) ? NullMappings.getFloatNullConstant() : aux1;
            case 3:
                short aux2 = this.getShortByColumnAndRowInternal(this.structPointer, column, row);
                return (aux2 == NullMappings.getShortNullConstant()) ? NullMappings.getFloatNullConstant() : aux2;
            case 4:
                int aux3 = this.getIntegerByColumnAndRowInternal(this.structPointer, column, row);
                return (aux3 == NullMappings.getIntNullConstant()) ? NullMappings.getFloatNullConstant() : aux3;
            case 5:
                long aux4 = this.getLongByColumnAndRowInternal(this.structPointer, column, row);
                return (aux4 == NullMappings.getLongNullConstant()) ? NullMappings.getFloatNullConstant() : aux4;
            case 6:
                return this.getFloatByColumnAndRowInternal(this.structPointer, column, row);
            case 7:
                double aux5 = this.getDoubleByColumnAndRowInternal(this.structPointer, column, row);
                return (aux5 == NullMappings.getDoubleNullConstant()) ? NullMappings.getFloatNullConstant() : (float) aux5;
            case 8:
                String aux6 = this.getStringByColumnAndRowInternal(this.structPointer, column, row);
                return aux6 == null ? NullMappings.getFloatNullConstant() : Float.parseFloat(aux6);
            case 13:
                BigDecimal aux7 = this.getDecimalByColumnAndRowInternal(this.structPointer, column, row);
                return aux7 == null ? NullMappings.getFloatNullConstant() : aux7.floatValue();
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to float!");
        }
    }

    /**
     * Retrieves a single double value in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The double value
     */
    public double getDoubleByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte aux1 = this.getByteByColumnAndRowInternal(this.structPointer, column, row);
                return (aux1 == NullMappings.getByteNullConstant()) ? NullMappings.getDoubleNullConstant() : aux1;
            case 3:
                short aux2 = this.getShortByColumnAndRowInternal(this.structPointer, column, row);
                return (aux2 == NullMappings.getShortNullConstant()) ? NullMappings.getDoubleNullConstant() : aux2;
            case 4:
                int aux3 = this.getIntegerByColumnAndRowInternal(this.structPointer, column, row);
                return (aux3 == NullMappings.getIntNullConstant()) ? NullMappings.getDoubleNullConstant() : aux3;
            case 5:
                long aux4 = this.getLongByColumnAndRowInternal(this.structPointer, column, row);
                return (aux4 == NullMappings.getLongNullConstant()) ? NullMappings.getDoubleNullConstant() : aux4;
            case 6:
                double aux5 = this.getFloatByColumnAndRowInternal(this.structPointer, column, row);
                return (aux5 == NullMappings.getFloatNullConstant()) ? NullMappings.getDoubleNullConstant() : aux5;
            case 7:
                return this.getDoubleByColumnAndRowInternal(this.structPointer, column, row);
            case 8:
                String aux6 = this.getStringByColumnAndRowInternal(this.structPointer, column, row);
                return aux6 == null ? NullMappings.getDoubleNullConstant() : Double.parseDouble(aux6);
            case 13:
                BigDecimal aux7 = this.getDecimalByColumnAndRowInternal(this.structPointer, column, row);
                return aux7 == null ? NullMappings.getDoubleNullConstant() : aux7.doubleValue();
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to double!");
        }
    }

    /**
     * Retrieves a single String value in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The String value
     */
    public String getStringByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        Object aux;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte aux1 = this.getByteByColumnAndRowInternal(this.structPointer, column, row);
                return (aux1 == NullMappings.getByteNullConstant()) ? null : Byte.toString(aux1);
            case 3:
                short aux2 = this.getByteByColumnAndRowInternal(this.structPointer, column, row);
                return (aux2 == NullMappings.getShortNullConstant()) ? null : Short.toString(aux2);
            case 4:
                int aux3 = this.getByteByColumnAndRowInternal(this.structPointer, column, row);
                return (aux3 == NullMappings.getIntNullConstant()) ? null : Integer.toString(aux3);
            case 5:
                long aux4 = this.getByteByColumnAndRowInternal(this.structPointer, column, row);
                return (aux4 == NullMappings.getLongNullConstant()) ? null : Long.toString(aux4);
            case 6:
                float aux5 = this.getByteByColumnAndRowInternal(this.structPointer, column, row);
                return (aux5 == NullMappings.getFloatNullConstant()) ? null : Float.toString(aux5);
            case 7:
                double aux6 = this.getByteByColumnAndRowInternal(this.structPointer, column, row);
                return (aux6 == NullMappings.getDoubleNullConstant()) ? null : Double.toString(aux6);
            case 8:
                return this.getStringByColumnAndRowInternal(this.structPointer, column, row);
            case 12:
                byte[] array = this.getBlobByColumnAndRowInternal(this.structPointer, column, row);
                return  array == null ? null : Arrays.toString(array);
            case 9:
                aux = this.getDateByColumnAndRowInternal(this.structPointer, column, row);
                break;
            case 10:
                aux = this.getTimestampByColumnAndRowInternal(this.structPointer, column, row);
                break;
            case 11:
                aux = this.getTimeByColumnAndRowInternal(this.structPointer, column, row);
                break;
            case 13:
                aux = this.getDecimalByColumnAndRowInternal(this.structPointer, column, row);
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to string!");
        }
        return aux == null ? null : aux.toString();
    }

    /**
     * Retrieves a single Date value in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The Date value
     */
    public Date getDateByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        switch (this.typesIDs[column]) {
            case 9:
                return this.getDateByColumnAndRowInternal(this.structPointer, column, row);
            case 10:
                Timestamp aux1 = this.getTimestampByColumnAndRowInternal(this.structPointer, column, row);
                return aux1 == null ? null : new Date(aux1.getTime());
            case 11:
                Time aux2 = this.getTimeByColumnAndRowInternal(this.structPointer, column, row);
                return aux2 == null ? null : new Date(aux2.getTime());
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to date!");
        }
    }

    /**
     * Retrieves a single Timestamp value in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The Timestamp value
     */
    public Timestamp getTimestampByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        switch (this.typesIDs[column]) {
            case 9:
                Date aux1 = this.getDateByColumnAndRowInternal(this.structPointer, column, row);
                return aux1 == null ? null : new Timestamp(aux1.getTime());
            case 10:
                return this.getTimestampByColumnAndRowInternal(this.structPointer, column, row);
            case 11:
                Time aux2 = this.getTimeByColumnAndRowInternal(this.structPointer, column, row);
                return aux2 == null ? null : new Timestamp(aux2.getTime());
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to timestamp!");
        }
    }

    /**
     * Retrieves a single Time value in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The Time value
     */
    public Time getTimeByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        switch (this.typesIDs[column]) {
            case 9:
                Date aux1 = this.getDateByColumnAndRowInternal(this.structPointer, column, row);
                return aux1 == null ? null : new Time(aux1.getTime());
            case 10:
                Timestamp aux2 = this.getTimestampByColumnAndRowInternal(this.structPointer, column, row);
                return aux2 == null ? null : new Time(aux2.getTime());
            case 11:
                return this.getTimeByColumnAndRowInternal(this.structPointer, column, row);
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to time!");
        }
    }

    /**
     * Retrieves a single byte[] value (BLOB) in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The byte[] value (BLOB)
     */
    public byte[] getBlobByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        switch (this.typesIDs[column]) {
            case 8:
                String aux1 = this.getStringByColumnAndRowInternal(this.structPointer, column, row);
                return aux1 == null ? null : aux1.getBytes();
            case 12:
                return this.getBlobByColumnAndRowInternal(this.structPointer, column, row);
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to blob!");
        }
    }

    /**
     * Retrieves a single BigDecimal value in the result set.
     *
     * @param column The column index starting from 1
     * @param row The row index starting from 1
     * @return The BigDecimal value
     */
    public BigDecimal getDecimalByColumnIndexAndRow(int column, int row) throws MonetDBEmbeddedException {
        this.checkRangesScalars(column, row);
        column--;
        row--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                return new BigDecimal(this.getByteByColumnAndRowInternal(this.structPointer, column, row));
            case 3:
                return new BigDecimal(this.getShortByColumnAndRowInternal(this.structPointer, column, row));
            case 4:
                return new BigDecimal(this.getIntegerByColumnAndRowInternal(this.structPointer, column, row));
            case 5:
                return new BigDecimal(this.getLongByColumnAndRowInternal(this.structPointer, column, row));
            case 6:
                return new BigDecimal(this.getFloatByColumnAndRowInternal(this.structPointer, column, row));
            case 7:
                return new BigDecimal(this.getDoubleByColumnAndRowInternal(this.structPointer, column, row));
            case 8:
                String aux1 = this.getStringByColumnAndRowInternal(this.structPointer, column, row);
                return aux1 == null ? null : new BigDecimal(aux1);
            case 13:
                return this.getDecimalByColumnAndRowInternal(this.structPointer, column, row);
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to decimal!");
        }
    }

    /**
     * Retrieves a single boolean value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The boolean value
     */
    public boolean getBooleanByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getBooleanByColumnIndexAndRow(index, row);
    }

    /**
     * Retrieves a single byte value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The byte value
     */
    public byte getByteByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getByteByColumnIndexAndRow(index, row);
    }

    /**
     * Retrieves a single short value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The short value
     */
    public short getShortByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getShortByColumnIndexAndRow(index, row);
    }

    /**
     * Retrieves a single integer value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The integer value
     */
    public int getIntegerByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getIntegerByColumnIndexAndRow(index, row);
    }

    /**
     * Retrieves a single long value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The long value
     */
    public long getLongByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getLongByColumnIndexAndRow(index, row);
    }

    /**
     * Retrieves a single float value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The float value
     */
    public float getFloatByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getFloatByColumnIndexAndRow(index, row);
    }

    /**
     * Retrieves a single double value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The double value
     */
    public double getDoubleByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getDoubleByColumnIndexAndRow(index, row);
    }

    /**
     * Retrieves a single String value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The String value
     */
    public String getStringByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getStringByColumnIndexAndRow(index, row);
    }

    /**
     * Retrieves a single Date value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The Date value
     */
    public Date getDateByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getDateByColumnIndexAndRow(index, row);
    }

    /**
     * Retrieves a single Timestamp value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The Timestamp value
     */
    public Timestamp getTimestampByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getTimestampByColumnIndexAndRow(index, row);
    }

    /**
     * Retrieves a single Time value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The Time value
     */
    public Time getTimeByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getTimeByColumnIndexAndRow(index, row);
    }

    /**
     * Retrieves a single byte[] (BLOB) value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The byte[] (BLOB) value
     */
    public byte[] getBlobByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getBlobByColumnIndexAndRow(index, row);
    }

    /**
     * Retrieves a single decimal value in the result set by name.
     *
     * @param columnName The column name
     * @param row The row index starting from 1
     * @return The decimal value
     */
    public BigDecimal getDecimalByColumnNameAndRow(String columnName, int row) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        return this.getDecimalByColumnIndexAndRow(index, row);
    }

    private native void getBooleanColumnByIndexInternal(long structPointer, int column, boolean[] input, int offset, int length);

    private native void getByteColumnByIndexInternal(long structPointer, int column, byte[] input, int offset, int length);

    private native void getShortColumnByIndexInternal(long structPointer, int column, short[] input, int offset, int length);

    private native void getIntColumnByIndexInternal(long structPointer, int column, int[] input, int offset, int length);

    private native void getLongColumnByIndexInternal(long structPointer, int column, long[] input, int offset, int length);

    private native void getFloatColumnByIndexInternal(long structPointer, int column, float[] input, int offset, int length);

    private native void getDoubleColumnByIndexInternal(long structPointer, int column, double[] input, int offset, int length);

    private native void getStringColumnByIndexInternal(long structPointer, int column, String[] input, int offset, int length);

    private native void getDateColumnByIndexInternal(long structPointer, int column, Date[] input, int offset, int length);

    private native void getTimestampColumnByIndexInternal(long structPointer, int column, Timestamp[] input, int offset, int length);

    private native void getTimeColumnByIndexInternal(long structPointer, int column, Time[] input, int offset, int length);

    private native void getBlobColumnByIndexInternal(long structPointer, int column, byte[][] input, int offset, int length);

    private native void getDecimalColumnByIndexInternal(long structPointer, int column, BigDecimal[] input, int offset, int length);

    private void checkRangesArrays(int column, Object input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkQueryResultSetIsNotClosed();
        int sum = offset + length;
        if(column < 1) {
            throw new ArrayIndexOutOfBoundsException("The column index is smaller than 1?");
        } else if(column > this.numberOfColumns) {
            throw new ArrayIndexOutOfBoundsException("The column index is larger than the number of columns? "
                    + column + " > " + this.numberOfColumns);
        } else if (length < 1) {
            throw new ArrayIndexOutOfBoundsException("Retrieving 0 rows?");
        } else if (sum > this.numberOfRows) {
            throw new ArrayIndexOutOfBoundsException("The end index is larger than the number of rows! "
                    + (sum) + " > " + this.numberOfRows);
        }
        int arrayLength = Array.getLength(input);
        if (sum > arrayLength) {
            throw new ArrayIndexOutOfBoundsException("The end index is larger than the length of the provided array! "
                    + (sum) + " > " + arrayLength);
        }
    }

    /**
     * Retrieves a boolean column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input boolean array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getBooleanColumnByIndex(int column, boolean[] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                this.getBooleanColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            case 3:
                short[] aux2 = new short[length];
                this.getShortColumnByIndexInternal(this.structPointer, column, aux2, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = aux2[i] != 0 && aux2[i] != NullMappings.getShortNullConstant();
                }
                break;
            case 4:
                int[] aux3 = new int[length];
                this.getIntColumnByIndexInternal(this.structPointer, column, aux3, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = aux3[i] != 0 && aux3[i] != NullMappings.getIntNullConstant();
                }
                break;
            case 5:
                long[] aux4 = new long[length];
                this.getLongColumnByIndexInternal(this.structPointer, column, aux4, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = aux4[i] != 0 && aux4[i] != NullMappings.getLongNullConstant();
                }
                break;
            case 6:
                float[] aux5 = new float[length];
                this.getFloatColumnByIndexInternal(this.structPointer, column, aux5, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = aux5[i] != 0.0f && aux5[i] != NullMappings.getFloatNullConstant();
                }
                break;
            case 7:
                double[] aux6 = new double[length];
                this.getDoubleColumnByIndexInternal(this.structPointer, column, aux6, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = aux6[i] != 0.0d && aux6[i] != NullMappings.getDoubleNullConstant();
                }
                break;
            case 8:
                String[] aux7 = new String[length];
                this.getStringColumnByIndexInternal(this.structPointer, column, aux7, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux7[i] != null) && Boolean.parseBoolean(aux7[i]);
                }
                break;
            case 13:
                BigDecimal[] aux8 = new BigDecimal[length];
                this.getDecimalColumnByIndexInternal(this.structPointer, column, aux8, offset, length);
                for(int i = 0 ; i < length ; i++) {
                    input[i] =  (aux8[i] != null) && !aux8[i].equals(BigDecimal.ZERO);
                }
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to boolean[]!");
        }
    }

    /**
     * Retrieves a byte column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input byte array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getByteColumnByIndex(int column, byte[] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                this.getByteColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            case 3:
                short[] aux2 = new short[length];
                this.getShortColumnByIndexInternal(this.structPointer, column, aux2, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux2[i] == NullMappings.getShortNullConstant()) ? NullMappings.getByteNullConstant() : (byte) aux2[i];
                }
                break;
            case 4:
                int[] aux3 = new int[length];
                this.getIntColumnByIndexInternal(this.structPointer, column, aux3, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux3[i] == NullMappings.getIntNullConstant()) ? NullMappings.getByteNullConstant() : (byte) aux3[i];
                }
                break;
            case 5:
                long[] aux4 = new long[length];
                this.getLongColumnByIndexInternal(this.structPointer, column, aux4, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux4[i] == NullMappings.getLongNullConstant()) ? NullMappings.getByteNullConstant() : (byte) aux4[i];
                }
                break;
            case 6:
                float[] aux5 = new float[length];
                this.getFloatColumnByIndexInternal(this.structPointer, column, aux5, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux5[i] == NullMappings.getFloatNullConstant()) ? NullMappings.getByteNullConstant() : (byte) Math.round(aux5[i]);
                }
                break;
            case 7:
                double[] aux6 = new double[length];
                this.getDoubleColumnByIndexInternal(this.structPointer, column, aux6, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux6[i] == NullMappings.getDoubleNullConstant()) ? NullMappings.getByteNullConstant() : (byte) Math.round(aux6[i]);
                }
                break;
            case 8:
                String[] aux7 = new String[length];
                this.getStringColumnByIndexInternal(this.structPointer, column, aux7, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux7[i] != null) ? Byte.parseByte(aux7[i]) : NullMappings.getByteNullConstant();
                }
                break;
            case 13:
                BigDecimal[] aux8 = new BigDecimal[length];
                this.getDecimalColumnByIndexInternal(this.structPointer, column, aux8, offset, length);
                for(int i = 0 ; i < length ; i++) {
                    input[i] = (aux8[i] != null) ? aux8[i].byteValue() : NullMappings.getByteNullConstant();
                }
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to byte[]!");
        }
    }

    /**
     * Retrieves a short column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input short array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getShortColumnByIndex(int column, short[] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte[] aux1 = new byte[length];
                this.getByteColumnByIndexInternal(this.structPointer, column, aux1, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux1[i] == NullMappings.getByteNullConstant()) ? NullMappings.getShortNullConstant() : aux1[i];
                }
                break;
            case 3:
                this.getShortColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            case 4:
                int[] aux3 = new int[length];
                this.getIntColumnByIndexInternal(this.structPointer, column, aux3, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux3[i] == NullMappings.getIntNullConstant()) ? NullMappings.getShortNullConstant() : (short) aux3[i];
                }
                break;
            case 5:
                long[] aux4 = new long[length];
                this.getLongColumnByIndexInternal(this.structPointer, column, aux4, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux4[i] == NullMappings.getLongNullConstant()) ? NullMappings.getShortNullConstant() : (short) aux4[i];
                }
                break;
            case 6:
                float[] aux5 = new float[length];
                this.getFloatColumnByIndexInternal(this.structPointer, column, aux5, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux5[i] == NullMappings.getFloatNullConstant()) ? NullMappings.getShortNullConstant() : (short) Math.round(aux5[i]);
                }
                break;
            case 7:
                double[] aux6 = new double[length];
                this.getDoubleColumnByIndexInternal(this.structPointer, column, aux6, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux6[i] == NullMappings.getDoubleNullConstant()) ? NullMappings.getShortNullConstant() : (short) Math.round(aux6[i]);
                }
                break;
            case 8:
                String[] aux7 = new String[length];
                this.getStringColumnByIndexInternal(this.structPointer, column, aux7, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux7[i] != null) ? Short.parseShort(aux7[i]) : NullMappings.getShortNullConstant();
                }
                break;
            case 13:
                BigDecimal[] aux8 = new BigDecimal[length];
                this.getDecimalColumnByIndexInternal(this.structPointer, column, aux8, offset, length);
                for(int i = 0 ; i < length ; i++) {
                    input[i] = (aux8[i] != null) ? aux8[i].shortValue() : NullMappings.getShortNullConstant();
                }
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to short[]!");
        }
    }

    /**
     * Retrieves an integer column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input integer array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getIntColumnByIndex(int column, int[] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte[] aux1 = new byte[length];
                this.getByteColumnByIndexInternal(this.structPointer, column, aux1, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux1[i] == NullMappings.getByteNullConstant()) ? NullMappings.getIntNullConstant() : aux1[i];
                }
                break;
            case 3:
                short[] aux2 = new short[length];
                this.getShortColumnByIndexInternal(this.structPointer, column, aux2, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux2[i] == NullMappings.getShortNullConstant()) ? NullMappings.getIntNullConstant() : aux2[i];
                }
                break;
            case 4:
                this.getIntColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            case 5:
                long[] aux4 = new long[length];
                this.getLongColumnByIndexInternal(this.structPointer, column, aux4, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux4[i] == NullMappings.getLongNullConstant()) ? NullMappings.getIntNullConstant() : (int) aux4[i];
                }
                break;
            case 6:
                float[] aux5 = new float[length];
                this.getFloatColumnByIndexInternal(this.structPointer, column, aux5, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux5[i] == NullMappings.getFloatNullConstant()) ? NullMappings.getIntNullConstant() : Math.round(aux5[i]);
                }
                break;
            case 7:
                double[] aux6 = new double[length];
                this.getDoubleColumnByIndexInternal(this.structPointer, column, aux6, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux6[i] == NullMappings.getDoubleNullConstant()) ? NullMappings.getIntNullConstant() : (int) Math.round(aux6[i]);
                }
                break;
            case 8:
                String[] aux7 = new String[length];
                this.getStringColumnByIndexInternal(this.structPointer, column, aux7, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux7[i] != null) ? Integer.parseInt(aux7[i]) : NullMappings.getIntNullConstant();
                }
                break;
            case 13:
                BigDecimal[] aux8 = new BigDecimal[length];
                this.getDecimalColumnByIndexInternal(this.structPointer, column, aux8, offset, length);
                for(int i = 0 ; i < length ; i++) {
                    input[i] = (aux8[i] != null) ? aux8[i].intValue() : NullMappings.getIntNullConstant();
                }
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to int[]!");
        }
    }

    /**
     * Retrieves a long column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input long array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getLongColumnByIndex(int column, long[] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte[] aux1 = new byte[length];
                this.getByteColumnByIndexInternal(this.structPointer, column, aux1, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux1[i] == NullMappings.getByteNullConstant()) ? NullMappings.getLongNullConstant() : aux1[i];
                }
                break;
            case 3:
                short[] aux2 = new short[length];
                this.getShortColumnByIndexInternal(this.structPointer, column, aux2, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux2[i] == NullMappings.getShortNullConstant()) ? NullMappings.getLongNullConstant() : aux2[i];
                }
                break;
            case 4:
                int[] aux3 = new int[length];
                this.getIntColumnByIndexInternal(this.structPointer, column, aux3, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux3[i] == NullMappings.getIntNullConstant()) ? NullMappings.getLongNullConstant() : aux3[i];
                }
                break;
            case 5:
                this.getLongColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            case 6:
                float[] aux5 = new float[length];
                this.getFloatColumnByIndexInternal(this.structPointer, column, aux5, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux5[i] == NullMappings.getFloatNullConstant()) ? NullMappings.getLongNullConstant() : Math.round(aux5[i]);
                }
                break;
            case 7:
                double[] aux6 = new double[length];
                this.getDoubleColumnByIndexInternal(this.structPointer, column, aux6, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux6[i] == NullMappings.getDoubleNullConstant()) ? NullMappings.getLongNullConstant() : Math.round(aux6[i]);
                }
                break;
            case 8:
                String[] aux7 = new String[length];
                this.getStringColumnByIndexInternal(this.structPointer, column, aux7, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux7[i] != null) ? Long.parseLong(aux7[i]) : NullMappings.getLongNullConstant();
                }
                break;
            case 13:
                BigDecimal[] aux8 = new BigDecimal[length];
                this.getDecimalColumnByIndexInternal(this.structPointer, column, aux8, offset, length);
                for(int i = 0 ; i < length ; i++) {
                    input[i] = (aux8[i] != null) ? aux8[i].longValue() : NullMappings.getLongNullConstant();
                }
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to long[]!");
        }
    }

    /**
     * Retrieves a float column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input float array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getFloatColumnByIndex(int column, float[] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte[] aux1 = new byte[length];
                this.getByteColumnByIndexInternal(this.structPointer, column, aux1, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux1[i] == NullMappings.getByteNullConstant()) ? NullMappings.getFloatNullConstant() : aux1[i];
                }
                break;
            case 3:
                short[] aux2 = new short[length];
                this.getShortColumnByIndexInternal(this.structPointer, column, aux2, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux2[i] == NullMappings.getShortNullConstant()) ? NullMappings.getFloatNullConstant() : aux2[i];
                }
                break;
            case 4:
                int[] aux3 = new int[length];
                this.getIntColumnByIndexInternal(this.structPointer, column, aux3, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux3[i] == NullMappings.getIntNullConstant()) ? NullMappings.getFloatNullConstant() : aux3[i];
                }
                break;
            case 5:
                long[] aux4 = new long[length];
                this.getLongColumnByIndexInternal(this.structPointer, column, aux4, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux4[i] == NullMappings.getLongNullConstant()) ? NullMappings.getFloatNullConstant() : aux4[i];
                }
                break;
            case 6:
                this.getFloatColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            case 7:
                double[] aux6 = new double[length];
                this.getDoubleColumnByIndexInternal(this.structPointer, column, aux6, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux6[i] == NullMappings.getDoubleNullConstant()) ? NullMappings.getFloatNullConstant() : (float) aux6[i];
                }
                break;
            case 8:
                String[] aux7 = new String[length];
                this.getStringColumnByIndexInternal(this.structPointer, column, aux7, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux7[i] != null) ? Float.parseFloat(aux7[i]) : NullMappings.getFloatNullConstant();
                }
                break;
            case 13:
                BigDecimal[] aux8 = new BigDecimal[length];
                this.getDecimalColumnByIndexInternal(this.structPointer, column, aux8, offset, length);
                for(int i = 0 ; i < length ; i++) {
                    input[i] = (aux8[i] != null) ? aux8[i].floatValue() : NullMappings.getFloatNullConstant();
                }
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to float[]!");
        }
    }

    /**
     * Retrieves a double column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input double array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getDoubleColumnByIndex(int column, double[] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte[] aux1 = new byte[length];
                this.getByteColumnByIndexInternal(this.structPointer, column, aux1, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux1[i] == NullMappings.getByteNullConstant()) ? NullMappings.getDoubleNullConstant() : aux1[i];
                }
                break;
            case 3:
                short[] aux2 = new short[length];
                this.getShortColumnByIndexInternal(this.structPointer, column, aux2, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux2[i] == NullMappings.getShortNullConstant()) ? NullMappings.getFloatNullConstant() : aux2[i];
                }
                break;
            case 4:
                int[] aux3 = new int[length];
                this.getIntColumnByIndexInternal(this.structPointer, column, aux3, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux3[i] == NullMappings.getIntNullConstant()) ? NullMappings.getDoubleNullConstant() : aux3[i];
                }
                break;
            case 5:
                long[] aux4 = new long[length];
                this.getLongColumnByIndexInternal(this.structPointer, column, aux4, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux4[i] == NullMappings.getLongNullConstant()) ? NullMappings.getDoubleNullConstant() : aux4[i];
                }
                break;
            case 6:
                float[] aux5 = new float[length];
                this.getFloatColumnByIndexInternal(this.structPointer, column, aux5, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux5[i] == NullMappings.getFloatNullConstant()) ? NullMappings.getDoubleNullConstant() : aux5[i];
                }
                break;
            case 7:
                this.getDoubleColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            case 8:
                String[] aux7 = new String[length];
                this.getStringColumnByIndexInternal(this.structPointer, column, aux7, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux7[i] != null) ? Double.parseDouble(aux7[i]) : NullMappings.getDoubleNullConstant();
                }
                break;
            case 13:
                BigDecimal[] aux8 = new BigDecimal[length];
                this.getDecimalColumnByIndexInternal(this.structPointer, column, aux8, offset, length);
                for(int i = 0 ; i < length ; i++) {
                    input[i] = (aux8[i] != null) ? aux8[i].doubleValue() : NullMappings.getDoubleNullConstant();
                }
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to double[]!");
        }
    }

    /**
     * Retrieves a String column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input String array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getStringColumnByIndex(int column, String[] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte[] aux1 = new byte[length];
                this.getByteColumnByIndexInternal(this.structPointer, column, aux1, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux1[i] == NullMappings.getByteNullConstant()) ? null : Byte.toString(aux1[i]);
                }
                break;
            case 3:
                short[] aux2 = new short[length];
                this.getShortColumnByIndexInternal(this.structPointer, column, aux2, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux2[i] == NullMappings.getShortNullConstant()) ? null : Short.toString(aux2[i]);
                }
                break;
            case 4:
                int[] aux3 = new int[length];
                this.getIntColumnByIndexInternal(this.structPointer, column, aux3, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux3[i] == NullMappings.getIntNullConstant()) ? null : Integer.toString(aux3[i]);
                }
                break;
            case 5:
                long[] aux4 = new long[length];
                this.getLongColumnByIndexInternal(this.structPointer, column, aux4, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux4[i] == NullMappings.getLongNullConstant()) ? null : Long.toString(aux4[i]);
                }
                break;
            case 6:
                float[] aux5 = new float[length];
                this.getFloatColumnByIndexInternal(this.structPointer, column, aux5, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux5[i] == NullMappings.getFloatNullConstant()) ? null : Float.toString(aux5[i]);
                }
                break;
            case 7:
                double[] aux6 = new double[length];
                this.getDoubleColumnByIndexInternal(this.structPointer, column, aux6, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux6[i] == NullMappings.getDoubleNullConstant()) ? null : Double.toString(aux6[i]);
                }
                break;
            case 8:
                this.getStringColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            case 9:
                Date[] aux7 = new Date[length];
                this.getDateColumnByIndexInternal(this.structPointer, column, aux7, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux7[i] == null) ? null : aux7[i].toString();
                }
                break;
            case 10:
                Timestamp[] aux8 = new Timestamp[length];
                this.getTimestampColumnByIndexInternal(this.structPointer, column, aux8, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux8[i] == null) ? null : aux8[i].toString();
                }
                break;
            case 11:
                Time[] aux9 = new Time[length];
                this.getTimeColumnByIndexInternal(this.structPointer, column, aux9, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux9[i] == null) ? null : aux9[i].toString();
                }
                break;
            case 12:
                byte[][] aux10 = new byte[length][];
                this.getBlobColumnByIndexInternal(this.structPointer, column, aux10, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux10[i] == null) ? null : Arrays.toString(aux10[i]);
                }
                break;
            case 13:
                BigDecimal[] aux11 = new BigDecimal[length];
                this.getDecimalColumnByIndexInternal(this.structPointer, column, aux11, offset, length);
                for(int i = 0 ; i < length ; i++) {
                    input[i] = (aux11[i] == null) ? null : aux11[i].toString();
                }
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to String[]!");
        }
    }

    /**
     * Retrieves a Date column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input Date array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getDateColumnByIndex(int column, Date[] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 9:
                this.getDateColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            case 10:
                Timestamp[] aux8 = new Timestamp[length];
                this.getTimestampColumnByIndexInternal(this.structPointer, column, aux8, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux8[i] == null) ? null : new Date(aux8[i].getTime());
                }
                break;
            case 11:
                Time[] aux9 = new Time[length];
                this.getTimeColumnByIndexInternal(this.structPointer, column, aux9, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux9[i] == null) ? null : new Date(aux9[i].getTime());
                }
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to Date[]!");
        }
    }

    /**
     * Retrieves a Timestamp column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input Timestamp array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getTimestampColumnByIndex(int column, Timestamp[] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 9:
                Date[] aux7 = new Date[length];
                this.getDateColumnByIndexInternal(this.structPointer, column, aux7, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux7[i] == null) ? null : new Timestamp(aux7[i].getTime());
                }
                break;
            case 10:
                this.getTimestampColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            case 11:
                Time[] aux9 = new Time[length];
                this.getTimeColumnByIndexInternal(this.structPointer, column, aux9, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux9[i] == null) ? null : new Timestamp(aux9[i].getTime());
                }
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to Timestamp[]!");
        }
    }

    /**
     * Retrieves a Time column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input Time array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getTimeColumnByIndex(int column, Time[] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 9:
                Date[] aux7 = new Date[length];
                this.getDateColumnByIndexInternal(this.structPointer, column, aux7, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux7[i] == null) ? null : new Time(aux7[i].getTime());
                }
                break;
            case 10:
                Timestamp[] aux8 = new Timestamp[length];
                this.getTimestampColumnByIndexInternal(this.structPointer, column, aux8, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux8[i] == null) ? null : new Time(aux8[i].getTime());
                }
                break;
            case 11:
                this.getTimeColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to Time[]!");
        }
    }

    /**
     * Retrieves a byte[] (BLOB) column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input byte[] (BLOB) array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getBlobColumnByIndex(int column, byte[][] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 8:
                String[] aux7 = new String[length];
                this.getStringColumnByIndexInternal(this.structPointer, column, aux7, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux7[i] == null) ? null : aux7[i].getBytes();
                }
                break;
            case 12:
                this.getBlobColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to byte[][]!");
        }
    }

    /**
     * Retrieves a BigDecimal column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input BigDecimal array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getDecimalColumnByIndex(int column, BigDecimal[] input, int offset, int length) throws MonetDBEmbeddedException {
        this.checkRangesArrays(column, input, offset, length);
        column--;
        switch (this.typesIDs[column]) {
            case 1:
            case 2:
                byte[] aux1 = new byte[length];
                this.getByteColumnByIndexInternal(this.structPointer, column, aux1, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux1[i] == NullMappings.getByteNullConstant()) ? null : new BigDecimal(aux1[i]);
                }
                break;
            case 3:
                short[] aux2 = new short[length];
                this.getShortColumnByIndexInternal(this.structPointer, column, aux2, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux2[i] == NullMappings.getShortNullConstant()) ? null : new BigDecimal(aux2[i]);
                }
                break;
            case 4:
                int[] aux3 = new int[length];
                this.getIntColumnByIndexInternal(this.structPointer, column, aux3, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux3[i] == NullMappings.getIntNullConstant()) ? null : new BigDecimal(aux3[i]);
                }
                break;
            case 5:
                long[] aux4 = new long[length];
                this.getLongColumnByIndexInternal(this.structPointer, column, aux4, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux4[i] == NullMappings.getLongNullConstant()) ? null : new BigDecimal(aux4[i]);
                }
                break;
            case 6:
                float[] aux5 = new float[length];
                this.getFloatColumnByIndexInternal(this.structPointer, column, aux5, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux5[i] == NullMappings.getFloatNullConstant()) ? null : new BigDecimal(aux5[i]);
                }
                break;
            case 7:
                double[] aux6 = new double[length];
                this.getDoubleColumnByIndexInternal(this.structPointer, column, aux6, offset, length);
                for(int i = 0 ; i < length; i++) {
                    input[i] = (aux6[i] == NullMappings.getDoubleNullConstant()) ? null : new BigDecimal(aux6[i]);
                }
                break;
            case 13:
                this.getDecimalColumnByIndexInternal(this.structPointer, column, input, offset, length);
                break;
            default:
                throw new ClassCastException("Cannot convert " + TypeIDToString(this.typesIDs[column]) + " to BigDecimal[]!");
        }
    }

    /**
     * Retrieves a boolean column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input boolean array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getBooleanColumnByName(String columnName, boolean[] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getBooleanColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves a byte column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input byte array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getByteColumnByName(String columnName, byte[] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getByteColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves a short column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input short array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getShortColumnByName(String columnName, short[] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getShortColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves an integer column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input integer array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getIntColumnByName(String columnName, int[] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getIntColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves a long column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input long array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getLongColumnByName(String columnName, long[] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getLongColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves a float column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input float array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getFloatColumnByName(String columnName, float[] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getFloatColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves a double column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input double array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getDoubleColumnByName(String columnName, double[] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getDoubleColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves a String column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input String array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getStringColumnByName(String columnName, String[] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getStringColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves a Date column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input Date array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getDateColumnByName(String columnName, Date[] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getDateColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves a Timestamp column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input Timestamp array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getTimestampColumnByName(String columnName, Timestamp[] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getTimestampColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves a Time column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input Time array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getTimeColumnByName(String columnName, Time[] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getTimeColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves a byte[] (BLOB) column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input byte[] (BLOB) array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getBlobColumnByName(String columnName, byte[][] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getBlobColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves a BigDecimal column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input BigDecimal array where the result will be copied to.
     * @param offset - The starting offset of the array
     * @param length - The number of elements to copy.
     */
    public void getDecimalColumnByName(String columnName, BigDecimal[] input, int offset, int length) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getDecimalColumnByIndex(index, input, offset, length);
    }

    /**
     * Retrieves a boolean column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input boolean array where the result will be copied to.
     */
    public void getBooleanColumnByIndex(int column, boolean[] input) throws MonetDBEmbeddedException {
        this.getBooleanColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves a byte column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input byte array where the result will be copied to.
     */
    public void getByteColumnByIndex(int column, byte[] input) throws MonetDBEmbeddedException {
        this.getByteColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves a short column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input short array where the result will be copied to.
     */
    public void getShortColumnByIndex(int column, short[] input) throws MonetDBEmbeddedException {
        this.getShortColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves an integer column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input integer array where the result will be copied to.
     */
    public void getIntColumnByIndex(int column, int[] input) throws MonetDBEmbeddedException {
        this.getIntColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves a long column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input long array where the result will be copied to.
     */
    public void getLongColumnByIndex(int column, long[] input) throws MonetDBEmbeddedException {
        this.getLongColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves a float column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input float array where the result will be copied to.
     */
    public void getFloatColumnByIndex(int column, float[] input) throws MonetDBEmbeddedException {
        this.getFloatColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves a double column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input double array where the result will be copied to.
     */
    public void getDoubleColumnByIndex(int column, double[] input) throws MonetDBEmbeddedException {
        this.getDoubleColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves a String column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input String array where the result will be copied to.
     */
    public void getStringColumnByIndex(int column, String[] input) throws MonetDBEmbeddedException {
        this.getStringColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves a Date column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input Date array where the result will be copied to.
     */
    public void getDateColumnByIndex(int column, Date[] input) throws MonetDBEmbeddedException {
        this.getDateColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves a Timestamp column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input Timestamp array where the result will be copied to.
     */
    public void getTimestampColumnByIndex(int column, Timestamp[] input) throws MonetDBEmbeddedException {
        this.getTimestampColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves a Time column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input Time array where the result will be copied to.
     */
    public void getTimeColumnByIndex(int column, Time[] input) throws MonetDBEmbeddedException {
        this.getTimeColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves a byte[] (BLOB) column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input byte[] (BLOB) array where the result will be copied to.
     */
    public void getBlobColumnByIndex(int column, byte[][] input) throws MonetDBEmbeddedException {
        this.getBlobColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves a BigDecimal column by index.
     *
     * @param column - The index of the column starting from 1.
     * @param input - The input BigDecimal array where the result will be copied to.
     */
    public void getDecimalColumnByIndex(int column, BigDecimal[] input) throws MonetDBEmbeddedException {
        this.getDecimalColumnByIndex(column, input, 0, input.length);
    }

    /**
     * Retrieves a boolean column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input boolean array where the result will be copied to.
     */
    public void getBooleanColumnByName(String columnName, boolean[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getBooleanColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Retrieves a byte column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input byte array where the result will be copied to.
     */
    public void getByteColumnByName(String columnName, byte[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getByteColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Retrieves a short column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input short array where the result will be copied to.
     */
    public void getShortColumnByName(String columnName, short[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getShortColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Retrieves an integer column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input integer array where the result will be copied to.
     */
    public void getIntColumnByName(String columnName, int[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getIntColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Retrieves a long column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input long array where the result will be copied to.
     */
    public void getLongColumnByName(String columnName, long[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getLongColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Retrieves a float column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input float array where the result will be copied to.
     */
    public void getFloatColumnByName(String columnName, float[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getFloatColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Retrieves a double column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input double array where the result will be copied to.
     */
    public void getDoubleColumnByName(String columnName, double[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getDoubleColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Retrieves a String column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input String array where the result will be copied to.
     */
    public void getStringColumnByName(String columnName, String[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getStringColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Retrieves a Date column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input Date array where the result will be copied to.
     */
    public void getDateColumnByName(String columnName, Date[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getDateColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Retrieves a Timestamp column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input Timestamp array where the result will be copied to.
     */
    public void getTimestampColumnByName(String columnName, Timestamp[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getTimestampColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Retrieves a Time column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input Time array where the result will be copied to.
     */
    public void getTimeColumnByName(String columnName, Time[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getTimeColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Retrieves a byte[] (BLOB) column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input byte[] (BLOB) array where the result will be copied to.
     */
    public void getBlobColumnByName(String columnName, byte[][] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getBlobColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Retrieves an BigDecimal column by name.
     *
     * @param columnName - The name of the column.
     * @param input - The input BigDecimal array where the result will be copied to.
     */
    public void getDecimalColumnByName(String columnName, BigDecimal[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getDecimalColumnByIndex(index, input, 0, input.length);
    }

    /**
     * Tests if a boolean in the result set is a null value.
     *
     * @param column The column index starting from 1
     * @param row The row index in the column starting from 1
     * @return A boolean indicating if the value is null
     */
    public boolean checkBooleanIsNull(int column, int row) throws MonetDBEmbeddedException {
        this.checkQueryResultSetIsNotClosed();
        if (row < 1) {
            throw new ArrayIndexOutOfBoundsException("A row smaller than 1?");
        } else if (row > this.numberOfRows) {
            throw new ArrayIndexOutOfBoundsException("The row is larger than the number of rows!");
        } else if(column < 1) {
            throw new ArrayIndexOutOfBoundsException("The column index is smaller than 1?");
        } else if(column > this.numberOfColumns) {
            throw new ArrayIndexOutOfBoundsException("The column index is larger than the number of columns? "
                    + column + " > " + this.numberOfColumns);
        } else if(this.typesIDs[column - 1] != 1) {
            throw new ClassCastException("The column is not a boolean!");
        }
        return this.getByteByColumnAndRowInternal(this.structPointer, column - 1, row - 1)
                == NullMappings.getByteNullConstant();
    }

    private void checkRowArray(int column, Object input) throws MonetDBEmbeddedException {
        this.checkQueryResultSetIsNotClosed();
        int arrayLength = Array.getLength(input);
        if(column < 1) {
            throw new ArrayIndexOutOfBoundsException("The column index is smaller than 1?");
        } else if(column > this.numberOfColumns) {
            throw new ArrayIndexOutOfBoundsException("The column index is larger than the number of columns? "
                    + column + " > " + this.numberOfColumns);
        } else if (arrayLength != this.numberOfRows) {
            throw new ArrayIndexOutOfBoundsException("The array length is different from the number of rows! "
                    + this.numberOfRows + " != " + arrayLength);
        }
    }

    private native void getColumnNullMappingsByIndexInternal(long structPointer, int column, int typeID, boolean[] input);

    /**
     * Gets the null mapping of a column by index.
     *
     * @param column The column index starting from 1
     * @param input  An array of booleans, indicating if the values of the column are null or not.
     */
    public void getColumnNullMappingsByIndex(int column, boolean[] input) throws MonetDBEmbeddedException {
        this.checkRowArray(column, input);
        column--;
        this.getColumnNullMappingsByIndexInternal(this.structPointer, column, this.typesIDs[column], input);
    }

    /**
     * Gets the null mapping of a column by name
     *
     * @param columnName The column name
     * @param input An array of booleans, indicating if the values of the column are null or not.
     */
    public void getNullMappingByName(String columnName, boolean[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.getColumnNullMappingsByIndex(index, input);
    }

    private native void mapColumnToObjectByIndexInternal(long structPointer, int column, int typeID, Object[] input)
            throws MonetDBEmbeddedException;

    /**
     * Maps a column to a Java Object representation of the array by index. This is method is used by the
     * fetchResultSetRows to iterate row-wise. Warning! This method creates an Object array for the column and a object
     * for each value which is inefficient for te number of memory allocations it has to make.
     *
     * @param column The column index starting from 1
     * @param input An Object array representation of the column.
     */
    public void mapColumnToObjectByIndex(int column, Object[] input) throws MonetDBEmbeddedException {
        this.checkRowArray(column, input);
        column--;
        this.mapColumnToObjectByIndexInternal(this.structPointer, column, this.typesIDs[column], input);
    }

    /**
     * Maps a column to a Java Object representation of the array by name.
     *
     * @param columnName The column name
     * @param input An Object array representation of the column.
     */
    public void mapColumnToObjectByName(String columnName, Object[] input) throws MonetDBEmbeddedException {
        int index = this.getColumnIndexByName(columnName);
        this.mapColumnToObjectByIndex(index, input);
    }

    /**
     * Internal query result set retrieval
     *
     * @param startIndex The first row index to retrieve starting from 1
     * @param endIndex The last row index to retrieve
     * @return The rows as {@code QueryResultRowSet}
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    private QueryResultRowSet fetchRowsInternal(int startIndex, int endIndex) throws MonetDBEmbeddedException {
        int numberOfRowsToRetrieve = Math.max(endIndex - startIndex + 1, 0);
        Object[][] temp = new Object[numberOfRowsToRetrieve][this.getNumberOfColumns()];
        for (int i = 0 ; i < this.getNumberOfColumns(); i++) {
            Object[] aux = new Object[numberOfRowsToRetrieve];
            if(numberOfRowsToRetrieve > 0) {
                this.mapColumnToObjectByIndex(i + 1, aux);
            }
            Object[] nextColumn = (numberOfRowsToRetrieve == 0) ?
                    new Object[0] : Arrays.copyOfRange(aux, startIndex - 1, endIndex);
            for(int j = 0; j < numberOfRowsToRetrieve; j++) {
                temp[j][i] = nextColumn[j];
            }
        }
        return new QueryResultRowSet(this, temp);
    }

    /**
     * Fetch rows from the result set.
     *
     * @param startIndex The first row index to retrieve starting from 1
     * @param endIndex The last row index to retrieve
     * @return The rows as {@code QueryResultRowSet}
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
	public QueryResultRowSet fetchResultSetRows(int startIndex, int endIndex) throws MonetDBEmbeddedException {
        if(endIndex < startIndex) {
            startIndex ^= endIndex;
            endIndex ^= startIndex;
            startIndex ^= endIndex;
        }
        if (startIndex < 1) {
            throw new ArrayIndexOutOfBoundsException("The start index must be larger than 1!");
        } else if (endIndex > this.numberOfRows) {
            throw new ArrayIndexOutOfBoundsException("The index must be smaller than the number of elements in the columns!");
        } else if(startIndex == endIndex) {
            throw new ArrayIndexOutOfBoundsException("Retrieving 0 rows?");
        }
        return this.fetchRowsInternal(startIndex, endIndex);
	}

    /**
     * Fetches the first N rows from the result set.
     *
     * @param n The last row index to retrieve
     * @return The rows as {@code QueryResultRowSet}
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public QueryResultRowSet fetchFirstNRowValues(int n) throws MonetDBEmbeddedException {
        if (n > this.numberOfRows) {
            throw new ArrayIndexOutOfBoundsException("The number of rows is larger the number of rows: (" + n + " > " + this.numberOfRows + ")");
        }
        return this.fetchRowsInternal(1, n);
    }

    /**
     * Fetches all rows from the result set.
     *
     * @return The rows as {@code QueryResultRowSet}
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public QueryResultRowSet fetchAllRowValues() throws MonetDBEmbeddedException {
        return this.fetchRowsInternal(1, this.numberOfRows);
    }

    @Override
    public ListIterator<MonetDBRow> iterator() {
        try {
            return Arrays.asList(this.fetchAllRowValues().getAllRows()).listIterator();
        } catch (MonetDBEmbeddedException ex) {
            return null;
        }
    }

    /**
     * Release the result set and BATs probably... set the pointers to 0!!
     */
    private native void freeResultSet(long structPointer);

    @Override
    public void close() {
        super.close();
        this.structPointer = 0;
    }

    @Override
    protected void closeResultImplementation() {
        if(!this.isQueryResultSetClosed()) {
            this.freeResultSet(this.structPointer);
            this.structPointer = 0;
        }
    }
}
