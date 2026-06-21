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
        int n, k;
        cin >> n >> k;
 
        vector <int> arr(n);
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        vector<pair <int, int>> hp(n);
            
        for(int i=0; i<n; i++){
            int a = arr[i] % k;
            
            if(a==0){
                a = k;
            }
 
            hp[i] = {-a, i+1};
        }
 
        sort(hp.begin(), hp.end());
 
        for(int i=0; i<n; i++){
            cout << hp[i].second << " ";
        }
 
        cout << endl;
    }    
    return 0;
}