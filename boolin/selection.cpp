#include <iostream>
using namespace std;

const int SIZE = 7;

/*
    1 3 4 2 5 6 9 20
    1 2 4 3 5 6 9 20
    1 2 3 4 5 6 9 20

*/

int binarySearch(int arr[], int searchNum, int start, int end){
    int mid = (start + end) / 2;
    if (arr[mid] == searchNum){
        return mid;
    } else if (searchNum < arr[mid]){
        return binarySearch(arr, searchNum, start, mid);
    } else {
        return binarySearch(arr, searchNum, mid + 1, end);
    }
     // return cout << "number doesnt exist" << endl;
    
}

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void selectionSort(int arr[], int numItems){
    int currentSmallest;
    int i;
    int j;

    for (i = 0; i < numItems - 1; i++){
       currentSmallest = i;
        for (j = i + 1; j < numItems; j++){
            if (arr[currentSmallest] > arr[j]){
                currentSmallest = j;
            }
        }
        int temp = arr[i];
    arr[i] = arr[currentSmallest];
    arr[currentSmallest] = temp;
    }
    
}

//insertion



void printArray(int arr[], int numItems){
    for(int i = 0; i < numItems; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
int selArr[SIZE] = {7, 3, 1, 5, 4, 2, 6};

selectionSort(selArr, SIZE);

printArray(selArr, SIZE);

    cout << endl;
    int x;
    cout << "Enter a search val: " << endl;
    cin >> x;
    int search = binarySearch(selArr, x, 0, SIZE);
cout << search << " found at index" << endl;


    return 0;
}