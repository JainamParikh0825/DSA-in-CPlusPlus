#include <iostream>
#include <vector>

using namespace std;

/*
    Link: https://binarysearch.com/problems/Lexicographically-Largest-Mountain-List
    Topic: Arrays
    Time Complexity: O(N)
    Space Complexity: O(1)
*/

vector<int> lexicographicallyLargestMountainList(int& n, int& upper, int& lower) {
    int diff = upper - lower;

    vector<int> result;
    if(diff >= n / 2){
        int currentVal = upper;
        int i = n - 1;
        while(currentVal >= lower && i > 0){
            result.push_back(currentVal);
            --currentVal;
            --i;
        }

        int size = result.size();

        currentVal = upper - 1;
        while(currentVal >= lower && size < n){
            result.insert(result.begin(), currentVal);
            --currentVal;
            ++size;
        }
    }

    return result;
}

int main(){
    int n, upper, lower;
    cin >> n >> lower >> upper;

    for(int item : lexicographicallyLargestMountainList(n, upper, lower)){
        cout << item << " ";
    }
    cout << endl;

    return 0;
}