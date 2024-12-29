cmake_minimum_required(VERSION 3.20)

set(LIBRARY_NAME ExampleLib1)
add_library(${LIBRARY_NAME} STATIC)

target_include_directories(${LIBRARY_NAME}
    PUBLIC
        include/
)

target_sources(${LIBRARY_NAME}
    PRIVATE
        src/ExampleLib1.cpp
        include/ExampleLib1/ExampleLib1.hpp
        include/ExampleLib1/mocks/ExampleLib1_Mock.hpp
)

find_package(GTest REQUIRED)
target_link_libraries(${LIBRARY_NAME} GTest::gmock)

add_subdirectory(tests)
