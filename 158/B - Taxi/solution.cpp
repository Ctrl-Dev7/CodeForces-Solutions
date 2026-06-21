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
    
    int n;
    cin >> n;
    vector <int> arr(n);
 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
 
    sort(arr.rbegin(), arr.rend());
 
    int count = 0;
    int count4 = 0;
    int count3 = 0;
    int count2 = 0;
    int count1 = 0;
 
    for(int i=0; i<n; i++){
        if(arr[i]==4){
            count4++;
        }else if(arr[i]==3){
            count3++;
        }else if(arr[i]==2){
            count2++;
        }else{
            count1++;
        }
    }
 
    count += count4;
    count += count3;
    count1 = max(0LL, count1 - count3);
    count += count2/2;
    count2 %= 2;
 
    if(count2){
        count++;
        count1 = max(0LL, count1 - 2);
    }
 
    count += (count1 + 3)/4;
 
    cout << count << endl;
 
    return 0;
}