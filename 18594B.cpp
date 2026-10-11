#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
       int y=0;
      while(n--){
         int a;
         cin>>a;
         int mini=INT_MAX;
           while(a--){
              int b;
              cin>>b;
              int x;
              for(int i=0; i<b; i++){
                 cin>>x;
                 mini=min(mini, x);
              }
              y+=mini;
           }
       cout<<y<<endl;
         
      }
    return 0;
}