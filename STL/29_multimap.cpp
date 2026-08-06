#include<bits/stdc++.h>
using namespace std;

void multimap_decleration(){
    multimap<int,int> mpp;
    multimap<int, pair<int,int>> mpp2;
    multimap<pair<int,int>, int> mpp3;
}

void multimap_insertion_and_traversal(){
    multimap<int,int> mpp;
    mpp.insert({1,1});
    mpp.insert({2,2});
    mpp.insert({3,3});
    mpp.insert({2,4}); // duplicate key

    cout <<"multimap elements are" << endl;
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

}

int main(){
    multimap_decleration();
    multimap_insertion_and_traversal();
    return 0;
}

/*

mpp[key] cant be used here because 
multimap does not support operator[] 
for accessing elements by key. 

*/