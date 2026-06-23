#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    string s;
   vector<string>nums;
   for(int i=0; i<n; i++){
   
        cin>>s;
        nums.push_back(s);
    }
   int count=0;
   int t=0;
   bool x = 1;
    for (int i = 1; i < n; i++) {
    if (nums[i][0] == nums[i - 1][0]) {
        x = 0;
        break;
    }
}
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(nums[i][0]==nums[i][j]){
           t=nums[i][0];
            count++;
        }
        else {
            break;
        }
    }
   }
   if(count==n*m&&x==1){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }
  
    return 0;
}