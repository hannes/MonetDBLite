/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0.  If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright 2017 MonetDB B.V.
 */

package nl.cwi.monetdb.embedded.env;

import java.io.*;
import java.security.DigestInputStream;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Arrays;
import java.util.List;
import java.util.Locale;

import nl.cwi.monetdb.jdbc.MonetDriver;

/**
 * Class responsible to load MonetDB's embedded library. On the resources directory of the JAR inside the libs directory
 * there is present a library file for each of the operating systems MonetDBJavaLite is compiled for.
 *
 * @author <a href="mailto:pedro.ferreira@monetdbsolutions.com">Pedro Ferreira</a>
 */
public final class MonetDBJavaLiteLoader {

    private MonetDBJavaLiteLoader() {}

    /**
     * Operating Systems Listening and their respective MonetDB embedded libraries.
     */
    public enum OSLibraries {
        /* Please don't change the order!!! */
        Windows("/libs/windows", "libmonetdb5.dll"), MacOS("/libs/macos", "libmonetdb5.jnilib"),
        Linux("/libs/linux", "libmonetdb5.so");

        OSLibraries(String libraryFilePath, String libraryFileName) {
            this.libraryFilePath = libraryFilePath;
            this.libraryFileName = libraryFileName;
        }

        /**
         * The full library path from where this class is loaded. (Hopefully will always be from the same class as the
         * others in this JAR) :)
         */
        private final String libraryFilePath;

        /**
         * The library file name
         */
        private final String libraryFileName;

        /**
         * Get the library file path
         *
         * @return The library file path
         */
        public String getLibraryFilePath() {
            return libraryFilePath;
        }

        /**
         * Get the library file name
         *
         * @return The library file name
         */
        public String getLibraryFileName() {
            return libraryFileName;
        }
    }

    /**
     * The current loaded library's path.
     */
    private static String LoadedLibraryFullPath = null;

    /**
     * The temporary directory to load the embedded library.
     */
    private static final String TempDirectory = new File(System.getProperty("java.io.tmpdir")).getAbsolutePath();

    /**
     * The String representation of the latest version of the MonetDB JDBC driver.
     */
    private static final String MonetDBJDBCDriverString;

    static {
        MonetDBJDBCDriverString = MonetDriver.getDriverMajorVersion() + "-" + MonetDriver.getDriverMinorVersion();
    }

    /**
     * Check if MonetDBJavaLite native library was loaded or not.
     *
     * @return A boolean indicating if the MonetDBJavaLite native library was loaded or not
     */
    public static synchronized boolean IsLoaded() {
        return LoadedLibraryFullPath != null;
    }

    /**
     * Detects the operating system from the os.name System property and returns the respective library location.
     *
     * @return The library path and file indication
     * @throws MonetDBEmbeddedException If the running operative system could not be detected
     */
    private static OSLibraries DetectRunningOperatingSystemAndLoadLibrary() throws MonetDBEmbeddedException {
        String OS = System.getProperty("os.name", "generic").toLowerCase(Locale.ENGLISH);

        //Check the CPU architecture
        //http://stackoverflow.com/questions/1856565/how-do-you-determine-32-or-64-bit-architecture-of-windows-using-java/2269242#2269242
        boolean is64bit;
        if (OS.contains("win")) {
            is64bit = (System.getenv("ProgramFiles(x86)") != null);
        } else {
            is64bit = (System.getProperty("os.arch").contains("64"));
        }
        if(!is64bit) {
            throw new MonetDBEmbeddedException("Currently we only support 64-bit architectures! Sorry! :(");
        }

        //Check the running OS
        //http://stackoverflow.com/questions/228477/how-do-i-programmatically-determine-operating-system-in-java#answer-18417382
        if ((OS.contains("mac")) || (OS.contains("darwin"))) {
            return OSLibraries.MacOS;
        } else if (OS.contains("win")) {
            return OSLibraries.Windows;
        } else if (OS.contains("nux")) {
            return OSLibraries.Linux;
        } else {
            throw new MonetDBEmbeddedException("The operating system " + OS +  " is currently not supported by " +
                    "MonetDBJavaLite! Sorry! :(");
        }
    }

