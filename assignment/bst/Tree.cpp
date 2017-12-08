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
 if (_root == nullptr){
   return 0;
 }
 return _root->size();
}

int Node::size() const {
  int numLeft = (_left != nullptr ? _left->size() : 0);
  int numRight = (_right != nullptr ? _right->size() : 0);
  return  numLeft + numRight + 1;
}

/*Homework
  1.Preorder Traversal - prints the root first, then left child, then right child
  2. Postorder Traversal - Left child, right child, then root

*/

void Tree::preOrder() const {
  if (_root->_left != nullptr){
    _root->preOrder();
   
  } 
  cout << endl;
}

void Node::preOrder() const {
cout << _val << " ";
  if (_left){
    _left->preOrder();
  } 
  
  if (_right){
    _right->preOrder();
  }
  
}

void Tree::postOrder() const {
  if(_root){
    _root->postOrder();
  }
  cout << endl;
}


void Node::postOrder() const {
  if(_left){
    _left->postOrder();
  }

  if(_right) {
    _right->postOrder();
  }
  cout << _val << " ";
}



int Tree::numLeaves() const {
  if(_root == nullptr){
    return 0;
  }
  return _root->numLeaves();
}


int Node::numLeaves() const {
  //numLeaves on left
  /*
  int numLeftLeaves = (!_left ? _left->numLeaves() : 1);
  //numLEaves on right
  int numRightLeaves = (!_right ? _right->numLeaves() : 1);
  */
int leftLeaves = 0;
 int rightLeaves = 0;
  //class code
if (!_left && !_right){
  return 1;
}
  
  if (_left){
    leftLeaves = _left->numLeaves();
  }
  if (_right){
    rightLeaves = _right->numLeaves();
  }

  return leftLeaves + rightLeaves;

}



int Tree::numInternals() const {
if (_root){
   return _root->numInternals() - _root->numLeaves();
   } 
   return 1;
}

int Node::numInternals() const {
 int numLeftInternals = (_left ? _left->numInternals() : 0);
  int numRightInternals = (_right ? _right->numInternals() : 0);


return numLeftInternals + numRightInternals + 1;
}

int Tree::height() const {
  
  if (_root){
  return _root->height();
  } 
  return 0;
}

int Node::height() const {
int leftHeight = (_left ? _left->height() : 0 );
int rightHeight = (_right ? _right->height() : 0 );
  if(leftHeight > rightHeight){
   return leftHeight + 1;
  } else {
   return rightHeight + 1;
  }

}



bool Tree::contains(int value) const {
  Node *current = _root;
  Node *previous = nullptr;

  while(current && current->_val != value){
    previous = current;
    if (value < current->_val){
      current = current->_left;
    } else {
      current = current->_right;
    }
  }
  if (!current){
    return false;
  } else {
    return true;
  }
}

