#include<iostream>
using namespace std;
 
int main(){
    int arr[5][5];
    int a, b;
    int diff;
 
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> arr[i][j];
        }
    }
 
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i][j]==1){
                a = i+1;
                b = j+1;
                break;
            }
        }
    }
 
    diff = abs(3 - a) + abs(3 - b);
 
    cout << diff;
    return 0;
}