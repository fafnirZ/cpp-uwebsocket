cmake_minimum_required(VERSION 3.13)  # CMake version check
project(prototype)   
# Create project "simple_example"
set(CMAKE_CXX_STANDARD 17)  # Enable c++17 standard

add_executable(server server.cpp)
find_path(UWEBSOCKETS_INCLUDE_DIRS "uwebsockets")
target_include_directories(server PRIVATE ${UWEBSOCKETS_INCLUDE_DIRS})

