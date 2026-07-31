#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     int x;
     while(n--){
         cin>>x;
         int a,b;
            int maxi=0;
            int y=0;
         for(int i=1; i<=x; i++){
            cin>>a>>b;
            if(a<=10&&b>maxi){
              maxi=b;
             y=i;
            }
         }
         cout<<y<<endl;
     }
    return 0;
}