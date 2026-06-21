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
        string s;
        cin >> s;
        int n = s.length();
        
        int count0s = 0;
        int count1s = 0;
        
        if(n<=2){
            cout << 0 << endl;
            continue;
        }
        
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                count0s++;
            }
            if(s[i]=='1'){
                count1s++;
            }
        }
 
        if(count0s == count1s){
            if(s[n-1]=='0'){
                count0s--;
            }
            if(s[n-1]=='1'){
                count1s--;
            }
        }
 
        cout << min(count0s, count1s) << endl;
    }
    
    return 0;
}