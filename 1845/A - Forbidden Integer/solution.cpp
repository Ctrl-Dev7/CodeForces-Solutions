#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n, m, x;
        cin >> n >> m >> x;
        int sum = 0;
        int count = 0;
        vector <int> values;
 
        if(x!=1){
            cout << "YES" << endl;
            cout << n << endl;
            while(n>0){
                cout << 1 << " ";
                n -= 1;
            }
            cout << endl;
        }else{
            if(m==1){
                cout << "NO" << endl;
            }else if(m==2){
                if(n%2==1){
                    cout << "NO" << endl;
                }else{
                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    while(n>0){
                        cout << 2 << " ";
                        n -= 2;
                    }
                    cout << endl;
                }
            }else{
                if(n % 2 == 0){
                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    while(n>0){
                        cout << 2 << " ";
                        n -= 2;
                    }
                    cout << "
";
                }
                else{
                    cout << "YES" << endl;
                    cout << (n/2) << endl;
                    cout << 3 << " ";
                    n -= 3;
                    while(n>0){
                        cout << 2 << " ";
                        n -= 2;
                    }
                    cout << "
";
                }   
            }
        }
    }
    return 0;
}