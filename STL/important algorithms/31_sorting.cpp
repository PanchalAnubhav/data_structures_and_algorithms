#include <bits/stdc++.h>
using namespace std;

void sort1(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

void sort_reverse(vector<int>& arr) {
    sort(arr.begin(), arr.end(), greater<int>());
}

void pair_sort_by_second_element(vector<pair<int, int>>& arr) {
    sort(arr.begin(), arr.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });
}

int main() {
    vector<int> v = {5, 2, 9, 1, 5, 6};
    vector<pair<int, int>> p1 = {{1, 2}, {3, 4}, {5, 0}, {2, 3}, {4, 1}, {7, 2}};
    pair_sort_by_second_element(p1);
    sort1(v);
    sort_reverse(v);
    return 0;
} 