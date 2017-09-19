#include <iostream>
#include <ctime>
using namespace std;

//linear search = O(n)
//if you have n inpurts it will take u n tests or n comparisons
//list of 8 items long takes 5 comparisons to find 50:
// 10 40 80 60 50 70 30 20

//other words its n terms of n


//binary search
//10 20 30 40 50 60 70 80
//
//find function
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
   // int x[8] = {30, 10, 50, 40, 80, 60, 70, 20};
    int x[1000]; //arrays in c++ are statically allocated
    // i.e. They are allocated at compile-time
    
    populate(x, 1000);
   
    print(x,1000);
    cout << "Enter a Search value: ";
    int val;
    cin >> val;
    int i = find(x, val, 1000);
    if (i == -1) {
        cout << "Item not found" << endl;
    } else {
        cout<< "Item found at index " << i << endl;
    }
    
    return 0;
}

    