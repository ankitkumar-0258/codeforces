#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n=s.size();
    int u=0;
    int l=0;
    for(int i=0; i<n; i++){
        if(s[i]>=65&&s[i]<=90){
            u++;
        }
        else if(s[i]>=97&&s[i]<=122){
            l++;
        }
    } 
    for(int i=0; i<n; i++){
        if(l==u){
            s[i]=tolower(s[i]);
        }
        else if(l<u){
            s[i]=toupper(s[i]);
        }
        else if(l>u){
            s[i]=tolower(s[i]);
        }

    }
    cout<<s;
    return 0;
}