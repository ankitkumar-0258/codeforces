#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a;
    string s;
    
    for(int i=0; i<n; i++){
        int count=0;
       cin>>a;
       cin>>s;
       map<char,int>mpp;
       for(int i=0; i<a; i++){
        mpp[s[i]]++;
       }
       for(auto it:mpp){
        if(it.second==1){
          count=count+2;
        }
         else{
            count=count+it.second+1;
         }
       }
       cout<<count<<endl;
    }
    return 0;
}