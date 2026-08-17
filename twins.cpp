#include <bits/stdc++.h>
using namespace std;
int main() {
       int a;
       cin>>a;
      int x=0;  
      int y=0;
      vector<int>temp(a);
      for(int i=0; i<a; i++){
         cin>>temp[i];
      }
        int count=0;
      sort(temp.begin(),temp.end());
       for(int i=0; i<temp.size(); i++){
         x+=temp[i];

       }

       for(int i=temp.size()-1; i>=0; i--){
         y+=temp[i];
          count++;
          if(y>x-y){
             break;
          }
         
       }
       cout<<count<<endl;
      return 0;
}