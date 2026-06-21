#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int positions[n];
    int groups = 1;
 
    for(int i=0; i<n; i++){
        cin >> positions[i];
    }
 
    for(int i=1; i<n; i++){
        if(positions[i-1]!=positions[i]){
            groups++;
        }
    }
 
    cout << groups;
 
    return 0;
}