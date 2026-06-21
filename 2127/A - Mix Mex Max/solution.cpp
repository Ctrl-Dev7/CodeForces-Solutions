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
 
        bool poss = true;
        int val = -1;
 
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                poss = false;
                break;
            }else if(arr[i] != -1){
                if(val == -1){
                    val = arr[i];
                }else if(arr[i] != val){
                    poss = false;
                    break;
                }
            }
        }
        
        if(poss){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}