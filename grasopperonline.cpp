#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if(a%b!=0){
          cout<<1<<endl;
          cout<<a<<endl;
        }
         else{
          if((a-1)%b==0){
             cout<<2<<endl;
             cout<<a-2<<" "<<2<<endl;
          }
          else{
            cout<<2<<endl;
            cout<<a-1<<" "<<1<<endl;
          }  
    }
}
    return 0;
}