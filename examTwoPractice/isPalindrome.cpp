#include <iostream>
using namespace std;

bool isPalindrome(string str, int lower, int upper) {
    if (lower >= upper) {
        return true;
    } else {
        return str[lower] == str[upper] && isPalindrome(str, lower + 1, upper - 1);
    }
}

int main() {
    string word;
    cin >> word;

    if(isPalindrome(word, 0, word.length() - 1)) {
        cout << "Word is a Palindrome" << endl;
    } else {
        return cout << "not a palindrome" << endl;
    }

return 0;
}