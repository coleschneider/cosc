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
    Node *current = _root;
    Node *previous = current;
    while (current){
        previous = current;
            if (val < current->_val){
                current = current->_left;
            } else {
                current = current->_right;
            }
            //starting with an empty tree
            if (!previous){
                _root = nodeToInsert;
            }
         else if (val < previous->_val){
            previous->_left = nodeToInsert;
        } else {
            previous->_right = nodeToInsert;
        }
    }
}

void Tree::inOrder(){//works together with Tree->Node
    //call helper
    if(_root){
        _root->inOrder();
    }
    cout << endl;
} 
void Node::inOrder() {
    if (_left){
        _left->inOrder();
    }
    cout << _val << " ";
    if (_right){
    _right->inOrder();
    }
    cout << _val << " ";
}

int Tree::size() const {
if (_root) {
    return _root->size();
    } else {
        return 0;
    }
}


int Node::size() const {
    int numLeft = _left ? _left->size() : 0;
    int numRight = _right ? _right->size() : 0;
    return numLeft + numRight + 1;
}
