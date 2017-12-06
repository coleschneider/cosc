#include "StackP.h"
#include <cassert>
using namespace std;



Node::Node(int value) {
    _val = value;
    _prev = nullptr;
}

Node::~Node() {
    //TO-DO come back and make destructor. 
if (_prev != nullptr) {
    delete _prev;
    }
}

StackP::StackP() {
    _top = nullptr;
}
/*
StackP::StackP(const StackP &s) {
   assert(!(this->isEmpty()));
  Node *p = s._top;
  Node **secondP = &_top;
  while(p) {
      *secondP = new Node(*p);
      p = p->_prev;
      secondP = &(*secondP)->_prev;
  }
  *secondP = nullptr;
}
*/

StackP::StackP(const StackP &s) {
    if (s._top == nullptr) {
        _top = nullptr;
    } else {
        _top = new Node(s._top->_val);
        Node *p = s._top;
        p = p->_prev;
        Node *q = _top;
        while(p != nullptr) {
        q->_prev = new Node(p->_val);
            p = p->_prev;
            q = q->_prev;
        }
    }
}

StackP::~StackP() {
    clear();
}



void StackP::push(int value) {
    Node *temp = new Node(value);
    temp->_prev = _top;
    _top = temp;
}

int StackP::pop() {
    assert(!isEmpty());
    Node *temp = _top;
    _top = temp->_prev;
    int num = temp->_val;
    //call destructor function
    temp->_prev = nullptr;
   delete temp;
    return num;
}

void StackP::clear() {
if (_top !=nullptr) {
    delete _top;
    _top = nullptr;
    }
}

int StackP::size() {
    int count = 0;
    Node *current = _top;
    while(current != nullptr){
        count++;
        current = current->_prev;
    }
    return count;
}

bool StackP::isEmpty() {
    return _top == nullptr;
}
/*
void StackP::toStream(ostream &os) const {
    Node *current = _top;
    if(current != nullptr) {
        os <<current->_val<<endl;
        while(current->_prev !=nullptr) {
            current = current->_prev;
            os << current->_val<<endl;
        }
    }
    //delete current;
}
*/
void StackP::toStream(ostream &os) const {
    Node *p = _top;
    while (p != nullptr) {
        os << p->_val << endl;
        p = p->_prev;
    }
    os << endl;
}


ostream *operator<<(ostream &os, const StackP &rhs) {
rhs.toStream(os);
return (&os);

}

