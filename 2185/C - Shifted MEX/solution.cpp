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
 
        sort(arr.begin(), arr.end());
        
        set <int> s;
 
        for(auto a:arr){
            s.insert(a);
        }
 
        vector<int> uniqueArr(s.begin(), s.end());
 
        int count = 1;
        int bestCount = 1;
 
        int start = 0;
 
        for(int i=1; i<uniqueArr.size(); i++){
            if(uniqueArr[i] == uniqueArr[i-1]+1){
                count++;
            }else{
                count = 1;
                start = i;
            }
 
            if(count > bestCount){
                bestCount = count;
            }
        }
 
        cout << bestCount << endl;
 
    }
    
    return 0;
}