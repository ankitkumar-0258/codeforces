#include <bits/stdc++.h>
using namespace std;

  void solve(string s , string t){
     map<char, int>mpp;
     map<char, int>mp;
     for(int i=0; i<s.size(); i++){
         mpp[s[i]]++;
     }
      for(int i=0; i<t.size(); i++){
         mp[t[i]]++;
      }  

     for(auto it : mp){
         char x= it.first;
         if(mp[x]<=mpp[x]){
             mpp[x]= mpp[x]-mp[x];
             if(mpp[x]==0){
                 mpp.erase(x);
             }
         }
         else{
            cout<<"NO"<<endl;
            return;
         }
     }

      if(mpp.size()==3){
         if(mpp['s']==1&&mpp['i']==1&&mpp['x']==1){
             cout<<"YES"<<endl;
         }
         else{
             cout<<"NO"<<endl;
         }
      }
      else{
        cout<<"NO"<<endl;
      }
  }

int main() {
     int n;
     cin>>n;
     while(n--){
        int a, b;
        cin>>a>>b;
        string s;
        string t;
        cin>>s;
        cin>>t;
        solve(s,t);
     }
    return 0;
}