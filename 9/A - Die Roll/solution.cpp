#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int y, w;
    cin >> y >> w;
    int great = max(y, w);
    int count = 0;
 
    for(int i=great; i<=6; i++){
        count++;
    }
 
    int x = __gcd(count , 6);
 
    cout << count/x << "/" << 6/x;
 
}