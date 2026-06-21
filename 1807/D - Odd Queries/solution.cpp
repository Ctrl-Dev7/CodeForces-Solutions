#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int n, k;
        cin >> n >> k;
        vector <int> arr(n);
        vector <int> prefixSum(n+1, 0);
        
        for(int i=0; i<n; i++){
            cin >> arr[i];
            prefixSum[i+1] = prefixSum[i] + arr[i];
        }
        
        int totalSum = prefixSum[n];
 
        while(k--){
            int a, b, c;
            cin >> a >> b >> c;
            
            int segmentSum = prefixSum[b] - prefixSum[a-1];
            int segmentLength = b-a+1;
 
            int newSum = totalSum - segmentSum + (segmentLength*c);
 
            if(newSum % 2 ==1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
 
 
        // for(int h=0; h<k; h++){
            // vector <int> brr;
            // brr = arr;
        //     int a, b, c;
        //     cin >> a >> b >> c;
        //     int sum  = 0;
 
        //     for(int p=0; p<n; p++){
        //         if(p>=(a-1) && p<=(b-1)){
        //             brr[p] = c;
        //         }
        //         sum  += brr[p];
        //     }
 
        //     if(sum%2==1){
        //         cout << "YES" << endl;
        //     }else{
        //         cout << "NO" << endl;
        //     }
        // }
    }
    return 0;
}