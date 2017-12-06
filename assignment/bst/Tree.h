#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <cassert>
using namespace std;


class Node {
    friend class Tree;
private:
    int _val;
    Node *_left;
    Node *_right;
public:
    Node(int val);
    ~Node();
    int size() const;
    void inOrder() const; //works together with Tree->inOrder()
};

class Tree {

private:
    Node *_root;
public:
    Tree();
    ~Tree();
    void insert(int val);
    void inOrder() const;
    int size() const;
    
};





#endif