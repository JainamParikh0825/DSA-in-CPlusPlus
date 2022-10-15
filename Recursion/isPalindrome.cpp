/*
    Q: To check if the string is Palindrome or not.
    i/p: abbcbba
    o/p: true
*/


#include<iostream>

using namespace std;

bool isPalindrome(string &s, int start, int end){
    if(start >= end)
        return true;

    return (s[start] == s[end]) && (isPalindrome(s, start + 1, end - 1));
}

int main(){
    string s = "a";
    int size = s.size();
    cout << boolalpha << isPalindrome(s, 0, size - 1) << endl;
    return 0;
}