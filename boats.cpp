#include <bits/stdc++.h>
using namespace std;

  void solve(vector<int>&temp){

     sort(temp.begin(), temp.end());
     int n= temp.size();
         int maxi=0;

       for(int i=2; i<=100; i++){
           int x=0;
           int y=n-1;
           int count=0;
           while(x<y){
             int sum=temp[x]+temp[y];
             if(sum==i){
                 count++;
                 x++;
                 y--;
             }

             else if(sum<i){
                  x++;
             }
             else{
                y--;
             }
           }
          maxi=max(maxi, count);
       }
       cout<<maxi<<endl; 
  }
int main() {
      int t;
      cin>>t;
      while(t--){
         int n;
         cin>>n;
         vector<int>temp(n);
         for(int i=0; i<n; i++){
            cin>>temp[i];
         }
         solve(temp);
      }
    return 0;
}