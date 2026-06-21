#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int a = 1;
        while(a){
            a = 0;
            for(int i=0; i<n-1; i++){
                if(s[i] == s[i+1]){
                    s.erase(i, 2);
                    i--;
                    n -= 2;
                    a = 1;
                }
            }
        }
 
        if(s.length() == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl; 
        }
    }
    return 0;
}