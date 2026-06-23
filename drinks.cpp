#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
     int n;
     cin>>n;
     vector<double>nums(n);
     for(int i=0; i<n; i++){
        cin>>nums[i];
     }
   long double x=0;
     for(int i=0; i<n; i++){
        x=x+nums[i];
     }
  long double y =double(x/n);
     cout<<y;
   return 0;
}