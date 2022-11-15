/*
    Q: Largest Element in the Array
    i/p: 
        5
        10 5 20 8 3
    o/p: 20
*/

#include<iostream>
#include<climits>

using namespace std;

int largestElement(int a[], int n){
    int largest = INT_MIN;

    for (int i = 0; i < n; ++i){
        if(a[i] > largest){
            largest = a[i];
        }
    }

    return largest;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    int result = largestElement(arr, n);
    cout << result << endl;
    return 0;
}