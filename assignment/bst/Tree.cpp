#include "Tree.h"

Node::Node(int val) {
  _val = val;
  _left = nullptr;
  _right = nullptr;
}

Node::~Node() {
  if (_left != nullptr) {
    delete _left;
  }
  if (_right != nullptr) {
    delete _right;
  }
  _left = nullptr;
  _right = nullptr;
}

Tree::Tree() {
  _root = nullptr;
}

Tree::~Tree() {
  if (_root != nullptr) {
    delete _root;
  }
  _root = nullptr;
}

void Tree::insert(int val) {
  Node *temp = new Node(val);
  Node *p = _root;
  Node *q = p;
  while(p != nullptr) {
    q = p;
    if (val < p->_val) {
      p = p->_left;
    } else {
      p = p->_right;
    }
  }
  if (q == nullptr) {
    _root = temp;
  } else if (val < q->_val) {
    q->_left = temp;
  } else {
    q->_right = temp;
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

int Tree::size() const {
  if (_root !=nullptr) {
    return _root->size();
  } else {
    return 0;
  }
}

int Node::size() const {
  int numLeft = (_left != nullptr ? _left->size() : 0);
  int numRight = (_right != nullptr ? _right->size() : 0);
  return  numLeft + numRight + 1;
}
