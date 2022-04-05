#include <gtest/gtest.h>
#include "faulty_library.h"

TEST(FaultyLibrary, BasicAssertions) {
    std::string a = "a";
    std::string b = "b";

    swap(a,b);

    ASSERT_EQ(a, "b");
    ASSERT_EQ(b, "a");
}
