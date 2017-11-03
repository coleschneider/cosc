#include "Matrix.h"
#include <cassert>
//only do int rows=1 for class header
Matrix::Matrix(int rows, int cols) {
    //creats 0 rows x cols matrix filled with zeroes
    _rows = rows;
    _cols = cols;
    for (int i = 0; i <rows; i++) {
        for (int j = 0; j < cols; j++) {
            _body[i][j] = 0.0;
        }
    }
}

int Matrix::rows() const {
    return _rows;
}

int Matrix::cols() const {
    return _cols;
}

//returns element at rows cols
double Matrix::at(int i, int j) const {
    assert(i >= 0 && j >= 0 && i < _rows && j < _cols);
    return _body[i][j];
}

void Matrix::set(int i, int j, double val) {
    // m.set(2, 3, 4.5);
    assert(i >= 0 && j >= 0 && i < _rows && j < _cols);
    _body[i][j] = val;
}

void Matrix::populate() {
    for (int i = 0; i < rows(); i++) {
        for (int j = 0; j < cols(); j++) {
            cin >> _body[i][j];
        }
    }
}

Matrix Matrix::transpose() const {
    Matrix t(cols(), rows());
    for (int i = 0; i < rows(); i++) {
        for (int j = 0; j < cols(); j++) {
            t.set(j, i, at(i, j)); // at(i, j) does same as _body[i][j]
        }
    }
    return t;
}

Matrix Matrix::identity(int n) {
    Matrix id(n, n);
    assert(n >= 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <n; j++) {
            if (i == j) {
                id.set(i, j, 1.0);
            } else {
                id.set(i, j, 0.0);
            }
        }
    }
    return id;
}

ostream &operator <<(ostream &os, const Matrix &rhs) {
    for (int i = 0; i <rhs.rows(); i++) {
        for (int j = 0; j < rhs.cols(); i++) {
            os.width(12);
            os << rhs.at(i, j);
        }
        os << endl;
    }
    return os;
}