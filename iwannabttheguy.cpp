#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a;
    cin>>a;
    vector<int>temp(a);
     for(int i=0; i<a; i++){
    cin>>temp[i];
  }
  int b;
  cin>>b;
  if(a==0&&b==0){
     cout<<"Oh, my keyboard!"<<endl;
     return 0;
  }
    vector<int>hemp(b);
  for(int i=0; i<b; i++){
    cin>>hemp[i];
  }
  for(int i=0; i<b; i++){
     temp.push_back(hemp[i]);
  }

 int count =1;
 sort(temp.begin(),temp.end());
  set<int>st;
  for(int i=0; i<temp.size(); i++){
     st.insert(temp[i]);
  }
   hemp.clear();
  for(auto it :st){
     hemp.push_back(it);
  }
  int maxCount=1;
    for(int i=1; i<hemp.size(); i++){
        if(hemp[i] == hemp[i-1] + 1){
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 1;
        }
    }
   if(count==n){
    cout<<"I become the guy."<<endl;
   }
   else{
    cout<<"Oh, my keyboard!"<<endl;
   }
    return 0;
}