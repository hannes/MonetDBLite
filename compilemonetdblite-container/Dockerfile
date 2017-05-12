FROM centos:7

RUN yum update -y && \
    yum upgrade -y

RUN yum -y install epel-release

RUN yum -y install autoconf automake make bison byacc gcc libtool gettext which wget

RUN yum -y install mingw64-gcc

RUN cd /opt/ && \
    wget --no-cookies --no-check-certificate --header "Cookie: gpw_e24=http%3A%2F%2Fwww.oracle.com%2F; oraclelicense=accept-securebackup-cookie" "http://download.oracle.com/otn-pub/java/jdk/8u121-b13/e9e7ea248e2c4826b92b3f075a80e441/jdk-8u121-linux-x64.tar.gz" && \
    tar xzf jdk-8u121-linux-x64.tar.gz && \
    cd /opt/jdk1.8.0_121/ && \
    alternatives --install /usr/bin/java java /opt/jdk1.8.0_121/bin/java 2 && \
    alternatives --install /usr/bin/jar jar /opt/jdk1.8.0_121/bin/jar 2 && \
    alternatives --install /usr/bin/javac javac /opt/jdk1.8.0_121/bin/javac 2 && \
    alternatives --set jar /opt/jdk1.8.0_121/bin/jar && \
    alternatives --set javac /opt/jdk1.8.0_121/bin/javac

WORKDIR /workdir

CMD bash
