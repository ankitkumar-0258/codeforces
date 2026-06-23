#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n = s.size();
    vector<int >temp;
    for(int i=0; i<n; i++){
        if(s[i]=='+'){
            continue;
        }
        else if(s[i]!='+'||i==n-1){
            temp.push_back(s[i]-48);
        }
    }
    s.clear();
    sort(temp.begin(),temp.end());
    for(int i=0; i<temp.size(); i++){
          if(i==temp.size()-1){
            s=s+to_string(temp[i]);
        }
        else if(i<=temp.size()-2){
           s=s+to_string(temp[i])+'+'; 
        }
       
    }
    cout<<s;
    return 0;
}