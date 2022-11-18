/*
    Q: Maximum Difference Problem with Order
    i/p: 2 3 10 6 4 8 1
    o/p: 8
*/

#include<iostream>
#include<climits>

using namespace std;

int maximumDifference(int a[], int n){
    int res = INT_MIN;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(a[i] - a[j] > res && j < i){
                res = a[i] - a[j];
            } else if(a[j] - a[i] > res && j > i){
                res = a[j] - a[i];
            }
        }
    }

    return res;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    int result = maximumDifference(arr, n);
    cout << result << endl;
    return 0;
}