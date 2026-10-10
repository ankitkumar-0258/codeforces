#include <bits/stdc++.h>
using namespace std;

  void solve(vector<int>&temp, int b ){
     int n=temp.size();
     int x=0;
     int count=0;
     for(int i=0; i<n; i++){
         if(temp[i]>=b){
             x+=temp[i];
         }
         else if(temp[i]==0){
            if(x>0){
             x=x-1;
              count++;
            }
         }
     }
    cout<<count<<endl;
  }
int main() {
     int n;
     cin>>n;
     while(n--){
        int a , b;
        cin>>a>>b;
        vector<int>temp(a);
        for(int i=0; i<a; i++){
             cin>>temp[i];
        }
        solve(temp, b);
     }
    return 0;
}