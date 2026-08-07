#include <bits/stdc++.h>
using namespace std;

// MAX HEAP

void explain_max_heap(){
    priority_queue<int> pq1;
    pq1.push(1);
    pq1.emplace(2);
    pq1.push(3);
    cout << "Top Element: " << pq1.top() << endl;
    pq1.pop();
    cout << "Top Element after pop: " << pq1.top() << endl;
    cout << "Priority Queue size is: " << pq1.size() << endl ;
}

// MIN HEAP

void explain_min_heap(){
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(1);
    pq2.emplace(2);
    pq2.push(3);
    cout << "Top Element: " << pq2.top() << endl;
    pq2.pop();
    cout << "Top Element after pop: " << pq2.top() << endl;
    cout << "Priority Queue size is: " << pq2.size() << endl ;
}


int main(){
    explain_max_heap();
    explain_min_heap();
    return 0;
}
