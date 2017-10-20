//Rational.cpp

#include "Rational.h"

using namespace std;

Rational::Rational() { //default constructor
    _num = 0;
    _denom = 1;
}

Rational::Rational(int numerator) {
    _num = numerator;
    _denom = 1;
}


int abs(int x) {
    if (x >= 0) {
        return x;
    } else {
        return -x;
    }
}

int gcd(int m, int n) {
    m = abs(m);
    n = abs(n);
    if (n == 0) {
        return m;
    } else {
        return gcd(n, m % n);
    }
}

Rational::Rational(int numerator, int denominator) {
    int sign;
    if(numerator * denominator >= 0) {
        sign = 1;
    } else {
        sign = -1;
    }

    numerator = abs(numerator);
    denominator = abs(denominator);

    int divisor = gcd(numerator, denominator);
   //add math to simplify numerator and denominator
    _num = numerator / divisor * sign;
    _denom = denominator / divisor;
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

Rational operator -(const Rational &lhs, const Rational &rhs) {
    return lhs + (-rhs);
}

//negation

Rational operator -(const Rational &rhs) {
    int numNum = rhs.numerator() * -1;
    int denomNum = rhs.denominator();
    return Rational(numNum, denomNum);
}

Rational operator *(const Rational &lhs, const Rational &rhs) {
    int num = lhs.numerator() * rhs.numerator();
    int denom = lhs.denominator() * rhs.denominator();
    return Rational(num, denom);
}

Rational operator /(const Rational &lhs, const Rational &rhs) {
    return lhs * rhs.reciprocal();
}
bool operator ==(const Rational &lhs, const Rational &rhs) {
    return lhs.numerator() == rhs.numerator() && lhs.denominator() == rhs.denominator();
}

bool operator >(const Rational &lhs, const Rational &rhs) {
    return (lhs.toDouble() - rhs.toDouble() > 0);
}

//instead of x - y
//if already defined negation operator then x + -y
//same w division