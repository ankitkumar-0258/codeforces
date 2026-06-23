#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
   cin>>n;
   for(int i=0; i<n; i++){
     string t;
      cin>>t;
      int x=(t[0]-48+t[1]-48+t[2]-48)-(t[3]-48+t[4]-48+t[5]-48);
      if(x==0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
   }

    return 0;
}