//Matrix.h

#define MATRIX_H

#include <iostream>
#include <cassert>
using namespace std;

const int SIZE = 8;

class Matrix{
private:
  double _body[SIZE][SIZE]; //creates a 2D matrix with 64 elements
  int _rows;
  int _columns;
public:
  Matrix(int rows = 1, int columns = 1);
  void populate(); //fill matrix with user input
  int rows() const;
  int columns() const;
  double at(int i, int j) const; //returns body[i][j]
  void set(int i, int j, double val);
  Matrix transpose() const;
  static Matrix identity(int n); // returns a nxn identity matrix
};

ostream &operator <<(ostream &os, const Matrix &rhs);

// Matrix operator +(const Matrix &lhs, const Matrix &rhs);
// Matrix operator -(const Matrix &lhs, const Matrix &rhs);
// Matrix operator -(const Matrix &rhs);
// Matrix operator *(const Matrix &lhs, const Matrix &rhs); //matrix multiplication
// Matrix operator *(double lhs, const Matrix &rhs); //scalar multiplication
// Matrix operator *(const Matrix &lhs, double rhs); //scalar multiplication

//syntax of static method: Matrix.identity(3);