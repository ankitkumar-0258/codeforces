#include <bits/stdc++.h>
using namespace std;
int main() {
     int n , m;
     cin>>n>>m;
     vector<int>nums(n);
     for(int i=0; i<n; i++){
         cin>>nums[i];
     }
     queue<pair<int,int>>q;
     for(int i=0; i<n; i++){
        q.push({nums[i], i+1});

     }

     while(q.size()>1){
         int choc=q.front().first;
         int child=q.front().second;

         q.pop();
         if(choc>m){
            q.push({choc-m, child});
         }
     }

     cout<<q.front().second<<endl;
    return 0;
}