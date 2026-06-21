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
 
        int ans = INT_MAX;
        int evenCount = 0;
        
        for(int i=0; i<n; i++){
            int diff = (k-(arr[i]%k));
            if(arr[i]%2==0){
                evenCount++;
            }
            if(arr[i]%k==0){
                ans = 0;
            }else{
                ans = min(ans, diff);
            }
        }
 
        if(k==4){
            if(evenCount>=2){
                ans = min(ans, 0LL);
            }else if(evenCount==1){
                ans = min(ans, 1LL);
            }else if(evenCount==0){
                ans = min(ans, 2LL);
            }
        }
 
        cout << ans << endl;
    
    }
    
    return 0;
}