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
        vector<int>hemp;
        hemp.push_back(temp[0]);
        for(int k=1; k<a; k++){
            if(temp[k]>=temp[k-1]){
               hemp.push_back(temp[k]);
            }
            else{
                hemp.push_back(temp[k]);
                hemp.push_back(temp[k]);
            }
        }
         cout<<hemp.size()<<endl;
        for(int l=0; l<hemp.size(); l++){
            cout<<hemp[l]<<" ";
        }
        cout<<endl;
    }
    return 0;
}