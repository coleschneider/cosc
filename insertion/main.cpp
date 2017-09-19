//Insertion/main.cpp
/*
30 80 10 70 40 60 50 20
30 80 //10 70 40 60 50 20
10 30 80 //70 40 60 50 20
10 30 70 80//40 60 50 20
10 30 40 70 80
10 30 40 60 70 80 //
10 30 40 50 

ON EXAM KNOW THE CODE FOR THE DIFFERENT SORTS. */

#include <iostream>
using namespace std;

const int SIZE = 8;

//in place sort

void sort(int v[], int numItems) {
    for (int i = 1; i < numItems; i++) {
        int temp = v[i];
        int j = i;

        //short circuit evaluation
        while(j >= 1 && temp < v[j -1]) {
            v[j] = v[j - 1];
            j--;
        }
        v[j] = temp;
    }
}

int main(int argc, char const *argv[]) {
    int x[SIZE] = {30, 60, 10, 50, 80, 20, 70, 40};
    for (int i = 0; i < SIZE; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
    sort(x, SIZE);
    for (int i = 0; i < SIZE; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;
}

