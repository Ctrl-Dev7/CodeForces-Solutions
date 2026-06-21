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
        int a, b, c;
 
        cin >> a >> b >> c;
        bool poss = false;
 
        if((2 * b - a) > 0 && (2 * b - a) % c == 0){
            poss = true;
        }
        
        if((2 * b - c) > 0 && (2 * b - c) % a == 0){
            poss = true;
        }
        
        if((a + c) % (2 * b) == 0){
            poss = true;
        }
 
        if(poss){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}