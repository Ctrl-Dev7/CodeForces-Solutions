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
    
    vector <int> arr = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
 
    int s;
    cin >> s;
 
    for(int i=0; i<arr.size(); i++){
        if(s%arr[i]==0){
            cout << "YES" << endl;
            return 0;
        }
    }
 
    cout << "NO" << endl;
    
    return 0;
}