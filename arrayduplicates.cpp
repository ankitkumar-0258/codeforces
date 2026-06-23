#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int,int>mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    vector<int>temp;
   for(auto it:mpp){
    if(it.second>=2){
        temp.push_back(it.first);
    }
   }
   for(int i=0; i<temp.size(); i++){
    cout<<temp[i]<<" ";
   }
    return 0;
}