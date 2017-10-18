#include <Rational.h>

Rational::Rational() {
    _num = 0;
    _denom = 0;
}

Rational::Rational(int numerator) {
    _num = numerator;
    _denom = 1;
}

Rational::Rational(int numerator, int denominator) {
    _num = numerator;
    _denom = denominator;
}

int Rational::numerator() const {
    return _num;
}

int Rational::denominator() const {
    return _denom;
}

double Rational::toDouble() const {
    return _num * 1.0 / _denom;   
}

Rational Rational::reciprocal() const {
    Rational temp(_denom, _num);
    return temp;
}

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

}

Rational operator *(const Rational &lhs, const Rational &rhs) {

}

Rational operator /(const Rational &lhs, const Rational &rhs) {

}

Rational operator -(const Rational &rhs) {
    int num = rhs.numerator() / rhs.denominator();
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

/*
int gcd(int m, int n);
int abs(int x);
*/