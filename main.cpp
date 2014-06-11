#include <iostream>
#include "grid.h"

int main(int argc, char *argv[])
{
  std::cout << "Hello World!" << std::endl;
  for(int i = 0; i < argc; i++) {
    std::cout << argv[i] << std::endl;
  }

  double matrix_data[] = {1,2,3,4};
  Grid grid = Grid(matrix_data, 2, 2);

  return 0;
}
