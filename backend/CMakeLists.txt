cmake_minimum_required(VERSION 3.13)  # CMake version check
project(prototype)   
# Create project "simple_example"
set(CMAKE_CXX_STANDARD 17)  # Enable c++17 standard

add_executable(server server.cpp)
find_path(UWEBSOCKETS_INCLUDE_DIRS "uwebsockets")
target_include_directories(server PRIVATE ${UWEBSOCKETS_INCLUDE_DIRS})







# set ( CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ~/cpp-netlib-build )
# find_package ( cppnetlib 0.13.0 REQUIRED )
# include_directories ( ${CPPNETLIB_INCLUDE_DIRS} )
# find_path(UWEBSOCKETS_INCLUDE_DIRS 
#   NAMES "uwebsockets/App.h"
#   PATHS CMAKE_CURRENT_LIST_DIR
#   PATH_SUFFIXES "uwebsockets"
#   REQUIRED
#   NO_DEFAULT_PATH
# )
# find_path(UWEBSOCKETS_INCLUDE_DIRS "uwebsockets")
# hardcoding the path
# set ( CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ~/cpp-netlib-build )
# find_package(cppnetlib 0.13.0 REQUIRED)
# target_link_libraries(server PRIVATE cppnetlib-uri cppnetlib-server-parsers cppnetlib-client-connections)
# message("found => ${UWEBSOCKETS_INCLUDE_DIRS}")
# target_include_directories(server PRIVATE ${UWEBSOCKETS_INCLUDE_DIRS})


