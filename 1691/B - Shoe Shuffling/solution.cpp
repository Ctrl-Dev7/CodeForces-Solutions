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
 
        map<int,int> freq;
        
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
 
        bool poss = true;
 
        for(int i=0; i<n; i++){
            if(freq[arr[i]]==1){
                poss = false;
                break;
            }
        }
 
        if(!poss){
            cout << -1 << endl;
        }else{
            int i=0; 
            vector <int> ans(n);
 
            while(i < n){
                int j = i;
                while(j<n && arr[j]==arr[i]){
                    j++;
                }
 
                for(int k=i; k<j-1; k++){
                    ans[k] = k+2;
                }
                
                ans[j-1] = i+1;
                i = j;
            }
 
            for(int x: ans){
                cout << x << " ";
            }
            cout << endl;
        }
    }
 
    return 0;
}