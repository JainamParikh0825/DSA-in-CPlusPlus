/*
    Q: A basic program to understand recursion
    i/p:
    o/p:
*/


#include<iostream>

using namespace std;

void fun(int n){
    if(n == 0)
        return;

    cout << "Before returning: " << n << endl;
    fun(n - 1);
    cout << "After returning: " << n << endl;
}

int main(){
    fun(3);
    return 0;
}