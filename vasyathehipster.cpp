#include <bits/stdc++.h>
using namespace std;
int main() {
     int r,b;
     cin>>r>>b;
     int x=min(r,b);
      int y=max(r,b);
     cout<<x<<" "<<(y-x)/2<<endl;
    return 0;
}