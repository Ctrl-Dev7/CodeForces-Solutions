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
        int n, r, b;
        cin >> n >> r >> b;
 
        int div = r/(b+1);
        int rem = r%(b+1);
 
        while(b > 0){
            int cnt = div;
 
            if(rem > 0){
                cnt++;
                rem--;
            }
 
            for(int i=1; i<=cnt; i++){
                cout << "R";
            }
 
            cout << "B";
            b--;
        }
 
        for(int i=1; i<=div; i++){
            cout << "R";
        }
 
        if(rem > 0){
            for(int i=1; i<=rem; i++){
                cout << "R";
            }
        }
 
        cout << endl;
    
    }
    
    return 0;
}