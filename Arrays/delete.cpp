/*
    Q: Delete Operation in Array
    i/p:
    o/p:
*/


#include<iostream>

using namespace std;

int del(int a[], int n, int cap, int x){
    int i;
    for (i = 0; i < n; ++i){
        if(a[i] == x) break;
    }

    if(i == n) return n;
    for (int j = i; j < n - 1; j++){
        a[j] = a[j + 1];
    }

    return (n - 1);
}

int main(){
    int capacity;
    cin >> capacity;

    int n;
    cin >> n;

    int arr[capacity];

    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    int x;
    cin >> x;

    n = del(arr, n, capacity, x);
    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}