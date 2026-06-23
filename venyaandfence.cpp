#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n,a;
    cin>>n>>a;
    int count=0;
     vector<int>temp(n);
     for(int i=0; i<n; i++){
        cin>>temp[i];
     }
     for(int i=0; i<n; i++){
        if(temp[i]>a){
         count=count+2;
        }
        else if(temp[i]<=a){
            count=count+1;
        }
     }
     cout<<count<<endl;
   
    return 0;
}