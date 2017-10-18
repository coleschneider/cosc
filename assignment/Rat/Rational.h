#include <iostream>
using namespace std;

class Rational {
private:
    int _num;
    int _denom;
public:
    Rational();
    Rational(int numerator);
    Rational(int numerator, int denominator);
    int numerator() const;
    int denominator() const;
    double toDouble() const;
    Rational reciprocal() const;
};

ostream &operator <<(ostream &os, const Rational &rhs);

Rational operator +(const Rational &lhs, const Rational &rhs);
Rational operator -(const Rational &lhs, const Rational &rhs);
Rational operator *(const Rational &lhs, const Rational &rhs);
Rational operator /(const Rational &lhs, const Rational &rhs);
bool operator ==(const Rational &lhs, const Rational &rhs);
bool operator >(const Rational &lhs, const Rational &rhs);

Rational operator -(const Rational &rhs);


int gcd(int m, int n);
int abs(int x);
