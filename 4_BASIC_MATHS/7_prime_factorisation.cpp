#include<bits/stdc++.h>
using namespace std;

int brute_force(){
    int n;
    cout << "enter a number \n";
    cin >> n;
    for(int i=2; i<=n; i++){
        while(n%i==0){
            cout << i << " ";
            n = n/i;
        }
    }
    cout << "\n";
    return 0;
}

int first_optimisation(){
    int n;
    cout << "enter a number \n";
    cin >> n;

    for (int i = 1; i*i<=n; i++){
        if (n%i == 0 ){
            if (i != n/i){
                cout << i << " " << n/i << " ";
            }
            else{
                cout << i << " ";
            }

        }
    }
    cout << "\n";   
    return 0;
}


int optimised(){
    int n;
    cout << "enter a number \n";
    cin >> n;

    for (int i = 2; i*i<=n; i++){
        while(n%i==0){
            cout << i << " ";
            n = n/i;
        }
    }
    if (n>1){
        cout << n;
    }
    cout << "\n";
    return 0;
}

int main(){
    brute_force();
    first_optimisation();
    optimised();
    return 0;
}