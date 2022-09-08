#include<iostream>

using namespace std;

/*
    1. Arrays should be sorted
    2. Time Complexity: logn to the base 2
    3. Space Complexity: O(1)
*/

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int low = 0, high = n - 1;
    int found = false;

    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            found = true;
            break;
        } else if(arr[mid] > target){
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }

    if(found)
        cout << "Element found!" << endl;
    else
        cout << "Element not found!" << endl;
    return 0;
}