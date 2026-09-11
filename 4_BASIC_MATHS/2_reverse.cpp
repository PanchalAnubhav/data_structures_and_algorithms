#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int digit,rev = 0;
    while(n>0){
        digit = n% 10;
        rev = rev*10 +digit;
        n = n/10;
    }
    return rev;
}

int main(){
    int n;
    cout << "enter the number \n";
    cin >> n;
    cout << "the reverse of the number is " << reverse(n) << endl;
    return 0;
}