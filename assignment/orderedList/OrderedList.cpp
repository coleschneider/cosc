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
    Node *temp = new Node(val);
    Node *p = _head;
    Node *previous = p;
    while (p != nullptr && p->_val < val) {
        previous = p;
        p = p->_next;
    }
    temp->_next = p;
    if (p == previous) {
        _head = temp;

    } else {
    //temp->_next = p; could have this but happens in both cases
    previous->_next = temp; //handles the case where val is greater than p's val
    }
}


OrderedList::OrderedList(const OrderedList &list){
    _head = nullptr;
    Node *temp = list->_head;
    while(temp != nullptr){
        insert(temp->_val);
        temp = temp->_next;
    }
}


//OLD INSERT CODE:

/*
void OrderedList::insert(int val) {
   Node *nodeToInsert = new Node(val);
   if(_head == nullptr){
        Node *nodeToInsert = new Node(val);
        _head = nodeToInsert;
        return;
    } else {
    Node *current = _head;
    Node *previous = nullptr;
    while(current != nullptr) {
        if(val < current->_val){
            Node *nodeToInsert = new Node(val);
            nodeToInsert->_next = current;
            if (previous == nullptr) {
                Node *nodeToInsert = new Node(val);
                _head = nodeToInsert;
            } else {
                previous->_next = current;
            }
            return;
        }
        previous = current;
        current = current->_next;
    }
    //Node *nodeToInsert = new Node(val);
    previous->_next = nodeToInsert;
    }
}
*/

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