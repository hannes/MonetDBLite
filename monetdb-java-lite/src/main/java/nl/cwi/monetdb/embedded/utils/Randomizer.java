package nl.cwi.monetdb.embedded.utils;

import java.util.Random;

/**
 * An helper class to generate random values.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class Randomizer {

    /**  A random instance to generate the result set identifier. */
    private static final Random Randomizer = new Random();

    /**
     * Generates and returns a long value.
     *
     * @return A random generated long value
     */
    public static long GenerateNextLong() {
        return Randomizer.nextLong();
    }
}
