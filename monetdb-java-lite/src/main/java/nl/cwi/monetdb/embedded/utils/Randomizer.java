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
     * Generates and returns an incrementally long value.
     *
     * @return An incrementally generated long value
     */
    public static long generateNextLong() {
        return ResultSetCounter.incrementAndGet();
    }
}
