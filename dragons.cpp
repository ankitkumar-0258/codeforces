#include <bits/stdc++.h>
using namespace std;
int main() {
    int s,n;
    cin>>s>>n; 
    int a, b;
    int x=0;
    vector<pair<int,int>>temp(n);
  int  i=0;
    while(n--){
         cin>>temp[i].first>>temp[i].second;
           i++;
    }
    sort(temp.begin(),temp.end());
    for(int i=0; i<temp.size(); i++){
         if(s>temp[i].first){
              s+=temp[i].second;
         }
         else{
            cout<<"NO"<<endl;
            return 0;
         }
    }
    cout<<"YES"<<endl;
    
    return 0;
}