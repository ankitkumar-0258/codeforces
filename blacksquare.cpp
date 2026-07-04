#include <bits/stdc++.h>
using namespace std;
int main() {
     vector<int>t(4);
     for(int i=0; i<4; i++){
        cin>>t[i];
     }
     string s;
     cin>>s;
     int x=0;
     for(int i=0; i<s.size(); i++){
            int curr=s[i]-48;
            x=x+t[curr-1];
     }
     cout<<x<<endl;
    return 0;
}