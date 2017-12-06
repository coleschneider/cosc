#include "Stack.h"
using namespace std;

Stack::Stack() {
    _top = 0;
}

void Stack::push(int val) {
    _body[_top++] = val;
}

int  Stack::pop() {
   return  _body[--_top];
}

int  Stack::size() const {
    return _top;
}


void Stack::toStream(ostream &os) const {
    for (int i = size(); i >= 0; --i) {
        os << _body[i] << endl;
     }
     os << endl;
    }


ostream &operator <<(ostream &os, const Stack &rhs) {
    rhs.toStream(os);
    return os;
}