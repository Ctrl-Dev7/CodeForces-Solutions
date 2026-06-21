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
 
    for(char c: s){
        c = tolower(c);
        
        if((c!='a') && (c!='e') && (c!='i') && (c!='o') && (c!='u') && (c!='y')){
            cout << "." << c;
        }
    }
    
    cout << endl;
 
    return 0;
}