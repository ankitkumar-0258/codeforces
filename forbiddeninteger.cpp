#include <bits/stdc++.h>
#include<vector>
using namespace std;
void solve(int l,int k ,int x){
    vector<int>temp;
    if(l<=k){
        if(x!=l){
        temp.push_back(l);
        }
        else if(x!=1){
         for(int i=1; i<=l; i++){
            temp.push_back(1);
         }
        }
        else if(l%2==0){
            for(int i=0; i<l/2; i++){
                temp.push_back(2);
            }
        }
    }
    else if(l>k){
         if(x!=1&&k>=1){
            for(int i=1;  i<=l; i++){
                 temp.push_back(1);
            }
         }
         else if(l%2==0&&x!=2&&k>=2){
            for(int i=1; i<=l/2; i++){
                temp.push_back(2);
            }
         }
         else if(l%2!=0&&x==1&&k>=3){
            temp.push_back(3);
          for(int i=0; i<(l-3)/2; i++){
            temp.push_back(2);
          }
         }
    }
    if(temp.size()!=0){
        cout<<"YES"<<endl;
    cout<<temp.size()<<endl;
    for(int i=0; i<temp.size(); i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}
    else{
        cout<<"NO"<<endl;
    }
}
    

int main() {
    int n;
    cin>>n;
    int l,x,k;
    for(int i=0; i<n; i++){
        cin>>l>>k>>x;
        solve(l,k,x);
    }
    return 0;
}