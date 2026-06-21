#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        while(n%2==0){
            n = n/2;
        }
 
        if(n>2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
 
    }
    return 0;
}