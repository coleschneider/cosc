#include "StackP.h"
#include <iostream>
using namespace std;

int main() {
    StackP *s = new StackP();
    s->push(4);
    s->push(8);
    s->push(3);
    
  cout << *s;
   StackP *t = new StackP(*s);
   cout << *s;
   // s->clear();
    cout << *(s);
    int x = t->pop();
   cout <<x<<endl;
    t->clear();
    cout << endl;
    cout << *s;
    return 0;
}