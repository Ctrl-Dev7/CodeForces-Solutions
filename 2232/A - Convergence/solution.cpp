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
        vector <int> arr(n);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        sort(arr.begin(), arr.end());
 
        int mid = (n+1)/2;
        int moves = 0;
 
        for(int i=0; i<mid; i++){
            if(arr[i]!=arr[n-1-i]){
                moves++;
            }else{
                continue;
            }
        }
 
        cout << moves << endl;
    }
    
    return 0;
}