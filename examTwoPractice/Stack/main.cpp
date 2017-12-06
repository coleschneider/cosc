#include "Stack.h"


int main() {
    Stack a;
    a.push(3);
    a.push(4);
    a.push(4);
    a.push(4);
  
    cout << a << endl;
    int x = a.pop();
   // cout << x << endl;
    cout << a << endl;
    return 0;
}