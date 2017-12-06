#include "StackP.h"

Node::Node(int val) {
    _val = val;
    _next = nullptr;
}

Node::~Node() {
    //destructor for Node
    //call once when a node is destroyed
    //A destructor should clean up the object that will be destroyed
    //Usually this means deallocating memory that was previously allocated.
    
    //TODO
}

StackP::StackP() {
    _top = nullptr;
}

StackP::~StackP() {

}

void StackP::push(int val) {
    Node* temp = new Node(val);
    temp->_next = _top;
    _top = temp;
       
}