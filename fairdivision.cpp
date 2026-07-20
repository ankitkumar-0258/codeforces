#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>&temp){
    int n=temp.size();
    int t=0;
    if(n==1&&temp[0]==2){
           cout<<"YES"<<endl;
    }
   else if(n%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=0; i<n; i++){
             t+=temp[i];
        }
        if(t%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

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
    solve(temp);
}
    return 0;
}