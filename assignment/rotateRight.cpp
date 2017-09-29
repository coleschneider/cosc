#include <iostream>
using namespace std;


void rotateRight(double v[], int numItems)
{
  int temp = v[numItems-1];
    if(numItems > 0)
    {
        v[numItems-1] = v[numItems-2];
        rotateRight(v, numItems-1); 
    }
    v[0] = temp;

}
