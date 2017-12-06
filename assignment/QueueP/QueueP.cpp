#include "QueueP.h"

Node::Node(int val) {
    _val = val;
    _next = nullptr;
}

Node::~Node() {
    //do later
    if(_next !=nullptr) {
        delete _next;
    }
}

QueueP::QueueP() {
    _front = _rear = nullptr;
}


QueueP::QueueP(const QueueP &q){
if (q._front) {
        _front = new Node(*q._front);
        _front->_next = nullptr;
        _rear = _front;
        // _front-> value = q._front->value; // copy constructor should have done that

        Node *curr = _front;
        Node *otherCur = q._front;
        while(otherCur->_next != nullptr){
            //cout << "------Next is: " << otherCur->_next->value << endl;
            curr->_next = new Node(*otherCur->_next);
            curr->_next->_next = nullptr;
            _rear = curr->_next;
            // curr->_next->value = otherCur->_next->value;
            curr = curr->_next;
            otherCur = otherCur->_next;
        }
        // curr->_next = nullptr;
    }
}

QueueP::~QueueP() {
    
    while(_front != nullptr) {
        this->clear();
    printf("clearing queue");
    }

}

void QueueP::clear() {
while(!isEmpty()) {
    this->dequeue();
    //printf("clearing queue");
    }
}

void QueueP::enqueue(int val) {
Node *temp = new Node(val);
    if (isEmpty()) {
        _front = _rear = temp;
    } else {
        _rear->_next = temp;
        _rear = temp;
    }

}

int QueueP::dequeue(){
    assert(!isEmpty());
    Node *temp = _front;
    int dequeuedInt = _front->_val;
    _front = _front->_next;
    if (_front == _rear) {
        _front = nullptr;
        _rear = nullptr;
    }
    return dequeuedInt;
    delete temp;
}


bool QueueP::isEmpty() const {
    return _front == nullptr;
}

void QueueP::toStream(ostream &os) const {
    Node *temp = _front;
    while (temp != nullptr) {
        os << temp->_val << endl;
        temp = temp->_next;
    
    }

}

int QueueP::size() const {
    int counter = 0;
    if (isEmpty()) {
        return counter;
    } 
    Node *current = _front;
    while (current != nullptr) {
        counter++;
        current = current->_next;
    }
    return counter;
}

int QueueP::max() const {

  Node *temp = _front;
    int max = temp->_val;
    while (temp != nullptr) {
       if (temp->_val > max) {
           max = temp->_val;
       }
        temp = temp->_next;
        }
        return max;
}


ostream *operator <<(ostream &os, const QueueP &rhs) {
    rhs.toStream(os);
    return (&os);
}