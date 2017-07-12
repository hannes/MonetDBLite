#!/usr/bin/env bash

cd monetdb-java-lite

# Upload to the Maven Central Repository -- but due to bugs in Gradle we are doing it manually
# ./gradlew uploadArchives

# Update the website downloads directory
mkdir -p synchronizing/javadocs/embedded
# Move the header file for our Downloads section
mv ../HEADER.html synchronizing
# Move the javadocs
mv build/docs/javadoc/* synchronizing/javadocs/embedded/
# Download the monetdb-jdbc-new jar
curl https://search.maven.org/remotecontent?filepath=monetdb/monetdb-jdbc-new/2.30/monetdb-jdbc-new-2.30.jar --output synchronizing/monetdb-jdbc-new-2.30.jar
# Move the monetdb-java-lite jar
mv build/libs/monetdb-java-lite-2.30.jar synchronizing

# Rsync the library files to the monet.org machine
rsync -aqz --ignore-times synchronizing/* ferreira@monetdb.org:/var/www/html/downloads/Java-Experimental/
