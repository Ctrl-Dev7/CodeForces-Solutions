#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int negativeCount = 0;
        int positiveCount = 0;
        int move = 0;
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==-1){
                negativeCount++;
            }else{
                positiveCount++;
            }
        }
   
        while(positiveCount<negativeCount){
            negativeCount--;
            positiveCount++;
            move++;
        }
 
          
       if(negativeCount%2==1){
            negativeCount--;
            positiveCount++;
            move++;
       }
 
        cout << move << endl;
    }
}