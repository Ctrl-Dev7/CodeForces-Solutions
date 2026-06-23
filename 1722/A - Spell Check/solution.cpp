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
    string a = "Timur";
    sort(a.begin(), a.end());
 
    while(n--){
        int t;
        cin >> t;
        string s;
        cin >> s;
 
        if(t != 5){
            cout << "NO" << endl;
        }else{
            sort(s.begin(), s.end());
 
            if(a != s){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }
    }
    
    return 0;
}