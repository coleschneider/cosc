//Matrix.cpp

#include "Matrix.h"

Matrix::Matrix(int rows, int columns){
  //creates and fill a matirx with all zeros
  _rows = rows;
  _columns = columns;
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < columns; j++){
      _body[i][j] = 0.0;
    }
  }
}

void Matrix::populate(){
  for (int i = 0; i < rows(); i++){
    for (int j = 0; j < columns(); j++){
      cin >> _body[i][j];
    }
  }
}

int Matrix::rows() const{
  return _rows;
}

int Matrix::columns() const{
  return _columns;
}

double Matrix::at(int i, int j) const{
  assert(i >= 0 && j >= 0 && i < _rows && j < _columns);
  return _body[i][j];
}

void Matrix::set(int i, int j, double val){
  // m.set(2, 3, 4.5);
  assert(i >= 0 && j >= 0 && i < _rows && j < _columns);
  _body[i][j] = val;
}

Matrix Matrix::transpose() const{
  Matrix t(columns(), rows());
  for (int i = 0; i < rows(); i++){
    for (int j = 0; j < columns(); j++){
      t.set(j, i, at(i, j));
    }
  }
  return t;
}

Matrix Matrix::identity(int n){
  assert(n >= 0);
  Matrix id(n, n);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if( i == j){
        id.set(i, j, 1.0);
      } else {
        id.set(i, j, 0.0);
      }
    }
  }
  return id;
}

ostream &operator <<(ostream &os, const Matrix &rhs){
  for (int i = 0; i < rhs.rows(); i++){
    for (int j = 0; j < rhs.columns();j++){
      os.width(12);
      os << rhs.at(i, j);
    }
    os << endl;
  }
  return os;
}
