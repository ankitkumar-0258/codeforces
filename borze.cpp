#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string t;
    for(int i=0; i<s.size(); i++){
        if(i<s.size()-1&&s[i]=='-'&&s[i+1]=='.'){
          t=t+'1';
          i++;
        }
        else if(i<s.size()-1&&s[i]=='-'&&s[i+1]=='-'){
            t=t+'2';
            i++;
        }
        else if(s[i]=='.'){
            t=t+'0';
        }
    }
    cout<<t<<endl;
    return 0;
}