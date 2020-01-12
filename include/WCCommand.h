#pragma once

#include <vector>

struct WCCommand
{
    WCCommand(const std::vector<std::string>& arguments);

    /**
     * Verifies if provided arguments are suitable for the wc command
     */
    static bool IsValid(const std::vector<std::string>& arguments);

    /**
     * Returns a number of lines in each input file
     */
    std::vector<size_t> GetLineAmount();

    /**
     *  Returns a number of words in each input file
     */
    std::vector<size_t> GetWordAmount();

    /**
     *  Returns a number of characters in each input file
     */
    std::vector<size_t> GetCharAmount();
};