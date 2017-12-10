#include "binarySearch.h"


Node::Node(int value){
    _val = value;
    _left = nullptr;
    _right = nullptr;
}


void Node::inOrder() const(){
    if (!_root){
        return;
    } else {
        cout << _left->inOrder()<< " ";
    }

}

void Tree::inOrder() const(){
    if (_left > )
    cout << endl;
}   

/*
void Node::preOrder() const(){

}

void Tree::preOrder() const(){

}

void Node::postOrder() const(){

}

void Tree::postOrder() const(){

}
*/