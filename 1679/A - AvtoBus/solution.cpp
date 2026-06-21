#include<bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        int min = 0;
        int max = 0;
 
        if(n%2==1 || n==2){
            cout << -1 << endl;
        }else{
            cout << (n+5)/6 << " " << n/4 << endl;
        }
 
    }
    return 0;
}