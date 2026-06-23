#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string t;
   for(int i=0; i<s.size(); i++){
    s[i]=tolower(s[i]);
   }
   map<char,int>mpp;
   for(int i=0; i<s.size(); i++){
    mpp[s[i]]++;
   }
   int count=0;
  for(auto it : mpp){
    if(it.second>=1){
       count++;
    }
  }
    if(count>=26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}