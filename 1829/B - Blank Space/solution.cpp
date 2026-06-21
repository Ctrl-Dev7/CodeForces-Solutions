#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        
        int bada = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                count ++;
            }
            if(arr[i]==1){
                bada = max(count , bada);
                count = 0;
            }
        }
        
        bada = max(count , bada);
        cout << bada << endl;
    }
}