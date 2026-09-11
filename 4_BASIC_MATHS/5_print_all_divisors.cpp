#include<bits/stdc++.h>
using namespace std;    

int normal_method(){
    int n;
    cout << "enter a number \n";
    cin >> n;
    cout << "the divisors of the number are: \n";
    for(int i=1; i<=n/2 + 1 ; i++){
        if(n%i==0){
            cout << i << endl;
        }
    }
    cout << n << endl;
    return 0;
}

int optimized_method(){
    int n;
    cout << "enter a number \n";
    cin >> n;
    cout << "the divisors of the number are: \n";
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            cout << i << endl;
            if(i != n/i){
                cout << n/i << endl;
            }
        }
    }
    return 0;
}

int main(){
    normal_method();
    optimized_method();
    return 0;
}