#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    vector<vector<int>>mat(5,vector<int>(5));
    int count=0;
    int x=0;
    int y=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(mat[i][j]==1){
                x=i;
                y=j;
                break;
            }
        }
    }
    if(x==3){
        x=1;
    }
    if(x==4){
       x=0;
    }
     if(y>2){
         y=4-y;
     }
    count=count+2-x;
    count=count+2-y;
   cout<<count<<endl;
   
    return 0;
}