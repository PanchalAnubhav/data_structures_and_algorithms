#include <bits/stdc++.h>
using namespace std;

void set_creation(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.emplace(4);
    s.emplace(5);
    cout << "Set elements are: ";
    for(auto i : s){
        cout << i << " ";
    }
    cout << endl;
}

// Function to demonstrate set operations: union, intersection, and difference
void set_operations(){
    set<int> s1 = {1, 2, 3, 4, 5};
    set<int> s2 = {4, 5, 6, 7, 8};

    cout << "Set 1 elements: ";
    for(auto i : s1){
        cout << i << " ";
    }
    cout << endl;

    cout << "Set 2 elements: ";
    for(auto i : s2){
        cout << i << " ";
    }
    cout << endl;

    // Union
    set<int> union_set;
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(union_set, union_set.begin()));
    cout << "Union of Set 1 and Set 2: ";
    for(auto i : union_set){
        cout << i << " ";
    }
    cout << endl;

    // Intersection
    set<int> intersection_set;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(intersection_set, intersection_set.begin()));
    cout << "Intersection of Set 1 and Set 2: ";
    for(auto i : intersection_set){
        cout << i << " ";
    }
    cout << endl;

    // Difference
    set<int> difference_set;
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(difference_set, difference_set.begin()));
    cout << "Difference of Set 1 and Set 2 (Set 1 - Set 2): ";
    for(auto i : difference_set){
        cout << i << " ";
    }
    cout << endl;
}


void find_element_in_set(){
    set<int> st = {1,2,3,4,5,6,7,8,9,10};
    auto it = st.find(10);
    if(it != st.end()){
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    } 
    
    auto it2 = st.find(11); // remove auto while using the same variable name in the same scope
    if(it2 != st.end()){
        cout << "Element found: " << *it2 << endl;
    } else {
        cout << "Element not found" << endl;
    } 
}

void set_deletion(){
    set<int> st = {1,2,3,4,5,6,7,8,9,10};
    cout << "set of elements before deletion:";
    for (auto i :st){
        cout << i << " " ;
    }
    cout << endl;

    //ereasing a sinngle element by giving the element value by itself 

    st.erase(5);
    cout << "set of elements after deletion:";
    for(auto i : st){
        cout << i << " ";
    }
    cout << endl;

    //erasing an element by giving the iterator of the element to be deleted
    auto it = st.find(3);
    if(it != st.end()){
        st.erase(it);
    }

    //erasing a range of elements by giving the iterator of the first and last element to be deleted
    auto it1 = st.find(7);
    auto it2 = st.find(9);
    if(it1 != st.end() && it2 != st.end()){
        st.erase(it1, it2);
    }   

    for (auto it : st){
        cout << it << " ";
    }
}

void boundary_operations(){
    set<int> st = {1,2,3,4,5,6,7,8,9,10};
    cout << "Boundary operations:" << endl;
    auto it = st.lower_bound(5);
    if(it != st.end()){
        cout << "Lower bound of 5 is: " << *it << endl;
    } else {
        cout << "Lower bound not found" << endl;
    }

    auto it2 = st.upper_bound(5);
    if(it2 != st.end()){
        cout << "Upper bound of 5 is: " << *it2 << endl;
    } else {
        cout << "Upper bound not found" << endl;
    }
}

int main(){
    set_creation();
    set_operations();
    find_element_in_set();
    set_deletion();
    boundary_operations();
    return 0;
}