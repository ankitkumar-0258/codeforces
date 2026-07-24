#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>&temp){
    int n=temp.size();
    int count=0;
    int bount=0;
    for(int i=0; i<n; i++){
         if(temp[i]==-1){
             count++;
         }
         else if(temp[i]==0){
             bount++;
         }
    }
    int x=0;
    if(count%2==1){
       x+=2;
    }
    x+=bount;
    cout<<x<<endl;
}
int main() {
    int n;
    cin>>n;
     int a;
     while(n--){
         cin>>a;
         vector<int>temp(a);
         for(int i=0; i<a; i++){
            cin>>temp[i];
         }
         solve(temp);
     }
    return 0;
}