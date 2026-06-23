#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b,c,d;
    for(int i=0; i<n; i++){
      cin>>a>>b>>c>>d;
      if(a==b&&b==c&&c==d){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}