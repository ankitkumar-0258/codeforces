#include <bits/stdc++.h>
using namespace std;
int main() {
     int n,m,k;
     cin>>n>>m>>k;
     int x=m-n;
     int y=k-n;
     if(y<0||x<0){
         cout<<"no"<<endl;
     }
     else{
         cout<<"yes"<<endl;
     }
    return 0;
}