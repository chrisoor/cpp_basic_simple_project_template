#include <iostream>
#include "ExampleLib1/ExampleLib1.hpp"

#include <zlib.h>

int main()
{
    std::cout<<"Hello, World!\n";

    ExampleClass1 ExampleClass1{};
    ExampleClass1.PrintHello();
    std::cout<<ExampleClass1.Add(1, 2)<<"\n";

    printf("ZLIB VERSION: %s\n", zlibVersion());

    return 0;
}