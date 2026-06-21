#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        string s;
        cin >> s;
        int l = s.length();
        int count0 = 0;
        int count1 = 0;
 
        for(int i=0; i<l; i++){
            if(s[i] == '0'){
                count0++;
            }else{
                count1++;
            }
        }
 
        int chota = min(count0 , count1);
 
        if(chota%2==1){
            cout << "DA" << endl;
        }else{
            cout << "NET" << endl;
        }
 
    }
    return 0;
}