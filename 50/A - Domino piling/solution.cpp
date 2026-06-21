#include<iostream>
using namespace std;
 
void dominos(int m, int n){
    int size = m*n;
    int domino = 2;
 
    cout << size/domino;
}
 
int main(){
    int m,n;
    cin >> m >> n;
 
    dominos(m,n);
 
    return 0;
    
}