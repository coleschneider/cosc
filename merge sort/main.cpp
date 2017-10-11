#include <iostream>
using namespace std;

void sort(int v[], int numItems) {
    int firstHalf;
    int secondHalf;

    if (numItems % 2 == 0) {
        firstHalf = numItems/2;
        secondHalf = numItems/2;
    } else {
        firstHalf = (numItems/2) + 1;
        secondHalf = numItems/2;
    }

    int arr1[firstHalf];
    int arr2[secondHalf];

    for (int i = 0; i < firstHalf; i++) {
        
    }


}

int main() {
    
    
    return 0;
}