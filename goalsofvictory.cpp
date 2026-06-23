#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
           cin>>a;
           int x=0;
     vector<int>temp(a-1);
     for(int i=0; i<a-1; i++){
        cin>>temp[i];
     }
     for(int i=0; i<a-1; i++){
         x=x+temp[i]; 
     }
     
      cout<<-(x)<<endl;
    }
    return 0;
}