cmake_minimum_required(VERSION 3.20)

set(LIBRARY_NAME ExampleLib2)
add_library(${LIBRARY_NAME} STATIC)

target_include_directories(${LIBRARY_NAME}
    PUBLIC
        include/
)

target_sources(${LIBRARY_NAME}
    PRIVATE
        src/ExampleLib2.cpp
        include/ExampleLib2/ExampleLib2.hpp
)

target_link_libraries(${LIBRARY_NAME}
    PRIVATE
        ExampleLib1)

add_subdirectory(tests)
