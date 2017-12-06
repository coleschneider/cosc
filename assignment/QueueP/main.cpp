#include "QueueP.h"

int main() {
    QueueP *q = new QueueP();
    q->enqueue(3);
    q->enqueue(8);
    q->enqueue(2);
    q->enqueue(9);
    q->enqueue(1);

   
    cout << "the queue is " << endl;
    cout << *q;   
    cout << endl;
    cout << "the size of the first queue is: " << endl;
    int m = q->size();
    cout << m << endl;


    int x = q->dequeue();
    cout << "Dequeued " << x << endl;
    cout << "the queue is now " << endl;
    cout << *q;
    cout << endl;



    QueueP *p = new QueueP(*q);
    cout << "copied queue is " << endl;
    cout << *p;
    cout << endl;
     cout << "and the size is of the copied is now: " << endl;
    int s = p->size();
    cout << s << endl;; 

    int greatestNodeVal = q->max();
    cout << "the node with the largest value is "<< greatestNodeVal << endl;
 
   p->clear();
cout << "Cleared q. now is: " << endl;
    cout << *p;
    cout << endl;

QueueP *test = new QueueP();
cout << "test constructor is: " << endl;
cout << *test;
    return 0;
}