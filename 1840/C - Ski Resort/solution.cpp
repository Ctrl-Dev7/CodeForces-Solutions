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
        int n,k,q;
        cin >> n >> k >> q;
 
        vector <int> arr(n);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
 
            if(arr[i]<=q){
                arr[i] = 1;
            }else{
                arr[i]=0;
            }
        }   
 
        int count = 0;
        int total = 0;
 
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                count++;
            }else{
                if(count >= k){
                    int diff = count - k + 1;
                    total += (diff * (diff + 1))/2;
                }
                count = 0;
            }
        }
        
        if(count >= k){
            int diff = count - k + 1;
            total += (diff * (diff + 1))/2;    
        }
 
        cout << total << endl;
 
    }
    
    return 0;
}