
#ifndef STACKP_H
#define STACKP_H

#include <iostream>
using namespace std;

class Node {
    friend class StackP;
private:
    int _val;
    Node *_prev;
public:
    Node(int value);
    ~Node();
};

class StackP {
private:
    Node *_top;
public:
    StackP();
    StackP(const StackP &s);
    ~StackP();
    void push(int value);
    int pop();
    void clear();
    int size();
    bool isEmpty();
    void toStream(ostream &os) const;
};

ostream *operator<<(ostream &os, const StackP &rhs);


#endif //STACKP_H