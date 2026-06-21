#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int a, b, n;
        cin >> a >> b >> n;
        vector <int> arr(n);
        int count = 0;
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        if((a == 1) && (b==1)){
            cout << 1 << endl;
            continue;
        }
        
        for(int i=0; i<n; i++){
            if(b!=1){
                count += (b-1);       
                b = 1;
            }
            if((b+arr[i]) <= a){
                b += arr[i];
            }else{
                b = a;
            }
        }
 
        cout << count+b << endl;
    }
    return 0;
}