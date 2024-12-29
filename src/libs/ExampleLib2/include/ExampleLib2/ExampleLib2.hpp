#pragma once

#include <cstdint>

class ExampleClass1;

class ExampleClass2
{
public:
    ExampleClass2(ExampleClass1* exampleClass1);

    virtual void PrintHello();

    virtual std::uint32_t Multiply(std::uint32_t a, std::uint32_t b);

private:
    ExampleClass1* ptr_ExampleClass1;
};
