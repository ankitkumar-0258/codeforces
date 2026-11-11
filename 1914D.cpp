#include <bits/stdc++.h>
using namespace std;

  void solve(vector<long long >&temp, vector<long long>&hemp, vector<long long>&lemp){
           vector<pair<long long ,long long>>topA;

            long long ans=0;
           for(int i=0; i<temp.size(); i++){
              topA.push_back({temp[i], i });
           }

           vector<pair<long long,long long>>topB;
           for(int i=0; i<hemp.size(); i++){
              topB.push_back({hemp[i], i});
           }

           vector<pair<long long,long long>>topC;
           for(int i=0; i<lemp.size(); i++){
              topC.push_back({lemp[i], i });
           }

           sort(topA.rbegin(), topA.rend());
           sort(topB.rbegin(), topB.rend());
           sort(topC.rbegin(), topC.rend());
            

           for(int i=0; i<min(3, (int)topA.size()); i++){
                 for(int j=0; j<min(3, (int)topB.size()); j++){
                     for(int k=0; k<min(3, (int)topC.size()); k++){
                         long long x=topA[i].second;
                         long long y=topB[j].second;
                         long long z= topC[k].second;
                         if(x!=y&&y!=z&&z!=x){
                             ans=max(ans, topA[i].first+ topB[j].first+topC[k].first);
                         }
                     }
                 }
           }

           cout<<ans<<endl;
  }

int main() {
      int n;
      cin>>n;
      while(n--){
         int a;
         cin>>a;
         vector<long long>temp(a);
         vector<long long>hemp(a);
         vector<long long>lemp(a);
           
         for(int i=0; i<a; i++){
             cin>>temp[i];
              
         }
         for(int i=0; i<a; i++){
             cin>>hemp[i];

         }
         for(int i=0; i<a; i++){
             cin>>lemp[i];

          
         }

         solve(temp, hemp, lemp);
        
      }
    return 0;
}