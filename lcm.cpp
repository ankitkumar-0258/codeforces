#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int a;
    cin>>a;
    int b;
    cin>>b;
    int x=min(a,b);
    int y=max(a,b);
    int f=0;
    int g=x;
    int n=y;
    int d=0;
    for(int i=2; i<=y; i++)
{
    if(g%y==0){
         f=g;
         break;
    }
    else {
       g=x*i;
    }
}
   
   for(int i=2; i<=x; i++){
         if(n%x==0){
           d=n;
           break;
         }
         else{
            n=y*i;
         }
   }
   cout<<f<<endl;
   cout<<n<<endl;
    return 0;
}