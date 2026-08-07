#include<bits/stdc++.h>
using namespace std;    

void explain_multiset(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);

    cout << "Multiset elements are: ";
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;

    cout << "Count of 2 in multiset: " << ms.count(2) << endl;
    cout << "Count of 3 in multiset: " << ms.count(3) << endl;
}

void multiset_deletion(){
    multiset<int> ms = {1, 2, 2, 3, 3, 3};

    cout << "Multiset elements before deletion: ";
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;

    // Erasing a single element by value
    ms.erase(2);
    cout << "Multiset elements after deleting all occurrences of 2: ";
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;

    // Erasing an element by iterator
    auto it = ms.find(3);
    if(it != ms.end()){
        ms.erase(it);
    }
    cout << "Multiset elements after deleting one occurrence of 3: ";
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;

    // Erasing a range of elements
    auto it1 = ms.find(3);  
    auto it2 = ms.find(3);
    if(it1 != ms.end() && it2 != ms.end()){
        ms.erase(it1, it2);
    }
    cout << "Multiset elements after deleting a range of 3s: ";
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    explain_multiset();
    multiset_deletion();
    return 0;
}   
