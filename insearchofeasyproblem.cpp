#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string t;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    for(int i=0; i<n; i++){
        if(nums[i]==1){
             t="HARD";
             break;
        }
        else {
            t="EASY";
        }
    }
    cout<<t;
    return 0;
}