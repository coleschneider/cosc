#include <iostream>
using namespace std;

void merge(int array[], int left, int mid, int right)
{
    int i, j, k;

//numitems for left side
int leftSide = mid - left + 1;

//numitems for right side
int rightSide =  right - mid;

//create a temporary array to hold each side
int Left[leftSide], Right[rightSide];

for(i = 0; i < leftSide; i++) {
    Left[i] = array[left+i];
}

for(j = 0; j < rightSide; j++) {
    Right[j] = array[mid+1+j];
}
// i and j get 0
i = 0;
j = 0;
k = left;

while (i < leftSide && j < rightSide) {
    if (Left[i] <= Right[j]) {
        array[k] = Left[i];
        i++;
    } else {
        array[k] = Right[j];
        j++;
    }
    //increment k
    k++;
}

while (i < leftSide) {
    array[k] = Left[i];
    i++;
    k++;
    }

while (j < rightSide) {
    array[k] = Right[j];
    j++;
    k++;
    }
}

void mergeSort(int array[], int left, int right)
{
    if(left < right) {
    int mid = (left+right)/2;
    //recursive call
    mergeSort(array, left, mid);
    mergeSort(array, mid+1, right);

    //call merge function to merge the two sublists
    merge(array, left, mid, right);
}
}

int main() {
    int x[] = {1, 3, 2, 5, 4};

    mergeSort(x, 0, 5);

    for (int i = 0; i < 5; i++) {
        cout<<x[i]<<" ";

    }
    cout<<endl;
    
    return 0;
}