#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     while(n--){
         int x,y;
         cin>>x>>y;
         if(y%2!=0){
            cout<<x<<endl;

         }
         else{
            cout<<0<<endl;
         }
     }
    return 0;
}