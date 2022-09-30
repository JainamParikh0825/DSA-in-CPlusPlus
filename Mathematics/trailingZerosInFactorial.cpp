/*
    Q: Find the trailing zeros in factorial number
    i/p: 100
    o/p: 24
*/


#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int step = 5;
    int result = 0;

    while(n / step > 0){
        result += n / step;
        step *= 5;
    }

    cout << result << endl;

    return 0;
}