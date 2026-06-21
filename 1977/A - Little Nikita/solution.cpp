#include<bits/stdc++.h>
using namespace std;
#define int long long
    
void fast_io() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(NULL);
std::cout.tie(NULL);
}
    
signed main(){
    fast_io();
    
    int t;
    cin >> t;
 
    while(t--){
        int n, m;
        cin >> n >> m;
 
        if(n < m){
            cout << "NO" << endl;
        }else if(n == m){
            cout << "YES" << endl;
        }else{
            int k = n-m;
            if(k%2==0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}