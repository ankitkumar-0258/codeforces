#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=max(a,b);
    int y=max(x,c);
    int z=max(y,d);
     if(z==a){
        cout<<z-b<<" "<<z-c<<" "<<z-d;
     }
     else if(z==b){
        cout<<z-a<<" "<<z-c<<" "<<z-d;
     }
     else if(z==c){
        cout<<z-b<<" "<<z-a<<" "<<z-d;
     }
     else if(z==d){
        cout<<z-b<<" "<<z-c<<" "<<z-a;
     }

    return 0;
}