#include <iostream>
using namespace std;


int main() { 
    //An array name is the starting address of the array
    int vals[] = {4, 7, 11};
    cout << "vals == " << vals << endl;
    //prints out the address of vals array;
        //an array name can be used as a pointer constant
    cout << "*vals == " << *vals << endl; // prints first value of the array
    int *valptr = vals;
    cout << "valptr == "<< valptr[1] << endl;
    
    //Pointers in expressions:

   cout << "*(valptr + 1) == " <<*(valptr + 1) << endl;
    // (address in valptr) + (1 * size of an int)
    //use parenthesis. Otherwise changes precedence.
    return 0;
}