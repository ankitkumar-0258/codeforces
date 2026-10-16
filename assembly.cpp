#include <bits/stdc++.h>
using namespace std;

void solve( vector<long long>&temp, int x){
     int n=temp.size();
     sort(temp.begin(),temp.end());
       vector<long long >hemp(x);
       int y = 0;
     int step =x - 1;
     
     
     for(int i=0; i<x-1; i++){
         hemp[i] = temp[y];
         y+= step; 
         step--;      
     }

     hemp[x-1]=1000000000;

     for(int i=0; i<x; i++){
         cout<<hemp[i]<<" ";
     }

     cout<<endl;
    
}
int main() {
      int n;
      cin>>n;
      while(n--){
        int a;
        cin>>a;
        vector<long long>temp(a*(a-1)/2);
        for(int i=0; i<a*(a-1)/2; i++){
             cin>>temp[i];
        }

        solve(temp, a);
      }
    return 0;
}