#include <bits/stdc++.h>
 using namespace std;
int main() {
      long long n , m;
      cin>>n>>m;
      int count=0;

      long long x=n;
      long long y=m;
      while(n!=m){
           if(m%2==0){
            m=m/2;
            count++;
           }
           else if(m%3==0){
             m=m/3;
             count++;
             }
             else{
                break;
             }
          }
           int bount=0;
          while(x!=y){
             if(y%3==0){
                 y=y/3;
                 bount++;
             }
             else if(y%2==0){
                 y=y/2;
                 bount++;
             }
             else{
                break;
             }
          }
      if(n==m){
        cout<<count<<endl;
      }
       else if(x==y){
         cout<<bount<<endl;
       }
      else{
        cout<<-1<<endl;
      }
    return 0;
} 