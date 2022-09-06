#include<iostream>

using namespace std;

int main(){
    // initialization of an array
    int a[] = {1, 2, 3, 4, 5};

    // display an array
    for (int i = 0; i < 5; ++i){
        cout << a[i] << " ";
    }
    cout << endl;

    // declaration of an array (when we want to take user input)
    int b[5];

    // taking array elements from user input
    for (int i = 0; i < 5; ++i){
        cin >> b[i];
    }

    for (int i = 0; i < 5; ++i){
        cout << b[i] << " ";
    }
    cout << endl;
    
    return 0;
}