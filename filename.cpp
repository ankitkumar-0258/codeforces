#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;  
      cin>>n;
      string s;
      cin>>s;
      int count=0;

      int maxi=INT_MIN;
      int x=0;
      for(int i=0; i<=s.size(); i++){
          if(i<s.size()&&s[i]=='x'){
             count++;
          }
          else{
            if(count>=3){
               x+=count-2;
            }
             count=0;
          }
      }
      cout<<x<<endl;
    return 0;
}