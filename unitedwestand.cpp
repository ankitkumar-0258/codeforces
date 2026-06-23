#include <bits/stdc++.h>
#include<vector>
using namespace std;
void s(vector<int>&t){
    int x=t.size();
  vector<int>hemp;
  vector<int>lemp;
  int l=0;
  for(int i=0; i<t.size()-1; i++){
         if(t[i]<t[i+1]){
            l=i;
            break;
         }
  }
  for(int i=0; i<=l; i++){
    hemp.push_back(t[i]);
  }
  for(int i=l+1; i<x; i++){
    lemp.push_back(t[i]);
  }
  cout<<hemp.size()<<" "<<lemp.size()<<endl;
  for(int i=0; i<hemp.size(); i++){
    cout<<hemp[i]<<" ";
  }
  cout<<endl;
  for(int i=0; i<lemp.size(); i++){
    cout<<lemp[i]<<" ";
  }
  cout<<endl;
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
      sort(temp.begin(),temp.end());
      int t=-1;
      for(int k=0; k<a-1; k++){
        if(temp[k]==temp[k+1]){
             t=0;
        }
        else{
            t=-1;
            break;
        }
      }
      if(t==0){
        cout<<-1<<endl;
      }
      else{
       s(temp);
    }
}
    return 0;
}
