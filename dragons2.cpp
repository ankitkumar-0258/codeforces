#include <bits/stdc++.h>
using namespace std;
int main() {
    int s,n;
    cin>>s>>n;
    int a,b;
    while(n--){
      cin>>a>>b;
      int t=0;
      if(s>=a){ 
     s+=b;
      }
      else{
         t=-1;
         cout<<"NO"<<endl;
      }
       if(t==0){
        cout<<"YES"<<endl;
       }
    }
    return 0;
}