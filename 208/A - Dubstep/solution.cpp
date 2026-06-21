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
 
    bool firstword = false;
 
    for(int i=0; i<s.size();){
        if(i+2 < s.size() && s.substr(i, 3) == "WUB"){
            i+=3;
        }else{
            if(!firstword){
                cout << " ";
            }
            while(i<s.size() && !(i+2 < s.size() && s.substr(i, 3) == "WUB")){
                cout << s[i];
                i++;
            }
            firstword = false;
        }
    }
    
    return 0;
}