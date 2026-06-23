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
     int left=0;
     int right=n-1;
     int mid=0;
     while(left<right){
        mid=left+(right-left)/2;
        if(nums[mid]>nums[right]){
        left=mid+1;
        }
        else if(nums[mid]<nums[right]){
            right=mid;
        }
        else{
            right--;
        }
     }
     cout<<nums[left]<<endl;
    return 0;
}