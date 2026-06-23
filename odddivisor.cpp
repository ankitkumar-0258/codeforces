#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long x;
    for(int i=0; i<n; i++){
        int r=0;
        int y=0;
        cin>>x;
        long long h=x;
        r=x%10;
        if(r%2!=0&&x>1){
            cout<<"YES"<<endl;
            continue;
        }
        else if(r%2==0){
            int u=-1;
          long long g=h/2;
          bool isf=false;
          while(g>1){
             if(g%2!=0){
                cout<<"YES"<<endl;
                u=0;
               break;
             }
                g=g/2;
          }
          if(u!=0){
          cout<<"NO"<<endl;
          }
        }
    }
    return 0;
}