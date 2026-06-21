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
    
    string s;
    cin >> s;
 
    for(int i=0; i<s.length(); i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cout << "YES" << endl;
            return 0;
        }
    }
 
    cout << "NO" << endl;
    
    return 0;
}