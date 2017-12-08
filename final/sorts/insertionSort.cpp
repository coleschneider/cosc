#include <iostream>
using namespace std;


//insertion sort

/*]
1. Mark first element as sorted and the rest of array as unsorted.
2. 

30 80 10 70 40 60 50 20
30 80 \\10 70 40 60 50 20
10 30 \\80 70 40 60 50 20
1
*/
//SET ARRAY SIZE
const int SIZE = 8;
//iterave insertion
void insertionSort(int v[], int numItems){
    for (int i = 0; i < numItems; i++){
       int temp = v[i];
       int j = i;
       while (j >= 1 && temp < v[j-1]){
           v[j] = v[j - 1];
           j--;
       }
       v[j] = temp;
    }

}



void recursiveInsertionSort(int v[], int numItems){
    //base case - stop when j = 1
    if (j <= 1){
        return;
    }
    //sort the first n-1 elements
    recursiveInsertionSort(v, j-1);
}




int main(){
    int x[SIZE] = {30, 60, 10, 50, 80, 20, 70, 40};
  for (int i = 0; i < SIZE; i++){
      cout << x[i] << " ";
  }
  cout << endl;
  
insertionSort(x, SIZE);
  for (int i = 0; i < SIZE; i++){
      cout << x[i] << " ";
  }
  
    cout <<endl;
    return 0;
}