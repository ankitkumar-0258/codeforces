#include <bits/stdc++.h>
using namespace std;

    void solve(long long a , long long b, long long x){
         while(a!=b){
              if(a<b){
                 a=a+1;
              }
              else if(b<a){
                 b+=1;
              }
              
         }
    }
int main() {
      int n;
      cin>>n;
      while(n--){
          long long a, b, x;
           cin>>a>>b>>x;
         solve(a, b, x);
      }
    return 0;
}