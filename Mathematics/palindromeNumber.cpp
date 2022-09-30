/*
    Q: To check whether the number is palindrome or not
    i/p: 78987
    o/p: Yes
*/


#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int temp = n;
    int result = 0;

    while(temp > 0){
        int x = temp % 10;
        result = result * 10 + x;
        temp /= 10;
    }

    result == n ? cout << "Yes" : cout << "No";
    cout << endl;

    return 0;
}