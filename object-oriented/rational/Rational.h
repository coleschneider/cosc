//Rational.h

#include <iostream>
using namespace std;
//arrays are automatically call by reference by objects are not.
//if methods arent going to change the attributes of the class its a constant method
class Rational {
private:
    int _num; //we are changing so it is not a constant method
    int _denom;
public:
    Rational(); //default constructor - which has no parameters. (constructs 0/1) default
    Rational(int numerator);
    Rational(int numerator, int denominator); //constructor
    Rational reciprocal() const; // this is a constant method
    int numerator() const;//accessor method
    int denominator() const;//accessor method
    // promising the compiler that we are not changing the attributes
    double toDouble() const; //Also a constant method. Return the real equivalent of the rational
                            //const is like a safety feature
   // void print() const; // print the Rational to standard output
};

//cout is an object. we pass them through the outstream

ostream &operator <<(ostream &os, const Rational &rhs);

Rational operator +(const Rational &lhs, const Rational &rhs);
//subtraction
Rational operator -(const Rational &lhs, const Rational &rhs);
Rational operator *(const Rational &lhs, const Rational &rhs);
//negation
Rational operator -(const Rational &rhs);
Rational operator /(const Rational &lhs, const Rational &rhs);

bool operator ==(const Rational &lhs, const Rational &rhs);
bool operator >(const Rational &lhs, const Rational &rhs);



//operator means infix operator
//cout << x;os will be cout, and rhs will be x

//cout<< x << " + "<< y << endl; this whole thing returns an ostream
            //