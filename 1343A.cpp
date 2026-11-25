#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     while(n--){
        long long a;
        cin>>a;
        int k=2;
        long long final0=-1;
        long long final1=0;
         while(final0!=0){
             final0=a%((1LL<<k)-1);
              final1=a/((1LL<<k)-1);
             k++;
         }

         cout<<final1<<endl;
     }
    return 0;
}