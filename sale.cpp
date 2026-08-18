#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
     vector<int>temp(n);
     for(int i=0; i<n; i++){
         cin>>temp[i];
     }
     sort(temp.begin(),temp.end());
        int x=0;
     for(int i=0; i<k ;i++){
         if(temp[i]<0){
            x+=abs(temp[i]);
         }
     }
     cout<<x<<endl;
    return 0;
}