/*
    Array unsorted          Array sorted
2 4 1 6 8 5 3 7     =>   1 2 3 4 5 6 7
1.Find middle
                Array
            2 4 1 6 8 5 3 7
                 /  \
                /    \
            Left:     Right:
          1 2 4 6     3 5 7 8
2. Compare smallest element in left to the smallest in right right. In this
    case, the it would be 1 and 3
        function header: merge(leftArray[], rightArray[], arr[])
3. Create Three variables, and initialise them to 0 to represent the smallest element's position
    in left, smallest element position in right, and the position of 
    the element to be filled in Array
4. Create a while loop. while (leftIndex < numLeft && rightIndex < numRight)
    4a. inside the loop make a conditional that compares
            leftArray[leftIndex] <= rightArray[rightIndex]
    4b. If true, then Array[index] = leftArray[leftIndex]
        increment leftIndex BUT NOT RIGHT to check the next values so that:
        i = i + 1 and index = index + 1
    4c. If the condition is false, then Array[index] = rightArray[rightIndex]
        increment
        rightIndex = rightIndex + 1 and index = index + 1
    4d. Since index = index + 1 in both scenarios, can bring out into scope of while loop
5. Checindex leftIndex and rightIndex individually to find if some elements havent been inserted
    Meaning, leftIndex has looped all the way through and rightIndex has 7 8 left over
    while (leftIndex < left) {
        Array[index] = leftArray[leftIndex]
        increment the index of left array and index
    }
6. Create the same while loop but for rightIndex

RECURSIVE - 

What is self similar? breaking down the array into subarrays
                Array                                       Array                    
            2 4 1 6 8 5 3 7                             2 4 1 6 8 5 3 7
                /   \                                       /     \
               /     \           Merge:                    /       \
         Left:     Right:        <==>                    Left:      Right:                   
        2 4 1 6     8 5 3 7                              2 4 1 6    8 5 3 7
        /  \         /   \                                /  \        /   \
     2 4   1 6      8 5   3 7                           2 4  1 6    5 8    3 7
     / \    / \     / \    / \                          / \   / \    / \    / \
    2  4    1  6   8  5   3   7                        2  4   1  6   8  5   3   7                             
Once the list has been broken down into individuals, THEN MERGE
*/

#include <iostream>
using namespace std;

const int SIZE = 8;

void merge(int array[], int left, int mid, int right){
    int i, j, k;

    int leftNums = mid - left + 1;
    int rightNums = right - mid;

    //create two temp arrays and populate them
    int leftArray[leftNums];
    int rightArray[rightNums];
for (i = 0; i < leftNums; i++){
    leftArray[i] = array[i + 1];
}
for (j = 0; j < rightNums; j++){
    rightArray[j] = array[mid + 1 + j];
    }

    i = 0;
    j = 0
    k = left;
    while (i < leftNums && j < rightNums){
        if(leftArray[leftNums] <= rightArray[rightNums]) {
            array[k] = leftArray[i];
            i++;
        } else {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while(i < leftNums){
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while(j< rightNums){
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int left, int right){
    if (left < right){
        return;
    } else {
        int mid = (left + right) / 2;
        mergesort(array, left, mid);
        mergesort(array, mid + 1, right);
        merge(array, left, mid, right);

    }
}



int main(){
    
    
    
    return 0;
}

