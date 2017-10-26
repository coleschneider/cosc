#include <iostream>
#include "LinkedList.h"
using namespace std;

void testAdd(LinkedList& list);

int main() {
    LinkedList list;
    testAdd(list);
    cout<< "exiting main"<<endl;
    return 0;
}
void testAdd(LinkedList& list) {
    cout << "add:" << endl;
    list.add(42);
    list.add(-5);
    list.add(17);
    list.add(28);
    cout << list << ", size " << list.size() << endl;
    // list.debug();
    cout << endl;
}