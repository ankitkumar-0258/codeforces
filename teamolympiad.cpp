#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
      vector<int>temp(n);
      for(int i=0; i<n; i++){
     cin>>temp[i];
      }
      vector<int>one,two,three;
      for(int i=0; i<n; i++){
        if(temp[i]==1){
          one.push_back(i+1);
        }
        else if(temp[i]==2){
          two.push_back(i+1);
        }
        else {
          three.push_back(i+1);
        }
      }
      int l=min({one.size(),two.size(),three.size()});
      cout<<l<<endl;
      for(int i=0; i<l; i++){
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
      }
    return 0;
}
