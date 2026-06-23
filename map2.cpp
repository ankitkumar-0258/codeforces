#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    string s;
    cin>>s;
    string t;
    cin>>t;
    int count =0;
        unordered_map<char,int>mpp;
       unordered_map<char,int>mp;
        if(s.size()!=t.size()) {
            cout<<"false"<<endl;
        };
        for(int i =0;i<s.size();i++){
            mpp[s[i]]++;
            mp[t[i]]++;
            if(mpp[s[i]]!=mp[t[i]]) {
                cout<<"false"<<endl;
            };
            // mpp[s[i]]++;
            // mp[t[i]]++;
        }
        cout<<"true"<<endl;;
    return 0;
}
    
