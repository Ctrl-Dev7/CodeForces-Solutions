#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int n,k;
        cin >> n >> k;
        vector <int> arr(n);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        sort(arr.begin(), arr.end());
 
        // for(int i=0; i<n; i++){
        //     cout << arr[i] << " ";
        // }
 
        // cout << endl;
 
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        
        int count = 1;
        int bada = 0;
 
        for(int i=0; i<n-1; i++){
            if((arr[i+1]-arr[i]) <= k){
                count++;
            }else{
                // cout << "count: " << count << endl;
                bada = max(bada, count);
                count = 1;
            }
        }
        // cout << "bada: " << bada << endl;
        bada = max(bada, count);
        cout << (n-(bada)) << endl;
    }
 
    return 0;
}