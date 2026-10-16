#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;
      vector<long long >temp(n);
      vector<long long >hemp(n-1);
      vector<long long >lemp(n-2);
      for(int i=0; i<n; i++){
         cin>>temp[i];
      }
      for(int i=0; i<n-1; i++){
         cin>>hemp[i];
      }

      for(int i=0; i<n-2; i++){
         cin>>lemp[i];
      }
       long long x=0;
       long long y=0;

       sort(temp.begin(), temp.end());
       sort(hemp.begin(), hemp.end());
       sort(lemp.begin(),lemp.end());
         

       bool isfound1=false;
        for(int i=0; i<n-1; i++){
             if(temp[i]!=hemp[i]){
                 x=temp[i];
                 isfound1=true;
                 break;
             }
        }
        if(!isfound1){
             x=temp[n-1];
        }
          bool isfound2=false;
        for(int i=0; i<n-2; i++){
             if(hemp[i]!=lemp[i]){
              y=hemp[i];
              isfound2=true;
              break;
             }

        }

        if(!isfound2){
            y=hemp[n-2];
        }

       cout<<x<<endl;
       cout<<y<<endl;

    return 0;
}