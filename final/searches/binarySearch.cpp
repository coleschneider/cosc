#include <iostream>
#include <cassert>
using namespace std;
const int SIZE = 8; 

//recursive bin search
int binarySearch(int arr[], int searchNum, int start, int end){
    //must be sorted
    assert(start < end);
int mid = (start + end) / 2;

    if (v[mid] == searchNum){
        return mid;
    } else if (searchNum > v[mid]) {
        return binarySearch(arr, searchNum, start, mid - 1);
    } else{
        return binarySearch(arr, searchNum, mid + 1, end)
    } 

}

void recursiveInsertion(int arr[], int numElements){
    //base case
    if (1 >= numItems){
        return;
    }
    return recursiveInsertion(arr, numElements - 1);
    
    int lastElement = arr[numElements - 1];
    int previous = numElements - 2;

    while(previous >= 1 && v[[rev]] > )
    
}


int main(){
    int v[SIZE] = {10, 40, 35, 67, 45, 80, 15, 70};





    return 0;
}
