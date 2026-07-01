#include<bits/stdc++.h>
using namespace std;
#define int long long
    
void fast_io() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(NULL);
std::cout.tie(NULL);
}
 
bool isFair(int n){
    int num = n;
 
    while(num != 0){
        int a = num % 10;
        if(a != 0 && n % a != 0){
            return false;
        }else{
            num /= 10;
        }
    }
 
    return true;
}
    
signed main(){
    fast_io();
    
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        while(!isFair(n)){
            n += 1;
        }
 
        cout << n << endl;
    }
    
    return 0;
}