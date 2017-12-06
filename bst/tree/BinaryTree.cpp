#include "BinaryTree.h"

TreeNode::TreeNode(int val) {
    _val = val;
    TreeNode *left = nullptr;
    TreeNode *right = nullptr;
}

TreeNode::~TreeNode() {
    //TO-DO
}


BinaryTree::BinaryTree(TreeNode *startRoot){
    TreeNode *root = startRoot;
    }

bool BinaryTree::isEmpty() {
    return root = nullptr;
}

void BinaryTree::print(){
    printHelper(root);
    }

void BinaryTree::printHelper(TreeNode *node){
    //privatehelper
   if (node) {
       cout<< node->_val << endl;
    printHelper(node->left);
    printHelper(node->right);
   }
}
/*
bool BinaryTree::contains(int val){

    }

void BinaryTree::printSideways(){

    }
*/