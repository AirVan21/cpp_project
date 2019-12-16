#include <iostream>

#include "../include/WCCommand.h"

WCCommand::WCCommand(std::vector<std::string> arguments)
{
    for (const std::string& argument : arguments)
    {
        std::cout << argument << std::endl;
    }
}