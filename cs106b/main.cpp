#include <iostream>
using namespace std;
//pointers

int main() {
    int x = 42;
    cout << x << endl;   //42
    cout << &x << endl;  //0x7fff59077a48
    int *p = &x;
    *p = 99;

    cout << x << endl;   //99

    return 0;
}