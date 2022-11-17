/*
    Q: Left Rotate Array By one position
    i/p: 1 2 3 4 5
    o/p: 2 3 4 5 1
*/


#include<iostream>

using namespace std;

void leftRotateByOne(int a[], int n){
    int firstElement = a[0];
    for (int i = 1; i < n; ++i){
        a[i - 1] = a[i];
    }
    a[n - 1] = firstElement;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    leftRotateByOne(arr, n);

    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
        return 0;
}