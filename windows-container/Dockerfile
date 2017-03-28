FROM centos:7

RUN yum -y install epel-release

RUN yum update -y && \
    yum upgrade -y

RUN yum -y groupinstall "Development Tools"

RUN yum -y install mingw64-gcc

WORKDIR /workdir

CMD bash

