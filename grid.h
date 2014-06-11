
#include <vector>
using std::vector;

class Grid
{

 private:
  vector<double> data;
  int number_rows_;
  int number_cols_;
  Grid() {};

 public:
  Grid(double *matrix_p, int rows, int cols);

  //  double at(int row, int col);
  double at(int rows);
  /* void setAt(int row, int col, double value); */

  void printMatrix();
  /* void copyMatrixToPointer(double *matrix_p); */
  /* void copyPointerToMatrix(double *matrix_p, int rows, int cols); */
};
