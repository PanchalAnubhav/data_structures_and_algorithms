#include<bits/stdc++.h>
using namespace std;

void DoSomething( int &n){    // pass by reference
    cout << n <<endl;
    n+=5;
    cout << n <<endl;
    n+=5;
    cout << n <<endl;
}

int main(){
    int num = 109;
    DoSomething(num);
    cout <<num << endl;
    return 0;
}