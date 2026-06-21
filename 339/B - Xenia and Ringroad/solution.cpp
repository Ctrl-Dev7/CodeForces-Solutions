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
 
    int count = 0;
    bool first = true;
    int diff = 0;
 
    for(int i=0; i<m; i++){
        if(first){
            diff = arr[i]-1;
            first = false;
        }else{
            if(arr[i]<arr[i-1]){
                diff = arr[i] + (n - arr[i-1]);
            }else{
                diff = arr[i]-arr[i-1];
            }
        }
        count += diff;
    }
    
    cout << count << endl;
 
    return 0;
}