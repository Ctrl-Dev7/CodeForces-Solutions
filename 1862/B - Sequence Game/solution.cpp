#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        vector <int> brr;
        brr.push_back(arr[0]);
 
        if(n!=1){
            for(int i=1; i<n; i++){
                if(arr[i]>=arr[i-1]){
                    brr.push_back(arr[i]);
                }else{
                    brr.push_back(arr[i]);
                    brr.push_back(arr[i]);
                }
            }
        }
            
        int size = brr.size();
            
        cout << size << endl;
        
        for(int i=0; i<size; i++){
            cout << brr[i] << " " ;
        }
            
        cout << endl;
    }
}