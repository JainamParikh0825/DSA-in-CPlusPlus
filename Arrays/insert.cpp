/*
    Q:
    i/p:
    o/p:
*/


#include<iostream>

using namespace std;

int insert(int a[], int n, int x, int cap, int pos){
    if(n == cap) return n;
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; --i){
        a[i + 1] = a[i];
    }
    a[idx] = x;
    return n + 1;
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

    int position;
    cin >> position;

    int x;
    cin >> x;

    n = insert(arr, n, x, capacity, position);

    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}