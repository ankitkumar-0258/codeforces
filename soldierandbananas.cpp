#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    cin>>k;
    int n;
    cin>>n;
    int w;
    cin>>w;
    int t=0;
    for(int i=1; i<=w; i++){
      t=t+k*i;
    }
    if(t>n){
      t=t-n;
    }
    else {
        t=0;
    }
    cout<<t;
    return 0;
}