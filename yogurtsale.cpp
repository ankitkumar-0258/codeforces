#include <bits/stdc++.h>
using namespace std;
int main() {
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
    int n ,a,b;
    cin>>n>>a>>b;
    int t=0;
    for(int i=1; i<=n; i++){
        t+=a;
    }
    int x=n%2;
     int y=b*(n/2);
      if(x==1){
       y+=a;
      }
      cout<<min(t,y)<<endl;
    }
    return 0;
}