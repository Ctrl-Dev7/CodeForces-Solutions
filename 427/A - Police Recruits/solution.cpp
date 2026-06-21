#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    int sum = 0;
 
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if (arr[i] < 0){
            if ((sum + arr[i]) >= 0){
                sum = sum + arr[i];
            }
            else{
                count++;
            }
        }else{
            sum += arr[i];
        }
    }
 
 
    cout << count;
 
    return 0;
}