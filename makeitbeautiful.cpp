#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>&temp){
    int n=temp.size();
    sort(temp.begin(),temp.end());
    vector<int>t;
         for(int i=0; i<n/2; i++){
            t.push_back(temp[i]);         
            t.push_back(temp[n-1-i]);
         }    
          if(n % 2 == 1){                  
            t.push_back(temp[n/2]);
            }

     cout<<"YES"<<endl;
    for(int i=0; i<t.size(); i++){
        cout<<t[i]<<" ";
    }
    cout<<endl;
}
int main() {
     int n;
     cin>>n;
     int a;
     while(n--){
       cin>>a;
       vector<int>temp(a);
       for(int j=0; j<a; j++){
        cin>>temp[j];
       }
       int t=0;
       for(int k=0; k<a-1; k++){
         if(temp[k]!=temp[k+1]){
              t=-1;
              break;
         }
       }
       if(t==0){
        cout<<"NO"<<endl;
       }
       else{
        solve(temp);
       }
     }
    return 0;
}