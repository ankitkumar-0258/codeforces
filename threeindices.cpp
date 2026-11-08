#include <bits/stdc++.h>
using namespace std;

   void solve(vector<int>nums){

      int n=nums.size();
       int x=0;
       int y=0;
       int z=0;
      for(int i=0; i<n-2; i++){
         if(nums[i]<nums[i+1]&&nums[i+1]>nums[i+2]){
              x=i+1, y=i+1+1, z=i+2+1;
              break;
         }
      }

   

   if(x==0&&y==0&&z==0){
      cout<<"NO"<<endl;
   }
   else{
      cout<<"YES"<<endl;
      cout<<x<<" "<<y<<" "<<z<<endl;
   }
}
int main() {
     int n;
     cin>>n;
     while(n--){
         int a;
         cin>>a;
         vector<int>nums(a);
         for(int i=0; i<a; i++){
               cin>>nums[i];
         }

         solve(nums);
     }
    return 0;
}