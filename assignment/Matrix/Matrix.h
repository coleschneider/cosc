
#ifndef MATRIX_H
#define MATRIX_H

#include<cassert>
#include <iostream>
using namespace std;

const int SIZE = 8;

class Matrix {
private:
    double _body[SIZE][SIZE]; //creates a 2-d array with 64 elements row x column
    int _rows;
    int _cols;

public:
    //Matrix m(3, 4) makes a new matrix 3x4 and matrix n; makes 1x1. Matrix p(5)
    Matrix(int rows=1, int cols=1); //serves as the default constructor
    void populate(); //fill matrix with user input
    //accessor methods
    int rows() const;
    int cols() const;
    double at(int i, int j) const; //returns _body[i][j]
    void set(int i, int j, double val);
    Matrix transpose() const; //flips rows cols 2x3 => 3x2  
    //static - this means do it 'once'. not like a method where MAtrix m would inherit all the methods defind in clas
    static Matrix identity(int n); // return an n x n identity Matrix

};
/*
Matrix operator +(const Matrix &lhs, const Matrix &rhs);
//binary subtraction
Matrix operator -(const Matrix &lhs, const Matrix &rhs);
//negation unary subtraction
Matrix operator -(const Matrix &rhs);
//Matrix multipication
Matrix operator *(const Matrix &lhs, const Matrix &rhs);
//Scalar multipication
Matrix operator *(double lhs, const Matrix &rhs);
Matrix operator *(const Matrix &lhs, double rhs); //Scalar multipication
//  2x3 * 3x2 == size of 2x2
*/
ostream &operator <<(ostream &os, const Matrix &rhs);

//m + n
//m - n
//-m
//m * n
// 


//syntax of static method: Matrix.identity(3);




#endif