#include <bits/stdc++.h>
using namespace std;


 void solve( vector<int>&temp){
     int n= temp.size();

        long long count=0;
        map<int , long long>mpp;
        for(int i=0; i<n; i++){
            int x=temp[i]-i;
            count+=mpp[x];
            mpp[x]++;
        }

     cout<<count<<endl;
 }
int main() {
      int t;
      cin>>t;
      while(t--){
        int n;
        cin>>n;
        vector<int>temp(n);
        for(int i=0; i<n; i++){
         cin>>temp[i];
        }

        solve(temp);
      }
    return 0;
}