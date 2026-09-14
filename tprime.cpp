#include <bits/stdc++.h>
using namespace std;
 bool isprime(long long &n){
    if(n==1){
        return false;
    }
          long long x=0;
          long long count=0;
          x=sqrt(n);
          if(x*x!=n){
            return false;
          }
      for(long long  i=2; i*i<=x; i++){
              if(x%i==0){
                 return false;
              }
         }
          return true;
      }
 
int main() {
     int n;
     cin>>n;
      vector<long long>temp(n);
      for(int i=0; i<n; i++){
         cin>>temp[i];
      }
      for(long long  i=0; i<n; i++){
         long long  count=0;
         long long x=0;
           if(isprime(temp[i])){
              cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }
      
    }
       
    return 0;
}