/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.mapping;

import nl.cwi.monetdb.embedded.env.AbstractConnectionResult;
import nl.cwi.monetdb.embedded.env.MonetDBEmbeddedException;

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
    private final AbstractConnectionResult table;

    /**
     * The MonetDB-To-Java mappings of the columns.
     */
    protected final MonetDBToJavaMapping[] mappings;

    /**
     * The rows of this set.
     */
    protected final MonetDBRow[] rows;

    protected AbstractRowSet(AbstractConnectionResult table, Object[][] rows) {
        this.table = table;
        int numberOfColumns = table.getNumberOfColumns();
        this.mappings = new MonetDBToJavaMapping[numberOfColumns];
        try {
            table.getMappings(this.mappings);
        } catch (MonetDBEmbeddedException ex) {
            throw new IllegalArgumentException(ex);
        }
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
    public AbstractConnectionResult getQueryResultTable() { return table; }

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
