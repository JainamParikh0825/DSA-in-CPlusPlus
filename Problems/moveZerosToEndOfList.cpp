#include <iostream>
#include <vector>

using namespace std;

/*
    Link: https://binarysearch.com/problems/In-Place-Move-Zeros-to-End-of-List
    Topic: Arrays
    Time Complexity: O(N)
    Space Complexity: O(1)
*/

vector<int> moveZerosToEndOfList(vector<int>& nums) {
    int size = nums.size();
    int i = 0;

    for(int j = 0; j < size; ++j){
        if(nums[i] != 0 && nums[j] != 0)
            ++i;
        else if(nums[i] == 0 && nums[j] != 0){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            ++i;
        }
    }

    return nums;
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

    for(int value : moveZerosToEndOfList(arr)){
        cout << value << " ";
    }
    cout << endl;

    return 0;
}