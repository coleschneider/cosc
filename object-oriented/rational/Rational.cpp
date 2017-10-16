//Rational.cpp

#include "Rational.h"

Rational::Rational() { //default constructor
    _num = 0;
    _denom = 1;
}

Rational::Rational(int numerator) {
    _num = numerator;
    _denom = 1;
}

Rational::Rational(int numerator, int denominator) {
    _num = numerator;
    _denom = denominator;
}

Rational Rational::reciprocal() const { //const in header file so they have to match
    Rational temp(_denom, _num);
    return temp;
}


double Rational::toDouble() const {
    return _num * 1.0 / _denom;
    //other way is static_cast<double> _num
    //or return (double) _num
}
    