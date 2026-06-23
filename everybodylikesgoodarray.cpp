#include <bits/stdc++.h>
#include<vector>
using namespace std;
  void good(vector<int>&t){
    int n=t.size();
    int count=0;
    int x=0;
    for(int i=0; i<n-1; i++){
         if(t[i]%2!=0&&t[i+1]%2==0){
             x=0;
         }
         else if(t[i]%2==0&&t[i+1]%2!=0){
            x=0;
         }
         else{
            x=-1;
            break;
         }
    }
    if(x==0){
        cout<<0<<endl;
    }
    else{
        for(int i=0; i<n; i++){
            if(t[i]%2!=0&&t[i+1]%2!=0){
            }
        }
    }
  }
int main() {
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        vector<int>temp(a);
        for(int j=0; j<a; j++){
            cin>>temp[j];
        }
        good(temp);
    }
    return 0;
}