/*
    Q: Check if Array is sorted or not
    i/p: 8 12 15
    o/p: yes
*/

#include<iostream>

using namespace std;

string checkArraySort(int a[], int n){
    for (int i = 0; i < n - 1; ++i){
        if(a[i] > a[i+1]) return "No";
    }
    return "Yes";
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    string result = checkArraySort(arr, n);
    cout << result << endl;
    return 0;
}