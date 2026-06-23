#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>temp;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        temp.push_back(abs(a));
    }
    int count=0;
    for(int i=0; i<n; i++){
        if(temp[i]==0){
            cout<<0;
            return 0;
        }
    }
    sort(temp.begin(),temp.end());
    int x=temp[0];
    
    while(x!=0){
        x=x-1;
         count++;
    }
    cout<<count;
    return 0;
}