#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
     vector<int>temp(n);
     for(int i=0; i<n; i++){
         cin>>temp[i];
     }
     int ocount=0;
     int ecount=0;
     int x=0;
     int y=0;
     for(int i=0; i<n; i++){
         if(temp[i]%2!=0){
            ocount++;
            x=i+1;
         }
         else{
            ecount++;
            y=i+1;
         }
     }
     if(ocount==1){
         cout<<x<<endl;
     }
     else if(ecount==1){
        cout<<y<<endl;
     }
    return 0;
}