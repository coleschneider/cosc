/*
40 70 20 30 60 10 50 80
40 70 20 30 60 10 50 //80
40 50 20 30 60 10 //70 80
40 50 20 30 10 //60 70 80
40 10 20 30 //50 60 70 80
30 10 20 //40 50 60 70 80
20 10 //30 40 50 60 70 80
10 //20 30 40 50 60 70 80

//The Selection Sort

slection sort time complexity is O(n^2)
n + (n-1) + (n-2) +.... + 3 + 2 + 1
*/
#include <iostream>
using namespace std;

const int SIZE = 8;


//print function
void print(int v[], int numItems) {
    for (int i = 0; i < numItems; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

//sort function
void sort(int v[], int numItems) { //v is call by reference
    for (int i = numItems - 1; i > 0; i--) {
        int maxIndex = 0;
        for (int j = 1; j <= i; j++) {
            maxIndex = v[j] > v[maxIndex]? j : maxIndex;
        }
        int temp = v[i];
        v[i] = v[maxIndex];
        v[maxIndex] = temp;
    }
}


int main(int argc, char const *argv[]) {
int x[SIZE] = {40, 70, 20, 30, 60, 10, 50, 80};
print(x, 8);
sort(x, 8);
print (x, 8);
return 0;
}