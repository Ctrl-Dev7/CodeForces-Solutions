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
        int a,b;
        cin >> a >> b;
 
        int mul = 0;
 
        if(a==b){
            cout << 0 << endl;
            continue;
        }
 
        if(b>a){
            if(b%a == 0){
                mul = b/a;
            }else{
                cout << -1 << endl;
                continue;
            }
        }else if(a>b){
            if(a%b == 0){
                mul = a/b;
            }else{
                cout << -1 << endl;
                continue;
            }
        }
 
        int total = 0;
 
        while(mul>1){
            if(mul%8==0){
                mul = mul/8;
            }else if(mul%4==0){
                mul = mul/4;
            }else if(mul%2==0){
                mul = mul/2;
            }else{
                break;
            }
            total++;
        }
 
        if(mul == 1){
            cout << total << endl;
        }else{
            cout << -1 << endl;
        }
    }
    
    return 0;
}