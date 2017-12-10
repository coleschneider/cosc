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


void rotateLeft(double v[], int numItems){
    //base case
    if(numItems == 0){
        return v[0] = v[1];
    }
    return v[numItems] = v[numItems - 1];
}

int main(){
    
    
    
    
    return 0;
}