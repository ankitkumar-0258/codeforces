#include <bits/stdc++.h>
using namespace std;
 void solve(string &t){
    int n=t.size();
    map<char,int>mpp;
    for(int i=0; i<t.size(); i++){
          mpp[t[i]]++;
    }
    int x=0;
    for(int i=0; i<t.size(); i++){
         if(mpp[t[i]]>1){
             x=-1;
             break;
         }
    }
    if(x==-1){
        cout<<"NO"<<endl;
    }
    else{
         cout<<"YES"<<endl;
    }
 }
int main() {
      int n;
      cin>>n;
      int a;
      string s;
      for(int i=0; i<n; i++){
         cin>>a;
         cin>>s;
         string t;
         for(int j=0; j<s.size(); j++){
             if(!t.empty()&&t[t.size()-1]==s[j]){
                  continue;
             }
             else{
                 t=t+s[j];
             }
         }
         solve(t);
      }
    return 0;
}