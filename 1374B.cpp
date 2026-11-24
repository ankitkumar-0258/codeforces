#include <bits/stdc++.h>
using namespace std;

   void solve(long long n){
     int count=0;
     int x=0;
     while(n!=1){
        if(n%6==0){
             n=n/6;
             count++;
        }
        else if((n*2)%6==0){
              n=n*2;
              count++;
        }
        else{
             x=-1;
             break;
        }
     }

     if(x==-1){
         cout<<-1<<endl;
     }
     else{
         cout<<count<<endl;
     }
   }
int main() {
       int n;
       cin>>n;
       while(n--){
        long long t;
        cin>>t;
        solve(t);
       }
    return 0;
}