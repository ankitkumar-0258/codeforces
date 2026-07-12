#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<char>>&mat){
   int n= mat.size();
       string s ;
     for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
       if(mat[i][j]!='.'){
         s=s+mat[i][j];
       }
    }
 }
 cout<<s<<endl;
}
int main() {
    int n;
    cin>>n;
    for(int k=0; k<n; k++){
     vector<vector<char>>mat(8,vector<char>(8));
       for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>>mat[i][j];
        }
       }
       solve(mat);
    }
    
    return 0;
}