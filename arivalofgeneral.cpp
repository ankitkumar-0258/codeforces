#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
      vector<int>nums(n);
      for(int i=0; i<n; i++){
         cin>>nums[i];

      }
      int mini=INT_MAX;
      int maxi=INT_MIN;
      int x=0;
      int y=0;
      for(int i=0; i<n; i++){
         if(nums[i]<mini){
              mini=nums[i];
              x=i+1; 
         }
         if(nums[i]>maxi){
            maxi=nums[i];
            y=i+1;
         }
      }
      int z=abs(abs(y-1)+abs(x-n));
      cout<<z<<endl;
    return 0;
}