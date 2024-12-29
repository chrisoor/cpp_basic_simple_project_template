#include "ExampleLib1/ExampleLib1.hpp"
#include <iostream>

void ExampleClass1::PrintHello()
{
    std::cout<<"Hello\n";
}

std::uint32_t ExampleClass1::Add(std::uint32_t a, std::uint32_t b)
{
    return a+b;
}
