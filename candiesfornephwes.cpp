#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    vector<int>nums(t);
    for(int i=0; i<t; i++){
        cin>>nums[i];
    }
     int i=0;
     
     int count=0;
     while(i<t){
        if(nums[i]%3==0){
            nums[i]=count;
            i++;
             
            count=0;
        }
        else{
          nums[i]=nums[i]+1; 
          count++; 
        }
     }
     for(int i=0; i<t; i++){
        cout<<nums[i]<<endl;
     }
    return 0;
}