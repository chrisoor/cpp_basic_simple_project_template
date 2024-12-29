find_package(GTest REQUIRED)

add_executable(Test1 Test1.cpp)
target_link_libraries(Test1 GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(Test1)
