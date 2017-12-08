#include "OrderedList.h"

int main() {
    OrderedList *firstList = new OrderedList();
    firstList->insert(8);       
    firstList->insert(3);    
    firstList->insert(6); 
    firstList->insert(4);

    cout << "the firstList is: " << endl;
    cout << *firstList;
    firstList->remove(8);
    cout << *firstList;

    OrderedList *copiedList = new OrderedList(*firstList);
    cout << "The copiedList is: " << endl;
    cout << *copiedList;
    firstList->remove(6);
    cout << *firstList;
    cout << *copiedList;
    ///delete node from first list 
    //to see if the val of copied list changes
delete firstList;

    return 0;
}