#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    string s;
    cout<<"enter string :";
    cin>>s;
    sort(s.begin(),s.end());
    int n= s.size();
    int i=0;
    int count =0;
    while(i<n){
        if(s[i]==s[i+1]){
            
            i++;
            continue;
        }
        else {
            count++;
            i++;
        }
    }
   if(count%2!=0){
    cout<<"IGNORE HIM!";
   }
   else{
    cout<<"CHAT WITH HER!";
   }
    return 0;
}