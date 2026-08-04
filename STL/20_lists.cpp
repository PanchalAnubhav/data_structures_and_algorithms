#include<bits/stdc++.h>
using namespace std;

void add_elemants(){
    list<int> l1;
    l1.push_back(1);
    l1.emplace_back(2);

    l1.push_front(2);
    l1.emplace_front(3);
}

/* rest are same as vector,
 just replace vector with 
 list and push_back with push_front 
 and emplace_back with emplace_front  */