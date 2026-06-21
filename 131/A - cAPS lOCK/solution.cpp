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
    
    string s;
    cin >> s;
 
    bool ok = true;
 
    for(int i=1; i<s.size(); i++){
        if(islower(s[i])){
            ok = false;
            break;
        }
    }
 
    if(ok){
        for(char &c : s){
            if(islower(c)){
                c = toupper(c);
            }else{
                c = tolower(c);
            }
        }
    }
 
    cout << s << endl;
    
    return 0;
}