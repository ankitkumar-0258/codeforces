#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin>>n;

      vector<int>temp(n);
    for(int i=0; i<n; i++){
         cin>>temp[i];
    }

    int change=0;
     if(temp[0]==50||temp[0]==100){
         cout<<"NO"<<endl;
         return 0;
     }

       int count25=0;
       int count50=0;
     for(int i=0; i<n; i++){
         if(temp[i]==25){
             count25++;
         }
         else if(temp[i]==50){
              if(count25==0){
                  cout<<"NO"<<endl;
                  return 0;
              }

              count25--;
              count50++;
         }

        else if(temp[i]==100){
                  if(count25>0&&count50>0){
                     count25--;
                     count50--;
                  }
            else if(count25>=3){
                 count25=count25-3;
             }
             else{

                cout<<"NO"<<endl;
                return 0;
             }
        }
    }

     cout<<"YES"<<endl;
    return 0;
}