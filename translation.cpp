#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string t;
  cin>>t;
  int n=t.size();
  for(int i=0; i<n/2; i++){
    swap(t[i],t[n-1-i]);
  }
  if(s==t){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
    return 0;
}