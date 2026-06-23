#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0; i<n; i++){
         cin>>nums[i];
    }
     int left =0;
     int right =n-1;
     while(left<right){
        int mid=left+(right-left)/2;
        if(nums[mid]>=nums[left]){
            left=mid;
        }
        else{
            right=mid-1;
        }
     }
      cout<<nums[left]<<endl;
    return 0;
}