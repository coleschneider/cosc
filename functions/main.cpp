/*
In c++, there are 3 calling mechanisms for functions.

1. Call by value                i.e. int f(int x)
2. Call by reference            i.e. int f(int &x) 
3. Call by constant reference   i.e. int f(const int &x)
*/

#include <iostream>
using namespace std;

int callByVal(int x) {
    x = x + 1;
    cout<<"x == "<< x <<endl;
    return 2 * x;
}

int callByRef(int &x) {
    x = x + 1;
    cout<<"x == "<< x <<endl;    
    return 2 * x;
}

int main() {
    int a = 3;
   int b = callByVal(a);
    cout<<"a == "<<a<<endl;
    cout<<"b == "<<b<<endl;
    b = callByRef(a);
    cout<<"a == "<<a<<endl;
    cout<<"b == "<<b<<endl;

    return 0;
}