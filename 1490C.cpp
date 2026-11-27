#include <bits/stdc++.h>
using namespace std;

  void solve(long long a){
       for(long long i=1;  i*i*i<a; i++){
          long long x= a-i*i*i;
          long long y= round(cbrtl(x));

          if(y*y*y==x){
              cout<<"YES"<<endl;

              return ;
             }
       }
       
   cout<<"NO"<<endl;
  }
int main() {
      int n;
      cin>>n;
      while(n--){
         long long a;
         cin>>a;
         solve(a);
      }
    return 0;
}