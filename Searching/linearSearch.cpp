#include<iostream>

using namespace std;

/*
    Time Complexity: O(N)
    Space Complexity: O(1)
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

    bool flag = false;
    for (int i = 0; i < n; ++i){
        if(arr[i] == target){
            flag = true;
            break;
        }
    }

    if(flag)
        cout << "Element exist!" << endl;
    else
        cout << "Element does not exist!" << endl;
    return 0;
}