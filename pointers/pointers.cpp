#include <iostream>
using namespace std;

class Rectangle{
private:
    double _length;
    double _width;
public:
    Rectangle(double length=0.0, double width = 0.0);
    double area();

};
Rectangle::Rectangle(double length, double width) {
    _length = length;
    _width = width;
}

double Rectangle::area() {
    return _length * _width;
}

int main() {

    
    int i = 32;
    int *p; //p is a pointer to an int
            // another way to say is p has type pointer to int
            //int *p, int * p, int* p are all the same
            //* is called the indirection operator. Sometimes called dereferencing
    p = &i; //& is the "address of operator"
    cout << "i == " << i << endl;
    cout << "&i == " << &i << endl;
    cout << "p == " << p << endl;
    // prints the address
    cout << "*p == " << *p << endl;
    //follows the value and prints the value
    //*p = 20;
    //cout << "i == " << i << endl;
    //puts 20 in i

    //Ways to initialize pointers:
    //1.    
    //int *ptr = NULL;
    //this thing points at nothing. Good thing to do when intitializing pointers
    //2. The way we just did it
    // the initial value must have the correct type

    //special value in c++ 11 keyword nullptr
        //int *ptr = nullptr
    //old class no pointers
    Rectangle x(3, 4); //STATIC MEMORY ALLOCATION
    cout << "area of x is " << x.area()<<endl;
    //using pointers
    //DYNAMIC MEMORY ALLOCATION
    Rectangle *q = new Rectangle(5, 8); //q has type pointer to rectangle
    Rectangle *r = &x; //points to x rectangle. Not dynamic. still static

    cout << "*q.area() == "<< (*q).area() << endl;
    //usually use this one - 
    cout<<"q->area() == "<<q->area() << endl; // the area q is pointing at.

    return 0;
}

//the new statement does 3 things:
    //1. it allocates memory for a new object
    //2. It returns a pointer to the new object
    //3. It calls the constructor for the new object