#include <iostream>
#include "example_lib/example_lib.hpp"

#include <zlib.h>

int main()
{
    std::cout<<"Hello, World!\n";

    ExampleClass exampleClass{};
    exampleClass.PrintHello();
    std::cout<<exampleClass.Add(1, 2)<<"\n";

    printf("ZLIB VERSION: %s\n", zlibVersion());

    return 0;
}