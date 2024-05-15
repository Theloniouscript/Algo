cmake_minimum_required(VERSION 3.5)

project(Modules)

set(SOURCES
        calculations.cpp
        logging.cpp
        main.cpp)

set(HEADERS
        calculations.h
        logging.h)

add_executable(modules ${SOURCES} ${HEADERS})
set_target_properties(modules PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        )     