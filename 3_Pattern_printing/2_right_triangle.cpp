 #include<bits/stdc++.h>
using namespace std;


/*---------------------------------------------------------------------------
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

/*---------------------------------------------------------------------------
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/

void no_inc_row_wise(){
    cout << "enter row value:" << "\n";
    int n;
    cin >> n;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= i ; j++){
            cout << j  << " ";
        }
        cout << "\n";
    }
}
/*---------------------------------------------------------------------------
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
*/

void no_inc_column_wise(){
    cout << "enter row value:" << "\n";
    int n;
    cin >> n;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= i ; j++){
            cout << i  << " ";
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
        no_inc_row_wise();
        no_inc_column_wise();
    }
    return 0;
}