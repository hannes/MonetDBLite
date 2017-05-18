/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.env;

import java.sql.SQLException;

/**
 * The exception fired from embedded methods.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public class MonetDBEmbeddedException extends SQLException {

    public MonetDBEmbeddedException(String message) { super(message); }

    public MonetDBEmbeddedException(Throwable cause) {
        super(cause);
    }
}
