#include <bits/stdc++.h>
using namespace std;
int main() {
     int n , m ,a, b;
     cin>>n>>m>>a>>b;
     int count=0;
     int bount=0;
     count=n*a;
     int x=0;
     while(x<n){
         
         x+=m;
         if(x>n){
            x=x-m;
             break;
         }
         bount+=b;
     }
     int y =n-x;
      int z=bount+b;
      bount+=y*a;
      cout<<min({count,bount,z});
    return 0;
}