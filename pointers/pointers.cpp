#include <iostream>
using namespace std;



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
    *p = 20;
    cout << "i == " << i << endl;
    //puts 20 in i

    //Ways to initialize pointers:
    //1.    
    int *ptr = NULL;
    //this thing points at nothing. Good thing to do when intitializing pointers
    //2. The way we just did it
    // the initial value must have the correct type

    //special value in c++ 11 keyword nullptr
        //int *ptr = nullptr


    return 0;
}