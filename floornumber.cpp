#include <bits/stdc++.h>
using namespace std;
int main() {
    int m;
    cin>>m;
   int n,x ;
  while(m--){
      cin>>n>>x;
      int y=2;
      int i=1;
      while(y<n){
        y+=x;
          i++;
      }
      cout<<i<<endl;
    }
    return 0;
}