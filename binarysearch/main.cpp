#include <iostream>
#include <ctime>
using namespace std;
//EXAM QUESTION!!!!!!!
//Order of Complexity

/*
1. Linear Search = O(n)
2. Binary Search = O(lgn)

*/

int find(int v[], int searchNum, int start, int end) {
    while(start < end) {
        int mid = (start + end) / 2;
        if (v[mid] == searchNum) {
            return mid;
        } else if (v[mid] > searchNum) {
            end = end == mid? end -1 : mid;
        } else {
            start = start == mid? start + 1: mid;
        }
    }
    return -1;
}


//formal paramater is the paramater used in the function but x is the actual value

//print
//void is a special type meaning nothing
void print(int v[], int numItems) {
    for (int i = 0; i < numItems; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void populate(int v[], int numItems) {
//generate random integers between 0 and 99 to populate v
for (int i = 0; i < numItems; i++) {
    int n = rand() % 100;
    
    
    v[i] = n;
    cout << n << endl;
}

}

//cout doesnt work on array
//parameter names are local not global
int main(int arc, char const *argv[]) {
    
    srand(time(0));
    //this is an array literal
    //to do a binary search array must be sorted
   int x[8] = {30, 40, 50, 70, 80, 100, 110, 120};
    //int x[1000]; //arrays in c++ are statically allocated
    // i.e. They are allocated at compile-time
    
    //populate(x, 1000);
   
    print(x, 8);
    cout << "Enter a Search value: ";
    int val;
    cin >> val;
    int i = find(x, val, 0, 7);
    if (i == -1) {
        cout << "Item not found" << endl;
    } else {
        cout<< "Item found at index " << i << endl;
    }
    
    return 0;
}
