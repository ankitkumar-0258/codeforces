#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    for(int i=0; i<n; i++){
           cin>>s;
         int x=s.size()/2;
        string t;
        for(int i=0; i<x; i++){
            t=t+s[i];
        }
        string l ;
        for(int i=x; i<s.size(); i++){
         l=l+s[i];
        }
        if(t==l){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}