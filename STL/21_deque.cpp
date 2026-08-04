#include<bits/stdc++.h>
using namespace std;

void explainDeque(){
    deque<int> d1;
    d1.push_back(1);
    d1.emplace_back(2);

    d1.push_front(2);
    d1.emplace_front(3);
}

void explainDeque2(){
    deque<int> d1;
    d1.push_back(1);
    d1.emplace_back(2);

    d1.push_front(2);
    d1.emplace_front(3);

    cout << "First Element: " << d1.front() << endl;
    cout << "Last Element: " << d1.back() << endl;

    cout << "Size of Deque: " << d1.size() << endl;
}

int main(){
    explainDeque();
    explainDeque2();
    return 0;
}
/* rest are same as vector,
 just replace vector with 
 deque and push_back with push_front 
 and emplace_back with emplace_front  */