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
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= i ; j++){
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

/*---------------------------------------------------------------------------
5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1 
*/
void lower_wrt_column(){
    cout << "enter row value:" << "\n";
    int n;
    cin >> n;
    for (int i = n ; i >=1 ; i--){
        for (int j = 1 ; j <= i ; j++){
            cout << i  << " ";
        }
        cout << "\n";
    }
}

/*---------------------------------------------------------------------------
5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1 
*/
void lower_wrt_rows(){
    cout << "enter row value:" << "\n";
    int n;
    cin >> n;
    for (int i = n ; i >=1 ; i--){
        for (int j = 1 ; j <= i ; j++){
            cout << j  << " ";
        }
        cout << "\n";
    }
}

/*---------------------------------------------------------------------------
5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1 
*/
void lower_wrt_stars(){
    cout << "enter row value:" << "\n";
    int n;
    cin >> n;
    for (int i = n ; i >=1 ; i--){
        for (int j = 1 ; j <= i ; j++){
            cout << "* " << " ";
        }
        cout << "\n";
    }
}

/*---------------------------------------------------------------------------
5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1 
*/
void lower_wrt_stars(){
    cout << "enter row value:" << "\n";
    int n;
    cin >> n;
    for (int i = n ; i >=1 ; i--){
        for (int j = 1 ; j <= i ; j++){
            cout << "* " << " ";
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
        lower_wrt_column();
        lower_wrt_rows();
        lower_wrt_stars();
    }
    return 0;
}