#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x=0;
    int y=0;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int i=0;
    int j=n-1;
    int moves =0;
   while(j>=i){
       if(moves%2==0){
      if(nums[i]>=nums[j]){
        x=x+nums[i];
        i++;
        moves++;
      }
      else if(nums[j]>=nums[i]){
        x=x+nums[j];
         j--;
         moves++;
      }
    }
    else {
        if(nums[i]>=nums[j]){
            y=y+nums[i];
            i++;
            moves++;
        }
        else if(nums[j]>=nums[i]){
            y=y+nums[j];
             j--;
             moves++;
        }
    }
   }
    cout<<x<<" "<<y;
    return 0;
}