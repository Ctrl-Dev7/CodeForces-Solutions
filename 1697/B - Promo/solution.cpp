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
    
    int n,q;
    cin >> n >> q;
    vector <int> arr(n);
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
 
    sort(arr.rbegin(), arr.rend());
 
    vector <int> sum(n+1, 0);
 
    for(int i=0; i<n; i++){
        sum[i+1] = sum[i] + arr[i];
    }
 
    while(q--){
        int x,y;
        cin >> x >> y;
        
        cout << sum[x] - sum[x-y] << endl;
    }
    
    return 0;
}