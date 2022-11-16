/*
    Q:
    i/p:
    o/p:
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