#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
    vector<vector<char>>t(10,vector<char>(10));
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin>>t[i][j];
        }
    }
    int x=0;
    int y=0;
    int count=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(t[i][j]=='X'){
              x=i;
              y=j;
            
          if((x>=4&&x<=5)&&(y>=4&&y<=5)){
             count=count+5;
          }
          else if((x>=3&&x<=6)&&(y>=3&&y<=6)){
            count=count+4;
          }
          else if ((x>=2&&x<=7)&&(y>=2&&y<=7)){
            count=count+3;
          }
          else if((x>=1&&x<=8)&&(y>=1&&y<=8)){
             count=count+2;
          }
          else if((x>=0&&x<=9)&&(y>=0&&y<=9)){
            count=count+1;
          }
        }
    }
    }
    cout<<count<<endl;
    count=0;
}
    return 0;
}