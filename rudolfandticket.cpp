#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>&temp, vector<int>&hemp,int&k){
     int a=temp.size();
     int b=hemp.size();
     int count=0;
     for(int i=0; i<a; i++){
        int x=0;
        for(int j=0; j<b; j++){
           x=temp[i]+hemp[j];
            if(x<=k){
            count++;
        }
        }
       
     }

     cout<<count<<endl;
}
int main() {
     int n;
     cin>>n;
     while(n--){
         int a,b,k;
         cin>>a>>b>>k;
        vector<int>temp(a);
        vector<int>hemp(b);
        for(int i=0; i<a; i++){
             cin>>temp[i];
        }
        for(int j=0; j<b; j++){
            cin>>hemp[j];
        }
        solve(temp,hemp,k);
     }
    return 0;
}