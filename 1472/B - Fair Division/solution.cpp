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
        vector <int> arr(n);
        int sum = 0;
        int count1 = 0;
        int count2 = 0;
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
 
            if(arr[i] == 1){
                count1++;
            }else{
                count2++;
            }
        }
 
        if(sum % 2){
            cout << "NO" << endl;
        }else if(count1==0 && count2 % 2){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
 
    }
    
    return 0;
}