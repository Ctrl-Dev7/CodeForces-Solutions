#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        char c;
        cin >> c;
        string cf = "codeforces";
        
        bool check = true;
        for(int i=0; i<cf.length(); i++){
            if(c == cf[i]){
                check = true;
                cout << "YES" << endl;
                break;
            }else{
                check = false;
            }
        }
 
        if(check == false){
            cout << "NO" << endl;
        }
    }
 
    return 0;
}