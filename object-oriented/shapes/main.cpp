#include <iostream>
#include "Rectangle.h"
using namespace std;

int main () {
    Rectangle r(3.1, 4.2); // r is a rectangle with width 3.1
                            //and height 4.2
    cout<<"Area: "<< r.area()<<endl;
    cout << "perimeter: "<<r.perimeter()<<endl;
    return 0;
}