#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
   for(int i=0; i<n; i++){
      cin>>a;
      long long x=0;
      long long y=0;
      int g=-1;
      vector<int>temp(a);
      for(int i=0; i<a; i++){
        cin>>temp[i];
      }
      for(int i=0; i<a; i++){
        if(temp[i]==2){
            x++;
        }
        for(int j=i; j<a-1; j++){
            if(temp[j+1]==2){
                y++;
            }
        }
        if(x==y){
           g=i+1;
           cout<<g<<endl;
           break;
        }
        y=0;
      }
      if(g==-1){
            cout<<g<<endl;
        }
   }
    return 0;
}