#include<iostream>
#include<vector>

using namespace std;

/*
    - Here we use an approach where we move the smallest element
    in the beginning.
    - We put our first pointer at the beginning and check with
    rest of the elements.
    - If out of two elements, if the first element is
    larger than the second element, then we swap.
    - By this, we will be able to bring the smallest element in the
    beginning.
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
        for (int j = i + 1; j < n; ++j){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int value : arr){
        cout << value << " ";
    }
    cout << endl;

    return 0;
}