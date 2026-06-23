#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int m;
    cin>>m;
    string s;
    int n;
     for(int i=0; i<m; i++){
        int t=-1;
        int f=-1;
         cin>>n;
         cin>>s;
    for(int i=0; i<n; i++){
        if((s[i]=='1'&&s[n-1-i]=='0')||(s[i]=='0'&&s[n-1-i]=='1')){
             continue;
        }
        else{
            t=i;
            f=n-1-i;
            break;
        }
    }
    string g;
    for(int i=t; i<=f; i++){
        g=g+s[i];
    }
    if(t==-1&&f==-1){
        cout<<0<<endl;
    }
    else{
        cout<<g.size()<<endl;
    }
}
    return 0;
}