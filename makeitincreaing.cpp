#include <bits/stdc++.h>
using namespace std;

 void solve(vector<long long>&temp){
     int n= temp.size();
     int count=0;

       for(int i=0; i<n-1;){
       
            if(temp[i]>=temp[i+1]){

                 if(temp[i+1]==0){
                cout<<-1<<endl;
                return ;
            }
                 temp[i]=temp[i]/2;
                 count++;
              if(i>0){
                 i--;
              }
            }
            else{
                i++;
            }
        }
       
     cout<<count<<endl;
 }
int main() {
     int n;
     cin>>n;
      while(n--){
         int a;
         cin>>a;
         vector<long long>temp(a);
         for(int i=0; i<a; i++){
             cin>>temp[i];
         }
        
         solve(temp);
      }
    return 0;
}