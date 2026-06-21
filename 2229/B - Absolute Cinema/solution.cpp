#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        int a, b;
        vector <int> arr(n);
        vector <int> brr(n);
        int bada = INT_MIN;
        int index = -1;
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        for(int i=0; i<n; i++){
            cin >> brr[i];
        }
 
        int sum = 0;
        int aur = 0;
 
        for(int i=0; i<n; i++){
            sum += max(arr[i], brr[i]);
            aur = max(aur, min(arr[i], brr[i]));
        }
        
        cout << sum + aur << endl;
    }
    return 0;
}