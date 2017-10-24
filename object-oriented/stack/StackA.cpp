#include "StackA.h"
#include <cassert>
using namespace std;

StackA::StackA() {
    _top = 0; //Where the next item will be push
}

bool StackA::isEmpty() const {
    return _top == 0;
}

bool StackA::isFull() const {
    return _top == SIZE; 
}

void StackA::push(int val) {
    assert(!isFull());
    _body[_top++] = val;
}

int StackA::pop() {
    assert(!isEmpty());
    return _body[--_top];
}
void StackA::toStream(ostream &os) const {
    for (int i = _top - 1; i >= 0; i--) {
        os << _body[i] << endl;
    }
    os << "--------" << endl;
}

ostream &operator <<(ostream &os, const StackA &rhs) {
    rhs.toStream(os);
    return os;
}

