#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    sort(temp.begin(),temp.end());
    int count =0;
    for(int i=0; i<n; i++){
        while(temp[i]!=temp[temp.size()-1]){
             temp[i]=temp[i]+1;
              count++;
        }
    }
    cout<<count;
    return 0;
}