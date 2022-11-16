/*
    Q: Remove Duplicates from Sorted Array
    i/p: 10 20 20 30 30 30 30
    o/p: 10 20 30 _ _ _ _
*/

#include<iostream>

using namespace std;

int removeDuplicatesFromSortedArray(int a[], int n){
    int index = 1;
    for (int i = 0; i < n - 1; ++i){
        if(a[i + 1] != a[i]){
            a[index] = a[i + 1];
            index++;
        }
    }

    return index;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    int size = removeDuplicatesFromSortedArray(arr, n);

    for (int i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    cout << "\nSize: " << size << endl;
    return 0;
}