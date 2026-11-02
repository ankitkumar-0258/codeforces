#include <bits/stdc++.h>
using namespace std;
int main() {
      int n,m;
      cin>>n>>m;
      vector<pair<string , string>>temp;
      for(int i=0; i<m; i++){
            string s;
            string t;
            cin>>s>>t;
            temp.push_back({s,t});
      }
      vector<string>t;
      for(int i=0; i<n; i++){
        string s;
        cin>>s;
        t.push_back(s);
      }
      

    return 0;
}