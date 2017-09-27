#include <iostream>
using namespace std;

/*255
num = 392

*/
 int sumOfDigits(int num) {
     if (num/10 == 0) { //base case
         return num;
     } else {
         return num % 10 + sumOfDigits(num/10); //recursive case
     }
 }

 // 2 + 9 + 3

 // call1 = return 2 + resultOfCall2

 // call2 = return 9 + resultOfCall3

 // call 3 = return 3

int main(int argc, char const * argv[]) {
int result = sumOfDigits(392);

cout<<result<<endl;
}    