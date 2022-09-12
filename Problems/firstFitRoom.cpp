#include <iostream>
#include <vector>

using namespace std;

/*
    Link: https://binarysearch.com/problems/First-Fit-Room
    Topic: Arrays
    Time Complexity: O(N)
    Space Complexity: O(1)
*/

int firstFitRoom(vector<int>& rooms, int target) {
    int size = rooms.size();
    int result = -1;

    for(int i = 0; i < size; ++i){
        if(rooms[i] >= target){
            result = rooms[i];
            break;
        }
    }

    return result;
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

    int target;
    cin >> target;

    cout << firstFitRoom(arr, target) << endl;

    return 0;
}