#include "Matrix.h"
//create a matrix filled with all zeros
Matrix::Matrix(int nrow, int ncol) {
    rows = nrow;
    cols = ncol;
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < ncol; j++) {
            body[i][j] = 0.0;
        }
    }
}

void Matrix::populate() {
    for (int i = 0; i < rows(); i++) {
        for (int j = 0; j < cols(); j++) {
            cin >> body[i][j];
        }
    }
}
int Matrix::rows() const {
    return rows;
}

int Matrix::cols() const {
    return cols;
}

double Matrix::at(int i, int j) const {
    assert(i >= 0 && j >= 00 && i < rows && j < cols);
    return body[i][j];
}

void Matrix::set(int i, int j, double val) {
    assert(i >= 0 && j >= 00 && i < rows && j < cols);
    body[i][j] = val;
}

Matrix Matrix::transpose() const {
    Matrix t(cols(), rows());
    for (int i = 0; i < rows(); i++) {
        for (int j = 0; j < cols(); j++) {
            t.set(j, i, at(i, j));
        }
    }
    return t;
}

Matrix Matrix::identity(int n) {
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
} // return an n x n identity matrix

ostream &operator <<(ostream &os, const Matrix &rhs){
    for (int i = 0; i < rhs.rows(); i++){
      for (int j = 0; j < rhs.cols();j++){
        os.width(12);
        os << rhs.at(i, j);
      }
      os << endl;
    }
    return os;
  }