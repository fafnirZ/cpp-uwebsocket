#include <iostream>
#include <uwebsockets/App.h>

using namespace uWs;

int main(int argc, char const *argv[])
{
  uWs::App().get("/hello", [](auto *res, auto *req) {
     res->end("hello world");
  }).listen(9001, [](auto *listenSocket) {
    std::cout << "Listening for connections..." << std::endl;
  }).run();
}
