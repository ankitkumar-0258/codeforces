#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
      while(n--){
        long long a ,b;
        cin>>a>>b;
        if(a<=b){
             cout<<1<<endl;
        }
        else if(a>b){
            long long ans=a;
            for(long long i=1; i*i<=a ; i++){
                 if(a%i==0){
                    if(i<=b){
                     ans=min(ans, a/i);
                    }
                 if(a/i<=b){
                    ans=min(ans, i);
                 }
            }
        }
            cout<<ans<<endl;
        }
      }
    return 0;
}