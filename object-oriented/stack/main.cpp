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
    cout << s;
    cout<<t;
    return 0;
}