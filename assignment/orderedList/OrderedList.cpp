#include "OrderedList.h"

Node::Node(int val) {
    _val = val;
    _next = nullptr;
}


Node::~Node() {
    if(_next !=nullptr) {
        delete _next;
    }
    _next = nullptr;
}


OrderedList::OrderedList() {
    _head = nullptr;
}
OrderedList::~OrderedList() {
    if (_head) {
        delete _head;
    }
    _head = nullptr;
}

int OrderedList::size() const {
    int count;
    if (isEmpty()) {
        count = 0;
    } else {
        Node *current = _head;
        while (current != nullptr) {
            count++;
            current = current->_next;
        }
    }
    return count;
}

bool OrderedList::isEmpty() const {
    return _head == nullptr;
}



void OrderedList::insert(int val) {
  Node *_temp = new Node(val);
  Node *p = _head;
  Node *q = p;
  while (p != nullptr && p->_val < val ) {   // short circuit evaluation , switched doesn't work
    q = p;
    p = p->_next;     // like the p++ but bc the elements
  }
  _temp->_next = p;
  if (p == q) {
    _head = _temp;
  } else {
    q->_next = _temp;   // this q is a trailer/chaser
  }
}


OrderedList::OrderedList(const OrderedList &list){
 
 
  Node *p = list._head;

  //_head = (p->_val);
  while (p != nullptr) {
    //p = p->_next;

     insert(p->_val);
    p = p->_next;
  }
   _head = nullptr;
 // p = nullptr;

}


//remove node if found, otherwise do nothing

void OrderedList::remove(int val){
    assert(_head != nullptr);
    Node *current = _head;
    Node *previous = current;
    while(current && current->_val < val){
        previous = current;
        current = current->_next;
    } 
    previous = previous->_next;
    if (current->_val == val){
        previous = current->_next;
        delete current;
    } else if(!current){
        previous = nullptr;
        delete current;
    } else {
        return;
    }
}

void OrderedList::toStream(ostream &os) const {
    Node *current = _head;
    while (current) { //could do while current !=nullptr
        os << current->_val << " ";
        current = current->_next;
    }
    os << endl;
}

ostream *operator <<(ostream &os, const OrderedList &rhs) {
    rhs.toStream(os);
    return &os;
}