#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

int main () {
    Rectangle r(3.1, 4.2); // r is a rectangle with width 3.1
                            //and height 4.2

    Circle c(2.5);
    cout<<"Rectangle"<<endl;
    cout<<"Area: "<< r.area()<<endl;
    cout << "perimeter: "<<r.perimeter()<<endl;
    cout<<"Circle"<<endl;
    cout<<"area"<<c.area()<<endl;
    cout<<"Perimeter"<<c.perimeter()<<endl;
    return 0;
}