#include "Square.h"

Square::Square(double side) {
   _side = side;
}

//return type double

double Square::perimeter() {
    return _side * 4;
}

double Square::area() {
    return _side * _side;
}
