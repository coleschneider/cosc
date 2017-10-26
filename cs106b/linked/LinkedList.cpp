#include <iostream>
#include "LinkedList.h"
using namespace std;

/*
2 ways to change a linked list:
    1. front = ___;
    2. __->next = __;
does NOT CHANGE list:
    current =  new ListNode();
    current = front;
    current = NULL;
*/

LinkedList::LinkedList() {
    front = NULL;
}

LinkedList::~LinkedList() {

}

void LinkedList::add(int value) {
    if (front == NULL) {
        front = new ListNode(value);
    } else {
        //walk to the end
        ListNode* current = front;
        while(current->next != NULL) {
            current = current->next;
        }
        //attach a new node
        current->next = new ListNode(value);
    }
}

void LinkedList::clear() {

}

int LinkedList::get(int index) const {
    ListNode* current = front;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    return current->data;
}

void LinkedList::insert(int index, int value) {
    if (index == 0) {
       ListNode* oldfront = front;
        front = new ListNode(value);
        front->next = oldfront;
    } else {
    ListNode* current = front;

    for (int i = 0; i < index - 1; i++) {
        current = current->next;
    } //insert after current
    ListNode* newNode = new ListNode(value);
    newNode->next = current->next;
    current->next = newNode;
    }
}

bool LinkedList::isEmpty() const {
    return front == NULL;
}

void LinkedList::remove(int index) {
    if (index == 0) {
        front = front->next;
    } else {
    ListNode* current = front;
    for (int i = 0; i < index - 1; i++) {
        current = current->next;
    }
    //remove the node by pointing to the one after the one ur removing
    current->next = current->next->next;
}
}

void LinkedList::set(int index, int value) {
    ListNode* current = front;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    //when we get there current is pointing to ith number in node
    current->data = value;
}

int LinkedList::size() const {
    int count = 0;
    ListNode* current = front;
    while(current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}


ostream& operator <<(ostream& out, LinkedList& list) {
    out << "{";

    LinkedList::ListNode *current = list.front;
    if (current != NULL) {
        out << current->data;
        while (current->next != NULL) {
            current = current->next;
            out << ", " << current->data;
        }
    }

    out << "}";
    return out;
}