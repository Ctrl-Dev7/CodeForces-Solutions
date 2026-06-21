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
        int bada = INT_MIN;
        int chota = INT_MAX;
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
            bada = max(bada, arr[i]);
            chota = min(chota, arr[i]);
        }
 
        if(n==1){
            cout << 0 << endl;
            continue;
        }
 
        int case1=0;
        int case2=0;
        int case3=0;
        int case4=0;
        int case5=INT_MIN;
 
        if(arr[n-1]==bada || arr[0] == chota){
            case1 = bada - chota;
        }
 
        for(int i=1; i<n; i++){
            case2 = max(case2, arr[i] - arr[0]);
        }
 
        for(int i=0; i<n-1; i++){
            case3 = max(case3, arr[n-1] - arr[i]);
        }
 
        case4 = arr[n-1] - arr[0];
 
        for(int i=0; i<n-1; i++){
            case5 = max(case5 , (arr[i] - arr[i+1]));
        }
 
        cout << max({case1, case2, case3, case4, case5}) << endl;
    }
 
    return 0;
}