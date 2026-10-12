#include <bits/stdc++.h>
using namespace std;
int main() {
     long long  n;
     cin>>n;
     vector<long long>temp(n);
     long long  maxi=LLONG_MIN;
     long long mini=LLONG_MAX;
      for(int i=0; i<n; i++){
         cin>>temp[i];
         maxi=max(maxi, temp[i]);
         mini=min(mini, temp[i]);
      }
      long long x=maxi-mini;
      long long count=0;
      long long  mi=0;
        long long  mx=0;
      for(int i=0; i<n; i++){
         if(temp[i]==maxi){
             mx++;
         }
         else if(temp[i]==mini){
             mi++;
         }
      }
        count=mi*mx;
        if(maxi==mini){
            count=n*(n-1)/2;
        }
      cout<<x<<" "<<count<<endl;
    return 0;
}