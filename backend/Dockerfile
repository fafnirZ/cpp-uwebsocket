FROM ubuntu:latest

WORKDIR /app

RUN apt update && \
    apt upgrade && \
    apt install -y\
      g++ \
      bash \
      git \
      cmake=3.22.2 \
      pkg-config \
      curl \
      zip \
      unzip \
      tar

RUN git clone https://github.com/Microsoft/vcpkg.git /opt/vcpkg
WORKDIR /opt/vcpkg
RUN ./bootstrap-vcpkg.sh && ./vcpkg integrate install

## installing dependencies
RUN ./vcpkg install uwebsockets

WORKDIR /app
