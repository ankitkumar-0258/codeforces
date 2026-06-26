#include <bits/stdc++.h>
using namespace std;
int main() {
     int n,k,l,c,d,p,nl,np;
     cin>>n>>k>>l>>c>>d>>p>>nl>>np;
     long long  x=(k*l)/nl;
     long long y=c*d;
     long long z=p/np;
     long long w=min({x,y,z})/n;
     cout<<w<<endl;
    return 0;
}