/*
    Q: Left Rotate Array by D
    i/p:
        1 2 3 4 5
        2
    o/p: 3 4 5 1 2
*/

#include<iostream>

using namespace std;

void leftRotateByD(int a[], int n, int d){
    d = d % n;

    // approach 1, TC: n*d, SC: 1
    /*
    while(d > 0){
        int firstElement = a[0];
        for (int i = 1; i < n; ++i){
            a[i - 1] = a[i];
        }
        a[n - 1] = firstElement;
        --d;
    }
    */

    // approach 2, TC: n, SC: d
    /*
    int b[d];
    for (int i = 0; i < d; ++i){
        b[i] = a[i];
    }

    int j = 0;
    for (int i = d; i < n; ++i){
        a[j] = a[i];
        j++;
    }

    int l = 0;
    for (int i = j; i < n; ++i){
        a[i] = b[l];
        l++;
    }
    */

   // approach 3, TC: n, SC: 1
    for (int i = 0; i < d / 2; ++i){
        swap(a[i], a[d - i - 1]);
    }

    int j = 1;
    for (int i = d; i <= n / 2; ++i){
        swap(a[i], a[n - j]);
        j++;
    }

    for (int i = 0; i < n / 2; ++i){
        swap(a[i], a[n - i - 1]);
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    int d;
    cin >> d;

    leftRotateByD(arr, n, d);

    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}