FROM centos:7

RUN yum update -y && \
    yum upgrade -y

RUN yum -y install epel-release

RUN yum -y install autoconf automake make bison byacc gcc libtool gettext gettext-devel which wget

RUN yum -y install mingw64-gcc

RUN cd /opt/ && \
    BASE_URL_8=http://download.oracle.com/otn-pub/java/jdk/8u131-b11/d54c1d3a095b4ff2b6607d096fa80163/jdk-8u131 && \
    JDK_VERSION=`echo $BASE_URL_8 | rev | cut -d "/" -f1 | rev` && \
    DOWNLOAD_NUMBER=`echo $JDK_VERSION | cut -c 7-` && \
    PLATFORM="-linux-x64.tar.gz" && \
    wget -c -O "${JDK_VERSION}${PLATFORM}" --no-check-certificate --no-cookies --header "Cookie: oraclelicense=accept-securebackup-cookie" "${BASE_URL_8}${PLATFORM}" && \
    tar xzf "${JDK_VERSION}${PLATFORM}" && \
    cd "/opt/jdk1.8.0_${DOWNLOAD_NUMBER}/" && \
    alternatives --install /usr/bin/java java "/opt/jdk1.8.0_${DOWNLOAD_NUMBER}/bin/java" 2 && \
    alternatives --install /usr/bin/jar jar "/opt/jdk1.8.0_${DOWNLOAD_NUMBER}/bin/jar" 2 && \
    alternatives --install /usr/bin/javac javac "/opt/jdk1.8.0_${DOWNLOAD_NUMBER}/bin/javac" 2 && \
    alternatives --set jar "/opt/jdk1.8.0_${DOWNLOAD_NUMBER}/bin/jar" && \
    alternatives --set javac "/opt/jdk1.8.0_${DOWNLOAD_NUMBER}/bin/javac"

RUN cd /opt && \
    MVN_VERSION="3.5.0" && \
    wget "http://apache.40b.nl/maven/maven-3/${MVN_VERSION}/binaries/apache-maven-${MVN_VERSION}-bin.tar.gz" && \
    tar xzf "apache-maven-${MVN_VERSION}-bin.tar.gz" && \
    ln -s "apache-maven-${MVN_VERSION}" maven && \
    touch /etc/profile.d/maven.sh && \
    echo "export M2_HOME=/opt/maven" >> /etc/profile.d/maven.sh && \
    echo "export PATH=${M2_HOME}/bin:${PATH}" >> /etc/profile.d/maven.sh

WORKDIR /workdir

CMD bash
