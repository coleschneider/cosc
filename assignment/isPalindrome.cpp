#include<iostream>
#include <string>
using namespace std;



bool isPalindrome(string str, int lower, int upper) {
if (lower >= upper)
{return true;}
if (str[lower] != str[upper])
{return false;} else {
return isPalindrome(str,++lower, --upper);   
}
}

int main(){
    string s;    
   cout<<"Enter a string to check if Palindrome: ";
   while (getline(cin, s)) {
    if (s.empty())
    break;
   
   bool b = isPalindrome(s, 0, s.length() - 1);
   if(b==true)
       cout<<"Palindrome"<<endl;
   else
       cout<<"Not a Palindrome"<<endl;
       
       cout<<"Enter a string to check if Palindrome: ";
       
   }  
}