
#include <vector>
using std::vector;

class Grid
{

 private:
  vector<double> data_;
  int number_rows_;
  int number_cols_;
  Grid() {};
  inline int vector_element_from_matrix_position(int row, int col);
  int vector_element_from_vector_position(int element);

 public:
  Grid(double *matrix_p, int rows, int cols);
  Grid(vector<double> in_data, int rows, int cols);

  double at(int row, int col);
  double at(int rows);
  int size() {return number_rows_ * number_cols_;};
  /* void setAt(int row, int col, double value); */

  void printMatrix();
  /* void copyMatrixToPointer(double *matrix_p); */
  /* void copyPointerToMatrix(double *matrix_p, int rows, int cols); */
};
