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
    
    int n,m;
    cin >> n >> m;
    vector <int> arr(m);
 
    for(int i=0; i<m; i++){
        cin >> arr[i];
    }
 
    sort(arr.begin(), arr.end());
    int kam = INT_MAX;
 
    for(int i=0; i<m-n+1; i++){
        int diff = arr[i+n-1] - arr[i];
        kam = min(kam , diff);
    }
 
    cout << kam << endl;
    
    return 0;
}