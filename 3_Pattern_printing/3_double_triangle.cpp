#include<bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------------------
    *    
   ***   
  *****  
 ******* 
*********
*/
void star_pyramid(){
    cout << "enter row value:" << "\n";
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        //space
        for(int j = 0 ; j < n-i-1 ; j++){
            cout << " ";
        }
        //star
        for(int k = 0 ; k < 2*i + 1 ; k++){
            cout << "*";
        }
        //space
        for(int j = 0 ; j < n-i-1 ; j++){
            cout << " ";
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
        star_pyramid();
    }
    return 0;
}