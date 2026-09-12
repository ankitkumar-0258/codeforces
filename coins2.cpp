#include <bits/stdc++.h>
using namespace std;
int main() {
     int t;
     cin>>t;
     while(t--){
      long long a, b,c, n;
      cin>>a>>b>>c>>n;
       long long  maxi=max({a,b,c});
        long long x= maxi-a+maxi-b+maxi-c;
         if(n>=x&&(n-x)%3==0){
             cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
         }
    return 0;
}