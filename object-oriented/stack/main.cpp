#include <iostream>
#include "StackA.h"
using namespace std;

int main() {
    StackA s;
    StackA t;
    s.push(3);
    s.push(8);
    s.push(4);
    int x = s.pop();
    t.push(x);
    cout << s <<endl;
    cout<<t << endl;
    return 0;
}