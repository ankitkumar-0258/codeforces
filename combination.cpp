#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
      string s ,t;
      cin>>s;
      cin>>t;
      int count =0;

      for(int i=0; i<s.size(); i++){
      count+=min(abs(s[i]-t[i]), 10-abs(s[i]-t[i]));
      }
      cout<<count<<endl;
    return 0;
}