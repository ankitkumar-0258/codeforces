#include <bits/stdc++.h>
using namespace std;
int main() {
      int n,m;
      cin>>n>>m;

       string s;
 
       if(n==1&&m==0){
         cout<<0<<" "<<0<<endl;

         return 0;
       }
        if(m==0||m>9*n){
            cout<<-1<<" "<<-1<<endl;
            return 0;
        }
       int y=m;
       for(int i=0; i<n; i++){
           if(m>=9){
             s+='9';
             m=m-9;
             
           }
           else{
             s+=to_string(m);
            
             m=0;
           }
       }
         int x=y-1;

         string l;
        for(int i=0; i<n-1; i++){
              if(x>=9){
                 l+='9';
                 x=x-9;

              }
              else{
                 l+=to_string(x);
                 x=0;
              }
        }
        l+=to_string(x+1);

        reverse(l.begin(), l.end());
        cout<<l<<" "<<s<<endl;

    return 0;
}