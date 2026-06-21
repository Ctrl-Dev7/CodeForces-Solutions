#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int totalCost = 0;
 
    for(int i=1; i<=w; i++){
        totalCost += (i*k);
    }
 
    if(totalCost>n){
        cout << totalCost - n; //to borrow amount
    }else{
        cout << 0;
    }
}