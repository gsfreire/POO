#include <iostream>
#include <fstream>
#include <string>

#include <iostream>
class Matrix {
 private:
 double** m; 
 int nRows; 
 int nCols;
 public:
 Matrix(); 
 Matrix(int rows, int cols, const double elem = 0.0);
 Matrix (std::ifstream &myFile);
 Matrix (const Matrix &that);
 
 ~Matrix();
 
 void set(int row, int col, const double value);

 int getRows() const;
 int getCols() const;
 double get(int row, int col) const;
 
 Matrix transpose();
 void print() const;
 void unit();
 void zeros();
 void ones();
 
 
};
