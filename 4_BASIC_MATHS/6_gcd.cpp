#include<bits/stdc++.h>
using namespace std;

int brute_force(){
    int a, b;
    cout << "enter two numbers \n";
    cin >> a >> b;
    int ans = 1;
    for(int i=2; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            ans = i;
        }
    }
    cout << "the gcd of the two numbers is: " << ans << endl;
    return 0;
}

int optimised_brute_force_2(){
    int a, b;
    cout << "enter two numbers \n";
    cin >> a >> b;
    int ans = 1;
    for(int i = min(a,b) ; i>=2; i--){
        if(a%i==0 && b%i==0){
            ans = i;
            break;
        }
    }       
    cout << "the gcd of the two numbers is: " << ans << endl;
    return 0;
}


int optimised_euclidean(){
    int a, b;
    cout << "enter two numbers \n";
    cin >> a >> b;
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    if (a ==0){
        cout << "the gcd of the two numbers is: " << b << endl;
    }
    else{
        cout << "the gcd of the two numbers is: " << a << endl;
    }
    return 0;
}


int main(){
    brute_force();
    optimised_brute_force_2();
    optimised_euclidean();
    return 0;
}