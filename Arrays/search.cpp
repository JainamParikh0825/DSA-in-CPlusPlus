/*
    Q: Search Operation in Array
    i/p:
        20 5 7 25 (Array Inputs)
        5 (Search Item)
    o/p: 1
*/

#include<iostream>

using namespace std;

int search(int arr[], int n, int x){
    for (int i = 0; i < n; ++i){
        if(arr[i] == x)
            return i;
    }

    return -1;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int result = search(arr, n, x);
    cout << result << endl;
    return 0;
}