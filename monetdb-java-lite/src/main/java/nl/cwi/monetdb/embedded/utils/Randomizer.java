/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 1997 - July 2008 CWI, August 2008 - 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.utils;

import java.util.concurrent.atomic.AtomicLong;

/**
 * An helper class to generate long values.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class Randomizer {

    private Randomizer() {}

    /**  A AtomicLong instance to generate the result set identifier. */
    private static final AtomicLong ResultSetCounter = new AtomicLong();

    /**
     * Generates and returns an incrementally long value for a result set
     *
     * @return An incrementally generated long value for a result set
     */
    public static long generateNextResultSetId() {
        return ResultSetCounter.incrementAndGet();
    }
}
