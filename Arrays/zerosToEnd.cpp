/*
    Q: Move Zeros to End
    i/p: 8 5 0 10 0 20
    o/p: 8 5 10 20 0 0
*/

#include<iostream>

using namespace std;

void moveZerosToEnd(int a[], int n){
    int index = -1;
    for (int i = 0; i < n; ++i){
        if(a[i] != 0 && index != -1){
            a[index] = a[i];
            a[i] = 0;
            ++index;
        } else if(a[i] == 0 && index == -1) index = i;
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    moveZerosToEnd(arr, n);

    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}