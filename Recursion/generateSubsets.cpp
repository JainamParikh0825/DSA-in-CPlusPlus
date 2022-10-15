/*
    Q:
    i/p:
    o/p:
*/


#include<iostream>

using namespace std;

void subsets(string &s, string current, int index){
    if(index == s.size()){
        cout << current << ", ";
        return;
    }

    subsets(s, current, index + 1);
    subsets(s, current + s[index], index + 1);
}

int main(){
    string s = "abc";
    subsets(s, "", 0);
    return 0;
}