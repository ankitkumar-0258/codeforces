#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    string s;
    cin>>s;
    string t;
    cin>>t;
    string m;
    cin>>m;
    string x=s+t;
    sort(x.begin(),x.end());
    sort(m.begin(),m.end());
    if(x==m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}