#include <gtest/gtest.h>
#include <string>

#include "utils.h"
#include "WCCommand.h"

TEST(IndependentMethod, VerifyEmptyInput)
{
    std::vector<std::string> emptyInput;
    ASSERT_FALSE(WCCommand::IsValid(emptyInput));
}