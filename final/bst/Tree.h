#ifndef TREE_H
#define TREE_H
#include <iostream>
#include <cassert>
using namespace std;

class Node {
    friend class Tree;

private:
    Node *_left;
    int _val;
    Node *_right;

public:
    Node(int value);
    ~Node();
    void inOrder() const;
    void preOrder() const;
    void postOrder() const;
    int size() const;
    int numLeaves() const;
    int numInternals() const;
    int height() const;
};

class Tree {

private:
    Node *_root;

public:
    Tree();
    Tree(const Tree &tree);
    ~Tree();
    void insert(int value);
    void inOrder() const;
    void preOrder() const;
    void postOrder() const;
    int size() const;
    int numLeaves() const;
    int numInternals() const;
    int height() const;
    bool contains(int value) const;
};
/*
  1.Preorder Traversal - prints the root first, then left child, then right child
  2. Postorder Traversal - Left child, right child, then root
  3. Inorder Traversal - Left child, root, then right
*/
#endif