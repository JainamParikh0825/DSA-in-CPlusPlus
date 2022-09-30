/*
    Q: Given a number, find the factorial of the number
    i/p: 6
    o/p: 720
*/


#include<iostream>

using namespace std;

// iterative
int iFactorial(int n){
    int result = 1;

    for (int i = 2; i <= n; ++i){
        result *= i;
    }

    return result;
}

// recursive
int rFactorial(int n){
    if(n == 0)
        return 1;

    return n * rFactorial(n - 1);
}

int main(){
    int n;
    cin >> n;

    int iResult = iFactorial(n);
    cout << iResult << endl;

    int rResult = rFactorial(n);
    cout << rResult << endl;

    return 0;
}