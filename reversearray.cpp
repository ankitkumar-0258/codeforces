#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
     for(int i=0; i<n; i++){
        cin>>nums[i];
     }
     int k;
     cin>>k;
     int x=n%k;
     if(k>n){
        reverse(nums.begin(),nums.begin()+n);
     }
     else{
     for(int i=0; i<n-x; i=i+k){
      reverse(nums.begin()+i,nums.begin()+k+i);
     }
     for(int i=n-x-1; i<n; i++){
        reverse(nums.begin()+n-x,nums.begin()+n);
     }
    }
       for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
     }
    return 0;
}