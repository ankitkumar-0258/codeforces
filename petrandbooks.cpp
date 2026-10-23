#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
      vector<int>temp(7);
      for(int i=0; i<7; i++){
         cin>>temp[i];
      }
          int x=0;
          int count=0;
      for(int i=0; i<=7; i++){
                if(i==7){
                     i=0;
                     count=0;
                }
                 x+=temp[i];  
                 count++;
              if(x>=n){
                break;
              }  
      }
       cout<<count<<endl;
    return 0;
}