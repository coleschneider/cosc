#include <iostream>
using namespace std;


 int sumOfDigits(int num) {
     if (num/10 == 0) {
         return num;
     } else {
         return num % 10 + sumOfDigits(num/10);
     }
 }

int main(int argc, char const * argv[]) {
int result = sumOfDigits(392);

cout<<result<<endl;
}    