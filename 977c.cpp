#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     int k;
     cin>>k;

     vector<long long>temp(n);
      for(int i=0; i<n; i++){
         cin>>temp[i];
      }

      sort(temp.begin(),temp.end());

        if(k==0){
            if(temp[0]-1==0){
                 cout<<-1<<endl;
            }
            else{
            cout<<temp[0]-1<<endl;
            }
            return 0 ;
        }

        if(temp[k]==temp[k-1]){
            cout<<-1<<endl;
        }
        else{
         cout<<temp[k-1];
        }
       
       
    return 0;
}