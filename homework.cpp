#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     while(n--){
        int a;
        cin>>a;
        string x;
        cin>>x;
        int b;
        cin>>b;
        string y;
        string z;
        cin>>y;
        cin>>z;
      for(int i=0; i<z.size(); i++){
          if(z[i]=='D'){
             x=x+y[i];
          }
          else if(z[i]=='V'){
             x=y[i]+x;
          }
      }
      cout<<x<<endl;

     }
    return 0;
}