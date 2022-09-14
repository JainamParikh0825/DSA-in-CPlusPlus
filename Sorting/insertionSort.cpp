#include<iostream>
#include<vector>

using namespace std;

/*
    - Here, we take a key from second element (index 1) and check
    whether the previous value to it is larger or not. If it is larger
    then we move the previous element to the key's position.
    - We then keep on checking the key with the previous position until
    we reach to the end of the array or the previous element is smaller
    then the key.
    - If any of them is false, then we come out of the array.
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

    for (int i = 1; i < n; ++i){
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] >= key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int value : arr){
        cout << value << " ";
    }
    cout << endl;

    return 0;
}