/*
    Q: Leaders in an Array Problem
    i/p:
        7
        7 10 4 3 6 5 2
    o/p: 10 6 5 2
*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> leaders(vector<int> &a){
    int size = a.size();

    vector<int> res;

    // approach 1, TC: n^2, SC: 1
    /*
    bool flag = true;
    for (int i = 0; i < size - 1; ++i){
        flag = true;
        for (int j = i + 1; j < size; ++j){
            if(a[j] >= a[i]) flag = false;
        }
        if(flag) res.push_back(a[i]);
    }
    res.push_back(a[size - 1]);
    */

    // approach 2, TC: n, SC: 1
    int currentMax = a[size - 1];
    res.push_back(a[size - 1]);

    for (int i = size - 2; i >= 0; --i){
        if(a[i] > currentMax){
            res.push_back(a[i]);
            currentMax = a[i];
        }
    }
        return res;
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

    vector<int> result = leaders(arr);
    for(int value: result){
        cout << value << " ";
    }
    return 0;
}