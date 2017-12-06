#include "Tree.h"

Node::Node(int val){
    _val = val;
    _left = nullptr;
    _right = nullptr;

}

Node::~Node(){
    if(_left){
        delete _left;
    }
     if (_right){
        delete _right;
    }
    _left = nullptr;
    _right = nullptr;
}

Tree::Tree(){
    _root = nullptr;
}

Tree::~Tree(){
   if(_root){
       delete _root;
   }
   _root = nullptr;
}


void Tree::insert(int val) {
   Node *nodeToInsert = new Node(val);
   if (!_root) {
        _root = nodeToInsert;
   }
   
    Node *current = _root;
    Node *previous = _root;
    while (current){
        previous = current;
            if (val < p->_val){
                current = current->_left;
            } else {
                current = current->_right
            }
            //starting with an empty tree
            if (!previous){
                _root = nodeToInsert;
            }
        if (val < previous->_val){
            previous->_left = nodeToInsert;
        } else {
            previous->_right = nodeToInsert;
        }
    }
}

void Tree::inOrder(){//works together with Tree->Node
    //call helper
    if(!_root){
        _root->inOrder();
    }
} 
void Node::inOrder(){
    if (left){
        _left->inOrder();
    }
    cout << _val << " ";
    if (left){
    _left->inOrder();
    }
}

