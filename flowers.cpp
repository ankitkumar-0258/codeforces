#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     if(n==0){
        cout<<0<<endl;
        return 0;
     }
     vector<int>temp(12);
     for(int i=0; i<12; i++){
         cin>>temp[i];
     }

     sort(temp.begin(),temp.end());
      int x=0;
      int count=0;
        while(x<n&&count<=11){
             x+=temp[11-count];
             count++;
        }
      if(x>=n){
         cout<<count<<endl;
      }
      else{
         cout<<-1<<endl;
      }
    return 0;
}