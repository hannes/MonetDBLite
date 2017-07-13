/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.mapping;

import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedException;

import java.math.BigDecimal;
import java.sql.Date;
import java.sql.Time;
import java.sql.Timestamp;
import java.util.HashMap;

/**
 * A Java enum representing the mappings between MonetDB data types and Java classes.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public enum MonetDBToJavaMapping {

    /* PLEASE Don't change these enum values order!! */
    Boolean(Boolean.class), Char(String.class), Varchar(String.class), Clob(String.class), Tinyint(Byte.class),
    Smallint(Short.class), Int(Integer.class), Bigint(Long.class), Decimal(BigDecimal.class), Real(Float.class),
    Double(Double.class), MonthInterval(Integer.class), SecondInterval(Long.class), Time(Time.class),
    TimeTz(Time.class), Date(Date.class), Timestamp(Timestamp.class), TimestampTz(Timestamp.class), Blob(byte[].class);

    /**
     * The mapping between MonetDB data types and enum values.
     */
    private static final HashMap<String, MonetDBToJavaMapping> monetDBMappings;

    static {
        monetDBMappings = new HashMap<>();
        monetDBMappings.put("boolean", Boolean);
        monetDBMappings.put("char", Char);
        monetDBMappings.put("varchar", Varchar);
        monetDBMappings.put("clob", Clob);
        monetDBMappings.put("tinyint", Tinyint);
        monetDBMappings.put("smallint", Smallint);
        monetDBMappings.put("int", Int);
        monetDBMappings.put("bigint", Bigint);
        monetDBMappings.put("decimal", Decimal);
        monetDBMappings.put("real", Real);
        monetDBMappings.put("double", Double);
        monetDBMappings.put("month_interval", MonthInterval);
        monetDBMappings.put("sec_interval", SecondInterval);
        monetDBMappings.put("time", Time);
        monetDBMappings.put("timetz", TimeTz);
        monetDBMappings.put("date", Date);
        monetDBMappings.put("timestamp", Timestamp);
        monetDBMappings.put("timestamptz", TimestampTz);
        monetDBMappings.put("blob", Blob);
    }

    /**
     * Get the corresponding MonetDBToJavaMapping from MonetDB internal data type.
     *
     * @param sqlName The MonetDB's data type SQL name
     * @return A MonetDBToJavaMapping enum value, or null if it has no mapping
     * @throws MonetDBEmbeddedException If the sql name doesn't exist
     */
    public static MonetDBToJavaMapping getJavaMappingFromMonetDBString(String sqlName) throws MonetDBEmbeddedException {
        MonetDBToJavaMapping attempt = monetDBMappings.get(sqlName);
        if(attempt == null) {
            throw new MonetDBEmbeddedException("The SQL type " + sqlName + " is not mapped");
        }
        return attempt;
    }

    /**
     * Get the corresponding MonetDBToJavaMapping from MonetDB internal data type.
     *
     * @param sqlName The MonetDB's data type SQL name
     * @return A MonetDBToJavaMapping enum value, or null if it has no mapping
     * @throws MonetDBEmbeddedException If the sql name doesn't exist
     */
    public static int getJavaMappingFromMonetDBStringOrdinalValue(String sqlName) throws MonetDBEmbeddedException {
        MonetDBToJavaMapping attempt = monetDBMappings.get(sqlName);
        if(attempt == null) {
            throw new MonetDBEmbeddedException("The SQL type " + sqlName + " is not mapped");
        }
        return monetDBMappings.get(sqlName).ordinal();
    }

    /**
     * The corresponding Java class for the enum value.
     */
    private final Class<?> javaClass;

    MonetDBToJavaMapping(Class<?> javaClass) { this.javaClass = javaClass; }

    /**
     * Gets the corresponding Java class for the enum value.
     *
     * @param <T> The Java class of the mapped MonetDB column
     * @return The corresponding Java class for the enum value
     */
    @SuppressWarnings("unchecked")
    public <T> Class<T> getJavaClass() { return (Class<T>) this.javaClass; }
}
