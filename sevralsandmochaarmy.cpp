#include <bits/stdc++.h>
using namespace std;
  int gcd(int a , int b){
     while(b!=0){
         int rem=a%b;
         a=b;
         b=rem;
     }
     return a;
  }
void solve(vector<int>&temp){
      for(int i=0; i<temp.size(); i++){
         for(int j=i+1; j<temp.size(); j++){
             if(gcd(temp[i],temp[j])<=2){
                 cout<<"YES"<<endl;
                 return  ;
             }
         }
      }
      cout<<"NO"<<endl;
}
int main(){
    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        vector<int>temp(a);
        for(int j=0; j<a; j++){
            cin>>temp[j];
        }
        solve(temp);
    }
    return 0;
}