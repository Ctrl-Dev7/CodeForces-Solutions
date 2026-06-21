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
    
    int n,k;
    cin >> n >> k;
    
    
    int odd = (n+1)/2;
 
    if(k<=odd){
        cout << (2*k-1) << endl;
    }else{
        cout << 2*(k-(n+1)/2) << endl;
    }
 
    
    return 0;
}