//Rational.h

class Rational {
private:
    int _num;
    int _denom;
public:
    Rational(); //default constructor - which has no parameters. (constructs 0/1) default
    Rational(int numerator);
    Rational(int numerator, int denominator); //constructor
    Rational reciprocal();
};