#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    int maxi=temp[0];
    int mini=temp[0];
    int count=0;
    for(int i=1; i<n; i++){
         if(maxi<temp[i]){
             maxi=temp[i];
             count++;
         }
         else if(mini>temp[i]){
            mini=temp[i];
             count++;
         }
    }
     cout<<count<<endl;
    return 0;
}