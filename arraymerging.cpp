#include <bits/stdc++.h>
using namespace std;

 void solve(vector<int>&temp, vector<int>&hemp){
         for(int i=0; i<hemp.size(); i++){
              temp.push_back(hemp[i]);
         }

         sort(temp.begin(), temp.end());
         int count=1;
       int maxi=1;

         for(int i=0; i<temp.size(); i++){
              if(i<temp.size()-1&&temp[i]==temp[i+1]){
                  count++;
              }
              else{
                   maxi=max(maxi, count);
                   count=0;
              }
         }

         cout<<maxi<<endl;
 }
int main() {
      int n;
      cin>>n;
      while(n--){
        int a;
        cin>>a;
        vector<int>temp(a);
        vector<int>hemp(a);
        for(int i=0; i<a; i++){
             cin>>temp[i];
        }

        for(int j=0; j<a; j++){
             cin>>hemp[j];
        }

        solve(temp, hemp );
      }
    return 0;
}