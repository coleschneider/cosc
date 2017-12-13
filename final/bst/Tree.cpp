#include "Tree.h"

    Node::Node(int value){
        _val = value;
        _left = nullptr;
        _right = nullptr;
    }

    Node::~Node() {
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

Tree::Tree(const Tree &tree){
    //cpy constructor
}


Tree::~Tree(){
    while (_root){
        delete _root;
    }
    _root = nullptr;
}


void Tree::insert(int value){
   Node *current = _root;
   Node *tracer = current;
   Node *newNode = new Node(value);
    while (current){
        tracer = current;
        if (value <= current->_val) {
            
            current = current->_left;
        } else {
            current = current->_right;
        }
    }
    //check if empty
    if (!tracer){
        _root = newNode;
    } else if (value < tracer->_val){
        tracer->_left = newNode;
    } else {
        tracer->_right = newNode;
    }
}

void Tree::inOrder() const {
  if (_root != nullptr) {
    _root->inOrder();
  }
  cout << endl;
}

void Node::inOrder() const{
  if (_left != nullptr) {
    _left->inOrder();
  }
  cout << _val << " ";
  if (_right != nullptr) {
    _right->inOrder();
  }
}