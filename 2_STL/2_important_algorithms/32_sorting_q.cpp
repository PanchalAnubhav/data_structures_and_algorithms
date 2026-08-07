/*
sort the pair according to the second elment of the pair
if second element is same then sort according to the first element of the pair
but in decreasing order
*/

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b) {
    if (a.second <b.second) return true;
    if (a.second > b.second) return false;

    // both elements are same then sort according to first element in decreasing order

    if(a.first > b.first) return true;
    return false;
}

int main() {
    vector<pair<int,int>> arr = {{1, 2}, {3, 4}, {5, 0}, {2, 3}, {4, 1}, {7, 2}};
    sort(arr.begin(), arr.end(), comp);
    for(auto p: arr) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    return 0;
}
