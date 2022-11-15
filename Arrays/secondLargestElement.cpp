/*
    Q: Second Largest Element Index
    i/p: 
        4
        10 5 8 20
    o/p: 0
*/

#include<iostream>

using namespace std;

int secondLargest(int a[], int n){
    int largest = -1, secondL = -1, secondLargestIndex = -1, largestIndex = -1;
    for (int i = 0; i < n; ++i){
        if(a[i] > largest){
            secondL = largest;
            largest = a[i];
            secondLargestIndex = largestIndex;
            largestIndex = i;
        }

        if(a[i] > secondL && a[i] < largest){
            secondL = a[i];
            secondLargestIndex = i;
        }
    }

    return secondLargestIndex;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    int result = secondLargest(arr, n);
    cout << result << endl;

    return 0;
}