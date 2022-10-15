/*
    Q: Print n to 1
    i/p: 5
    o/p: 5 4 3 2 1
*/


#include<iostream>

using namespace std;

void printNTo1(int n){
    if(n == 0)
        return;

    cout << n << " ";
    printNTo1(n - 1);
}

int main(){
    printNTo1(5);

    cout << endl;
    return 0;
}