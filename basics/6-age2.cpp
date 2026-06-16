#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x  < 18) {
        cout << "not eligible ";
    }
    else if (x <= 54){
        cout << "eligible";

    }
    else if (x <= 57){
        cout << "eligible, but retirement soon !! ";
    }
    else {
    cout << "retirement lele !!";
    }
    return 0;
}