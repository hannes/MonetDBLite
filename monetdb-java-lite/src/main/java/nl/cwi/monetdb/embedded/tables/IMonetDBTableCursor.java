/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.tables;

/**
 * A row iterator for a MonetDB table.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public interface IMonetDBTableCursor extends IMonetDBTableBaseIterator {

    /**
     * The business logic for the iterator.
     *
     * @param nextRow The next row in the iteration.
     */
    void processNextRow(RowIterator nextRow);
}
