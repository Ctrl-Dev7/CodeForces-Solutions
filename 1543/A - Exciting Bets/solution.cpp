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
        int a, b;
        cin >> a >> b;
 
        int diff = -1;
        int moves = -1;
 
        if(a==b){
            cout << 0 << " " << 0 << endl;
            continue;
        }else if(abs(a-b)==1){
            cout << 1 << " " << 0 << endl;
            continue;
        }else{
            diff = abs(a-b);
            int bada = max(a,b);
            int rem = bada%diff;
            moves = min(rem, (diff-rem));
 
            cout << diff << " " << moves << endl;
        }
    }
    
    return 0;
}