#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin >> m;
    if (m > 90){
        cout << "honours";
    }
    else if (m > 75 && m <=90){
        cout<< "okay !! ";
    }
    else {
        cout << "g...fail";
    }
}