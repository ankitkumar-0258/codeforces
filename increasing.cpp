#include <bits/stdc++.h>
using namespace std;
void solve(vector<long long>&t){
     int n=t.size();
    map<int,int>mpp;
    for(int i=0; i<t.size(); i++){
         mpp[t[i]]++;
    }
    int x=0;
    for(int i=0; i<t.size(); i++){
         if(mpp[t[i]]>1){
             x=-1;
             break;
         }
    }
    if(x==-1){
           cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main() {
     int n;
     cin>>n;
     long long  a;
     for(int i=0; i<n; i++){
         cin>>a;
         vector<long long >temp(a);
         for(int j=0; j<a; j++){
             cin>>temp[j];
         }
         solve(temp);
     }
    return 0;
}