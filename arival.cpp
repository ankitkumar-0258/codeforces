#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     vector<int>nums(n);
     for(int i=0; i<n; i++){
        cin>>nums[i];
     }

     int x=0;
     int mini=INT_MAX;
     int maxi=INT_MIN;
     int y=0;
     for(int i=0; i<n; i++){
           if(nums[i]>maxi){
               maxi=nums[i];
               x=i;
           }

     }
     for(int i=0; i<n; i++){
        if(nums[i]<=mini){
            mini=nums[i];
            y=i;
        }
     }
      if(y>x){
         cout<<x+(n-1-y)<<endl;
      }
      else{
        cout<<x+(n-1-y)-1<<endl;
      }
    return 0;
}