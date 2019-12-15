#include <gtest/gtest.h>

#include "utils.h"

TEST(IndependentMethod, VerifyGreeting)
{
    ASSERT_EQ("world", utils::GetName());
}