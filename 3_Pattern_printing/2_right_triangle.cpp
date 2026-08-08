 #include<bits/stdc++.h>
using namespace std;

/*
* 
* * 
* * * 
* * * * 
* * * * * 
*/

void star_only(){
    cout << "enter row value:" << "\n";
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < i ; j++){
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
        star_only();
    }
    return 0;
}