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

/*---------------------------------------------------------------------------
*********
 ******* 
  *****  
   ***   
    *    

*/
void reverse_star_pyramid(){
    cout << "enter row value:" << "\n";
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        //space
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }
        //star
        for(int k = 0 ; k < 2*(n-i-1)+1 ; k++){
            cout << "*";
        }
        //space
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }
        cout << "\n";
    }
}

/*---------------------------------------------------------------------------
    *    
   ***   
  *****  
 ******* 
*********
 ******* 
  *****  
   ***   
    *    

*/
void star_rhombus(){
    star_pyramid();
    reverse_star_pyramid();
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        star_pyramid();
        reverse_star_pyramid();
        star_rhombus();
    }
    return 0;
}