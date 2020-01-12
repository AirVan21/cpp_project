#pragma once

#include <vector>

struct WCCommand
{
    WCCommand(const std::vector<std::string>& arguments);

    static bool IsValid(const std::vector<std::string>& arguments);
};