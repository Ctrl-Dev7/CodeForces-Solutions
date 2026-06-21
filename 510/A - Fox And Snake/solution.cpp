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
    
    int n,m;
    cin >> n >> m;
    bool left = true;
 
    for(int i=1; i<=n; i++){
        if(i%2==1){
            for(int j=0; j<m; j++){
                cout << "#";
            }
            cout << endl;
            left = !left;
        }else{
            if(left){
                cout << "#";
                for(int i=1; i<m; i++){
                    cout << ".";
                }
                cout << endl;
            }else{
                for(int i=0; i<m-1; i++){
                    cout << ".";
                }
                cout << "#";
                cout << endl;
            }
        }
    }
    
    return 0;
}