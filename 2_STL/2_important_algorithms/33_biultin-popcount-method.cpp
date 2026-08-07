#include<bits/stdc++.h>
using namespace std;

void solve_for_int() {
    int n;
    cin >> n;
    cout << __builtin_popcount(n) << endl; 
    // Counts the number of set bits (1s) in the binary representation of n
}

void solve_for_long() {
    long n;
    cin >> n;
    cout << __builtin_popcountl(n) << endl; 
    // Counts the number of set bits (1s) in the binary representation of n
}

void solve_for_long_long() {
    long long n;
    cin >> n;
    cout << __builtin_popcountll(n) << endl; 
    // Counts the number of set bits (1s) in the binary representation of n
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve_for_int();
        solve_for_long();
        solve_for_long_long();
    }
    return 0;
}