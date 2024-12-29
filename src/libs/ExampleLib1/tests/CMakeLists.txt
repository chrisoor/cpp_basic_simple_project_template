cmake_minimum_required(VERSION 3.20)
find_package(GTest REQUIRED)

set(TESTS_NAME ExampleLib1_Tests)
add_executable(${TESTS_NAME} ExampleLib1_Test.cpp)

target_link_libraries(${TESTS_NAME} GTest::gtest GTest::gtest_main)
target_link_libraries(${TESTS_NAME} ExampleLib1)


include(GoogleTest)
gtest_discover_tests(${TESTS_NAME})
