#include<bits/stdc++.h>
using namespace std;

int modulo_method(int n, int digit){
    int count = 0;
    while(n>0){
        digit = n% 10;
        count++;
        n = n / 10;
    }
    return count;
}

int log_method(int n){
    return floor( log10(n) + 1 );
}

int main(){
    int n,digit,count = 0;
    cout << "Enter a number: \n";
    cin >> n;

    count = modulo_method(n, digit);
    cout << "the number of digits are " << count << endl;

    count = log_method(n);
    cout << "the number of digits are " << count << endl;
}