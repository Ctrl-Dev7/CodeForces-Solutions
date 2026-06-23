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
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
 
    int calories = 0;
 
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            calories += a;
        }else if(s[i]=='2'){
            calories += b;
        }else if(s[i]=='3'){
            calories += c;
        }else{
            calories += d;
        }
    }
 
    cout << calories << endl;
    
    return 0;
}