#include <bits/stdc++.h>
using namespace std;
int main() {
      int n, b,d;
      cin>>n>>b>>d;
       int count=0;
       int x=0;

        while(n--){
          int a;
          cin>>a;
          if(a<=b){
             x+=a;
              if(x>d){
            count++;
             x=0;
          }
          }
          else{
            continue;
          }
        }
        cout<<count<<endl;
    return 0;
}