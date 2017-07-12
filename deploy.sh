#!/usr/bin/env bash

# Upload to the Maven Central Repository -- but due to bugs in Gradle we are doing it manually
# cd monetdb-java-lite
# ./gradlew uploadArchives

# Download monetdb-jdbc-new jar
curl https://search.maven.org/remotecontent?filepath=monetdb/monetdb-jdbc-new/2.30/monetdb-jdbc-new-2.30.jar --output build/libs/monetdb-jdbc-new-2.30.jar

# Rsync the library files to the monet.org machine
rsync -aqz --ignore-times build/libs/*.jar ferreira@monetdb.org:/var/www/html/downloads/Java-Experimental/
