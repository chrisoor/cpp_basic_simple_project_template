#include "example_lib/example_lib.hpp"
#include <iostream>

void ExampleClass::PrintHello()
{
    std::cout<<"Hello\n";
}

std::uint32_t ExampleClass::Add(std::uint32_t a, std::uint32_t b)
{
    return a+b;
}
