#include "StackP.h"
#include <iostream>
using namespace std;

int main() {
    StackP *s = new Stack();
    s->push(4);
    s->push(8);
    s->push(3);
    cout << *s << endl;
    
    return 0;
}

