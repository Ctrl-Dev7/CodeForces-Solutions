#include<bits/stdc++.h>
using namespace std;
    
void fast_io() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(NULL);
std::cout.tie(NULL);
}
    
int main(){
    fast_io();
    
    int n, l;
    cin >> n >> l;
    vector <int> arr(n);
 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
 
    sort(arr.begin(), arr.end());
 
    int maxDiff = 0;
    double hoSakta1 = -1;
    double hoSakta2 = -1;
    double hoSakta3 = -1;
 
    for(int i=0; i<n-1; i++){
        maxDiff = max(maxDiff ,arr[i+1]-arr[i]);
    }
    
    hoSakta1 = (double)maxDiff/2.0;
    hoSakta2 = arr[0];
    hoSakta3 = l-arr[n-1];
 
    cout << fixed << setprecision(10) << max(hoSakta1, max(hoSakta2, hoSakta3));
    
    return 0;
}