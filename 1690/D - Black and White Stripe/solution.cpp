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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        int w = 0;
 
        for(int i=0; i<k; i++){
            if(s[i] == 'W'){
                w++;
            }
        }
 
        int ans = w;
 
        for(int i=k; i<n; i++){
            if(s[i-k]=='W'){
                w--;
            }
            if(s[i]=='W'){
                w++;
            }
 
            ans = min(ans, w);
        }
 
        cout << ans << endl;
    }
    
    return 0;
}