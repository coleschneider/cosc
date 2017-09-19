#include <iostream>
using namespace std;


//3, 8, 1, 2, 5, 4}     DIVIDE AND CONQUER - 
int sum(int v[], int numItems) {
    if (numItems == 0) { //base case
        return 0;
    } else { // recursive case
        return sum(v, numItems - 1) + v[numItems - 1];
    }

}

int main(int argc, char const * argv[]) {
int x[6] = {3, 8, 1, 2, 5, 4};
int total = sum(x, 6);
cout<<"The sum of the array elements is " << total << endl;

return 0;

}    