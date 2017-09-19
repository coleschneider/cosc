#include <iostream>
using namespace std;

//forward declaration 
int find(int v[], int searchNum, int numItems);

//formal paramater is the paramater used in the function but x is the actual value

int main(int arc, char const *argv[]) {
    //this is an array literal
    int x[8] = {30, 10, 50, 40, 80, 60, 70, 20};
    cout << "Enter a Search value: ";
    int val;
    cin >> val;
    int i = find(x, val, 8);
    if (i == -1) {
        cout << "Item not found" << endl;
    } else {
        cout<< "Item found at index " << i << endl;
    }
    return 0;
}
int find(int v[], int searchNum, int numItems) {
    //the linear search
    int i = 0;
    while (i < numItems) {
        if (v[i] == searchNum) {
            return i;
        }
        i++;
    }
    return -1;
}
    