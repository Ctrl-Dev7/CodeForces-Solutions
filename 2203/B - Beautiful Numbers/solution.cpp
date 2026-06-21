#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    int t; 
    cin >> t;
    
    while(t--){
        string n;
        cin >> n;
        string s=n;
 
        sort(s.begin()+1, s.end());
 
        int length = n.size();
        int sum1 = 0;
        int i1=0;
        int count1 = 0;
        int total=0;
 
        for(int j=0; j<length; j++){
            total += n[j]-'0';
        }
 
        if(total <= 9){
            cout << 0 << endl;
            continue;
        }
        
        while(((sum1+(s[i1]-'0'))<=9) && i1<length){
            sum1 += (s[i1]-'0');
            i1++;
            count1++;
        }
 
        int ans1 = length - count1 ;
 
        int sum2 = 1;
        int i2 = 1;
        int count2 = 1;
 
        while(((sum2+(s[i2]-'0'))<=9) && i2<length){
            sum2 += (s[i2]-'0');
            i2++;
            count2++;
        }
 
        int ans2 = 1 + (length - count2);
 
        cout << min(ans1, ans2) << endl;
 
    }
 
    return 0;
}