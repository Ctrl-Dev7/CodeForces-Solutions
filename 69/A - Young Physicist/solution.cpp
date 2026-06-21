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
    
    int n;
    cin >> n;
    int a = 0;
    int b = 0;
    int c = 0;
 
    while(n--){
        int x, y, z;
        cin >> x >> y >> z;
 
        a += x;
        b += y;
        c += z;
    }
 
    if((a==0) && (b==0) && (c==0)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}