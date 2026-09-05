#include <bits/stdc++.h>
using namespace std;
int main() {
     long long n;
     cin>>n;
     while(n--){
        long long  a,b;
        cin>>a>>b;
         if(a%2==0&&b%2==0&&a>=b*b){
           cout<<"YES"<<endl;
         }
         else if(a%2!=0&&b%2!=0&&a>=b*b){
             cout<<"YES"<<endl;
         }
         else{
             cout<<"NO"<<endl;
         }
     }
    return 0;
}