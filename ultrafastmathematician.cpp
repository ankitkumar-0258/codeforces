#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    string t;
    string f="";
    cin>>s>>t;
    for (int i = 0; i <s.size(); i++)
    {
        if(s[i]=='1'&&t[i]=='1'){
                f=f+'0';
        }
        else if(s[i]=='0'&&t[i]=='1'){
            f=f+'1';
        }
        else if(s[i]=='1'&&t[i]=='0'){
            f=f+'1';
        }
        else {
            f=f+'0';
        }
    }
     cout<<f;
    return 0;
}