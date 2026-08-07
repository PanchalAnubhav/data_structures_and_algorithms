#include<bits/stdc++.h>
using namespace std;    

void maxElement(){
    cout << "max element of array\n";
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << *max_element(arr, arr+n) << "\n";
}

void minElement(){
    cout << "min element of array\n";
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << *min_element(arr, arr+n) << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    maxElement();
    minElement();
    return 0;
}

