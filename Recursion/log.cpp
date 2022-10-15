/*
    Q: Given a number, print its log to the base 2
    i/p: 16
    o/p: 4
*/


#include<iostream>

using namespace std;

int log(int n){
    if(n == 1)
        return 0;
    return 1 + log(n / 2);
}

int main(){
    cout << log(32) << endl;
    return 0;
}