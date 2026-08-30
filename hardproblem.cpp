#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     while(n--){
         long long m ,a,b,c;
         cin>>m>>a>>b>>c;

         long long x= m-a;
         long long y= m-b;
         long long z=0;
         if(x<0){
           z+=m;
         }
          if(x==0){
             z+=a;
          }
          if(x>0){
             z+=a;
          }
          if(y<0){
            z+=m;
          }
          if(y==0){
             z+=b;
          }
          if(y>0){
             z+=b;
          }
          if(x<0){
             x=0;

          }
          if(y<0){
             y=0;
          }
          if((x+y)>=c){
            z+=c;
          }
          if((x+y)<c){
             z+=x+y;
          }
          cout<<z<<endl;
     }
    return 0;
}