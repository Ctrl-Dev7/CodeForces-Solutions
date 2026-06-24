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
        int a,b;
        cin >> a >> b;
 
        int ans = LLONG_MAX;
 
        for(int i=0; i<32; i++){
            int nb = b + i;
 
            if(nb == 1){
                continue;
            }
 
            int k = a;
            int count = i;
 
            while(k > 0){
                k /= nb;
                count++;
            }
 
            ans = min(ans, count);  
        }
        
        cout << ans << endl;
    }
    
    return 0;
}