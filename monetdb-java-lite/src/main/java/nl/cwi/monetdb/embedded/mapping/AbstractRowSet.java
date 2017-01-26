/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.mapping;

/**
 * A row set retrieved from an embedded MonetDB query result. All the values in this set are already mapped
 * to Java classes a priori.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public abstract class AbstractRowSet {

    /**
     * The original query result set this row set belongs.
     */
    private final AbstractResultTable table;

    /**
     * The MonetDB-To-Java mappings of the columns.
     */
    protected final MonetDBToJavaMapping[] mappings;

    /**
     * The rows of this set.
     */
    protected final MonetDBRow[] rows;

    protected AbstractRowSet(AbstractResultTable table, MonetDBToJavaMapping[] mappings, Object[][] rows) {
        this.table = table;
        this.mappings = mappings;
        this.rows = new MonetDBRow[rows.length];
        for(int i = 0 ; i < rows.length ; i++) {
            this.rows[i] = new MonetDBRow(this, rows[i]);
        }
    }

    /**
     * Gets the original query result set this row set belongs.
     *
     * @return The original query result set this row set belongs
     */
    public AbstractResultTable getQueryResultTable() { return table; }

    /**
     * Gets the number of columns in this set.
     *
     * @return The number of columns in this set
     */
    public int getNumberOfColumns() { return mappings.length; }

    /**
     * Gets a column index in the result set by name.
     *
     * @param columnName The column name
     * @return The index number
     */
    public abstract int getColumnIndexByName(String columnName);
}
