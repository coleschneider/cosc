#include <iostream>
using namespace std;


	
int reverseNum(int n) {
    static int temp, sum;

    if(n>0) {
        temp = n % 10;
        sum = sum * 10 + temp;
        reverseNum(n/10);
    } else {
        return sum;
    }
    return sum;
}

int main() {
    int val;
    cout << "Enter a number to reverse: "<<endl;
    cin >> val;
  int reversed = reverseNum(val);
cout << reversed<< endl;
return 0;
}