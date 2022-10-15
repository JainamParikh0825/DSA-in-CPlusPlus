/*
    Q: Print 1 to n
    i/p: 5
    o/p: 1 2 3 4 5
*/


#include<iostream>

using namespace std;

void print1ToN(int n){
    if(n == 0)
        return;

    print1ToN(n - 1);
    cout << n << " ";
}

int main(){
    print1ToN(5);

    cout << endl;
    return 0;
}