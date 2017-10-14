//Circle.cpp Implementation file

#include "Circle.h"
#include <cmath>

Circle::Circle(double radius) {
    _radius = radius;
}

double Circle::area() {
    return M_PI * _radius * _radius;
}

double Circle::perimeter() {
    return 2.0 * M_PI * _radius;
}