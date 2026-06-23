#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n,a;
    cin>>n>>a;
      int count=0;
      vector<int>temp(n);
      for(int i=0; i<n; i++){
        cin>>temp[i];
      }
       for(int i=0; i<temp.size(); i++){
        if(temp[a-1]<=temp[i]&&temp[i]>0){
            count++;
        }
       }
      cout<<count;
    return 0;
}