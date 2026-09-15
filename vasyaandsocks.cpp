#include <bits/stdc++.h>
using namespace std;
int main() {
     int n,m;
     cin>>n>>m;
     int x=0;
     x+=n;
     x+=n/m;
     if(x%m==0){
        x+=1;

     }

     cout<<x<<endl;
    return 0;
}