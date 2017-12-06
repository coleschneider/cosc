#include "Rational.h"
Rational::Rational() {
    _num = 0;
    _denom = 1;
}
 Rational::Rational(int numerator){
     _num = numerator;
     _denom = 1;
 }
 Rational::Rational(int numerator, int denominator) {
    int size;
    if (numerator * denominator >= 0) {
        size = 1;
    } else {
        size = -1;
    }
    _num = numerator; //* size;
    _denom = denominator * size
 }

int Rational::numerator() const {
    return _num;
}

int Rational::denominator() const {
    return _denom;
}


Rational operator +(const Rational &lhs, const Rational &rhs) {
    int denom = rhs.denominator() * lhs.denominator();
    int left = lhs.numerator() * rhs.denominator() + rhs.numerator();
    int right = rhs.numerator() * lhs.denominator() + lhs.numerator();
    return Rational (left + right, denom);
}

ostream &operator <<(ostream &os, const Rational &rhs) {
      return os << rhs.numerator() << "/" << rhs.denominator() << endl;
   }

Rational operator -(const Rational &lhs, const Rational &rhs) {
    return lhs + (-rhs);
}

  Rational operator -(const Rational &rhs) {
      int rightNum = -1 * rhs.numerator();
      int leftDenom = rhs.denominator();
      
      return Rational(rightNum, leftDenom);
  }

  
