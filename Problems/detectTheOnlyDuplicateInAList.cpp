#include <iostream>
#include <vector>

using namespace std;

/*
    Link: https://binarysearch.com/problems/Detect-the-Only-Duplicate-in-a-List
    Topic: Array, Sum Of N Integers
    Time Complexity: O(N)
    Space Complexity: O(1)
*/

int detectOnlyDuplicateInAList(vector<int>& nums) {
    int size = nums.size();

    int sumOfNIntegers = ((size) * (size - 1)) / 2;
    int sum = 0;

    for(int value : nums){
        sum += value;
    }

    return sum - sumOfNIntegers;
}

int main(){
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << detectOnlyDuplicateInAList(v) << endl;
    return 0;
}