#include <iostream>

#include "../include/WCCommand.h"

int main(int argc, char** argv)
{
    std::vector<std::string> arguments;
    for (int i = 1; i < argc; ++i)
    {
        arguments.emplace_back(argv[i]);
    }
    WCCommand wc(std::move(arguments));
    return 0;
}