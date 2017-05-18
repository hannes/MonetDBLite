/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.tables;

import nl.cwi.monetdb.embedded.mapping.AbstractColumn;

/**
 * Java representation of a MonetDB table column.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class MonetDBTableColumn extends AbstractColumn {

    /**
     * If the column has a default value.
     */
    private final String defaultValue;

    /**
     * If the column is Nullable.
     */
    private final boolean isNullable;

    protected MonetDBTableColumn(String columnType, String columnName, int columnDigits, int columnScale,
                                 String defaultValue, boolean isNullable) {
        super(columnType, columnName, columnDigits, columnScale);
        this.defaultValue = defaultValue;
        this.isNullable = isNullable;
    }

    /**
     * Get the default value if there is one, or null if none.
     *
     * @return The default value if there is one, or null if none
     */
    public String getDefaultValue() { return this.defaultValue; }

    /**
     * Get the indication if the column is nullable.
     *
     * @return The indication if the column is nullable
     */
    public boolean isNullable() { return this.isNullable; }
}
