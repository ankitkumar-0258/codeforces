#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     while(n--){
         long long a,b;
         cin>>a>>b;
         int count=0;
         if(a<b){
            cout<<1<<endl;
            continue;
         }
         if(b==1){
            b=b+1;
            count++;
         }
         while(a!=0){
             a=a/b;

             count++;
         }

         cout<<count<<endl;
     }
    return 0;
}