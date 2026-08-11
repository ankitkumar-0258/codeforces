#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     string s;
     map<string,int>mpp;
     string t;
     int max=INT_MIN;
     for(int i=0; i<n; i++){
         cin>>s;
         mpp[s]++;
     }
     for(auto it : mpp){
           if(it.second>max){
             max=it.second;
             t=it.first;
           }
     }
     cout<<t<<endl;
    return 0;
}