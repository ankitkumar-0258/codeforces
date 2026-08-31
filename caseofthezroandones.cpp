#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     string s;
     cin>>s;
     string t;
      for(int i=0; i<s.size(); i++){
        if(t.size()>0&&t[t.size()-1]=='0'&&s[i]=='1'){
            t.pop_back();
        }
        else if(t.size()>0&&t[t.size()-1]=='1'&&s[i]=='0'){
            t.pop_back();
        }
        else{
            t+=s[i];
        }
    }
    cout<<t.size()<<endl;
    return 0;
}