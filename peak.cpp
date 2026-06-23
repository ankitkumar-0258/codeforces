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
    for(int i=0; i<n; i++){
        if(nums[i]<nums[i+1]&&nums[i+1]>nums[i+2]){
            cout<<"true";
            break;
        }
    }
    return 0;
}