//main.cpp (project Rational)

#include "Rational.h"
#include <iostream>
using namespace std;


int main() {
    Rational x(3, 4); //x has the value 3/4

    Rational y(-1, 2);
    cout<<"x = "<<x<<endl;
    cout<<"y= "<<y<<endl;
    cout<<"x + y = "<< x + y <<endl;
    cout<<"x - y = "<< x - y <<endl;
    cout<<"x * y = "<< x * y <<endl;
    cout<<"x / y = "<< x / y <<endl;
    cout<<"x == y = "<< (x == y)<<endl;
    cout<<"x > y = "<< (x > y)<<endl;
    cout<< "The reciprocal of x is "<<x.reciprocal()<<endl;
    cout<< "The reciprocal of y is "<<y.reciprocal()<<endl;
    cout<<x<< " = "<<y.toDouble()<<endl;
    Rational a(9, 12);
    Rational b(36, 30);
    Rational c(-20, -30);
    Rational d(20, -30);
    Rational e(-20, 30);
    cout << "9/12 == "<<a<<endl;
    cout << "36/30 == "<<b<<endl;
    cout << "-20/-30 == "<<c<<endl;
    cout << "20/-30 == "<<d<<endl;
    cout << "-20/30 == "<<e<<endl;

    return 0;
}