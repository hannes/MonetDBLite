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
            i++;
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
     * Gets the pointer to the full result set, which is array of Object arrays, be careful!!
     *
     * @return The entire result set.
     */
    public Object[] getFullResultSet() {
        return this.data;
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
                return index + 1;
            }
            index++;
        }
        throw new ArrayIndexOutOfBoundsException("The column is not present in the result set!");
    }

    /**
     * Gets the current row value as a Java Boolean.
     *
     * @param column The column index starting from 1
     * @return A Java Boolean column
     */
    public boolean[] getBooleanColumnByIndex(int column) {
        column--;
        boolean[] res = new boolean[this.numberOfRows];
        switch (this.columnTypes[column]) {
            case "boolean":
            case "tinyint":
                byte[] aux0 = (byte[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows; i++) {
                    res[i] = aux0[i] != 0 && aux0[i] != Byte.MIN_VALUE;
                }
                break;
            case "smallint":
                short[] aux1 = (short[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = aux1[i] != 0 && aux1[i] != Short.MIN_VALUE;
                }
                break;
            case "int":
            case "month_interval":
                int[] aux2 = (int[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = aux2[i] != 0 && aux2[i] != Integer.MIN_VALUE;
                }
                break;
            case "bigint":
            case "sec_interval":
                long[] aux3 = (long[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = aux3[i] != 0 && aux3[i] != Long.MIN_VALUE;
                }
                break;
            case "real":
                float[] aux4 = (float[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = aux4[i] != 0.0f && aux4[i] != Float.MIN_VALUE;
                }
                break;
            case "double":
                double[] aux5 = (double[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = aux5[i] != 0.0d && aux5[i] != Double.MIN_VALUE;
                }
                break;
            case "char":
            case "varchar":
            case "clob":
                String[] aux6 = (String[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = (aux6[i] != null) && Boolean.parseBoolean(aux6[i]);
                }
                break;
            case "decimal":
                BigDecimal[] aux7 = (BigDecimal[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] =  (aux7[i] != null) && !aux7[i].equals(BigDecimal.ZERO);
                }
                break;
            default:
                throw new ClassCastException("Cannot convert " + this.columnTypes[column] + " to boolean!");
        }
        return res;
    }

    /**
     * Gets a column as a Java Byte.
     *
     * @param column The column index starting from 1
     * @return A Java Byte column
     */
    public byte[] getByteColumnByIndex(int column) {
        column--;
        String columnType = this.columnTypes[column];
        if(columnType.equals("boolean") || columnType.equals("tinyint")) {
            return (byte[]) this.data[column];
        } else {
            byte[] res = new byte[this.numberOfRows];
            switch (this.columnTypes[column]) {
                case "smallint":
                    short[] aux1 = (short[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux1[i] == Short.MIN_VALUE) ? Byte.MIN_VALUE : (byte) aux1[i];
                    }
                    break;
                case "int":
                case "month_interval":
                    int[] aux2 = (int[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux2[i] == Integer.MIN_VALUE) ? Byte.MIN_VALUE : (byte) aux2[i];
                    }
                    break;
                case "bigint":
                case "sec_interval":
                    long[] aux3 = (long[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux3[i] == Long.MIN_VALUE) ? Byte.MIN_VALUE : (byte) aux3[i];
                    }
                    break;
                case "real":
                    float[] aux4 = (float[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux4[i] == Float.MIN_VALUE) ? Byte.MIN_VALUE : (byte) Math.round(aux4[i]);
                    }
                    break;
                case "double":
                    double[] aux5 = (double[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux5[i] == Double.MIN_VALUE) ? Byte.MIN_VALUE : (byte) Math.round(aux5[i]);
                    }
                    break;
                case "char":
                case "varchar":
                case "clob":
                    String[] aux6 = (String[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux6[i] != null) ? Byte.parseByte(aux6[i]) : Byte.MIN_VALUE;
                    }
                    break;
                case "decimal":
                    BigDecimal[] aux7 = (BigDecimal[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux7[i] != null) ? (byte) aux7[i].intValue() : Byte.MIN_VALUE;
                    }
                    break;
                default:
                    throw new ClassCastException("Cannot convert " + this.columnTypes[column] + " to byte!");
            }
            return res;
        }
    }

    /**
     * Gets a column as a Java Short.
     *
     * @param column The column index starting from 1
     * @return A Java Short column
     */
    public short[] getShortColumnByIndex(int column) {
        column--;
        String columnType = this.columnTypes[column];
        if(columnType.equals("smallint")) {
            return (short[]) this.data[column];
        } else {
            short[] res = new short[this.numberOfRows];
            switch (this.columnTypes[column]) {
                case "boolean":
                case "tinyint":
                    byte[] aux1 = (byte[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows; i++) {
                        res[i] = (aux1[i] == Byte.MIN_VALUE) ? Short.MIN_VALUE : aux1[i];
                    }
                    break;
                case "int":
                case "month_interval":
                    int[] aux2 = (int[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux2[i] == Integer.MIN_VALUE) ? Short.MIN_VALUE : (short) aux2[i];
                    }
                    break;
                case "bigint":
                case "sec_interval":
                    long[] aux3 = (long[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux3[i] == Long.MIN_VALUE) ? Short.MIN_VALUE : (short) aux3[i];
                    }
                    break;
                case "real":
                    float[] aux4 = (float[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux4[i] == Float.MIN_VALUE) ? Short.MIN_VALUE : (short) Math.round(aux4[i]);
                    }
                    break;
                case "double":
                    double[] aux5 = (double[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux5[i] == Double.MIN_VALUE) ? Short.MIN_VALUE : (short) Math.round(aux5[i]);
                    }
                    break;
                case "char":
                case "varchar":
                case "clob":
                    String[] aux6 = (String[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux6[i] != null) ? Short.parseShort(aux6[i]) : Short.MIN_VALUE;
                    }
                    break;
                case "decimal":
                    BigDecimal[] aux7 = (BigDecimal[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux7[i] != null) ? (short) aux7[i].intValue() : Short.MIN_VALUE;
                    }
                    break;
                default:
                    throw new ClassCastException("Cannot convert " + this.columnTypes[column] + " to short!");
            }
            return res;
        }
    }

    /**
     * Gets a column as a Java Integer.
     *
     * @param column The column index starting from 1
     * @return A Java Integer column
     */
    public int[] getIntColumnByIndex(int column) {
        column--;
        String columnType = this.columnTypes[column];
        if(columnType.equals("int") || columnType.equals("month_interval")) {
            return (int[]) this.data[column];
        } else {
            int[] res = new int[this.numberOfRows];
            switch (this.columnTypes[column]) {
                case "boolean":
                case "tinyint":
                    byte[] aux0 = (byte[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows; i++) {
                        res[i] = (aux0[i] == Byte.MIN_VALUE) ? Integer.MIN_VALUE : aux0[i];
                    }
                    break;
                case "smallint":
                    short[] aux1 = (short[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux1[i] == Short.MIN_VALUE) ? Integer.MIN_VALUE : aux1[i];
                    }
                    break;
                case "bigint":
                case "sec_interval":
                    long[] aux3 = (long[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux3[i] == Long.MIN_VALUE) ? Integer.MIN_VALUE : (int) aux3[i];
                    }
                    break;
                case "real":
                    float[] aux4 = (float[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux4[i] == Float.MIN_VALUE) ? Integer.MIN_VALUE : Math.round(aux4[i]);
                    }
                    break;
                case "double":
                    double[] aux5 = (double[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux5[i] == Double.MIN_VALUE) ? Integer.MIN_VALUE : (int) Math.round(aux5[i]);
                    }
                    break;
                case "char":
                case "varchar":
                case "clob":
                    String[] aux6 = (String[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux6[i] != null) ? Integer.parseInt(aux6[i]) : Integer.MIN_VALUE;
                    }
                    break;
                case "decimal":
                    BigDecimal[] aux7 = (BigDecimal[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux7[i] != null) ? aux7[i].intValue() : Integer.MIN_VALUE;
                    }
                    break;
                default:
                    throw new ClassCastException("Cannot convert " + this.columnTypes[column] + " to integer!");
            }
            return res;
        }
    }

    /**
     * Gets a column as a Java Long.
     *
     * @param column The column index starting from 1
     * @return A Java Long column
     */
    public long[] getLongColumnByIndex(int column) {
        column--;
        String columnType = this.columnTypes[column];
        if(columnType.equals("bigint") || columnType.equals("sec_interval")) {
            return (long[]) this.data[column];
        } else {
            long[] res = new long[this.numberOfRows];
            switch (this.columnTypes[column]) {
                case "boolean":
                case "tinyint":
                    byte[] aux0 = (byte[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows; i++) {
                        res[i] = (aux0[i] == Byte.MIN_VALUE) ? Long.MIN_VALUE : aux0[i];
                    }
                    break;
                case "smallint":
                    short[] aux1 = (short[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux1[i] == Short.MIN_VALUE) ? Long.MIN_VALUE : aux1[i];
                    }
                    break;
                case "int":
                case "month_interval":
                    int[] aux2 = (int[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux2[i] == Integer.MIN_VALUE) ? Long.MIN_VALUE : aux2[i];
                    }
                    break;
                case "real":
                    float[] aux4 = (float[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux4[i] == Float.MIN_VALUE) ? Long.MIN_VALUE : Math.round(aux4[i]);
                    }
                    break;
                case "double":
                    double[] aux5 = (double[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux5[i] == Double.MIN_VALUE) ? Long.MIN_VALUE : Math.round(aux5[i]);
                    }
                    break;
                case "char":
                case "varchar":
                case "clob":
                    String[] aux6 = (String[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux6[i] != null) ? Long.parseLong(aux6[i]) : Long.MIN_VALUE;
                    }
                    break;
                case "decimal":
                    BigDecimal[] aux7 = (BigDecimal[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux7[i] != null) ? aux7[i].longValue() : Long.MIN_VALUE;
                    }
                    break;
                default:
                    throw new ClassCastException("Cannot convert " + this.columnTypes[column] + " to long!");
            }
            return res;
        }
    }

    /**
     * Gets a column as a Java Float.
     *
     * @param column The column index starting from 1
     * @return A Java Float column
     */
    public float[] getFloatColumnByIndex(int column) {
        column--;
        String columnType = this.columnTypes[column];
        if(columnType.equals("real")) {
            return (float[]) this.data[column];
        } else {
            float[] res = new float[this.numberOfRows];
            switch (this.columnTypes[column]) {
                case "boolean":
                case "tinyint":
                    byte[] aux0 = (byte[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows; i++) {
                        res[i] = (aux0[i] == Byte.MIN_VALUE) ? Float.MIN_VALUE : aux0[i];
                    }
                    break;
                case "smallint":
                    short[] aux1 = (short[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux1[i] == Short.MIN_VALUE) ? Float.MIN_VALUE : aux1[i];
                    }
                    break;
                case "int":
                case "month_interval":
                    int[] aux2 = (int[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux2[i] == Integer.MIN_VALUE) ? Float.MIN_VALUE : aux2[i];
                    }
                    break;
                case "bigint":
                case "sec_interval":
                    long[] aux3 = (long[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux3[i] == Long.MIN_VALUE) ? Float.MIN_VALUE : aux3[i];
                    }
                    break;
                case "double":
                    double[] aux5 = (double[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux5[i] == Double.MIN_VALUE) ? Float.MIN_VALUE : (float) aux5[i];
                    }
                    break;
                case "char":
                case "varchar":
                case "clob":
                    String[] aux6 = (String[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux6[i] != null) ? Float.parseFloat(aux6[i]) : Float.MIN_VALUE;
                    }
                    break;
                case "decimal":
                    BigDecimal[] aux7 = (BigDecimal[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux7[i] != null) ? aux7[i].floatValue() : Float.MIN_VALUE;
                    }
                    break;
                default:
                    throw new ClassCastException("Cannot convert " + this.columnTypes[column] + " to float!");
            }
            return res;
        }
    }

    /**
     * Gets a column as a Java Double.
     *
     * @param column The column index starting from 1
     * @return A Java Double column
     */
    public double[] getDoubleColumnByIndex(int column) {
        column--;
        String columnType = this.columnTypes[column];
        if(columnType.equals("double")) {
            return (double[]) this.data[column];
        } else {
            double[] res = new double[this.numberOfRows];
            switch (this.columnTypes[column]) {
                case "boolean":
                case "tinyint":
                    byte[] aux0 = (byte[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows; i++) {
                        res[i] = (aux0[i] == Byte.MIN_VALUE) ? Double.MIN_VALUE : aux0[i];
                    }
                    break;
                case "smallint":
                    short[] aux1 = (short[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux1[i] == Short.MIN_VALUE) ? Double.MIN_VALUE : aux1[i];
                    }
                    break;
                case "int":
                case "month_interval":
                    int[] aux2 = (int[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux2[i] == Integer.MIN_VALUE) ? Double.MIN_VALUE : aux2[i];
                    }
                    break;
                case "bigint":
                case "sec_interval":
                    long[] aux3 = (long[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux3[i] == Long.MIN_VALUE) ? Double.MIN_VALUE : aux3[i];
                    }
                    break;
                case "real":
                    float[] aux4 = (float[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux4[i] == Float.MIN_VALUE) ? Double.MIN_VALUE : aux4[i];
                    }
                    break;
                case "char":
                case "varchar":
                case "clob":
                    String[] aux6 = (String[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux6[i] != null) ? Double.parseDouble(aux6[i]) : Double.MIN_VALUE;
                    }
                    break;
                case "decimal":
                    BigDecimal[] aux7 = (BigDecimal[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux7[i] != null) ? aux7[i].doubleValue() : Double.MIN_VALUE;
                    }
                    break;
                default:
                    throw new ClassCastException("Cannot convert " + this.columnTypes[column] + " to double!");
            }
            return res;
        }
    }

    /**
     * Gets a column as a Java String.
     *
     * @param column The column index starting from 1
     * @return A Java String column
     */
    public String[] getStringColumnByIndex(int column) {
        column--;
        String columnType = this.columnTypes[column];
        if(columnType.equals("char") || columnType.equals("varchar") || columnType.equals("clob")) {
            return (String[]) this.data[column];
        } else {
            String[] res = new String[this.numberOfRows];
            switch (this.columnTypes[column]) {
                case "boolean":
                case "tinyint":
                    byte[] aux0 = (byte[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows; i++) {
                        res[i] = (aux0[i] == Byte.MIN_VALUE) ? null : Byte.toString(aux0[i]);
                    }
                    break;
                case "smallint":
                    short[] aux1 = (short[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux1[i] == Short.MIN_VALUE) ? null : Short.toString(aux1[i]);
                    }
                    break;
                case "int":
                case "month_interval":
                    int[] aux2 = (int[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux2[i] == Integer.MIN_VALUE) ? null : Integer.toString(aux2[i]);
                    }
                    break;
                case "bigint":
                case "sec_interval":
                    long[] aux3 = (long[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux3[i] == Long.MIN_VALUE) ? null : Long.toString(aux3[i]);
                    }
                    break;
                case "real":
                    float[] aux4 = (float[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux4[i] == Float.MIN_VALUE) ? null : Float.toString(aux4[i]);
                    }
                    break;
                case "double":
                    double[] aux5 = (double[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux5[i] == Double.MIN_VALUE) ? null : Double.toString(aux5[i]);
                    }
                    break;
                case "blob":
                    byte[][] aux6 = (byte[][]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux6[i] == null) ? null : Arrays.toString(aux6);
                    }
                    break;
                default:
                    Object[] aux7 = (Object[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux7[i] == null) ? null : aux7[i].toString();
                    }
                    break;
            }
            return res;
        }
    }

    /**
     * Gets a column as a Java byte[] (BLOBs).
     *
     * @param column The column index starting from 1
     * @return A Java byte[] column
     */
    public byte[][] getBlobColumnByIndex(int column) {
        column--;
        String columnType = this.columnTypes[column];
        if(columnType.equals("blob")) {
            return (byte[][]) this.data[column];
        } else {
            byte[][] res = new byte[this.numberOfRows][];
            switch (this.columnTypes[column]) {
                case "char":
                case "varchar":
                case "clob":
                    String[] aux6 = (String[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux6[i] != null) ? aux6[i].getBytes() : null;
                    }
                    break;
                default:
                    throw new ClassCastException("Cannot convert " + this.columnTypes[column] + " to BLOB!");
            }
            return res;
        }
    }

    /**
     * Gets a column as a Java SQL Date.
     *
     * @param column The column index starting from 1
     * @return A Java SQL Date column
     */
    public Date[] getDateColumnByIndex(int column) {
        column--;
        String columnType = this.columnTypes[column];
        if(columnType.equals("date")) {
            return (Date[]) this.data[column];
        } else {
            Date[] res = new Date[this.numberOfRows];
            switch (this.columnTypes[column]) {
                case "time":
                case "timetz":
                    Time[] aux2 = (Time[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux2[i] != null) ? new Date(aux2[i].getTime()) : null;
                    }
                    break;
                case "timestamp":
                case "timestamptz":
                    Timestamp[] aux3 = (Timestamp[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux3[i] != null) ? new Date(aux3[i].getTime()) : null;
                    }
                    break;
                default:
                    throw new ClassCastException("Cannot convert " + this.columnTypes[column] + " to Date!");
            }
            return res;
        }
    }

    /**
     * Gets a column as a Java SQL Time.
     *
     * @param column The column index starting from 1
     * @return A Java SQL Time column
     */
    public Time[] getTimeColumnByIndex(int column) {
        column--;
        String columnType = this.columnTypes[column];
        if(columnType.equals("time") || columnType.equals("timetz")) {
            return (Time[]) this.data[column];
        } else {
            Time[] res = new Time[this.numberOfRows];
            switch (this.columnTypes[column]) {
                case "date":
                    Date[] aux2 = (Date[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux2[i] != null) ? new Time(aux2[i].getTime()) : null;
                    }
                    break;
                case "timestamp":
                case "timestamptz":
                    Timestamp[] aux3 = (Timestamp[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux3[i] != null) ? new Time(aux3[i].getTime()) : null;
                    }
                    break;
                default:
                    throw new ClassCastException("Cannot convert " + this.columnTypes[column] + " to Time!");
            }
            return res;
        }
    }

    /**
     * Gets a column as a Java SQL Timestamp.
     *
     * @param column The column index starting from 1
     * @return A Java SQL Timestamp column
     */
    public Timestamp[] getTimestampColumnByIndex(int column) {
        column--;
        String columnType = this.columnTypes[column];
        if(columnType.equals("timestamp") || columnType.equals("timestamptz")) {
            return (Timestamp[]) this.data[column];
        } else {
            Timestamp[] res = new Timestamp[this.numberOfRows];
            switch (this.columnTypes[column]) {
                case "date":
                    Date[] aux2 = (Date[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux2[i] != null) ? new Timestamp(aux2[i].getTime()) : null;
                    }
                    break;
                case "time":
                case "timetz":
                    Time[] aux3 = (Time[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux3[i] != null) ? new Timestamp(aux3[i].getTime()) : null;
                    }
                    break;
                default:
                    throw new ClassCastException("Cannot convert " + this.columnTypes[column] + " to Timestamp!");
            }
            return res;
        }
    }

    /**
     * Gets a column as a Java BigDecimal
     *
     * @param column The column index starting from 1
     * @return A Java BigDecimal column
     */
    public BigDecimal[] getDecimalColumnByIndex(int column) {
        column--;
        String columnType = this.columnTypes[column];
        if(columnType.equals("decimal")) {
            return (BigDecimal[]) this.data[column];
        } else {
            BigDecimal[] res = new BigDecimal[this.numberOfRows];
            switch (this.columnTypes[column]) {
                case "boolean":
                case "tinyint":
                    byte[] aux0 = (byte[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows; i++) {
                        res[i] = (aux0[i] != Byte.MIN_VALUE) ? new BigDecimal((int)aux0[i]) : null;
                    }
                    break;
                case "smallint":
                    short[] aux1 = (short[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux1[i] != Short.MIN_VALUE) ? new BigDecimal((int)aux1[i]) : null;
                    }
                    break;
                case "int":
                case "month_interval":
                    int[] aux2 = (int[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux2[i] != Integer.MIN_VALUE) ? new BigDecimal(aux2[i]) : null;
                    }
                    break;
                case "bigint":
                case "sec_interval":
                    long[] aux3 = (long[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux3[i] != Long.MIN_VALUE) ? new BigDecimal(aux3[i]) : null;
                    }
                    break;
                case "real":
                    float[] aux4 = (float[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux4[i] != Float.MIN_VALUE) ? new BigDecimal(aux4[i]) : null;
                    }
                    break;
                case "double":
                    double[] aux5 = (double[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux5[i] != Double.MIN_VALUE) ? new BigDecimal(aux5[i]) : null;
                    }
                    break;
                case "char":
                case "varchar":
                case "clob":
                    String[] aux6 = (String[]) this.data[column];
                    for(int i = 0 ; i < this.numberOfRows ; i++) {
                        res[i] = (aux6[i] != null) ? new BigDecimal(aux6[i]) : null;
                    }
                    break;
                default:
                    throw new ClassCastException("Cannot convert " + this.columnTypes[column] + " to BigDecimal!");
            }
            return res;
        }
    }

    /**
     * Gets a Java Boolean column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Boolean
     */
    public boolean[] getBooleanColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getBooleanColumnByIndex(index);
    }

    /**
     * Gets a Java Byte column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Byte column
     */
    public byte[] getByteColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getByteColumnByIndex(index);
    }

    /**
     * Gets a Java Short column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Short column
     */
    public short[] getShortColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getShortColumnByIndex(index);
    }

    /**
     * Gets a Java Int column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Integer column
     */
    public int[] getIntColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getIntColumnByIndex(index);
    }

    /**
     * Gets a long column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Long column
     */
    public long[] getLongColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getLongColumnByIndex(index);
    }

    /**
     * Gets a float column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Float column
     */
    public float[] getFloatColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getFloatColumnByIndex(index);
    }

    /**
     * Gets a double column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java Double column
     */
    public double[] getDoubleColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getDoubleColumnByIndex(index);
    }

    /**
     * Gets a String column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java String column
     */
    public String[] getStringColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getStringColumnByIndex(index);
    }

    /**
     * Gets a byte[] column (BLOB) from the result set by name.
     *
     * @param columnName The column name
     * @return A Java byte[] column
     */
    public byte[][] getBlobColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getBlobColumnByIndex(index);
    }

    /**
     * Gets a Date column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java SQL Date column
     */
    public Date[] getDateColumnByIndex(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getDateColumnByIndex(index);
    }

    /**
     * Gets a Time column from the result set by name.
     *
     * @param columnName The column name
     * @return  A Java SQL Time column
     */
    public Time[] getTimeColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getTimeColumnByIndex(index);
    }

    /**
     * Gets a Timestamp column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java SQL Timestamp column
     */
    public Timestamp[] getTimestampColumnByName(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getTimestampColumnByIndex(index);
    }

    /**
     * Gets a BigDecimal column from the result set by name.
     *
     * @param columnName The column name
     * @return A Java BigDecimal column
     */
    public BigDecimal[] getDecimalColumnByIndex(String columnName) {
        int index = this.getColumnIndexByName(columnName);
        return this.getDecimalColumnByIndex(index);
    }

    /**
     * Tests if a boolean in the result set is a null value.
     *
     * @param column The column index starting from 1
     * @param row The row index in the column starting from 1
     * @return A boolean indicating if the value is null
     */
    public boolean checkBooleanIsNull(int column, int row) {
        column--;
        row--;
        if (row < 0) {
            throw new ArrayIndexOutOfBoundsException("A row smaller than 1?");
        } else if (row > this.numberOfRows) {
            throw new ArrayIndexOutOfBoundsException("The row is larger than the number of rows!");
        }
        return ((byte[])this.data[column])[row] == Byte.MIN_VALUE;
    }

    /**
     * Gets the null mapping of a column by index.
     *
     * @param column The column index starting from 1
     * @return An array of booleans, indicating if the values of the column are null or not.
     */
    public boolean[] getColumnNullMappingsByIndex(int column) {
        column--;
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
     * @param column The column index starting from 1
     * @return An Object array representation of the column.
     */
    public Object[] mapColumnToObjectByIndex(int column) {
        column--;
        Object[] res;
        switch (this.columnTypes[column]) {
            case "boolean":
                res = new Object[this.numberOfRows];
                byte[] data0 = (byte[]) this.data[column];
                for(int i = 0 ; i < this.numberOfRows ; i++) {
                    res[i] = data0[i] != 0 && data0[i] != Byte.MIN_VALUE;
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
     * @param startIndex The first row index to retrieve starting from 1
     * @param endIndex The last row index to retrieve
     * @return The rows as {@code AbstractRowSet}
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
        int numberOfRowsToRetrieve = endIndex - startIndex + 1;
        Object[][] temp = new Object[numberOfRowsToRetrieve][this.getNumberOfColumns()];
		for (int i = 0 ; i < this.getNumberOfColumns(); i++) {
		    Object[] aux = this.mapColumnToObjectByIndex(i + 1);
            Object[] nextColumn = Arrays.copyOfRange(aux, startIndex - 1, endIndex);
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
        return this.fetchResultSetRows(1, n);
    }

    /**
     * Fetches all rows from the result set.
     *
     * @return The rows as {@code AbstractRowSet}
     * @throws MonetDBEmbeddedException If an error in the database occurred
     */
    public QueryResultRowSet fetchAllRowValues() throws MonetDBEmbeddedException {
        return this.fetchResultSetRows(1, this.numberOfRows);
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
