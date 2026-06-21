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
 
        vector <int> brr(n);
 
        brr = arr;
        sort(arr.begin(), arr.end());
 
        if(arr == brr){
            cout << n << endl;
        }else{
            cout << 1 << endl;
        }
    }
 
    return 0;
}