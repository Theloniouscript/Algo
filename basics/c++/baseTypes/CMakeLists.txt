cmake_minimum_required(VERSION 3.5)

project(HelloWorld)

set(HEADERS
        version.h)

set(SOURCES
        hello_world.cpp
        version.cpp
)

add_executable(hello_world ${HEADERS} ${SOURCES})

set_target_properties(hello_world PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
)