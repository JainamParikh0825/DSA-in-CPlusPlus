#include<iostream>
#include<vector>

using namespace std;

/*
    - Here we have an approach of selecting two elements at a
    time and if the first element is larger than the second element
    then we swap.
    - After this we move both our pointers and do the same process
    again.
    - By this, at the end of the one pass, we will be able to make our
    largest number in the end of the array.

    Example: [4, 5, 3, 2, 1]
    1. 1st Pass
    - 4, 5, 3, 2, 1
    - 4, 3, 5, 2, 1
    - 4, 3, 2, 5, 1
    - 4, 3, 2, 1, 5
*/

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for (int i = 0; i < n - 1; ++i){
        for (int j = 0; j < n - 1 - i; ++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int value : arr){
        cout << value << " ";
    }
    cout << endl;

    return 0;
}