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
 
    if(s[0]!='1'){
        cout << "NO" << endl;
        return 0;
    }
 
    for(int i=0; i<s.size(); i++){
        if(s[i]!='1' && s[i]!='4'){
            cout << "NO" << endl;
            return 0;
        }
    }
 
    for(int i=0; i+2 < s.size(); i++){
        if(s[i]=='4' && s[i+1]=='4' && s[i+2]=='4'){
            cout << "NO" << endl;
            return 0;
        }
    }
 
    cout << "YES" << endl;  
    
    return 0;
}