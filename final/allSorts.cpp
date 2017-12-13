#include <iostream>
using namespace std;

const int SIZE = 8;

/*selection sort - in place sorting algorithm that swaps elements
    1. scan array to find the minimum element
    2. assign it to the 0'th index
    3. Do it again
    4. assign to the 0'th + 1 index
*/
void selectionSort(int arr[], int numItems){
        int min;
        int i;
        int j;
        
   for (i = 0; i < numItems - 1; i++){
       min = i;
        for (j = i + 1; j < numItems; j++){
            if (arr[min] > arr[j]){
                //find value lesseer than current min, then get that value
                min = j;
            } 
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

/*/insertion sort
    1. call the first element of the array sorted
    2. 
*/
    void insertionSort(int arr[], int numItems){
        if (numItems <= 1){
            return;
        }
        insertionSort(arr, numItems - 1);

        int lastSorted = arr[numItems - 1];
        int p = numItems - 2;

        while (p >= 0 && arr[p] > lastSorted){
            arr[p + 1] = arr[p];
            p--;
        }
        arr[p + 1] = arr[lastSorted];

    }


void merge(int arr[], int start, int mid, int end){
    //numItems in left side
    int numLeft = mid - start + 1;
    //numItems in right side
    int numRight = end - mid;
    //create temp arrats to hold left and right sides
    int leftArr[numLeft];
    int rightArr[numRight];
    //populate both
    //remember their indices
    int i;
    int j;
    int k;
    for (i = 0; i < numLeft; i++){
        leftArr[i] = arr[start + i];
    }
    
    for (j = 0; j < numRight; j++){
        rightArr[j] = arr[mid + 1 + j];
    }
    i = 0;
    j = 0;
    //create new iterator var k for main arr[]
    k = start;
//populate main arr
    while(i < numLeft && j < numRight){
        if (leftArr[i] <= rightArr[j]){
            //set equal to arr for those indices
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < numLeft){
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    
    
    while (j < numRight){
        arr[k] = rightArr[j];
        j++;
        k++;
    }


}

/* merge sort
    Two function:
        1. the mergesort partition
        2. the merge function
*/

void mergeSort(int arr[], int start, int end){
    // base case - divide array until subarrays of size 1
    if (start < end){
        
    
    int mid = (start + end) / 2;
    //keep going until start == end
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    //call the merge function
    merge(arr, start, mid, end);
    }
}

/*quicksort
    take arr[] and pick a pivot element.
    1. Less than pivot goes to left
    2. greater than goes to right
    3. repeat this algorithm
*/
void swap(int arr[], int firstVal, int secondVal){
    int temp = arr[firstVal];
    arr[firstVal] = arr[secondVal];
    arr[secondVal] = temp;
}


void quickSort(int arr[], int start, int end){
    if (start < end){
        int pivot = arr[start];
        int wall = start + 1;
        for (int i = start + 1; i <= end; i++){
            if (arr[i] <= pivot){
                swap(arr, i, wall);
                wall++;
            }
        }
        swap(arr, start, wall - 1);
        quickSort(arr, start, wall - 1);
        quickSort(arr, wall, end);
    }
}


void printArray(int arr[], int numItems){
    for (int i = 0; i < numItems; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



///recursive binary search

int binarySearch(int arr[], int searchNum, int start, int end){
    int mid = (start + end) / 2;
   if(searchNum == arr[mid]) {
        return mid;
    } else if (searchNum < arr[mid]) {
        return binarySearch(arr, searchNum, start, mid);
    } else{
        return binarySearch(arr, searchNum, mid + 1, end);
    } 
 //   return mid;
}

int main(){

    int selectionArr[SIZE] = {12, 5, 17, 2, 4, 3, 21, 60};
    int insertionArr[SIZE] = {12, 5, 17, 2, 4, 3, 21, 60};
    int mergeSortArr[SIZE] = {12, 5, 17, 2, 4, 3, 21, 60};
    int quickSortArr[SIZE] = {12, 5, 17, 2, 4, 3, 21, 60};
cout << "selection sort array before and after" << '\n';
printArray(selectionArr, SIZE);
selectionSort(selectionArr, SIZE);
printArray(selectionArr, SIZE);


cout << "insertion sort array before and after" << '\n';
printArray(insertionArr, SIZE);
selectionSort(insertionArr, SIZE);
printArray(insertionArr, SIZE);


cout << "merge sort array before and after" << '\n';
printArray(mergeSortArr, SIZE);
mergeSort(mergeSortArr, 0, SIZE - 1);
printArray(mergeSortArr, SIZE);

cout << "quick sort array before and after" << '\n';
printArray(quickSortArr, SIZE);
quickSort(quickSortArr, 0, SIZE - 1);
printArray(quickSortArr, SIZE);

int x;

cin >> x;

int search = binarySearch(quickSortArr, x, 0, SIZE - 1);
cout << "found at index: " << search << endl;



    return 0;

}