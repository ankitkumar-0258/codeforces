#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
      vector<int>temp(a);
      for(int j=0; j<a; j++){
          cin>>temp[j];
      }
      int t=0;
      for(int k=0; k<a-1; k++){
        if(temp[k]<=temp[k+1]){
           t=0;
        }
        else{
            t=-1;
            break;
        }
      }
      if(t==0||b>1){
        cout<<"YES"<<endl;
      }
      else{
       cout<<"NO"<<endl;
      }
    }
    return 0;
}