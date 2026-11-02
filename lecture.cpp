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
      vector<string>te;
      for(int i=0; i<n; i++){
        string s;
        cin>>s;
        te.push_back(s);
      }
           string t;
      for(int i=0; i<te.size(); i++){
         string s= te[i];
         for(auto it : temp){
             if(it.first==s||it.second==s){
                 if(it.first.size()==it.second.size()){
                    t+=it.first+" ";
                 }
                 else if(it.first.size()>it.second.size()){
                    t+=it.second+" ";
                 }
                 else{
                     t+=it.first+" ";
                 }
             } 
         }
      }

      cout<<t<<endl;

    return 0;
}