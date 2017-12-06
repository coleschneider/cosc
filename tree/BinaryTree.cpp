#include "BinaryTree.h"

TreeNode::TreeNode(int val) {
    _val = val;
    left = nullptr;
    right = nullptr;
}

TreeNode::~TreeNode(){
    //TODO
}


BinaryTree::BinaryTree(TreeNode *initialRoot) {
   
    root = initialRoot;
}


void BinaryTree::print() {
    printHelper(root);
}

void BinaryTree::printHelper(TreeNode *node) {
  //implicit base
  if  (node != nullptr) {
    cout << node->_val << endl;
    printHelper(node->left);
    printHelper(node->right);
  } 
}


bool BinaryTree::contains(int val) {
    //TODO

    return false;
}

