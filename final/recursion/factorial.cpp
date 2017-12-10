#include <iostream>
using namespace std;


int factorial(int num){
    if(num < 2){
        return num;
    }
    return num * factorial(num - 1);
}



int main(){
    
    int x = factorial(5);

    cout << x << endl;
    
    
    return 0;
}