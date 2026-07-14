#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b,c,d;
    for(int i=0; i<n; i++){
        cin>>a>>b>>c>>d;
        int x=max(a,b);
        int y=min(a,b);
        int z=max(c,d);
        int w=min(c,d);
        if(x>w&&z>y){
             cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}