#include <iostream>
#include "Adder.h"

void print_hello()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << add(1.0f, 2.0f) << std::endl;
    std::cout << divide(2.0f, 2.0f) << std::endl;
}

int main(int argc, const char **argv)
{
    print_hello();
    return 0;
}