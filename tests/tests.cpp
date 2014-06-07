// tests.cpp
#include "../utils.cpp"
#include <gtest/gtest.h>
  
TEST(addTwoTest, oneAndTwo) {
    ASSERT_EQ(4, addTwo(2));
    ASSERT_EQ(3, addTwo(1));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
