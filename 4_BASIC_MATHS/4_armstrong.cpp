#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<< "enter a number \n";
    cin >> n;
    int copy = n;
    int sum = 0;

    while (n > 0) {
        sum += pow( n%10 ,3);
        n/=10;
    }
    if (sum == copy) {
        cout << "The number is an Armstrong number." << endl;
    } else {
        cout << "The number is not an Armstrong number." << endl;
    }
    return 0;
}
