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
        
        int leftF[26] = {0};
        int rightF[26] = {0};
        int left = 0;
        int right = 0;
 
        for(char c: s){
            if(rightF[c-'a'] == 0){
                right++;         
            }
            rightF[c-'a']++;
        }
 
        int ans = 0;
 
        for(int i=0; i<n; i++){
            if(leftF[s[i]-'a']==0){
                left++;
            }
            leftF[s[i]-'a']++;
 
            rightF[s[i]-'a']--;
            if(rightF[s[i]-'a']==0){
                right--;
            }
 
            ans = max(ans, left+right);
        }
 
        cout << ans << endl;
    }
    
    return 0;
}