#include<bits/stdc++.h>
using namespace std;

void deleting_single_element(){
    vector<int> v = {10,20,30,40,50,60,70,80};
    v.erase(v.begin());
    v.erase(v.begin() + 4);
    for (auto it : v){
        cout << it << " " ;
    }
}

void deleting_a_range(){
    vector<int> v = {10,20,30,40,50,60,70,80};
    v.erase(v.begin()+1 , v.begin()+5);
    for (auto it : v){
        cout << it << " " ;
    }
}

void insert_a_single_element(){
    vector<int> v = {10,20,30,40,50,60,70,80};
    v.insert(v.begin() , 2);
    for (auto it : v){
        cout << it << " " ;
    }
}

void insert_a_rance_of_same_elements(){
    vector<int> v = {10,20,30,40,50,60,70,80};
    v.insert( v.begin()+1 , 3 , 20);
    for (auto it : v){
        cout << it << " " ;
    }
}

void insert_vector_into_another_vctor(){
    vector<int> original = {10,20,30,40,50,60,70,80};
    vector <int> copy = {100,200,300};
    original.insert (original.begin() + 8, copy.begin(), copy.end() );
    for (auto it :original){
        cout << it << ' ' ;

    }
}

void other_functions(){
    vector<int> v = {10,20,30,40,50,60,70,80};
    vector<int> v2 = {100,200,300};
    cout << "Size of vector : " << v.size() << endl;
    cout << "Capacity of vector : " << v.capacity() << endl;
    cout << "Max size of vector : " << v.max_size() << endl;
    cout << "Is vector empty ? : " << v.empty() << endl;
    v.swap(v2);
    for (auto it : v){
        cout << it << " " ;
    }
}

int main(){
    deleting_single_element();
    cout << endl;
    deleting_a_range();
    cout << endl;
    insert_a_single_element();
    cout << endl;
    insert_a_rance_of_same_elements();
    cout << endl;
    insert_vector_into_another_vctor();
    cout << endl;
    other_functions();
    return 0;
}