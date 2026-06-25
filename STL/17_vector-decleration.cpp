#include<bits/stdc++.h>
using namespace std;

void NormalVector(){
    vector<int> v;

    v.push_back (1);
    v.emplace_back(2);

    cout << v[0] << " " << v[1] << endl;
}

void Vectors_of_pairs(){

    vector <pair<int,int> > v;
    v.push_back({1,2});
    v.emplace_back(3,4);     // emplace_back is more efficient than push_back as it constructs the pair in place

    for (int i = 0 ; i < v.size() ; i++) {
        cout << v[i].first << " " << v[i].second << endl;
    
    }
}

void vector_containing_same_elements(){
    vector<int> v(5,100);
    for (int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " " ;
    }
    cout <<endl;


    vector <int> v2(5);
    for (int i = 0 ; i < v2.size() ; i++){
        cout << v2[i] << " " ;
    }
    cout <<endl;
}

void copying_vectors(){
    vector<int> v(5,100);
    vector<int> v2(v);
    for (int i = 0 ; i < v2.size() ; i++){
        cout << v2[i] << " " ;
    }
    cout <<endl;
}

int main(){
    NormalVector();
    Vectors_of_pairs();
    vector_containing_same_elements();
    copying_vectors();
}