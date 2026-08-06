#include<bits/stdc++.h>
using namespace std;    

void explain_unordered_set(){
    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);

    cout << "Unordered set elements are: ";
    for(auto i : us){
        cout << i << " ";
    }
    cout << endl;

    cout << "Count of 3 in unordered set: " << us.count(3) << endl;
    cout << "Count of 6 in unordered set: " << us.count(6) << endl;
}


int main(){
    explain_unordered_set();
    return 0;
}
