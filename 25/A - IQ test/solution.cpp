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
        
    int oddCount=0;
    int evenCount=0;
 
    for(int i=0; i<3; i++){
        if(arr[i]%2){
            oddCount++;
        }else{
            evenCount++;
        }
    }
 
    int a = -1;
 
    if(oddCount>evenCount){
        a=0;
    }else{
        a=1;
    }
 
    for(int i=0; i<n; i++){
        if(arr[i]%2==a){
            cout << i+1 << endl;
            break;
        }
    }
 
    return 0;
}