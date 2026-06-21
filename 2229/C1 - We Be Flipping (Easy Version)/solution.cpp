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
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
 
        vector <int> indexes;
 
        if(arr[n-1]>0){
            indexes.push_back(n);
        }
 
        for(int i=n-1; i>0; i--){
            if((arr[i]>0 && arr[i-1]<0) || (arr[i]<0 && arr[i-1]>0)){
                indexes.push_back(i);
            }
        }
 
        cout << indexes.size() << endl;
 
        for(auto a:indexes){
            cout << a << " ";
        }
 
        cout << endl;
 
    }
    
    return 0;
}