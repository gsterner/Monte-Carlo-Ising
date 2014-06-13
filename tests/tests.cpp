// tests.cpp
#include <stdio.h>
#include <iostream>
#include <vector>

#include "../utils.cpp"
#include "../grid.cpp"
#include <gtest/gtest.h>

using std::vector;
  
TEST(addTwoTest, oneAndTwo) {
    ASSERT_EQ(4, addTwo(2));
    ASSERT_EQ(3, addTwo(1));
}

TEST(GridCreation, CreateGridWithArrayTest) {
  double matrix_data[] = {1,2,3,4};
  Grid grid = Grid(matrix_data, 2, 2);
  ASSERT_EQ(1, grid.at(0));
}

TEST(GridCreation, CreateGridWithVectorTest) {
  vector<double> matrix_data{1,2,3,4};
  Grid grid = Grid(matrix_data, 2, 2);
  ASSERT_EQ(1, grid.at(0));
}

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
