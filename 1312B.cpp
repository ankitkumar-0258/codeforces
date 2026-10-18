#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&temp){
     int n=temp.size();
     sort(temp.begin(), temp.end());
       reverse(temp.begin(), temp.end());
     for(int i=0; i<n; i++){
         cout<<temp[i]<<" ";
     }

     cout<<endl;
}
int main() {
     int n;
     cin>>n;
     while(n--){
        int a;
        cin>>a;
        vector<int>temp(a);
        for(int i=0; i<a; i++){
             cin>>temp[i];
        }

        solve(temp);
     }
    return 0;
}