#include "../main.hpp"

#include <gtest/gtest.h>

TEST(maintests, Test1){
    int val1 = 1;
    int val2 = 2;
    int local_sum = val1 + val2;

    EXPECT_EQ(local_sum , sum(val1, val2));
}


TEST(maintests, Test2){
    int val1 = 1;
    int val2 = 2;
    int local_sum = val2 - val2;

    EXPECT_EQ(local_sum , sum(val1, val2));
}