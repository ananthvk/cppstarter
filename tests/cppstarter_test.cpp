#include "cppstarter.hpp"
#include <gtest/gtest.h>

TEST(TestCppstarter, Addition)
{
    auto result = cppstarter::add(3, 5);
    ASSERT_EQ(result, 8);
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}