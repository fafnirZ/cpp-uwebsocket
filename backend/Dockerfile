FROM alpine:latest

WORKDIR /app

RUN apk update && \
    apk upgrade && \
    apk --update add \
      vim \
      g++ \
      bash \
      git \
      build-base \
      libstdc++ \
      cmake

WORKDIR /
# install vcpkg
RUN git clone https://github.com/Microsoft/vcpkg.git \
      ./vcpkg/bootstrap-vcpkg.sh

WORKDIR /app
