#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>&temp){
       int n=temp.size();
       sort(temp.begin(),temp.end());
       int x=0;
       if(n>1){
         for(int i=1; i<n; i++){
            x+=temp[i]-temp[0];
         }
       }
       cout<<x<<endl;
}  
int main() {
     int n;
     cin>>n;
     int a;
     while(n--){
       cin>>a;
       vector<int>temp(a);
       for(int i=0; i<a; i++){
         cin>>temp[i];
       }
        solve(temp);
     }
    return 0;
}