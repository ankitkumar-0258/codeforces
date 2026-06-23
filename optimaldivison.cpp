#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
     int a,b,c;
     for(int i=0; i<n; i++){
        int x=0;
        int y=0;
        cin>>a>>b>>c;
        if(a>=3){
        if(b*3>c){
            x=a%3;
          a=(a/3)*c;
          if(x==0){
            cout<<a<<endl;
            continue;
          }
          if((b*x<c)){
            x=a+x*b;
          }
          else{
            x=a+c;
          }
          cout<<x<<endl;
        }
        else{
            x=a*b;
            cout<<x<<endl;
        }
    }
    else{
       x=a*b;
      if(x<c){
        cout<<x<<endl;
      }
      else{
        cout<<c<<endl;
      }
    }
     }
    return 0;
}