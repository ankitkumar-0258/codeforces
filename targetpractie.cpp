#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count=0;
    vector<vector<int>>matrix(10,vector<int>(10));
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin>>matrix[i][j];
        }
    }
    int x=0;
    for(int i=0; i<5; i++){
         x++;
        for(int j=0; j<5; j++){
            if(matrix[i][j]=='X'){
                count=count+x;
            }

        }
    }
    int y=0;
    for(int i=5; i<10; i++){
        y++;
        for(int j=5; j<10; j++){
            if(matrix[i][j]=='X'){
                count=count+y;
            }
        }
    }
    return 0;
}