#include <iostream>
#include<cassert>
#include "Stack.h"
using namespace std;


StackA::StatckA() {
    //stack top before index 0
    _top = -1;
}

bool StackA::isEmpty() const {
    return _top == -1
}

bool StackA::isFull() const {
    //top of stack is 3 because of const size of 4;
    return _top == SIZE -1
}

void StackA::push(int val) {
    assert(!isFull());
    _body[_top] == val;
    ++_top;
}
int StackA::pop() {
    assert(!isEmpty());
    return _body[_top--];
}

int StackA::size() const {
    return _top;
}
int StackA::top() const {
    return _body[_top];
}
void clear() {
    return _top == -1
}
void toStream(ostream &os) const {
    for (int i = _top; i > 0; i--) {
        os << _body[i];
    }
    os << "______" << endl;
}

ostream &operator <<(ostream &os, const StackA &rhs) {
    ostream(os);
    return os;
}