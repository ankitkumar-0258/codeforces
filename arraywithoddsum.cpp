#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    while(n--){
      cin>>a;
      int x;
      int y=0;
      for(int j=0; j<a; j++){
          cin>>x;
          y+=x;
      }
      if(y%2==0){
         cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    return 0;
}