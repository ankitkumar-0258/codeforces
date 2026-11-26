#include <bits/stdc++.h>
using namespace std;
   void solve(vector<int>temp, int x){
        int evenc=0;
        int oddc=0;
       for(int i=0; i<temp.size(); i++){
          if(temp[i]%2==0){
              evenc++;
          }

          else{
             oddc++;
          }
        }
        
        for(int i=1; i<=min(oddc, x); i+=2){
             if(x-i<=evenc){
                cout<<"Yes"<<endl;

                return ;
             }
        }


        cout<<"No"<<endl;

   }
int main() {
      int t;
      cin>>t;
      while(t--){
         int n, x;
         cin>>n>>x;
         vector<int>temp(n);
         for(int i=0; i<n; i++){
             cin>>temp[i];
         }
         solve(temp , x);
      }
    return 0;
}