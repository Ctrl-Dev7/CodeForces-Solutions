#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        string s;
        cin >> s;
        int aCount = 0;
        int bCount = 0;
 
        for(int i=0; i<5; i++){
            if(s[i]=='A'){
                aCount++;
            }else{
                bCount++;
            }
        }
 
        if(aCount > bCount){
            cout << "A" << endl;
        }else{
            cout << "B" << endl;
        }
    }
    return 0;
}