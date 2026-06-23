#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>temp(n+1);
      int a;

    for(int i=1; i<=n; i++){
       cin>>a;
       temp[a]=i;
    }
    for(int i=1; i<temp.size(); i++){
        cout<<temp[i]<<" ";
    }
    
    return 0;
}