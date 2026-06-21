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
        int n, x;
        cin >> n >> x;
 
        int mul = n*x;
 
        cout << mul + 1 << endl;
    }
    
    return 0;
}