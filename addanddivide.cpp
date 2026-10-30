#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     while(n--){
         long long a,b;
         cin>>a>>b;
         
         if(a<b){
            cout<<1<<endl;
            continue;
         }
         long long mini=LONG_MAX;
         long long  y=0;
        while(true){
            if(y>=mini){
                break;
            }
            long long z=b+y;
            if(z==1){
                y++;
                continue;
            }
             long long x=a;
            long long count=y;
         while(x!=0){
             x=x/z;
             count++;
         }
          mini=min(mini, count);
         y++;
        }
         cout<<mini<<endl;
     }
    return 0;
}