#ifndef OLIST_H
#define OLIST_H

#include <iostream>
#include <cassert>
using namespace std;


class Node {
    friend class OrderedList;
private:
    int _val;
    Node *_next;
public:
Node(int val);
~Node();
};

class OrderedList {
private:
    Node *_head;
public:
    OrderedList();
    OrderedList(const OrderedList &list);
    //~OrderedList();
    void insert(int val); // no preconditions
    int size() const;
    bool isEmpty() const;
    void toStream(ostream &os) const;

};

ostream *operator <<(ostream &os, const OrderedList &rhs);


#endif