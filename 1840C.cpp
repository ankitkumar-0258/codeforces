#include <bits/stdc++.h>
using namespace std;

   void solve(long long n, long long k , long long q){

          long long x=0;
          long long count=0;
       for(int i=0; i<n; i++){
           int a;
           cin>>a;
           if(a<=q){
               x++;
           }
           else{
               if(x>=k){
               count+=((x-k+1)*(x-k+2))/2;
               }
                x=0;
           }


       }
       if(x>=k){
          count+=((x-k+1)*(x-k+2))/2;
       }

       cout<<count<<endl;
   }
int main() {
       int t;
       cin>>t;
       while(t--){
         long long n, k ,q;
         cin>>n>>k>>q;
         solve(n, k ,q); 
       }
    return 0;
}