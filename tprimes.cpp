#include <bits/stdc++.h>
using namespace std;
 void solve(int &x){
     int count=0;
     for(int i=1; i<=x; i++){
        if(x%i==0){
            count++;
        }               
     }
     if(count==3){
         cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
 }
int main() {
     int n;
     cin>>n;
     int a;
     while(n--){
       cin>>a;
        int x;
       for(int i=0; i<a; i++){
          cin>>x;
          solve(x);
       }

     }
    return 0;
}