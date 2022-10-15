/*
    Q: Sum of Digits using Recursion
    i/p: 253
    o/p: 10
    Explanation: 2 + 5 + 3 = 10
*/


#include<iostream>

using namespace std;

int sumOfDigits(int n){
    if(n == 0)
        return 0;

    int r = n % 10;
    return r + sumOfDigits(n / 10);
}

int main(){
    int n = 10;
    cout << sumOfDigits(n) << endl;

    return 0;
}