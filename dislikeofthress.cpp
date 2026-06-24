#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        int k=0;
        int j=1;
        int x=0;
        while(true){
          if(j%3!=0&&j%10!=3){
              x++;
              if(x==a){
                k=j;
                break;
                 
              }
          }
          j++;
        }
        cout<<k<<endl;
    }
    return 0;
}