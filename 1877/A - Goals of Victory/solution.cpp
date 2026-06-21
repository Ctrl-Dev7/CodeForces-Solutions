#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        int x;
        int subtract = 0;       //efficiency of the remaining team
 
        for(int i=0; i<n-1; i++){
            cin >> x;
            subtract -= x;
        }
 
        cout << subtract << endl;
    }
 
    return 0;
}