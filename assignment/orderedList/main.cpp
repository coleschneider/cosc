#include "OrderedList.h"

int main() {
    OrderedList *firstList = new OrderedList();
    firstList->insert(8);       
    firstList->insert(3);    
    firstList->insert(6); 
    firstList->insert(4);

    cout << "the firstList is: " << endl;
    cout << *firstList;
    OrderedList *copyList = new OrderedList(*firstList);

    firstList->remove(6);
    cout << *firstList;
//copy constructor
OrderedList *copyListTwo = new OrderedList(*firstList);
cout << "the copied list is: " << endl;
cout << *copyList;
cout << "the copied list 2 is: " << endl;
cout << *copyListTwo;
    //delete firstList;
    //delete copyList;
    return 0;
}