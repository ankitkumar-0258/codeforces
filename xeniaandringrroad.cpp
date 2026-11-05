#include <bits/stdc++.h>
using namespace std;
int main() {
      int  n,m;
      cin>>n>>m;
      vector<int>temp(m);
      for(int i=0; i<m; i++){
         cin>>temp[i];

      }

      long long  time=0;
      int curr=1;
      for(int i=0; i<m; i++){
            if(temp[i]>=curr){
                time+=temp[i]-curr;
            }
          else{
             time+=(n-curr)+temp[i];
          }

          curr=temp[i];
      }

      cout<<time<<endl;
    return 0;
}