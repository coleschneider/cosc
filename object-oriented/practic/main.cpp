#include <iostream>
#include "Square.h"
using namespace std;

int main () {
    Square s(2);
    cout << "Perimeter: " << s.perimeter() << endl;
    cout << "Area: " << s.area()<<endl;
    return 0;
}