#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>&t){
     int n=t.size();
     int x=0;
     for(int i=0; i<n; i++){
       x=x^t[i];
     }
     if(n%2==0){
        if(x==0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
     }
     else{
     cout<<x<<endl;
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