#include<iostream>

using namespace std;

int main(){
    // initialization
    int arr[2][2] = {{1, 2}, {3, 4}};

    // display the array
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // taking array elements as input
    int brr[3][3];
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            cin >> brr[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}