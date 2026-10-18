#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
      vector<int>temp(n);
      for(int i=0; i<n; i++){
         cin>>temp[i];
      }
      vector<int>hemp;
      for(int i=0; i<=n/2; i++){
          hemp.push_back(temp[i]);
          hemp.push_back(temp[n-1-i]);
      }

      for(int i=0; i<temp.size(); i++){
          cout<<hemp[i];
      }
    return 0;
}