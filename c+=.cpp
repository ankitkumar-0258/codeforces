#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin>>x;
    for(int i=0; i<x; i++){
          int a,b,n;
    cin>>a>>b>>n;
    int c=0;
    int count=0;
    int y=a+b;
    while(max(a,b)<=n){
      if(a<b){
        a+=b;
      }
      else{
        b+=a;
      }
        count++;
    }
    cout<<count<<endl;
    }
    return 0;
}