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
    
    int a,b,c;
    int count1s = 0;
    cin >> a;
    cin >> b;
    cin >> c;
 
    int ans = max({a+b+c, a*b*c, (a+b)*c, a*(b+c), a+b*c, a*b+c});
 
    cout << ans << endl;
 
    return 0;
}