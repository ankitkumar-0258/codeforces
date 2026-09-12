#include <bits/stdc++.h>
using namespace std;

void solve(vector<long long>&temp){
    long long  n=temp.size();

     for(int i=0; i<n; i++){
         
            if(temp[i]==1){
                temp[i]=temp[i]+1;
            }
     }
     for(int i=0; i<n-1; i++){
            if(temp[i+1]%temp[i]==0){
                temp[i+1]=temp[i+1]+1;
            }
     }
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
        vector<long long>temp(a);
        for(int i=0; i<a; i++){
            cin>>temp[i];
        }
        solve(temp);
    }
    return 0;
}