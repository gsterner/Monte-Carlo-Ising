#include <iostream>
#include <stdio.h>
#include <vector>
#include "grid.h"

int main(int argc, char *argv[])
{
  std::cout << "Hello World!" << std::endl;
  for(int i = 0; i < argc; i++) {
    std::cout << argv[i] << std::endl;
  }

  double matrix_data[] = {1,2,3,4,5,6,7,8,9,10,11,12};
  Grid grid = Grid(matrix_data, 4, 3);

  grid.printMatrix();


  return 0;
}
