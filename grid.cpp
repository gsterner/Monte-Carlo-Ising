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
    int index = vector_element_from_vector_position(i);
    data_.push_back(matrix_p[index]);
  }
}

Grid::Grid(vector<double> in_data, int rows, int cols) {
  number_rows_ = rows;
  number_cols_ = cols;

  data_ = in_data;
  
}

inline int Grid::vector_element_from_matrix_position(int row, int col) {
  if(row % 2 == 0) {
    return (row * number_cols_) + col;
  } else {
    return (row + 1) * number_cols_ - (col + 1);
  }
}

int Grid::vector_element_from_vector_position(int position) {
  int row = position / number_cols_;
  int col = position % number_cols_;
  return vector_element_from_matrix_position(row, col);
}

double Grid::at(int index) {
  return data_.at(index);
}

double Grid::at(int row, int col) {
  int vector_index = vector_element_from_matrix_position(row, col);
  return data_.at(vector_index);
}

void Grid::printMatrix() {
  for(int i = 0; i < number_rows_; i++) {
    for(int j = 0; j < number_cols_; j++) {
      std::cout << at(i,j) << " ";
    }
    std::cout << std::endl;
  }
}

