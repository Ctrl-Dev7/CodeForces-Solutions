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
 
        int n = s.size();
        int count0 = 0;
        int count1 = 0;
 
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                count0++;
            }else{
                count1++;
            }
        }
 
        int l = 0;
 
        for(int i=0; i<n; i++){
            if(s[i]=='0' && count1>0){
                count1--;
                l++;
            }else if(s[i]=='1' && count0>0){
                count0--;
                l++;
            }else{
                break;
            }
        }
 
        int removals = n - l;
        cout << removals << endl;
    }
    
    return 0;
}