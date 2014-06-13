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
    data_.push_back(matrix_p[i]);
  }

  std::cout << data_[0] << std::endl;
}

Grid::Grid(vector<double> in_data, int rows, int cols) {
  number_rows_ = rows;
  number_cols_ = cols;

  data_ = in_data;
  
}


double Grid::at(int index) {
  return data_.at(index);
}
