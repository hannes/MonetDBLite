/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.mapping;

/**
 * A single Java representation of a MonetDB column.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public abstract class AbstractColumn {

    /**
     * The mapping between MonetDB type and the Java Class.
     */
    protected final MonetDBToJavaMapping mapping;

    /**
     * The column name.
     */
    private final String columnName;

    /**
     * The column digits.
     */
    private final int columnDigits;

    /**
     * The column scale.
     */
    private final int columnScale;

    protected AbstractColumn(String columnType, String columnName, int columnDigits, int columnScale) {
        this.mapping = MonetDBToJavaMapping.getJavaMappingFromMonetDBString(columnType);
        this.columnName = columnName;
        this.columnDigits = columnDigits;
        this.columnScale = columnScale;
    }

    /**
     * Gets the type of the column.
     *
     * @return The Column type
     */
    public String getColumnInternalTypeName() { return mapping.toString(); }

    /**
     * Gets the Java mapping of the column.
     *
     * @return A enum constant of the Java mapping
     */
    public MonetDBToJavaMapping getMapping() { return mapping; }

    /**
     * Gets the name of the column.
     *
     * @return The column name
     */
    public String getColumnName() { return this.columnName; }

    /**
     * Gets the number digits of the column.
     *
     * @return The number of digits
     */
    public int getColumnDigits() { return this.columnDigits; }

    /**
     * Gets the scale of the column.
     *
     * @return The scale
     */
    public int getColumnScale() { return this.columnScale; }
}
