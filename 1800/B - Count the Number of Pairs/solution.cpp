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
 
        vector <int> lower(26, 0), upper(26, 0);
 
        for(char c: s){
            if(islower(c)){
                lower[c - 'a']++;
            }else{
                upper[c- 'A']++;
            }
        }
 
        int ans = 0;
 
        for(int i=0; i<26; i++){
            int m = min(lower[i], upper[i]);
            ans += m;
 
            int rem = abs(lower[i] - upper[i]);
            ans += min(rem/2, k);
            k -= min(rem/2, k);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}