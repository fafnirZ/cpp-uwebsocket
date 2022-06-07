#include <iostream>
#include <uwebsockets/App.h>

int main(int argc, char const *argv[])
{
  uWs::App().get("/hello", [](auto *res, auto *req) {
    res->end("hello world");
  })
}