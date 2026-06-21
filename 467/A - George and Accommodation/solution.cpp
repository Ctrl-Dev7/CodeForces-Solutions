#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    int p[n];
    int q[n];
    int count=0;
 
    for(int i=0; i<n; i++){
        cin >> p[i] >> q[i];
    }
 
    for(int i=0; i<n; i++){
        if(q[i]-p[i]>=2){
            count++;
        }
    }
 
    cout << count;
 
    return 0;
}