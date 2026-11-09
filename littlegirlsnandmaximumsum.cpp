#include <bits/stdc++.h>
using namespace std;
int main() {
      int n, m;
      cin>>n>>m;
      vector<long long>nums(n);
      for(int i=0; i<n; i++){
        cin>>nums[i];
      }
       vector<long long>mpp(n,0);

       while(m--){
          int a, b;
          cin>>a>>b;
          for(int i=a-1; i<=b-1; i++){
               mpp[i]++;
          }
       }
      sort(mpp.begin(), mpp.end());
      sort(nums.begin(), nums.end());
      int sum=0;
      for(int i=0; i<n; i++){
            sum+=1LL*nums[i]*mpp[i];
      }

      cout<<sum<<endl;

    return 0;
}