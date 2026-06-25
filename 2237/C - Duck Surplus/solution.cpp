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
 
        int a = arr[0];
 
        for(int i=1; i<n; i++){
            if(arr[i] >= a){
                a = arr[i];
            }else{
                a += arr[i];
            }
        }
 
        cout << a << endl;
    }
    
    return 0;
}