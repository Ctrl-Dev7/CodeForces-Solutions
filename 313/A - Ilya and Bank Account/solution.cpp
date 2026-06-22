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
 
    if(n>=0){
        cout << n << endl;
    }else{
        n = n * -1;
        string s = to_string(n);
        int l = s.size();
 
        if(s[l-2] > s[l-1]){
            s.erase(l-2, 1);
        }else{
            s.erase(l-1, 1);
        }
 
        n= stoi(s);
        n = n * -1;
        cout << n << endl;
    }
    
    return 0;
}