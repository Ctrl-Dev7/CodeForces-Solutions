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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        if(n==1){
            cout << "YES" << endl;
            continue;
        }else{
            vector <int> freq(26, 0);
 
            for(char c: s){
                freq[c-'a']++;
            }
 
            int odd = 0;
 
            for(int i = 0; i < 26; i++){
                if(freq[i] % 2)
                    odd++;
            }
 
            if(odd <= k+1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}