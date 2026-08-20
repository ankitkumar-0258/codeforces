#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
     long long t;
     cin>>n>>t;
     vector<int>temp(n);
    for(int i=0; i<n; i++){
         cin>>temp[i];
    }
    long long count=0;
    for(int i=0; i<n; i++){
    
         t-=temp[i];
         if(t<0){
            t=t+temp[i];
         }
         else if(t>=0){
             count++;
         }
       
    }
    cout<<count<<endl;
    
    return 0;
}