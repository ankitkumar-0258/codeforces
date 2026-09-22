#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& temp){
    sort(temp.begin(),temp.end());
   int n=temp.size();
    int x=0;
   for(int i=0; i<n-1; i++){
       if(abs(temp[i]-temp[i+1])>1){
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
      while(n--){
        int a;
        cin>>a;
        vector<int>temp(a);
        for(int i=0; i<a; i++){
             cin>>temp[i];
        }
        solve(temp);
      }
    return 0;
}