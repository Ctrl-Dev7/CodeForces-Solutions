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
    
 
    int n;
    cin >> n;
    vector <int> arr(n);
 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
 
    int start = arr[0];
 
    int diff = INT_MAX;
    int a = 0;
    int b = 0;
 
    arr.push_back(start);
 
    for(int i=0; i<arr.size()-1; i++){
        int ha = abs(arr[i]-arr[i+1]);
        diff = min(diff, ha);
 
        if(ha == diff){
            a = i+1;
            if(a==n){
                b = 1;    
            }else{
                b = i+2;
            }
        }
    }
    
    cout << a << " " << b << endl;
 
    
    return 0;
}