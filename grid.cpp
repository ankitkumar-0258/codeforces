#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<char>>&temp){
     vector<char>t;
     for(int i=0; i<temp.size(); i++){
        for(int j=0; j<3; j++){
             t.push_back(temp[i][j]);
        }
     }
     map<char,int>mpp;

     for(int i=0; i<t.size(); i++){
        mpp[t[i]]++;
     }
     int x=mpp['A'];
     int y=mpp['B'];
     int z=mpp['c'];

     if(x!=3){
        cout<<'A'<<endl;
     }
     else if(y!=3){
        cout<<'B'<<endl;
     }
     else if(z!=3){
        cout<<'C'<<endl;
     }
}
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
    vector<vector<char>>temp(3,vector<char>(3));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>temp[i][j];
        }
    }
    int j=0;
   solve(temp);
}
    
    return 0;
}