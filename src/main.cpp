#include <iostream>
#include "example_lib/example_lib.hpp"

int main()
{
    std::cout<<"Hello, World!\n";

    ExampleClass exampleClass{};
    exampleClass.PrintHello();
    std::cout<<exampleClass.Add(1, 2)<<"\n";

    return 0;
}