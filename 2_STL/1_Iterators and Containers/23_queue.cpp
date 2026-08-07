#include <bits/stdc++.h>
using namespace std;

void explain_queue(){
    queue<int> q1;
    q1.push(1);
    q1.emplace(2);
    q1.push(3);
    cout << "Front Element: " << q1.front() << endl;
    cout << "Back Element: " << q1.back() << endl;
    q1.pop();
    cout << "Front Element after pop: " << q1.front() << endl;
    cout << "Queue size is: " << q1.size() << endl ;
}

void queue_swap(){
    queue<int> q1;
    q1.push(1);
    q1.emplace(2);
    q1.push(3);

    queue<int> q2;
    q2.push(4);
    q2.emplace(5);
    q2.push(6);

    cout << "Before swap:" << endl;
    cout << "Queue 1 Front Element: " << q1.front() << endl;
    cout << "Queue 2 Front Element: " << q2.front() << endl;

    q1.swap(q2);

    cout << "After swap:" << endl;
    cout << "Queue 1 Front Element: " << q1.front() << endl;
    cout << "Queue 2 Front Element: " << q2.front() << endl;
}

int main(){
    explain_queue();
    queue_swap();
    return 0;
}