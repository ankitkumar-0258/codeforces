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
    int count=0;
    int t=0;
    sort(nums.begin(),nums.end());
    for(int i=0; i<n; i++){
        if(nums[i]<nums[i+1]&&i<n-1){
              count++;
        }
        if(count==1){
            t=nums[i+1];
            break;
        }
    }
    if(count==0){
        cout<<"NO";
    }
    else{
        cout<<t;
    }
    
    return 0;
}