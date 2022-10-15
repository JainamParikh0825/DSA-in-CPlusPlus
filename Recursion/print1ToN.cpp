/*
    Q: Print 1 to n
    i/p: 5
    o/p: 1 2 3 4 5
*/


#include<iostream>

using namespace std;

void printNTo1(int n){
    if(n == 0)
        return;

    printNTo1(n - 1);
    cout << n << " ";
}

int main(){
    printNTo1(5);

    cout << endl;
    return 0;
}