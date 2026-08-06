#include<bits/stdc++.h>
using namespace std;

void Using_for_Loop(){
    vector<int> v(5,100);
    for (int i = 0 ; i < v.size() ; i++ ) {
        cout << v[i] << endl;
    }
}

void Direct_calling(){
    vector<int> v(5,100);
    cout << v.at(0) << endl;
}

void using_iterator(){
    vector<int> v(5,100);
    vector<int> ::iterator it = v.begin();
    for ( vector<int> :: iterator it = v.begin() ; it!= v.end() ;  it++ ) {
        cout << *it << endl;
    }
}

void using_auto_1(){
   vector<int> v = {10,20,30,40,50,60,70,80};
   for ( auto it = v.begin() ; it != v.end()  ; it++){
        cout << *it <<endl;
   }
}

void using_auto_2(){
    vector<int> v = {10,20,30,40,50,60,70,80};
    for ( auto it : v) {
        cout << it <<endl;
    }
}


int main(){
    Using_for_Loop();
    Direct_calling();
    using_iterator();
    using_auto_1();
    using_auto_2();
    return 0;
}