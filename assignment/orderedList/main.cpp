#include "OrderedList.h"

int main() {
    OrderedList *list = new OrderedList();
    list->insert(8);       
    list->insert(3);    
    list->insert(6); 
    list->insert(4);

    cout << "the list is: " << endl;
    cout << *list;
    delete list;
    return 0;
}