#include <iostream>

#include "../include/WCCommand.h"

WCCommand::WCCommand(const std::vector<std::string>& arguments)
{
    for (const std::string& argument : arguments)
    {
        std::cout << argument << ' ';
    }
    std::cout << std::endl;
}

bool WCCommand::IsValid(const std::vector<std::string>& arguments)
{
    if (arguments.empty())
    {
        return false;
    }
    else
    {
        // TODO: implement logic which verifies valid input
        return false;
    }
}

std::vector<size_t> WCCommand::GetLineAmount()
{
    return {};
}

std::vector<size_t> WCCommand::GetWordAmount()
{
    return {};
}

std::vector<size_t> WCCommand::GetCharAmount()
{
    return {};
}