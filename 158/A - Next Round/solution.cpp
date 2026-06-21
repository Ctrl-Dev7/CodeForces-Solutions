#include <iostream>
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
    int score[n];
    int count = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
 
    for (int i = 0; i < n; i++)
    {   
        if(score[i]!=0){
            if(score[i] >= score[k-1]){
                count++;
            }
        }
            
    }
 
    cout << count;
 
    return 0;
}
 