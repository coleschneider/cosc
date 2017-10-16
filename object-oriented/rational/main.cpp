//main.cpp (project Rational)

#include "Rational.h"
#include <iostream>
using namespace std;


int main() {
    Rational x(3, 4); //x has the value 3/4

    Rational y(1, 2);
    cout<<"x = "<<x<<endl;
    cout<<"y= "<<y<<endl;
    cout<<"x + y = "<<x + y<<endl;
    cout<< "The reciprocal of x is "<<x.reciprocal()<<endl;
    cout<< "The reciprocal of y is "<<y.reciprocal()<<endl;
    cout<<x<< " = "<<x.toDouble()<<endl;
    return 0;
}