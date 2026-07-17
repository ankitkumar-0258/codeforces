#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<char>>&mat){
    vector<int>temp;
  for(int i=0; i<mat.size(); i++){
    for(int j=0; j<4; j++){
       if(mat[i][j]=='#'){
           temp.push_back(j+1);
           break;
       }
    }
  }
  reverse(temp.begin(),temp.end());
  for(int i=0; i<temp.size(); i++){
    cout<<temp[i]<<" ";
  }
  cout<<endl;
}
int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        vector<vector<char>>mat(a,vector<char>(4));
        for(int j=0; j<a; j++){
            for(int k=0; k<4; k++){
                cin>>mat[j][k];
            }
        }
        solve(mat);
    }
    return 0;
}