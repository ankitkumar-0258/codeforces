#include <bits/stdc++.h>
using namespace std;
void solve(long long  w,long long x,long long  y,long long  z){
    long long  count=0;
    if(z<x){
        cout<<-1<<endl;
        return ;
    }
         count=z-x;
         w=w+count;
      if(w==y){
        cout<<count<<endl;
      }
      else if(w>y){
        count=count+w-y;
        cout<<count<<endl;
      }
      else{
        cout<<-1<<endl;
      }
}
int main() {
    int n;
    cin>>n;
    long long  a,b,c,d;
    while(n--){
        cin>>a>>b>>c>>d;
        if(a==c&&b==d){
            cout<<0<<endl;
        }
        else{
            solve(a,b,c,d);
        }
    }

    return 0;
}