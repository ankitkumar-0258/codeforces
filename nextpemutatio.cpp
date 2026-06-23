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
   for(int i=0; i<a; i++){
     temp[i]=a+1-temp[i];
   }
    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}