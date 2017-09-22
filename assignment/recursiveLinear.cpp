#include <iostream>
using namespace std;

int linearSearch(const double v[], double searchNum, int numItems)
{
    if (numItems < 0 ) //input is a negative number
    {
          return -1;
    }
    if(searchNum == v[numItems-1]) //if value searched is equal array's value
    { //base case
           return numItems - 1;
    } else {
    return linearSearch(v, searchNum, numItems-1); 
    }
}

int main(int argc, char const * argv[]) {
    double x[6] = {3, 8, 1, 2, 5, 4};
    
    cout<<"search array for a value: "<<endl;

int y;
cin >> y;

int indexedAt = linearSearch(x, y, 6);
if (indexedAt == -1) { //what to do if negative number
    cout<<"value not found in array";
}
cout<<indexedAt<<endl;

return 0;
}    