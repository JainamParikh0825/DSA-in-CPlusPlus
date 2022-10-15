/*
    Q: Given n, print its binary representation
    i/p: 7
    o/p: 111
*/


#include<iostream>

using namespace std;

void decimalToBinary(int n){
    if(n == 0)
        return;
    decimalToBinary(n / 2);
    cout << n % 2;
}

int main(){
    decimalToBinary(7);

    cout << endl;
    return 0;
}