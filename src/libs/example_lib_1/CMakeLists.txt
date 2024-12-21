cmake_minimum_required(VERSION 3.20)

set(LIBRARY_NAME example_library)
add_library(${LIBRARY_NAME} STATIC)

target_include_directories(${LIBRARY_NAME}
    PUBLIC
        include/
)

target_sources(${LIBRARY_NAME}
    PUBLIC
        src/example_lib.cpp
        include/example_lib/example_lib.hpp
)
