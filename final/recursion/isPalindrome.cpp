#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(string word, int lower, int upper){
   if (lower >= upper){
       return true;
   }
    if(word[lower] != word[upper]){
        return false;
    } else {
        return isPalindrome(word, lower + 1, upper - 1);
    }
 

}



int main(){
    
string isWord = "racecar";

if (isPalindrome(isWord, 0, isWord.length() - 1)){
    cout << "is palindrome";

} else {
    cout << "not a palindrome";
}

    
    return 0;
}