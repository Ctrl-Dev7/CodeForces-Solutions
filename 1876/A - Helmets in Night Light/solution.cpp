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
        int n, p;
        cin >> n >> p;
        vector <int> cap(n);
        vector <int> cost(n);
        vector <pair<int, int>> v(n);
 
        for(int i=0; i<n; i++){
            cin >> cap[i];
        }
 
        for(int i=0; i<n; i++){
            cin >> cost[i];
        }
 
        for(int i=0; i<n; i++){
            v[i] = {cost[i], cap[i]};
        }
 
        sort(v.begin(), v.end());
 
        int totalCost = p;
        int mem = 1;
        bool pura = false;
 
        for(int i=0; i<n; i++){
            if(v[i].first<=p){
                if(v[i].second<=(n-mem)){
                    totalCost += (v[i].second*v[i].first);
                    mem += v[i].second;
                }else{
                    totalCost += ((n-mem)*v[i].first);
                    mem = n;
                    pura = true;
                    break;
                }
            }
        }
 
        if(mem<n){
            totalCost += ((n-mem)*p);
        }
 
        cout << totalCost << endl;
    }
    
    return 0;
}