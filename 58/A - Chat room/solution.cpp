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
 
    bool hi = false;
    bool ei = false;
    bool li = false;
    bool lii = false;
    bool oi = false;
 
 
    for(int i=0; i<s.length(); i++){
        if(!hi){
            if(s[i]=='h'){
                hi = true;
            }
        }else{
            if(!ei){
                if(s[i]=='e'){
                    ei = true;
                }
            }else{
                if(!li){
                    if(s[i]=='l'){
                        li = true;
                    }
                }else{
                    if(!lii){
                        if(s[i]=='l'){
                            lii = true;
                        }
                    }else{
                        if(!oi){
                            if(s[i]=='o'){
                                oi = true;
                            }
                        }
                    }
                }
            }
        }
    }
 
    if(hi && ei && li && lii && oi){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}