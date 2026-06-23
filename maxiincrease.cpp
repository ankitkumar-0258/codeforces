#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    int count =1;
    int maxi=1;
    for(int i=0; i<n; i++){
       if(i<temp.size()-1&&temp[i]<temp[i+1]){
        count++;
       }
       else{
        maxi=max(maxi,count);
        count=1;
       }
    }
    cout<<maxi;
    return 0;
}