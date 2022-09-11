#include <iostream>
#include <vector>

using namespace std;

/*
    Link: https://binarysearch.com/problems/K-Prefix
    Topic: Arrays
    Time Complexity: O(N)
    Space Complexity: O(1)
*/

int kPrefix(vector<int>& nums, int k) {
    int i = -1;
    int size = nums.size();

    int sum = 0;
    for(int j = 0; j < size; ++j){
        sum += nums[j];
        if(sum <= k){
            i = j;
        }
    }

    return i;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int k;
    cin >> k;

    cout << kPrefix(arr, k) << endl;

    return 0;
}