#include<bits/stdc++.h>
using namespace std;
#define int long long
    
void fast_io() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(NULL);
std::cout.tie(NULL);
}
    
signed main(){
    fast_io();
    
    int n, m, a;
    cin >> n >> m >> a;
    int countn = 0;
    int countm = 0;
 
    countn += n/a;
 
    if(n%a!=0){
        countn++;
    }
 
    countm += m/a;
 
    if(m%a!=0){
        countm++;
    }
    
    cout <<  countn * countm << endl;
    
    return 0;
}