#ifndef BINARY_TREE_P_H
#define BINARY_TREE_P_H

#include <iostream>
#include <cassert>
using namespace std;

class TreeNode {
    friend class BinaryTree;
private:
    int _val;

public:    
    TreeNode(int val);
    ~TreeNode();
    TreeNode *left;
    TreeNode *right;
};


class BinaryTree {
private:
    TreeNode *root;
    void printHelper(TreeNode *node);
public:
    BinaryTree(TreeNode*);
    void print();
    bool contains(int val);
    void printSideways();
    bool isEmpty();

};


#endif
