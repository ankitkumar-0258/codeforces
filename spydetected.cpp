#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>&temp){
    int n=temp.size();
    map<int,int>mpp;
    for(int i=0; i<n; i++){
         mpp[temp[i]]++;
    }
    for(int i=0; i<n; i++){
        if(mpp[temp[i]]==1){
            cout<<i+1<<endl;
            
            return ;
        }
    }
}
int main() {
    int n;
    cin>>n;
    int a;
    while(n--){
    cin>>a;
    vector<int>temp(a);
    for(int j=0; j<a; j++){
         cin>>temp[j];
    }
    solve(temp);
    }
    return 0;
}