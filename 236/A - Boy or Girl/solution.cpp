#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s1;
    cin >> s1;
    int count = 0;
    int duplicates = 0;
    
    for(int i=0; i<s1.length(); i++){
        bool foundDuplicate = false;
        for(int j=i+1; j<s1.length(); j++){
            if(s1[i] == s1[j]){
                duplicates;
                foundDuplicate = true;
                break;
            };
        };
 
       if(!foundDuplicate){
        count++;
       };
    }
 
    int characters = count + duplicates;
 
    if(characters % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
 
    return 0;
}