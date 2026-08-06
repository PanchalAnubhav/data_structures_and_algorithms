
#include<bits/stdc++.h>
using namespace std;

void map_decleration(){
    map<int,int> mpp;
    map<int, pair<int,int>> mpp2;
    map<pair<int,int>, int> mpp3;
}

void map_insertion_and_traversal(){
    map<int,int> mpp;
    mpp[1] = 1;
    mpp.insert({2,2});
    mpp.emplace(3,3);

    cout << mpp[2];
    cout << mpp[5]; // it will create a new key 5 with value 0

    cout <<"map elements are" << endl;
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

}

void map_find_and_erase(){
    map<int,int> mpp;
    mpp[1] = 1;
    mpp.insert({2,2});
    mpp.emplace(3,3);

    auto it = mpp.find(2);
    if(it != mpp.end()){
        cout << "Found: " << it->first << " " << it->second << endl;
    }else{
        cout << "Not Found" << endl;
    }

    mpp.erase(2);
    it = mpp.find(2);
    if(it != mpp.end()){
        cout << "Found: " << it->first << " " << it->second << endl;
    }else{
        cout << "Not Found" << endl;
    }
}

void boundary_functions(){
    map<int,int> mpp;
    mpp[1] = 1;
    mpp.insert({2,2});
    mpp.emplace(3,3);

    auto it = mpp.lower_bound(2);
    if(it != mpp.end()){
        cout << "Lower bound: " << it->first << " " << it->second << endl;
    }else{
        cout << "Lower bound not found" << endl;
    }

    it = mpp.upper_bound(2);
    if(it != mpp.end()){
        cout << "Upper bound: " << it->first << " " << it->second << endl;
    }else{
        cout << "Upper bound not found" << endl;
    }
}

int main(){
    map_decleration();
    map_insertion_and_traversal();
    map_find_and_erase();
    boundary_functions();
    return 0;
}

