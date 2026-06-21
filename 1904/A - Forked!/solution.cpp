#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
 
        vector<pair<int,int>> knight;
 
        knight.push_back({a, b});
        knight.push_back({a, -b});
        knight.push_back({-a, b});
        knight.push_back({-a, -b});
 
        if(a != b){
            knight.push_back({b, a});
            knight.push_back({b, -a});
            knight.push_back({-b, a});
            knight.push_back({-b, -a});
        }
 
        vector <pair<int,int>> king;
        vector <pair<int, int>> queen;
 
        for(int i=0; i<knight.size(); i++){
            king.push_back({xk + knight[i].first, yk + knight[i].second});
        }
 
 
        for(int i=0; i<knight.size(); i++){
            queen.push_back({xq + knight[i].first, yq + knight[i].second});
        }
 
        int ans = 0;
 
        for (int i = 0; i < king.size(); i++) {
            for (int j = 0; j < queen.size(); j++) {
                if (king[i] == queen[j]) {
                    ans++;
                    break;
                }
            }
        }   
 
        cout << ans << endl;
    }
    return 0;
}