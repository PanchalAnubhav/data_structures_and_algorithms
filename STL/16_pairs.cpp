#include<utility>
#include<iostream>
using namespace std;

void explainPair(){
    pair<int, int> p = {1,2};
    cout << p.first << " " << p.second << endl;
}

void NestedPair(){
    pair< int, pair< int,int> > p = {1, {2, 3}};
    cout << p.first << " " << p.second.first << " " << p.second.second << endl;

}

void arrayOfPairs(){
    pair<int,int> p[] = {{1,2},{2,3},{3,4}};
    for (int i = 0 ; i < 3; i++){
        cout << p[i].first << " " << p[i].second << endl;
    }
}

int main(){
    explainPair();
    NestedPair();
    arrayOfPairs();
    return 0;
}