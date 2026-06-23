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
    int n=0;
    for(int i=0; i<t; i++){
         n=n+nums[i];
    }
    for(int i=0; i<n; i++){
          cout<<"CDC"<<endl;
    }
    return 0;
}