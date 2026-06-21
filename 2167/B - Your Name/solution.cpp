#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        string s,t;
        cin >> s >> t;
 
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
 
        bool match;
        
        for(int i=0; i<n; i++){
            match = true;
 
            if(s[i]!=t[i]){
                match = false;
                cout << "NO" << endl;
                break;
            }
        }
 
        if(match){
            cout << "YES" << endl;
        }
 
    }
    return 0;
}