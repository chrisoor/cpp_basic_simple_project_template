#include "gmock/gmock.h"
#include "ExampleLib1/ExampleLib1.hpp"

class ExampleClass1Mock : public ExampleClass1
{
public:
    MOCK_METHOD(std::uint32_t, Add, (std::uint32_t a, std::uint32_t b));
};
