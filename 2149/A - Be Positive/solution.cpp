#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vector <int> arr(n);
        int count0s = 0;
        int countneg1s = 0;
        
        for(int i=0; i<n; i++){
            cin >> arr[i];
            
            if(arr[i]==0){
                count0s++;
            }
            if(arr[i]==-1){
                countneg1s++;
            }
        }
 
        int total = count0s + (countneg1s%2)*2;
 
        cout << total << endl;
    }
 
    return 0;
}