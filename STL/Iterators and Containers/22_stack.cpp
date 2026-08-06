#include<bits/stdc++.h>
using namespace std;


void explain_stack(){
    stack<int> s1;
    s1.push(1);
    s1.emplace(2);
    cout << "Top Element: " << s1.top() << endl;
    s1.pop();
    cout << "Top Element after pop: " << s1.top() << endl;
    cout << "stack size is:" << s1.size() << endl ;

    stack<int> s2;
    s1.swap(s2);

}

int main(){
    explain_stack();
    return 0;
}