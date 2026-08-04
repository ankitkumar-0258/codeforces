#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
      int c;
      cin>>c;
      vector<int>temp(n);
       for(int i=0; i<n; i++){
         cin>>temp[i];
       }
       int count=0;
       int t=c;
       int x=0;
       for(int i=0; i<n; i++){
         if(temp[i]>t){
              x+=2*count;
               t=c;
         }
          x++;
         t=t-temp[i];
         count++;

       }
       cout<<x<<endl;
    return 0;
}