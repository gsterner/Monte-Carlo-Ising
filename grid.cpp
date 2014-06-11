#include <stdio.h>
#include <iostream>
#include <vector>
#include "grid.h"
using std::vector;

//-------------------------
Grid::Grid(double *matrix_p, int rows, int cols)
{
  number_rows_ = rows;
  number_cols_ = cols;

  //data = vector<double>(rows * cols);
  int total_size = rows * cols;

  for (int i = 0; i < total_size; i++) {
    data.push_back(matrix_p[i]);
  }

  std::cout << data[0] << std::endl;
}

double Grid::at(int index) {
  return data.at(index);
}
