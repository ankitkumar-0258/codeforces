#include <bits/stdc++.h>
using namespace std;

   void solve(long long a , long long b){
           int count=0;
           long long x= a/2;
           long long y= b/2;
         if(a>=b){
            if(b>=x){
                count=(a+b)/3;
            }
            else{
                count+=b;
            }
         }
         else{
              
            if(a>=y){
                count=(a+b)/3;
            }
            else{
                count+=a;
               
            }
         }

         cout<<count<<endl;
   }
int main() {
      int n;
      cin>>n;
      while(n--){
        long long a, b;
        cin>>a>>b;
        solve(a,b);
      }
    return 0;
}