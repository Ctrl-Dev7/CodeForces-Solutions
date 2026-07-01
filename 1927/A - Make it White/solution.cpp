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
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int a = -1;
        int b = -1;
 
        for(int i=0; i<n; i++){
            if(s[i]=='B'){
                if(a == -1){
                    a = i;
                }
                b = i;
            }
        }
 
        cout << b-a+1 << endl;
    }
    
    return 0;
}