    /**
     * Performs a SHA-256 digest on a file and returns the digest.
     *
     * @param input The file's input stream
     * @return The file's SHA-256 digest
     * @throws MonetDBEmbeddedException If the SHA-256 algorithm fails to load
     */
    private static byte[] MakeSHA256Digest(InputStream input) throws MonetDBEmbeddedException {
        try {
            byte[] buffer = new byte[8192];
            MessageDigest md = MessageDigest.getInstance("SHA-256");
            try (DigestInputStream dis = new DigestInputStream(input, md)) {
                while (dis.read(buffer) != -1);
            }
            return md.digest();
        } catch (IOException | NoSuchAlgorithmException e) {
            throw new MonetDBEmbeddedException(e);
        }
    }

    /**
     * Loads a native library into the JVM.
     *
     * @param libraryFilePath The library's path
     * @param libraryFileName The library's name
     * @return The loaded library full path or null if failed
     */
    private static String LoadNativeLibrary(String libraryFilePath, String libraryFileName) {
        File libPath = new File(libraryFilePath, libraryFileName);
        if (libPath.exists()) { //load the file
            System.load(new File(libraryFilePath, libraryFileName).getAbsolutePath());
            return libPath.getAbsolutePath();
        } else {
            return null;
        }
    }

    /**
     * Checks if a native library exists in a directory, copying it there if it doesn't exist, and then loads it.
     *
     * @param libraryFilePath The library's path
     * @param prefix An optional prefix to the extracted library file
     * @param libraryFileName The library's name
     * @param destinationDirectory The destination directory
     * @return The loaded library full path or null if failed
     * @throws MonetDBEmbeddedException If an IO error occurred
     */
    private static String LoadLibraryIntoDirectory(String libraryFilePath, String prefix, String libraryFileName,
                                                    String destinationDirectory) throws MonetDBEmbeddedException {
        try {
            String nativeLibraryFilePath = libraryFilePath + "/" + libraryFileName;
            String extractedLibFileName = prefix + libraryFileName;
            File extractedLibFile = new File(destinationDirectory, extractedLibFileName);

            if (extractedLibFile.exists()) { //if the file exists check if it needs to be updated
                byte[] digest1 = MakeSHA256Digest(MonetDBJavaLiteLoader.class.getResourceAsStream(nativeLibraryFilePath));
                byte[] digest2 = MakeSHA256Digest(new FileInputStream(extractedLibFile));

                if (Arrays.equals(digest1, digest2)) {
                    return LoadNativeLibrary(destinationDirectory, extractedLibFileName);
                } else {
                    if (!extractedLibFile.delete()) { // delete the old file
                        throw new IOException("failed to remove existing native library file: "
                                + extractedLibFile.getAbsolutePath());
                    }
                }
            }

            // extract the file into the destination folder
            InputStream reader = MonetDBJavaLiteLoader.class.getResourceAsStream(nativeLibraryFilePath);
            FileOutputStream writer = new FileOutputStream(extractedLibFile);
            byte[] buffer = new byte[8192];
            int bytesRead;
            while ((bytesRead = reader.read(buffer)) != -1) {
                writer.write(buffer, 0, bytesRead);
            }
            writer.close();
            reader.close();
            return LoadNativeLibrary(destinationDirectory, extractedLibFileName);
        } catch (IOException ex) {
            throw new MonetDBEmbeddedException(ex);
        }
    }

    /**
     * Loads MonetDBJavaLite native library into the JVM if it hasn't been loaded yet.
     *
     * @throws MonetDBEmbeddedException If an IO error occurred
     */
    static synchronized void LoadMonetDBJavaLite() throws MonetDBEmbeddedException {
        if (LoadedLibraryFullPath != null) {
            return;
        }

        OSLibraries toLoad = DetectRunningOperatingSystemAndLoadLibrary();
        String nativeLibraryPath = toLoad.getLibraryFilePath();
        String nativeLibraryName = toLoad.getLibraryFileName();

        if (MonetDBJavaLiteLoader.class.getResource(nativeLibraryPath + "/" + nativeLibraryName) == null) {
            LoadedLibraryFullPath = null;
            throw new MonetDBEmbeddedException("Error while loading library: " + nativeLibraryPath + "/" +
                    nativeLibraryName);
        }

        int OSORdinal = toLoad.ordinal();
        // Extract the libraries from the jar
        if(OSORdinal == 0) { //Windows dammit!!
            LoadLibraryIntoDirectory(nativeLibraryPath, "", "msvcr100.dll", TempDirectory);
        }
        String prefix = "MonetDBJavaLite-" + MonetDBJDBCDriverString + "-"; //the prefix will be this
        LoadedLibraryFullPath = LoadLibraryIntoDirectory(nativeLibraryPath, prefix, nativeLibraryName, TempDirectory);
    }
}
