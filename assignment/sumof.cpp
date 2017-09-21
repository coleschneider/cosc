#include <iostream>
using namespace std;

/*Write the recursive function int numEven(const int v[], int numItems)
 that returns the number of even integers in v using recursion.
  Assume that array v has length numItems. */

  int numEven(const int v[], int numItems) {
    static int count = 0;
   
    if(numItems < 0) {
       return -1;
   } else if (v[numItems - 1] % 2 == 0) {
  
    return numEven(v, numItems - 1) + v[numItems -1];   
} else {
    return numEven(v, numItems - 1);
   
}
}

   

  int main(int argc, char const * argv[]) {
    int x[6] = {3, 8, 1, 2, 5, 4};
    int val = numEven(x, 6);
    cout<<val<<endl;
    return 0;
  }

