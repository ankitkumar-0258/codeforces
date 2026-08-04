#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b,c;
    while(n--){
         cin>>a>>b>>c;
         int count=0;
         if(a==b||b==c||c==a){
             cout<<0<<endl;
         }
         else{
          while(true){
            int maxi=max({a,b,c});
            int mini=min({a,b,c});
             if(a==b||b==c||c==a){
                 break;
             }
              if(maxi==a){
                 a--;
                 
             }
              if(maxi==b){
                 b--;
                 
             }
              if(maxi==c){
                 c--;
             }
              if(mini==a){
                 a++;
             }
              if(mini==b){
                 b++;
             }
              if(mini==c){
                 c++;
             }
             count++;
          }
          cout<<count<<endl;
         }


    }
    return 0;
}