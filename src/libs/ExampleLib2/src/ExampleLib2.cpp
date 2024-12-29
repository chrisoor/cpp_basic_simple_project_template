#include <iostream>
#include "ExampleLib1/ExampleLib1.hpp"
#include "ExampleLib2/ExampleLib2.hpp"

ExampleClass2::ExampleClass2(ExampleClass1* exampleClass1) : ptr_ExampleClass1(exampleClass1)
{
}

void ExampleClass2::PrintHello()
{
    std::cout<<"Hello\n";
}

std::uint32_t ExampleClass2::Multiply(std::uint32_t a, std::uint32_t b)
{
    std::uint32_t result = 0;
    for(std::uint32_t i = 0; i < b; i++)
    {
        result = ptr_ExampleClass1->Add(a, result);
    }
    return result;
}
