#pragma once

#include <cstdint>

class ExampleClass1
{
public:
    virtual void PrintHello();

    virtual std::uint32_t Add(std::uint32_t a, std::uint32_t b);
};
