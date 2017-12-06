  // Matrix.h

  #include <iostream>
  #include <assert.h>
  using namespace std;

  #define SIZE 8

  class Matrix
  {
  private:
      double body[SIZE][SIZE];
      int _rows;
      int _cols;
  public:
      Matrix(int nrow=1, int ncol=1);
      void populate();
      int rows() const;
      int cols() const;
      double at(int i, int j) const;
      void set(int i, int j, double val);
      Matrix transpose() const;
      static Matrix identity(int n); // return an n x n identity matrix
  };

  Matrix operator +(const Matrix &lhs, const Matrix &rhs);
  Matrix operator -(const Matrix &lhs, const Matrix &rhs);
  Matrix operator -(const Matrix &rhs);
  Matrix operator *(const Matrix &lhs, const Matrix &rhs);
  Matrix operator *(double lhs, const Matrix &rhs);
  Matrix operator *(const Matrix &lhs, double rhs);

  ostream &operator <<(ostream &os, const Matrix &rhs);