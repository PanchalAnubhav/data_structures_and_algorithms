#include<bits/stdc++.h>
using namespace std;

void nextPermutation(){
    cout << "next permutation of string\n";
    string s = "abc";
    do{
        cout << s << "\n";
    } while(next_permutation(s.begin(), s.end()));
}

int main(){
    ios::sync_with_stdio(0);
    nextPermutation();
    return 0;
}