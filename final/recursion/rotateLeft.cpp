#include <iostream>
using namespace std;

/*
write the recursive function 
void rotateLeft(double v[], int numItems)
that rotates each element of v 
(other than the first element) one spot to 
the left and rotates the first element of v to the right

{5, 10, 15, 20, 25}
{10, 5, 15, 20, 25}

*/

void swap(double arr[], int a){
    int temp = arr[a];
    arr[a] = arr[a -1];
    arr[a - 1] = temp;
}


void rotateRight(double arr[], int numItems){
    //base case
    if(numItems < 1 ){
        return;
    }
    swap(arr, numItems);
    rotateRight(arr, arr[(numItems - 1) - 1]);
}

int main(){
    
double x[] = {1, 2, 3, 4, 5};

for(int i = 0; i < 5; i++){
    cout << x[i] << " ";
}
 rotateRight(x, 4);

cout << endl;


for(int i = 0; i < 5; i++){
    cout << x[i] << " ";
}
    return 0;
}