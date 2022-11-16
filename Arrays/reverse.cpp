/*
    Q: Reverse an array in-position
    i/p: 10 5 7 30
    o/p: 30 7 5 10
*/

#include<iostream>

using namespace std;

void reverse(int a[], int n){
    int i = 0, j = n - 1;
    while(i < j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        ++i;
        --j;
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    reverse(arr, n);

    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}