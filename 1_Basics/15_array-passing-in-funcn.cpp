#include<bits/stdc++.h>
using namespace std;

void DoSomething(int a[], int n){
    a[0]+= 100;
    cout << "value inside fn: " << a[0] << endl;
}

int main(){
    int n = 5;
    int a[n];
    for (int i = 0 ; i<n ;  i++){
        cin >> a[i];
    }
    DoSomething( a, n);
    cout << "value inside main: " << a[0] << endl;
    return 0;
}