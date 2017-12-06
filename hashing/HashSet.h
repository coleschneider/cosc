#ifndef HASH_SET_P
#define HASH_SET_P

#include <iostream>
#include <cassert>
using namespace std;

class HashNode {
    friend class HashSet;
private:
//constructs a new emppty set;
    int _val;
    HashNode *_next;
public:
    HashNode(int val);
    ~HashNode();
};

class HashSet {
private:
   HashNode** int elements; // creates an array of pointers
    int capacity;
    int mySize;
public:
    HashSet();
    ~HashSet();
    void add(int val);
    int HashCode(int val);
};





#endif