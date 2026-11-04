#include <bits/stdc++.h>
using namespace std;
int main() {
       int n , m;
       cin>>n>>m;
       vector<long long >temp(n);
       vector<long long>hemp(m);
       for(int i=0; i<n; i++){
         cin>>temp[i];
       }
       for(int i=0; i<m; i++){
         cin>>hemp[i];
       }
         vector<long long>ans;
         for(int i=0; i<m; i++){
             int count=0;
          for(int j=0; j<n; j++){
              if(hemp[i]<=temp[j]){
                count++;
              }
          }
          ans.push_back(count);
         }
        for(int i=0; i<ans.size(); i++){
             cout<<ans[i]<<" ";
        }

    return 0;
}