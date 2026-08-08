 #include<bits/stdc++.h>
using namespace std;

void pattern_print(){
    cout << "enter row value:" << "\n";
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        pattern_print();
    }
    return 0;
}