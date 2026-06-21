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
    
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        vector <int> arr(n);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
 
            sum += arr[i];
        }
 
        int mean = sum/n;
 
        if(sum%n == 0){
            cout << mean << endl;
        }else{
            cout << mean + 1 << endl;
        }
 
    }
    
    return 0;
}