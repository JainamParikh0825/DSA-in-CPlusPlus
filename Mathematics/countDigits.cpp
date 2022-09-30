/*
    Q: Count the number of digits in a number
    i/p: 9235
    o/p: 4
*/

#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    int count = 0;

    while(x > 0){
        x /= 10;
        count++;
    }

    cout << count << endl;
    return 0;
}