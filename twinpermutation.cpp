#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        vector<int>temp(a);
        for(int j=0; j<a; j++){
            cin>>temp[j];
        }
        int x=a;
       for(int k=0; k<a; k++){
         temp[k]=x+1-temp[k];
       }
       for(int l=0; l<a; l++){
         cout<<temp[l]<<" ";
         }
       cout<<endl;
    }
    return 0;
}