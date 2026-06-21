#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n, m;
        cin >> n >>m;
        string x;
        string s;
        cin >> x >>s;
        int count = 0;
        
        while(x.length()<s.length()){
            x += x;
            count ++;
        }
 
        if(x.find(s) != string::npos){
            cout << count << endl;
            continue;
        }
        
        x += x;
        count++;
 
        if(x.find(s) != string::npos){
            cout << count << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}