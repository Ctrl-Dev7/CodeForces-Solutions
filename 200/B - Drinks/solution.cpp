#include<bits/stdc++.h>
using namespace std;
 
signed main(){
    int n;
    cin >> n;
    int p[n];
    double totalJuice=0.0;
    
    for(int i=0; i<n; i++){
        cin >> p[i];
        totalJuice += p[i];
    }
    
    double juice = totalJuice/n;
 
    cout << juice << endl;  //% of orange juice in the cocktail
 
    return 0;
}