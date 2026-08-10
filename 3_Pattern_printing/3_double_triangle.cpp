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
    int n2 = n-1;
    for (int i = 0 ; i < n2 ; i++){
        //space
        for(int j = 0 ; j < i+1 ; j++){
            cout << " ";
        }
        //star
        for(int k = 0 ; k < 2*(n2-i-1)+1 ; k++){
            cout << "*";
        }
        //space
        for(int j = 0 ; j < i+1 ; j++){
            cout << " ";
        }
        cout << "\n";
        }
}

/*---------------------------------------------------------------------------
 *
**
***
****
*****
****
***
**
*  
*/
void double_left_triangle(){
    cout << "enter row value:" << "\n";
    int n;
    cin >> n;
    for (int i = 0 ; i<=n ; i++){
        for(int j = 0 ; j < i ; j++)
            cout << "*";
        cout << "\n";
    }
    for (int i = 0 ; i< n-1; i++){
        for(int j = 0 ; j < n-i-1 ; j++)
            cout << "*";
        cout << "\n";
    }
}
void double_left_triangle_sir_method(){
    cout << "enter row value:" << "\n";
    int n;
    cin >> n;
    for (int i = 1 ; i< 2*n - 1 ; i++){
        int stars = i;
        if(i>n) stars = 2*n - i;
        for (int j = 1 ; j<= stars ; j++){
            cout << "*";
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
        reverse_star_pyramid();
        star_rhombus();
        double_left_triangle();
        double_left_triangle_sir_method();
    }
    return 0;
}