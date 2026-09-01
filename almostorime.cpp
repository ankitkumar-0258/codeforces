#include <bits/stdc++.h>
using namespace std;
 bool isprime(int x){
     if(x==2){
         return true;
     }
     if(x<2){
         return false;
     }
     for(int i=2; i<=sqrt(x); i++){
         if(x%i==0){
             return false;
         }
     }
     return true;
 }
int main() {
     int n;
     cin>>n;
    int c=0;
     for(int i=1; i<=n; i++){
         int count=0;
        for(int j=1; j<=n; j++){
            if(i%j==0){
         if(isprime(j)){
           count++;
         }
     }
    
     }
      if(count==2){
         c++;
     }
    }
     cout<<c<<endl;
    return 0;
}