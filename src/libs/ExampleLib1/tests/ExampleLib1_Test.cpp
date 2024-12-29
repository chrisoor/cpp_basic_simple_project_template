#include "gtest/gtest.h"
#include "ExampleLib1/ExampleLib1.hpp"

TEST(ExampleLib1_Tests, TestAddMethod) {
    ExampleClass1 classObj;
    EXPECT_EQ(classObj.Add(1, 2), 3);
}

TEST(ExampleLib1_Tests, TestAddMethodNotEqual) {
    ExampleClass1 classObj;
    EXPECT_NE(classObj.Add(1, 3), 5);
}
