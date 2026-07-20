#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
         s[i]=tolower(s[i]);
    }
    string t;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
             continue;
        }
        else{
            t+=s[i];
        }
    }
    string l;
    for(int i=0; i<t.size(); i++){
        l=l+'.'+t[i];
    }
    cout<<l<<endl;
    return 0;
}