#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int x=min(a,b);
        int y=max(a,b);

         if((c>x&&c<y)!=(d>x&&d<y)){
             cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
     }
    return 0;
}