//This is the implementation file.
#include "Rectangle.h"
//classname::function name
Rectangle::Rectangle(double length, double width) {
_length = length;
_width = width;
}
//return type double
double Rectangle::area() {
    return _length * _width;
}
double Rectangle::perimeter() {
    return 2.0 * (_length + _width);
}

//to compile g++ -c Rectangle.cpp, then g++ Rectangle.o main.cpp, then ./a.out