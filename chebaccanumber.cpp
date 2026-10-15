#include <bits/stdc++.h>
using namespace std;
int main() {
      string s;
      cin>>s;
      for(int i=0; i<s.size(); i++){
         int x= (s[i]-48);
         if(x>=5){
            x=9-x;
             if(i==0&&x==0){
                continue;
             }
             else{
           s[i]=x+48;
             }
            
         }
      }
       
      cout<<s<<endl;
    return 0;
}