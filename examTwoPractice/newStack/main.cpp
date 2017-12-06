#include "Queue.h"

int main() {
   QueueA<int> s;
    s.enqueue(3);
    s.enqueue(1);
    s.enqueue(1);
    s.enqueue(2);
    int x = s.dequeue();
    s.enqueue(1);

    cout << s <<endl;
    cout << x << endl;
    cout << s << endl;
    return 0;
}