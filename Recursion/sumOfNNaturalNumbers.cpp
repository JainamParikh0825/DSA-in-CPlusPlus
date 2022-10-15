/*
    Q:
    i/p:
    o/p:
*/


#include<iostream>

using namespace std;

int sumOfNNaturalNumbers(int n){
    if(n == 0)
        return 0;
    return n + sumOfNNaturalNumbers(n - 1);
}

int main(){
    int n = 4;
    cout << sumOfNNaturalNumbers(n) << endl;
    return 0;
}