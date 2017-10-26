#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    Stack s;
    Stack t;
    s.push(3);
    s.push(8);
    s.push(4);
    int x = s.pop();
    t.push(x);
    cout << s <<endl;
    cout<<t << endl;
    cout<<s.size()<<endl;
   cout<<s.top()<<endl;
    s.clear();
    cout<<s<<endl;
    return 0;
}
