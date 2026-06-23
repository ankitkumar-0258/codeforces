#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<int>>mat(n,vector<int>(2));
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>mat[i][j];
        }
    }
    int x=0;
    int maxi=0;
   for(int i=0; i<n; i++){
        x=x+mat[i][1]-mat[i][0];
        maxi=max(x,maxi);
   }
       cout<<maxi<<endl;
    return 0;
}