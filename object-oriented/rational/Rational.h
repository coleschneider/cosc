//Rational.h
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
                                // promising the compiler that we are not changing the attributes
    double toDouble() const; //Also a constant method. Return the real equivalent of the rational
                            //const is like a safety feature
   // void print() const; // print the Rational to standard output
};

ostream &operator <<(ostream &os, const Rational &rhs);

//operator means infix operator
//cout << x;os will be cout, and rhs will be x

//cout<< x << " + "<< y << endl; this whole thing returns an ostream
            //