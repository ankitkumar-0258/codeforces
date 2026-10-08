#include <bits/stdc++.h>
using namespace std;
int main() {
     int n , m;
     cin>>n>>m;

     vector<vector<char>>mat(n,vector<char>(m));
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
     }
     bool iscolor=false;
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
             if(mat[i][j]=='C'||mat[i][j]=='M'||mat[i][j]=='Y'){
                   iscolor=true;
                   break;
             }
        }
     }

     if(iscolor){
        cout<<"#Color"<<endl;
     }
     else{
        cout<<"#Black&White"<<endl;
     }
    return 0;
}