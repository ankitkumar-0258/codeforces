#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    while(n--){
         cin>>a;
         long long  b;
         long long  x=0;
         for(int i=0; i<a; i++){
               cin>>b;
            x+=b;
         }
        long long  y=sqrt(x);
        if(y*y==x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}