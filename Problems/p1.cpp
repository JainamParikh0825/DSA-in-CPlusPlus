#include<iostream>
#include<vector>

using namespace std;

/*
    Link: https://binarysearch.com/problems/Range-Query-on-a-List
    Topic: Array, Prefix Sum
    Prefix Sum:
        - Given an array arr[] of size n, its prefix sum array is another array prefixSum[] of the same size, such that the value of prefixSum[i] is arr[0] + arr[1] + arr[2] … arr[i].
        - Example
        Input  : arr[] = {10, 20, 10, 5, 15}
        Output : prefixSum[] = {10, 30, 40, 45, 60}

    Time Complexity: O(N)
    Space Complexity: O(N)
*/

int main(){
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> prefixSum;
    prefixSum.push_back(v[0]);
    for (int i = 1; i < n; ++i){
        prefixSum.push_back(v[i] + prefixSum[i - 1]);
    }

    int lowerRange, upperRange;
    cin >> lowerRange >> upperRange;

    if(lowerRange == 0){
        cout << prefixSum[upperRange - 1] << endl;
        return 0;
    }

    cout << prefixSum[upperRange - 1] - prefixSum[lowerRange - 1] << endl;

    return 0;
}