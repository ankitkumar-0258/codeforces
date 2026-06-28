#include <bits/stdc++.h>
using namespace std;
void solve(string &s){
    string t="";
    for(int i=0; i<s.size(); i++){
        if(t.size()>0&&t[t.size()-1]==s[i]){
            t.pop_back();
        }
        else{
            t=t+s[i];
        }
    }
    if(t.size()==0){
        cout<<"EMPTY"<<endl;
        return;
    }
    int freq[26]={0};
    for(int i=0; i<t.size(); i++){
        freq[t[i]-'a']++;
    }
    int oddc=0;
    for(int i=0; i<26; i++){
        if(freq[i]%2!=0){
            oddc++;
        }
    }
    if(oddc>1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    string s;
    for(int i=0; i<n; i++){
         cin>>s;
       solve(s);
    }
    return 0;
}