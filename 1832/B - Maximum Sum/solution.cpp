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
        vector <int> arr(n);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        sort(arr.begin(), arr.end());
 
        vector <int> prefix(n+1, 0);
 
        for(int i=0; i<n; i++){
            prefix[i+1] = prefix[i] + arr[i];
        }
 
        int ans = 0;
 
        for(int i=0; i<=k; i++){
            int l = 2*i;
            int r = k-i;
 
            ans = max(ans, prefix[n-r] - prefix[l]);
        }
 
        cout << ans << endl;
 
    }
    
    return 0;
}