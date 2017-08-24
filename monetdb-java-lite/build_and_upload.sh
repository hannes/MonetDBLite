#!/usr/bin/env bash

export JAVA_HOME=/opt/jdk1.8.0_131

./gradlew -i build
./gradlew javadoc

chmod -R 777 build

# Load our credentials
MPASSWD=$(sed -n '2p' < gradle.properties | cut -d = -f 2)
# printf -v MPASSWD "%s\n" $MPASSWD

# Upload to Maven Central Repository
yes $MPASSWD | head -100 | /opt/maven/bin/mvn deploy
