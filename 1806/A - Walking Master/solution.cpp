#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int count = 0;
 
        while(b<d){
            b++;
            a++;
            count++;
        }
 
        while(a>c){
            a--;
            count++;
        }
        
        if(a==c && b==d){
            cout << count << endl;
        }else{
            cout << -1 << endl;
        }
    }
 
}