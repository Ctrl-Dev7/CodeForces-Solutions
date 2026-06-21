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
        int n, d;
        cin >> n >> d;
 
        string s;
        cin >> s;
 
        int l = s.length();
        bool inserted = false;
 
        for(int i=0; i<l; i++){
            if(d>s[i]-'0'){
                s.insert(i, to_string(d));
                inserted = true;
                break;
            }
        }
 
        if(!inserted){
            s += char('0' + d);
        }
 
        cout << s << endl;
    }
    
    return 0;
}