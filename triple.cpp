#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    int x=-1;
    for(int i=0; i<n; i++){
         cin>>a;
         vector<int>temp(a);
         for(int i=0; i<a; i++){
            cin>>temp[i];
         }
         map<int,int>mpp;
         for(int i=0; i<a; i++){
            mpp[temp[i]]++;
         }
         for(auto it :mpp){
             if(it.second>=3){
             x=it.first;
                 break;
             }
         }
         mpp.clear();
         temp.clear();
         cout<<x<<endl;
         x=-1;
    }
    return 0;
}