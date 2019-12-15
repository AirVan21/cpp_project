#include <iostream>

#include "../include/utils.h"

int main(int argc, char** argv)
{
    std::cout << "Hello, " << utils::GetName() << "!" << std::endl;
    return 0;
}