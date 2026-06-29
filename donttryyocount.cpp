#include <bits/stdc++.h>
using namespace std;
 void solve(string &s, string &l){
  int n=s.size();
  int m=l.size();
  while(s.size()<l.size()){
     s=s+s;
  }
  for(char c : l){
    if(s.find(c)<s.size()){
         cout<<"YES"<<endl;
         return ;
    }
  }
  cout<<"NO"<<endl;
  return ;
}
int main() {
    int t;
    cin>>t;
    int n,m;
    string s;
    string l;
    while(t--){
      cin>>n>>m;
       cin>>s;
       cin>>l;
       solve(s,l);

    }
    return 0;
}