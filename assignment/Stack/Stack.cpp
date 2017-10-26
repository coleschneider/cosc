#include <iostream>
#include "Stack.h"
#include <cassert>

using namespace std;
Stack::Stack() {
    _top = -1;
}

bool Stack::isEmpty() const {
    return _top == -1;
}
bool Stack::isFull() const {
    return ( _top == SIZE);
}
void Stack::push(int val) {
    assert(!isFull());
    _body[++_top] = val;
}
int Stack::pop() {
    assert(!isEmpty());
   return _top = _top + 1;
}

int Stack::size() const {
    return _top;
}


int Stack::top() const {
    assert(!isEmpty());
    return _body[_top - 1];
}
/*
void Stack::clear() {
    
}
*/
void Stack::toStream(ostream &os) const {
    for (int i = _top + 1; i > -1; i--) {
        os << _body[i] << endl;
    }
    os << "--------" << endl;
}

ostream &operator <<(ostream &os, const Stack &rhs) {
    rhs.toStream(os);
    return os;
}