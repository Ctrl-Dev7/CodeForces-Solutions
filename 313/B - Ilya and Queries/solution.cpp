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
 
    vector <int> pref(s.size(), 0);
 
    for(int i=1; i<s.size(); i++){
        pref[i] = pref[i-1];
        if(s[i] == s[i-1]){
            pref[i]++;
        }
    }
 
    int t;
    cin >> t;
 
    while(t--){
        int a, b;
        cin >> a >> b;
 
        cout << pref[b-1] - pref[a-1] << endl;
    }
    
    return 0;
}