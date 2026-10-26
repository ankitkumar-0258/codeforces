#include <bits/stdc++.h>
using namespace std;

 void solve(vector<int>&temp, int s, int x){
       int n=temp.size();
         int sum=0;
       for(int i=0; i<n; i++){
          sum+=temp[i];    
       }
         if(sum==s){
             cout<<"YES"<<endl;
         }

          else if(sum<s){
              while(sum<=s){
                 sum+=x;
              }

              if(sum==s){
                 cout<<"YES"<<endl;
              }
              else{
                cout<<"NO"<<endl;
              }
          }
         else if(sum>s){
            cout<<"NO"<<endl;
        }
        
 }
int main() {
      int t;
      cin>>t;
      while(t--){
         int n, s, x;
         cin>>n>>s>>x;
         vector<int>temp(n);
         for(int i=0; i<n; i++){
             cin>>temp[i];
         }

        solve(temp, s, x);
      }

    return 0;
}