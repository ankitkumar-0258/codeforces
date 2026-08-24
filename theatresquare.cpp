#include <bits/stdc++.h>
using namespace std;
int main() {
     long long n,m,a;
     cin>>n>>m>>a;
     long long  count =0;
     while(n>0){
        n=n-a;
        count++;
     }
     m=m-a;
     int bount=0;
     while(m>0){
         m=m-a;
         bount++;
     }
     cout<<count+bount*count<<endl;
    return 0;
}