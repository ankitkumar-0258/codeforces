#include <bits/stdc++.h>
using namespace std;
 void solve(string &s, string&t){
      int n=s.size();
      for(int i=0; i<n; i++){
        if(s[i]=='B'){
            s[i]='G';
        }
        if(t[i]=='B'){
            t[i]='G';
        }
      }
      if(s==t){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
 }
int main() {
    int n;
    cin>>n;
    int a;
    string s;
    string t;
    for(int i=0; i<n; i++){
       cin>>a;
        cin>>s;
        cin>>t;
      solve(s,t);
    }
   
    return 0;
}