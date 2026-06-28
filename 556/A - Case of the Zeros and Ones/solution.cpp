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
    string s;
    cin >> s;
 
    int count0s = 0;
    int count1s = 0;
 
    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            count0s++;
        }else{
            count1s++;
        }
    }
 
    int k = min(count0s, count1s);
 
    cout << n - (2*k) << endl;
    
    return 0;
}