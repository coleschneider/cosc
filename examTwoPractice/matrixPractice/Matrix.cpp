#include <cassert>
#include "Matrix.h"

Matrix::Matrix(int nrow, int ncol) {
    _rows = nrow;
    _cols = ncol;
}

void Matrix::populate() {
    for (int i = 0; i < rows(); i++) {
        for (int j = 0; j < cols(); j++) {
            cin >> body[i][j];
        }
    }
}

int Matrix::rows() const {
    return _rows;
}

int Matrix::cols() const {
    return _cols;
}

double Matrix::at(int i, int j) const {
    return body[i][j];
}

void Matrix::set(int i, int j, double val) {
    body[i][j] = val;
}

Matrix Matrix::transpose() const {
    Matrix temp(cols(), rows());
    for (int i = 0; i < temp.rows(); i++) {
        for (int j = 0; j < temp.cols(); j++) {
            temp.set(i, j, at(j, i));
        }
    }
    return temp;
}

static Matrix identity(int n) {
    assert(n > 0);
    Matrix a(n, n);
    for (int i = 0; i < n; i++) {
        a.set(i, i, 1.0);
    }
    return a;
}

    
  Matrix operator +(const Matrix &lhs, const Matrix &rhs) {
    assert(lhs.rows() == rhs.rows() && lhs.cols() == rhs.cols());
    Matrix temp(lhs.rows(), lhs.cols());
    for (int i = 0; i < temp.rows(); i++) {
        for (int j = 0; j < temp.cols(); j++) {
            temp.set(i, j, lhs.at(i, j) + rhs.at(i, j));
        }
    }
    return temp;
  }

  Matrix operator -(const Matrix &lhs, const Matrix &rhs) {

  }
/*
  Matrix operator -(const Matrix &rhs) {

  }

  Matrix operator *(const Matrix &lhs, const Matrix &rhs) {

  }

  Matrix operator *(double lhs, const Matrix &rhs) {

  }

  Matrix operator *(const Matrix &lhs, double rhs) {

  }
*/

  ostream &operator <<(ostream &os, const Matrix &rhs) {
        for (int i = 0; i < rhs.rows(); i++) {
        for (int j = 0; j < rhs.cols(); j++) {
            os.width(8);
            os << rhs.at(i, j);
        }
        os << endl;
    }
    return os;
  }
