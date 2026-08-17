#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     vector<pair<int,int>>temp(n);
     for(int i=0; i<n;  i++){
         cin>>temp[i].first;
     }
     for(int i=0; i<n;  i++){
         cin>>temp[i].second;
     }
      int x=-1;
     sort(temp.begin(),temp.end());
    for(int i=0; i<n-1; i++){
         if(temp[i].first<temp[i+1].first&&temp[i].second>temp[i+1].second){
                x=0;
                break;
         }
    }
    if(x==0){
        cout<<"Happy Alex"<<endl;
    }
     else{
        cout<<"Poor Alex"<<endl;
     }
    return 0;
}