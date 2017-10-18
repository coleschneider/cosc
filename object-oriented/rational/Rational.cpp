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
   //add math to simplify numerator and denominator
    _num = numerator;
    _denom = denominator;
    //put simplification code in here to reduce
}

int Rational::numerator() const {
    return _num;
}

int Rational::denominator() const {
    return _denom;
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
//return type of this ostream is an ostream
//when using os we are referring to cout
ostream &operator <<(ostream &os, const Rational &rhs) { 
    os << rhs.numerator()<<"/"<<rhs.denominator();
    return os;
}

Rational operator +(const Rational &lhs, const Rational &rhs) {
    int leftNum = lhs.numerator() * rhs.denominator();
    int denom = lhs.denominator() * rhs.denominator();
    int rightNum = rhs.numerator() * lhs.denominator();
    Rational answer(leftNum + rightNum, denom);
    return answer;
}

//instead of x - y
//if already defined negation operator then x + -y
//same w division